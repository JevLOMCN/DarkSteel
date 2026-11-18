// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4c9e30

UScriptStruct * __cdecl FRigUnit_AimBoneMath::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AimBoneMath.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AimBoneMath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath,(UObject *)pUVar1,
                         L"RigUnit_AimBoneMath");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_AimBoneMath.OuterSingleton,&local_18)
    ;
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_AimBoneMath.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c9ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_AimBoneMath::GetExecuteContextStruct(FRigUnit_AimBoneMath *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a4ca390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AimBoneMath::Execute(FRigUnit_AimBoneMath *this)

{
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->InputTransform,&this->Primary,
                &this->Secondary,this->Weight,&this->Result,&this->DebugSettings,
                &this->PrimaryCachedSpace,&this->SecondaryCachedSpace,&this->bIsInitialized);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_AimBoneMath @ 14a50b690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_AimBoneMath * __thiscall
FRigUnit_AimBoneMath::FRigUnit_AimBoneMath(FRigUnit_AimBoneMath *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  ulonglong uVar22;
  uint uVar23;
  double dVar24;
  __m128 _Var25;
  double dVar26;
  double dVar27;
  __m128d _Var28;
  __m128d _Var29;
  __m128d _Var30;
  __m128d _Var31;
  __m128d _Var32;
  __m128d _Var33;
  uint local_b8;
  uint local_a8;
  undefined2 uStack_9a;
  undefined4 uStack_94;
  undefined4 uStack_84;
  undefined4 local_50;
  
  *(undefined ***)this = &___7FRigUnit_AimBoneMath__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InputTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InputTransform).Rotation.ZW.m128d_f64 = auVar4;
  _Var25 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InputTransform).Translation.XY.m128d_f64 = auVar5;
  dVar21 = (double)_Var25.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar21,0);
  auVar6._0_8_ = (double)_Var25.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(this->InputTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InputTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InputTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Primary).Weight = 1.0;
  (this->Primary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Primary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Target.field0_0x0._s_0.X = 1.0;
  (this->Primary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Kind = Location;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uVar22 = (ulonglong)local_b8;
  (this->Primary).Space.Type = (char)uVar22;
  *(int3 *)&(this->Primary).Space.field_0x1 = (int3)(uVar22 >> 8);
  (this->Primary).Space.Name.ComparisonIndex = (FNameEntryId)(int)(uVar22 >> 0x20);
  (this->Primary).Space.Name.Number = 0;
  (this->Secondary).Weight = 1.0;
  (this->Secondary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Secondary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.X = 1.0;
  (this->Secondary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Kind = Location;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uVar22 = (ulonglong)local_b8;
  (this->Secondary).Space.Type = (char)uVar22;
  *(int3 *)&(this->Secondary).Space.field_0x1 = (int3)(uVar22 >> 8);
  (this->Secondary).Space.Name.ComparisonIndex = (FNameEntryId)(int)(uVar22 >> 0x20);
  (this->Secondary).Space.Name.Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.ZW.m128d_f64 = auVar10;
  _Var25 = GlobalVectorConstants::FloatZero;
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.XY.m128d_f64 = auVar11;
  dVar21 = (double)_Var25.m128_f32[3];
  auVar12._8_4_ = SUB84(dVar21,0);
  auVar12._0_8_ = (double)_Var25.m128_f32[2];
  auVar12._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = auVar16;
  _Var25 = GlobalVectorConstants::FloatZero;
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = auVar17;
  dVar21 = (double)_Var25.m128_f32[3];
  auVar18._8_4_ = SUB84(dVar21,0);
  auVar18._0_8_ = (double)_Var25.m128_f32[2];
  auVar18._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = auVar19;
  dVar27 = _UNK_150689518;
  dVar26 = ___xmm_00000000000000003ff0000000000000;
  dVar24 = _UNK_15061cbc8;
  dVar21 = ___xmm_3ff00000000000000000000000000000;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = auVar20;
  (this->DebugSettings).bEnabled = false;
  (this->DebugSettings).Scale = 10.0;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->PrimaryCachedSpace).Key.Type = None;
  (this->PrimaryCachedSpace).Key.Name.ComparisonIndex = 0;
  (this->PrimaryCachedSpace).Key.Name.Number = 0;
  (this->PrimaryCachedSpace).Index = 0xffff;
  (this->PrimaryCachedSpace).ContainerVersion = -1;
  (this->PrimaryCachedSpace).Element = (FRigBaseElement *)0x0;
  (this->SecondaryCachedSpace).Key.Type = None;
  (this->SecondaryCachedSpace).Key.Name.ComparisonIndex = 0;
  (this->SecondaryCachedSpace).Key.Name.Number = 0;
  (this->SecondaryCachedSpace).Index = 0xffff;
  (this->SecondaryCachedSpace).ContainerVersion = -1;
  (this->SecondaryCachedSpace).Element = (FRigBaseElement *)0x0;
  *&(this->InputTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->InputTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->InputTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->InputTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->InputTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *(ulonglong *)&this->Primary = CONCAT44(uStack_84,0x3f800000);
  (this->Primary).Axis.field0_0x0._s_0.X = dVar26;
  *&(this->InputTransform).Scale3D.ZW.m128d_f64 = _Var28.m128d_f64;
  (this->Primary).Axis.field0_0x0._s_0.Y = dVar27;
  (this->Primary).Axis.field0_0x0._s_0.Z = dVar21;
  (this->Primary).Target.field0_0x0._s_0.X = dVar24;
  (this->Primary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Kind = 1;
  *(undefined3 *)&(this->Primary).field_0x39 = local_50._1_3_;
  (this->Primary).Space.Type = 1;
  *(undefined3 *)&(this->Primary).Space.field_0x1 = local_b8._1_3_;
  (this->Primary).Space.Name.ComparisonIndex = 0;
  (this->Primary).Space.Name.Number = 0;
  *(ulonglong *)&this->Secondary = CONCAT44(uStack_84,0x3f800000);
  (this->Secondary).Axis.field0_0x0._s_0.X = dVar26;
  (this->Secondary).Axis.field0_0x0._s_0.Y = dVar27;
  (this->Secondary).Axis.field0_0x0._s_0.Z = dVar21;
  (this->Secondary).Target.field0_0x0._s_0.X = dVar24;
  (this->Secondary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Kind = 1;
  *(undefined3 *)&(this->Secondary).field_0x39 = local_50._1_3_;
  (this->Secondary).Space.Type = 1;
  *(undefined3 *)&(this->Secondary).Space.field_0x1 = local_b8._1_3_;
  (this->Secondary).Space.Name.ComparisonIndex = 0;
  (this->Secondary).Space.Name.Number = 0;
  (this->Primary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Primary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.X = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Z = 1.0;
  this->Weight = 1.0;
  _Var33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var31 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var30 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var29 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var28 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  uVar23 = local_a8 >> 8;
  local_a8 = uVar23 << 8;
  (this->DebugSettings).bEnabled = false;
  *(undefined3 *)&(this->DebugSettings).field_0x1 = 0x3f8000;
  (this->DebugSettings).Scale = 10.0;
  (this->DebugSettings)._padding_ = (longlong)dVar26;
  this->bIsInitialized = false;
  uVar22 = (ulonglong)local_a8;
  local_a8 = uVar23 << 8;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var28.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var29.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var30.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var31.m128d_f64;
  (this->PrimaryCachedSpace).Key.Type = (char)uVar22;
  *(int3 *)&(this->PrimaryCachedSpace).Key.field_0x1 = (int3)(uVar22 >> 8);
  (this->PrimaryCachedSpace).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar22 >> 0x20);
  *(ulonglong *)&(this->PrimaryCachedSpace).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  uVar22 = (ulonglong)local_a8;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var32.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var33.m128d_f64;
  *(ulonglong *)&(this->PrimaryCachedSpace).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->PrimaryCachedSpace).Element = (FRigBaseElement *)0x0;
  (this->SecondaryCachedSpace).Key.Type = (char)uVar22;
  *(int3 *)&(this->SecondaryCachedSpace).Key.field_0x1 = (int3)(uVar22 >> 8);
  (this->SecondaryCachedSpace).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar22 >> 0x20);
  *(ulonglong *)&(this->SecondaryCachedSpace).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  *(ulonglong *)&(this->SecondaryCachedSpace).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->SecondaryCachedSpace).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a5243c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_AimBoneMath::Execute(FRigUnit_AimBoneMath *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InputTransform,&this->Primary,&this->Secondary,this->Weight,
                &this->Result,&this->DebugSettings,&this->PrimaryCachedSpace,
                &this->SecondaryCachedSpace,&this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a534bd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimBoneMath::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  FRigUnit_AimItem_Target *pFVar6;
  FRigUnit_AimItem_Target *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  float *pfVar9;
  TTransform<double> *pTVar10;
  FRigUnit_AimBone_DebugSettings *pFVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  FCachedRigElement *pFVar14;
  bool *pbVar15;
  FControlRigExecuteContext *pFVar16;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TTransform<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigUnit_AimItem_Target *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_AimItem_Target *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigUnit_AimItem_Target *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FRigUnit_AimItem_Target *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  fVar1 = *pfVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = (FRigUnit_AimBone_DebugSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar15 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pTVar5,pFVar6,pFVar7,fVar1,pTVar10,pFVar11,pFVar13,pFVar14,pbVar15);
  return;
}

// StaticExecute @ 14a55e140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimBoneMath::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          FRigUnit_AimItem_Target *param_3,FRigUnit_AimItem_Target *param_4,float param_5,
          TTransform<double> *param_6,FRigUnit_AimBone_DebugSettings *param_7,
          FCachedRigElement *param_8,FCachedRigElement *param_9,bool *param_10)

{
  ushort uVar1;
  FRigVMDrawInterface *pFVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  ulonglong uVar8;
  double dVar9;
  uint uVar10;
  undefined8 uVar11;
  FControlRigExecuteContext *pFVar12;
  bool bVar13;
  TVector<double> *pTVar14;
  TQuat<double> *pTVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  double dVar66;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar67;
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar91;
  undefined1 auVar92 [16];
  undefined4 uVar95;
  uint uVar96;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  double dVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar109;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined8 uVar124;
  double dVar125;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar126;
  uint uVar127;
  uint uVar128;
  uint uVar129;
  undefined1 auStackY_638 [32];
  double local_5f8;
  double dStack_5f0;
  undefined8 local_5e8;
  TVector<double>_u_0 local_5e0;
  FControlRigExecuteContext *local_5c8;
  URigHierarchy *local_5b8;
  uint local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  uint local_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  FLinearColor_u_0 local_598;
  FLinearColor_u_0 local_588;
  TVector<double>_u_0 local_578;
  TVector<double>_u_0 local_560;
  TVector<double>_u_0 local_548;
  TVector<double>_u_0 local_530;
  TVector<double>_u_0 local_518;
  TVector<double>_u_0 local_500;
  TVector<double>_u_0 local_4e8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  TVector<double>_u_0 local_4a0;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_470;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_440;
  TVector<double>_u_0 local_428;
  TQuat<double> local_408;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  undefined1 local_388 [16];
  double local_378;
  double local_370;
  double dStack_368;
  double local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_328 [16];
  TVector<double> local_308;
  TVector<double> local_2f0;
  TVector<double> local_2d8;
  TVector<double> local_2c0;
  TVector<double> local_2a8;
  TQuat<double> local_288;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_638;
  dVar9 = (param_2->Rotation).XY.m128d_f64[1];
  (param_6->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (param_6->Rotation).XY.m128d_f64[1] = dVar9;
  dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
  (param_6->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (param_6->Rotation).ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_2->Translation).XY.m128d_f64[1];
  (param_6->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (param_6->Translation).XY.m128d_f64[1] = dVar9;
  dVar9 = (param_2->Translation).ZW.m128d_f64[1];
  (param_6->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (param_6->Translation).ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_2->Scale3D).XY.m128d_f64[1];
  (param_6->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (param_6->Scale3D).XY.m128d_f64[1] = dVar9;
  dVar9 = (param_2->Scale3D).ZW.m128d_f64[1];
  (param_6->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (param_6->Scale3D).ZW.m128d_f64[1] = dVar9;
  local_5b8 = param_1->Hierarchy;
  if (local_5b8 != (URigHierarchy *)0x0) {
    uVar127 = 0xffffffff;
    if (*param_10 == false) {
      param_8->Index = 0xffff;
      param_8->ContainerVersion = -1;
      param_8->Element = (FRigBaseElement *)0x0;
      uStack_5a0 = 0;
      uStack_59c = 0;
      local_5a4 = local_5a4 & 0xffffff00;
      uVar8 = (ulonglong)local_5a4;
      (param_8->Key).Type = (char)uVar8;
      *(int3 *)&(param_8->Key).field_0x1 = (int3)(uVar8 >> 8);
      (param_8->Key).Name.ComparisonIndex = (FNameEntryId)(int)(uVar8 >> 0x20);
      (param_8->Key).Name.Number = 0;
      local_5b0 = local_5b0 & 0xffffff00;
      uStack_5ac = 0;
      uStack_5a8 = 0;
      uVar8 = (ulonglong)local_5b0;
      (param_9->Key).Type = (char)uVar8;
      *(int3 *)&(param_9->Key).field_0x1 = (int3)(uVar8 >> 8);
      (param_9->Key).Name.ComparisonIndex = (FNameEntryId)(int)(uVar8 >> 0x20);
      (param_9->Key).Name.Number = 0;
      param_9->Index = 0xffff;
      param_9->ContainerVersion = -1;
      param_9->Element = (FRigBaseElement *)0x0;
      *param_10 = true;
    }
    dVar79 = __real_3fb99999a0000000;
    dVar3 = __real_3f1a36e2e0000000;
    fVar18 = __real_bf800000;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar129 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar9 = __real_3e45798ee0000000;
    auVar46 = ZEXT416((uint)__real_322bcc77);
    if ((__real_322bcc77 < param_5) &&
       ((__real_322bcc77 < param_3->Weight || (__real_322bcc77 < param_4->Weight)))) {
      local_5c8 = param_1;
      if (__real_322bcc77 < param_3->Weight) {
        local_5e0._s_0.X = (param_3->Target).field0_0x0._s_0.X;
        local_5e0._s_0.Y = (param_3->Target).field0_0x0._s_0.Y;
        local_5e0._s_0.Z = (param_3->Target).field0_0x0._s_0.Z;
        bVar13 = FCachedRigElement::UpdateCache(param_8,&param_3->Space,local_5b8);
        if (bVar13) {
          uVar1 = param_8->Index;
          uVar128 = 0xffffffff;
          if (uVar1 != 0xffff) {
            uVar128 = (uint)uVar1;
          }
          URigHierarchy::GetGlobalTransformByIndex(local_5b8,&local_268,uVar128,false);
          auVar24._8_8_ = local_5e0._s_0.Y;
          auVar24._0_8_ = local_5e0._s_0.X;
          dVar100 = local_268.Rotation.XY.m128d_f64[0];
          auVar102._8_8_ = 0;
          auVar102._0_8_ = local_5e0._s_0.Z;
          auVar46 = blendpd(auVar24,auVar102,2);
          dVar67 = local_268.Rotation.ZW.m128d_f64[0];
          dVar109 = local_268.Rotation.XY.m128d_f64[1];
          dVar45 = auVar46._0_8_ * dVar67;
          dVar125 = local_268.Rotation.ZW.m128d_f64[1];
          dVar66 = auVar46._8_8_ * dVar125;
          auVar46 = blendpd((undefined1  [16])local_268.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_268.Rotation.ZW.m128d_f64,2);
          dVar91 = auVar46._0_8_;
          dVar118 = auVar46._8_8_;
          dVar79 = __real_3fb99999a0000000;
          if (param_3->Kind == Direction) {
            auVar46._8_8_ = dVar125;
            auVar46._0_8_ = dVar125;
            auVar101._0_8_ = local_5e0._s_0.Y * dVar100 - local_5e0._s_0.X * dVar109;
            auVar101._8_8_ = local_5e0._s_0.Z * dVar109 - local_5e0._s_0.Y * dVar67;
            auVar119._8_4_ = SUB84(auVar101._8_8_,0);
            auVar119._0_8_ = auVar101._0_8_;
            auVar119._12_4_ = (int)((ulonglong)auVar101._8_8_ >> 0x20);
            auVar47._0_8_ = dVar45 - dVar91 * local_5e0._s_0.Z;
            auVar47._8_8_ = dVar66 - dVar118 * 0.0;
            auVar102 = blendpd(auVar101,auVar47,2);
            dVar45 = auVar119._8_8_ + auVar119._8_8_;
            dVar66 = auVar47._0_8_ + auVar47._0_8_;
            auVar103._0_8_ = auVar102._0_8_ + auVar102._0_8_;
            auVar103._8_8_ = auVar102._8_8_ + auVar102._8_8_;
            uVar95 = SUB84(dVar66,0);
            auVar68._8_4_ = uVar95;
            auVar68._0_8_ = dVar45;
            uVar97 = (undefined4)((ulonglong)dVar66 >> 0x20);
            auVar68._12_4_ = uVar97;
            auVar20._8_4_ = uVar95;
            auVar20._0_8_ = dVar45;
            auVar20._12_4_ = uVar97;
            auVar48._8_4_ = uVar95;
            auVar48._0_8_ = dVar45;
            auVar48._12_4_ = uVar97;
            auVar102 = blendpd(auVar48,auVar103,2);
            auVar69._0_8_ = auVar68._8_8_ * dVar100 - dVar45 * dVar109;
            auVar69._8_8_ = auVar103._0_8_ * dVar109 - auVar20._8_8_ * dVar67;
            auVar21._8_4_ = SUB84(auVar103._8_8_,0);
            auVar21._0_8_ = auVar103._0_8_;
            auVar21._12_4_ = (int)((ulonglong)auVar103._8_8_ >> 0x20);
            auVar49._0_8_ = auVar102._0_8_ * dVar67 - auVar103._0_8_ * dVar91;
            auVar49._8_8_ = auVar102._8_8_ * dVar125 - auVar21._8_8_ * dVar118;
            auVar22._8_4_ = SUB84(auVar69._8_8_,0);
            auVar22._0_8_ = auVar69._0_8_;
            auVar22._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
            auVar102 = blendpd(auVar69,auVar49,2);
            local_5e0._s_0.X = dVar45 * dVar125 + local_5e0._s_0.X + auVar22._8_8_;
            local_5e0._s_0.Y = dVar66 * dVar125 + local_5e0._s_0.Y + auVar49._0_8_;
            local_5e0._s_0.Z = auVar103._0_8_ * dVar125 + local_5e0._s_0.Z + auVar102._0_8_;
            local_3e8 = local_5e0._s_0.X;
            dStack_3e0 = local_5e0._s_0.Y;
            local_3d8 = local_5e0._s_0.Z;
          }
          else {
            auVar110._0_8_ = local_5e0._s_0.Y * dVar100 - local_5e0._s_0.X * dVar109;
            auVar110._8_8_ = local_5e0._s_0.Z * dVar109 - local_5e0._s_0.Y * dVar67;
            auVar120._8_4_ = SUB84(auVar110._8_8_,0);
            auVar120._0_8_ = auVar110._0_8_;
            auVar120._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
            auVar50._0_8_ = dVar45 - dVar91 * local_5e0._s_0.Z;
            auVar50._8_8_ = dVar66 - dVar118 * 0.0;
            auVar46 = blendpd(auVar110,auVar50,2);
            dVar45 = auVar120._8_8_ + auVar120._8_8_;
            dVar66 = auVar50._0_8_ + auVar50._0_8_;
            auVar111._0_8_ = auVar46._0_8_ + auVar46._0_8_;
            auVar111._8_8_ = auVar46._8_8_ + auVar46._8_8_;
            uVar95 = SUB84(dVar66,0);
            auVar70._8_4_ = uVar95;
            auVar70._0_8_ = dVar45;
            uVar97 = (undefined4)((ulonglong)dVar66 >> 0x20);
            auVar70._12_4_ = uVar97;
            auVar72._8_4_ = uVar95;
            auVar72._0_8_ = dVar45;
            auVar72._12_4_ = uVar97;
            auVar51._8_4_ = uVar95;
            auVar51._0_8_ = dVar45;
            auVar51._12_4_ = uVar97;
            auVar46 = blendpd(auVar51,auVar111,2);
            auVar71._0_8_ = auVar70._8_8_ * dVar100 - dVar45 * dVar109;
            auVar71._8_8_ = auVar111._0_8_ * dVar109 - auVar72._8_8_ * dVar67;
            auVar81._8_4_ = SUB84(auVar111._8_8_,0);
            auVar81._0_8_ = auVar111._0_8_;
            auVar81._12_4_ = (int)((ulonglong)auVar111._8_8_ >> 0x20);
            auVar52._0_8_ = auVar46._0_8_ * dVar67 - auVar111._0_8_ * dVar91;
            auVar52._8_8_ = auVar46._8_8_ * dVar125 - auVar81._8_8_ * dVar118;
            auVar23._8_4_ = SUB84(auVar71._8_8_,0);
            auVar23._0_8_ = auVar71._0_8_;
            auVar23._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
            auVar102 = blendpd(auVar71,auVar52,2);
            local_5e0._s_0.X =
                 dVar45 * dVar125 + local_5e0._s_0.X + auVar23._8_8_ +
                 local_268.Translation.XY.m128d_f64[0];
            local_5e0._s_0.Y =
                 dVar66 * dVar125 + local_5e0._s_0.Y + auVar52._0_8_ +
                 local_268.Translation.XY.m128d_f64[1];
            auVar46._0_8_ =
                 auVar111._0_8_ * dVar125 + local_5e0._s_0.Z + auVar102._0_8_ +
                 local_268.Translation.ZW.m128d_f64[0];
            auVar46._8_8_ =
                 auVar111._8_8_ * dVar125 + 0.0 + auVar102._8_8_ +
                 local_268.Translation.ZW.m128d_f64[1];
            local_5e0._s_0.Z = auVar46._0_8_;
            local_3d0 = local_5e0._s_0.X;
            dStack_3c8 = local_5e0._s_0.Y;
            local_3c0 = auVar46._0_8_;
          }
        }
        pFVar2 = *(FRigVMDrawInterface **)&local_5c8->field_0x58;
        if ((pFVar2 != (FRigVMDrawInterface *)0x0) && (param_7->bEnabled != false)) {
          local_598._0_8_ = ___xmm_3f8000003f8000003f80000000000000;
          local_598._8_8_ = _UNK_15090c6e8;
          if (param_3->Kind == Direction) {
            local_3b8 = (param_6->Translation).XY.m128d_f64[0];
            dStack_3b0 = (param_6->Translation).XY.m128d_f64[1];
            local_4a0._s_0.Z = (param_6->Translation).ZW.m128d_f64[0];
            dVar79 = (double)param_7->Scale;
            local_4e8._s_0.X = dVar79 * local_5e0._s_0.X + local_3b8;
            local_4e8._s_0.Y = dVar79 * local_5e0._s_0.Y + dStack_3b0;
            local_4e8._s_0.Z = dVar79 * local_5e0._s_0.Z + local_4a0._s_0.Z;
            local_4a0._s_0.X = (param_6->Translation).XY.m128d_f64[0];
            local_4a0._s_0.Y = (param_6->Translation).XY.m128d_f64[1];
            local_3a8 = local_4a0._s_0.Z;
            FRigVMDrawInterface::DrawLine
                      (pFVar2,&param_7->WorldOffset,(TVector<double> *)&local_4a0._s_0,
                       (TVector<double> *)&local_4e8._s_0,(FLinearColor *)&local_598._s_0,0.0,
                       SDPG_Foreground,fVar18);
          }
          else {
            local_488._s_0.X = (param_6->Translation).XY.m128d_f64[0];
            local_488._s_0.Y = (param_6->Translation).XY.m128d_f64[1];
            local_488._s_0.Z = (param_6->Translation).ZW.m128d_f64[0];
            FRigVMDrawInterface::DrawLine
                      (pFVar2,&param_7->WorldOffset,(TVector<double> *)&local_488._s_0,
                       (TVector<double> *)&local_5e0._s_0,(FLinearColor *)&local_598._s_0,0.0,
                       SDPG_Foreground,fVar18);
            local_208.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
            local_208.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
            local_208.Scale3D.XY.m128d_f64[0] = (double)param_7->Scale * dVar79;
            local_208.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
            local_208.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
            local_208.Translation.XY.m128d_f64[0] = local_5e0._s_0.X;
            local_208.Translation.XY.m128d_f64[1] = local_5e0._s_0.Y;
            local_208.Translation.ZW.m128d_f64[0] = local_5e0._s_0.Z;
            local_208.Translation.ZW.m128d_f64[1] = 0.0;
            local_208.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_208.Scale3D.XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[0];
            local_208.Scale3D.ZW.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
            FRigVMDrawInterface::DrawBox
                      (*(FRigVMDrawInterface **)&local_5c8->field_0x58,&param_7->WorldOffset,
                       &local_208,(FLinearColor *)&local_598._s_0,0.0,SDPG_Foreground,fVar18);
          }
        }
        if (param_3->Kind == Location) {
          local_3a0 = (param_6->Translation).XY.m128d_f64[0];
          dStack_398 = (param_6->Translation).XY.m128d_f64[1];
          local_5e0._s_0.X = local_5e0._s_0.X - local_3a0;
          local_390 = (param_6->Translation).ZW.m128d_f64[0];
          local_5e0._s_0.Z = local_5e0._s_0.Z - local_390;
          local_5e0._s_0.Y = local_5e0._s_0.Y - dStack_398;
        }
        uVar11 = local_5e0._s_0.Z;
        uVar124 = local_5e0._s_0.Y;
        uVar19 = local_5e0._s_0.X;
        if ((((dVar3 < (double)CONCAT44((uint)((ulonglong)local_5e0._0_8_ >> 0x20) & uVar10,
                                        SUB84(local_5e0._s_0.X,0) & uVar129)) ||
             (dVar3 < (double)CONCAT44((uint)((ulonglong)local_5e0._8_8_ >> 0x20) & uVar10,
                                       SUB84(local_5e0._s_0.Y,0) & uVar129))) ||
            (dVar3 < (double)CONCAT44((uint)((ulonglong)local_5e0._16_8_ >> 0x20) & uVar10,
                                      SUB84(local_5e0._s_0.Z,0) & uVar129))) &&
           (bVar13 = UE::Math::TVector<double>::IsNearlyZero(&param_3->Axis,dVar3), !bVar13)) {
          dVar79 = (double)uVar19 * (double)uVar19 + (double)uVar124 * (double)uVar124 +
                   (double)uVar11 * (double)uVar11;
          if (dVar79 == __real_3ff0000000000000) {
            local_4c0 = local_5e0._s_0.Z;
          }
          else if (dVar9 <= dVar79) {
            local_4b8 = __real_3ff0000000000000 / SQRT(dVar79);
            uVar19 = local_4b8 * (double)uVar19;
            local_4c0 = local_4b8 * (double)uVar11;
            uVar124 = local_4b8 * (double)uVar124;
          }
          else {
            local_4c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar124 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
          local_328 = *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64;
          dVar67 = (param_6->Rotation).ZW.m128d_f64[1];
          auVar46 = *(undefined1 (*) [16])(param_6->Rotation).ZW.m128d_f64;
          dVar125 = auVar46._0_8_;
          auVar72 = blendpd(local_328,auVar46,2);
          auVar102 = *(undefined1 (*) [16])&(param_3->Axis).field0_0x0;
          dVar79 = (param_3->Axis).field0_0x0._s_0.Z;
          auVar112._8_8_ = 0;
          auVar112._0_8_ = dVar79;
          dVar100 = auVar102._8_8_;
          auVar104._0_8_ = dVar100 * local_328._0_8_ - local_328._8_8_ * auVar102._0_8_;
          auVar104._8_8_ = dVar79 * local_328._8_8_ - dVar125 * dVar100;
          auVar24 = blendpd(auVar102,auVar112,2);
          auVar92._8_4_ = SUB84(auVar104._8_8_,0);
          auVar92._0_8_ = auVar104._0_8_;
          auVar92._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
          auVar25._0_8_ = auVar24._0_8_ * dVar125 - auVar72._0_8_ * dVar79;
          auVar25._8_8_ = auVar24._8_8_ * auVar46._8_8_ - auVar72._8_8_ * 0.0;
          auVar24 = *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64;
          auVar72 = blendpd(auVar104,auVar25,2);
          dVar45 = auVar92._8_8_ + auVar92._8_8_;
          dVar66 = auVar25._0_8_ + auVar25._0_8_;
          auVar105._0_8_ = auVar72._0_8_ + auVar72._0_8_;
          auVar105._8_8_ = auVar72._8_8_ + auVar72._8_8_;
          auVar85._8_4_ = SUB84(dVar66,0);
          auVar85._0_8_ = dVar45;
          uVar95 = (undefined4)((ulonglong)dVar66 >> 0x20);
          auVar85._12_4_ = uVar95;
          auVar80._8_4_ = SUB84(dVar66,0);
          auVar80._0_8_ = dVar45;
          auVar80._12_4_ = uVar95;
          auVar81 = blendpd(auVar80,auVar105,2);
          auVar72 = blendpd(auVar24,auVar46,2);
          auVar86._0_8_ = auVar85._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar45;
          auVar86._8_8_ = auVar105._0_8_ * auVar24._8_8_ - dVar125 * dVar66;
          auVar26._8_4_ = SUB84(auVar86._8_8_,0);
          auVar26._0_8_ = auVar86._0_8_;
          auVar26._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
          auVar82._0_8_ = auVar81._0_8_ * dVar125 - auVar72._0_8_ * auVar105._0_8_;
          auVar82._8_8_ = auVar81._8_8_ * auVar46._8_8_ - auVar72._8_8_ * auVar105._8_8_;
          auVar46 = blendpd(auVar86,auVar82,2);
          local_470._s_0.X = dVar45 * dVar67 + auVar102._0_8_ + auVar26._8_8_;
          local_470._s_0.Y = dVar66 * dVar67 + dVar100 + auVar82._0_8_;
          local_470._s_0.Z = auVar105._0_8_ * dVar67 + dVar79 + auVar46._0_8_;
          local_5e0._0_8_ = uVar19;
          local_5e0._8_8_ = uVar124;
          local_5e0._16_8_ = local_4c0;
          UE::Math::TVector<double>::GetSafeNormal
                    ((TVector<double> *)&local_470._s_0,(TVector<double> *)&local_560._s_0,dVar9,
                     &UE::Math::TVector<double>::ZeroVector);
          fVar18 = param_5 * param_3->Weight;
          if (fVar18 < __real_3f800000) {
            dVar79 = (double)fVar18;
            local_530._s_0.X = ((double)uVar19 - local_560._s_0.X) * dVar79 + local_560._s_0.X;
            local_530._s_0.Y = ((double)uVar124 - local_560._s_0.Y) * dVar79 + local_560._s_0.Y;
            local_530._s_0.Z = (local_4c0 - local_560._s_0.Z) * dVar79 + local_560._s_0.Z;
            pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                                ((TVector<double> *)&local_530._s_0,&local_308,dVar9,
                                 &UE::Math::TVector<double>::ZeroVector);
            local_5e0._s_0.X = (pTVar14->field0_0x0)._s_0.X;
            local_5e0._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
            local_5e0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
          }
          FRigVMMathLibrary::FindQuatBetweenVectors
                    (&local_408,(TVector<double> *)&local_560._s_0,
                     (TVector<double> *)&local_5e0._s_0);
          dVar125 = (param_6->Rotation).XY.m128d_f64[0];
          dVar45 = (param_6->Rotation).XY.m128d_f64[1];
          dVar66 = (param_6->Rotation).ZW.m128d_f64[0];
          dVar100 = (param_6->Rotation).ZW.m128d_f64[1];
          dVar109 = local_408.X;
          dVar91 = local_408.Y;
          auVar113._8_4_ = local_408.X._0_4_;
          auVar113._0_8_ = dVar109;
          auVar113._12_4_ = local_408.X._4_4_;
          auVar73._8_8_ = dVar66;
          auVar73._0_8_ = dVar100;
          dVar67 = local_408.W;
          auVar27._8_4_ = local_408.W._0_4_;
          auVar27._0_8_ = dVar67;
          auVar27._12_4_ = local_408.W._4_4_;
          dVar79 = local_408.Z;
          auVar28._8_4_ = local_408.Z._0_4_;
          auVar28._0_8_ = dVar79;
          auVar28._12_4_ = local_408.Z._4_4_;
          auVar46._0_8_ =
               dVar109 * dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar67 * dVar66 +
               dVar125 * dVar91 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar79 * dVar100 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          auVar46._8_8_ =
               auVar113._8_8_ * dVar125 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               auVar27._8_8_ * dVar100 +
               dVar45 * dVar91 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               auVar28._8_8_ * dVar66 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar29._8_4_ = SUB84(auVar46._8_8_,0);
          auVar29._0_8_ = auVar46._0_8_;
          auVar29._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
          local_4b0 = dVar9;
          dVar118 = dVar109 * dVar100 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar67 * dVar125 +
                    dVar66 * dVar91 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar45 * dVar79 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar125 = dVar109 * dVar66 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    dVar67 * dVar45 +
                    dVar100 * dVar91 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    dVar125 * dVar79 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar53._8_4_ = SUB84(dVar125,0);
          auVar53._0_8_ = dVar118;
          auVar53._12_4_ = (int)((ulonglong)dVar125 >> 0x20);
          dVar79 = dVar118 * dVar118 + auVar46._0_8_ * auVar46._0_8_;
          dVar67 = auVar53._8_8_ * dVar125 + auVar29._8_8_ * auVar46._8_8_;
          auVar30._8_4_ = SUB84(dVar67,0);
          auVar30._0_8_ = dVar79;
          auVar30._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          auVar31._0_8_ = auVar30._8_8_ + dVar79;
          auVar31._8_8_ = dVar79 + dVar67;
          auVar24 = sqrtpd(auVar73,auVar31);
          uVar16 = -(ulonglong)(dVar9 <= auVar31._0_8_);
          uVar17 = -(ulonglong)(dVar9 <= auVar31._8_8_);
          auVar102 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
          uVar128 = (uint)(uVar16 >> 0x20);
          uVar96 = (uint)(uVar17 >> 0x20);
          auVar54._0_8_ = uVar16 & (ulonglong)(auVar102._0_8_ * auVar46._0_8_);
          uVar8 = uVar17 & (ulonglong)(auVar102._8_8_ * auVar46._8_8_);
          auVar54._8_4_ = (undefined4)uVar8;
          auVar54._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar87._0_4_ =
               ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar87._4_4_ =
               ~uVar128 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
          auVar87._8_4_ =
               ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar87._12_4_ =
               ~uVar96 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          auVar102 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
          auVar55._0_8_ = (ulonglong)(auVar102._0_8_ * dVar118) & uVar16;
          uVar8 = (ulonglong)(auVar102._8_8_ * dVar125) & uVar17;
          auVar55._8_4_ = (undefined4)uVar8;
          auVar55._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar93._0_4_ =
               ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar93._4_4_ =
               ~uVar128 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
          auVar93._8_4_ =
               ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar93._12_4_ =
               ~uVar96 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64 = auVar55 | auVar93;
          *(undefined1 (*) [16])(param_6->Rotation).ZW.m128d_f64 = auVar87 | auVar54;
          fVar18 = __real_bf800000;
        }
      }
      if (__real_322bcc77 < param_4->Weight) {
        _local_5f8 = *(undefined1 (*) [16])&(param_4->Target).field0_0x0;
        local_5e8 = (param_4->Target).field0_0x0._s_0.Z;
        bVar13 = FCachedRigElement::UpdateCache(param_9,&param_4->Space,local_5b8);
        if (bVar13) {
          if (param_9->Index != 0xffff) {
            uVar127 = (uint)param_9->Index;
          }
          URigHierarchy::GetGlobalTransformByIndex(local_5b8,&local_1a8,uVar127,false);
          dVar79 = local_1a8.Rotation.XY.m128d_f64[0];
          dVar67 = local_1a8.Rotation.XY.m128d_f64[1];
          dVar66 = local_5f8;
          dVar125 = local_1a8.Rotation.ZW.m128d_f64[0];
          dVar45 = local_1a8.Rotation.ZW.m128d_f64[1];
          if (param_4->Kind == Direction) {
            auVar102 = blendpd((undefined1  [16])local_1a8.Rotation.XY.m128d_f64,
                               (undefined1  [16])local_1a8.Rotation.ZW.m128d_f64,2);
            auVar114._0_8_ = dStack_5f0 * dVar79 - dVar66 * dVar67;
            auVar114._8_8_ = (double)local_5e8 * dVar67 - dStack_5f0 * dVar125;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_5e8;
            auVar46 = blendpd(_local_5f8,auVar4,2);
            auVar56._0_8_ = auVar46._0_8_ * dVar125 - (double)local_5e8 * auVar102._0_8_;
            auVar56._8_8_ = auVar46._8_8_ * dVar45 - auVar102._8_8_ * 0.0;
            auVar46 = blendpd(auVar114,auVar56,2);
            dVar100 = auVar114._8_8_ + auVar114._8_8_;
            dVar109 = auVar56._0_8_ + auVar56._0_8_;
            uVar95 = SUB84(dVar109,0);
            uVar97 = (undefined4)((ulonglong)dVar109 >> 0x20);
            auVar115._0_8_ = auVar46._0_8_ + auVar46._0_8_;
            auVar115._8_8_ = auVar46._8_8_ + auVar46._8_8_;
            auVar74._8_4_ = uVar95;
            auVar74._0_8_ = dVar100;
            auVar74._12_4_ = uVar97;
            auVar32._8_4_ = uVar95;
            auVar32._0_8_ = dVar100;
            auVar32._12_4_ = uVar97;
            auVar57._8_4_ = uVar95;
            auVar57._0_8_ = dVar100;
            auVar57._12_4_ = uVar97;
            auVar46 = blendpd(auVar57,auVar115,2);
            auVar75._0_8_ = auVar74._8_8_ * dVar79 - dVar100 * dVar67;
            auVar75._8_8_ = auVar115._0_8_ * dVar67 - auVar32._8_8_ * dVar125;
            auVar33._8_4_ = SUB84(auVar115._8_8_,0);
            auVar33._0_8_ = auVar115._0_8_;
            auVar33._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
            auVar58._0_8_ = auVar46._0_8_ * dVar125 - auVar115._0_8_ * auVar102._0_8_;
            auVar58._8_8_ = auVar46._8_8_ * dVar45 - auVar33._8_8_ * auVar102._8_8_;
            auVar34._8_4_ = SUB84(auVar75._8_8_,0);
            auVar34._0_8_ = auVar75._0_8_;
            auVar34._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
            auVar102 = blendpd(auVar75,auVar58,2);
            dVar79 = dVar100 * dVar45 + dVar66 + auVar34._8_8_;
            dVar67 = dVar109 * dVar45 + dStack_5f0 + auVar58._0_8_;
            uVar95 = SUB84(dVar67,0);
            uVar97 = (undefined4)((ulonglong)dVar67 >> 0x20);
            auVar46._0_8_ = auVar115._0_8_ * dVar45 + (double)local_5e8 + auVar102._0_8_;
            auVar46._8_8_ = auVar115._8_8_ * dVar45 + 0.0 + auVar102._8_8_;
            local_388._8_4_ = uVar95;
            local_388._0_8_ = dVar79;
            local_388._12_4_ = uVar97;
            unique0x10000300 = uVar95;
            local_5f8 = dVar79;
            unique0x10000304 = uVar97;
            local_5e8 = auVar46._0_8_;
            local_378 = auVar46._0_8_;
          }
          else {
            auVar24 = blendpd((undefined1  [16])local_1a8.Rotation.XY.m128d_f64,
                              (undefined1  [16])local_1a8.Rotation.ZW.m128d_f64,2);
            auVar46._8_8_ = dVar45;
            auVar46._0_8_ = dVar45;
            auVar121._0_8_ = dStack_5f0 * dVar79 - dVar66 * dVar67;
            auVar121._8_8_ = (double)local_5e8 * dVar67 - dStack_5f0 * dVar125;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_5e8;
            auVar102 = blendpd(_local_5f8,auVar5,2);
            auVar106._8_4_ = SUB84(auVar121._8_8_,0);
            auVar106._0_8_ = auVar121._0_8_;
            auVar106._12_4_ = (int)((ulonglong)auVar121._8_8_ >> 0x20);
            auVar59._0_8_ = auVar102._0_8_ * dVar125 - (double)local_5e8 * auVar24._0_8_;
            auVar59._8_8_ = auVar102._8_8_ * dVar45 - auVar24._8_8_ * 0.0;
            auVar102 = blendpd(auVar121,auVar59,2);
            dVar100 = auVar106._8_8_ + auVar106._8_8_;
            dVar109 = auVar59._0_8_ + auVar59._0_8_;
            auVar122._0_8_ = auVar102._0_8_ + auVar102._0_8_;
            auVar122._8_8_ = auVar102._8_8_ + auVar102._8_8_;
            uVar95 = SUB84(dVar109,0);
            auVar76._8_4_ = uVar95;
            auVar76._0_8_ = dVar100;
            uVar97 = (undefined4)((ulonglong)dVar109 >> 0x20);
            auVar76._12_4_ = uVar97;
            auVar35._8_4_ = uVar95;
            auVar35._0_8_ = dVar100;
            auVar35._12_4_ = uVar97;
            auVar60._8_4_ = uVar95;
            auVar60._0_8_ = dVar100;
            auVar60._12_4_ = uVar97;
            auVar102 = blendpd(auVar60,auVar122,2);
            auVar77._0_8_ = auVar76._8_8_ * dVar79 - dVar100 * dVar67;
            auVar77._8_8_ = auVar122._0_8_ * dVar67 - auVar35._8_8_ * dVar125;
            auVar36._8_4_ = SUB84(auVar122._8_8_,0);
            auVar36._0_8_ = auVar122._0_8_;
            auVar36._12_4_ = (int)((ulonglong)auVar122._8_8_ >> 0x20);
            auVar61._0_8_ = auVar102._0_8_ * dVar125 - auVar122._0_8_ * auVar24._0_8_;
            auVar61._8_8_ = auVar102._8_8_ * dVar45 - auVar36._8_8_ * auVar24._8_8_;
            auVar37._8_4_ = SUB84(auVar77._8_8_,0);
            auVar37._0_8_ = auVar77._0_8_;
            auVar37._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
            auVar102 = blendpd(auVar77,auVar61,2);
            local_370 = dVar100 * dVar45 + dVar66 + auVar37._8_8_ +
                        local_1a8.Translation.XY.m128d_f64[0];
            dStack_368 = dVar109 * dVar45 + dStack_5f0 + auVar61._0_8_ +
                         local_1a8.Translation.XY.m128d_f64[1];
            local_5e8 = auVar122._0_8_ * dVar45 + (double)local_5e8 + auVar102._0_8_ +
                        local_1a8.Translation.ZW.m128d_f64[0];
            dStack_5f0 = dStack_368;
            local_5f8 = local_370;
            local_360 = (double)local_5e8;
          }
        }
        pFVar12 = local_5c8;
        pFVar2 = *(FRigVMDrawInterface **)&local_5c8->field_0x58;
        if ((pFVar2 != (FRigVMDrawInterface *)0x0) && (param_7->bEnabled != false)) {
          local_588._0_8_ = ___xmm_3f8000003f8000003e4ccccd00000000;
          local_588._8_8_ = _UNK_15219d428;
          if (param_4->Kind == Direction) {
            local_358 = (param_6->Translation).XY.m128d_f64[0];
            dStack_350 = (param_6->Translation).XY.m128d_f64[1];
            local_458._s_0.Z = (param_6->Translation).ZW.m128d_f64[0];
            dVar79 = (double)param_7->Scale;
            local_518._s_0.X = dVar79 * local_5f8 + local_358;
            local_518._s_0.Y = dVar79 * dStack_5f0 + dStack_350;
            local_518._s_0.Z = dVar79 * (double)local_5e8 + local_458._s_0.Z;
            local_458._s_0.X = (param_6->Translation).XY.m128d_f64[0];
            local_458._s_0.Y = (param_6->Translation).XY.m128d_f64[1];
            local_348 = local_458._s_0.Z;
            FRigVMDrawInterface::DrawLine
                      (pFVar2,&param_7->WorldOffset,(TVector<double> *)&local_458._s_0,
                       (TVector<double> *)&local_518._s_0,(FLinearColor *)&local_588._s_0,0.0,
                       SDPG_Foreground,fVar18);
          }
          else {
            local_440._s_0.X = (param_6->Translation).XY.m128d_f64[0];
            local_440._s_0.Y = (param_6->Translation).XY.m128d_f64[1];
            local_440._s_0.Z = (param_6->Translation).ZW.m128d_f64[0];
            FRigVMDrawInterface::DrawLine
                      (pFVar2,&param_7->WorldOffset,(TVector<double> *)&local_440._s_0,
                       (TVector<double> *)&local_5f8,(FLinearColor *)&local_588._s_0,0.0,
                       SDPG_Foreground,fVar18);
            local_148.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
            local_148.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
            local_148.Scale3D.XY.m128d_f64[0] = (double)param_7->Scale * __real_3fb99999a0000000;
            local_148.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
            local_148.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
            local_148.Translation.XY.m128d_f64[0] = local_5f8;
            local_148.Translation.XY.m128d_f64[1] = dStack_5f0;
            local_148.Translation.ZW.m128d_f64[0] = (double)local_5e8;
            local_148.Translation.ZW.m128d_f64[1] = 0.0;
            local_148.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_148.Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[0];
            local_148.Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
            FRigVMDrawInterface::DrawBox
                      (*(FRigVMDrawInterface **)&pFVar12->field_0x58,&param_7->WorldOffset,
                       &local_148,(FLinearColor *)&local_588._s_0,0.0,SDPG_Foreground,fVar18);
          }
        }
        dVar67 = local_5f8;
        dVar79 = dStack_5f0;
        if (param_4->Kind == Location) {
          local_340 = (param_6->Translation).XY.m128d_f64[0];
          dStack_338 = (param_6->Translation).XY.m128d_f64[1];
          local_330 = (param_6->Translation).ZW.m128d_f64[0];
          dVar67 = local_5f8 - local_340;
          local_5e8 = (double)local_5e8 - local_330;
          dVar79 = dStack_5f0 - dStack_338;
          dStack_5f0 = dVar79;
          local_5f8 = dVar67;
        }
        uVar124 = local_5e8;
        local_578._0_16_ = *(undefined1 (*) [16])&(param_3->Axis).field0_0x0;
        dVar125 = local_578._0_8_;
        local_578._s_0.Z = *(double *)((longlong)&(param_3->Axis).field0_0x0 + 0x10);
        dVar45 = local_578._8_8_;
        if (((dVar3 < (double)CONCAT44(local_578._4_4_ & uVar10,local_578._0_4_ & uVar129)) ||
            (auVar7._4_8_ = auVar46._8_8_, auVar7._0_4_ = local_578._4_4_,
            auVar116._0_8_ = auVar7._0_8_ << 0x20, auVar116._8_4_ = local_578._8_4_,
            auVar116._12_4_ = local_578._12_4_, dVar66 = auVar116._8_8_,
            dVar3 < (double)CONCAT44(local_578._12_4_ & uVar10,local_578._8_4_ & uVar129))) ||
           (local_5c8 = (FControlRigExecuteContext *)local_578._s_0.Z,
           dVar3 < (double)CONCAT44((uint)((ulonglong)local_578._s_0.Z >> 0x20) & uVar10,
                                    SUB84(local_578._s_0.Z,0) & uVar129))) {
          dVar66 = (param_3->Axis).field0_0x0._s_0.Z;
          auVar117._8_8_ = 0;
          auVar117._0_8_ = dVar66;
          auVar46 = *(undefined1 (*) [16])(param_6->Rotation).ZW.m128d_f64;
          dVar109 = auVar46._0_8_;
          local_328 = *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64;
          dVar100 = (param_6->Rotation).ZW.m128d_f64[1];
          auVar24 = blendpd(local_328,auVar46,2);
          auVar107._0_8_ = dVar45 * local_328._0_8_ - local_328._8_8_ * dVar125;
          auVar107._8_8_ = dVar66 * local_328._8_8_ - dVar109 * dVar45;
          auVar94._8_4_ = SUB84(auVar107._8_8_,0);
          auVar94._0_8_ = auVar107._0_8_;
          auVar94._12_4_ = (int)((ulonglong)auVar107._8_8_ >> 0x20);
          auVar102 = blendpd(local_578._0_16_,auVar117,2);
          auVar38._0_8_ = auVar102._0_8_ * dVar109 - auVar24._0_8_ * dVar66;
          auVar38._8_8_ = auVar102._8_8_ * auVar46._8_8_ - auVar24._8_8_ * 0.0;
          auVar102 = *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64;
          auVar24 = blendpd(auVar107,auVar38,2);
          dVar91 = auVar94._8_8_ + auVar94._8_8_;
          dVar118 = auVar38._0_8_ + auVar38._0_8_;
          auVar108._0_8_ = auVar24._0_8_ + auVar24._0_8_;
          auVar108._8_8_ = auVar24._8_8_ + auVar24._8_8_;
          auVar88._8_4_ = SUB84(dVar118,0);
          auVar88._0_8_ = dVar91;
          uVar95 = (undefined4)((ulonglong)dVar118 >> 0x20);
          auVar88._12_4_ = uVar95;
          auVar83._8_4_ = SUB84(dVar118,0);
          auVar83._0_8_ = dVar91;
          auVar83._12_4_ = uVar95;
          auVar72 = blendpd(auVar83,auVar108,2);
          auVar24 = blendpd(auVar102,auVar46,2);
          auVar89._0_8_ = auVar88._8_8_ * auVar102._0_8_ - auVar102._8_8_ * dVar91;
          auVar89._8_8_ = auVar108._0_8_ * auVar102._8_8_ - dVar109 * dVar118;
          auVar39._8_4_ = SUB84(auVar89._8_8_,0);
          auVar39._0_8_ = auVar89._0_8_;
          auVar39._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
          auVar84._0_8_ = auVar72._0_8_ * dVar109 - auVar24._0_8_ * auVar108._0_8_;
          auVar84._8_8_ = auVar72._8_8_ * auVar46._8_8_ - auVar24._8_8_ * auVar108._8_8_;
          auVar46 = blendpd(auVar89,auVar84,2);
          local_428._s_0.X = dVar91 * dVar100 + dVar125 + auVar39._8_8_;
          local_428._s_0.Y = dVar118 * dVar100 + dVar45 + auVar84._0_8_;
          local_428._s_0.Z = auVar108._0_8_ * dVar100 + dVar66 + auVar46._0_8_;
          pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_428._s_0,&local_2a8,dVar9,
                               &UE::Math::TVector<double>::ZeroVector);
          local_578._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
          dVar125 = (pTVar14->field0_0x0)._s_0.X;
          dVar66 = (pTVar14->field0_0x0)._s_0.Y;
          local_578._0_16_ = *(undefined1 (*) [16])&pTVar14->field0_0x0;
          dVar45 = dVar125 * dVar67 + dVar66 * dVar79 + local_578._s_0.Z * (double)uVar124;
          dVar67 = dVar67 - dVar125 * dVar45;
          dVar79 = dVar79 - dVar66 * dVar45;
          local_5e8 = (double)uVar124 - local_578._s_0.Z * dVar45;
          dStack_5f0 = dVar79;
          local_5f8 = dVar67;
        }
        uVar127 = SUB84(dVar67,0) & uVar129;
        uVar128 = (uint)((ulonglong)dVar67 >> 0x20) & uVar10;
        if ((((dVar3 <= (double)CONCAT44(uVar128,uVar127) &&
               (double)CONCAT44(uVar128,uVar127) != dVar3) ||
             (uVar127 = SUB84(dVar79,0) & uVar129,
             uVar128 = (uint)((ulonglong)dVar79 >> 0x20) & uVar10,
             dVar3 <= (double)CONCAT44(uVar128,uVar127) &&
             (double)CONCAT44(uVar128,uVar127) != dVar3)) ||
            (dVar3 < (double)CONCAT44((uint)((ulonglong)local_5e8 >> 0x20) & uVar10,
                                      (uint)local_5e8 & uVar129))) &&
           (local_5c8 = (FControlRigExecuteContext *)local_578._s_0.Z,
           bVar13 = UE::Math::TVector<double>::IsNearlyZero(&param_4->Axis,dVar3), !bVar13)) {
          pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_5f8,&local_2f0,dVar9,
                               &UE::Math::TVector<double>::ZeroVector);
          uVar95 = *(undefined4 *)&pTVar14->field0_0x0;
          uVar97 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 4);
          uVar98 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 8);
          uVar99 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 0xc);
          _local_5f8 = *(undefined1 (*) [16])&pTVar14->field0_0x0;
          local_5e8 = (pTVar14->field0_0x0)._s_0.Z;
          pTVar14 = UE::Math::TTransform<double>::TransformVectorNoScale
                              (param_6,&local_2d8,&param_4->Axis);
          UE::Math::TVector<double>::GetSafeNormal
                    (pTVar14,(TVector<double> *)&local_548._s_0,dVar9,
                     &UE::Math::TVector<double>::ZeroVector);
          fVar18 = param_5 * param_4->Weight;
          if (fVar18 < __real_3f800000) {
            dVar79 = (double)fVar18;
            local_500._s_0.Y = (dStack_5f0 - local_548._s_0.Y) * dVar79 + local_548._s_0.Y;
            local_500._s_0.X = (local_5f8 - local_548._s_0.X) * dVar79 + local_548._s_0.X;
            local_500._s_0.Z = ((double)local_5e8 - local_548._s_0.Z) * dVar79 + local_548._s_0.Z;
            pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                                ((TVector<double> *)&local_500._s_0,&local_2c0,dVar9,
                                 &UE::Math::TVector<double>::ZeroVector);
            uVar95 = *(undefined4 *)&pTVar14->field0_0x0;
            uVar97 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 4);
            uVar98 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 8);
            uVar99 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 0xc);
            _local_5f8 = *(undefined1 (*) [16])&pTVar14->field0_0x0;
            local_5e8 = (pTVar14->field0_0x0)._s_0.Z;
          }
          if ((___real_bfeffffffaa19c48 <=
               local_548._s_0.X * (double)CONCAT44(uVar97,uVar95) +
               local_548._s_0.Y * (double)CONCAT44(uVar99,uVar98) +
               local_548._s_0.Z * (double)local_5e8) ||
             (bVar13 = UE::Math::TVector<double>::IsNearlyZero
                                 ((TVector<double> *)&local_578._s_0,dVar3), bVar13)) {
            pTVar15 = FRigVMMathLibrary::FindQuatBetweenVectors
                                (&local_288,(TVector<double> *)&local_548._s_0,
                                 (TVector<double> *)&local_5f8);
            dVar125 = pTVar15->X;
            dVar66 = pTVar15->Y;
            auVar123._0_8_ = pTVar15->Z;
            auVar123._8_8_ = pTVar15->W;
          }
          else {
            dVar125 = dVar125 * __real_3feffffffffffff7;
            dVar66 = dVar66 * __real_3feffffffffffff7;
            auVar123._0_8_ = (double)local_5c8 * __real_3feffffffffffff7;
            auVar123._8_8_ = __real_be6777a5cf72cecc;
          }
          dVar67 = (param_6->Rotation).XY.m128d_f64[0];
          dVar45 = (param_6->Rotation).XY.m128d_f64[1];
          dVar100 = (param_6->Rotation).ZW.m128d_f64[0];
          dVar109 = (param_6->Rotation).ZW.m128d_f64[1];
          auVar78._8_8_ = dVar125;
          auVar78._0_8_ = dVar125;
          dVar91 = auVar123._0_8_;
          dVar126 = auVar123._8_8_;
          auVar40._8_4_ = auVar123._8_4_;
          auVar40._0_8_ = dVar126;
          auVar40._12_4_ = auVar123._12_4_;
          auVar41._8_4_ = auVar123._0_4_;
          auVar41._0_8_ = dVar91;
          auVar41._12_4_ = auVar123._4_4_;
          auVar62._8_4_ = SUB84(dVar66,0);
          auVar62._0_8_ = dVar66;
          auVar62._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
          dVar3 = dVar125 * dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                  + dVar126 * dVar100 +
                  dVar66 * dVar67 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                  + dVar91 * dVar109 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar79 = dVar125 * dVar67 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   auVar40._8_8_ * dVar109 +
                   auVar62._8_8_ * dVar45 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   auVar41._8_8_ * dVar100 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar42._8_4_ = SUB84(dVar79,0);
          auVar42._0_8_ = dVar3;
          auVar42._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
          dVar118 = dVar109 * dVar125 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar126 * dVar67 +
                    dVar66 * dVar100 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar91 * dVar45 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar45 = dVar100 * dVar125 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   dVar126 * dVar45 +
                   dVar66 * dVar109 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   dVar91 * dVar67 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
          ;
          auVar63._8_4_ = SUB84(dVar45,0);
          auVar63._0_8_ = dVar118;
          auVar63._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
          dVar67 = dVar118 * dVar118 + dVar3 * dVar3;
          dVar125 = auVar63._8_8_ * dVar45 + auVar42._8_8_ * dVar79;
          auVar43._8_4_ = SUB84(dVar125,0);
          auVar43._0_8_ = dVar67;
          auVar43._12_4_ = (int)((ulonglong)dVar125 >> 0x20);
          auVar44._0_8_ = auVar43._8_8_ + dVar67;
          auVar44._8_8_ = dVar67 + dVar125;
          auVar102 = sqrtpd(auVar78,auVar44);
          uVar16 = -(ulonglong)(dVar9 <= auVar44._0_8_);
          uVar17 = -(ulonglong)(dVar9 <= auVar44._8_8_);
          uVar127 = (uint)(uVar16 >> 0x20);
          uVar129 = (uint)(uVar17 >> 0x20);
          auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar102);
          auVar64._0_8_ = uVar16 & (ulonglong)(auVar46._0_8_ * dVar3);
          uVar8 = uVar17 & (ulonglong)(auVar46._8_8_ * dVar79);
          auVar64._8_4_ = (undefined4)uVar8;
          auVar64._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar90._0_4_ =
               ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar90._4_4_ =
               ~uVar127 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
          auVar90._8_4_ =
               ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar90._12_4_ =
               ~uVar129 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar102);
          auVar65._0_8_ = (ulonglong)(auVar46._0_8_ * dVar118) & uVar16;
          uVar8 = (ulonglong)(auVar46._8_8_ * dVar45) & uVar17;
          auVar65._8_4_ = (undefined4)uVar8;
          auVar65._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar6._4_4_ = ~uVar127 &
                         (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar6._0_4_ = ~(uint)uVar16 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar6._8_4_ = ~(uint)uVar17 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar6._12_4_ =
               ~uVar129 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64 = auVar65 | auVar6;
          *(undefined1 (*) [16])(param_6->Rotation).ZW.m128d_f64 = auVar90 | auVar64;
        }
      }
    }
  }
  return;
}

