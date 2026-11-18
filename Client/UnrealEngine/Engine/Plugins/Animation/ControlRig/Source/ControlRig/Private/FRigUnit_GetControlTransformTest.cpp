// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4a3b00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_GetControlTransformTest::GetTestFlags(FRigUnit_GetControlTransformTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4a3b10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetControlTransformTest::IsStressTest(FRigUnit_GetControlTransformTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4a3b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_GetControlTransformTest::GetRequiredDeviceNum(FRigUnit_GetControlTransformTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4a3b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetControlTransformTest::GetTestSourceFileName
          (FRigUnit_GetControlTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_GetControlTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4a3b60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_GetControlTransformTest::GetTestSourceFileLine(FRigUnit_GetControlTransformTest *this)

{
  return 0xd6;
}

// GetTests @ 14a4a3bb0

/* WARNING: Removing unreachable block (ram,0x00014a4a3c9d) */
/* WARNING: Removing unreachable block (ram,0x00014a4a3d68) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlTransformTest::GetTests
          (FRigUnit_GetControlTransformTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_GetControlTransform");
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

// RunTest @ 14a4a3d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetControlTransformTest::RunTest(FRigUnit_GetControlTransformTest *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined3 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  URigHierarchy *this_00;
  UClass *pUVar12;
  FRigUnit_GetControlTransform *pFVar13;
  undefined1 auStack_198 [32];
  FRigUnit_GetControlTransform local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar12 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar12->_padding_)) goto LAB_14a4a3dfc;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4a3dfc:
  URigHierarchy::Reset(this_00);
  pFVar13 = FRigUnit_GetControlTransform::FRigUnit_GetControlTransform(&local_178);
  (this->Unit).Control = pFVar13->Control;
  (this->Unit).Space = pFVar13->Space;
  dVar7 = (pFVar13->Transform).Rotation.XY.m128d_f64[1];
  (this->Unit).Transform.Rotation.XY.m128d_f64[0] = (pFVar13->Transform).Rotation.XY.m128d_f64[0];
  (this->Unit).Transform.Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Transform).Rotation.ZW.m128d_f64[1];
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (pFVar13->Transform).Rotation.ZW.m128d_f64[0];
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Transform).Translation.XY.m128d_f64[1];
  (this->Unit).Transform.Translation.XY.m128d_f64[0] =
       (pFVar13->Transform).Translation.XY.m128d_f64[0];
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Transform).Translation.ZW.m128d_f64[1];
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] =
       (pFVar13->Transform).Translation.ZW.m128d_f64[0];
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Transform).Scale3D.XY.m128d_f64[1];
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (pFVar13->Transform).Scale3D.XY.m128d_f64[0];
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Unit).Transform.Scale3D.ZW.m128d_f64[0] = (pFVar13->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Unit).Transform.Scale3D.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Minimum).Rotation.XY.m128d_f64[1];
  (this->Unit).Minimum.Rotation.XY.m128d_f64[0] = (pFVar13->Minimum).Rotation.XY.m128d_f64[0];
  (this->Unit).Minimum.Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Minimum).Rotation.ZW.m128d_f64[1];
  (this->Unit).Minimum.Rotation.ZW.m128d_f64[0] = (pFVar13->Minimum).Rotation.ZW.m128d_f64[0];
  (this->Unit).Minimum.Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Minimum).Translation.XY.m128d_f64[1];
  (this->Unit).Minimum.Translation.XY.m128d_f64[0] = (pFVar13->Minimum).Translation.XY.m128d_f64[0];
  (this->Unit).Minimum.Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Minimum).Translation.ZW.m128d_f64[1];
  (this->Unit).Minimum.Translation.ZW.m128d_f64[0] = (pFVar13->Minimum).Translation.ZW.m128d_f64[0];
  (this->Unit).Minimum.Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Minimum).Scale3D.XY.m128d_f64[1];
  (this->Unit).Minimum.Scale3D.XY.m128d_f64[0] = (pFVar13->Minimum).Scale3D.XY.m128d_f64[0];
  (this->Unit).Minimum.Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Minimum).Scale3D.ZW.m128d_f64[1];
  (this->Unit).Minimum.Scale3D.ZW.m128d_f64[0] = (pFVar13->Minimum).Scale3D.ZW.m128d_f64[0];
  (this->Unit).Minimum.Scale3D.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Maximum).Rotation.XY.m128d_f64[1];
  (this->Unit).Maximum.Rotation.XY.m128d_f64[0] = (pFVar13->Maximum).Rotation.XY.m128d_f64[0];
  (this->Unit).Maximum.Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Maximum).Rotation.ZW.m128d_f64[1];
  (this->Unit).Maximum.Rotation.ZW.m128d_f64[0] = (pFVar13->Maximum).Rotation.ZW.m128d_f64[0];
  (this->Unit).Maximum.Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Maximum).Translation.XY.m128d_f64[1];
  (this->Unit).Maximum.Translation.XY.m128d_f64[0] = (pFVar13->Maximum).Translation.XY.m128d_f64[0];
  (this->Unit).Maximum.Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Maximum).Translation.ZW.m128d_f64[1];
  (this->Unit).Maximum.Translation.ZW.m128d_f64[0] = (pFVar13->Maximum).Translation.ZW.m128d_f64[0];
  (this->Unit).Maximum.Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Maximum).Scale3D.XY.m128d_f64[1];
  (this->Unit).Maximum.Scale3D.XY.m128d_f64[0] = (pFVar13->Maximum).Scale3D.XY.m128d_f64[0];
  (this->Unit).Maximum.Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar13->Maximum).Scale3D.ZW.m128d_f64[1];
  (this->Unit).Maximum.Scale3D.ZW.m128d_f64[0] = (pFVar13->Maximum).Scale3D.ZW.m128d_f64[0];
  (this->Unit).Maximum.Scale3D.ZW.m128d_f64[1] = dVar7;
  uVar8 = *(undefined3 *)&(pFVar13->CachedControlIndex).Key.field_0x1;
  uVar2 = (pFVar13->CachedControlIndex).Key.Name.ComparisonIndex.Value;
  uVar3 = (pFVar13->CachedControlIndex).Key.Name.Number;
  uVar9 = (pFVar13->CachedControlIndex).Index;
  uVar10 = *(undefined2 *)&(pFVar13->CachedControlIndex).field_0xe;
  (this->Unit).CachedControlIndex.Key.Type = (pFVar13->CachedControlIndex).Key.Type;
  *(undefined3 *)&(this->Unit).CachedControlIndex.Key.field_0x1 = uVar8;
  (this->Unit).CachedControlIndex.Key.Name.ComparisonIndex.Value = uVar2;
  (this->Unit).CachedControlIndex.Key.Name.Number = uVar3;
  (this->Unit).CachedControlIndex.Index = uVar9;
  *(undefined2 *)&(this->Unit).CachedControlIndex.field_0xe = uVar10;
  uVar4 = *(undefined4 *)&(pFVar13->CachedControlIndex).field_0x14;
  uVar5 = *(undefined4 *)&(pFVar13->CachedControlIndex).Element;
  uVar6 = *(undefined4 *)((longlong)&(pFVar13->CachedControlIndex).Element + 4);
  (this->Unit).CachedControlIndex.ContainerVersion = (pFVar13->CachedControlIndex).ContainerVersion;
  *(undefined4 *)&(this->Unit).CachedControlIndex.field_0x14 = uVar4;
  *(undefined4 *)&(this->Unit).CachedControlIndex.Element = uVar5;
  *(undefined4 *)((longlong)&(this->Unit).CachedControlIndex.Element + 4) = uVar6;
  uVar11 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar11;
}

// RunControlRigUnitTest @ 14a4a4460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetControlTransformTest::RunControlRigUnitTest
          (FRigUnit_GetControlTransformTest *this,FString *param_1)

{
  FCachedRigElement *pFVar1;
  TTransform<double> *pTVar2;
  TTransform<double> *pTVar3;
  TTransform<double> *pTVar4;
  int iVar5;
  FControlRigExecuteContext *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  __m128 _Var12;
  double dVar13;
  double dVar14;
  __m128d _Var15;
  __m128d _Var16;
  __m128d _Var17;
  __m128 _Var18;
  URigHierarchyController *pUVar19;
  UClass *pUVar20;
  FRigControlSettings *pFVar21;
  FName *pFVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_7e8 [32];
  FName local_798 [2];
  __m128 local_788;
  float local_778;
  float fStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined1 local_768 [16];
  double local_758 [2];
  double local_748;
  undefined1 local_738 [16];
  undefined8 local_728;
  double dStack_720;
  __m128d local_718;
  __m128d local_708;
  __m128d local_6f8;
  __m128d local_6e8;
  FRigElementKey local_6d8;
  double local_6c8 [2];
  double local_6b8 [2];
  __m128 local_6a8;
  float local_698;
  float fStack_694;
  float fStack_690;
  undefined4 uStack_68c;
  undefined1 local_688 [16];
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined4 local_628;
  TTransform<double> local_618 [2];
  undefined4 local_538;
  FRigElementKey local_530 [2];
  FRigControlSettings local_518;
  FRigControlSettings local_2f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_7e8;
  FRigControlSettings::FRigControlSettings(&local_2f8);
  local_2f8.ControlType = Transform;
  pUVar19 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar19 == (URigHierarchyController *)0x0) {
LAB_14a4a4526:
    pUVar19 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar5 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4a4526;
  }
  _Var16.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var15.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var12 = GlobalVectorConstants::Float0001;
  local_738._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_738._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_6c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_6c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_6b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_6b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_758[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_758[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_538 = 1;
  fVar31 = (float)___xmm_00000000000000003ff0000000000000;
  fVar29 = (float)_UNK_150689518;
  auVar28._0_12_ = GlobalVectorConstants::Float1110._0_12_;
  auVar28._12_4_ = 0;
  _local_778 = CONCAT44(fVar29,fVar31);
  uStack_770 = 0;
  uStack_76c = 0;
  local_788 = GlobalVectorConstants::Float0001;
  local_768 = auVar28;
  pFVar21 = FRigControlSettings::FRigControlSettings(&local_518,&local_2f8);
  _Var18 = local_788;
  local_788.m128_u32[0] = local_788.m128_u64[0]._1_4_ << 8;
  local_788.m128_u64[1] = _Var18.m128_u64[1];
  local_788.m128_f32[1] = (float)0;
  pFVar22 = ::FName::FName(local_798,L"Root");
  local_628 = local_538;
  local_618[0].Translation.XY.m128d_f64[0] = local_6b8[0];
  local_618[0].Translation.XY.m128d_f64[1] = local_6b8[1];
  local_708.m128d_f64[0] = local_758[0];
  local_708.m128d_f64[1] = local_758[1];
  local_618[0].Translation.ZW.m128d_f64[0] = local_758[0];
  local_618[0].Translation.ZW.m128d_f64[1] = local_758[1];
  local_728 = local_6c8[0];
  dStack_720 = local_6c8[1];
  local_718.m128d_f64[0] = local_6b8[0];
  local_718.m128d_f64[1] = local_6b8[1];
  local_6f8.m128d_f64 = _Var15.m128d_f64;
  local_6e8.m128d_f64 = _Var16.m128d_f64;
  local_618[0].Rotation.XY.m128d_f64[0] = (double)local_738._0_8_;
  local_618[0].Rotation.XY.m128d_f64[1] = (double)local_738._8_8_;
  local_618[0].Rotation.ZW.m128d_f64[0] = local_6c8[0];
  local_618[0].Rotation.ZW.m128d_f64[1] = local_6c8[1];
  local_618[0].Scale3D.XY.m128d_f64 = _Var15.m128d_f64;
  local_618[0].Scale3D.ZW.m128d_f64 = _Var16.m128d_f64;
  local_6a8 = _Var12;
  fStack_690 = 0.0;
  uStack_68c = 0;
  local_678 = 0;
  uStack_670 = 0;
  local_668 = 0;
  uStack_660 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_788.m128_f32[2] = 0.0;
  local_698 = fVar31;
  fStack_694 = fVar29;
  local_688 = auVar28;
  URigHierarchyController::AddControl
            (pUVar19,&local_6d8,*pFVar22,(FRigElementKey *)&local_788,pFVar21,
             (FRigControlValue *)&local_6a8,local_618,(TTransform<double> *)local_738,true,false);
  pUVar19 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar19 != (URigHierarchyController *)0x0) {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar5 = (int)pUVar20->_padding_;
    if ((iVar5 <= *(int *)(pUVar19->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar20->_padding_)) goto LAB_14a4a47f2;
  }
  pUVar19 = (URigHierarchyController *)0x0;
LAB_14a4a47f2:
  _Var17.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var16.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var15.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var12 = GlobalVectorConstants::Float0001;
  local_758[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_758[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_6b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_6b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_6c8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_6c8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_538 = 1;
  fVar30 = (float)___xmm_40000000000000003ff0000000000000;
  fVar29 = (float)_UNK_150744178;
  fVar31 = (float)___xmm_00000000000000004008000000000000;
  local_728 = (double)CONCAT44(fVar29,fVar30);
  dStack_720 = (double)(ulonglong)(uint)fVar31;
  local_738 = (undefined1  [16])GlobalVectorConstants::Float0001;
  auVar11 = GlobalVectorConstants::Float1110._0_12_;
  local_718.m128d_f64[1]._4_4_ = 0;
  local_718.m128d_f64._0_12_ = auVar11;
  pFVar21 = FRigControlSettings::FRigControlSettings(&local_518,&local_2f8);
  pFVar22 = ::FName::FName(local_798,L"ControlA");
  local_628 = local_538;
  local_618[0].Rotation.XY.m128d_f64[0] = local_758[0];
  local_618[0].Rotation.XY.m128d_f64[1] = local_758[1];
  local_618[0].Rotation.ZW.m128d_f64[0] = local_6b8[0];
  local_618[0].Rotation.ZW.m128d_f64[1] = local_6b8[1];
  local_618[0].Translation.XY.m128d_f64[0] = local_6c8[0];
  local_618[0].Translation.XY.m128d_f64[1] = local_6c8[1];
  local_618[0].Translation.ZW.m128d_f64 = _Var15.m128d_f64;
  local_618[0].Scale3D.XY.m128d_f64 = _Var16.m128d_f64;
  local_618[0].Scale3D.ZW.m128d_f64 = _Var17.m128d_f64;
  local_738._0_8_ = local_758[0];
  local_738._8_8_ = local_758[1];
  local_728 = local_6b8[0];
  dStack_720 = local_6b8[1];
  local_718.m128d_f64[0] = local_6c8[0];
  local_718.m128d_f64[1] = local_6c8[1];
  local_708.m128d_f64 = _Var15.m128d_f64;
  local_6f8.m128d_f64 = _Var16.m128d_f64;
  local_6e8.m128d_f64 = _Var17.m128d_f64;
  local_6a8 = _Var12;
  uStack_68c = 0;
  local_688._12_4_ = 0;
  local_688._0_12_ = auVar11;
  local_678 = 0;
  uStack_670 = 0;
  local_668 = 0;
  uStack_660 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_788.m128_f32[2] = (float)local_6d8.Name.Number;
  local_788.m128_i8[0] = local_6d8.Type;
  local_788.m128_u64[0]._1_3_ = local_6d8._1_3_;
  local_788.m128_i32[1] = local_6d8.Name.ComparisonIndex.Value;
  local_698 = fVar30;
  fStack_694 = fVar29;
  fStack_690 = fVar31;
  URigHierarchyController::AddControl
            (pUVar19,local_530,*pFVar22,(FRigElementKey *)&local_788,pFVar21,
             (FRigControlValue *)&local_6a8,(TTransform<double> *)local_738,local_618,true,false);
  ::FName::FName(local_798,L"Unknown");
  pFVar1 = &(this->Unit).CachedControlIndex;
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  pTVar2 = &(this->Unit).Maximum;
  (this->Unit).Control = local_798[0];
  pTVar3 = &(this->Unit).Transform;
  (this->Unit).Space = GlobalSpace;
  pFVar22 = &(this->Unit).Control;
  pTVar4 = &(this->Unit).Minimum;
  FRigUnit_GetControlTransform::StaticExecute
            (pFVar6,pFVar22,(this->Unit).Space,pTVar3,pTVar4,pTVar2,pFVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString((FString *)&local_788,L"unexpected global transform (0)");
  dVar13 = __real_3f1a36e2e0000000;
  uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_748 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  uVar24 = *(uint *)(this->Unit).Transform.Translation.XY.m128d_f64 &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = *(uint *)((longlong)(this->Unit).Transform.Translation.XY.m128d_f64 + 4) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar24) &&
        (double)CONCAT44(uVar26,uVar24) != __real_3f1a36e2e0000000) ||
      (uVar24 = *(uint *)((this->Unit).Transform.Translation.XY.m128d_f64 + 1) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar26 = *(uint *)((longlong)(this->Unit).Transform.Translation.XY.m128d_f64 + 0xc) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar24) &&
      (double)CONCAT44(uVar26,uVar24) != __real_3f1a36e2e0000000)) ||
     (uVar24 = SUB84(local_748,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar26 = (uint)((ulonglong)local_748 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar24) &&
     (double)CONCAT44(uVar26,uVar24) != __real_3f1a36e2e0000000)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,&local_788,0);
  if ((void *)local_788.m128_u64[0] != (void *)0x0) {
    FMemory::Free((void *)local_788.m128_u64[0]);
  }
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_GetControlTransform::StaticExecute
            (pFVar6,pFVar22,(this->Unit).Space,pTVar3,pTVar4,pTVar2,pFVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString((FString *)&local_788,L"unexpected local transform (0)");
  local_748 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  uVar24 = *(uint *)(this->Unit).Transform.Translation.XY.m128d_f64 & uVar25;
  uVar26 = *(uint *)((longlong)(this->Unit).Transform.Translation.XY.m128d_f64 + 4) & uVar27;
  if (((dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13) ||
      (uVar24 = *(uint *)((this->Unit).Transform.Translation.XY.m128d_f64 + 1) & uVar25,
      uVar26 = *(uint *)((longlong)(this->Unit).Transform.Translation.XY.m128d_f64 + 0xc) & uVar27,
      dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) ||
     (uVar24 = SUB84(local_748,0) & uVar25, uVar26 = (uint)((ulonglong)local_748 >> 0x20) & uVar27,
     dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,&local_788,0);
  if ((void *)local_788.m128_u64[0] != (void *)0x0) {
    FMemory::Free((void *)local_788.m128_u64[0]);
  }
  ::FName::FName(local_798,L"Root");
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Control = local_798[0];
  (this->Unit).Space = GlobalSpace;
  FRigUnit_GetControlTransform::StaticExecute
            (pFVar6,pFVar22,(this->Unit).Space,pTVar3,pTVar4,pTVar2,pFVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString((FString *)&local_788,L"unexpected global transform (1)");
  dVar9 = __real_3ff0000000000000;
  local_748 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar28 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  dVar8 = auVar28._0_8_ - __real_3ff0000000000000;
  uVar24 = SUB84(dVar8,0) & uVar25;
  uVar26 = (uint)((ulonglong)dVar8 >> 0x20) & uVar27;
  if (((dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13) ||
      (uVar24 = auVar28._8_4_ & uVar25, uVar26 = auVar28._12_4_ & uVar27,
      dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) ||
     (uVar24 = SUB84(local_748,0) & uVar25, uVar26 = (uint)((ulonglong)local_748 >> 0x20) & uVar27,
     dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,&local_788,0);
  if ((void *)local_788.m128_u64[0] != (void *)0x0) {
    FMemory::Free((void *)local_788.m128_u64[0]);
  }
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_GetControlTransform::StaticExecute
            (pFVar6,pFVar22,(this->Unit).Space,pTVar3,pTVar4,pTVar2,pFVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString((FString *)&local_788,L"unexpected local transform (1)");
  local_748 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar28 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  dVar8 = auVar28._0_8_ - dVar9;
  uVar24 = SUB84(dVar8,0) & uVar25;
  uVar26 = (uint)((ulonglong)dVar8 >> 0x20) & uVar27;
  if (((dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13) ||
      (uVar24 = auVar28._8_4_ & uVar25, uVar26 = auVar28._12_4_ & uVar27,
      dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) ||
     (uVar24 = SUB84(local_748,0) & uVar25, uVar26 = (uint)((ulonglong)local_748 >> 0x20) & uVar27,
     dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,&local_788,0);
  if ((void *)local_788.m128_u64[0] != (void *)0x0) {
    FMemory::Free((void *)local_788.m128_u64[0]);
  }
  ::FName::FName(local_798,L"ControlA");
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Control = local_798[0];
  (this->Unit).Space = GlobalSpace;
  FRigUnit_GetControlTransform::StaticExecute
            (pFVar6,pFVar22,(this->Unit).Space,pTVar3,pTVar4,pTVar2,pFVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString((FString *)&local_788,L"unexpected global transform (2)");
  dVar14 = __real_4008000000000000;
  dVar10 = __real_4000000000000000;
  local_748 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  dVar8 = (this->Unit).Transform.Translation.XY.m128d_f64[0] - __real_4000000000000000;
  uVar24 = SUB84(dVar8,0) & uVar25;
  uVar26 = (uint)((ulonglong)dVar8 >> 0x20) & uVar27;
  if (((dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13) ||
      (dVar8 = (this->Unit).Transform.Translation.XY.m128d_f64[1] - __real_4000000000000000,
      uVar24 = SUB84(dVar8,0) & uVar25, uVar26 = (uint)((ulonglong)dVar8 >> 0x20) & uVar27,
      dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) ||
     (uVar24 = SUB84(local_748 - __real_4008000000000000,0) & uVar25,
     uVar26 = (uint)((ulonglong)(local_748 - __real_4008000000000000) >> 0x20) & uVar27,
     dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,&local_788,0);
  if ((void *)local_788.m128_u64[0] != (void *)0x0) {
    FMemory::Free((void *)local_788.m128_u64[0]);
  }
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_GetControlTransform::StaticExecute
            (pFVar6,pFVar22,(this->Unit).Space,pTVar3,pTVar4,pTVar2,pFVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString((FString *)&local_788,L"unexpected local transform (2)");
  local_748 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  dVar9 = (this->Unit).Transform.Translation.XY.m128d_f64[0] - dVar9;
  uVar24 = SUB84(dVar9,0) & uVar25;
  uVar26 = (uint)((ulonglong)dVar9 >> 0x20) & uVar27;
  if (((dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13) ||
      (dVar10 = (this->Unit).Transform.Translation.XY.m128d_f64[1] - dVar10,
      uVar24 = SUB84(dVar10,0) & uVar25, uVar26 = (uint)((ulonglong)dVar10 >> 0x20) & uVar27,
      dVar13 <= (double)CONCAT44(uVar26,uVar24) && (double)CONCAT44(uVar26,uVar24) != dVar13)) ||
     (uVar25 = SUB84(local_748 - dVar14,0) & uVar25,
     uVar27 = (uint)((ulonglong)(local_748 - dVar14) >> 0x20) & uVar27,
     dVar13 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar13)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,&local_788,0);
  if ((void *)local_788.m128_u64[0] != (void *)0x0) {
    FMemory::Free((void *)local_788.m128_u64[0]);
  }
  if (local_2f8.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.FilteredChannels.AllocatorInstance.Data);
  }
  if (local_2f8.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.PreviouslyDrivenControls.AllocatorInstance.Data);
  }
  if (local_2f8.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.DrivenControls.AllocatorInstance.Data);
  }
  if (local_2f8.Customization.RemovedSpaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_2f8.Customization.RemovedSpaces.AllocatorInstance.Data);
  }
  if (local_2f8.Customization.AvailableSpaces.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Customization.AvailableSpaces.AllocatorInstance.Data);
  }
  if (local_2f8.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.LimitEnabled.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4a4ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetControlTransformTest::GetBeautifiedTestName
          (FRigUnit_GetControlTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_GetControlTransform");
  return __return_storage_ptr__;
}

