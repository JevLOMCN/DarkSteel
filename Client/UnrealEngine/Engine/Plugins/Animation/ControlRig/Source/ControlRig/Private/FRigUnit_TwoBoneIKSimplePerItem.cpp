// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4e1690

UScriptStruct * __cdecl FRigUnit_TwoBoneIKSimplePerItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem,(UObject *)pUVar1
                         ,L"RigUnit_TwoBoneIKSimplePerItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem.OuterSingleton;
}

// FRigUnit_TwoBoneIKSimplePerItem @ 14a517150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_TwoBoneIKSimplePerItem * __thiscall
FRigUnit_TwoBoneIKSimplePerItem::FRigUnit_TwoBoneIKSimplePerItem
          (FRigUnit_TwoBoneIKSimplePerItem *this)

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
  ulonglong uVar15;
  uint uVar16;
  __m128d _Var17;
  __m128d _Var18;
  __m128d _Var19;
  __m128d _Var20;
  __m128d _Var21;
  __m128d _Var22;
  uint local_b8;
  undefined2 uStack_aa;
  undefined4 uStack_a4;
  uint local_98;
  uint local_88;
  longlong lStack_80;
  
  (this->ItemA).Type = None;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_TwoBoneIKSimplePerItem__6B_;
  (this->ItemA).Name.ComparisonIndex = 0;
  (this->ItemA).Name.Number = 0;
  (this->ItemB).Type = None;
  (this->ItemB).Name.ComparisonIndex = 0;
  (this->ItemB).Name.Number = 0;
  (this->EffectorItem).Type = None;
  (this->EffectorItem).Name.ComparisonIndex = 0;
  (this->EffectorItem).Name.Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Scale3D.ZW.m128d_f64 = auVar8;
  (this->PoleVectorSpace).Type = None;
  (this->PoleVectorSpace).Name.ComparisonIndex = 0;
  (this->PoleVectorSpace).Name.Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = auVar14;
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
  (this->CachedItemAIndex).Key.Type = None;
  (this->CachedItemAIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedItemAIndex).Key.Name.Number = 0;
  (this->CachedItemAIndex).Index = 0xffff;
  (this->CachedItemAIndex).ContainerVersion = -1;
  (this->CachedItemAIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedItemBIndex).Key.Type = None;
  (this->CachedItemBIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedItemBIndex).Key.Name.Number = 0;
  (this->CachedItemBIndex).Index = 0xffff;
  (this->CachedItemBIndex).ContainerVersion = -1;
  (this->CachedItemBIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedEffectorItemIndex).Key.Type = None;
  (this->CachedEffectorItemIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedEffectorItemIndex).Key.Name.Number = 0;
  (this->CachedEffectorItemIndex).Index = 0xffff;
  (this->CachedEffectorItemIndex).ContainerVersion = -1;
  (this->CachedEffectorItemIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedPoleVectorSpaceIndex).Key.Type = None;
  (this->CachedPoleVectorSpaceIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedPoleVectorSpaceIndex).Key.Name.Number = 0;
  (this->CachedPoleVectorSpaceIndex).Index = 0xffff;
  (this->CachedPoleVectorSpaceIndex).ContainerVersion = -1;
  (this->CachedPoleVectorSpaceIndex).Element = (FRigBaseElement *)0x0;
  local_98 = CONCAT31(local_98._1_3_,1);
  uVar15 = (ulonglong)local_98;
  (this->PoleVectorSpace).Type = (char)uVar15;
  *(int3 *)&(this->PoleVectorSpace).field_0x1 = (int3)(uVar15 >> 8);
  (this->PoleVectorSpace).Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  (this->EffectorItem).Type = (char)uVar15;
  *(int3 *)&(this->EffectorItem).field_0x1 = (int3)(uVar15 >> 8);
  (this->EffectorItem).Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  (this->ItemB).Type = (char)uVar15;
  *(int3 *)&(this->ItemB).field_0x1 = (int3)(uVar15 >> 8);
  (this->ItemB).Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  (this->ItemA).Type = (char)uVar15;
  *(int3 *)&(this->ItemA).field_0x1 = (int3)(uVar15 >> 8);
  (this->ItemA).Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  (this->PoleVectorSpace).Name.Number = 0;
  (this->EffectorItem).Name.Number = 0;
  (this->ItemB).Name.Number = 0;
  (this->ItemA).Name.Number = 0;
  *&(this->Effector).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Effector).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Effector).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Effector).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Effector).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Effector).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->PrimaryAxis).field0_0x0._s_0.X = 1.0;
  (this->PrimaryAxis).field0_0x0._s_0.Y = 0.0;
  (this->PrimaryAxis).field0_0x0._s_0.Z = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.X = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.Y = 1.0;
  (this->SecondaryAxis).field0_0x0._s_0.Z = 0.0;
  this->SecondaryAxisWeight = 1.0;
  (this->PoleVector).field0_0x0._s_0.X = 0.0;
  (this->PoleVector).field0_0x0._s_0.Y = 0.0;
  (this->PoleVector).field0_0x0._s_0.Z = 1.0;
  this->PoleVectorKind = Direction;
  this->bEnableStretch = false;
  this->StretchStartRatio = 0.75;
  this->StretchMaximumRatio = 1.25;
  this->Weight = 1.0;
  this->ItemALength = 0.0;
  this->ItemBLength = 0.0;
  this->bPropagateToChildren = true;
  _Var22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var21 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var20 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var19 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var18 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var17 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  uVar16 = local_b8 >> 8;
  local_b8 = uVar16 << 8;
  local_88 = local_88 & 0xffffff00;
  (this->DebugSettings).bEnabled = (bool)(char)local_88;
  *(int3 *)&(this->DebugSettings).field_0x1 = (int3)(local_88 >> 8);
  (this->DebugSettings).Scale = 10.0;
  (this->DebugSettings)._padding_ = lStack_80;
  uVar15 = (ulonglong)local_b8;
  local_b8 = uVar16 << 8;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var17.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var18.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var19.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var20.m128d_f64;
  (this->CachedItemAIndex).Key.Type = (char)uVar15;
  *(int3 *)&(this->CachedItemAIndex).Key.field_0x1 = (int3)(uVar15 >> 8);
  (this->CachedItemAIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  *(ulonglong *)&(this->CachedItemAIndex).Key.Name.Number = CONCAT26(uStack_aa,0xffff00000000);
  uVar15 = (ulonglong)local_b8;
  local_b8 = uVar16 << 8;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var21.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var22.m128d_f64;
  *(ulonglong *)&(this->CachedItemAIndex).ContainerVersion = CONCAT44(uStack_a4,0xffffffff);
  (this->CachedItemAIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedItemBIndex).Key.Type = (char)uVar15;
  *(int3 *)&(this->CachedItemBIndex).Key.field_0x1 = (int3)(uVar15 >> 8);
  (this->CachedItemBIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  *(ulonglong *)&(this->CachedItemBIndex).Key.Name.Number = CONCAT26(uStack_aa,0xffff00000000);
  *(ulonglong *)&(this->CachedItemBIndex).ContainerVersion = CONCAT44(uStack_a4,0xffffffff);
  (this->CachedItemBIndex).Element = (FRigBaseElement *)0x0;
  uVar15 = (ulonglong)local_b8;
  local_b8 = uVar16 << 8;
  (this->CachedEffectorItemIndex).Key.Type = (char)uVar15;
  *(int3 *)&(this->CachedEffectorItemIndex).Key.field_0x1 = (int3)(uVar15 >> 8);
  (this->CachedEffectorItemIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  *(ulonglong *)&(this->CachedEffectorItemIndex).Key.Name.Number =
       CONCAT26(uStack_aa,0xffff00000000);
  uVar15 = (ulonglong)local_b8;
  *(ulonglong *)&(this->CachedEffectorItemIndex).ContainerVersion = CONCAT44(uStack_a4,0xffffffff);
  (this->CachedEffectorItemIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedPoleVectorSpaceIndex).Key.Type = (char)uVar15;
  *(int3 *)&(this->CachedPoleVectorSpaceIndex).Key.field_0x1 = (int3)(uVar15 >> 8);
  (this->CachedPoleVectorSpaceIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  *(ulonglong *)&(this->CachedPoleVectorSpaceIndex).Key.Name.Number =
       CONCAT26(uStack_aa,0xffff00000000);
  *(ulonglong *)&(this->CachedPoleVectorSpaceIndex).ContainerVersion =
       CONCAT44(uStack_a4,0xffffffff);
  (this->CachedPoleVectorSpaceIndex).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a52f3b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TwoBoneIKSimplePerItem::Execute
          (FRigUnit_TwoBoneIKSimplePerItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->ItemA,&this->ItemB,&this->EffectorItem,&this->Effector,
                &this->PrimaryAxis,&this->SecondaryAxis,this->SecondaryAxisWeight,&this->PoleVector,
                this->PoleVectorKind,&this->PoleVectorSpace,this->bEnableStretch,
                this->StretchStartRatio,this->StretchMaximumRatio,this->Weight,this->ItemALength,
                this->ItemBLength,this->bPropagateToChildren,&this->DebugSettings,
                &this->CachedItemAIndex,&this->CachedItemBIndex,&this->CachedEffectorItemIndex,
                &this->CachedPoleVectorSpaceIndex);
  return;
}

// Execute @ 14a52f510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_TwoBoneIKSimplePerItem::Execute(FRigUnit_TwoBoneIKSimplePerItem *this)

{
  undefined1 auStackY_348 [32];
  undefined1 local_288 [592];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_348;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  if ((FRigVMNameCache *)local_288._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_288._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_288,&this->ItemA,&this->ItemB,&this->EffectorItem
                ,&this->Effector,&this->PrimaryAxis,&this->SecondaryAxis,this->SecondaryAxisWeight,
                &this->PoleVector,this->PoleVectorKind,&this->PoleVectorSpace,this->bEnableStretch,
                this->StretchStartRatio,this->StretchMaximumRatio,this->Weight,this->ItemALength,
                this->ItemBLength,this->bPropagateToChildren,&this->DebugSettings,
                &this->CachedItemAIndex,&this->CachedItemBIndex,&this->CachedEffectorItemIndex,
                &this->CachedPoleVectorSpaceIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  return;
}

// GetExecuteContextStruct @ 14a531320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_TwoBoneIKSimplePerItem::GetExecuteContextStruct(FRigUnit_TwoBoneIKSimplePerItem *this)

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

// RigVMExecute @ 14a55b100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwoBoneIKSimplePerItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  EControlRigVectorKind EVar7;
  bool bVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  FRigElementKey *pFVar12;
  FRigElementKey *pFVar13;
  FRigElementKey *pFVar14;
  FRigVMMemoryHandle *pFVar15;
  TTransform<double> *pTVar16;
  TVector<double> *pTVar17;
  TVector<double> *pTVar18;
  float *pfVar19;
  TVector<double> *pTVar20;
  EControlRigVectorKind *pEVar21;
  FRigElementKey *pFVar22;
  uchar *puVar23;
  FRigUnit_TwoBoneIKSimple_DebugSettings *pFVar24;
  FRigVMSlice *pFVar25;
  FCachedRigElement *pFVar26;
  FCachedRigElement *pFVar27;
  FCachedRigElement *pFVar28;
  FCachedRigElement *pFVar29;
  FControlRigExecuteContext *pFVar30;
  
  iVar9 = param_2->ArrayNum;
  if (iVar9 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar15 = param_2->DataPtr;
  if (pFVar15->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar12 = (FRigElementKey *)pFVar15->Ptr;
  }
  else {
    pFVar12 = (FRigElementKey *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar15->PropertyPath,pFVar15->Ptr,pFVar15->Property);
  }
  if (iVar9 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar15 = param_2->DataPtr;
  if (pFVar15[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar13 = (FRigElementKey *)pFVar15[1].Ptr;
  }
  else {
    pFVar13 = (FRigElementKey *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar15[1].PropertyPath,pFVar15[1].Ptr,pFVar15[1].Property);
  }
  if (iVar9 < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar15 = param_2->DataPtr;
  if (pFVar15[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar14 = (FRigElementKey *)pFVar15[2].Ptr;
  }
  else {
    pFVar14 = (FRigElementKey *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar15[2].PropertyPath,pFVar15[2].Ptr,pFVar15[2].Property);
  }
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar16 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar17 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar18 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar19 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  fVar1 = *pfVar19;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar20 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pEVar21 = FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  EVar7 = *pEVar21;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar22 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  puVar23 = FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  bVar11 = (bool)*puVar23;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pfVar19 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  fVar2 = *pfVar19;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  pfVar19 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  fVar3 = *pfVar19;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pfVar19 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  fVar4 = *pfVar19;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xe);
  pfVar19 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  fVar5 = *pfVar19;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xf);
  pfVar19 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  fVar6 = *pfVar19;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x10);
  puVar23 = FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  bVar8 = (bool)*puVar23;
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x11);
  pFVar24 = (FRigUnit_TwoBoneIKSimple_DebugSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x12);
  pFVar25 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar26 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar15,false,pFVar25->Offset + pFVar25->Index);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x13);
  pFVar25 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar27 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar15,false,pFVar25->Offset + pFVar25->Index);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x14);
  pFVar25 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar28 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar15,false,pFVar25->Offset + pFVar25->Index);
  pFVar15 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x15);
  pFVar25 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar29 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar15,false,pFVar25->Offset + pFVar25->Index);
  pFVar30 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar30,pFVar12,pFVar13,pFVar14,pTVar16,pTVar17,pTVar18,fVar1,pTVar20,EVar7,pFVar22,
                bVar11,fVar2,fVar3,fVar4,fVar5,fVar6,bVar8,pFVar24,pFVar26,pFVar27,pFVar28,pFVar29);
  return;
}

// StaticExecute @ 14a5a13c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwoBoneIKSimplePerItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FRigElementKey *param_3,
          FRigElementKey *param_4,TTransform<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,float param_8,TVector<double> *param_9,
          EControlRigVectorKind param_10,FRigElementKey *param_11,bool param_12,float param_13,
          float param_14,float param_15,float param_16,float param_17,bool param_18,
          FRigUnit_TwoBoneIKSimple_DebugSettings *param_19,FCachedRigElement *param_20,
          FCachedRigElement *param_21,FCachedRigElement *param_22,FCachedRigElement *param_23)

{
  TTransform<double> *pTVar1;
  URigHierarchy *this;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  TVector<double> *pTVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  TQuat<double> *pTVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
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
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar48 [16];
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
  double dVar73;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar47;
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
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
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
  double dVar90;
  double dVar94;
  undefined4 uVar95;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar96;
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  uint uVar104;
  undefined1 auVar103 [16];
  undefined4 uVar105;
  double dVar106;
  undefined1 auVar107 [16];
  double dVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined8 uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  double dVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar125;
  undefined1 auVar124 [16];
  undefined8 uVar126;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  double dVar137;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auStackY_408 [32];
  TVector<double>_u_0 local_3a8;
  double dStack_390;
  TVector<double>_u_0 local_388;
  FLinearColor_u_0 local_368;
  double local_358;
  double dStack_350;
  FRigUnit_TwoBoneIKSimple_DebugSettings *local_348;
  TVector<double>_u_0 local_340;
  FRigElementKey *local_328;
  FRigElementKey *local_320;
  FRigElementKey *local_318;
  TVector<double> *local_310;
  FCachedRigElement *local_308;
  FLinearColor_u_0 local_2f8 [2];
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_408;
  this = param_1->Hierarchy;
  local_348 = param_19;
  local_368._0_8_ = param_6;
  local_2f8[0]._0_8_ = param_7;
  local_310 = param_9;
  local_318 = param_11;
  local_308 = param_23;
  if (((this != (URigHierarchy *)0x0) &&
      (local_328 = param_3, local_320 = param_4,
      bVar14 = FCachedRigElement::UpdateCache(param_20,param_2,this), bVar14)) &&
     (bVar14 = FCachedRigElement::UpdateCache(param_21,local_328,this), bVar14)) {
    FCachedRigElement::UpdateCache(param_22,local_320,this);
    FCachedRigElement::UpdateCache(param_23,local_318,this);
    fVar12 = __real_322bcc77;
    if (__real_322bcc77 < param_15) {
      local_388._s_0.X = (local_310->field0_0x0)._s_0.X;
      local_388._s_0.Y = (local_310->field0_0x0)._s_0.Y;
      local_388._s_0.Z = (local_310->field0_0x0)._s_0.Z;
      bVar14 = FCachedRigElement::IsValid(param_23);
      uVar16 = 0xffffffff;
      if (bVar14) {
        uVar15 = 0xffffffff;
        if (local_308->Index != 0xffff) {
          uVar15 = (uint)local_308->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_2d8,uVar15,false);
        auVar48._8_8_ = local_2d8.Rotation.XY.m128d_f64[1];
        auVar48._0_8_ = local_2d8.Rotation.XY.m128d_f64[0];
        auVar84._8_8_ = 0;
        auVar84._0_8_ = local_388._s_0.Z;
        if (param_10 == Direction) {
          dVar22 = (double)CONCAT44(local_2d8.Rotation.ZW.m128d_f64[0]._4_4_,
                                    local_2d8.Rotation.ZW.m128d_f64[0]._0_4_);
          auVar9._8_4_ = local_2d8.Rotation.ZW.m128d_f64[1]._0_4_;
          auVar9._0_8_ = dVar22;
          auVar9._12_4_ = local_2d8.Rotation.ZW.m128d_f64[1]._4_4_;
          auVar8._8_8_ = local_388._s_0.Y;
          auVar8._0_8_ = local_388._s_0.X;
          dVar97 = auVar9._8_8_;
          auVar98 = blendpd(auVar48,auVar9,2);
          auVar122._0_8_ =
               local_388._s_0.Y * local_2d8.Rotation.XY.m128d_f64[0] -
               local_388._s_0.X * local_2d8.Rotation.XY.m128d_f64[1];
          auVar122._8_8_ =
               local_388._s_0.Z * local_2d8.Rotation.XY.m128d_f64[1] - local_388._s_0.Y * dVar22;
          auVar48 = blendpd(auVar8,auVar84,2);
          auVar107._8_4_ = SUB84(auVar122._8_8_,0);
          auVar107._0_8_ = auVar122._0_8_;
          auVar107._12_4_ = (int)((ulonglong)auVar122._8_8_ >> 0x20);
          auVar49._0_8_ = auVar48._0_8_ * dVar22 - local_388._s_0.Z * auVar98._0_8_;
          auVar49._8_8_ = auVar48._8_8_ * dVar97 - auVar98._8_8_ * 0.0;
          auVar48 = blendpd(auVar122,auVar49,2);
          dVar106 = auVar107._8_8_ + auVar107._8_8_;
          dVar113 = auVar49._0_8_ + auVar49._0_8_;
          auVar123._0_8_ = auVar48._0_8_ + auVar48._0_8_;
          auVar123._8_8_ = auVar48._8_8_ + auVar48._8_8_;
          uVar95 = SUB84(dVar113,0);
          auVar74._8_4_ = uVar95;
          auVar74._0_8_ = dVar106;
          uVar105 = (undefined4)((ulonglong)dVar113 >> 0x20);
          auVar74._12_4_ = uVar105;
          auVar23._8_4_ = uVar95;
          auVar23._0_8_ = dVar106;
          auVar23._12_4_ = uVar105;
          auVar50._8_4_ = uVar95;
          auVar50._0_8_ = dVar106;
          auVar50._12_4_ = uVar105;
          auVar48 = blendpd(auVar50,auVar123,2);
          auVar75._0_8_ =
               auVar74._8_8_ * local_2d8.Rotation.XY.m128d_f64[0] -
               dVar106 * local_2d8.Rotation.XY.m128d_f64[1];
          auVar75._8_8_ =
               auVar123._0_8_ * local_2d8.Rotation.XY.m128d_f64[1] - auVar23._8_8_ * dVar22;
          auVar24._8_4_ = SUB84(auVar123._8_8_,0);
          auVar24._0_8_ = auVar123._0_8_;
          auVar24._12_4_ = (int)((ulonglong)auVar123._8_8_ >> 0x20);
          auVar51._0_8_ = auVar48._0_8_ * dVar22 - auVar123._0_8_ * auVar98._0_8_;
          auVar51._8_8_ = auVar48._8_8_ * dVar97 - auVar24._8_8_ * auVar98._8_8_;
          auVar25._8_4_ = SUB84(auVar75._8_8_,0);
          auVar25._0_8_ = auVar75._0_8_;
          auVar25._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
          auVar48 = blendpd(auVar75,auVar51,2);
          local_388._s_0.X = dVar106 * dVar97 + local_388._s_0.X + auVar25._8_8_;
          local_388._s_0.Y = dVar113 * dVar97 + local_388._s_0.Y + auVar51._0_8_;
          local_388._s_0.Z = auVar123._0_8_ * dVar97 + local_388._s_0.Z + auVar48._0_8_;
        }
        else {
          dVar106 = (double)CONCAT44(local_2d8.Rotation.ZW.m128d_f64[0]._4_4_,
                                     local_2d8.Rotation.ZW.m128d_f64[0]._0_4_);
          auVar10._8_4_ = local_2d8.Rotation.ZW.m128d_f64[1]._0_4_;
          auVar10._0_8_ = dVar106;
          auVar10._12_4_ = local_2d8.Rotation.ZW.m128d_f64[1]._4_4_;
          auVar98._8_8_ = local_388._s_0.Y;
          auVar98._0_8_ = local_388._s_0.X;
          auVar99 = blendpd(auVar48,auVar10,2);
          dVar22 = auVar10._8_8_;
          auVar127._0_8_ =
               local_388._s_0.Y * local_2d8.Rotation.XY.m128d_f64[0] -
               local_388._s_0.X * local_2d8.Rotation.XY.m128d_f64[1];
          auVar127._8_8_ =
               local_388._s_0.Z * local_2d8.Rotation.XY.m128d_f64[1] - local_388._s_0.Y * dVar106;
          auVar48 = blendpd(auVar98,auVar84,2);
          auVar115._8_4_ = SUB84(auVar127._8_8_,0);
          auVar115._0_8_ = auVar127._0_8_;
          auVar115._12_4_ = (int)((ulonglong)auVar127._8_8_ >> 0x20);
          auVar52._0_8_ = auVar48._0_8_ * dVar106 - local_388._s_0.Z * auVar99._0_8_;
          auVar52._8_8_ = auVar48._8_8_ * dVar22 - auVar99._8_8_ * 0.0;
          auVar48 = blendpd(auVar127,auVar52,2);
          dVar113 = auVar115._8_8_ + auVar115._8_8_;
          dVar97 = auVar52._0_8_ + auVar52._0_8_;
          auVar128._0_8_ = auVar48._0_8_ + auVar48._0_8_;
          auVar128._8_8_ = auVar48._8_8_ + auVar48._8_8_;
          uVar95 = SUB84(dVar97,0);
          auVar76._8_4_ = uVar95;
          auVar76._0_8_ = dVar113;
          uVar105 = (undefined4)((ulonglong)dVar97 >> 0x20);
          auVar76._12_4_ = uVar105;
          auVar26._8_4_ = uVar95;
          auVar26._0_8_ = dVar113;
          auVar26._12_4_ = uVar105;
          auVar53._8_4_ = uVar95;
          auVar53._0_8_ = dVar113;
          auVar53._12_4_ = uVar105;
          auVar48 = blendpd(auVar53,auVar128,2);
          auVar77._0_8_ =
               auVar76._8_8_ * local_2d8.Rotation.XY.m128d_f64[0] -
               dVar113 * local_2d8.Rotation.XY.m128d_f64[1];
          auVar77._8_8_ =
               auVar128._0_8_ * local_2d8.Rotation.XY.m128d_f64[1] - auVar26._8_8_ * dVar106;
          auVar27._8_4_ = SUB84(auVar128._8_8_,0);
          auVar27._0_8_ = auVar128._0_8_;
          auVar27._12_4_ = (int)((ulonglong)auVar128._8_8_ >> 0x20);
          auVar54._0_8_ = auVar48._0_8_ * dVar106 - auVar128._0_8_ * auVar99._0_8_;
          auVar54._8_8_ = auVar48._8_8_ * dVar22 - auVar27._8_8_ * auVar99._8_8_;
          auVar99._8_4_ = SUB84(auVar77._8_8_,0);
          auVar99._0_8_ = auVar77._0_8_;
          auVar99._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
          auVar48 = blendpd(auVar77,auVar54,2);
          local_388._s_0.X =
               dVar113 * dVar22 + local_388._s_0.X + auVar99._8_8_ +
               local_2d8.Translation.XY.m128d_f64[0];
          local_388._s_0.Y =
               dVar97 * dVar22 + local_388._s_0.Y + auVar54._0_8_ +
               local_2d8.Translation.XY.m128d_f64[1];
          local_388._s_0.Z =
               auVar128._0_8_ * dVar22 + local_388._s_0.Z + auVar48._0_8_ +
               local_2d8.Translation.ZW.m128d_f64[0];
        }
      }
      uVar15 = 0xffffffff;
      if (param_20->Index != 0xffff) {
        uVar15 = (uint)param_20->Index;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_218,uVar15,false);
      uVar15 = 0xffffffff;
      local_278.Rotation.XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
      local_278.Rotation.XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
      local_278.Rotation.ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
      local_278.Rotation.ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
      local_278.Translation.XY.m128d_f64[0] = local_218.Translation.XY.m128d_f64[0];
      local_278.Translation.XY.m128d_f64[1] = local_218.Translation.XY.m128d_f64[1];
      local_278.Scale3D.XY.m128d_f64[0] =
           (double)CONCAT44(local_218.Scale3D.XY.m128d_f64[0]._4_4_,
                            local_218.Scale3D.XY.m128d_f64[0]._0_4_);
      local_278.Scale3D.XY.m128d_f64[1] =
           (double)CONCAT44(local_218.Scale3D.XY.m128d_f64[1]._4_4_,
                            local_218.Scale3D.XY.m128d_f64[1]._0_4_);
      local_278.Translation.ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
      local_278.Translation.ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
      local_278.Scale3D.ZW.m128d_f64[0] = local_218.Scale3D.ZW.m128d_f64[0];
      local_278.Scale3D.ZW.m128d_f64[1] = local_218.Scale3D.ZW.m128d_f64[1];
      if (param_21->Index != 0xffff) {
        uVar15 = (uint)param_21->Index;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_2d8,uVar15,false);
      pTVar13 = __real_3e45798ee0000000;
      local_278.Translation.XY.m128d_f64[0] = local_2d8.Translation.XY.m128d_f64[0];
      local_278.Translation.XY.m128d_f64[1] = local_2d8.Translation.XY.m128d_f64[1];
      local_1b8.Rotation.XY.m128d_f64 = *&(param_5->Rotation).XY.m128d_f64;
      local_278.Translation.ZW.m128d_f64[0] = local_2d8.Translation.ZW.m128d_f64[0];
      local_278.Translation.ZW.m128d_f64[1] = 0.0;
      local_1b8.Rotation.ZW.m128d_f64 = *&(param_5->Rotation).ZW.m128d_f64;
      local_1b8.Translation.XY.m128d_f64[0] = (param_5->Translation).XY.m128d_f64[0];
      local_1b8.Translation.XY.m128d_f64[1] = (param_5->Translation).XY.m128d_f64[1];
      local_1b8.Translation.ZW.m128d_f64[0] = (param_5->Translation).ZW.m128d_f64[0];
      local_1b8.Translation.ZW.m128d_f64[1] = (param_5->Translation).ZW.m128d_f64[1];
      local_1b8.Scale3D.XY.m128d_f64[0] = (param_5->Scale3D).XY.m128d_f64[0];
      local_1b8.Scale3D.XY.m128d_f64[1] = (param_5->Scale3D).XY.m128d_f64[1];
      local_1b8.Scale3D.ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0];
      dVar22 = (param_5->Scale3D).ZW.m128d_f64[1];
      local_1b8.Scale3D.ZW.m128d_f64[1] = dVar22;
      if (param_16 < fVar12) {
        uVar15 = 0xffffffff;
        if (param_20->Index != 0xffff) {
          uVar15 = (uint)param_20->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_2d8,uVar15,true);
        dVar113 = local_2d8.Translation.XY.m128d_f64[1];
        dVar106 = local_2d8.Translation.XY.m128d_f64[0];
        auVar4._4_8_ = dVar22;
        auVar4._0_4_ = (int)((ulonglong)local_2d8.Scale3D.XY.m128d_f64[0] >> 0x20);
        auVar55._0_8_ = auVar4._0_8_ << 0x20;
        auVar55._8_4_ = SUB84(local_2d8.Scale3D.XY.m128d_f64[1],0);
        auVar55._12_4_ = (int)((ulonglong)local_2d8.Scale3D.XY.m128d_f64[1] >> 0x20);
        uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar126 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        uVar114 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if ((double)pTVar13 <
            auVar55._8_8_ * auVar55._8_8_ +
            local_2d8.Scale3D.XY.m128d_f64[0] * local_2d8.Scale3D.XY.m128d_f64[0] +
            local_2d8.Scale3D.ZW.m128d_f64[0] * local_2d8.Scale3D.ZW.m128d_f64[0]) {
          uVar126 = (double)CONCAT44(local_218.Scale3D.XY.m128d_f64[0]._4_4_,
                                     local_218.Scale3D.XY.m128d_f64[0]._0_4_) /
                    local_2d8.Scale3D.XY.m128d_f64[0];
          uVar3 = (double)CONCAT44(local_218.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_218.Scale3D.XY.m128d_f64[1]._0_4_) /
                  local_2d8.Scale3D.XY.m128d_f64[1];
          uVar114 = local_218.Scale3D.ZW.m128d_f64[0] / local_2d8.Scale3D.ZW.m128d_f64[0];
        }
        uVar15 = 0xffffffff;
        local_3a8._s_0.Z = local_2d8.Translation.ZW.m128d_f64[0];
        if (param_21->Index != 0xffff) {
          uVar15 = (uint)param_21->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_158,uVar15,true);
        dVar22 = local_3a8._s_0.Z - local_158.Translation.ZW.m128d_f64[0];
        local_3a8._s_0.Z = local_158.Translation.ZW.m128d_f64[0];
        dVar106 = (dVar106 - local_158.Translation.XY.m128d_f64[0]) * (double)uVar126;
        dVar113 = (dVar113 - local_158.Translation.XY.m128d_f64[1]) * (double)uVar3;
        dVar22 = dVar22 * (double)uVar114;
        param_16 = (float)SQRT(dVar113 * dVar113 + dVar106 * dVar106 + dVar22 * dVar22);
        dVar22 = local_158.Translation.ZW.m128d_f64[1];
      }
      if ((param_17 < fVar12) && (param_22->Index != 0xffff)) {
        uVar15 = 0xffffffff;
        if (param_21->Index != 0xffff) {
          uVar15 = (uint)param_21->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_2d8,uVar15,true);
        dVar113 = local_2d8.Translation.XY.m128d_f64[1];
        dVar106 = local_2d8.Translation.XY.m128d_f64[0];
        auVar5._4_8_ = dVar22;
        auVar5._0_4_ = (int)((ulonglong)local_2d8.Scale3D.XY.m128d_f64[0] >> 0x20);
        auVar56._0_8_ = auVar5._0_8_ << 0x20;
        auVar56._8_4_ = SUB84(local_2d8.Scale3D.XY.m128d_f64[1],0);
        auVar56._12_4_ = (int)((ulonglong)local_2d8.Scale3D.XY.m128d_f64[1] >> 0x20);
        uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar126 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        uVar114 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if ((double)pTVar13 <
            auVar56._8_8_ * auVar56._8_8_ +
            local_2d8.Scale3D.XY.m128d_f64[0] * local_2d8.Scale3D.XY.m128d_f64[0] +
            local_2d8.Scale3D.ZW.m128d_f64[0] * local_2d8.Scale3D.ZW.m128d_f64[0]) {
          uVar126 = local_278.Scale3D.XY.m128d_f64[0] / local_2d8.Scale3D.XY.m128d_f64[0];
          uVar3 = local_278.Scale3D.XY.m128d_f64[1] / local_2d8.Scale3D.XY.m128d_f64[1];
          uVar114 = local_278.Scale3D.ZW.m128d_f64[0] / local_2d8.Scale3D.ZW.m128d_f64[0];
        }
        uVar15 = 0xffffffff;
        local_3a8._s_0.Z = local_2d8.Translation.ZW.m128d_f64[0];
        if (param_22->Index != 0xffff) {
          uVar15 = (uint)param_22->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_158,uVar15,true);
        dVar22 = local_3a8._s_0.Z - local_158.Translation.ZW.m128d_f64[0];
        local_3a8._s_0.Z = local_158.Translation.ZW.m128d_f64[0];
        dVar106 = (dVar106 - local_158.Translation.XY.m128d_f64[0]) * (double)uVar126;
        dVar113 = (dVar113 - local_158.Translation.XY.m128d_f64[1]) * (double)uVar3;
        dVar22 = dVar22 * (double)uVar114;
        param_17 = (float)SQRT(dVar113 * dVar113 + dVar106 * dVar106 + dVar22 * dVar22);
      }
      if ((fVar12 <= param_16) && (fVar12 <= param_17)) {
        FControlRigMathLibrary::SolveBasicTwoBoneIK
                  (&local_218,&local_278,&local_1b8,(TVector<double> *)&local_388._s_0,
                   (TVector<double> *)local_368._0_8_,(TVector<double> *)local_2f8[0]._0_8_,param_8,
                   param_16,param_17,param_12,param_13,param_14);
        fVar12 = __real_bf800000;
        if ((*(FRigVMDrawInterface **)&param_1->field_0x58 != (FRigVMDrawInterface *)0x0) &&
           (local_348->bEnabled != false)) {
          pTVar1 = &local_348->WorldOffset;
          local_368._0_8_ = ___xmm_3f8000003f8000003e4ccccd00000000;
          local_368._8_8_ = _UNK_15219d428;
          local_2f8[0]._0_8_ = ___xmm_3f8000003f8000003f80000000000000;
          local_2f8[0]._8_8_ = _UNK_15090c6e8;
          local_340._s_0.X = local_278.Translation.XY.m128d_f64[0];
          local_340._s_0.Y = local_278.Translation.XY.m128d_f64[1];
          local_340._s_0.Z = local_278.Translation.ZW.m128d_f64[0];
          local_3a8._s_0.X = local_218.Translation.XY.m128d_f64[0];
          local_3a8._s_0.Y = local_218.Translation.XY.m128d_f64[1];
          local_3a8._s_0.Z = local_218.Translation.ZW.m128d_f64[0];
          FRigVMDrawInterface::DrawLine
                    (*(FRigVMDrawInterface **)&param_1->field_0x58,pTVar1,
                     (TVector<double> *)&local_3a8._s_0,(TVector<double> *)&local_340._s_0,
                     (FLinearColor *)&local_368._s_0,0.0,SDPG_Foreground,__real_bf800000);
          local_3a8._s_0.X = local_1b8.Translation.XY.m128d_f64[0];
          local_3a8._s_0.Y = local_1b8.Translation.XY.m128d_f64[1];
          local_3a8._s_0.Z = local_1b8.Translation.ZW.m128d_f64[0];
          local_340._s_0.X = local_278.Translation.XY.m128d_f64[0];
          local_340._s_0.Y = local_278.Translation.XY.m128d_f64[1];
          local_340._s_0.Z = local_278.Translation.ZW.m128d_f64[0];
          FRigVMDrawInterface::DrawLine
                    (*(FRigVMDrawInterface **)&param_1->field_0x58,pTVar1,
                     (TVector<double> *)&local_340._s_0,(TVector<double> *)&local_3a8._s_0,
                     (FLinearColor *)&local_368._s_0,0.0,SDPG_Foreground,fVar12);
          local_3a8._s_0.X = local_278.Translation.XY.m128d_f64[0];
          local_3a8._s_0.Y = local_278.Translation.XY.m128d_f64[1];
          local_3a8._s_0.Z = local_278.Translation.ZW.m128d_f64[0];
          FRigVMDrawInterface::DrawLine
                    (*(FRigVMDrawInterface **)&param_1->field_0x58,pTVar1,
                     (TVector<double> *)&local_3a8._s_0,(TVector<double> *)&local_388._s_0,
                     (FLinearColor *)&local_2f8[0]._s_0,0.0,SDPG_Foreground,fVar12);
          local_2d8.Rotation.ZW.m128d_f64[0]._0_4_ = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
          local_2d8.Rotation.ZW.m128d_f64[0]._4_4_ =
               (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20);
          local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(UE::Math::TQuat<double>::Identity.W,0);
          local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20);
          local_2d8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
          local_2d8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
          local_2d8.Scale3D.XY.m128d_f64[0] = (double)local_348->Scale * __real_3fb99999a0000000;
          local_2d8.Translation.XY.m128d_f64[0] = local_388._s_0.X;
          local_2d8.Translation.XY.m128d_f64[1] = local_388._s_0.Y;
          local_2d8.Translation.ZW.m128d_f64[0] = local_388._s_0.Z;
          local_2d8.Translation.ZW.m128d_f64[1] = 0.0;
          local_2d8.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_2d8.Scale3D.XY.m128d_f64[1] = local_2d8.Scale3D.XY.m128d_f64[0];
          local_2d8.Scale3D.ZW.m128d_f64[0] = local_2d8.Scale3D.XY.m128d_f64[0];
          FRigVMDrawInterface::DrawBox
                    (*(FRigVMDrawInterface **)&param_1->field_0x58,pTVar1,&local_2d8,
                     (FLinearColor *)&local_2f8[0]._s_0,0.0,SDPG_Foreground,fVar12);
        }
        if (__real_3f800000 <= param_15) {
        }
        else {
          dVar90 = local_218.Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar94 = local_218.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar100._0_8_ =
               local_218.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          auVar100._8_8_ =
               local_218.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar78._8_4_ = SUB84(dVar94,0);
          auVar78._0_8_ = dVar90;
          uVar95 = (undefined4)((ulonglong)dVar94 >> 0x20);
          auVar78._12_4_ = uVar95;
          dVar121 = local_278.Translation.XY.m128d_f64[0] - local_218.Translation.XY.m128d_f64[0];
          dVar125 = local_278.Translation.XY.m128d_f64[1] - local_218.Translation.XY.m128d_f64[1];
          auVar83._8_4_ = SUB84(dVar94,0);
          auVar83._0_8_ = dVar90;
          auVar83._12_4_ = uVar95;
          dVar106 = local_278.Translation.ZW.m128d_f64[0] - local_218.Translation.ZW.m128d_f64[0];
          auVar130._8_4_ = SUB84(dVar125,0);
          auVar130._0_8_ = dVar121;
          uVar95 = (undefined4)((ulonglong)dVar125 >> 0x20);
          auVar130._12_4_ = uVar95;
          auVar134._8_8_ = 0;
          auVar134._0_8_ = dVar106;
          dVar97 = auVar78._8_8_;
          auVar28._8_4_ = SUB84(auVar100._0_8_,0);
          auVar28._0_8_ = dVar97;
          auVar28._12_4_ = (int)((ulonglong)auVar100._0_8_ >> 0x20);
          auVar84 = blendpd(auVar83,auVar100,2);
          auVar131._0_8_ = auVar130._8_8_ * dVar90 - dVar97 * dVar121;
          auVar131._8_8_ = dVar106 * dVar94 - auVar28._8_8_ * dVar125;
          auVar129._8_4_ = SUB84(auVar100._8_8_,0);
          auVar129._0_8_ = auVar100._0_8_;
          auVar129._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
          auVar57._8_4_ = SUB84(dVar125,0);
          auVar57._0_8_ = dVar121;
          auVar57._12_4_ = uVar95;
          auVar48 = blendpd(auVar57,auVar134,2);
          auVar58._0_8_ = auVar48._0_8_ * auVar100._0_8_ - auVar84._0_8_ * dVar106;
          auVar58._8_8_ = auVar48._8_8_ * auVar100._8_8_ - auVar84._8_8_ * 0.0;
          auVar48 = blendpd(auVar131,auVar58,2);
          dVar22 = auVar131._8_8_ + auVar131._8_8_;
          dVar113 = auVar58._0_8_ + auVar58._0_8_;
          uVar95 = SUB84(dVar113,0);
          uVar105 = (undefined4)((ulonglong)dVar113 >> 0x20);
          auVar132._0_8_ = auVar48._0_8_ + auVar48._0_8_;
          auVar132._8_8_ = auVar48._8_8_ + auVar48._8_8_;
          auVar116._8_4_ = uVar95;
          auVar116._0_8_ = dVar22;
          auVar116._12_4_ = uVar105;
          auVar29._8_4_ = uVar95;
          auVar29._0_8_ = dVar22;
          auVar29._12_4_ = uVar105;
          auVar108._8_4_ = uVar95;
          auVar108._0_8_ = dVar22;
          auVar108._12_4_ = uVar105;
          auVar48 = blendpd(auVar108,auVar132,2);
          auVar117._0_8_ = auVar116._8_8_ * dVar90 - dVar22 * dVar97;
          auVar117._8_8_ = auVar132._0_8_ * dVar94 - auVar29._8_8_ * auVar100._0_8_;
          auVar30._8_4_ = SUB84(auVar132._8_8_,0);
          auVar30._0_8_ = auVar132._0_8_;
          auVar30._12_4_ = (int)((ulonglong)auVar132._8_8_ >> 0x20);
          auVar6._4_8_ = auVar100._8_8_;
          auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar101._0_8_ = auVar6._0_8_ << 0x20;
          auVar101._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar101._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar109._0_8_ = auVar48._0_8_ * auVar100._0_8_ - auVar132._0_8_ * auVar84._0_8_;
          auVar109._8_8_ = auVar48._8_8_ * auVar100._8_8_ - auVar30._8_8_ * auVar84._8_8_;
          auVar102._8_8_ = auVar101._8_8_;
          auVar102._0_8_ = local_218.Scale3D.ZW.m128d_f64[0];
          auVar91._0_8_ =
               (double)CONCAT44((uint)((ulonglong)local_218.Scale3D.ZW.m128d_f64[0] >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_218.Scale3D.ZW.m128d_f64[0],0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar91._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_ & _UNK_15061cc88;
          auVar91._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
          auVar138._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                local_218.Scale3D.XY.m128d_f64[0]._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                local_218.Scale3D.XY.m128d_f64[0]._0_4_);
          auVar138._8_4_ = _UNK_15061cc88 & local_218.Scale3D.XY.m128d_f64[1]._0_4_;
          auVar138._12_4_ = _UNK_15061cc8c & local_218.Scale3D.XY.m128d_f64[1]._4_4_;
          lVar18 = -(ulonglong)
                    (auVar138._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar20 = -(ulonglong)
                    (auVar138._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar11._4_4_ = local_218.Scale3D.XY.m128d_f64[0]._4_4_;
          auVar11._0_4_ = local_218.Scale3D.XY.m128d_f64[0]._0_4_;
          auVar11._8_4_ = local_218.Scale3D.XY.m128d_f64[1]._0_4_;
          auVar11._12_4_ = local_218.Scale3D.XY.m128d_f64[1]._4_4_;
          auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar11);
          auVar139._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar48._4_4_,
                                ~(uint)lVar18 & auVar48._0_4_);
          auVar139._8_4_ = ~(uint)lVar20 & auVar48._8_4_;
          auVar139._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar48._12_4_;
          auVar31._8_4_ = SUB84(auVar117._8_8_,0);
          auVar31._0_8_ = auVar117._0_8_;
          auVar31._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
          auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar102);
          lVar18 = -(ulonglong)
                    (auVar91._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          lVar20 = -(ulonglong)
                    (auVar91._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3]);
          auVar84 = blendpd(auVar117,auVar109,2);
          auVar92._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar48._4_4_,
                                ~(uint)lVar18 & auVar48._0_4_);
          auVar92._8_4_ = ~(uint)lVar20 & auVar48._8_4_;
          auVar92._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar48._12_4_;
          dVar106 = (auVar84._0_8_ + auVar132._0_8_ * auVar129._8_8_ + dVar106) * auVar92._0_8_;
          local_3a8._s_0.Z = local_1b8.Translation.ZW.m128d_f64[0];
          local_3a8._s_0.X = local_1b8.Translation.XY.m128d_f64[0];
          local_3a8._s_0.Y = local_1b8.Translation.XY.m128d_f64[1];
          UE::Math::TTransform<double>::InverseTransformPosition
                    (&local_278,(TVector<double> *)&local_340._s_0,
                     (TVector<double> *)&local_3a8._s_0);
          uVar15 = 0xffffffff;
          local_3a8._s_0.X = local_218.Rotation.XY.m128d_f64[0];
          local_3a8._s_0.Y = local_218.Rotation.XY.m128d_f64[1];
          local_3a8._s_0.Z = local_218.Rotation.ZW.m128d_f64[0];
          dStack_390 = local_218.Rotation.ZW.m128d_f64[1];
          if (param_20->Index != 0xffff) {
            uVar15 = (uint)param_20->Index;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_158,uVar15,false);
          dVar97 = (double)param_15;
          local_368._0_8_ = local_158.Rotation.XY.m128d_f64[0];
          local_368._8_8_ = local_158.Rotation.XY.m128d_f64[1];
          local_358 = local_158.Rotation.ZW.m128d_f64[0];
          dStack_350 = local_158.Rotation.ZW.m128d_f64[1];
          pTVar17 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              ((TQuat<double> *)&local_2f8[0]._s_0,(TQuat<double> *)&local_368._s_0,
                               (TQuat<double> *)&local_3a8._s_0,dVar97);
          uVar15 = 0xffffffff;
          dVar90 = pTVar17->X;
          dVar94 = pTVar17->Y;
          dVar137 = pTVar17->Z;
          dVar47 = pTVar17->W;
          local_368._0_8_ = pTVar13;
          dVar46 = dVar137 * dVar137 + dVar90 * dVar90;
          dVar73 = dVar47 * dVar47 + dVar94 * dVar94;
          auVar32._8_4_ = SUB84(dVar73,0);
          auVar32._0_8_ = dVar46;
          auVar32._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          auVar33._0_8_ = auVar32._8_8_ + dVar46;
          auVar33._8_8_ = dVar46 + dVar73;
          auVar84 = sqrtpd(auVar92,auVar33);
          uVar19 = -(ulonglong)((double)pTVar13 <= auVar33._0_8_);
          uVar21 = -(ulonglong)((double)pTVar13 <= auVar33._8_8_);
          uVar96 = (uint)(uVar19 >> 0x20);
          uVar104 = (uint)(uVar21 >> 0x20);
          auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar84);
          auVar85._0_8_ = uVar19 & (ulonglong)(auVar48._0_8_ * dVar90);
          uVar7 = uVar21 & (ulonglong)(auVar48._8_8_ * dVar94);
          auVar85._8_4_ = (undefined4)uVar7;
          auVar85._12_4_ = (undefined4)(uVar7 >> 0x20);
          auVar59._0_4_ =
               ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar59._4_4_ =
               ~uVar96 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar59._8_4_ =
               ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar59._12_4_ =
               ~uVar104 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_218.Rotation.XY.m128d_f64 = (double  [2])(auVar85 | auVar59);
          auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar84);
          auVar86._0_4_ =
               ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar86._4_4_ =
               ~uVar96 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar86._8_4_ =
               ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar86._12_4_ =
               ~uVar104 &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_3a8._s_0.X = local_278.Rotation.XY.m128d_f64[0];
          local_3a8._s_0.Y = local_278.Rotation.XY.m128d_f64[1];
          auVar60._0_8_ = (ulonglong)(auVar48._0_8_ * dVar137) & uVar19;
          uVar21 = (ulonglong)(auVar48._8_8_ * dVar47) & uVar21;
          auVar60._8_4_ = (undefined4)uVar21;
          auVar60._12_4_ = (undefined4)(uVar21 >> 0x20);
          local_218.Rotation.ZW.m128d_f64 = (double  [2])(auVar86 | auVar60);
          local_3a8._s_0.Z = local_278.Rotation.ZW.m128d_f64[0];
          dStack_390 = local_278.Rotation.ZW.m128d_f64[1];
          if (param_21->Index != 0xffff) {
            uVar15 = (uint)param_21->Index;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_158,uVar15,false);
          auVar87._8_8_ = 0;
          auVar87._0_8_ = dVar97;
          local_368._0_8_ = local_158.Rotation.XY.m128d_f64[0];
          local_368._8_8_ = local_158.Rotation.XY.m128d_f64[1];
          local_358 = local_158.Rotation.ZW.m128d_f64[0];
          dStack_350 = local_158.Rotation.ZW.m128d_f64[1];
          pTVar17 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              ((TQuat<double> *)&local_2f8[0]._s_0,(TQuat<double> *)&local_368._s_0,
                               (TQuat<double> *)&local_3a8._s_0,dVar97);
          dVar90 = pTVar17->X;
          dVar94 = pTVar17->Y;
          dVar137 = pTVar17->Z;
          dVar47 = pTVar17->W;
          local_368._0_8_ = pTVar13;
          dVar46 = dVar137 * dVar137 + dVar90 * dVar90;
          dVar73 = dVar47 * dVar47 + dVar94 * dVar94;
          auVar34._8_4_ = SUB84(dVar73,0);
          auVar34._0_8_ = dVar46;
          auVar34._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          auVar35._0_8_ = auVar34._8_8_ + dVar46;
          auVar35._8_8_ = dVar46 + dVar73;
          auVar48 = sqrtpd(auVar87,auVar35);
          uVar19 = -(ulonglong)((double)pTVar13 <= auVar35._0_8_);
          uVar21 = -(ulonglong)((double)pTVar13 <= auVar35._8_8_);
          auVar93._8_8_ = uVar21;
          auVar93._0_8_ = uVar19;
          uVar15 = (uint)(uVar19 >> 0x20);
          uVar96 = (uint)(uVar21 >> 0x20);
          auVar84 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar48);
          auVar135._0_8_ = uVar19 & (ulonglong)(auVar84._0_8_ * dVar90);
          uVar7 = uVar21 & (ulonglong)(auVar84._8_8_ * dVar94);
          auVar135._8_4_ = (undefined4)uVar7;
          auVar135._12_4_ = (undefined4)(uVar7 >> 0x20);
          auVar61._0_4_ =
               ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar61._4_4_ =
               ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar61._8_4_ =
               ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar61._12_4_ =
               ~uVar96 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          local_278.Rotation.XY.m128d_f64 = (double  [2])(auVar135 | auVar61);
          auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar48);
          auVar136._0_4_ =
               ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar136._4_4_ =
               ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar136._8_4_ =
               ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar136._12_4_ =
               ~uVar96 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          auVar62._0_8_ = (ulonglong)(auVar48._0_8_ * dVar137) & uVar19;
          uVar21 = (ulonglong)(auVar48._8_8_ * dVar47) & uVar21;
          auVar62._8_4_ = (undefined4)uVar21;
          auVar62._12_4_ = (undefined4)(uVar21 >> 0x20);
          local_278.Rotation.ZW.m128d_f64 = (double  [2])(auVar136 | auVar62);
          if (param_22->Index != 0xffff) {
            local_3a8._s_0.X = local_1b8.Rotation.XY.m128d_f64[0];
            local_3a8._s_0.Y = local_1b8.Rotation.XY.m128d_f64[1];
            local_3a8._s_0.Z = local_1b8.Rotation.ZW.m128d_f64[0];
            dStack_390 = local_1b8.Rotation.ZW.m128d_f64[1];
            URigHierarchy::GetGlobalTransformByIndex(this,&local_158,(uint)param_22->Index,false);
            local_368._0_8_ = local_158.Rotation.XY.m128d_f64[0];
            local_368._8_8_ = local_158.Rotation.XY.m128d_f64[1];
            local_358 = local_158.Rotation.ZW.m128d_f64[0];
            dStack_350 = local_158.Rotation.ZW.m128d_f64[1];
            pTVar17 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                ((TQuat<double> *)&local_2f8[0]._s_0,
                                 (TQuat<double> *)&local_368._s_0,(TQuat<double> *)&local_3a8._s_0,
                                 dVar97);
            dVar97 = pTVar17->X;
            dVar90 = pTVar17->Y;
            dVar94 = pTVar17->Z;
            dVar137 = pTVar17->W;
            dVar47 = dVar94 * dVar94 + dVar97 * dVar97;
            dVar46 = dVar137 * dVar137 + dVar90 * dVar90;
            auVar36._8_4_ = SUB84(dVar46,0);
            auVar36._0_8_ = dVar47;
            auVar36._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            auVar37._0_8_ = auVar36._8_8_ + dVar47;
            auVar37._8_8_ = dVar47 + dVar46;
            auVar84 = sqrtpd(auVar93,auVar37);
            uVar21 = -(ulonglong)((double)pTVar13 <= auVar37._0_8_);
            uVar19 = -(ulonglong)((double)pTVar13 <= auVar37._8_8_);
            uVar15 = (uint)(uVar21 >> 0x20);
            uVar96 = (uint)(uVar19 >> 0x20);
            auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar84)
            ;
            auVar88._0_8_ = uVar21 & (ulonglong)(auVar48._0_8_ * dVar97);
            uVar7 = uVar19 & (ulonglong)(auVar48._8_8_ * dVar90);
            auVar88._8_4_ = (undefined4)uVar7;
            auVar88._12_4_ = (undefined4)(uVar7 >> 0x20);
            auVar63._0_4_ =
                 ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar63._4_4_ =
                 ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar63._8_4_ =
                 ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar63._12_4_ =
                 ~uVar96 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            local_1b8.Rotation.XY.m128d_f64 = (double  [2])(auVar88 | auVar63);
            auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar84)
            ;
            auVar64._0_8_ = (ulonglong)(auVar48._0_8_ * dVar94) & uVar21;
            uVar7 = (ulonglong)(auVar48._8_8_ * dVar137) & uVar19;
            auVar64._8_4_ = (undefined4)uVar7;
            auVar64._12_4_ = (undefined4)(uVar7 >> 0x20);
            auVar89._0_4_ =
                 ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar89._4_4_ =
                 ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar89._8_4_ =
                 ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar89._12_4_ =
                 ~uVar96 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            local_1b8.Rotation.ZW.m128d_f64 = (double  [2])(auVar89 | auVar64);
          }
          dVar47 = auVar139._0_8_ * (dVar22 * auVar129._8_8_ + dVar121 + auVar31._8_8_) *
                   (double)CONCAT44(local_218.Scale3D.XY.m128d_f64[0]._4_4_,
                                    local_218.Scale3D.XY.m128d_f64[0]._0_4_);
          dVar46 = auVar139._8_8_ * (dVar113 * auVar100._8_8_ + dVar125 + auVar109._0_8_) *
                   (double)CONCAT44(local_218.Scale3D.XY.m128d_f64[1]._4_4_,
                                    local_218.Scale3D.XY.m128d_f64[1]._0_4_);
          dVar106 = dVar106 * local_218.Scale3D.ZW.m128d_f64[0];
          dVar22 = local_218.Scale3D.ZW.m128d_f64[1] * 0.0;
          auVar110._8_4_ = SUB84(dVar46,0);
          auVar110._0_8_ = dVar47;
          uVar95 = (undefined4)((ulonglong)dVar46 >> 0x20);
          auVar110._12_4_ = uVar95;
          auVar124._0_8_ = local_340._s_0.Z * local_278.Scale3D.ZW.m128d_f64[0];
          auVar124._8_8_ = local_278.Scale3D.ZW.m128d_f64[1] * 0.0;
          dVar90 = local_218.Rotation.XY.m128d_f64[1];
          dVar113 = local_218.Rotation.ZW.m128d_f64[0];
          auVar84 = blendpd((undefined1  [16])local_218.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_218.Rotation.ZW.m128d_f64,2);
          auVar38._8_4_ = local_218.Rotation.ZW.m128d_f64[0]._0_4_;
          auVar38._0_8_ = dVar90;
          auVar38._12_4_ = local_218.Rotation.ZW.m128d_f64[0]._4_4_;
          auVar65._8_4_ = SUB84(dVar46,0);
          auVar65._0_8_ = dVar47;
          auVar65._12_4_ = uVar95;
          auVar2._8_4_ = SUB84(dVar22,0);
          auVar2._0_8_ = dVar106;
          auVar2._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          auVar48 = blendpd(auVar65,auVar2,2);
          auVar111._0_8_ = auVar110._8_8_ * local_218.Rotation.XY.m128d_f64[0] - dVar90 * dVar47;
          auVar111._8_8_ = dVar106 * dVar90 - auVar38._8_8_ * dVar46;
          dVar97 = local_218.Rotation.ZW.m128d_f64[1];
          auVar133._8_4_ = SUB84(auVar111._8_8_,0);
          auVar133._0_8_ = auVar111._0_8_;
          auVar133._12_4_ = (int)((ulonglong)auVar111._8_8_ >> 0x20);
          auVar66._0_8_ = auVar48._0_8_ * dVar113 - auVar84._0_8_ * dVar106;
          auVar66._8_8_ = auVar48._8_8_ * dVar97 - auVar84._8_8_ * dVar22;
          auVar48 = blendpd(auVar111,auVar66,2);
          auVar112._0_8_ = auVar48._0_8_ + auVar48._0_8_;
          auVar112._8_8_ = auVar48._8_8_ + auVar48._8_8_;
          dVar94 = auVar133._8_8_ + auVar133._8_8_;
          dVar121 = auVar66._0_8_ + auVar66._0_8_;
          uVar95 = SUB84(dVar121,0);
          auVar79._8_4_ = uVar95;
          auVar79._0_8_ = dVar94;
          uVar105 = (undefined4)((ulonglong)dVar121 >> 0x20);
          auVar79._12_4_ = uVar105;
          auVar39._8_4_ = uVar95;
          auVar39._0_8_ = dVar94;
          auVar39._12_4_ = uVar105;
          auVar67._8_4_ = uVar95;
          auVar67._0_8_ = dVar94;
          auVar67._12_4_ = uVar105;
          auVar48 = blendpd(auVar67,auVar112,2);
          auVar80._0_8_ = auVar79._8_8_ * local_218.Rotation.XY.m128d_f64[0] - dVar94 * dVar90;
          auVar80._8_8_ = auVar112._0_8_ * dVar90 - auVar39._8_8_ * dVar113;
          auVar40._8_4_ = SUB84(auVar112._8_8_,0);
          auVar40._0_8_ = auVar112._0_8_;
          auVar40._12_4_ = (int)((ulonglong)auVar112._8_8_ >> 0x20);
          auVar68._0_8_ = auVar48._0_8_ * dVar113 - auVar112._0_8_ * auVar84._0_8_;
          auVar68._8_8_ = auVar48._8_8_ * dVar97 - auVar40._8_8_ * auVar84._8_8_;
          dVar22 = local_340._s_0.X * local_278.Scale3D.XY.m128d_f64[0];
          dVar113 = local_340._s_0.Y * local_278.Scale3D.XY.m128d_f64[1];
          uVar95 = (undefined4)((ulonglong)dVar113 >> 0x20);
          auVar41._8_4_ = SUB84(auVar80._8_8_,0);
          auVar41._0_8_ = auVar80._0_8_;
          auVar41._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
          auVar118._8_4_ = SUB84(dVar113,0);
          auVar118._0_8_ = dVar22;
          auVar118._12_4_ = uVar95;
          auVar48 = blendpd(auVar80,auVar68,2);
          local_278.Translation.ZW.m128d_f64[0] =
               auVar112._0_8_ * dVar97 + dVar106 + auVar48._0_8_ +
               local_218.Translation.ZW.m128d_f64[0];
          dVar125 = local_278.Rotation.ZW.m128d_f64[0];
          dVar137 = local_278.Rotation.ZW.m128d_f64[1];
          dVar106 = local_278.Rotation.XY.m128d_f64[1];
          auVar69._8_4_ = SUB84(dVar113,0);
          auVar69._0_8_ = dVar22;
          auVar69._12_4_ = uVar95;
          auVar42._8_4_ = local_278.Rotation.ZW.m128d_f64[0]._0_4_;
          auVar42._0_8_ = dVar106;
          auVar42._12_4_ = local_278.Rotation.ZW.m128d_f64[0]._4_4_;
          auVar48 = blendpd(auVar69,auVar124,2);
          auVar84 = blendpd((undefined1  [16])local_278.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_278.Rotation.ZW.m128d_f64,2);
          auVar119._0_8_ = auVar118._8_8_ * local_278.Rotation.XY.m128d_f64[0] - dVar106 * dVar22;
          auVar119._8_8_ = auVar124._0_8_ * dVar106 - auVar42._8_8_ * dVar113;
          local_278.Translation.ZW.m128d_f64[1] = 0.0;
          local_278.Translation.XY.m128d_f64[0] =
               dVar94 * dVar97 + dVar47 + auVar41._8_8_ + local_218.Translation.XY.m128d_f64[0];
          local_278.Translation.XY.m128d_f64[1] =
               dVar121 * dVar97 + dVar46 + auVar68._0_8_ + local_218.Translation.XY.m128d_f64[1];
          auVar70._0_8_ = auVar48._0_8_ * dVar125 - auVar84._0_8_ * auVar124._0_8_;
          auVar70._8_8_ = auVar48._8_8_ * dVar137 - auVar84._8_8_ * auVar124._8_8_;
          auVar103._8_4_ = SUB84(auVar119._8_8_,0);
          auVar103._0_8_ = auVar119._0_8_;
          auVar103._12_4_ = (int)((ulonglong)auVar119._8_8_ >> 0x20);
          auVar48 = blendpd(auVar119,auVar70,2);
          dVar97 = auVar103._8_8_ + auVar103._8_8_;
          dVar90 = auVar70._0_8_ + auVar70._0_8_;
          auVar120._0_8_ = auVar48._0_8_ + auVar48._0_8_;
          auVar120._8_8_ = auVar48._8_8_ + auVar48._8_8_;
          uVar95 = SUB84(dVar90,0);
          auVar81._8_4_ = uVar95;
          auVar81._0_8_ = dVar97;
          uVar105 = (undefined4)((ulonglong)dVar90 >> 0x20);
          auVar81._12_4_ = uVar105;
          auVar43._8_4_ = uVar95;
          auVar43._0_8_ = dVar97;
          auVar43._12_4_ = uVar105;
          auVar71._8_4_ = uVar95;
          auVar71._0_8_ = dVar97;
          auVar71._12_4_ = uVar105;
          auVar48 = blendpd(auVar71,auVar120,2);
          auVar82._0_8_ = auVar81._8_8_ * local_278.Rotation.XY.m128d_f64[0] - dVar97 * dVar106;
          auVar82._8_8_ = auVar120._0_8_ * dVar106 - auVar43._8_8_ * dVar125;
          auVar44._8_4_ = SUB84(auVar120._8_8_,0);
          auVar44._0_8_ = auVar120._0_8_;
          auVar44._12_4_ = (int)((ulonglong)auVar120._8_8_ >> 0x20);
          auVar72._0_8_ = auVar48._0_8_ * dVar125 - auVar120._0_8_ * auVar84._0_8_;
          auVar72._8_8_ = auVar48._8_8_ * dVar137 - auVar44._8_8_ * auVar84._8_8_;
          auVar45._8_4_ = SUB84(auVar82._8_8_,0);
          auVar45._0_8_ = auVar82._0_8_;
          auVar45._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
          auVar48 = blendpd(auVar82,auVar72,2);
          local_1b8.Translation.ZW.m128d_f64[0] =
               auVar120._0_8_ * dVar137 + auVar124._0_8_ + auVar48._0_8_ +
               local_278.Translation.ZW.m128d_f64[0];
          local_1b8.Translation.XY.m128d_f64[0] =
               dVar97 * dVar137 + dVar22 + auVar45._8_8_ + local_278.Translation.XY.m128d_f64[0];
          local_1b8.Translation.XY.m128d_f64[1] =
               dVar90 * dVar137 + dVar113 + auVar72._0_8_ + local_278.Translation.XY.m128d_f64[1];
          local_1b8.Translation.ZW.m128d_f64[1] = 0.0;
        }
        uVar15 = 0xffffffff;
        if (param_20->Index != 0xffff) {
          uVar15 = (uint)param_20->Index;
        }
        local_2d8.Rotation.XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
        local_2d8.Rotation.XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
        local_2d8.Translation.ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
        local_2d8.Translation.ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
        local_2d8.Scale3D.ZW.m128d_f64[0] = local_218.Scale3D.ZW.m128d_f64[0];
        local_2d8.Scale3D.ZW.m128d_f64[1] = local_218.Scale3D.ZW.m128d_f64[1];
        local_2d8.Rotation.ZW.m128d_f64[0]._0_4_ = local_218.Rotation.ZW.m128d_f64[0]._0_4_;
        local_2d8.Rotation.ZW.m128d_f64[0]._4_4_ = local_218.Rotation.ZW.m128d_f64[0]._4_4_;
        local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ = local_218.Rotation.ZW.m128d_f64[1]._0_4_;
        local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ = local_218.Rotation.ZW.m128d_f64[1]._4_4_;
        URigHierarchy::SetGlobalTransformByIndex(this,uVar15,&local_2d8,false,param_18,false,false);
        if (param_21->Index != 0xffff) {
          uVar16 = (uint)param_21->Index;
        }
        local_2d8.Rotation.XY.m128d_f64[0] = local_278.Rotation.XY.m128d_f64[0];
        local_2d8.Rotation.XY.m128d_f64[1] = local_278.Rotation.XY.m128d_f64[1];
        local_2d8.Rotation.ZW.m128d_f64[0]._0_4_ = local_278.Rotation.ZW.m128d_f64[0]._0_4_;
        local_2d8.Rotation.ZW.m128d_f64[0]._4_4_ = local_278.Rotation.ZW.m128d_f64[0]._4_4_;
        local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ = local_278.Rotation.ZW.m128d_f64[1]._0_4_;
        local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ = local_278.Rotation.ZW.m128d_f64[1]._4_4_;
        local_2d8.Translation.XY.m128d_f64[0] = local_278.Translation.XY.m128d_f64[0];
        local_2d8.Translation.XY.m128d_f64[1] = local_278.Translation.XY.m128d_f64[1];
        local_2d8.Translation.ZW.m128d_f64[0] = local_278.Translation.ZW.m128d_f64[0];
        local_2d8.Translation.ZW.m128d_f64[1] = local_278.Translation.ZW.m128d_f64[1];
        local_2d8.Scale3D.XY.m128d_f64[0] = local_278.Scale3D.XY.m128d_f64[0];
        local_2d8.Scale3D.XY.m128d_f64[1] = local_278.Scale3D.XY.m128d_f64[1];
        local_2d8.Scale3D.ZW.m128d_f64[0] = local_278.Scale3D.ZW.m128d_f64[0];
        local_2d8.Scale3D.ZW.m128d_f64[1] = local_278.Scale3D.ZW.m128d_f64[1];
        URigHierarchy::SetGlobalTransformByIndex(this,uVar16,&local_2d8,false,param_18,false,false);
        if (param_22->Index != 0xffff) {
          URigHierarchy::SetGlobalTransform(this,(uint)param_22->Index,&local_1b8,param_18,false);
        }
      }
    }
  }
  return;
}

