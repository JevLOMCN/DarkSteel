// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4cc880

UScriptStruct * __cdecl FRigUnit_AimBone::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AimBone.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AimBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBone,(UObject *)pUVar1,
                         L"RigUnit_AimBone");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_AimBone.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_AimBone.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4cc900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_AimBone::GetExecuteContextStruct(FRigUnit_AimBone *this)

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

// Execute @ 14a4ccc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AimBone::Execute(FRigUnit_AimBone *this)

{
  undefined1 auStackY_2c8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Bone,&this->Primary,&this->Secondary,
                this->Weight,this->bPropagateToChildren,&this->DebugSettings,&this->CachedBoneIndex,
                &this->PrimaryCachedSpace,&this->SecondaryCachedSpace,&this->bIsInitialized);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4cd0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_AimBone::GetUpgradeInfo
          (FRigUnit_AimBone *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FName FVar1;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *pFVar3;
  undefined1 auStack_208 [32];
  undefined1 local_1d8 [4];
  uint uStack_1d4;
  undefined1 uStack_1d0;
  undefined2 uStack_1cf;
  undefined1 uStack_1cd;
  int iStack_1cc;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_1c8;
  FRigUnit_AimItem local_1b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_208;
  FRigUnit_AimItem::FRigUnit_AimItem(&local_1b8);
  FVar1 = this->Bone;
  local_1b8.Primary.Axis.field0_0x0._s_0.X = (this->Primary).Axis.field0_0x0._s_0.X;
  local_1b8.Primary.Axis.field0_0x0._s_0.Y = (this->Primary).Axis.field0_0x0._s_0.Y;
  uStack_1d4 = (uint)FVar1.ComparisonIndex.Value;
  uStack_1d0 = (undefined1)FVar1.Number;
  uStack_1cf = FVar1.Number._1_2_;
  uStack_1cd = FVar1.Number._3_1_;
  local_1b8.Item.Name.ComparisonIndex.Value = uStack_1d4;
  local_1b8.Item._1_3_ = local_1d8._1_3_;
  local_1b8.Item.Name.Number._0_1_ = uStack_1d0;
  local_1b8.Primary.Weight = (this->Primary).Weight;
  local_1b8.Primary.Axis.field0_0x0._s_0.Z = (this->Primary).Axis.field0_0x0._s_0.Z;
  local_1b8.Primary.Target.field0_0x0._s_0.Z = (this->Primary).Target.field0_0x0._s_0.Z;
  local_1b8.Item.Name.Number._1_2_ = uStack_1cf;
  local_1b8.Item.Name.Number._3_1_ = uStack_1cd;
  local_1b8.Primary.Kind = (this->Primary).Kind;
  FVar1 = (this->Primary).Space;
  uStack_1d4 = (uint)FVar1.ComparisonIndex.Value;
  uStack_1d0 = (undefined1)FVar1.Number;
  uStack_1cf = FVar1.Number._1_2_;
  uStack_1cd = FVar1.Number._3_1_;
  local_1b8.Primary.Space.Name.ComparisonIndex.Value = uStack_1d4;
  local_1b8.Primary.Space._1_3_ = local_1d8._1_3_;
  local_1b8.Primary.Space.Name.Number._0_1_ = uStack_1d0;
  local_1b8.Secondary.Weight = (this->Secondary).Weight;
  local_1b8.Primary.Space.Name.Number._1_2_ = uStack_1cf;
  local_1b8.Primary.Target.field0_0x0._s_0.X = (this->Primary).Target.field0_0x0._s_0.X;
  local_1b8.Primary.Target.field0_0x0._s_0.Y = (this->Primary).Target.field0_0x0._s_0.Y;
  local_1b8.Secondary.Axis.field0_0x0._s_0.Z = (this->Secondary).Axis.field0_0x0._s_0.Z;
  local_1b8.Secondary.Axis.field0_0x0._s_0.X = (this->Secondary).Axis.field0_0x0._s_0.X;
  local_1b8.Secondary.Axis.field0_0x0._s_0.Y = (this->Secondary).Axis.field0_0x0._s_0.Y;
  local_1b8.Primary.Space.Name.Number._3_1_ = uStack_1cd;
  local_1b8.Secondary.Kind = (this->Secondary).Kind;
  local_1b8.Secondary.Target.field0_0x0._s_0.Z = (this->Secondary).Target.field0_0x0._s_0.Z;
  local_1b8.Secondary.Target.field0_0x0._s_0.X = (this->Secondary).Target.field0_0x0._s_0.X;
  local_1b8.Secondary.Target.field0_0x0._s_0.Y = (this->Secondary).Target.field0_0x0._s_0.Y;
  FVar1 = (this->Secondary).Space;
  uStack_1d4 = (uint)FVar1.ComparisonIndex.Value;
  uStack_1d0 = (undefined1)FVar1.Number;
  uStack_1cf = FVar1.Number._1_2_;
  uStack_1cd = FVar1.Number._3_1_;
  local_1b8.DebugSettings.bEnabled = (this->DebugSettings).bEnabled;
  local_1b8.DebugSettings._1_3_ = *(undefined3 *)&(this->DebugSettings).field_0x1;
  local_1b8.DebugSettings.Scale = (this->DebugSettings).Scale;
  local_1b8.DebugSettings._padding_ = (this->DebugSettings)._padding_;
  local_1b8.Secondary.Space.Name.ComparisonIndex.Value = uStack_1d4;
  local_1b8.Secondary.Space._1_3_ = local_1d8._1_3_;
  local_1b8.Secondary.Space.Name.Number._0_1_ = uStack_1d0;
  local_1b8.Weight = this->Weight;
  local_1b8.DebugSettings.WorldOffset.Rotation.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64[0];
  local_1b8.DebugSettings.WorldOffset.Rotation.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64[1];
  local_1b8.Secondary.Space.Name.Number._1_2_ = uStack_1cf;
  local_1b8.DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64[0];
  local_1b8.DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64[1];
  local_1b8.Item.Type = Bone;
  local_1b8.DebugSettings.WorldOffset.Translation.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Translation.XY.m128d_f64[0];
  local_1b8.DebugSettings.WorldOffset.Translation.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Translation.XY.m128d_f64[1];
  local_1b8.Primary.Space.Type = Bone;
  local_1b8.DebugSettings.WorldOffset.Translation.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64[0];
  local_1b8.DebugSettings.WorldOffset.Translation.ZW.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64[1];
  local_1b8.Secondary.Space.Type = Bone;
  local_1b8.DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64[0];
  local_1b8.DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64[1];
  local_1b8.Secondary.Space.Name.Number._3_1_ = uStack_1cd;
  local_1b8.DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64[0];
  local_1b8.DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AimBone.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AimBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBone,(UObject *)pUVar2,
                         L"RigUnit_AimBone");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_1d8 = (undefined1  [4])0x521963a0;
    uStack_1d4 = 1;
    uStack_1d0 = 1;
    uStack_1cf = 0;
    uStack_1cd = 0;
    local_1c8.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::RigVMFunctions;
    local_1c8._12_4_ = iStack_1cc;
    local_1c8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_AimBone.OuterSingleton,&local_1c8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_AimBone.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AimItem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AimItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimItem,(UObject *)pUVar2,
                         L"RigUnit_AimItem");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_1d8 = (undefined1  [4])0x521964d8;
    uStack_1d4 = 1;
    uStack_1d0 = 1;
    uStack_1cf = 0;
    uStack_1cd = 0;
    local_1c8.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::RigVMFunctions;
    local_1c8._12_4_ = iStack_1cc;
    local_1c8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_AimItem.OuterSingleton,&local_1c8);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_AimItem.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  local_1d8 = (undefined1  [4])0x0;
  uStack_1d4 = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_1b8);
  ::FString::FString((FString *)&local_1c8,L"Item.Name");
  ::FString::FString((FString *)local_1d8,L"Bone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_1d8,(FString *)&local_1c8,true,true);
  if ((void *)CONCAT44(uStack_1d4,local_1d8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_1d4,local_1d8));
  }
  if (local_1c8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_1c8.DataPtr);
  }
  ::FString::FString((FString *)local_1d8,L"Primary.Space.Name");
  ::FString::FString((FString *)&local_1c8,L"Primary.Space");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_1c8,(FString *)local_1d8,true,true);
  if (local_1c8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_1c8.DataPtr);
  }
  if ((void *)CONCAT44(uStack_1d4,local_1d8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_1d4,local_1d8));
  }
  ::FString::FString((FString *)local_1d8,L"Secondary.Space.Name");
  ::FString::FString((FString *)&local_1c8,L"Secondary.Space");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_1c8,(FString *)local_1d8,true,true);
  if (local_1c8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_1c8.DataPtr);
  }
  if ((void *)CONCAT44(uStack_1d4,local_1d8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_1d4,local_1d8));
  }
  return __return_storage_ptr__;
}

// FRigUnit_AimBone @ 14a50b2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_AimBone * __thiscall FRigUnit_AimBone::FRigUnit_AimBone(FRigUnit_AimBone *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar12;
  __m128 _Var13;
  double dVar14;
  double dVar15;
  __m128d _Var16;
  __m128d _Var17;
  __m128d _Var18;
  __m128d _Var19;
  __m128d _Var20;
  __m128d _Var21;
  uint local_a8;
  undefined2 uStack_9a;
  undefined4 uStack_94;
  undefined4 uStack_84;
  uint local_50;
  uint uStack_44;
  
  (this->Primary).Weight = 1.0;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  (this->Bone).ComparisonIndex = 0;
  (this->Bone).Number = 0;
  *(undefined ***)this = &___7FRigUnit_AimBone__6B_;
  (this->Primary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Primary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Target.field0_0x0._s_0.X = 1.0;
  (this->Primary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Kind = Location;
  (this->Primary).Space.ComparisonIndex = 0;
  (this->Primary).Space.Number = 0;
  (this->Secondary).Weight = 1.0;
  (this->Secondary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Secondary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.X = 1.0;
  (this->Secondary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Kind = Location;
  (this->Secondary).Space.ComparisonIndex = 0;
  dVar15 = _UNK_150689518;
  dVar14 = ___xmm_00000000000000003ff0000000000000;
  (this->Secondary).Space.Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = auVar4;
  _Var13 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = auVar5;
  dVar9 = (double)_Var13.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = (double)_Var13.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = auVar8;
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
  (this->CachedBoneIndex).Key.Type = None;
  (this->CachedBoneIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedBoneIndex).Key.Name.Number = 0;
  (this->CachedBoneIndex).Index = 0xffff;
  (this->CachedBoneIndex).ContainerVersion = -1;
  (this->CachedBoneIndex).Element = (FRigBaseElement *)0x0;
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
  (this->Bone).ComparisonIndex = 0;
  dVar12 = _UNK_15061cbc8;
  dVar9 = ___xmm_3ff00000000000000000000000000000;
  (this->Bone).Number = 0;
  local_50 = CONCAT31(local_50._1_3_,1);
  *(ulonglong *)&this->Primary = CONCAT44(uStack_84,0x3f800000);
  (this->Primary).Axis.field0_0x0._s_0.X = dVar14;
  (this->Primary).Axis.field0_0x0._s_0.Y = dVar15;
  (this->Primary).Axis.field0_0x0._s_0.Z = dVar9;
  uVar10 = (ulonglong)local_50;
  local_50 = CONCAT31(local_50._1_3_,1);
  (this->Primary).Target.field0_0x0._s_0.X = dVar12;
  (this->Primary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Primary).Kind = (char)uVar10;
  *(int3 *)&(this->Primary).field_0x39 = (int3)(uVar10 >> 8);
  (this->Primary).Space.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  *(ulonglong *)&(this->Primary).Space.Number = (ulonglong)uStack_44 << 0x20;
  *(ulonglong *)&this->Secondary = CONCAT44(uStack_84,0x3f800000);
  (this->Secondary).Axis.field0_0x0._s_0.X = dVar14;
  (this->Secondary).Axis.field0_0x0._s_0.Y = dVar15;
  (this->Secondary).Axis.field0_0x0._s_0.Z = dVar9;
  uVar10 = (ulonglong)local_50;
  (this->Secondary).Target.field0_0x0._s_0.X = dVar12;
  (this->Secondary).Target.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Target.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Kind = (char)uVar10;
  *(int3 *)&(this->Secondary).field_0x39 = (int3)(uVar10 >> 8);
  (this->Secondary).Space.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  *(ulonglong *)&(this->Secondary).Space.Number = (ulonglong)uStack_44 << 0x20;
  (this->Primary).Axis.field0_0x0._s_0.X = 1.0;
  (this->Primary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Primary).Axis.field0_0x0._s_0.Z = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.X = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Y = 0.0;
  (this->Secondary).Axis.field0_0x0._s_0.Z = 1.0;
  this->Weight = 1.0;
  this->bPropagateToChildren = true;
  _Var21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var20 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var19 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var18 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var17 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var16 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  uVar11 = local_a8 >> 8;
  local_a8 = uVar11 << 8;
  (this->DebugSettings).bEnabled = false;
  *(undefined3 *)&(this->DebugSettings).field_0x1 = 0x3f8000;
  (this->DebugSettings).Scale = 10.0;
  (this->DebugSettings)._padding_ = (longlong)dVar14;
  uVar10 = (ulonglong)local_a8;
  local_a8 = uVar11 << 8;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var16.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var17.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var18.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var19.m128d_f64;
  (this->CachedBoneIndex).Key.Type = (char)uVar10;
  *(int3 *)&(this->CachedBoneIndex).Key.field_0x1 = (int3)(uVar10 >> 8);
  (this->CachedBoneIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  *(ulonglong *)&(this->CachedBoneIndex).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  uVar10 = (ulonglong)local_a8;
  local_a8 = uVar11 << 8;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var20.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var21.m128d_f64;
  *(ulonglong *)&(this->CachedBoneIndex).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->CachedBoneIndex).Element = (FRigBaseElement *)0x0;
  (this->PrimaryCachedSpace).Key.Type = (char)uVar10;
  *(int3 *)&(this->PrimaryCachedSpace).Key.field_0x1 = (int3)(uVar10 >> 8);
  (this->PrimaryCachedSpace).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  *(ulonglong *)&(this->PrimaryCachedSpace).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  *(ulonglong *)&(this->PrimaryCachedSpace).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->PrimaryCachedSpace).Element = (FRigBaseElement *)0x0;
  uVar10 = (ulonglong)local_a8;
  this->bIsInitialized = false;
  (this->SecondaryCachedSpace).Key.Type = (char)uVar10;
  *(int3 *)&(this->SecondaryCachedSpace).Key.field_0x1 = (int3)(uVar10 >> 8);
  (this->SecondaryCachedSpace).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar10 >> 0x20);
  *(ulonglong *)&(this->SecondaryCachedSpace).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  *(ulonglong *)&(this->SecondaryCachedSpace).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->SecondaryCachedSpace).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a524320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AimBone::Execute(FRigUnit_AimBone *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Bone,&this->Primary,&this->Secondary,this->Weight,
                this->bPropagateToChildren,&this->DebugSettings,&this->CachedBoneIndex,
                &this->PrimaryCachedSpace,&this->SecondaryCachedSpace,&this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a5348e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimBone::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FRigUnit_AimBone_Target *pFVar6;
  FRigUnit_AimBone_Target *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  float *pfVar9;
  uchar *puVar10;
  FRigUnit_AimBone_DebugSettings *pFVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  FCachedRigElement *pFVar14;
  FCachedRigElement *pFVar15;
  bool *pbVar16;
  FControlRigExecuteContext *pFVar17;
  
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
    pFVar5 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
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
    pFVar6 = (FRigUnit_AimBone_Target *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_AimBone_Target *)
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
    pFVar7 = (FRigUnit_AimBone_Target *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FRigUnit_AimBone_Target *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  fVar1 = *pfVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar10;
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
  pFVar15 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar16 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar17 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar17,pFVar5,pFVar6,pFVar7,fVar1,bVar4,pFVar11,pFVar13,pFVar14,pFVar15,pbVar16);
  return;
}

// StaticExecute @ 14a55e010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AimBone::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FRigUnit_AimBone_Target *param_3,
          FRigUnit_AimBone_Target *param_4,float param_5,bool param_6,
          FRigUnit_AimBone_DebugSettings *param_7,FCachedRigElement *param_8,
          FCachedRigElement *param_9,FCachedRigElement *param_10,bool *param_11)

{
  FRigElementKey local_b8;
  FRigUnit_AimItem_Target local_a8;
  FRigUnit_AimItem_Target local_58;
  
  local_58.Weight = param_3->Weight;
  local_58.Kind = param_3->Kind;
  local_58.Axis.field0_0x0._s_0.X = (param_3->Axis).field0_0x0._s_0.X;
  local_58.Axis.field0_0x0._s_0.Y = (param_3->Axis).field0_0x0._s_0.Y;
  local_b8.Name.ComparisonIndex = (param_3->Space).ComparisonIndex;
  local_b8.Name.Number = (param_3->Space).Number;
  local_58.Space.Name.Number = local_b8.Name.Number;
  local_a8.Kind = param_4->Kind;
  local_58.Axis.field0_0x0._s_0.Z = (param_3->Axis).field0_0x0._s_0.Z;
  local_58.Target.field0_0x0._s_0.Z = (param_3->Target).field0_0x0._s_0.Z;
  local_58.Space.Name.ComparisonIndex.Value = local_b8.Name.ComparisonIndex.Value;
  local_58.Space.Type = Bone;
  local_58.Space._1_3_ = local_b8._1_3_;
  local_b8.Name.ComparisonIndex = (param_4->Space).ComparisonIndex;
  local_b8.Name.Number = (param_4->Space).Number;
  local_a8.Space.Name.Number = local_b8.Name.Number;
  local_a8.Weight = param_4->Weight;
  local_a8.Axis.field0_0x0._s_0.Z = (param_4->Axis).field0_0x0._s_0.Z;
  local_a8.Target.field0_0x0._s_0.Z = (param_4->Target).field0_0x0._s_0.Z;
  local_58.Target.field0_0x0._s_0.X = (param_3->Target).field0_0x0._s_0.X;
  local_58.Target.field0_0x0._s_0.Y = (param_3->Target).field0_0x0._s_0.Y;
  local_a8.Space.Name.ComparisonIndex.Value = local_b8.Name.ComparisonIndex.Value;
  local_a8.Space.Type = Bone;
  local_a8.Space._1_3_ = local_b8._1_3_;
  local_b8.Name.ComparisonIndex = (*param_2).ComparisonIndex;
  local_b8.Name.Number = (*param_2).Number;
  local_a8.Axis.field0_0x0._s_0.X = (param_4->Axis).field0_0x0._s_0.X;
  local_a8.Axis.field0_0x0._s_0.Y = (param_4->Axis).field0_0x0._s_0.Y;
  local_b8.Type = Bone;
  local_a8.Target.field0_0x0._s_0.X = (param_4->Target).field0_0x0._s_0.X;
  local_a8.Target.field0_0x0._s_0.Y = (param_4->Target).field0_0x0._s_0.Y;
  FRigUnit_AimItem::StaticExecute
            (param_1,&local_b8,&local_58,&local_a8,param_5,param_7,param_8,param_9,param_10,param_11
            );
  return;
}

