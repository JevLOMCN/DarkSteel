// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a47cd30

UScriptStruct * __cdecl FRigUnit_ChainHarmonics::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics,(UObject *)pUVar1,
                         L"RigUnit_ChainHarmonics");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47cdb0

UScriptStruct * __thiscall
FRigUnit_ChainHarmonics::GetExecuteContextStruct(FRigUnit_ChainHarmonics *this)

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

// Execute @ 14a47d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ChainHarmonics::Execute(FRigUnit_ChainHarmonics *this)

{
  undefined1 auStackY_2c8 [32];
  FRigElementKey local_278;
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
  local_278.Name = this->ChainRoot;
  local_278.Type = Bone;
  FRigUnit_ChainHarmonicsPerItem::StaticExecute
            ((FControlRigExecuteContext *)local_268,&local_278,&this->Speed,&this->Reach,&this->Wave
             ,&this->WaveCurve,&this->Pendulum,this->bDrawDebug,&this->DrawWorldOffset,
             &this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a47d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ChainHarmonics::GetUpgradeInfo
          (FRigUnit_ChainHarmonics *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FName FVar1;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *pFVar3;
  undefined1 auStack_348 [32];
  undefined1 local_318 [4];
  uint uStack_314;
  undefined1 uStack_310;
  undefined2 uStack_30f;
  undefined1 uStack_30d;
  int iStack_30c;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_308;
  undefined1 local_2f8 [320];
  void *local_1b8;
  undefined4 local_1b0;
  void *local_1a8;
  ForAnyElementType local_190;
  FRigUnit_ChainHarmonics_Pendulum local_178;
  bool local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  FRigUnit_ChainHarmonics_WorkData local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_348;
  FRigUnit_ChainHarmonicsPerItem::FRigUnit_ChainHarmonicsPerItem
            ((FRigUnit_ChainHarmonicsPerItem *)local_2f8);
  FVar1 = this->ChainRoot;
  local_2f8._48_8_ = (this->Speed).field0_0x0._s_0.Z;
  local_2f8._72_8_ = (this->Reach).ReachTarget.field0_0x0._s_0.Y;
  local_2f8._80_8_ = (this->Reach).ReachTarget.field0_0x0._s_0.Z;
  uStack_314 = (uint)FVar1.ComparisonIndex.Value;
  uStack_310 = (undefined1)FVar1.Number;
  uStack_30f = FVar1.Number._1_2_;
  uStack_30d = FVar1.Number._3_1_;
  local_2f8._20_4_ = uStack_314;
  local_2f8._17_3_ = local_318._1_3_;
  local_2f8[0x18] = uStack_310;
  local_2f8._32_8_ = (this->Speed).field0_0x0._s_0.X;
  local_2f8._40_8_ = (this->Speed).field0_0x0._s_0.Y;
  local_2f8._25_2_ = uStack_30f;
  local_2f8[0x38] = (this->Reach).bEnabled;
  local_2f8._57_7_ = *(undefined7 *)&(this->Reach).field_0x1;
  local_2f8._64_8_ = (this->Reach).ReachTarget.field0_0x0._s_0.X;
  local_2f8[0x10] = Bone;
  local_2f8[0x1b] = uStack_30d;
  local_2f8._104_8_ = (this->Reach).ReachAxis.field0_0x0._s_0.Z;
  local_2f8._112_4_ = (this->Reach).ReachMinimum;
  local_2f8._116_4_ = (this->Reach).ReachMaximum;
  local_2f8._88_8_ = (this->Reach).ReachAxis.field0_0x0._s_0.X;
  local_2f8._96_8_ = (this->Reach).ReachAxis.field0_0x0._s_0.Y;
  local_2f8[0x80] = (this->Wave).bEnabled;
  local_2f8._129_7_ = *(undefined7 *)&(this->Wave).field_0x1;
  local_2f8._136_8_ = (this->Wave).WaveFrequency.field0_0x0._s_0.X;
  local_2f8[0x78] = (this->Reach).ReachEase;
  local_2f8._121_7_ = *(undefined7 *)&(this->Reach).field_0x41;
  local_2f8._144_8_ = (this->Wave).WaveFrequency.field0_0x0._s_0.Y;
  local_2f8._152_8_ = (this->Wave).WaveFrequency.field0_0x0._s_0.Z;
  local_2f8._160_8_ = (this->Wave).WaveAmplitude.field0_0x0._s_0.X;
  local_2f8._168_8_ = (this->Wave).WaveAmplitude.field0_0x0._s_0.Y;
  local_2f8._176_8_ = (this->Wave).WaveAmplitude.field0_0x0._s_0.Z;
  local_2f8._184_8_ = (this->Wave).WaveOffset.field0_0x0._s_0.X;
  local_2f8._192_8_ = (this->Wave).WaveOffset.field0_0x0._s_0.Y;
  local_2f8._200_8_ = (this->Wave).WaveOffset.field0_0x0._s_0.Z;
  local_2f8._208_8_ = (this->Wave).WaveNoise.field0_0x0._s_0.X;
  local_2f8._216_8_ = (this->Wave).WaveNoise.field0_0x0._s_0.Y;
  local_2f8._224_8_ = (this->Wave).WaveNoise.field0_0x0._s_0.Z;
  local_2f8._232_4_ = (this->Wave).WaveMinimum;
  local_2f8._236_4_ = (this->Wave).WaveMaximum;
  local_2f8[0xf0] = (this->Wave).WaveEase;
  local_2f8._241_7_ = *(undefined7 *)&(this->Wave).field_0x71;
  FRuntimeFloatCurve::operator=((FRuntimeFloatCurve *)(local_2f8 + 0xf8),&this->WaveCurve);
  local_178.bEnabled = (this->Pendulum).bEnabled;
  local_178._1_3_ = *(undefined3 *)&(this->Pendulum).field_0x1;
  local_178.PendulumStiffness = (this->Pendulum).PendulumStiffness;
  local_178.PendulumGravity.field0_0x0._s_0.X = (this->Pendulum).PendulumGravity.field0_0x0._s_0.X;
  local_120 = this->bDrawDebug;
  local_178.PendulumGravity.field0_0x0._s_0.Y = (this->Pendulum).PendulumGravity.field0_0x0._s_0.Y;
  local_178.PendulumGravity.field0_0x0._s_0.Z = (this->Pendulum).PendulumGravity.field0_0x0._s_0.Z;
  local_178.PendulumBlend = (this->Pendulum).PendulumBlend;
  local_178.PendulumDrag = (this->Pendulum).PendulumDrag;
  local_178.PendulumMinimum = (this->Pendulum).PendulumMinimum;
  local_178.PendulumMaximum = (this->Pendulum).PendulumMaximum;
  local_178.PendulumEase = (this->Pendulum).PendulumEase;
  local_178._49_7_ = *(undefined7 *)&(this->Pendulum).field_0x31;
  local_178.UnwindAxis.field0_0x0._s_0.X = (this->Pendulum).UnwindAxis.field0_0x0._s_0.X;
  local_178.UnwindAxis.field0_0x0._s_0.Y = (this->Pendulum).UnwindAxis.field0_0x0._s_0.Y;
  local_178.UnwindAxis.field0_0x0._s_0.Z = (this->Pendulum).UnwindAxis.field0_0x0._s_0.Z;
  local_178.UnwindMinimum = (this->Pendulum).UnwindMinimum;
  local_178.UnwindMaximum = (this->Pendulum).UnwindMaximum;
  local_118 = (this->DrawWorldOffset).Rotation.XY.m128d_f64[0];
  dStack_110 = (this->DrawWorldOffset).Rotation.XY.m128d_f64[1];
  local_108 = (this->DrawWorldOffset).Rotation.ZW.m128d_f64[0];
  dStack_100 = (this->DrawWorldOffset).Rotation.ZW.m128d_f64[1];
  local_f8 = (this->DrawWorldOffset).Translation.XY.m128d_f64[0];
  dStack_f0 = (this->DrawWorldOffset).Translation.XY.m128d_f64[1];
  local_e8 = (this->DrawWorldOffset).Translation.ZW.m128d_f64[0];
  dStack_e0 = (this->DrawWorldOffset).Translation.ZW.m128d_f64[1];
  local_d8 = (this->DrawWorldOffset).Scale3D.XY.m128d_f64[0];
  dStack_d0 = (this->DrawWorldOffset).Scale3D.XY.m128d_f64[1];
  local_c8 = (this->DrawWorldOffset).Scale3D.ZW.m128d_f64[0];
  dStack_c0 = (this->DrawWorldOffset).Scale3D.ZW.m128d_f64[1];
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics,(UObject *)pUVar2,
                         L"RigUnit_ChainHarmonics");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_318 = (undefined1  [4])0x52195b88;
    uStack_314 = 1;
    uStack_310 = 1;
    uStack_30f = 0;
    uStack_30d = 0;
    local_308.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics::RigVMFunctions;
    local_308._12_4_ = iStack_30c;
    local_308.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics.OuterSingleton,
               &local_308);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonicsPerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonicsPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem,(UObject *)pUVar2,
                         L"RigUnit_ChainHarmonicsPerItem");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_318 = (undefined1  [4])0x52195cd8;
    uStack_314 = 1;
    uStack_310 = 1;
    uStack_30f = 0;
    uStack_30d = 0;
    local_308.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics::RigVMFunctions;
    local_308._12_4_ = iStack_30c;
    local_308.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonicsPerItem.
                      OuterSingleton,&local_308);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonicsPerItem.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  local_318 = (undefined1  [4])0x0;
  uStack_314 = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)local_2f8);
  ::FString::FString((FString *)&local_308,L"ChainRoot.Name");
  ::FString::FString((FString *)local_318,L"ChainRoot");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_318,(FString *)&local_308,true,true);
  if ((void *)CONCAT44(uStack_314,local_318) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_314,local_318));
  }
  if (local_308.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_308.DataPtr);
  }
  FRigUnit_ChainHarmonics_WorkData::~FRigUnit_ChainHarmonics_WorkData(&local_b8);
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  local_2f8._248_8_ = &___7FIndexedCurve__6B_;
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  local_1b0 = 0;
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_2f8 + 0x100));
  return __return_storage_ptr__;
}

// FRigUnit_ChainHarmonics @ 14a50c9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigUnit_ChainHarmonics * __thiscall
FRigUnit_ChainHarmonics::FRigUnit_ChainHarmonics(FRigUnit_ChainHarmonics *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  FRuntimeFloatCurve *pFVar9;
  FRichCurve *pFVar10;
  undefined1 in_R9B;
  float fVar11;
  undefined1 auStackY_e8 [32];
  uint in_stack_ffffffffffffff38;
  FKeyHandle FVar12;
  undefined8 local_b8;
  FKeyHandle local_b0 [2];
  undefined1 local_a8 [72];
  void *local_60;
  undefined4 local_58;
  void *local_50;
  ForAnyElementType local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  (this->Reach).bEnabled = true;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  (this->ChainRoot).ComparisonIndex = 0;
  (this->ChainRoot).Number = 0;
  *(undefined ***)this = &___7FRigUnit_ChainHarmonics__6B_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Reach).ReachTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Reach).ReachTarget.field0_0x0._s_0.Y = (double)uVar8;
  (this->Reach).ReachTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Reach).ReachAxis.field0_0x0._s_0.X = 1.0;
  (this->Reach).ReachAxis.field0_0x0._s_0.Y = 0.0;
  (this->Reach).ReachAxis.field0_0x0._s_0.Z = 0.0;
  (this->Reach).ReachMinimum = 0.0;
  (this->Reach).ReachMaximum = 0.0;
  (this->Reach).ReachEase = Linear;
  (this->Wave).bEnabled = true;
  (this->Wave).WaveAmplitude.field0_0x0._s_0.X = 0.0;
  (this->Wave).WaveAmplitude.field0_0x0._s_0.Y = 1.0;
  (this->Wave).WaveAmplitude.field0_0x0._s_0.Z = 0.0;
  (this->Wave).WaveFrequency.field0_0x0._s_0.X = 1.0;
  (this->Wave).WaveFrequency.field0_0x0._s_0.Y = 0.6000000238418579;
  (this->Wave).WaveFrequency.field0_0x0._s_0.Z = 0.800000011920929;
  (this->Wave).WaveOffset.field0_0x0._s_0.X = 0.0;
  (this->Wave).WaveOffset.field0_0x0._s_0.Y = 1.0;
  (this->Wave).WaveOffset.field0_0x0._s_0.Z = 2.0;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Wave).WaveNoise.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->Wave).WaveNoise.field0_0x0._s_0.Y = (double)uVar8;
  (this->Wave).WaveNoise.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  (this->Wave).WaveMinimum = 0.0;
  (this->Wave).WaveMaximum = 1.0;
  (this->Wave).WaveEase = Linear;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->WaveCurve);
  (this->Pendulum).bEnabled = true;
  (this->Pendulum).PendulumStiffness = 2.0;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Pendulum).PendulumGravity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Pendulum).PendulumGravity.field0_0x0._s_0.Y = (double)uVar8;
  (this->Pendulum).PendulumGravity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Pendulum).PendulumBlend = 0.75;
  (this->Pendulum).PendulumDrag = 0.98;
  (this->Pendulum).PendulumMinimum = 0.0;
  (this->Pendulum).PendulumMaximum = 0.1;
  (this->Pendulum).PendulumEase = Linear;
  (this->Pendulum).UnwindAxis.field0_0x0._s_0.X = 0.0;
  (this->Pendulum).UnwindAxis.field0_0x0._s_0.Y = 1.0;
  (this->Pendulum).UnwindAxis.field0_0x0._s_0.Z = 0.0;
  (this->Pendulum).UnwindMinimum = 0.2;
  (this->Pendulum).UnwindMaximum = 0.05;
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar2._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar2._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar2._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Rotation.XY.m128d_f64 = auVar2;
  auVar3._8_4_ = SUB84((double)fVar1,0);
  auVar3._0_8_ = (double)fVar11;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Rotation.ZW.m128d_f64 = auVar3;
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Translation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar1,0);
  auVar5._0_8_ = (double)fVar11;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Translation.ZW.m128d_f64 = auVar5;
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Scale3D.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar1,0);
  auVar7._0_8_ = (double)fVar11;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
  *(undefined1 (*) [16])(this->DrawWorldOffset).Scale3D.ZW.m128d_f64 = auVar7;
  (this->WorkData).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Items.ArrayNum = 0;
  (this->WorkData).Items.ArrayMax = 0;
  (this->WorkData).Ratio.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Ratio.ArrayNum = 0;
  (this->WorkData).Ratio.ArrayMax = 0;
  (this->WorkData).LocalTip.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).LocalTip.ArrayNum = 0;
  (this->WorkData).LocalTip.ArrayMax = 0;
  (this->WorkData).PendulumTip.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).PendulumTip.ArrayNum = 0;
  (this->WorkData).PendulumTip.ArrayMax = 0;
  (this->WorkData).PendulumPosition.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).PendulumPosition.ArrayNum = 0;
  (this->WorkData).PendulumPosition.ArrayMax = 0;
  (this->WorkData).PendulumVelocity.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).PendulumVelocity.ArrayNum = 0;
  (this->WorkData).PendulumVelocity.ArrayMax = 0;
  (this->WorkData).HierarchyLine.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).HierarchyLine.ArrayNum = 0;
  (this->WorkData).HierarchyLine.ArrayMax = 0;
  (this->WorkData).VelocityLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).VelocityLines.ArrayNum = 0;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorkData).VelocityLines.ArrayMax = 0;
  local_b8 = 0;
  (this->WorkData).Time.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorkData).Time.field0_0x0._s_0.Y = (double)uVar8;
  (this->WorkData).Time.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ChainRoot).ComparisonIndex = 0;
  uVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ChainRoot).Number = 0;
  (this->Speed).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Speed).field0_0x0._s_0.Y = (double)uVar8;
  (this->Speed).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->Reach).bEnabled = false;
  (this->Wave).bEnabled = true;
  (this->Pendulum).bEnabled = false;
  pFVar9 = FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_a8);
  FRuntimeFloatCurve::operator=(&this->WaveCurve,pFVar9);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_a8._0_8_ = &___7FIndexedCurve__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 8));
  pFVar10 = FRuntimeFloatCurve::GetRichCurve(&this->WaveCurve);
  FKeyHandle::FKeyHandle(local_b0);
  FVar12.Index = in_stack_ffffffffffffff38 & 0xffffff00;
  FRichCurve::AddKey(pFVar10,fVar11,0.0,(bool)in_R9B,FVar12);
  pFVar10 = FRuntimeFloatCurve::GetRichCurve(&this->WaveCurve);
  FKeyHandle::FKeyHandle((FKeyHandle *)&local_b8);
  FRichCurve::AddKey(pFVar10,fVar11,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar12.Index & 0xffffff00));
  this->bDrawDebug = true;
  *&(this->DrawWorldOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->DrawWorldOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->DrawWorldOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->DrawWorldOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->DrawWorldOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->DrawWorldOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// ~FRigUnit_ChainHarmonics @ 14a5182b0

void __thiscall FRigUnit_ChainHarmonics::~FRigUnit_ChainHarmonics(FRigUnit_ChainHarmonics *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  FRigUnit_ChainHarmonics_WorkData::~FRigUnit_ChainHarmonics_WorkData(&this->WorkData);
  pFVar1 = (this->WaveCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WaveCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->WaveCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->WaveCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->WaveCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WaveCurve).EditorCurveData._padding_);
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a524ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ChainHarmonics::Execute(FRigUnit_ChainHarmonics *this,FControlRigExecuteContext *param_1)

{
  FRigElementKey local_18;
  
  local_18.Name = this->ChainRoot;
  local_18.Type = Bone;
  FRigUnit_ChainHarmonicsPerItem::StaticExecute
            (param_1,&local_18,&this->Speed,&this->Reach,&this->Wave,&this->WaveCurve,
             &this->Pendulum,this->bDrawDebug,&this->DrawWorldOffset,&this->WorkData);
  return;
}

// RigVMExecute @ 14a536930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ChainHarmonics::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  TVector<double> *pTVar5;
  FRigUnit_ChainHarmonics_Reach *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigUnit_ChainHarmonics_Wave *pFVar8;
  FRuntimeFloatCurve *pFVar9;
  FRigUnit_ChainHarmonics_Pendulum *pFVar10;
  uchar *puVar11;
  TTransform<double> *pTVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_ChainHarmonics_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TVector<double> *)pFVar7[1].Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigUnit_ChainHarmonics_Reach *)pFVar7[2].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_ChainHarmonics_Reach *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = (FRigUnit_ChainHarmonics_Wave *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = (FRuntimeFloatCurve *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = (FRigUnit_ChainHarmonics_Pendulum *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1)
  ;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  bVar3 = (bool)*puVar11;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar12 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_ChainHarmonics_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar13->Offset + pFVar13->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar4,pTVar5,pFVar6,pFVar8,pFVar9,pFVar10,bVar3,pTVar12,pFVar14);
  return;
}

// StaticExecute @ 14a563a50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ChainHarmonics::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,TVector<double> *param_3,
          FRigUnit_ChainHarmonics_Reach *param_4,FRigUnit_ChainHarmonics_Wave *param_5,
          FRuntimeFloatCurve *param_6,FRigUnit_ChainHarmonics_Pendulum *param_7,bool param_8,
          TTransform<double> *param_9,FRigUnit_ChainHarmonics_WorkData *param_10)

{
  FRigElementKey local_18 [2];
  
  local_18[0].Name = *param_2;
  local_18[0].Type = Bone;
  FRigUnit_ChainHarmonicsPerItem::StaticExecute
            (param_1,local_18,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

