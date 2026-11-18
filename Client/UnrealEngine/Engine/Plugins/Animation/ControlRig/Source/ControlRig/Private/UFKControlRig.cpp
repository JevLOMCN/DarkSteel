// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 35

// StaticClass @ 14a2bf950

UClass * __cdecl UFKControlRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFKControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"FKControlRig",
               &Z_Registration_Info_UClass_UFKControlRig.InnerSingleton,
               StaticRegisterNativesUFKControlRig,0xc90,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFKControlRig>,
               InternalVTableHelperCtorCaller<UFKControlRig>,local_res8,UControlRig::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFKControlRig.InnerSingleton;
}

// UFKControlRig @ 14a2dd0e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UFKControlRig * __thiscall UFKControlRig::UFKControlRig(UFKControlRig *this,FVTableHelper *param_1)

{
  UControlRig::UControlRig((UControlRig *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  (this->IsControlActive).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsControlActive).ArrayNum = 0;
  (this->IsControlActive).ArrayMax = 0;
  (this->InitializationOptions).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitializationOptions).BoneNames.ArrayNum = 0;
  (this->InitializationOptions).BoneNames.ArrayMax = 0;
  (this->InitializationOptions).CurveNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitializationOptions).CurveNames.ArrayNum = 0;
  (this->InitializationOptions).CurveNames.ArrayMax = 0;
  (this->InitializationOptions).bGenerateBoneControls = true;
  (this->InitializationOptions).bGenerateCurveControls = true;
  (this->InitializationOptions).bImportCurves = true;
  return this;
}

// UFKControlRig @ 14a2dd180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UFKControlRig * __thiscall
UFKControlRig::UFKControlRig(UFKControlRig *this,FObjectInitializer *param_1)

{
  UControlRig::UControlRig((UControlRig *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  (this->IsControlActive).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsControlActive).ArrayNum = 0;
  (this->IsControlActive).ArrayMax = 0;
  this->ApplyMode = Replace;
  this->CachedToggleApplyMode = Replace;
  (this->InitializationOptions).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitializationOptions).BoneNames.ArrayNum = 0;
  (this->InitializationOptions).BoneNames.ArrayMax = 0;
  (this->InitializationOptions).CurveNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitializationOptions).CurveNames.ArrayNum = 0;
  (this->InitializationOptions).CurveNames.ArrayMax = 0;
  *(undefined2 *)&this->_padding_ = 0;
  (this->InitializationOptions).bGenerateBoneControls = true;
  (this->InitializationOptions).bGenerateCurveControls = true;
  (this->InitializationOptions).bImportCurves = true;
  return this;
}

// ~UFKControlRig @ 14a2def40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UFKControlRig::~UFKControlRig(UFKControlRig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  pFVar1 = (this->InitializationOptions).CurveNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitializationOptions).BoneNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IsControlActive).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UControlRig::~UControlRig((UControlRig *)this);
  return;
}

// operator() @ 14a2e3b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  undefined8 uVar1;
  URigHierarchy *pUVar2;
  longlong lVar3;
  FRigControlElement *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  FNameEntryId FVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FRigControlElement *this_01;
  FRigBaseElement *this_02;
  TTransform<double> *pTVar16;
  bool *pbVar17;
  FRigBaseElement *pFVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auStackY_468 [32];
  undefined1 local_427 [7];
  uint local_420;
  FNameEntryId FStack_41c;
  uint local_418;
  FName local_410;
  FName local_408;
  FRigElementKey local_400 [2];
  FRigElementKey local_3e8;
  FRigElementKey local_3d8 [2];
  TTransform<double> local_3b8;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_468;
  bVar13 = FRigBaseElement::IsA<FRigBoneElement>(param_1);
  if (!bVar13) {
    *param_2 = false;
    return;
  }
  uVar20 = 0;
  if (((param_1 == (FRigBaseElement *)0x0) ||
      (bVar13 = FRigBaseElement::IsA<FRigBoneElement>(param_1), !bVar13)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Element",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                          ,0x3f9,L""), param_1 = (FRigBaseElement *)0x0, bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_410 = (param_1->Key).Name;
  UFKControlRig::GetControlName(&local_408,(ERigElementType *)&local_410);
  pUVar2 = *(URigHierarchy **)(*(longlong *)this + 0x338);
  local_400[0].Name = local_408;
  local_400[0].Type = Control;
  iVar15 = URigHierarchy::GetIndex(pUVar2,local_400,true);
  this_01 = (FRigControlElement *)URigHierarchy::Get(pUVar2,iVar15);
  if (this_01 == (FRigControlElement *)0x0) {
    return;
  }
  bVar13 = FRigBaseElement::IsA<FRigControlElement>((FRigBaseElement *)this_01);
  if (!bVar13) {
    return;
  }
  local_3e8.Type = (param_1->Key).Type;
  local_3e8._1_3_ = *(undefined3 *)&(param_1->Key).field_0x1;
  local_3e8.Name.ComparisonIndex.Value = (param_1->Key).Name.ComparisonIndex.Value;
  pUVar2 = *(URigHierarchy **)(*(longlong *)this + 0x338);
  local_3e8.Name.Number = (param_1->Key).Name.Number;
  iVar15 = URigHierarchy::GetIndex(pUVar2,&local_3e8,true);
  this_02 = URigHierarchy::Get(pUVar2,iVar15);
  if (this_02 == (FRigBaseElement *)0x0) {
LAB_14a2e3cb7:
    cVar14 = '\0';
    local_420 = local_420 & 0xffffff00;
    FStack_41c.Value = 0;
  }
  else {
    bVar13 = FRigBaseElement::IsA<FRigSingleParentElement>(this_02);
    if (bVar13) {
      pFVar18 = this_02 + 3;
    }
    else {
      bVar13 = FRigBaseElement::IsA<FRigMultiParentElement>(this_02);
      if ((!bVar13) || (*(int *)&this_02[4].CachedNameString.Data.AllocatorInstance.Data < 1))
      goto LAB_14a2e3cb7;
      pFVar18 = (FRigBaseElement *)this_02[4].ComponentIndices.AllocatorInstance.Data;
      if (pFVar18 == (FRigBaseElement *)0x0) {
        pFVar18 = this_02 + 3;
      }
    }
    lVar3 = pFVar18->_padding_;
    if (lVar3 == 0) goto LAB_14a2e3cb7;
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    FStack_41c.Value = (uint)((ulonglong)uVar1 >> 0x20);
    uVar20 = *(uint *)(lVar3 + 0x18);
    local_420._0_1_ = (char)uVar1;
    cVar14 = (char)local_420;
    local_420 = (uint)uVar1;
  }
  FVar12.Value = FStack_41c.Value;
  uVar11 = local_420;
  local_1d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  auVar33._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
  auVar33._0_8_ = auVar33._8_8_;
  local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_418 = uVar20;
  bVar13 = ::FName::IsWithinBounds(FStack_41c);
  if (((bVar13) && (CONCAT44(local_418,FStack_41c.Value) != 0)) && (cVar14 != '\0')) {
    URigHierarchy::GetGlobalTransformByIndex
              (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_118,param_1->Index,true);
    pUVar2 = *(URigHierarchy **)(*(longlong *)this + 0x338);
    local_3d8[0].Name.ComparisonIndex.Value = FVar12.Value;
    local_3d8[0]._0_4_ = uVar11;
    local_3d8[0].Name.Number = uVar20;
    iVar15 = URigHierarchy::GetIndex(pUVar2,local_3d8,true);
    URigHierarchy::GetGlobalTransformByIndex(pUVar2,&local_178,iVar15,true);
    pTVar16 = UE::Math::TTransform<double>::GetRelativeTransform(&local_118,&local_b8,&local_178);
  }
  else {
    pTVar16 = URigHierarchy::GetLocalTransformByIndex
                        (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_3b8,param_1->Index,
                         true);
  }
  dVar7 = (pTVar16->Rotation).XY.m128d_f64[0];
  dVar8 = (pTVar16->Rotation).XY.m128d_f64[1];
  dVar9 = (pTVar16->Rotation).ZW.m128d_f64[0];
  dVar10 = (pTVar16->Rotation).ZW.m128d_f64[1];
  local_1d8.Translation.XY.m128d_f64[0] = (pTVar16->Translation).XY.m128d_f64[0];
  local_1d8.Translation.XY.m128d_f64[1] = (pTVar16->Translation).XY.m128d_f64[1];
  local_1d8.Translation.ZW.m128d_f64[0] = (pTVar16->Translation).ZW.m128d_f64[0];
  local_1d8.Translation.ZW.m128d_f64[1] = (pTVar16->Translation).ZW.m128d_f64[1];
  local_1d8.Scale3D.XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
  local_1d8.Scale3D.XY.m128d_f64[1] = (pTVar16->Scale3D).XY.m128d_f64[1];
  local_1d8.Scale3D.ZW.m128d_f64[0] = (pTVar16->Scale3D).ZW.m128d_f64[0];
  local_1d8.Scale3D.ZW.m128d_f64[1] = (pTVar16->Scale3D).ZW.m128d_f64[1];
  dVar29 = dVar9 * dVar9 + dVar7 * dVar7;
  dVar32 = dVar10 * dVar10 + dVar8 * dVar8;
  auVar26._8_4_ = SUB84(dVar32,0);
  auVar26._0_8_ = dVar29;
  auVar26._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar27._0_8_ = auVar26._8_8_ + dVar29;
  auVar27._8_8_ = dVar29 + dVar32;
  auVar33 = sqrtpd(auVar33,auVar27);
  uVar22 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar27._0_8_);
  uVar24 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar27._8_8_);
  uVar23 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar27._0_8_);
  uVar25 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar27._8_8_);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
  auVar31._0_8_ = uVar22 & (ulonglong)(auVar30._0_8_ * dVar7);
  uVar6 = uVar24 & (ulonglong)(auVar30._8_8_ * dVar8);
  auVar31._8_4_ = (undefined4)uVar6;
  auVar31._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar28._0_8_ = uVar23 & (ulonglong)(auVar33._0_8_ * dVar9);
  uVar6 = uVar25 & (ulonglong)(auVar33._8_8_ * dVar10);
  auVar28._8_4_ = (undefined4)uVar6;
  auVar28._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar30._4_4_ = ~(uint)(uVar22 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar30._0_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar30._8_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar30._12_4_ = ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  local_1d8.Rotation.XY.m128d_f64 = (double  [2])(auVar31 | auVar30);
  auVar5._4_4_ = ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar5._0_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar5._8_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar5._12_4_ = ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  local_1d8.Rotation.ZW.m128d_f64 = (double  [2])(auVar28 | auVar5);
  pUVar2 = *(URigHierarchy **)(*(longlong *)this + 0x338);
  pbVar17 = (this_01->OffsetDirtyState).Initial.Local.Storage;
  if (pbVar17 == (bool *)0x0) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4557919968548617693>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                        ,0x223,"false");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (*pbVar17 != false) goto LAB_14a2e3ee7;
  FRigComputedTransform::Get(&(this_01->OffsetStorage).Initial.Local);
LAB_14a2e3ee7:
  URigHierarchy::GetControlOffsetTransform(pUVar2,&local_358,this_01,InitialLocal);
  if (pUVar2->bEnableDirtyPropagation != false) {
    iVar15 = *(int *)&this_01->field_0x118;
    puVar19 = *(undefined8 **)&this_01->field_0x110;
    if (*(undefined8 **)&this_01->field_0x110 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)&this_01->field_0xe0;
    }
    puVar21 = puVar19 + (longlong)iVar15 * 2;
    while( true ) {
      if (*(int *)&this_01->field_0x118 != iVar15) {
        local_427[0] = 0;
        `TCheckedPointerIterator<FRigTransformElement::FElementToDirty,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_427);
      }
      if (puVar19 == puVar21) break;
      cVar14 = (**(code **)(*(longlong *)*puVar19 + 0x60))((longlong *)*puVar19,0);
      if (cVar14 == '\0') {
        this_00 = (FRigControlElement *)*puVar19;
        if ((this_00 != (FRigControlElement *)0x0) &&
           (bVar13 = FRigBaseElement::IsA<FRigControlElement>((FRigBaseElement *)this_00), bVar13))
        {
          URigHierarchy::GetControlOffsetTransform(pUVar2,&local_2f8,this_00,InitialLocal);
        }
        URigHierarchy::GetTransform
                  (pUVar2,&local_298,(FRigTransformElement *)*puVar19,InitialGlobal);
        (**(code **)(*(longlong *)*puVar19 + 0x68))();
      }
      puVar19 = puVar19 + 2;
    }
  }
  URigHierarchy::GetTransform(pUVar2,&local_238,(FRigTransformElement *)this_01,InitialLocal);
  FRigCurrentAndInitialDirtyState::MarkDirty
            ((FRigCurrentAndInitialDirtyState *)&this_01->field_0xa0,InitialGlobal);
  pTVar16 = (this_01->OffsetStorage).Initial.Local.Storage;
  if (pTVar16 != (TTransform<double> *)0x0) {
    (pTVar16->Rotation).XY.m128d_f64[0] = local_1d8.Rotation.XY.m128d_f64[0];
    (pTVar16->Rotation).XY.m128d_f64[1] = local_1d8.Rotation.XY.m128d_f64[1];
    (pTVar16->Rotation).ZW.m128d_f64[0] = local_1d8.Rotation.ZW.m128d_f64[0];
    (pTVar16->Rotation).ZW.m128d_f64[1] = local_1d8.Rotation.ZW.m128d_f64[1];
    (pTVar16->Translation).XY.m128d_f64[0] = local_1d8.Translation.XY.m128d_f64[0];
    (pTVar16->Translation).XY.m128d_f64[1] = local_1d8.Translation.XY.m128d_f64[1];
    (pTVar16->Translation).ZW.m128d_f64[0] = local_1d8.Translation.ZW.m128d_f64[0];
    (pTVar16->Translation).ZW.m128d_f64[1] = local_1d8.Translation.ZW.m128d_f64[1];
    (pTVar16->Scale3D).XY.m128d_f64[0] = local_1d8.Scale3D.XY.m128d_f64[0];
    (pTVar16->Scale3D).XY.m128d_f64[1] = local_1d8.Scale3D.XY.m128d_f64[1];
    (pTVar16->Scale3D).ZW.m128d_f64[0] = local_1d8.Scale3D.ZW.m128d_f64[0];
    (pTVar16->Scale3D).ZW.m128d_f64[1] = local_1d8.Scale3D.ZW.m128d_f64[1];
  }
  pbVar17 = (this_01->OffsetDirtyState).Initial.Local.Storage;
  if (pbVar17 == (bool *)0x0) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4557919968548617682>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                        ,0x22e,"false");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pbVar17 = &bDefaultDirtyFlag;
  }
  *pbVar17 = false;
  FRigCurrentAndInitialDirtyState::MarkDirty(&this_01->OffsetDirtyState,InitialGlobal);
  FRigCurrentAndInitialDirtyState::MarkDirty(&this_01->ShapeDirtyState,InitialGlobal);
  URigHierarchy::SetControlOffsetTransform
            (pUVar2,this_01,&local_1d8,CurrentLocal,false,false,true,false);
  return;
}

// operator() @ 14a2e4cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UFKControlRig::Execute_Internal'::__l5::<lambda_1>::operator()(void *this,FRigBoneElement *param_1)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  FRigControlElement *this_00;
  longlong lVar5;
  TTransform<double> *pTVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStackY_1b8 [32];
  FName local_170;
  FRigElementKey local_168;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UFKControlRig::GetControlName(&local_170,(ERigElementType *)((longlong)&param_1->_padding_ + 4));
  local_168.Type = Control;
  local_168.Name = local_170;
  iVar4 = URigHierarchy::GetIndex(*(URigHierarchy **)(*(longlong *)this + 0x338),&local_168,true);
  if (iVar4 == -1) {
    return true;
  }
  bVar3 = UFKControlRig::GetControlActive(*(UFKControlRig **)this,iVar4);
  if (!bVar3) {
    return true;
  }
  this_00 = (FRigControlElement *)
            URigHierarchy::Get(*(URigHierarchy **)(*(longlong *)this + 0x338),iVar4);
  if ((this_00 == (FRigControlElement *)0x0) ||
     (bVar3 = FRigBaseElement::IsA<FRigControlElement>((FRigBaseElement *)this_00), !bVar3)) {
    this_00 = (FRigControlElement *)0x0;
  }
  URigHierarchy::GetLocalTransformByIndex
            (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_f8,iVar4,false);
  lVar5 = *(longlong *)this;
  cVar1 = *(char *)(lVar5 + 0xc60);
  if (cVar1 == '\0') {
    URigHierarchy::GetControlOffsetTransform
              (*(URigHierarchy **)(lVar5 + 0x338),&local_98,this_00,InitialLocal);
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return true;
      }
      pTVar6 = &local_f8;
      goto LAB_14a2e4ef1;
    }
    URigHierarchy::GetTransform
              (*(URigHierarchy **)(lVar5 + 0x338),&local_98,(FRigTransformElement *)param_1,
               CurrentLocal);
  }
  local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  auVar18._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
  auVar18._0_8_ = auVar18._8_8_;
  local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_158,&local_f8,&local_98);
  pTVar6 = &local_158;
  lVar5 = *(longlong *)this;
  dVar14 = local_158.Rotation.ZW.m128d_f64[0] * local_158.Rotation.ZW.m128d_f64[0] +
           local_158.Rotation.XY.m128d_f64[0] * local_158.Rotation.XY.m128d_f64[0];
  dVar17 = local_158.Rotation.ZW.m128d_f64[1] * local_158.Rotation.ZW.m128d_f64[1] +
           local_158.Rotation.XY.m128d_f64[1] * local_158.Rotation.XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar17,0);
  auVar11._0_8_ = dVar14;
  auVar11._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar12._0_8_ = auVar11._8_8_ + dVar14;
  auVar12._8_8_ = dVar14 + dVar17;
  auVar19 = sqrtpd(auVar18,auVar12);
  uVar7 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar12._0_8_);
  uVar9 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar12._8_8_);
  uVar8 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar12._0_8_);
  uVar10 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar12._8_8_);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
  auVar16._0_8_ = uVar7 & (ulonglong)(auVar15._0_8_ * local_158.Rotation.XY.m128d_f64[0]);
  uVar2 = uVar9 & (ulonglong)(auVar15._8_8_ * local_158.Rotation.XY.m128d_f64[1]);
  auVar16._8_4_ = (undefined4)uVar2;
  auVar16._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar13._0_8_ = uVar8 & (ulonglong)(auVar19._0_8_ * local_158.Rotation.ZW.m128d_f64[0]);
  uVar2 = uVar10 & (ulonglong)(auVar19._8_8_ * local_158.Rotation.ZW.m128d_f64[1]);
  auVar13._8_4_ = (undefined4)uVar2;
  auVar13._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar19._4_4_ = ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar19._0_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar19._8_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar19._12_4_ = ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  local_158.Rotation.XY.m128d_f64 = (double  [2])(auVar16 | auVar19);
  auVar15._4_4_ = ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar15._0_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar15._8_4_ = ~(uint)uVar10 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar15._12_4_ = ~(uint)(uVar10 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  local_158.Rotation.ZW.m128d_f64 = (double  [2])(auVar13 | auVar15);
LAB_14a2e4ef1:
  URigHierarchy::SetTransform
            (*(URigHierarchy **)(lVar5 + 0x338),(FRigTransformElement *)param_1,pTVar6,CurrentLocal,
             true,false,false,false);
  return true;
}

// operator() @ 14a2e5cc0

bool __thiscall
`UFKControlRig::SetApplyMode'::__l11::<lambda_1>::operator()(void *this,FRigControlElement *param_1)

{
  ERigControlType EVar1;
  longlong *plVar2;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  EVar1 = (param_1->Settings).ControlType;
  if (EVar1 == EulerTransform) {
    plVar2 = *(longlong **)this;
    local_98 = CONCAT44((float)FEulerTransform::Identity.Rotation.Yaw,
                        (float)FEulerTransform::Identity.Rotation.Pitch);
    uStack_90 = CONCAT44((float)FEulerTransform::Identity.Location.field0_0x0._s_0.X,
                         (float)FEulerTransform::Identity.Rotation.Roll);
    local_88 = CONCAT44((float)FEulerTransform::Identity.Location.field0_0x0._s_0.Z,
                        (float)FEulerTransform::Identity.Location.field0_0x0._s_0.Y);
    local_78 = (float)FEulerTransform::Identity.Scale.field0_0x0._s_0.Z;
    uStack_80 = CONCAT44((float)FEulerTransform::Identity.Scale.field0_0x0._s_0.Y,
                         (float)FEulerTransform::Identity.Scale.field0_0x0._s_0.X);
  }
  else {
    if (EVar1 != Float) {
      return true;
    }
    plVar2 = *(longlong **)this;
    uStack_90 = 0;
    local_98 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0.0;
  }
  local_1c = 0;
  uStack_20 = 0;
  local_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  local_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  local_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  local_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x3f0))
            (plVar2,&param_1->field_0x14,&local_98,1,*(undefined8 *)((longlong)this + 8),
             **(undefined1 **)((longlong)this + 0x10),0,0);
  return true;
}

// operator() @ 14a2e7980

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UFKControlRig::Execute_Internal'::__l5::<lambda_2>::operator()
          (void *this,FRigCurveElement *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  FName local_res10;
  FRigElementKey local_b8;
  FRigControlValue local_a8;
  
  UFKControlRig::GetControlName(&local_res10,(ERigElementType *)((longlong)&param_1->_padding_ + 4))
  ;
  local_b8.Type = Control;
  local_b8.Name = local_res10;
  iVar5 = URigHierarchy::GetIndex(*(URigHierarchy **)(*(longlong *)this + 0x338),&local_b8,true);
  if ((iVar5 != -1) &&
     (bVar3 = UFKControlRig::GetControlActive(*(UFKControlRig **)this,iVar5), bVar3)) {
    URigHierarchy::GetControlValueByIndex
              (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_a8,iVar5,Current);
    lVar7 = *(longlong *)this;
    cVar1 = *(char *)(lVar7 + 0xc60);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        if ((param_1 == (FRigCurveElement *)0x0) || (param_1->bIsValueSet == false)) {
          local_a8.FloatStorage.Float00 = local_a8.FloatStorage.Float00 + 0.0;
        }
        else {
          pfVar6 = param_1->Storage;
          if (pfVar6 == (float *)0x0) {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4557919968548616148>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                               ,0x82c,"false");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            lVar7 = *(longlong *)this;
            pfVar6 = &DefaultCurve;
          }
          local_a8.FloatStorage.Float00 = *pfVar6 + local_a8.FloatStorage.Float00;
        }
      }
      else if (cVar1 != '\x02') {
        return true;
      }
    }
    URigHierarchy::SetCurveValue
              (*(URigHierarchy **)(lVar7 + 0x338),param_1,local_a8.FloatStorage.Float00,false,false)
    ;
  }
  return true;
}

// operator() @ 14a2e7ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UFKControlRig::SetApplyMode'::__l13::<lambda_2>::operator()(void *this,FRigControlElement *param_1)

{
  ERigControlType EVar1;
  FRigControlValue *pFVar2;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  FRigControlValue local_94;
  
  EVar1 = (param_1->Settings).ControlType;
  if (EVar1 == EulerTransform) {
    pFVar2 = URigHierarchy::GetControlValue
                       (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_94,param_1,Initial,
                        true);
    uStack_f0 = 0;
    local_108 = (pFVar2->FloatStorage).Float10;
    fStack_104 = (pFVar2->FloatStorage).Float11;
    fStack_100 = (pFVar2->FloatStorage).Float12;
    fStack_fc = (pFVar2->FloatStorage).Float13;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 1;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_118 = (pFVar2->FloatStorage).Float00;
    fStack_114 = (pFVar2->FloatStorage).Float01;
    fStack_110 = (pFVar2->FloatStorage).Float02;
    fStack_10c = (pFVar2->FloatStorage).Float03;
    local_f8 = (ulonglong)(uint)(pFVar2->FloatStorage).Float20;
    (**(code **)(**(longlong **)this + 0x3f0))
              (*(longlong **)this,&param_1->field_0x14,&local_118,1,
               *(undefined8 *)((longlong)this + 8),**(undefined1 **)((longlong)this + 0x10),0,0);
    return true;
  }
  if (EVar1 == Float) {
    pFVar2 = URigHierarchy::GetControlValue
                       (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_94,param_1,Initial,
                        true);
    UControlRig::SetControlValue<float>
              (*(UControlRig **)this,(FName *)&param_1->field_0x14,(pFVar2->FloatStorage).Float00,
               true,*(FRigControlModifiedContext **)((longlong)this + 8),
               *(bool *)*(undefined8 *)((longlong)this + 0x10),false,false);
  }
  return true;
}

// operator() @ 14a2e7e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UFKControlRig::Execute_Internal'::__l9::<lambda_3>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  char cVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  FRigControlElement *pFVar19;
  float *pfVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_518 [32];
  undefined8 local_4f8;
  undefined1 local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e0;
  undefined1 local_4d8;
  FName local_4d0;
  FRigElementKey local_4c8;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  TRotator<double> local_4a0;
  double local_488;
  double dStack_480;
  double local_478;
  double local_470;
  double dStack_468;
  double local_460;
  TRotator<double> local_458;
  double local_440;
  double dStack_438;
  double local_430;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  undefined8 uStack_404;
  undefined8 uStack_3fc;
  undefined8 uStack_3f4;
  undefined8 uStack_3ec;
  undefined8 local_3e4;
  undefined8 uStack_3dc;
  undefined8 local_3d4;
  undefined8 uStack_3cc;
  undefined8 local_3c4;
  undefined8 uStack_3bc;
  undefined8 local_3b4;
  undefined4 local_3ac;
  undefined1 local_3a8;
  undefined2 uStack_3a7;
  undefined1 uStack_3a5;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined1 local_324;
  undefined2 local_323;
  undefined1 local_321;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8 [2];
  double local_2e8 [2];
  TTransform<double> local_2d8;
  undefined8 local_278 [16];
  undefined8 local_1f4 [17];
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_518;
  bVar17 = FRigBaseElement::IsA<FRigBoneElement>(param_1);
  if (bVar17) {
    if ((param_1 == (FRigBaseElement *)0x0) ||
       (bVar17 = FRigBaseElement::IsA<FRigBoneElement>(param_1), !bVar17)) {
      param_1 = (FRigBaseElement *)0x0;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Element",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                          ,0x3f9,L"");
      if (bVar17) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_4d8 = (undefined1)((FRigTransformElement *)param_1)->_padding_;
    UFKControlRig::GetControlName
              (&local_4d0,
               (ERigElementType *)((longlong)&((FRigTransformElement *)param_1)->_padding_ + 4));
    local_4c8.Type = Control;
    local_4c8.Name = local_4d0;
    iVar18 = URigHierarchy::GetIndex(*(URigHierarchy **)(*(longlong *)this + 0x338),&local_4c8,true)
    ;
    lVar3 = *(longlong *)this;
    cVar1 = *(char *)(lVar3 + 0xc60);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      pFVar19 = URigHierarchy::GetChecked<FRigControlElement>
                          (*(URigHierarchy **)(lVar3 + 0x338),iVar18);
      URigHierarchy::GetControlOffsetTransform
                (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_108,pFVar19,InitialLocal);
      URigHierarchy::GetTransform
                (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_a8,
                 (FRigTransformElement *)param_1,CurrentLocal);
      UE::Math::TTransform<double>::GetRelativeTransform(&local_a8,&local_168,&local_108);
      plVar26 = *(longlong **)this;
      uVar23 = *(undefined8 *)((longlong)this + 0x10);
      auVar33._0_8_ =
           local_168.Rotation.XY.m128d_f64[0] * local_168.Rotation.XY.m128d_f64[0] +
           local_168.Rotation.ZW.m128d_f64[0] * local_168.Rotation.ZW.m128d_f64[0];
      auVar33._8_8_ =
           local_168.Rotation.XY.m128d_f64[1] * local_168.Rotation.XY.m128d_f64[1] +
           local_168.Rotation.ZW.m128d_f64[1] * local_168.Rotation.ZW.m128d_f64[1];
      dVar6 = auVar33._8_8_ + auVar33._0_8_;
      dVar7 = auVar33._0_8_ + auVar33._8_8_;
      auVar32._8_4_ = SUB84(dVar7,0);
      auVar32._0_8_ = dVar6;
      auVar32._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar32 = sqrtpd(auVar33,auVar32);
      uVar27 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar6);
      uVar29 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar7);
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      uVar28 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar6);
      uVar30 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar7);
      auVar38._0_8_ = uVar27 & (ulonglong)(auVar37._0_8_ * local_168.Rotation.XY.m128d_f64[0]);
      uVar9 = uVar29 & (ulonglong)(auVar37._8_8_ * local_168.Rotation.XY.m128d_f64[1]);
      auVar38._8_4_ = (undefined4)uVar9;
      auVar38._12_4_ = (undefined4)(uVar9 >> 0x20);
      auVar35._0_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar35._4_4_ =
           ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar35._8_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar35._12_4_ =
           ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_2f8 = (double  [2])(auVar38 | auVar35);
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      auVar36._0_8_ = uVar28 & (ulonglong)(auVar32._0_8_ * local_168.Rotation.ZW.m128d_f64[0]);
      uVar9 = uVar30 & (ulonglong)(auVar32._8_8_ * local_168.Rotation.ZW.m128d_f64[1]);
      auVar36._8_4_ = (undefined4)uVar9;
      auVar36._12_4_ = (undefined4)(uVar9 >> 0x20);
      auVar37._4_4_ =
           ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar37._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar37._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar37._12_4_ =
           ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_2e8 = (double  [2])(auVar36 | auVar37);
      uVar24 = **(undefined1 **)((longlong)this + 0x18);
      uVar22 = **(undefined1 **)((longlong)this + 8);
      local_470 = local_168.Translation.XY.m128d_f64[0];
      dStack_468 = local_168.Translation.XY.m128d_f64[1];
      local_460 = local_168.Translation.ZW.m128d_f64[0];
      local_168.Rotation.XY.m128d_f64 = local_2f8;
      local_168.Rotation.ZW.m128d_f64 = local_2e8;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_2f8,&local_458);
      local_380 = 0;
      uStack_378 = 0;
      local_330 = 0;
      local_370 = 0;
      uStack_368 = 0;
      local_328 = 0;
      local_360 = 0;
      uStack_358 = 0;
      local_323 = 0;
      local_350 = 0;
      uStack_348 = 0;
      local_321 = 0;
      local_340 = 0;
      uStack_338 = 0;
      local_324 = 1;
      local_440 = local_168.Scale3D.XY.m128d_f64[0];
      dStack_438 = local_168.Scale3D.XY.m128d_f64[1];
      local_3a4 = (float)local_458.Pitch;
      puVar21 = local_1f4;
      pfVar20 = &local_3a4;
      puVar25 = local_1f4;
      local_39c = (float)local_458.Roll;
      local_3a0 = (float)local_458.Yaw;
      local_394 = (float)dStack_468;
      local_38c = (float)local_168.Scale3D.XY.m128d_f64[0];
      local_398 = (float)local_470;
      local_388 = (float)local_168.Scale3D.XY.m128d_f64[1];
      local_390 = (float)local_460;
      local_384 = (float)local_168.Scale3D.ZW.m128d_f64[0];
      local_430 = local_168.Scale3D.ZW.m128d_f64[0];
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      URigHierarchy::GetTransform
                (*(URigHierarchy **)(lVar3 + 0x338),&local_2d8,(FRigTransformElement *)param_1,
                 CurrentLocal);
      plVar26 = *(longlong **)this;
      uVar23 = *(undefined8 *)((longlong)this + 0x10);
      uVar24 = **(undefined1 **)((longlong)this + 0x18);
      uVar22 = **(undefined1 **)((longlong)this + 8);
      auVar31._0_8_ =
           local_2d8.Rotation.XY.m128d_f64[0] * local_2d8.Rotation.XY.m128d_f64[0] +
           local_2d8.Rotation.ZW.m128d_f64[0] * local_2d8.Rotation.ZW.m128d_f64[0];
      auVar31._8_8_ =
           local_2d8.Rotation.XY.m128d_f64[1] * local_2d8.Rotation.XY.m128d_f64[1] +
           local_2d8.Rotation.ZW.m128d_f64[1] * local_2d8.Rotation.ZW.m128d_f64[1];
      dVar6 = auVar31._8_8_ + auVar31._0_8_;
      dVar7 = auVar31._0_8_ + auVar31._8_8_;
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = dVar6;
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar32 = sqrtpd(auVar31,auVar5);
      uVar27 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar6);
      uVar29 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar7);
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      uVar28 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar6);
      uVar30 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar7);
      local_4b8 = local_2d8.Translation.XY.m128d_f64[0];
      dStack_4b0 = local_2d8.Translation.XY.m128d_f64[1];
      local_318._0_8_ = uVar27 & (ulonglong)(auVar37._0_8_ * local_2d8.Rotation.XY.m128d_f64[0]);
      uVar9 = uVar29 & (ulonglong)(auVar37._8_8_ * local_2d8.Rotation.XY.m128d_f64[1]);
      local_318._8_4_ = (undefined4)uVar9;
      local_318._12_4_ = (undefined4)(uVar9 >> 0x20);
      auVar34._0_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar34._4_4_ =
           ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar34._8_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar34._12_4_ =
           ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_318 = local_318 | auVar34;
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      local_4a8 = local_2d8.Translation.ZW.m128d_f64[0];
      local_308._0_8_ = uVar28 & (ulonglong)(auVar32._0_8_ * local_2d8.Rotation.ZW.m128d_f64[0]);
      uVar9 = uVar30 & (ulonglong)(auVar32._8_8_ * local_2d8.Rotation.ZW.m128d_f64[1]);
      local_308._8_4_ = (undefined4)uVar9;
      local_308._12_4_ = (undefined4)(uVar9 >> 0x20);
      auVar8._4_4_ = ~(uint)(uVar28 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar8._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar8._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar8._12_4_ =
           ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_308 = local_308 | auVar8;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_318,&local_4a0);
      uStack_404 = 0;
      uStack_3fc = 0;
      local_3b4 = 0;
      uStack_3f4 = 0;
      uStack_3ec = 0;
      local_3ac = 0;
      local_3e4 = 0;
      uStack_3dc = 0;
      uStack_3a7 = 0;
      local_3d4 = 0;
      uStack_3cc = 0;
      uStack_3a5 = 0;
      local_3c4 = 0;
      uStack_3bc = 0;
      local_3a8 = 1;
      local_428 = (float)local_4a0.Pitch;
      fStack_424 = (float)local_4a0.Yaw;
      fStack_420 = (float)local_4a0.Roll;
      fStack_41c = (float)local_4b8;
      local_418 = (float)dStack_4b0;
      fStack_414 = (float)local_4a8;
      local_488 = local_2d8.Scale3D.XY.m128d_f64[0];
      dStack_480 = local_2d8.Scale3D.XY.m128d_f64[1];
      puVar21 = local_278;
      pfVar20 = &local_428;
      puVar25 = local_278;
      fStack_410 = (float)local_2d8.Scale3D.XY.m128d_f64[0];
      local_478 = local_2d8.Scale3D.ZW.m128d_f64[0];
      fStack_40c = (float)local_2d8.Scale3D.XY.m128d_f64[1];
      local_408 = (float)local_2d8.Scale3D.ZW.m128d_f64[0];
    }
    uVar13 = *(undefined8 *)(pfVar20 + 2);
    local_4e0 = 1;
    uVar14 = *(undefined8 *)(pfVar20 + 4);
    uVar15 = *(undefined8 *)(pfVar20 + 6);
    local_4e8 = 0;
    *puVar21 = *(undefined8 *)pfVar20;
    puVar21[1] = uVar13;
    uVar13 = *(undefined8 *)(pfVar20 + 8);
    uVar16 = *(undefined8 *)(pfVar20 + 10);
    puVar21[2] = uVar14;
    puVar21[3] = uVar15;
    uVar14 = *(undefined8 *)(pfVar20 + 0xc);
    uVar15 = *(undefined8 *)(pfVar20 + 0xe);
    puVar21[4] = uVar13;
    puVar21[5] = uVar16;
    uVar13 = *(undefined8 *)(pfVar20 + 0x10);
    uVar16 = *(undefined8 *)(pfVar20 + 0x12);
    puVar21[6] = uVar14;
    puVar21[7] = uVar15;
    uVar14 = *(undefined8 *)(pfVar20 + 0x14);
    uVar15 = *(undefined8 *)(pfVar20 + 0x16);
    puVar21[8] = uVar13;
    puVar21[9] = uVar16;
    uVar13 = *(undefined8 *)(pfVar20 + 0x18);
    uVar16 = *(undefined8 *)(pfVar20 + 0x1a);
    puVar21[10] = uVar14;
    puVar21[0xb] = uVar15;
    puVar21[0xc] = uVar13;
    puVar21[0xd] = uVar16;
    fVar10 = pfVar20[0x1d];
    fVar11 = pfVar20[0x1e];
    fVar12 = pfVar20[0x1f];
    fVar2 = pfVar20[0x20];
    *(float *)(puVar21 + 0xe) = pfVar20[0x1c];
    *(float *)((longlong)puVar21 + 0x74) = fVar10;
    *(float *)(puVar21 + 0xf) = fVar11;
    *(float *)((longlong)puVar21 + 0x7c) = fVar12;
    *(float *)(puVar21 + 0x10) = fVar2;
    local_4f8 = uVar23;
    local_4f0 = uVar24;
    (**(code **)(*plVar26 + 0x3f0))(plVar26,&local_4d0,puVar25,uVar22);
  }
  else {
    *param_2 = false;
  }
  return;
}

// operator() @ 14a2e83e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UFKControlRig::CreateRigElements'::__l29::<lambda_3>::operator()
          (void *this,FRigBoneElement *param_1)

{
  URigHierarchy *this_00;
  longlong lVar1;
  URigHierarchyController *this_01;
  __m128d _Var2;
  __m128d _Var3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  FRigBaseElement *this_02;
  FRigControlSettings *pFVar8;
  FRigBaseElement *pFVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  FName local_res10;
  FName local_res18;
  undefined1 local_728 [8];
  double dStack_720;
  undefined8 local_6f4;
  float fStack_6ec;
  float fStack_6e8;
  float local_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float fStack_6d8;
  float local_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float fStack_6c8;
  float local_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float fStack_6b8;
  float local_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float local_6a4;
  float fStack_6a0;
  float local_69c;
  undefined4 local_698;
  double local_690 [2];
  double local_680 [2];
  double local_670 [2];
  undefined1 local_658 [16];
  FRigControlValue local_648;
  TTransform<double> local_5b8;
  TTransform<double> local_558;
  FRigControlSettings local_4f8;
  FRigControlSettings local_2d8;
  
  local_res10 = *(FName *)((longlong)&param_1->_padding_ + 4);
  UFKControlRig::GetControlName(&local_res18,(ERigElementType *)&local_res10);
  this_00 = *(URigHierarchy **)(*(longlong *)this + 0x338);
  _local_728 = (FRigElementKey)*(undefined1 (*) [12])&param_1->_padding_;
  iVar7 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)local_728,true);
  this_02 = URigHierarchy::Get(this_00,iVar7);
  if (this_02 != (FRigBaseElement *)0x0) {
    bVar6 = FRigBaseElement::IsA<FRigSingleParentElement>(this_02);
    if (bVar6) {
      pFVar9 = this_02 + 3;
    }
    else {
      bVar6 = FRigBaseElement::IsA<FRigMultiParentElement>(this_02);
      if ((!bVar6) || (*(int *)&this_02[4].CachedNameString.Data.AllocatorInstance.Data < 1))
      goto LAB_14a2e84f8;
      pFVar9 = (FRigBaseElement *)this_02[4].ComponentIndices.AllocatorInstance.Data;
      if (pFVar9 == (FRigBaseElement *)0x0) {
        pFVar9 = this_02 + 3;
      }
    }
    lVar1 = pFVar9->_padding_;
    if (lVar1 != 0) {
      uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
      uVar10 = *(uint *)(lVar1 + 0x18);
      uVar11 = (uint)*(undefined8 *)(lVar1 + 0x10);
      goto LAB_14a2e8509;
    }
  }
LAB_14a2e84f8:
  auVar5 = (undefined1  [16])_local_728;
  uVar10 = 0;
  local_728._0_4_ = local_728._1_4_ << 8;
  dStack_720 = auVar5._8_8_;
  local_728._4_4_ = 0;
  uVar12 = 0;
  uVar11 = local_728._0_4_;
LAB_14a2e8509:
  auVar5 = (undefined1  [16])_local_728;
  local_728._4_4_ = uVar12;
  local_728._0_4_ = uVar11;
  uVar4 = local_728;
  _local_728 = (double  [2])auVar5;
  FRigControlSettings::FRigControlSettings(&local_4f8);
  _Var3 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  this_01 = *(URigHierarchyController **)((longlong)this + 8);
  local_690[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_690[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_4f8.DisplayName = local_res10;
  local_728 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  dStack_720 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_4f8.ControlType = EulerTransform;
  local_680[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_680[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_6a4 = 0.0;
  fStack_6a0 = 0.0;
  local_670[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_670[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_69c = 0.0;
  local_6f4 = 0;
  fStack_6ec = 0.0;
  fStack_6e8 = 0.0;
  local_6e4 = 0.0;
  fStack_6e0 = 0.0;
  fStack_6dc = 0.0;
  fStack_6d8 = 0.0;
  local_698._0_1_ = true;
  local_698._1_3_ = 0;
  local_6d4 = 0.0;
  fStack_6d0 = 0.0;
  fStack_6cc = 0.0;
  fStack_6c8 = 0.0;
  local_6c4 = 0.0;
  fStack_6c0 = 0.0;
  fStack_6bc = 0.0;
  fStack_6b8 = 0.0;
  local_6b4 = 0.0;
  fStack_6b0 = 0.0;
  fStack_6ac = 0.0;
  fStack_6a8 = 0.0;
  fVar18 = (float)FEulerTransform::Identity.Rotation.Pitch;
  local_658 = ZEXT416((uint)(float)FEulerTransform::Identity.Location.field0_0x0._s_0.Y);
  fVar13 = (float)FEulerTransform::Identity.Rotation.Yaw;
  fVar14 = (float)FEulerTransform::Identity.Rotation.Roll;
  fVar15 = (float)FEulerTransform::Identity.Location.field0_0x0._s_0.X;
  fVar16 = (float)FEulerTransform::Identity.Location.field0_0x0._s_0.Z;
  fVar17 = (float)FEulerTransform::Identity.Scale.field0_0x0._s_0.X;
  fVar19 = (float)FEulerTransform::Identity.Scale.field0_0x0._s_0.Y;
  fVar20 = (float)FEulerTransform::Identity.Scale.field0_0x0._s_0.Z;
  pFVar8 = FRigControlSettings::FRigControlSettings(&local_2d8,&local_4f8);
  local_5b8.Translation.ZW.m128d_f64[0] = local_670[0];
  local_5b8.Translation.ZW.m128d_f64[1] = local_670[1];
  local_558.Translation.ZW.m128d_f64[0] = local_670[0];
  local_558.Translation.ZW.m128d_f64[1] = local_670[1];
  local_5b8.Rotation.XY.m128d_f64[0] = local_690[0];
  local_5b8.Rotation.XY.m128d_f64[1] = local_690[1];
  local_5b8.Rotation.ZW.m128d_f64[0] = (double)local_728;
  local_5b8.Rotation.ZW.m128d_f64[1] = dStack_720;
  local_5b8.Translation.XY.m128d_f64[0] = local_680[0];
  local_5b8.Translation.XY.m128d_f64[1] = local_680[1];
  local_5b8.Scale3D.XY.m128d_f64 = _Var2.m128d_f64;
  local_5b8.Scale3D.ZW.m128d_f64 = _Var3.m128d_f64;
  local_558.Rotation.XY.m128d_f64[0] = local_690[0];
  local_558.Rotation.XY.m128d_f64[1] = local_690[1];
  local_558.Rotation.ZW.m128d_f64[0] = (double)local_728;
  local_558.Rotation.ZW.m128d_f64[1] = dStack_720;
  local_558.Translation.XY.m128d_f64[0] = local_680[0];
  local_558.Translation.XY.m128d_f64[1] = local_680[1];
  local_558.Scale3D.XY.m128d_f64 = _Var2.m128d_f64;
  local_558.Scale3D.ZW.m128d_f64 = _Var3.m128d_f64;
  local_648.FloatStorage.Float01_2 = local_6d4;
  local_648.FloatStorage.Float00_2 = fStack_6d8;
  local_648.FloatStorage.Float03_2 = fStack_6cc;
  local_648.FloatStorage.Float02_2 = fStack_6d0;
  local_648.FloatStorage.Float10 = (float)local_658._0_4_;
  local_648.FloatStorage.bValid = local_698._0_1_;
  local_648.FloatStorage._129_3_ = local_698._1_3_;
  local_648.FloatStorage.Float21 = (float)local_6f4;
  local_648.FloatStorage.Float22 = local_6f4._4_4_;
  local_648.FloatStorage.Float23 = fStack_6ec;
  local_648.FloatStorage.Float31 = local_6e4;
  local_648.FloatStorage.Float30 = fStack_6e8;
  local_648.FloatStorage.Float33 = fStack_6dc;
  local_648.FloatStorage.Float32 = fStack_6e0;
  local_648.FloatStorage.Float21_2 = local_6b4;
  local_648.FloatStorage.Float20_2 = fStack_6b8;
  local_648.FloatStorage.Float23_2 = fStack_6ac;
  local_648.FloatStorage.Float22_2 = fStack_6b0;
  local_648.FloatStorage.Float11_2 = local_6c4;
  local_648.FloatStorage.Float10_2 = fStack_6c8;
  local_648.FloatStorage.Float13_2 = fStack_6bc;
  local_648.FloatStorage.Float12_2 = fStack_6c0;
  local_648.FloatStorage.Float31_2 = local_6a4;
  local_648.FloatStorage.Float30_2 = fStack_6a8;
  local_648.FloatStorage.Float33_2 = local_69c;
  local_648.FloatStorage.Float32_2 = fStack_6a0;
  dStack_720._0_4_ = uVar10;
  _local_728 = (double  [2])CONCAT88(dStack_720,uVar4);
  local_648.FloatStorage.Float00 = fVar18;
  local_648.FloatStorage.Float01 = fVar13;
  local_648.FloatStorage.Float02 = fVar14;
  local_648.FloatStorage.Float03 = fVar15;
  local_648.FloatStorage.Float11 = fVar16;
  local_648.FloatStorage.Float12 = fVar17;
  local_648.FloatStorage.Float13 = fVar19;
  local_648.FloatStorage.Float20 = fVar20;
  URigHierarchyController::AddControl
            (this_01,(FRigElementKey *)local_690,local_res18,(FRigElementKey *)local_728,pFVar8,
             &local_648,&local_558,&local_5b8,false,false);
  if (local_4f8.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.FilteredChannels.AllocatorInstance.Data);
  }
  if (local_4f8.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.PreviouslyDrivenControls.AllocatorInstance.Data);
  }
  if (local_4f8.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.DrivenControls.AllocatorInstance.Data);
  }
  if (local_4f8.Customization.RemovedSpaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_4f8.Customization.RemovedSpaces.AllocatorInstance.Data);
  }
  if (local_4f8.Customization.AvailableSpaces.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Customization.AvailableSpaces.AllocatorInstance.Data);
  }
  if (local_4f8.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.LimitEnabled.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14a2e8a00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UFKControlRig::Execute_Internal'::__l9::<lambda_4>::operator()
          (void *this,FRigCurveElement *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  float *pfVar4;
  float fVar5;
  FName local_res10;
  FRigElementKey local_128;
  ulonglong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  ulonglong local_94 [10];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  UFKControlRig::GetControlName(&local_res10,(ERigElementType *)((longlong)&param_1->_padding_ + 4))
  ;
  local_128.Type = Control;
  local_128.Name = local_res10;
  URigHierarchy::GetIndex(*(URigHierarchy **)(*(longlong *)this + 0x338),&local_128,true);
  if ((param_1 == (FRigCurveElement *)0x0) || (param_1->bIsValueSet == false)) {
    fVar5 = 0.0;
  }
  else {
    pfVar4 = param_1->Storage;
    if (pfVar4 == (float *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548616148>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x82c,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pfVar4 = &DefaultCurve;
    }
    fVar5 = *pfVar4;
  }
  uStack_110 = 0;
  local_118 = (ulonglong)(uint)fVar5;
  local_108 = 0;
  uStack_100 = 0;
  local_98 = 1;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_94[0] = local_118;
  local_94[1] = 0;
  local_94[2] = 0;
  local_94[3] = 0;
  local_94[4] = 0;
  local_94[5] = 0;
  local_94[6] = 0;
  local_94[7] = 0;
  local_94[8] = 0;
  local_94[9] = 0;
  local_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  uStack_2c = 0;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  local_14 = 1;
  (**(code **)(**(longlong **)this + 0x3f0))
            (*(longlong **)this,&local_res10,local_94,**(undefined1 **)((longlong)this + 8),
             *(undefined8 *)((longlong)this + 0x10),**(undefined1 **)((longlong)this + 0x18),0,0);
  return true;
}

// operator() @ 14a2e8bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UFKControlRig::CreateRigElements'::__l44::<lambda_5>::operator()
          (void *this,FRigCurveElement *param_1)

{
  float fVar1;
  URigHierarchyController *this_00;
  code *pcVar2;
  __m128d _Var3;
  __m128d _Var4;
  __m128d _Var5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  bool bVar9;
  undefined1 uVar10;
  FString *pFVar11;
  float *pfVar12;
  FRigControlSettings *pFVar13;
  ForAnyElementType FVar14;
  FName local_res10;
  FName local_res18;
  uint local_708;
  FRigElementKey local_6f8;
  FString local_6e8;
  FString local_6d8;
  FRigElementKey local_6c8;
  undefined1 local_6b8 [16];
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  bool local_638;
  undefined3 uStack_637;
  TTransform<double> local_628;
  TTransform<double> local_5c8 [2];
  undefined4 local_4e8;
  FRigControlSettings local_4d8;
  FRigControlSettings local_2b8;
  
  UFKControlRig::GetControlName(&local_res18,(ERigElementType *)((longlong)&param_1->_padding_ + 4))
  ;
  FRigControlSettings::FRigControlSettings(&local_4d8);
  local_4d8.ControlType = Float;
  pFVar11 = ::FName::ToString((FName *)((longlong)&param_1->_padding_ + 4),&local_6d8);
  ::FString::ConcatFC(&local_6e8,pFVar11,L" Curve");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_6e8.Data.ArrayNum != 0) {
    FVar14.Data = local_6e8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar14.Data);
  if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
  }
  if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
  }
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var5.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var4.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var3.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_4d8.DisplayName = local_res10;
  this_00 = (URigHierarchyController *)**(undefined8 **)this;
  pfVar12 = param_1->Storage;
  if (pfVar12 == (float *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548616148>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x82c,"false");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    pfVar12 = &DefaultCurve;
  }
  fVar1 = *pfVar12;
  local_4e8._0_1_ = true;
  local_4e8._1_3_ = 0;
  pFVar13 = FRigControlSettings::FRigControlSettings(&local_2b8,&local_4d8);
  local_708 = local_708 & 0xffffff00;
  local_638 = local_4e8._0_1_;
  uStack_637 = local_4e8._1_3_;
  local_6f8._0_8_ = ZEXT48(local_708);
  local_6f8.Name.Number = 0;
  local_628.Rotation.XY.m128d_f64 = _Var3.m128d_f64;
  local_628.Rotation.ZW.m128d_f64 = _Var4.m128d_f64;
  local_628.Translation.XY.m128d_f64 = _Var5.m128d_f64;
  local_628.Translation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_628.Scale3D.XY.m128d_f64 = _Var7.m128d_f64;
  local_628.Scale3D.ZW.m128d_f64 = _Var8.m128d_f64;
  local_5c8[0].Rotation.XY.m128d_f64 = _Var3.m128d_f64;
  local_5c8[0].Rotation.ZW.m128d_f64 = _Var4.m128d_f64;
  local_5c8[0].Translation.XY.m128d_f64 = _Var5.m128d_f64;
  local_5c8[0].Translation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_5c8[0].Scale3D.XY.m128d_f64 = _Var7.m128d_f64;
  local_5c8[0].Scale3D.ZW.m128d_f64 = _Var8.m128d_f64;
  local_6b8 = ZEXT416((uint)fVar1);
  local_6a8._0_4_ = 0.0;
  local_6a8._4_4_ = 0.0;
  uStack_6a0._0_4_ = 0.0;
  uStack_6a0._4_4_ = 0.0;
  local_698._0_4_ = 0.0;
  local_698._4_4_ = 0.0;
  uStack_690._0_4_ = 0.0;
  uStack_690._4_4_ = 0.0;
  local_688._0_4_ = 0.0;
  local_688._4_4_ = 0.0;
  uStack_680._0_4_ = 0.0;
  uStack_680._4_4_ = 0.0;
  local_678._0_4_ = 0.0;
  local_678._4_4_ = 0.0;
  uStack_670._0_4_ = 0.0;
  uStack_670._4_4_ = 0.0;
  local_668._0_4_ = 0.0;
  local_668._4_4_ = 0.0;
  uStack_660._0_4_ = 0.0;
  uStack_660._4_4_ = 0.0;
  local_658._0_4_ = 0.0;
  local_658._4_4_ = 0.0;
  uStack_650._0_4_ = 0.0;
  uStack_650._4_4_ = 0.0;
  local_648._0_4_ = 0.0;
  local_648._4_4_ = 0.0;
  uStack_640._0_4_ = 0.0;
  uStack_640._4_4_ = 0.0;
  URigHierarchyController::AddControl
            (this_00,&local_6c8,local_res18,&local_6f8,pFVar13,(FRigControlValue *)local_6b8,
             local_5c8,&local_628,false,false);
  if (local_4d8.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.FilteredChannels.AllocatorInstance.Data);
  }
  if (local_4d8.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.PreviouslyDrivenControls.AllocatorInstance.Data);
  }
  if (local_4d8.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.DrivenControls.AllocatorInstance.Data);
  }
  if (local_4d8.Customization.RemovedSpaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_4d8.Customization.RemovedSpaces.AllocatorInstance.Data);
  }
  if (local_4d8.Customization.AvailableSpaces.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Customization.AvailableSpaces.AllocatorInstance.Data);
  }
  if (local_4d8.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.LimitEnabled.AllocatorInstance.Data);
  }
  return true;
}

// CreateRigElements @ 14a2fe620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UFKControlRig::CreateRigElements(UFKControlRig *this,FReferenceSkeleton *param_1,USkeleton *param_2)

{
  FName *pFVar1;
  FScriptContainerElement *_Src;
  URigHierarchy *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FRigBoneElement *this_01;
  int iVar6;
  uint uVar7;
  ForAnyElementType this_02;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  FName *pFVar11;
  undefined1 local_res8 [8];
  FReferenceSkeleton *local_res10;
  undefined1 local_res20 [8];
  int local_148 [2];
  URigHierarchyController *local_140;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  FName local_128;
  int *local_120;
  URigHierarchyController *local_118;
  UFKControlRig **local_110;
  URigHierarchyController **local_108;
  FRigElementKey local_100;
  UFKControlRig *local_f0;
  URigHierarchyController *local_e8;
  code *local_e0;
  int **local_d8;
  code *local_d0;
  URigHierarchyController **local_c8;
  code *local_c0;
  UFKControlRig ***local_b8;
  code *local_b0;
  URigHierarchyController ***local_a8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_a0;
  code *local_88 [2];
  undefined **local_78;
  UFKControlRig *local_70;
  undefined8 local_60;
  FRigElementKey local_58 [2];
  
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x358))();
  URigHierarchy::Reset((URigHierarchy *)this->_padding_);
  local_140 = URigHierarchy::GetController((URigHierarchy *)this->_padding_,true);
  if (local_140 != (URigHierarchyController *)0x0) {
    iVar6 = (this->InitializationOptions).CurveNames.ArrayNum;
    uVar7 = 0;
    local_148[0] = *(int *)(this->_padding_ + 0x330);
    if (0 < iVar6) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = ::FName::GetStringLength
                          ((FName *)((this->InitializationOptions).CurveNames.AllocatorInstance.Data
                                    + (longlong)(int)uVar7 * 8));
        iVar6 = (this->InitializationOptions).CurveNames.ArrayNum;
        iVar5 = uVar4 + 0xe;
        if ((int)(uVar4 + 0xe) < local_148[0]) {
          iVar5 = local_148[0];
        }
        uVar7 = uVar7 + 1;
        local_148[0] = iVar5;
      } while ((int)uVar7 < iVar6);
    }
    if (param_2 != (USkeleton *)0x0) {
      local_120 = local_148;
      local_d8 = &local_120;
      local_e0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UFKControlRig::CreateRigElements'::__l10::<lambda_1>,void,FName,FCurveMetaData_const_&>
                 ::Call;
      USkeleton::ForEachCurveMetaData
                (param_2,(TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *)&local_e0);
    }
    _Src = (param_1->FinalRefBoneInfo).AllocatorInstance.Data;
    local_130 = (param_1->FinalRefBoneInfo).ArrayNum;
    lVar9 = (longlong)local_130;
    local_138.Data = (FScriptContainerElement *)0x0;
    if (local_130 == 0) {
      local_12c = 0;
      iVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_130,0,&local_138,local_130,&local_12c);
      memcpy(local_138.Data,_Src,lVar9 * 0xc);
      iVar6 = local_130;
    }
    pFVar1 = (FName *)(local_138.Data + (longlong)iVar6 * 0xc);
    this_02.Data = local_138.Data;
    iVar5 = iVar6;
    while( true ) {
      if (iVar5 != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMeshBoneInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((FName *)this_02.Data == pFVar1) break;
      uVar7 = ::FName::GetStringLength((FName *)this_02.Data);
      iVar5 = uVar7 + 8;
      if ((int)(uVar7 + 8) < local_148[0]) {
        iVar5 = local_148[0];
      }
      this_02.Data = (FScriptContainerElement *)&((FName *)((longlong)this_02.Data + 8))->Number;
      local_148[0] = iVar5;
      iVar5 = local_130;
    }
    URigHierarchy::SetMaxNameLength((URigHierarchy *)this->_padding_,local_148[0]);
    uVar8 = 0;
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    URigHierarchyController::ImportBones
              (local_140,&local_a0,&param_1->FinalRefBoneInfo,&local_res10->FinalRefBonePose,
               &local_128,false,false,true,false);
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    if ((this->InitializationOptions).bGenerateCurveControls != false) {
      iVar6 = (this->InitializationOptions).CurveNames.ArrayNum;
      uVar10 = uVar8;
      if (iVar6 < 1) {
        if ((param_2 != (USkeleton *)0x0) && ((this->InitializationOptions).bImportCurves != false))
        {
          local_118 = local_140;
          local_c8 = &local_118;
          local_d0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UFKControlRig::CreateRigElements'::__l26::<lambda_2>,void,FName,FCurveMetaData_const_&>
                     ::Call;
          USkeleton::ForEachCurveMetaData
                    (param_2,(TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *)&local_d0);
        }
      }
      else {
        do {
          uVar4 = (uint)uVar8;
          uVar7 = 0;
          if ((int)uVar4 < iVar6) {
            uVar7 = ~uVar4 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          URigHierarchyController::AddCurve
                    (local_140,local_58,
                     *(FName *)((this->InitializationOptions).CurveNames.AllocatorInstance.Data +
                               uVar10),0.0,false,false);
          iVar6 = (this->InitializationOptions).CurveNames.ArrayNum;
          uVar8 = (ulonglong)(uVar4 + 1);
          uVar10 = uVar10 + 8;
        } while ((int)(uVar4 + 1) < iVar6);
      }
    }
    if ((this->InitializationOptions).bGenerateBoneControls != false) {
      iVar6 = (this->InitializationOptions).BoneNames.ArrayNum;
      local_e8 = local_140;
      local_f0 = this;
      if (iVar6 == 0) {
        local_110 = &local_f0;
        local_b8 = &local_110;
        local_c0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UFKControlRig::CreateRigElements'::__l41::<lambda_4>,bool,FRigBoneElement_*>
                   ::Call;
        URigHierarchy::ForEach<FRigBoneElement>
                  ((URigHierarchy *)this->_padding_,
                   (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_c0);
      }
      else {
        pFVar11 = (FName *)(this->InitializationOptions).BoneNames.AllocatorInstance.Data;
        pFVar1 = pFVar11 + iVar6;
        while( true ) {
          if ((this->InitializationOptions).BoneNames.ArrayNum != iVar6) {
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar11 == pFVar1) break;
          this_00 = (URigHierarchy *)this->_padding_;
          local_100.Name = *pFVar11;
          local_100.Type = Bone;
          iVar5 = URigHierarchy::GetIndex(this_00,&local_100,true);
          this_01 = (FRigBoneElement *)URigHierarchy::Get(this_00,iVar5);
          if ((this_01 != (FRigBoneElement *)0x0) &&
             (bVar3 = FRigBaseElement::IsA<FRigBoneElement>((FRigBaseElement *)this_01), bVar3)) {
            `UFKControlRig::CreateRigElements'::__l29::<lambda_3>::operator()(&local_f0,this_01);
          }
          pFVar11 = pFVar11 + 1;
        }
      }
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_60 = 0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                    ::Call;
      local_70 = this;
      URigHierarchy::Traverse
                ((URigHierarchy *)this->_padding_,
                 (TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_88,true);
    }
    if ((this->InitializationOptions).bGenerateCurveControls != false) {
      local_108 = &local_140;
      local_a8 = &local_108;
      local_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UFKControlRig::CreateRigElements'::__l44::<lambda_5>,bool,FRigCurveElement_*>
                 ::Call;
      URigHierarchy::ForEach<FRigCurveElement>
                ((URigHierarchy *)this->_padding_,
                 (TFunctionRef<bool___cdecl(FRigCurveElement_*)> *)&local_b0);
    }
    RefreshActiveControls(this);
    if ((FName *)local_138.Data != (FName *)0x0) {
      FMemory::Free(local_138.Data);
    }
  }
  return;
}

// CreateRigElements @ 14a2feae0

void __thiscall UFKControlRig::CreateRigElements(UFKControlRig *this,USkeletalMesh *param_1)

{
  USkeleton *pUVar1;
  FReferenceSkeleton *pFVar2;
  
  if (param_1 != (USkeletalMesh *)0x0) {
    pUVar1 = (USkeleton *)(**(code **)(param_1->_padding_ + 0x400))(param_1);
    pFVar2 = (FReferenceSkeleton *)(**(code **)(param_1->_padding_ + 0x318))(param_1);
    CreateRigElements(this,pFVar2,pUVar1);
  }
  return;
}

// Execute_Internal @ 14a301e20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UFKControlRig::Execute_Internal(UFKControlRig *this,FName *param_1)

{
  URigHierarchy *this_00;
  TFunctionRef<bool___cdecl(FRigCurveElement_*)> *pTVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  UFKControlRig *local_b0;
  UFKControlRig *local_a8;
  FName local_a0;
  code *local_98;
  UFKControlRig **local_90;
  code *local_88;
  UFKControlRig **local_80;
  code *local_78;
  UFKControlRig **local_70;
  UFKControlRig *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48 [5];
  undefined8 *local_20;
  
  FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
  if (*param_1 == local_res20) {
    local_90 = &local_b0;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`UFKControlRig::Execute_Internal'::__l5::<lambda_1>,bool,FRigBoneElement_*>
               ::Call;
    local_b0 = this;
    URigHierarchy::ForEach<FRigBoneElement>
              ((URigHierarchy *)this->_padding_,
               (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_98);
    local_80 = &local_a8;
    pTVar1 = (TFunctionRef<bool___cdecl(FRigCurveElement_*)> *)&local_88;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UFKControlRig::Execute_Internal'::__l5::<lambda_2>,bool,FRigCurveElement_*>
               ::Call;
    local_a8 = this;
  }
  else {
    FLazyName::Resolve(&FRigUnit_InverseExecution::EventName);
    if (*param_1 != local_a0) {
      return true;
    }
    this_00 = (URigHierarchy *)this->_padding_;
    local_b8 = 0;
    local_b4 = 0;
    local_res18[0] = 0;
    local_48[0] = (code *)0x0;
    local_res10[0] = 1;
    local_c8[0] = 0;
    local_c4 = 0x1ff;
    local_c0 = 0x7f7fffff;
    local_20 = FMemory::Malloc(0x28,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::`9'::<lambda_3>,0,1>::
                 _vftable_;
    local_20[1] = this;
    local_20[2] = local_res10;
    local_20[3] = local_c8;
    local_20[4] = local_res18;
    if (local_20 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UFKControlRig::Execute_Internal'::__l9::<lambda_3>,void,FRigBaseElement_*,bool_&>
                    ::Call;
    }
    URigHierarchy::Traverse
              (this_00,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_48,true);
    local_60 = local_res10;
    pTVar1 = (TFunctionRef<bool___cdecl(FRigCurveElement_*)> *)&local_78;
    local_58 = local_c8;
    local_50 = local_res18;
    local_70 = &local_68;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UFKControlRig::Execute_Internal'::__l9::<lambda_4>,bool,FRigCurveElement_*>
               ::Call;
    local_68 = this;
  }
  URigHierarchy::ForEach<FRigCurveElement>((URigHierarchy *)this->_padding_,pTVar1);
  return true;
}

// GetControlActive @ 14a30b960

bool __thiscall UFKControlRig::GetControlActive(UFKControlRig *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->IsControlActive).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)(this->IsControlActive).AllocatorInstance.Data[param_1];
  }
  return false;
}

// GetControlName @ 14a30ba70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __cdecl UFKControlRig::GetControlName(FName *param_1,ERigElementType *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  FName *pFVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  FString *this;
  char *in_R8;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this_00
  ;
  TPairInitializer<FName_const_&,FName_&&> local_res10;
  FName local_res20;
  ERigElementType *local_38;
  FName *local_30;
  
  if (*(FName *)param_2 != (FName)0x0) {
    cVar1 = *in_R8;
    if ((cVar1 == '\x01') || (cVar1 == '\b')) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(uint *)(lVar2 + 0x9860) & 1) == 0) {
        *(uint *)(lVar2 + 0x9860) = *(uint *)(lVar2 + 0x9860) | 1;
        __tlregdtor(`UFKControlRig::GetControlName'::__l8::
                    _dynamic_atexit_destructor_for__NameToControlMappings__);
      }
      lVar3 = 0;
      if (*in_R8 != '\x01') {
        lVar3 = 0x50;
      }
      this_00 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                 *)(lVar3 + lVar2 + 0x9700);
      pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)this_00,*(FName *)param_2);
      if (pFVar4 == (FName *)0x0) {
        if ((*(uint *)(lVar2 + 0x9860) & 2) == 0) {
          *(uint *)(lVar2 + 0x9860) = *(uint *)(lVar2 + 0x9860) | 2;
          __tlregdtor(`UFKControlRig::GetControlName'::__l13::
                      _dynamic_atexit_destructor_for__ScratchString__);
        }
        this = (FString *)(lVar2 + 0x97a0);
        ::FName::ToString((FName *)param_2,this);
        ::FString::ToLowerInline(this);
        if (*in_R8 == '\b') {
          sVar5 = wcslen(CurvePostFix);
          ::FString::AppendChars(this,CurvePostFix,(int)sVar5);
        }
        sVar5 = wcslen(ControlPostFix);
        ::FString::AppendChars(this,ControlPostFix,(int)sVar5);
        if (*(int *)(lVar2 + 0x97a8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(this->Data).AllocatorInstance.Data;
        }
        local_38 = param_2;
        local_30 = ::FName::FName(&local_res20,pwVar6);
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,FName_&&>_>(this_00,&local_res10,(bool *)&local_38);
        *param_1 = *(FName *)(*(longlong *)&this_00->Elements + 8 +
                             (longlong)(int)local_res10.Key * 0x18);
      }
      else {
        *param_1 = *pFVar4;
      }
      return (FName)param_1;
    }
    if (cVar1 == '\x04') {
      *param_1 = *(FName *)param_2;
      return (FName)param_1;
    }
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (FName)param_1;
}

// GetControlNames @ 14a30bc20

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UFKControlRig::GetControlNames
          (UFKControlRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  (**(code **)(this->_padding_ + 0x420))(this,&local_28);
  iVar4 = (int)local_20;
  uVar8 = (ulonglong)(int)local_20;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  plVar1 = local_28 + uVar8;
  plVar9 = local_28;
  while( true ) {
    if ((int)uVar8 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar9 == plVar1) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar10 = (FScriptContainerElement *)(*plVar9 + 0x14);
    if ((pFVar2 <= pFVar10) && (pFVar10 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    plVar9 = plVar9 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         *(undefined8 *)pFVar10;
    uVar8 = local_20 & 0xffffffff;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetControlTargetName @ 14a30d7c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __cdecl UFKControlRig::GetControlTargetName(FName *param_1,ERigElementType *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName FVar5;
  longlong lVar6;
  FName *pFVar7;
  size_t sVar8;
  wchar_t *_Str;
  FString *this;
  char *in_R8;
  wchar_t *pwVar9;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this_00
  ;
  TPairInitializer<FName_const_&,FName_&&> local_res10;
  FName local_res20;
  FName local_68;
  FString local_60;
  ERigElementType *local_50;
  FName *local_48;
  
  if (*(undefined8 *)param_2 == None) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    return (FName)param_1;
  }
  pwVar9 = L"";
  if ((*in_R8 != '\x01') && (*in_R8 != '\b')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType == ERigElementType::Bone || InType == ERigElementType::Curve",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\FKControlRig.cpp"
                       ,0x4c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FName)(*pcVar2)();
      return FVar5;
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0x9864) & 1) == 0) {
    *(uint *)(lVar1 + 0x9864) = *(uint *)(lVar1 + 0x9864) | 1;
    __tlregdtor(`UFKControlRig::GetControlTargetName'::__l5::
                _dynamic_atexit_destructor_for__NameToTargetMappings__);
  }
  lVar6 = 0;
  if (*in_R8 != '\x01') {
    lVar6 = 0x50;
  }
  this_00 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)(lVar6 + lVar1 + 0x97b0);
  pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)this_00,*(FName *)param_2);
  if (pFVar7 == (FName *)0x0) {
    if ((*(uint *)(lVar1 + 0x9864) & 2) == 0) {
      *(uint *)(lVar1 + 0x9864) = *(uint *)(lVar1 + 0x9864) | 2;
      __tlregdtor(`UFKControlRig::GetControlTargetName'::__l17::
                  _dynamic_atexit_destructor_for__ScratchString__);
    }
    this = (FString *)(lVar1 + 0x9850);
    ::FName::ToString((FName *)param_2,this);
    _Str = CurvePostFix;
    if (*in_R8 != '\b') {
      _Str = ControlPostFix;
    }
    if (_Str == (wchar_t *)0x0) {
      iVar4 = -1;
    }
    else {
      sVar8 = wcslen(_Str);
      iVar4 = ::FString::Find(this,_Str,(int)sVar8,CaseSensitive,FromStart,-1);
    }
    if ((iVar4 == -1) && (iVar4 = *(int *)(lVar1 + 39000) + -1, *(int *)(lVar1 + 39000) == 0)) {
      iVar4 = 0;
    }
    if (*(int *)(lVar1 + 39000) != 0) {
      pwVar9 = (wchar_t *)(this->Data).AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_60,pwVar9,iVar4);
    ::FString::ToLowerInline(&local_60);
    iVar4 = local_60.Data.ArrayNum + -1;
    if (local_60.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    pFVar7 = ::FName::FName(&local_68,iVar4,(wchar_t *)local_60.Data.AllocatorInstance.Data,
                            FNAME_Add);
    local_res20 = *pFVar7;
    local_48 = &local_res20;
    local_50 = param_2;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_&&>_>(this_00,&local_res10,(bool *)&local_50);
    *param_1 = *(FName *)(*(longlong *)&this_00->Elements + 8 +
                         (longlong)(int)local_res10.Key * 0x18);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  else {
    *param_1 = *pFVar7;
  }
  return (FName)param_1;
}

// GetPrivateStaticClass @ 14a314800

UClass * __cdecl UFKControlRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFKControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"FKControlRig",
               &Z_Registration_Info_UClass_UFKControlRig.InnerSingleton,
               StaticRegisterNativesUFKControlRig,0xc90,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFKControlRig>,
               InternalVTableHelperCtorCaller<UFKControlRig>,local_res8,UControlRig::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFKControlRig.InnerSingleton;
}

// Initialize @ 14a324b90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UFKControlRig::Initialize(UFKControlRig *this,bool param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  USkeletalMeshComponent *this_00;
  UClass *pUVar4;
  USkeletalMesh *pUVar5;
  USkeleton *pUVar6;
  FReferenceSkeleton *pFVar7;
  
  (**(code **)(this->_padding_ + 0x358))();
  UControlRig::Initialize((UControlRig *)this,param_1);
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  plVar3 = (longlong *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) goto LAB_14a324c91;
  this_00 = (USkeletalMeshComponent *)(**(code **)(*plVar3 + 0x28))(plVar3);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
LAB_14a324c49:
    pUVar6 = (USkeleton *)(**(code **)(*plVar3 + 0x28))(plVar3);
    if (pUVar6 == (USkeleton *)0x0) goto LAB_14a324c91;
    pUVar4 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14a324c91;
    pFVar7 = &pUVar6->ReferenceSkeleton;
  }
  else {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14a324c49;
    pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    if (pUVar5 == (USkeletalMesh *)0x0) goto LAB_14a324c91;
    pUVar6 = (USkeleton *)(**(code **)(pUVar5->_padding_ + 0x400))(pUVar5);
    pFVar7 = (FReferenceSkeleton *)(**(code **)(pUVar5->_padding_ + 0x318))(pUVar5);
  }
  CreateRigElements(this,pFVar7,pUVar6);
LAB_14a324c91:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// InitializeVMs @ 14a324d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UFKControlRig::InitializeVMs(UFKControlRig *this,bool param_1)

{
  FRigVMExtendedExecuteContext *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UObject *pUVar6;
  URigVMHost *pUVar7;
  FString FStack_18;
  
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar3) {
    if (this == (UFKControlRig *)0x0) goto LAB_14a1ae2ce;
    pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>(pUVar6);
    if (!bVar3) goto LAB_14a1ae2ce;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14a1ae2ce:
  if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
    bVar3 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar3) {
      (**(code **)(this->_padding_ + 0x380))(this);
      if ((this->_padding_ & 0x10) == 0) {
        URigVMHost::SwapVMToNativizedIfRequired((URigVMHost *)this,(UClass *)0x0);
        if ((this->_padding_ == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("RigVMExtendedExecuteContext != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                               ,0x14c,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FRigVMExtendedExecuteContext *)this->_padding_;
        pUVar7 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
        plVar1 = (longlong *)this->_padding_;
        if (plVar1 == (longlong *)0x0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2045642706327173961>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                             ,0x4b7,"false");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else if ((pUVar7 == (URigVMHost *)0x0) ||
                ((pUVar7->VM).field0_0x0.DebugPtr == (URigVM *)0x0)) {
          (**(code **)(*plVar1 + 0x2e0))(plVar1,this_00);
          FRigVMExtendedExecuteContext::Reset(this_00);
        }
        else {
          cVar4 = (**(code **)(*plVar1 + 0x2c0))();
          if (cVar4 == '\0') {
            FRigVMMemoryStorageStruct::operator=
                      (&this_00->WorkMemoryStorage,
                       &((pUVar7->VM).field0_0x0.DebugPtr)->DefaultWorkMemoryStorage);
            FRigVMMemoryStorageStruct::operator=
                      (&this_00->DebugMemoryStorage,
                       &((pUVar7->VM).field0_0x0.DebugPtr)->DefaultDebugMemoryStorage);
            uVar5 = (**(code **)(((pUVar7->VM).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
            this_00->VMHash = uVar5;
          }
        }
      }
      (**(code **)(this->_padding_ + 0x318))(this);
      if (param_1) {
        (**(code **)(this->_padding_ + 0x318))(this);
      }
    }
  }
  else if (2 < (byte)LogRigVM._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&FStack_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// InitializeVMs @ 14a324d20

bool __thiscall UFKControlRig::InitializeVMs(UFKControlRig *this,FName *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMExtendedExecuteContext *pFVar3;
  TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> TStack_28;
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                         ,0x14c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (FRigVMExtendedExecuteContext *)this->_padding_;
  (**(code **)(this->_padding_ + 0x378))(this,&TStack_28,0);
  if ((((URigVM *)this->_padding_)->ExternalVariables).ArrayNum != TStack_28.ArrayNum) {
    cVar7 = '\0';
    goto LAB_14a1ae9d3;
  }
  URigVM::SetExternalVariablesInstanceData((URigVM *)this->_padding_,pFVar3,&TStack_28,false);
  cVar7 = (**(code **)(*(longlong *)this->_padding_ + 800))((longlong *)this->_padding_,pFVar3,1);
  if (cVar7 != '\0') {
    *(undefined1 *)&this->_padding_ = 0;
  }
  this->_padding_ = 0;
  lVar8 = (**(code **)((pFVar3->PublicDataScope)._padding_ + 0x20))(&pFVar3->PublicDataScope);
  pUVar9 = FRigVMExecuteContext::StaticStruct();
  if (pUVar9 == (UScriptStruct *)0x0) {
LAB_14a1ae961:
    pcVar4 = *(code **)(pFVar3->_padding_ + 8);
    pUVar9 = FRigVMExecuteContext::StaticStruct();
    (*pcVar4)(pFVar3,pUVar9);
  }
  else {
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14a1ae961;
  }
  lVar8 = (**(code **)((pFVar3->PublicDataScope)._padding_ + 0x18))(&pFVar3->PublicDataScope);
  this_00 = *(TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
              **)(lVar8 + 0x50);
  TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
           *)(this_00 + 1));
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_);
  if (bVar5) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(URigVMHost *)this,param_1);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + -1;
  }
LAB_14a1ae9d3:
  if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.AllocatorInstance.Data);
  }
  return (bool)cVar7;
}

// InitializeVMsFromCDO @ 14a324d40

void __thiscall UFKControlRig::InitializeVMsFromCDO(UFKControlRig *this)

{
  URigVM *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  URigVMHost *pUVar5;
  
  if ((this->_padding_ & 0x10) == 0) {
    pUVar5 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
    if ((((URigVM *)this->_padding_ == (URigVM *)0x0) ||
        ((URigVM *)this->_padding_ != (pUVar5->VM).field0_0x0.DebugPtr)) &&
       (pUVar1 = (pUVar5->VM).field0_0x0.DebugPtr, pUVar1 != (URigVM *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      this->_padding_ = (longlong)(pUVar5->VM).field0_0x0;
    }
    (**(code **)(this->_padding_ + 0x358))(this);
    FRigVMDrawContainer::operator=((FRigVMDrawContainer *)&this->_padding_,&pUVar5->DrawContainer);
    *(int *)&this->_padding_ = (pUVar5->VMRuntimeSettings).MaximumArraySize;
    pTVar2 = (pUVar5->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
    pTVar3 = (pUVar5->VMRuntimeSettings).LogFunction.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pTVar3;
    this->_padding_ = (longlong)pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  return;
}

// IsAdditive @ 14a326d60

bool __thiscall UFKControlRig::IsAdditive(UFKControlRig *this)

{
  return this->ApplyMode == Additive;
}

// RefreshActiveControls @ 14a336520

void __thiscall UFKControlRig::RefreshActiveControls(UFKControlRig *this)

{
  int *piVar1;
  int *piVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  
  if (this->_padding_ != 0) {
    uVar4 = *(uint *)(this->_padding_ + 0x100);
    piVar2 = &(this->IsControlActive).ArrayNum;
    if (*piVar2 != uVar4) {
      pTVar3 = &this->IsControlActive;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      piVar1 = &(this->IsControlActive).ArrayMax;
      (this->IsControlActive).ArrayNum = 0;
      if (*piVar1 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar4,&pTVar3->AllocatorInstance,0,piVar1);
      }
      iVar8 = (this->IsControlActive).ArrayNum;
      if (iVar8 < (int)uVar4) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar4 - iVar8,&pTVar3->AllocatorInstance,piVar2,piVar1);
        memset((pTVar3->AllocatorInstance).Data + iVar7,0,(longlong)(int)(uVar4 - iVar8));
      }
      else if ((int)uVar4 < iVar8) {
        uVar11 = iVar8 - uVar4;
        if (((int)(uVar11 | uVar4) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar11 != 0) {
          pFVar9 = (pTVar3->AllocatorInstance).Data + (int)uVar4;
          iVar8 = ((this->IsControlActive).ArrayNum - uVar4) - uVar11;
          if (iVar8 != 0) {
            memmove(pFVar9,pFVar9 + (int)uVar11,(longlong)iVar8);
          }
          piVar2 = &(this->IsControlActive).ArrayNum;
          *piVar2 = *piVar2 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&pTVar3->AllocatorInstance,(this->IsControlActive).ArrayNum,piVar1);
        }
      }
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      iVar8 = (this->IsControlActive).ArrayNum;
      pFVar9 = pFVar10 + iVar8;
      while( true ) {
        if ((this->IsControlActive).ArrayNum != iVar8) {
          `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar10 == pFVar9) break;
        *pFVar10 = (FScriptContainerElement)0x1;
        pFVar10 = pFVar10 + 1;
      }
    }
  }
  return;
}

// RequestInitVMs @ 14a33f200

void __thiscall UFKControlRig::RequestInitVMs(UFKControlRig *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetApplyMode @ 14a349ea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UFKControlRig::SetApplyMode(UFKControlRig *this,EControlRigFKRigExecuteMode param_1)

{
  undefined1 local_res10 [24];
  code *local_48;
  UFKControlRig **local_40;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  UFKControlRig *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  if (this->ApplyMode != param_1) {
    this->ApplyMode = param_1;
    if ((URigHierarchy *)this->_padding_ != (URigHierarchy *)0x0) {
      local_18 = local_38;
      local_10 = local_res10;
      local_40 = &local_20;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UFKControlRig::SetApplyMode'::__l11::<lambda_1>,bool,FRigControlElement_*>
                 ::Call;
      local_34 = 0x1ff;
      local_30 = 0x7f7fffff;
      local_38[0] = 2;
      if (param_1 != Additive) {
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UFKControlRig::SetApplyMode'::__l13::<lambda_2>,bool,FRigControlElement_*>
                   ::Call;
      }
      local_28 = 0;
      local_24 = 0;
      local_res10[0] = 0;
      local_20 = this;
      URigHierarchy::ForEach<FRigControlElement>
                ((URigHierarchy *)this->_padding_,
                 (TFunctionRef<bool___cdecl(FRigControlElement_*)> *)&local_48);
    }
  }
  return;
}

// SetBoneInitialTransformsFromSkeletalMeshComponent @ 14a34abf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UFKControlRig::SetBoneInitialTransformsFromSkeletalMeshComponent
          (UFKControlRig *this,USkeletalMeshComponent *param_1,bool param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UFKControlRig *local_20;
  undefined8 local_10;
  
  UControlRig::SetBoneInitialTransformsFromSkeletalMeshComponent
            ((UControlRig *)this,param_1,param_2);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                ::Call;
  local_20 = this;
  URigHierarchy::Traverse
            ((URigHierarchy *)this->_padding_,
             (TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_38,true);
  return;
}

// SetControlActive @ 14a34bc30

void __thiscall
UFKControlRig::SetControlActive
          (UFKControlRig *this,TArray<FFKBoneCheckInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  iVar2 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFKBoneCheckInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar6 == pFVar7) break;
    iVar3 = *(int *)(pFVar6 + 8);
    FVar1 = pFVar6[0xc];
    if ((-1 < iVar3) && (iVar3 < (this->IsControlActive).ArrayNum)) {
      if (iVar3 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->IsControlActive).AllocatorInstance.Data[iVar3] = FVar1;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// SetControlActive @ 14a34bd00

void __thiscall UFKControlRig::SetControlActive(UFKControlRig *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((-1 < param_1) && (param_1 < (this->IsControlActive).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->IsControlActive).AllocatorInstance.Data[param_1] = (FScriptContainerElement)param_2;
  }
  return;
}

// SetControlOffsetsFromBoneInitials @ 14a34c100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UFKControlRig::SetControlOffsetsFromBoneInitials(UFKControlRig *this)

{
  code *local_38 [2];
  undefined **local_28;
  UFKControlRig *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                ::Call;
  local_20 = this;
  URigHierarchy::Traverse
            ((URigHierarchy *)this->_padding_,
             (TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_38,true);
  return;
}

// StaticRegisterNativesUFKControlRig @ 14a358ea0

void __cdecl UFKControlRig::StaticRegisterNativesUFKControlRig(void)

{
  return;
}

// ToggleApplyMode @ 14a359c20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UFKControlRig::ToggleApplyMode(UFKControlRig *this)

{
  URigHierarchy *this_00;
  EControlRigFKRigExecuteMode EVar1;
  undefined1 local_res8 [32];
  code *local_48;
  UFKControlRig **local_40;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  UFKControlRig *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  if (this->ApplyMode == Additive) {
    EVar1 = this->CachedToggleApplyMode;
    if (EVar1 == Additive) {
      return;
    }
  }
  else {
    this->CachedToggleApplyMode = this->ApplyMode;
    EVar1 = Additive;
  }
  this_00 = (URigHierarchy *)this->_padding_;
  this->ApplyMode = EVar1;
  if (this_00 != (URigHierarchy *)0x0) {
    local_34 = 0x1ff;
    local_30 = 0x7f7fffff;
    local_38[0] = 2;
    local_20 = this;
    if (EVar1 == Additive) {
      local_28 = 0;
      local_24 = 0;
      local_res8[0] = 0;
      local_18 = local_38;
      local_10 = local_res8;
      local_40 = &local_20;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UFKControlRig::SetApplyMode'::__l11::<lambda_1>,bool,FRigControlElement_*>
                 ::Call;
      URigHierarchy::ForEach<FRigControlElement>
                (this_00,(TFunctionRef<bool___cdecl(FRigControlElement_*)> *)&local_48);
      return;
    }
    local_28 = 0;
    local_24 = 0;
    local_res8[0] = 0;
    local_18 = local_38;
    local_10 = local_res8;
    local_40 = &local_20;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UFKControlRig::SetApplyMode'::__l13::<lambda_2>,bool,FRigControlElement_*>
               ::Call;
    URigHierarchy::ForEach<FRigControlElement>
              (this_00,(TFunctionRef<bool___cdecl(FRigControlElement_*)> *)&local_48);
  }
  return;
}

