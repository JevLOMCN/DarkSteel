// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 18

// StaticClass @ 14df06810

UClass * __cdecl UIKRigFBIKController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigFBIKController",
               &Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton,
               StaticRegisterNativesUIKRigFBIKController,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRigFBIKController>,
               InternalVTableHelperCtorCaller<UIKRigFBIKController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton;
}

// UIKRigFBIKController @ 14df1a150

UIKRigFBIKController * __thiscall
UIKRigFBIKController::UIKRigFBIKController(UIKRigFBIKController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigFBIKController__6B_;
  return this;
}

// UIKRigFBIKController @ 14df1a180

UIKRigFBIKController * __thiscall
UIKRigFBIKController::UIKRigFBIKController(UIKRigFBIKController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigFBIKController__6B_;
  return this;
}

// ~UIKRigFBIKController @ 14df1c6d0

void __thiscall UIKRigFBIKController::~UIKRigFBIKController(UIKRigFBIKController *this)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBoneSettings @ 14df35460

FIKRigFBIKBoneSettings * __thiscall
UIKRigFBIKController::GetBoneSettings
          (UIKRigFBIKController *this,FIKRigFBIKBoneSettings *__return_storage_ptr__,FName param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  lVar6 = (**(code **)(**(longlong **)&this->field_0x28 + 0xd8))
                    (*(longlong **)&this->field_0x28,local_res18);
  __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigFBIKBoneSettings__6B_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (lVar6 != 0) {
    dVar2 = *(double *)(lVar6 + 0x40);
    dVar3 = *(double *)(lVar6 + 0x48);
    __return_storage_ptr__->_padding_ = *(longlong *)(lVar6 + 8);
    dVar1 = *(double *)(lVar6 + 0x50);
    __return_storage_ptr__->RotationStiffness = *(float *)(lVar6 + 0x10);
    __return_storage_ptr__->PositionStiffness = *(float *)(lVar6 + 0x14);
    __return_storage_ptr__->X = *(EPBIKLimitType *)(lVar6 + 0x18);
    __return_storage_ptr__->MinX = *(float *)(lVar6 + 0x1c);
    __return_storage_ptr__->MaxX = *(float *)(lVar6 + 0x20);
    __return_storage_ptr__->Y = *(EPBIKLimitType *)(lVar6 + 0x24);
    __return_storage_ptr__->MinY = *(float *)(lVar6 + 0x28);
    __return_storage_ptr__->MaxY = *(float *)(lVar6 + 0x2c);
    __return_storage_ptr__->Z = *(EPBIKLimitType *)(lVar6 + 0x30);
    __return_storage_ptr__->MinZ = *(float *)(lVar6 + 0x34);
    __return_storage_ptr__->MaxZ = *(float *)(lVar6 + 0x38);
    __return_storage_ptr__->bUsePreferredAngles = *(bool *)(lVar6 + 0x3c);
    (__return_storage_ptr__->PreferredAngles).field0_0x0._s_0.X = dVar2;
    (__return_storage_ptr__->PreferredAngles).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->PreferredAngles).field0_0x0._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_padding_ = (longlong)local_res18[0];
  __return_storage_ptr__->RotationStiffness = 0.0;
  __return_storage_ptr__->PositionStiffness = 0.0;
  (__return_storage_ptr__->PreferredAngles).field0_0x0._s_0.X = (double)uVar4;
  (__return_storage_ptr__->PreferredAngles).field0_0x0._s_0.Y = (double)uVar5;
  __return_storage_ptr__->X = Free;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  __return_storage_ptr__->MinX = 0.0;
  __return_storage_ptr__->MaxX = 0.0;
  __return_storage_ptr__->Y = Free;
  __return_storage_ptr__->MinY = 0.0;
  __return_storage_ptr__->MaxY = 0.0;
  __return_storage_ptr__->Z = Free;
  __return_storage_ptr__->MinZ = 0.0;
  __return_storage_ptr__->MaxZ = 0.0;
  __return_storage_ptr__->bUsePreferredAngles = false;
  (__return_storage_ptr__->PreferredAngles).field0_0x0._s_0.Z = (double)uVar4;
  return __return_storage_ptr__;
}

// GetGoalSettings @ 14df38730

FIKRigFBIKGoalSettings * __thiscall
UIKRigFBIKController::GetGoalSettings
          (UIKRigFBIKController *this,FIKRigFBIKGoalSettings *__return_storage_ptr__,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  lVar2 = (**(code **)(**(longlong **)&this->field_0x28 + 0x70))
                    (*(longlong **)&this->field_0x28,local_res18);
  if (lVar2 != 0) {
    __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigGoalSettingsBase__6B_;
    lVar1 = *(longlong *)(lVar2 + 8);
    __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigFBIKGoalSettings__6B_;
    __return_storage_ptr__->_padding_ = lVar1;
    __return_storage_ptr__->BoneName = *(FName *)(lVar2 + 0x10);
    __return_storage_ptr__->ChainDepth = *(int *)(lVar2 + 0x18);
    __return_storage_ptr__->StrengthAlpha = *(float *)(lVar2 + 0x1c);
    __return_storage_ptr__->PullChainAlpha = *(float *)(lVar2 + 0x20);
    __return_storage_ptr__->PinRotation = *(float *)(lVar2 + 0x24);
    __return_storage_ptr__->IndexInSolver = *(int *)(lVar2 + 0x28);
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigFBIKGoalSettings__6B_;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->BoneName).ComparisonIndex = 0;
  (__return_storage_ptr__->BoneName).Number = 0;
  __return_storage_ptr__->ChainDepth = 0;
  __return_storage_ptr__->StrengthAlpha = 1.0;
  __return_storage_ptr__->PullChainAlpha = 1.0;
  __return_storage_ptr__->PinRotation = 1.0;
  __return_storage_ptr__->IndexInSolver = -1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14df3d1e0

UClass * __cdecl UIKRigFBIKController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigFBIKController",
               &Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton,
               StaticRegisterNativesUIKRigFBIKController,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRigFBIKController>,
               InternalVTableHelperCtorCaller<UIKRigFBIKController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigFBIKController.InnerSingleton;
}

// GetSolverSettings @ 14df402c0

FIKRigFBIKSettings * __thiscall
UIKRigFBIKController::GetSolverSettings
          (UIKRigFBIKController *this,FIKRigFBIKSettings *__return_storage_ptr__)

{
  bool bVar1;
  EPBIKRootBehavior EVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  lVar9 = (**(code **)(**(longlong **)&this->field_0x28 + 0x30))();
  __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigFBIKSettings__6B_;
  fVar3 = *(float *)(lVar9 + 0x40);
  uVar5 = *(undefined8 *)(lVar9 + 0x20);
  uVar6 = *(undefined8 *)(lVar9 + 0x28);
  __return_storage_ptr__->RootBone = *(FName *)(lVar9 + 8);
  uVar7 = *(undefined8 *)(lVar9 + 0x30);
  uVar8 = *(undefined8 *)(lVar9 + 0x38);
  __return_storage_ptr__->Iterations = *(int *)(lVar9 + 0x10);
  __return_storage_ptr__->SubIterations = *(int *)(lVar9 + 0x14);
  fVar4 = *(float *)(lVar9 + 0x18);
  __return_storage_ptr__->GlobalPullChainAlpha = fVar3;
  fVar3 = *(float *)(lVar9 + 0x44);
  __return_storage_ptr__->MassMultiplier = fVar4;
  bVar1 = *(bool *)(lVar9 + 0x1c);
  __return_storage_ptr__->MaxAngle = fVar3;
  fVar3 = *(float *)(lVar9 + 0x48);
  __return_storage_ptr__->bAllowStretch = bVar1;
  EVar2 = *(EPBIKRootBehavior *)(lVar9 + 0x1d);
  (__return_storage_ptr__->PrePullRootSettings).RotationAlpha = (float)(int)uVar5;
  (__return_storage_ptr__->PrePullRootSettings).RotationAlphaX =
       (float)(int)((ulonglong)uVar5 >> 0x20);
  (__return_storage_ptr__->PrePullRootSettings).RotationAlphaY = (float)(int)uVar6;
  (__return_storage_ptr__->PrePullRootSettings).RotationAlphaZ =
       (float)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->OverRelaxation = fVar3;
  __return_storage_ptr__->RootBehavior = EVar2;
  (__return_storage_ptr__->PrePullRootSettings).PositionAlpha = (float)(int)uVar7;
  (__return_storage_ptr__->PrePullRootSettings).PositionAlphaX =
       (float)(int)((ulonglong)uVar7 >> 0x20);
  (__return_storage_ptr__->PrePullRootSettings).PositionAlphaY = (float)(int)uVar8;
  (__return_storage_ptr__->PrePullRootSettings).PositionAlphaZ =
       (float)(int)((ulonglong)uVar8 >> 0x20);
  return __return_storage_ptr__;
}

// SetBoneSettings @ 14df54100

void __thiscall
UIKRigFBIKController::SetBoneSettings
          (UIKRigFBIKController *this,FName param_1,FIKRigFBIKBoneSettings *param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  (**(code **)(**(longlong **)&this->field_0x28 + 0xe0))
            (*(longlong **)&this->field_0x28,local_res10);
  param_2->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

// SetGoalSettings @ 14df54b60

void __thiscall
UIKRigFBIKController::SetGoalSettings
          (UIKRigFBIKController *this,FName param_1,FIKRigFBIKGoalSettings *param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  (**(code **)(**(longlong **)&this->field_0x28 + 0x78))
            (*(longlong **)&this->field_0x28,local_res10);
  param_2->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

// SetSolverSettings @ 14df560c0

void __thiscall
UIKRigFBIKController::SetSolverSettings(UIKRigFBIKController *this,FIKRigFBIKSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 0x40))();
  param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

// StaticRegisterNativesUIKRigFBIKController @ 14df5a120

void __cdecl UIKRigFBIKController::StaticRegisterNativesUIKRigFBIKController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UIKRigFBIKController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBoneSettings @ 14df63cb0

void __cdecl
UIKRigFBIKController::execGetBoneSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 1) + 0xd8))();
  if (lVar2 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_res10 = *(undefined8 *)(lVar2 + 8);
    uVar8 = *(undefined4 *)(lVar2 + 0x10);
    uVar9 = *(undefined4 *)(lVar2 + 0x14);
    uVar3 = *(undefined1 *)(lVar2 + 0x18);
    uVar10 = *(undefined4 *)(lVar2 + 0x1c);
    uVar11 = *(undefined4 *)(lVar2 + 0x20);
    uVar4 = *(undefined1 *)(lVar2 + 0x24);
    uVar12 = *(undefined4 *)(lVar2 + 0x28);
    uVar13 = *(undefined4 *)(lVar2 + 0x2c);
    uVar5 = *(undefined1 *)(lVar2 + 0x30);
    uVar14 = *(undefined4 *)(lVar2 + 0x34);
    uVar15 = *(undefined4 *)(lVar2 + 0x38);
    uVar6 = *(undefined1 *)(lVar2 + 0x3c);
    uVar7 = *(double *)(lVar2 + 0x50);
    uVar16 = *(undefined4 *)(lVar2 + 0x40);
    uVar17 = *(undefined4 *)(lVar2 + 0x44);
    uVar18 = *(undefined4 *)(lVar2 + 0x48);
    uVar19 = *(undefined4 *)(lVar2 + 0x4c);
  }
  *(undefined4 *)((longlong)param_3 + 0x40) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x48) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uVar19;
  *(undefined8 *)((longlong)param_3 + 8) = local_res10;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar13;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0x38) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar11;
  *(undefined4 *)((longlong)param_3 + 0x28) = uVar12;
  *(undefined1 *)((longlong)param_3 + 0x18) = uVar3;
  *(undefined1 *)((longlong)param_3 + 0x24) = uVar4;
  *(undefined1 *)((longlong)param_3 + 0x30) = uVar5;
  *(undefined1 *)((longlong)param_3 + 0x3c) = uVar6;
  return;
}

// execGetGoalSettings @ 14df650e0

void __cdecl
UIKRigFBIKController::execGetGoalSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  
  uVar3 = 0;
  uVar5 = 0;
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 1) + 0x70))
                    (*(longlong **)(param_1 + 1),&local_res10);
  if (lVar2 == 0) {
    uVar6 = 0xffffffff;
    uVar4 = uVar3;
    uVar7 = __real_3f800000;
    uVar8 = __real_3f800000;
    uVar9 = __real_3f800000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
    uVar6 = *(undefined4 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined4 *)(lVar2 + 0x1c);
    uVar8 = *(undefined4 *)(lVar2 + 0x20);
    uVar9 = *(undefined4 *)(lVar2 + 0x24);
  }
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar9;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x28) = uVar6;
  return;
}

// execGetSolverSettings @ 14df66d00

void __cdecl
UIKRigFBIKController::execGetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar13 = (**(code **)(**(longlong **)(param_1 + 1) + 0x30))();
  uVar10 = *(undefined8 *)(lVar13 + 0x28);
  uVar9 = *(undefined8 *)(lVar13 + 8);
  uVar11 = *(undefined8 *)(lVar13 + 0x30);
  uVar12 = *(undefined8 *)(lVar13 + 0x38);
  uVar7 = *(undefined4 *)(lVar13 + 0x10);
  uVar8 = *(undefined4 *)(lVar13 + 0x14);
  uVar1 = *(undefined4 *)(lVar13 + 0x18);
  uVar5 = *(undefined1 *)(lVar13 + 0x1c);
  uVar6 = *(undefined1 *)(lVar13 + 0x1d);
  uVar2 = *(undefined4 *)(lVar13 + 0x40);
  uVar3 = *(undefined4 *)(lVar13 + 0x44);
  uVar4 = *(undefined4 *)(lVar13 + 0x48);
  *(undefined8 *)((longlong)param_3 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar11;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x40) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x48) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar8;
  *(undefined1 *)((longlong)param_3 + 0x1c) = uVar5;
  *(undefined1 *)((longlong)param_3 + 0x1d) = uVar6;
  return;
}

// execSetBoneSettings @ 14df67390

void __cdecl
UIKRigFBIKController::execSetBoneSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_d0 = 0;
  local_d8 = &___7FIKRigFBIKBoneSettings__6B_;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_9c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_68 = (undefined4)local_c8;
  local_64 = local_c8._4_4_;
  local_70 = local_d0;
  local_60 = local_c0;
  local_54 = local_b4;
  local_5c = (undefined4)local_bc;
  local_58 = local_bc._4_4_;
  local_48 = local_a8;
  local_50 = (undefined4)local_b0;
  local_4c = local_b0._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_3c = local_9c;
  local_44 = (undefined4)local_a4;
  local_40 = local_a4._4_4_;
  local_res10 = local_res8;
  local_78 = &___7FIKRigFBIKBoneSettings__6B_;
  local_38 = (undefined4)local_98;
  uStack_34 = local_98._4_4_;
  uStack_30 = (undefined4)uStack_90;
  uStack_2c = uStack_90._4_4_;
  local_28 = local_88;
  (**(code **)(**(longlong **)(param_1 + 1) + 0xe0))
            (*(longlong **)(param_1 + 1),&local_res10,&local_78);
  return;
}

// execSetGoalSettings @ 14df683b0

void __cdecl
UIKRigFBIKController::execSetGoalSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_70 = 0;
  local_78 = &___7FIKRigFBIKGoalSettings__6B_;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_2c = local_5c;
  local_28 = local_58;
  local_40 = local_70;
  local_38 = local_68;
  local_30 = local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_50;
  local_res10 = local_res8;
  local_24 = local_54;
  local_48 = &___7FIKRigFBIKGoalSettings__6B_;
  (**(code **)(**(longlong **)(param_1 + 1) + 0x78))
            (*(longlong **)(param_1 + 1),&local_res10,&local_48);
  return;
}

// execSetSolverSettings @ 14df6ab50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UIKRigFBIKController::execSetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_a8 = &___7FIKRigFBIKSettings__6B_;
  local_a0 = 0;
  local_8c = 0;
  local_88 = ___xmm_3f8000003f8000003f80000000000000;
  uStack_80 = _UNK_15090c6e8;
  local_78 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_70 = _UNK_15076b1f8;
  local_98 = 0x14;
  local_90 = 0x3f800000;
  local_68 = 0x3f800000;
  local_64 = 0x41f00000;
  local_60 = 0x3fa66666;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_40 = local_90;
  local_50 = local_a0;
  local_48 = (undefined4)local_98;
  local_44 = local_98._4_4_;
  local_38 = local_88;
  uStack_30 = uStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_3c = (undefined1)local_8c;
  local_18 = local_68;
  local_28 = local_78;
  uStack_20 = uStack_70;
  local_3b = local_8c._1_1_;
  local_14 = local_64;
  local_10 = local_60;
  local_58 = &___7FIKRigFBIKSettings__6B_;
  (**(code **)(**(longlong **)(param_1 + 1) + 0x40))(*(longlong **)(param_1 + 1),&local_58);
  return;
}

