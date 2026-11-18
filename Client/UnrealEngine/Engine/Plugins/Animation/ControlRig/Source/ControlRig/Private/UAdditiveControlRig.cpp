// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 18

// StaticClass @ 14a2c1410

UClass * __cdecl UAdditiveControlRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"AdditiveControlRig",
               &Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton,
               StaticRegisterNativesUAdditiveControlRig,0xc60,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAdditiveControlRig>,
               InternalVTableHelperCtorCaller<UAdditiveControlRig>,local_res8,
               UControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton;
}

// UAdditiveControlRig @ 14a2dcff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UAdditiveControlRig * __thiscall
UAdditiveControlRig::UAdditiveControlRig(UAdditiveControlRig *this,FVTableHelper *param_1)

{
  UControlRig::UControlRig((UControlRig *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  (this->AddBoneRigUnits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddBoneRigUnits).ArrayNum = 0;
  (this->AddBoneRigUnits).ArrayMax = 0;
  return this;
}

// UAdditiveControlRig @ 14a2dd060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UAdditiveControlRig * __thiscall
UAdditiveControlRig::UAdditiveControlRig(UAdditiveControlRig *this,FObjectInitializer *param_1)

{
  UControlRig::UControlRig((UControlRig *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  (this->AddBoneRigUnits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddBoneRigUnits).ArrayNum = 0;
  (this->AddBoneRigUnits).ArrayMax = 0;
  *(undefined2 *)&this->_padding_ = 0;
  return this;
}

// ~UAdditiveControlRig @ 14a2deec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UAdditiveControlRig::~UAdditiveControlRig(UAdditiveControlRig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  DestructItems<FRigUnit_AddBoneTransform,int>
            ((FRigUnit_AddBoneTransform *)(this->AddBoneRigUnits).AllocatorInstance.Data,
             (this->AddBoneRigUnits).ArrayNum);
  pFVar1 = (this->AddBoneRigUnits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UControlRig::~UControlRig((UControlRig *)this);
  return;
}

// operator() @ 14a2e5e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UAdditiveControlRig::Execute_Internal'::__l13::<lambda_1>::operator()
          (void *this,FRigBoneElement *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType *pFVar7;
  undefined1 auStack_128 [32];
  undefined ***local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined2 local_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  lVar6 = *(longlong *)this;
  pFVar7 = (ForAnyElementType *)(lVar6 + 0xc50);
  uStack_44 = 0xffff;
  local_c8 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  local_d0 = &___7FRigVMExecutePin__6B_;
  local_d8 = &___7FRigUnit_AddBoneTransform__6B_;
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_58 = 0x3f800000;
  local_54 = 0x100;
  local_50 = local_50 & 0xffffff00;
  uStack_4c = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff;
  uStack_38 = 0;
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pFVar1 = pFVar7->Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 < pFVar1 + (longlong)*(int *)(lVar6 + 0xc5c) * 0xb0)) {
    local_f0 = (longlong)*(int *)(lVar6 + 0xc58);
    local_e8 = 0xb0;
    local_108 = &local_d8;
    local_100 = pFVar1;
    local_f8 = (longlong)*(int *)(lVar6 + 0xc5c);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)(lVar6 + 0xc58);
  if (iVar5 == *(int *)(lVar6 + 0xc5c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10b0,pFVar7,(int *)(lVar6 + 0xc5c));
  }
  *(int *)(lVar6 + 0xc58) = iVar5 + 1;
  pFVar1 = pFVar7->Data;
  lVar6 = (longlong)iVar5 * 0xb0;
  *(undefined ***)(pFVar1 + lVar6 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)(pFVar1 + lVar6) = &___7FRigUnit_AddBoneTransform__6B_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x10) = local_c8;
  *(undefined8 *)(pFVar1 + lVar6 + 0x20) = local_b8._0_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x20 + 8) = local_b8._8_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x30) = local_a8._0_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x30 + 8) = local_a8._8_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x40) = local_98._0_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x40 + 8) = local_98._8_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x50) = local_88._0_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x50 + 8) = local_88._8_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x60) = local_78._0_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x60 + 8) = local_78._8_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x70) = local_68._0_8_;
  *(undefined8 *)(pFVar1 + lVar6 + 0x70 + 8) = local_68._8_8_;
  *(undefined4 *)(pFVar1 + lVar6 + 0x80) = local_58;
  pFVar1[lVar6 + 0x84] = local_54._0_1_;
  pFVar1[lVar6 + 0x85] = local_54._1_1_;
  *(ulonglong *)(pFVar1 + lVar6 + 0x88) = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(pFVar1 + lVar6 + 0x88 + 8) = CONCAT26(uStack_42,CONCAT24(uStack_44,uStack_48));
  *(ulonglong *)(pFVar1 + lVar6 + 0x98) = CONCAT44(uStack_3c,local_40);
  *(undefined8 *)(pFVar1 + lVar6 + 0x98 + 8) = uStack_38;
  return true;
}

// operator() @ 14a2e72f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UAdditiveControlRig::CreateRigElements'::__l5::<lambda_2>::operator()
          (void *this,FRigBoneElement *param_1)

{
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  FRigBaseElement *this_00;
  FString *pFVar16;
  FRigElementKey *pFVar17;
  TTransform<double> *pTVar18;
  FRigControlSettings *pFVar19;
  FRigBaseElement *pFVar20;
  URigHierarchyController *pUVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  uint uVar24;
  undefined1 auStackY_7f8 [32];
  FRigElementKey local_7a8;
  undefined1 local_798 [16];
  FName local_788;
  FName local_780;
  FName local_778 [2];
  undefined1 local_768 [48];
  TTransform<double> local_738;
  double local_6d8 [2];
  double local_6c8 [2];
  double local_6b8 [2];
  double local_6a8 [2];
  FRigControlSettings local_698;
  FRigControlSettings local_478;
  TTransform<double> local_258;
  undefined1 local_1f8 [32];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_178;
  undefined1 local_168 [56];
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  bool local_e8;
  undefined3 uStack_e7;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  local_788 = *(FName *)((longlong)&param_1->_padding_ + 4);
  this_00 = URigHierarchy::Get(*(URigHierarchy **)(*(longlong *)this + 0x338),
                               *(int *)((longlong)&param_1->_padding_ + 4));
  if (this_00 != (FRigBaseElement *)0x0) {
    bVar15 = FRigBaseElement::IsA<FRigSingleParentElement>(this_00);
    if (bVar15) {
      pFVar20 = this_00 + 3;
    }
    else {
      bVar15 = FRigBaseElement::IsA<FRigMultiParentElement>(this_00);
      if ((!bVar15) || (*(int *)&this_00[4].CachedNameString.Data.AllocatorInstance.Data < 1))
      goto LAB_14a2e73d1;
      pFVar20 = (FRigBaseElement *)this_00[4].ComponentIndices.AllocatorInstance.Data;
      if (pFVar20 == (FRigBaseElement *)0x0) {
        pFVar20 = this_00 + 3;
      }
    }
    if (pFVar20->_padding_ != 0) {
      iVar23 = *(int *)(pFVar20->_padding_ + 0x1c);
      goto LAB_14a2e73d6;
    }
  }
LAB_14a2e73d1:
  iVar23 = -1;
LAB_14a2e73d6:
  if (local_788 == (FName)0x0) {
    local_780.ComparisonIndex.Value = 0;
    local_780.Number = 0;
  }
  else {
    pFVar16 = ::FName::ToString(&local_788,(FString *)local_768);
    ::FString::ConcatFC((FString *)local_798,pFVar16,L"_NULL");
    pFVar22 = (FScriptContainerElement *)L"";
    if (local_798._8_4_ != 0) {
      pFVar22 = (FScriptContainerElement *)local_798._0_8_;
    }
    ::FName::FName(&local_780,(wchar_t *)pFVar22);
    if ((FScriptContainerElement *)local_798._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_798._0_8_);
    }
    if ((FScriptContainerElement *)local_768._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_768._0_8_);
    }
  }
  if (local_788 == (FName)0x0) {
    local_778[0].ComparisonIndex.Value = 0;
    local_778[0].Number = 0;
  }
  else {
    pFVar16 = ::FName::ToString(&local_788,(FString *)local_768);
    ::FString::ConcatFC((FString *)local_798,pFVar16,L"_CONTROL");
    pFVar22 = (FScriptContainerElement *)L"";
    if (local_798._8_4_ != 0) {
      pFVar22 = (FScriptContainerElement *)local_798._0_8_;
    }
    ::FName::FName(local_778,(wchar_t *)pFVar22);
    if ((FScriptContainerElement *)local_798._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_798._0_8_);
    }
    if ((FScriptContainerElement *)local_768._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_768._0_8_);
    }
  }
  iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
  if (iVar23 == -1) {
    URigHierarchy::GetGlobalTransformByIndex
              (*(URigHierarchy **)(*(longlong *)this + 0x338),&local_738,iVar2,false);
    pTVar18 = &local_258;
    local_258.Rotation.XY.m128d_f64[0] = local_738.Rotation.XY.m128d_f64[0];
    local_258.Rotation.XY.m128d_f64[1] = local_738.Rotation.XY.m128d_f64[1];
    local_258.Rotation.ZW.m128d_f64[0] = local_738.Rotation.ZW.m128d_f64[0];
    local_258.Rotation.ZW.m128d_f64[1] = local_738.Rotation.ZW.m128d_f64[1];
    pUVar21 = (URigHierarchyController *)**(undefined8 **)((longlong)this + 8);
    local_258.Translation.XY.m128d_f64[0] = local_738.Translation.XY.m128d_f64[0];
    local_258.Translation.XY.m128d_f64[1] = local_738.Translation.XY.m128d_f64[1];
    local_258.Translation.ZW.m128d_f64[0] = local_738.Translation.ZW.m128d_f64[0];
    local_258.Translation.ZW.m128d_f64[1] = local_738.Translation.ZW.m128d_f64[1];
    local_258.Scale3D.XY.m128d_f64[0] = local_738.Scale3D.XY.m128d_f64[0];
    local_258.Scale3D.XY.m128d_f64[1] = local_738.Scale3D.XY.m128d_f64[1];
    uVar24 = local_7a8._0_4_ & 0xffffff00;
    uVar1._4_4_ = 0;
    local_258.Scale3D.ZW.m128d_f64[0] = local_738.Scale3D.ZW.m128d_f64[0];
    local_258.Scale3D.ZW.m128d_f64[1] = local_738.Scale3D.ZW.m128d_f64[1];
    local_7a8.Name.Number = 0;
  }
  else {
    URigHierarchy::GetGlobalTransformByIndex
              (*(URigHierarchy **)(*(longlong *)this + 0x338),(TTransform<double> *)local_1f8,iVar2,
               false);
    URigHierarchy::GetGlobalTransformByIndex
              (*(URigHierarchy **)(*(longlong *)this + 0x338),(TTransform<double> *)local_168,iVar23
               ,false);
    UE::Math::TTransform<double>::GetRelativeTransform
              ((TTransform<double> *)local_1f8,&local_258,(TTransform<double> *)local_168);
    dVar14 = local_258.Scale3D.ZW.m128d_f64[1];
    dVar13 = local_258.Scale3D.ZW.m128d_f64[0];
    dVar12 = local_258.Scale3D.XY.m128d_f64[1];
    dVar11 = local_258.Scale3D.XY.m128d_f64[0];
    dVar10 = local_258.Translation.ZW.m128d_f64[1];
    dVar9 = local_258.Translation.ZW.m128d_f64[0];
    dVar8 = local_258.Translation.XY.m128d_f64[1];
    dVar7 = local_258.Translation.XY.m128d_f64[0];
    dVar6 = local_258.Rotation.ZW.m128d_f64[1];
    dVar5 = local_258.Rotation.ZW.m128d_f64[0];
    dVar4 = local_258.Rotation.XY.m128d_f64[1];
    dVar3 = local_258.Rotation.XY.m128d_f64[0];
    pUVar21 = (URigHierarchyController *)**(undefined8 **)((longlong)this + 8);
    pFVar17 = URigHierarchy::GetKey
                        (*(URigHierarchy **)(*(longlong *)this + 0x338),(FRigElementKey *)local_768,
                         iVar23);
    local_738.Rotation.XY.m128d_f64[0] = dVar3;
    local_738.Rotation.XY.m128d_f64[1] = dVar4;
    uVar1._0_1_ = pFVar17->Type;
    uVar1._1_3_ = *(undefined3 *)&pFVar17->field_0x1;
    uVar1._4_4_ = (pFVar17->Name).ComparisonIndex.Value;
    uVar24 = (uint)uVar1;
    local_7a8.Name.Number = (pFVar17->Name).Number;
    pTVar18 = &local_738;
    local_738.Rotation.ZW.m128d_f64[0] = dVar5;
    local_738.Rotation.ZW.m128d_f64[1] = dVar6;
    local_738.Translation.XY.m128d_f64[0] = dVar7;
    local_738.Translation.XY.m128d_f64[1] = dVar8;
    local_738.Translation.ZW.m128d_f64[0] = dVar9;
    local_738.Translation.ZW.m128d_f64[1] = dVar10;
    local_738.Scale3D.XY.m128d_f64[0] = dVar11;
    local_738.Scale3D.XY.m128d_f64[1] = dVar12;
    local_738.Scale3D.ZW.m128d_f64[0] = dVar13;
    local_738.Scale3D.ZW.m128d_f64[1] = dVar14;
  }
  local_7a8.Name.ComparisonIndex.Value = uVar1._4_4_;
  local_7a8._0_4_ = uVar24;
  pFVar17 = URigHierarchyController::AddNull
                      (pUVar21,(FRigElementKey *)local_798,local_780,&local_7a8,pTVar18,iVar23 == -1
                       ,false,false);
  local_7a8.Type = pFVar17->Type;
  local_7a8._1_3_ = *(undefined3 *)&pFVar17->field_0x1;
  local_7a8.Name.ComparisonIndex.Value = (pFVar17->Name).ComparisonIndex.Value;
  uVar24 = (pFVar17->Name).Number;
  FRigControlSettings::FRigControlSettings(&local_698);
  local_1f8._16_8_ = 0.0;
  local_698.DisplayName = local_788;
  local_1d8 = 0.0;
  local_698.ControlType = Transform;
  local_798._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_798._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  pUVar21 = (URigHierarchyController *)**(undefined8 **)((longlong)this + 8);
  dVar3 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_178._0_1_ = true;
  local_178._1_3_ = 0;
  local_1f8._24_8_ = 0.0;
  uStack_1d0 = 0.0;
  dVar6 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_768._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_768._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  dVar12 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  dVar4 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  dVar5 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_6d8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_6d8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_6c8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_6c8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_6b8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_6b8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_6a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_6a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  dVar7 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  dVar11 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar10 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar9 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  dVar8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  pFVar19 = FRigControlSettings::FRigControlSettings(&local_478,&local_698);
  local_738.Translation.XY.m128d_f64[0] = local_6d8[0];
  local_738.Translation.XY.m128d_f64[1] = local_6d8[1];
  local_738.Translation.ZW.m128d_f64[0] = local_6c8[0];
  local_738.Translation.ZW.m128d_f64[1] = local_6c8[1];
  local_738.Scale3D.XY.m128d_f64[0] = local_6b8[0];
  local_738.Scale3D.XY.m128d_f64[1] = local_6b8[1];
  local_738.Scale3D.ZW.m128d_f64[0] = local_6a8[0];
  local_738.Scale3D.ZW.m128d_f64[1] = local_6a8[1];
  local_738.Rotation.XY.m128d_f64[0] = (double)local_798._0_8_;
  local_738.Rotation.XY.m128d_f64[1] = (double)local_798._8_8_;
  local_738.Rotation.ZW.m128d_f64[0] = (double)local_768._0_8_;
  local_738.Rotation.ZW.m128d_f64[1] = (double)local_768._8_8_;
  local_258.Rotation.XY.m128d_f64[0] = (double)local_798._0_8_;
  local_258.Rotation.XY.m128d_f64[1] = (double)local_798._8_8_;
  local_258.Scale3D.ZW.m128d_f64[0] = local_6a8[0];
  local_258.Scale3D.ZW.m128d_f64[1] = local_6a8[1];
  local_258.Scale3D.XY.m128d_f64[0] = local_6b8[0];
  local_258.Scale3D.XY.m128d_f64[1] = local_6b8[1];
  local_e8 = local_178._0_1_;
  uStack_e7 = local_178._1_3_;
  local_168._28_4_ = local_1f8._28_4_;
  local_168._48_8_ = 0.0;
  dStack_130 = 0.0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = 0.0;
  dStack_110 = 0.0;
  local_108._0_4_ = 0.0;
  local_108._4_4_ = 0.0;
  uStack_100._0_4_ = 0.0;
  uStack_100._4_4_ = 0.0;
  local_f8._0_4_ = 0.0;
  local_f8._4_4_ = 0.0;
  uStack_f0._0_4_ = 0.0;
  uStack_f0._4_4_ = 0.0;
  local_258.Rotation.ZW.m128d_f64[0] = (double)local_768._0_8_;
  local_258.Rotation.ZW.m128d_f64[1] = (double)local_768._8_8_;
  local_258.Translation.XY.m128d_f64[0] = local_6d8[0];
  local_258.Translation.XY.m128d_f64[1] = local_6d8[1];
  local_258.Translation.ZW.m128d_f64[0] = local_6c8[0];
  local_258.Translation.ZW.m128d_f64[1] = local_6c8[1];
  local_168._44_4_ = uStack_1d0._4_4_;
  local_7a8.Name.Number = uVar24;
  local_168._0_4_ = (float)dVar6;
  local_168._4_4_ = (float)dVar3;
  local_168._8_4_ = (float)dVar12;
  local_168._12_4_ = (float)dVar7;
  local_168._16_4_ = (float)dVar11;
  local_168._20_4_ = (float)dVar4;
  local_168._24_4_ = (float)dVar10;
  local_168._32_4_ = (float)dVar9;
  local_168._36_4_ = (float)dVar5;
  local_168._40_4_ = (float)dVar8;
  URigHierarchyController::AddControl
            (pUVar21,(FRigElementKey *)local_798,local_778[0],&local_7a8,pFVar19,
             (FRigControlValue *)local_168,&local_258,&local_738,false,false);
  if (local_698.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.FilteredChannels.AllocatorInstance.Data);
  }
  if (local_698.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.PreviouslyDrivenControls.AllocatorInstance.Data);
  }
  if (local_698.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.DrivenControls.AllocatorInstance.Data);
  }
  if (local_698.Customization.RemovedSpaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_698.Customization.RemovedSpaces.AllocatorInstance.Data);
  }
  if (local_698.Customization.AvailableSpaces.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Customization.AvailableSpaces.AllocatorInstance.Data);
  }
  if (local_698.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.LimitEnabled.AllocatorInstance.Data);
  }
  return true;
}

// CreateRigElements @ 14a2fe390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UAdditiveControlRig::CreateRigElements
          (UAdditiveControlRig *this,FReferenceSkeleton *param_1,USkeleton *param_2)

{
  FName local_res8;
  FName local_res20;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  (**(code **)(this->_padding_ + 0x358))();
  URigHierarchy::Reset((URigHierarchy *)this->_padding_);
  local_res20 = (FName)URigHierarchy::GetController((URigHierarchy *)this->_padding_,true);
  if (local_res20 != (FName)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    URigHierarchyController::ImportBones
              ((URigHierarchyController *)local_res20,
               (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)local_18,
               &param_1->FinalRefBoneInfo,&param_1->FinalRefBonePose,&local_res8,false,false,true,
               false);
    if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_18._0_8_);
    }
    if (param_2 != (USkeleton *)0x0) {
      local_res8 = local_res20;
      local_28._8_8_ = &local_res8;
      local_28._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UAdditiveControlRig::CreateRigElements'::__l8::<lambda_1>,void,FName,FCurveMetaData_const_&>
           ::Call;
      USkeleton::ForEachCurveMetaData
                (param_2,(TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *)local_28);
    }
    local_28._8_8_ = &local_res20;
    local_18._8_8_ = local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UAdditiveControlRig::CreateRigElements'::__l5::<lambda_2>,bool,FRigBoneElement_*>
         ::Call;
    local_28._0_8_ = this;
    URigHierarchy::ForEach<FRigBoneElement>
              ((URigHierarchy *)this->_padding_,
               (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)local_18);
  }
  return;
}

// CreateRigElements @ 14a2fe4c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UAdditiveControlRig::CreateRigElements(UAdditiveControlRig *this,USkeletalMesh *param_1)

{
  USkeleton *this_00;
  longlong lVar1;
  FName local_res10;
  FName local_res18;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_1 != (USkeletalMesh *)0x0) {
    this_00 = (USkeleton *)(**(code **)(param_1->_padding_ + 0x400))(param_1);
    lVar1 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
    (**(code **)(this->_padding_ + 0x358))(this);
    URigHierarchy::Reset((URigHierarchy *)this->_padding_);
    local_res18 = (FName)URigHierarchy::GetController((URigHierarchy *)this->_padding_,true);
    if (local_res18 != (FName)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      URigHierarchyController::ImportBones
                ((URigHierarchyController *)local_res18,
                 (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)local_18,
                 (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x20),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x30),
                 &local_res10,false,false,true,false);
      if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_18._0_8_);
      }
      if (this_00 != (USkeleton *)0x0) {
        local_res10 = local_res18;
        local_28._8_8_ = &local_res10;
        local_28._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UAdditiveControlRig::CreateRigElements'::__l8::<lambda_1>,void,FName,FCurveMetaData_const_&>
             ::Call;
        USkeleton::ForEachCurveMetaData
                  (this_00,(TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *)local_28);
      }
      local_28._8_8_ = &local_res18;
      local_18._8_8_ = local_28;
      local_18._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UAdditiveControlRig::CreateRigElements'::__l5::<lambda_2>,bool,FRigBoneElement_*>
           ::Call;
      local_28._0_8_ = this;
      URigHierarchy::ForEach<FRigBoneElement>
                ((URigHierarchy *)this->_padding_,
                 (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)local_18);
    }
  }
  return;
}

// Execute_Internal @ 14a301910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UAdditiveControlRig::Execute_Internal(UAdditiveControlRig *this,FName *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  FRigUnit_AddBoneTransform *pFVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  int iVar11;
  FString *pFVar12;
  USkeletalMeshComponent *this_00;
  UClass *pUVar13;
  USkeletalMesh *pUVar14;
  USkeleton *this_01;
  longlong lVar15;
  wchar_t *pwVar16;
  FName *this_02;
  undefined1 auStackY_3a8 [32];
  FName local_358;
  undefined1 local_350 [8];
  FName local_348;
  undefined1 local_340 [16];
  undefined1 local_330 [4];
  FNameEntryId FStack_32c;
  undefined1 *puStack_328;
  undefined1 local_318 [20];
  uint uStack_304;
  uchar uStack_300;
  undefined7 uStack_2ff;
  FName local_2f8;
  FName FStack_2f0;
  FNameEntryId local_2e8;
  FNameEntryId FStack_2e4;
  FNameEntryId FStack_2e0;
  uint uStack_2dc;
  FName local_2d8;
  FName FStack_2d0;
  FName local_2c8;
  FName FStack_2c0;
  EModularRigResolveState local_2b8;
  FText local_2b0;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_298;
  undefined1 local_288 [336];
  FName local_138;
  FName local_130;
  FRigHierarchySettings local_128;
  uchar local_120;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  FModularRigResolveResult local_108;
  URigHierarchy *local_c0;
  UAdditiveControlRig *local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
  if (*param_1 == local_358) {
    FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
    local_c0 = (URigHierarchy *)this->_padding_;
    local_288._8_8_ = *param_1;
    local_2f8 = (FName)0x0;
    FStack_2f0 = (FName)0x0;
    local_2e8.Value = local_2e8.Value & 0xffffff00;
    FStack_2e4.Value = 0;
    FStack_2e0.Value = 0;
    local_2d8.ComparisonIndex.Value = 0;
    local_2d8.Number = 0;
    FStack_2d0.ComparisonIndex.Value = 0;
    FStack_2d0.Number = 0;
    local_2c8.ComparisonIndex.Value = 0;
    local_2c8.Number = 0;
    FStack_2c0.ComparisonIndex.Value = 0;
    FStack_2c0.Number = 0;
    local_2b8 = Success;
    local_318._0_4_ = 0;
    local_318._4_4_ = 0;
    local_318._8_4_ = 0;
    local_318._12_4_ = 0;
    local_318[0x10] = 1;
    uStack_304 = 2000;
    uStack_300 = '\0';
    local_b8 = this;
    FText::FText(&local_2b0);
    local_138.ComparisonIndex.Value = local_318._0_4_;
    local_138.Number = local_318._4_4_;
    local_130.ComparisonIndex.Value = local_318._8_4_;
    local_130.Number = local_318._12_4_;
    local_128.ProceduralElementLimit = uStack_304;
    local_128._0_4_ = local_318._16_4_;
    local_120 = uStack_300;
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    local_118.Data = (FScriptContainerElement *)local_2f8;
    local_110 = FStack_2f0.ComparisonIndex.Value;
    local_10c = FStack_2f0.Number;
    FStack_2f0.ComparisonIndex.Value = 0;
    FStack_2f0.Number = 0;
    local_2f8.ComparisonIndex.Value = 0;
    local_2f8.Number = 0;
    FModularRigResolveResult::operator=(&local_108,(FModularRigResolveResult *)&local_2e8);
    if (local_2b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
    }
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)local_2c8,FStack_2c0.ComparisonIndex.Value);
    if (local_2c8 != (FName)0x0) {
      FMemory::Free((void *)local_2c8);
    }
    DestructItems<FRigElementResolveResult,int>
              ((FRigElementResolveResult *)local_2d8,FStack_2d0.ComparisonIndex.Value);
    if (local_2d8 != (FName)0x0) {
      FMemory::Free((void *)local_2d8);
    }
    if (local_2f8 != (FName)0x0) {
      FMemory::Free((void *)local_2f8);
    }
    pFVar3 = (this->AddBoneRigUnits).AllocatorInstance.Data;
    iVar2 = (this->AddBoneRigUnits).ArrayNum;
    this_02 = (FName *)(pFVar3 + 0x10);
    while( true ) {
      if ((this->AddBoneRigUnits).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRigUnit_AddBoneTransform,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_350);
      }
      if ((FRigUnit_AddBoneTransform *)(this_02 + -2) ==
          (FRigUnit_AddBoneTransform *)(pFVar3 + (longlong)iVar2 * 0xb0)) break;
      local_358.ComparisonIndex.Value = 0;
      local_358.Number = 0;
      if (*this_02 == (FName)0x0) {
        local_348.ComparisonIndex.Value = 0;
        local_348.Number = 0;
      }
      else {
        pFVar12 = ::FName::ToString(this_02,(FString *)&local_298);
        ::FString::ConcatFC((FString *)local_340,pFVar12,L"_CONTROL");
        pwVar16 = L"";
        if (local_340._8_4_ != 0) {
          pwVar16 = (wchar_t *)local_340._0_8_;
        }
        ::FName::FName(&local_348,pwVar16);
        if ((UAdditiveControlRig *)local_340._0_8_ != (UAdditiveControlRig *)0x0) {
          FMemory::Free((void *)local_340._0_8_);
        }
        if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.AllocatorInstance.Data);
        }
      }
      FStack_32c = local_348.ComparisonIndex.Value;
      puStack_328._0_4_ = local_348.Number;
      local_330[0] = Control;
      iVar11 = URigHierarchy::GetIndex
                         ((URigHierarchy *)this->_padding_,(FRigElementKey *)local_330,true);
      URigHierarchy::GetLocalTransformByIndex
                ((URigHierarchy *)this->_padding_,(TTransform<double> *)local_318,iVar11,false);
      FVar7.Number = uStack_304;
      FVar7.ComparisonIndex.Value = local_318._16_4_;
      FVar8._1_7_ = uStack_2ff;
      FVar8.ComparisonIndex.Value._0_1_ = uStack_300;
      this_02[2].ComparisonIndex = (FNameEntryId)local_318._0_4_;
      this_02[2].Number = local_318._4_4_;
      this_02[3].ComparisonIndex = (FNameEntryId)local_318._8_4_;
      this_02[3].Number = local_318._12_4_;
      this_02[4] = FVar7;
      this_02[5] = FVar8;
      FVar9.Number = FStack_2e4.Value;
      FVar9.ComparisonIndex.Value = local_2e8.Value;
      FVar10.Number = uStack_2dc;
      FVar10.ComparisonIndex.Value = FStack_2e0.Value;
      this_02[6] = local_2f8;
      this_02[7] = FStack_2f0;
      this_02[8] = FVar9;
      this_02[9] = FVar10;
      this_02[10] = local_2d8;
      this_02[0xb] = FStack_2d0;
      this_02[0xc] = local_2c8;
      this_02[0xd] = FStack_2c0;
      FRigUnit_AddBoneTransform::Execute
                ((FRigUnit_AddBoneTransform *)(this_02 + -2),(FControlRigExecuteContext *)local_288)
      ;
      this_02 = this_02 + 0x16;
    }
    FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  }
  else {
    FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
    if (*param_1 == local_358) {
      pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
      plVar5 = (longlong *)this->_padding_;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      puStack_328 = (undefined1 *)CONCAT44(puStack_328._4_4_,(uint)puStack_328);
      if (plVar5 != (longlong *)0x0) {
        this_00 = (USkeletalMeshComponent *)(**(code **)(*plVar5 + 0x28))();
        puStack_328 = (undefined1 *)CONCAT44(puStack_328._4_4_,(uint)puStack_328);
        if (this_00 != (USkeletalMeshComponent *)0x0) {
          pUVar13 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          iVar2 = (int)pUVar13->_padding_;
          puStack_328 = (undefined1 *)CONCAT44(puStack_328._4_4_,(uint)puStack_328);
          if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
             (puStack_328 = (undefined1 *)CONCAT44(puStack_328._4_4_,(uint)puStack_328),
             (longlong *)
             *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar13->_padding_)) {
            pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
            if (pUVar14 != (USkeletalMesh *)0x0) {
              this_01 = (USkeleton *)(**(code **)(pUVar14->_padding_ + 0x400))(pUVar14);
              lVar15 = (**(code **)(pUVar14->_padding_ + 0x318))(pUVar14);
              (**(code **)(this->_padding_ + 0x358))(this);
              URigHierarchy::Reset((URigHierarchy *)this->_padding_);
              local_348 = (FName)URigHierarchy::GetController((URigHierarchy *)this->_padding_,true)
              ;
              if (local_348 != (FName)0x0) {
                local_358.ComparisonIndex.Value = 0;
                local_358.Number = 0;
                URigHierarchyController::ImportBones
                          ((URigHierarchyController *)local_348,&local_298,
                           (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)(lVar15 + 0x20),
                           (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                           (lVar15 + 0x30),&local_358,false,false,true,false);
                if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_298.AllocatorInstance.Data);
                }
                if (this_01 != (USkeleton *)0x0) {
                  local_358 = local_348;
                  local_340._8_8_ = &local_358;
                  local_340._0_8_ =
                       UE::Core::Private::Function::
                       TFunctionRefCaller<`UAdditiveControlRig::CreateRigElements'::__l8::<lambda_1>,void,FName,FCurveMetaData_const_&>
                       ::Call;
                  USkeleton::ForEachCurveMetaData
                            (this_01,(TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *)
                                     local_340);
                }
                local_340._8_8_ = &local_348;
                puStack_328 = local_340;
                local_330 = (undefined1  [4])0x4a2f4540;
                FStack_32c.Value = 1;
                local_340._0_8_ = this;
                URigHierarchy::ForEach<FRigBoneElement>
                          ((URigHierarchy *)this->_padding_,
                           (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)local_330);
              }
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      piVar1 = &(this->AddBoneRigUnits).ArrayMax;
      pFVar6 = (FRigUnit_AddBoneTransform *)(this->AddBoneRigUnits).AllocatorInstance.Data;
      iVar2 = (this->AddBoneRigUnits).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FRigUnit_AddBoneTransform,int>(pFVar6,iVar2);
        (this->AddBoneRigUnits).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb0,0x10,0,&(this->AddBoneRigUnits).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FRigUnit_AddBoneTransform,int>(pFVar6,iVar2);
        (this->AddBoneRigUnits).ArrayNum = 0;
      }
      local_340._8_8_ = &local_358;
      local_340._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UAdditiveControlRig::Execute_Internal'::__l13::<lambda_1>,bool,FRigBoneElement_*>
           ::Call;
      local_358 = (FName)this;
      URigHierarchy::ForEach<FRigBoneElement>
                ((URigHierarchy *)this->_padding_,
                 (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)local_340);
    }
  }
  return true;
}

// GetControlName @ 14a30b9e0

FName __cdecl UAdditiveControlRig::GetControlName(FName *param_1)

{
  FString *pFVar1;
  FName *in_RDX;
  ForAnyElementType FVar2;
  FString local_28;
  FString local_18;
  
  if (*in_RDX == (FName)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
  }
  else {
    pFVar1 = ::FName::ToString(in_RDX,&local_18);
    ::FString::ConcatFC(&local_28,pFVar1,L"_CONTROL");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName(param_1,(wchar_t *)FVar2.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return (FName)param_1;
    }
  }
  return (FName)param_1;
}

// GetNullName @ 14a311e40

FName __cdecl UAdditiveControlRig::GetNullName(FName *param_1)

{
  FString *pFVar1;
  FName *in_RDX;
  ForAnyElementType FVar2;
  FString local_28;
  FString local_18;
  
  if (*in_RDX == (FName)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
  }
  else {
    pFVar1 = ::FName::ToString(in_RDX,&local_18);
    ::FString::ConcatFC(&local_28,pFVar1,L"_NULL");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName(param_1,(wchar_t *)FVar2.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return (FName)param_1;
    }
  }
  return (FName)param_1;
}

// GetPrivateStaticClass @ 14a314740

UClass * __cdecl UAdditiveControlRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"AdditiveControlRig",
               &Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton,
               StaticRegisterNativesUAdditiveControlRig,0xc60,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAdditiveControlRig>,
               InternalVTableHelperCtorCaller<UAdditiveControlRig>,local_res8,
               UControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAdditiveControlRig.InnerSingleton;
}

// Initialize @ 14a324b10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UAdditiveControlRig::Initialize(UAdditiveControlRig *this,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x358))();
  UControlRig::Initialize((UControlRig *)this,param_1);
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar2 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (lVar2 != 0) {
    pcVar3 = *(code **)(this->_padding_ + 0x300);
    FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
    (*pcVar3)(this,local_res8);
  }
  return;
}

// InitializeVMs @ 14a324cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAdditiveControlRig::InitializeVMs(UAdditiveControlRig *this,bool param_1)

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
    if (this == (UAdditiveControlRig *)0x0) goto LAB_14a1ae2ce;
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

// InitializeVMs @ 14a324d00

bool __thiscall UAdditiveControlRig::InitializeVMs(UAdditiveControlRig *this,FName *param_1)

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

// InitializeVMsFromCDO @ 14a324d30

void __thiscall UAdditiveControlRig::InitializeVMsFromCDO(UAdditiveControlRig *this)

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

// RequestInitVMs @ 14a33f1f0

void __thiscall UAdditiveControlRig::RequestInitVMs(UAdditiveControlRig *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// StaticRegisterNativesUAdditiveControlRig @ 14a358e90

void __cdecl UAdditiveControlRig::StaticRegisterNativesUAdditiveControlRig(void)

{
  return;
}

