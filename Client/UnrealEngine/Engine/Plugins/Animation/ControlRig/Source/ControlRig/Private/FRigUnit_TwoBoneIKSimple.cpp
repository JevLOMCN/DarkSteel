// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4dec90

UScriptStruct * __cdecl FRigUnit_TwoBoneIKSimple::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimple.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimple.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple,(UObject *)pUVar1,
                         L"RigUnit_TwoBoneIKSimple");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimple.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimple.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4dedc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_TwoBoneIKSimple::GetExecuteContextStruct(FRigUnit_TwoBoneIKSimple *this)

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

// Execute @ 14a4df270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_TwoBoneIKSimple::Execute(FRigUnit_TwoBoneIKSimple *this)

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
  StaticExecute((FControlRigExecuteContext *)local_288,&this->BoneA,&this->BoneB,&this->EffectorBone
                ,&this->Effector,&this->PrimaryAxis,&this->SecondaryAxis,this->SecondaryAxisWeight,
                &this->PoleVector,this->PoleVectorKind,&this->PoleVectorSpace,this->bEnableStretch,
                this->StretchStartRatio,this->StretchMaximumRatio,this->Weight,this->BoneALength,
                this->BoneBLength,this->bPropagateToChildren,&this->DebugSettings,
                &this->CachedBoneAIndex,&this->CachedBoneBIndex,&this->CachedEffectorBoneIndex,
                &this->CachedPoleVectorSpaceIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  return;
}

// GetUpgradeInfo @ 14a4dfab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_TwoBoneIKSimple::GetUpgradeInfo
          (FRigUnit_TwoBoneIKSimple *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FName FVar1;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *pFVar3;
  undefined1 auStack_278 [32];
  undefined1 local_248 [4];
  uint uStack_244;
  undefined1 uStack_240;
  undefined2 uStack_23f;
  undefined1 uStack_23d;
  int iStack_23c;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_238;
  FRigUnit_TwoBoneIKSimplePerItem local_228;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_278;
  FRigUnit_TwoBoneIKSimplePerItem::FRigUnit_TwoBoneIKSimplePerItem(&local_228);
  FVar1 = this->BoneA;
  local_228.Effector.Rotation.ZW.m128d_f64[0] = (this->Effector).Rotation.ZW.m128d_f64[0];
  local_228.Effector.Rotation.ZW.m128d_f64[1] = (this->Effector).Rotation.ZW.m128d_f64[1];
  uStack_244 = (uint)FVar1.ComparisonIndex.Value;
  uStack_240 = (undefined1)FVar1.Number;
  uStack_23f = FVar1.Number._1_2_;
  uStack_23d = FVar1.Number._3_1_;
  local_228.ItemA.Name.ComparisonIndex.Value = uStack_244;
  local_228.ItemA._1_3_ = local_248._1_3_;
  local_228.ItemA.Name.Number._0_1_ = uStack_240;
  local_228.ItemA.Name.Number._1_2_ = uStack_23f;
  local_228.ItemA.Name.Number._3_1_ = uStack_23d;
  FVar1 = this->BoneB;
  uStack_244 = (uint)FVar1.ComparisonIndex.Value;
  uStack_240 = (undefined1)FVar1.Number;
  uStack_23f = FVar1.Number._1_2_;
  uStack_23d = FVar1.Number._3_1_;
  local_228.ItemB.Name.ComparisonIndex.Value = uStack_244;
  local_228.ItemB._1_3_ = local_248._1_3_;
  local_228.ItemB.Name.Number._0_1_ = uStack_240;
  local_228.ItemB.Name.Number._1_2_ = uStack_23f;
  local_228.ItemB.Name.Number._3_1_ = uStack_23d;
  FVar1 = this->EffectorBone;
  uStack_244 = (uint)FVar1.ComparisonIndex.Value;
  uStack_240 = (undefined1)FVar1.Number;
  uStack_23f = FVar1.Number._1_2_;
  uStack_23d = FVar1.Number._3_1_;
  local_228.EffectorItem.Name.ComparisonIndex.Value = uStack_244;
  local_228.EffectorItem._1_3_ = local_248._1_3_;
  local_228.EffectorItem.Name.Number._0_1_ = uStack_240;
  local_228.Effector.Rotation.XY.m128d_f64[0] = (this->Effector).Rotation.XY.m128d_f64[0];
  local_228.Effector.Rotation.XY.m128d_f64[1] = (this->Effector).Rotation.XY.m128d_f64[1];
  local_228.EffectorItem.Name.Number._1_2_ = uStack_23f;
  local_228.Effector.Translation.XY.m128d_f64[0] = (this->Effector).Translation.XY.m128d_f64[0];
  local_228.Effector.Translation.XY.m128d_f64[1] = (this->Effector).Translation.XY.m128d_f64[1];
  local_228.EffectorItem.Name.Number._3_1_ = uStack_23d;
  local_228.PoleVectorKind = this->PoleVectorKind;
  local_228.Effector.Scale3D.XY.m128d_f64[0] = (this->Effector).Scale3D.XY.m128d_f64[0];
  local_228.Effector.Scale3D.XY.m128d_f64[1] = (this->Effector).Scale3D.XY.m128d_f64[1];
  FVar1 = this->PoleVectorSpace;
  local_228.PrimaryAxis.field0_0x0._s_0.X = (this->PrimaryAxis).field0_0x0._s_0.X;
  local_228.PrimaryAxis.field0_0x0._s_0.Y = (this->PrimaryAxis).field0_0x0._s_0.Y;
  uStack_244 = (uint)FVar1.ComparisonIndex.Value;
  uStack_240 = (undefined1)FVar1.Number;
  uStack_23f = FVar1.Number._1_2_;
  uStack_23d = FVar1.Number._3_1_;
  local_228.SecondaryAxis.field0_0x0._s_0.X = (this->SecondaryAxis).field0_0x0._s_0.X;
  local_228.SecondaryAxis.field0_0x0._s_0.Y = (this->SecondaryAxis).field0_0x0._s_0.Y;
  local_228.PoleVectorSpace.Name.Number._1_2_ = uStack_23f;
  local_228.PoleVectorSpace.Name.Number._3_1_ = uStack_23d;
  local_228.SecondaryAxisWeight = this->SecondaryAxisWeight;
  local_228.bEnableStretch = this->bEnableStretch;
  local_228.Effector.Translation.ZW.m128d_f64[0] = (this->Effector).Translation.ZW.m128d_f64[0];
  local_228.Effector.Translation.ZW.m128d_f64[1] = (this->Effector).Translation.ZW.m128d_f64[1];
  local_228.bPropagateToChildren = this->bPropagateToChildren;
  local_228.PoleVector.field0_0x0._s_0.Z = (this->PoleVector).field0_0x0._s_0.Z;
  local_228.Effector.Scale3D.ZW.m128d_f64[0] = (this->Effector).Scale3D.ZW.m128d_f64[0];
  local_228.Effector.Scale3D.ZW.m128d_f64[1] = (this->Effector).Scale3D.ZW.m128d_f64[1];
  local_228.ItemA.Type = Bone;
  local_228.PoleVectorSpace.Name.ComparisonIndex.Value = uStack_244;
  local_228.PoleVectorSpace._1_3_ = local_248._1_3_;
  local_228.PoleVectorSpace.Name.Number._0_1_ = uStack_240;
  local_228.PrimaryAxis.field0_0x0._s_0.Z = (this->PrimaryAxis).field0_0x0._s_0.Z;
  local_228.StretchStartRatio = this->StretchStartRatio;
  local_228.StretchMaximumRatio = this->StretchMaximumRatio;
  local_228.Weight = this->Weight;
  local_228.ItemALength = this->BoneALength;
  local_228.ItemB.Type = Bone;
  local_228.SecondaryAxis.field0_0x0._s_0.Z = (this->SecondaryAxis).field0_0x0._s_0.Z;
  local_228.EffectorItem.Type = Bone;
  local_228.ItemBLength = this->BoneBLength;
  local_228.PoleVector.field0_0x0._s_0.X = (this->PoleVector).field0_0x0._s_0.X;
  local_228.PoleVector.field0_0x0._s_0.Y = (this->PoleVector).field0_0x0._s_0.Y;
  local_228.PoleVectorSpace.Type = Bone;
  local_228.DebugSettings.bEnabled = (this->DebugSettings).bEnabled;
  local_228.DebugSettings._1_3_ = *(undefined3 *)&(this->DebugSettings).field_0x1;
  local_228.DebugSettings.Scale = (this->DebugSettings).Scale;
  local_228.DebugSettings._padding_ = (this->DebugSettings)._padding_;
  local_228.DebugSettings.WorldOffset.Rotation.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64[0];
  local_228.DebugSettings.WorldOffset.Rotation.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64[1];
  local_228.DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64[0];
  local_228.DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64[1];
  local_228.DebugSettings.WorldOffset.Translation.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Translation.XY.m128d_f64[0];
  local_228.DebugSettings.WorldOffset.Translation.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Translation.XY.m128d_f64[1];
  local_228.DebugSettings.WorldOffset.Translation.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64[0];
  local_228.DebugSettings.WorldOffset.Translation.ZW.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64[1];
  local_228.DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64[0];
  local_228.DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64[1];
  local_228.DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64[0];
  local_228.DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[1] =
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimple.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimple.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple,(UObject *)pUVar2,
                         L"RigUnit_TwoBoneIKSimple");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_248 = (undefined1  [4])0x5219b5c8;
    uStack_244 = 1;
    uStack_240 = 1;
    uStack_23f = 0;
    uStack_23d = 0;
    local_238.DataPtr = Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::RigVMFunctions;
    local_238._12_4_ = iStack_23c;
    local_238.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimple.OuterSingleton,
               &local_238);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimple.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem,(UObject *)pUVar2
                         ,L"RigUnit_TwoBoneIKSimplePerItem");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_248 = (undefined1  [4])0x5219b940;
    uStack_244 = 1;
    uStack_240 = 1;
    uStack_23f = 0;
    uStack_23d = 0;
    local_238.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::RigVMFunctions;
    local_238._12_4_ = iStack_23c;
    local_238.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem.
                      OuterSingleton,&local_238);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  local_248 = (undefined1  [4])0x0;
  uStack_244 = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_228);
  ::FString::FString((FString *)&local_238,L"ItemA.Name");
  ::FString::FString((FString *)local_248,L"BoneA");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_248,(FString *)&local_238,true,true);
  if ((void *)CONCAT44(uStack_244,local_248) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_244,local_248));
  }
  if (local_238.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_238.DataPtr);
  }
  ::FString::FString((FString *)local_248,L"ItemB.Name");
  ::FString::FString((FString *)&local_238,L"BoneB");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_238,(FString *)local_248,true,true);
  if (local_238.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_238.DataPtr);
  }
  if ((void *)CONCAT44(uStack_244,local_248) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_244,local_248));
  }
  ::FString::FString((FString *)local_248,L"EffectorItem.Name");
  ::FString::FString((FString *)&local_238,L"EffectorBone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_238,(FString *)local_248,true,true);
  if (local_238.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_238.DataPtr);
  }
  if ((void *)CONCAT44(uStack_244,local_248) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_244,local_248));
  }
  ::FString::FString((FString *)local_248,L"ItemALength");
  ::FString::FString((FString *)&local_238,L"BoneALength");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_238,(FString *)local_248,true,true);
  if (local_238.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_238.DataPtr);
  }
  if ((void *)CONCAT44(uStack_244,local_248) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_244,local_248));
  }
  ::FString::FString((FString *)local_248,L"ItemBLength");
  ::FString::FString((FString *)&local_238,L"BoneBLength");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_238,(FString *)local_248,true,true);
  if (local_238.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_238.DataPtr);
  }
  if ((void *)CONCAT44(uStack_244,local_248) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_244,local_248));
  }
  return __return_storage_ptr__;
}

// FRigUnit_TwoBoneIKSimple @ 14a516d40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_TwoBoneIKSimple * __thiscall
FRigUnit_TwoBoneIKSimple::FRigUnit_TwoBoneIKSimple(FRigUnit_TwoBoneIKSimple *this)

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
  uint local_a8;
  undefined2 uStack_9a;
  undefined4 uStack_94;
  uint local_88;
  longlong lStack_80;
  
  (this->BoneA).ComparisonIndex = 0;
  (this->BoneA).Number = 0;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->BoneB).ComparisonIndex = 0;
  (this->BoneB).Number = 0;
  this->_padding_ = (longlong)&___7FRigUnit_TwoBoneIKSimple__6B_;
  (this->EffectorBone).ComparisonIndex = 0;
  (this->EffectorBone).Number = 0;
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
  (this->PoleVectorSpace).ComparisonIndex = 0;
  (this->PoleVectorSpace).Number = 0;
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
  (this->CachedBoneAIndex).Key.Type = None;
  (this->CachedBoneAIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedBoneAIndex).Key.Name.Number = 0;
  (this->CachedBoneAIndex).Index = 0xffff;
  (this->CachedBoneAIndex).ContainerVersion = -1;
  (this->CachedBoneAIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedBoneBIndex).Key.Type = None;
  (this->CachedBoneBIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedBoneBIndex).Key.Name.Number = 0;
  (this->CachedBoneBIndex).Index = 0xffff;
  (this->CachedBoneBIndex).ContainerVersion = -1;
  (this->CachedBoneBIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedEffectorBoneIndex).Key.Type = None;
  (this->CachedEffectorBoneIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedEffectorBoneIndex).Key.Name.Number = 0;
  (this->CachedEffectorBoneIndex).Index = 0xffff;
  (this->CachedEffectorBoneIndex).ContainerVersion = -1;
  (this->CachedEffectorBoneIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedPoleVectorSpaceIndex).Key.Type = None;
  (this->CachedPoleVectorSpaceIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedPoleVectorSpaceIndex).Key.Name.Number = 0;
  (this->CachedPoleVectorSpaceIndex).Index = 0xffff;
  (this->CachedPoleVectorSpaceIndex).ContainerVersion = -1;
  (this->CachedPoleVectorSpaceIndex).Element = (FRigBaseElement *)0x0;
  (this->PoleVectorSpace).ComparisonIndex = 0;
  (this->PoleVectorSpace).Number = 0;
  (this->EffectorBone).ComparisonIndex = 0;
  (this->EffectorBone).Number = 0;
  (this->BoneB).ComparisonIndex = 0;
  (this->BoneB).Number = 0;
  (this->BoneA).ComparisonIndex = 0;
  (this->BoneA).Number = 0;
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
  this->BoneALength = 0.0;
  this->BoneBLength = 0.0;
  this->bPropagateToChildren = true;
  _Var22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var21 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var20 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var19 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var18 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var17 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  uVar16 = local_a8 >> 8;
  local_a8 = uVar16 << 8;
  local_88 = local_88 & 0xffffff00;
  (this->DebugSettings).bEnabled = (bool)(char)local_88;
  *(int3 *)&(this->DebugSettings).field_0x1 = (int3)(local_88 >> 8);
  (this->DebugSettings).Scale = 10.0;
  (this->DebugSettings)._padding_ = lStack_80;
  uVar15 = (ulonglong)local_a8;
  local_a8 = uVar16 << 8;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var17.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var18.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var19.m128d_f64;
  (this->CachedBoneAIndex).Key.Type = (char)uVar15;
  *(int3 *)&(this->CachedBoneAIndex).Key.field_0x1 = (int3)(uVar15 >> 8);
  (this->CachedBoneAIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  *(ulonglong *)&(this->CachedBoneAIndex).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  uVar15 = (ulonglong)local_a8;
  local_a8 = uVar16 << 8;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var20.m128d_f64;
  (this->CachedBoneBIndex).Key.Type = (char)uVar15;
  *(int3 *)&(this->CachedBoneBIndex).Key.field_0x1 = (int3)(uVar15 >> 8);
  (this->CachedBoneBIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  *(ulonglong *)&(this->CachedBoneBIndex).Key.Name.Number = CONCAT26(uStack_9a,0xffff00000000);
  uVar15 = (ulonglong)local_a8;
  local_a8 = uVar16 << 8;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var21.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var22.m128d_f64;
  *(ulonglong *)&(this->CachedBoneAIndex).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->CachedBoneAIndex).Element = (FRigBaseElement *)0x0;
  *(ulonglong *)&(this->CachedBoneBIndex).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->CachedBoneBIndex).Element = (FRigBaseElement *)0x0;
  (this->CachedEffectorBoneIndex).Key.Type = (char)uVar15;
  *(int3 *)&(this->CachedEffectorBoneIndex).Key.field_0x1 = (int3)(uVar15 >> 8);
  (this->CachedEffectorBoneIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  *(ulonglong *)&(this->CachedEffectorBoneIndex).Key.Name.Number =
       CONCAT26(uStack_9a,0xffff00000000);
  *(ulonglong *)&(this->CachedEffectorBoneIndex).ContainerVersion = CONCAT44(uStack_94,0xffffffff);
  (this->CachedEffectorBoneIndex).Element = (FRigBaseElement *)0x0;
  uVar15 = (ulonglong)local_a8;
  (this->CachedPoleVectorSpaceIndex).Key.Type = (char)uVar15;
  *(int3 *)&(this->CachedPoleVectorSpaceIndex).Key.field_0x1 = (int3)(uVar15 >> 8);
  (this->CachedPoleVectorSpaceIndex).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar15 >> 0x20);
  *(ulonglong *)&(this->CachedPoleVectorSpaceIndex).Key.Name.Number =
       CONCAT26(uStack_9a,0xffff00000000);
  *(ulonglong *)&(this->CachedPoleVectorSpaceIndex).ContainerVersion =
       CONCAT44(uStack_94,0xffffffff);
  (this->CachedPoleVectorSpaceIndex).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a52f250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TwoBoneIKSimple::Execute(FRigUnit_TwoBoneIKSimple *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->BoneA,&this->BoneB,&this->EffectorBone,&this->Effector,
                &this->PrimaryAxis,&this->SecondaryAxis,this->SecondaryAxisWeight,&this->PoleVector,
                this->PoleVectorKind,&this->PoleVectorSpace,this->bEnableStretch,
                this->StretchStartRatio,this->StretchMaximumRatio,this->Weight,this->BoneALength,
                this->BoneBLength,this->bPropagateToChildren,&this->DebugSettings,
                &this->CachedBoneAIndex,&this->CachedBoneBIndex,&this->CachedEffectorBoneIndex,
                &this->CachedPoleVectorSpaceIndex);
  return;
}

// RigVMExecute @ 14a55aba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwoBoneIKSimple::RigVMExecute
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
  FName *pFVar12;
  FName *pFVar13;
  FName *pFVar14;
  FRigVMMemoryHandle *pFVar15;
  TTransform<double> *pTVar16;
  TVector<double> *pTVar17;
  TVector<double> *pTVar18;
  float *pfVar19;
  TVector<double> *pTVar20;
  EControlRigVectorKind *pEVar21;
  FName *pFVar22;
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
    pFVar12 = (FName *)pFVar15->Ptr;
  }
  else {
    pFVar12 = (FName *)FRigVMPropertyPath::GetData_Internal
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
    pFVar13 = (FName *)pFVar15[1].Ptr;
  }
  else {
    pFVar13 = (FName *)FRigVMPropertyPath::GetData_Internal
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
    pFVar14 = (FName *)pFVar15[2].Ptr;
  }
  else {
    pFVar14 = (FName *)FRigVMPropertyPath::GetData_Internal
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
  pFVar22 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar15,true,-1);
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

// StaticExecute @ 14a5a1260

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwoBoneIKSimple::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,FName *param_4,
          TTransform<double> *param_5,TVector<double> *param_6,TVector<double> *param_7,
          float param_8,TVector<double> *param_9,EControlRigVectorKind param_10,FName *param_11,
          bool param_12,float param_13,float param_14,float param_15,float param_16,float param_17,
          bool param_18,FRigUnit_TwoBoneIKSimple_DebugSettings *param_19,FCachedRigElement *param_20
          ,FCachedRigElement *param_21,FCachedRigElement *param_22,FCachedRigElement *param_23)

{
  FRigElementKey local_38;
  FRigElementKey local_2c;
  FRigElementKey local_20;
  FRigElementKey local_14;
  
  local_38.Type = Bone;
  local_2c.Type = Bone;
  local_38.Name = *param_11;
  local_2c.Name = *param_4;
  local_20.Name = *param_3;
  local_14.Name = *param_2;
  local_20.Type = Bone;
  local_14.Type = Bone;
  FRigUnit_TwoBoneIKSimplePerItem::StaticExecute
            (param_1,&local_14,&local_20,&local_2c,param_5,param_6,param_7,param_8,param_9,param_10,
             &local_38,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
             param_20,param_21,param_22,param_23);
  return;
}

