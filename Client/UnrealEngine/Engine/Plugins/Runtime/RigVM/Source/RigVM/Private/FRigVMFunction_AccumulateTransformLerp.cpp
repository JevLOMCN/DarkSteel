// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a1415e0

UScriptStruct * __cdecl FRigVMFunction_AccumulateTransformLerp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateTransformLerp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateTransformLerp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp,
                         (UObject *)pUVar1,L"RigVMFunction_AccumulateTransformLerp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateTransformLerp.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateTransformLerp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a141660

UScriptStruct * __thiscall
FRigVMFunction_AccumulateTransformLerp::GetExecuteContextStruct
          (FRigVMFunction_AccumulateTransformLerp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Initialize @ 14a141870

void __thiscall
FRigVMFunction_AccumulateTransformLerp::Initialize(FRigVMFunction_AccumulateTransformLerp *this)

{
  this->bIsInitialized = false;
  return;
}

// Execute @ 14a141880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_AccumulateTransformLerp::Execute(FRigVMFunction_AccumulateTransformLerp *this)

{
  FRigVMExecuteContext local_118;
  
  local_118.FramesPerSecond = __real_3f91111111111111;
  local_118.DeltaTime = 0.0;
  local_118.AbsoluteTime = 0.0;
  local_118.EventName.ComparisonIndex.Value = 0;
  local_118.EventName.Number = 0;
  local_118.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_118.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_118.FunctionName.ComparisonIndex.Value = 0;
  local_118.FunctionName.Number = 0;
  local_118.InstructionIndex = 0;
  local_118.NumExecutions = 0;
  local_118.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_118.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_118.Traits.ArrayNum = 0;
  local_118.Traits.ArrayMax = 0;
  local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_118.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_118.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  local_118._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_118.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_118.RuntimeSettings.MaximumArraySize = 0x800;
  local_118.RuntimeSettings._4_4_ = 0;
  local_118.OwningObject = (UObject *)0x0;
  local_118.OwningActor = (AActor *)0x0;
  local_118.World = (UWorld *)0x0;
  local_118.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  local_118.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  StaticExecute(&local_118,&this->TargetValue,&this->InitialValue,this->Blend,
                this->bIntegrateDeltaTime,&this->Result,&this->AccumulatedValue,
                &this->bIsInitialized);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_AccumulateTransformLerp @ 14a18b710

FRigVMFunction_AccumulateTransformLerp * __thiscall
FRigVMFunction_AccumulateTransformLerp::FRigVMFunction_AccumulateTransformLerp
          (FRigVMFunction_AccumulateTransformLerp *this)

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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  *(undefined ***)this = &___7FRigVMFunction_AccumulateTransformLerp__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetValue).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetValue).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetValue).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetValue).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetValue).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetValue).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialValue).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.ZW.m128d_f64 = auVar20;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AccumulatedValue).Rotation.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar2,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AccumulatedValue).Rotation.ZW.m128d_f64 = auVar22;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AccumulatedValue).Translation.XY.m128d_f64 = auVar23;
  auVar24._8_4_ = SUB84((double)fVar2,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AccumulatedValue).Translation.ZW.m128d_f64 = auVar24;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AccumulatedValue).Scale3D.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar2,0);
  auVar26._0_8_ = (double)fVar1;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AccumulatedValue).Scale3D.ZW.m128d_f64 = auVar26;
  *&(this->AccumulatedValue).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->AccumulatedValue).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->AccumulatedValue).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->AccumulatedValue).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->AccumulatedValue).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->AccumulatedValue).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->Blend = 0.0;
  dVar27 = (this->AccumulatedValue).Rotation.XY.m128d_f64[1];
  dVar28 = (this->AccumulatedValue).Rotation.ZW.m128d_f64[0];
  dVar29 = (this->AccumulatedValue).Rotation.ZW.m128d_f64[1];
  (this->Result).Rotation.XY.m128d_f64[0] = (this->AccumulatedValue).Rotation.XY.m128d_f64[0];
  (this->Result).Rotation.XY.m128d_f64[1] = dVar27;
  this->bIntegrateDeltaTime = false;
  dVar27 = (this->AccumulatedValue).Translation.XY.m128d_f64[0];
  dVar30 = (this->AccumulatedValue).Translation.XY.m128d_f64[1];
  (this->Result).Rotation.ZW.m128d_f64[0] = dVar28;
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar29;
  this->bIsInitialized = false;
  dVar28 = (this->AccumulatedValue).Translation.ZW.m128d_f64[0];
  dVar29 = (this->AccumulatedValue).Translation.ZW.m128d_f64[1];
  (this->Result).Translation.XY.m128d_f64[0] = dVar27;
  (this->Result).Translation.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->AccumulatedValue).Scale3D.XY.m128d_f64[0];
  dVar30 = (this->AccumulatedValue).Scale3D.XY.m128d_f64[1];
  (this->Result).Translation.ZW.m128d_f64[0] = dVar28;
  (this->Result).Translation.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->AccumulatedValue).Scale3D.ZW.m128d_f64[0];
  dVar29 = (this->AccumulatedValue).Scale3D.ZW.m128d_f64[1];
  (this->Result).Scale3D.XY.m128d_f64[0] = dVar27;
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->AccumulatedValue).Rotation.XY.m128d_f64[1];
  (this->TargetValue).Rotation.XY.m128d_f64[0] = (this->AccumulatedValue).Rotation.XY.m128d_f64[0];
  (this->TargetValue).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (this->AccumulatedValue).Translation.XY.m128d_f64[0];
  dVar30 = (this->AccumulatedValue).Translation.XY.m128d_f64[1];
  (this->Result).Scale3D.ZW.m128d_f64[0] = dVar28;
  (this->Result).Scale3D.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->AccumulatedValue).Rotation.ZW.m128d_f64[1];
  (this->TargetValue).Rotation.ZW.m128d_f64[0] = (this->AccumulatedValue).Rotation.ZW.m128d_f64[0];
  (this->TargetValue).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (this->AccumulatedValue).Translation.ZW.m128d_f64[0];
  dVar29 = (this->AccumulatedValue).Translation.ZW.m128d_f64[1];
  (this->TargetValue).Translation.XY.m128d_f64[0] = dVar27;
  (this->TargetValue).Translation.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->AccumulatedValue).Scale3D.XY.m128d_f64[0];
  dVar30 = (this->AccumulatedValue).Scale3D.XY.m128d_f64[1];
  (this->TargetValue).Translation.ZW.m128d_f64[0] = dVar28;
  (this->TargetValue).Translation.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->AccumulatedValue).Scale3D.ZW.m128d_f64[0];
  dVar29 = (this->AccumulatedValue).Scale3D.ZW.m128d_f64[1];
  (this->TargetValue).Scale3D.XY.m128d_f64[0] = dVar27;
  (this->TargetValue).Scale3D.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->AccumulatedValue).Rotation.XY.m128d_f64[1];
  (this->InitialValue).Rotation.XY.m128d_f64[0] = (this->AccumulatedValue).Rotation.XY.m128d_f64[0];
  (this->InitialValue).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (this->AccumulatedValue).Translation.XY.m128d_f64[0];
  dVar30 = (this->AccumulatedValue).Translation.XY.m128d_f64[1];
  (this->TargetValue).Scale3D.ZW.m128d_f64[0] = dVar28;
  (this->TargetValue).Scale3D.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->AccumulatedValue).Rotation.ZW.m128d_f64[1];
  (this->InitialValue).Rotation.ZW.m128d_f64[0] = (this->AccumulatedValue).Rotation.ZW.m128d_f64[0];
  (this->InitialValue).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (this->AccumulatedValue).Translation.ZW.m128d_f64[0];
  dVar29 = (this->AccumulatedValue).Translation.ZW.m128d_f64[1];
  (this->InitialValue).Translation.XY.m128d_f64[0] = dVar27;
  (this->InitialValue).Translation.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->AccumulatedValue).Scale3D.XY.m128d_f64[0];
  dVar30 = (this->AccumulatedValue).Scale3D.XY.m128d_f64[1];
  (this->InitialValue).Translation.ZW.m128d_f64[0] = dVar28;
  (this->InitialValue).Translation.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->AccumulatedValue).Scale3D.ZW.m128d_f64[0];
  dVar29 = (this->AccumulatedValue).Scale3D.ZW.m128d_f64[1];
  (this->InitialValue).Scale3D.XY.m128d_f64[0] = dVar27;
  (this->InitialValue).Scale3D.XY.m128d_f64[1] = dVar30;
  (this->InitialValue).Scale3D.ZW.m128d_f64[0] = dVar28;
  (this->InitialValue).Scale3D.ZW.m128d_f64[1] = dVar29;
  return this;
}

// Execute @ 14a19db10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_AccumulateTransformLerp::Execute
          (FRigVMFunction_AccumulateTransformLerp *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->TargetValue,&this->InitialValue,this->Blend,this->bIntegrateDeltaTime
                ,&this->Result,&this->AccumulatedValue,&this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a1b5140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_AccumulateTransformLerp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  TTransform<double> *pTVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  TTransform<double> *pTVar10;
  FRigVMSlice *pFVar11;
  TTransform<double> *pTVar12;
  bool *pbVar13;
  FRigVMExecuteContext *pFVar14;
  
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
    pTVar6 = (TTransform<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
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
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar12 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar13 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar14,pTVar5,pTVar6,fVar1,bVar4,pTVar10,pTVar12,pbVar13);
  return;
}

// StaticExecute @ 14a1d9270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_AccumulateTransformLerp::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          float param_4,bool param_5,TTransform<double> *param_6,TTransform<double> *param_7,
          bool *param_8)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  TQuat<double> local_98;
  TQuat<double> local_78;
  TQuat<double> local_58 [2];
  
  if (*param_8 == false) {
    dVar2 = (param_3->Rotation).XY.m128d_f64[1];
    (param_7->Rotation).XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    (param_7->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_3->Rotation).ZW.m128d_f64[1];
    (param_7->Rotation).ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    (param_7->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_3->Translation).XY.m128d_f64[1];
    (param_7->Translation).XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    (param_7->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_3->Translation).ZW.m128d_f64[1];
    (param_7->Translation).ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    (param_7->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_3->Scale3D).XY.m128d_f64[1];
    (param_7->Scale3D).XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    (param_7->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_3->Scale3D).ZW.m128d_f64[1];
    (param_7->Scale3D).ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    (param_7->Scale3D).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_7->Rotation).XY.m128d_f64[1];
    (param_6->Rotation).XY.m128d_f64[0] = (param_7->Rotation).XY.m128d_f64[0];
    (param_6->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_7->Rotation).ZW.m128d_f64[1];
    (param_6->Rotation).ZW.m128d_f64[0] = (param_7->Rotation).ZW.m128d_f64[0];
    (param_6->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_7->Translation).XY.m128d_f64[1];
    (param_6->Translation).XY.m128d_f64[0] = (param_7->Translation).XY.m128d_f64[0];
    (param_6->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_7->Translation).ZW.m128d_f64[1];
    (param_6->Translation).ZW.m128d_f64[0] = (param_7->Translation).ZW.m128d_f64[0];
    (param_6->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_7->Scale3D).XY.m128d_f64[1];
    (param_6->Scale3D).XY.m128d_f64[0] = (param_7->Scale3D).XY.m128d_f64[0];
    (param_6->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_7->Scale3D).ZW.m128d_f64[1];
    (param_6->Scale3D).ZW.m128d_f64[0] = (param_7->Scale3D).ZW.m128d_f64[0];
    (param_6->Scale3D).ZW.m128d_f64[1] = dVar2;
    *param_8 = true;
  }
  dVar2 = (double)param_4;
  if (param_5) {
    dVar2 = dVar2 * param_1->DeltaTime;
  }
  dVar1 = (param_2->Translation).ZW.m128d_f64[0];
  dVar11 = (param_7->Translation).ZW.m128d_f64[0];
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar4 = (param_7->Translation).XY.m128d_f64[0];
  dVar5 = (param_7->Translation).XY.m128d_f64[1];
  auVar16._0_8_ = ((param_2->Translation).XY.m128d_f64[0] - dVar4) * dVar2 + dVar4;
  auVar16._8_8_ = ((param_2->Translation).XY.m128d_f64[1] - dVar5) * dVar2 + dVar5;
  *(undefined1 (*) [16])(param_7->Translation).XY.m128d_f64 = auVar16;
  (param_7->Translation).ZW.m128d_f64[0] = (dVar1 - dVar11) * dVar2 + dVar11;
  (param_7->Translation).ZW.m128d_f64[1] = 0.0;
  local_98.X = (param_2->Rotation).XY.m128d_f64[0];
  local_98.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_98.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_98.W = (param_2->Rotation).ZW.m128d_f64[1];
  local_78.X = (param_7->Rotation).XY.m128d_f64[0];
  local_78.Y = (param_7->Rotation).XY.m128d_f64[1];
  local_78.Z = (param_7->Rotation).ZW.m128d_f64[0];
  local_78.W = (param_7->Rotation).ZW.m128d_f64[1];
  pTVar8 = UE::Math::TQuat<double>::Slerp_NotNormalized(local_58,&local_78,&local_98,dVar2);
  dVar4 = pTVar8->X;
  dVar5 = pTVar8->Y;
  dVar6 = pTVar8->Z;
  dVar7 = pTVar8->W;
  dVar11 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar15 = dVar5 * dVar5 + dVar7 * dVar7;
  dVar1 = dVar15 + dVar11;
  dVar11 = dVar11 + dVar15;
  auVar12._8_4_ = SUB84(dVar11,0);
  auVar12._0_8_ = dVar1;
  auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar17 = sqrtpd(auVar16,auVar12);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar10 = -(ulonglong)(__real_3e45798ee0000000 <= dVar11);
  uVar19 = (uint)(uVar9 >> 0x20);
  uVar20 = (uint)(uVar10 >> 0x20);
  auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  auVar13._0_8_ = uVar9 & (ulonglong)(auVar12._0_8_ * dVar6);
  uVar3 = uVar10 & (ulonglong)(auVar12._8_8_ * dVar7);
  auVar13._8_4_ = (undefined4)uVar3;
  auVar13._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar18._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar18._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar18._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar18._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  auVar14._0_8_ = (ulonglong)(auVar12._0_8_ * dVar4) & uVar9;
  uVar3 = (ulonglong)(auVar12._8_8_ * dVar5) & uVar10;
  auVar14._8_4_ = (undefined4)uVar3;
  auVar14._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar17._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar17._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar17._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64 = auVar14 | auVar17;
  *(undefined1 (*) [16])(param_7->Rotation).ZW.m128d_f64 = auVar18 | auVar13;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar11 = (param_7->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_7->Scale3D).XY.m128d_f64[1];
  dVar5 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_7->Scale3D).ZW.m128d_f64[0];
  (param_7->Scale3D).XY.m128d_f64[0] =
       ((param_2->Scale3D).XY.m128d_f64[0] - dVar11) * dVar2 + dVar11;
  (param_7->Scale3D).XY.m128d_f64[1] = (dVar1 - dVar4) * dVar2 + dVar4;
  (param_7->Scale3D).ZW.m128d_f64[0] = (dVar5 - dVar6) * dVar2 + dVar6;
  (param_7->Scale3D).ZW.m128d_f64[1] = 0.0;
  dVar2 = (param_7->Rotation).XY.m128d_f64[1];
  (param_6->Rotation).XY.m128d_f64[0] = (param_7->Rotation).XY.m128d_f64[0];
  (param_6->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_7->Rotation).ZW.m128d_f64[1];
  (param_6->Rotation).ZW.m128d_f64[0] = (param_7->Rotation).ZW.m128d_f64[0];
  (param_6->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_7->Translation).XY.m128d_f64[1];
  (param_6->Translation).XY.m128d_f64[0] = (param_7->Translation).XY.m128d_f64[0];
  (param_6->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_7->Translation).ZW.m128d_f64[1];
  (param_6->Translation).ZW.m128d_f64[0] = (param_7->Translation).ZW.m128d_f64[0];
  (param_6->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_7->Scale3D).XY.m128d_f64[1];
  (param_6->Scale3D).XY.m128d_f64[0] = (param_7->Scale3D).XY.m128d_f64[0];
  (param_6->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_7->Scale3D).ZW.m128d_f64[1];
  (param_6->Scale3D).ZW.m128d_f64[0] = (param_7->Scale3D).ZW.m128d_f64[0];
  (param_6->Scale3D).ZW.m128d_f64[1] = dVar2;
  return;
}

