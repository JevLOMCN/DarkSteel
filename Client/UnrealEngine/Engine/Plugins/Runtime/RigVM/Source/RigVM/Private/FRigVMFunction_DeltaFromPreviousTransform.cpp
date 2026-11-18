// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a130880

UScriptStruct * __cdecl FRigVMFunction_DeltaFromPreviousTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform,
                         (UObject *)pUVar1,L"RigVMFunction_DeltaFromPreviousTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a130900

UScriptStruct * __thiscall
FRigVMFunction_DeltaFromPreviousTransform::GetExecuteContextStruct
          (FRigVMFunction_DeltaFromPreviousTransform *this)

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

// Execute @ 14a130bd0

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
FRigVMFunction_DeltaFromPreviousTransform::Execute(FRigVMFunction_DeltaFromPreviousTransform *this)

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
  StaticExecute(&local_118,&this->Value,&this->Delta,&this->PreviousValue,&this->Cache,
                &this->bIsInitialized);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_DeltaFromPreviousTransform @ 14a18d1e0

FRigVMFunction_DeltaFromPreviousTransform * __thiscall
FRigVMFunction_DeltaFromPreviousTransform::FRigVMFunction_DeltaFromPreviousTransform
          (FRigVMFunction_DeltaFromPreviousTransform *this)

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
  
  *(undefined ***)this = &___7FRigVMFunction_DeltaFromPreviousTransform__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Delta).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Delta).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Delta).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Delta).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Delta).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Delta).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousValue).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousValue).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousValue).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousValue).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousValue).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousValue).Scale3D.ZW.m128d_f64 = auVar20;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Cache).Rotation.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar2,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Cache).Rotation.ZW.m128d_f64 = auVar22;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Cache).Translation.XY.m128d_f64 = auVar23;
  auVar24._8_4_ = SUB84((double)fVar2,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Cache).Translation.ZW.m128d_f64 = auVar24;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Cache).Scale3D.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar2,0);
  auVar26._0_8_ = (double)fVar1;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Cache).Scale3D.ZW.m128d_f64 = auVar26;
  *&(this->Cache).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Cache).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Cache).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Cache).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Cache).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Cache).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  this->bIsInitialized = false;
  dVar27 = (this->Cache).Rotation.XY.m128d_f64[1];
  dVar28 = (this->Cache).Rotation.ZW.m128d_f64[0];
  dVar29 = (this->Cache).Rotation.ZW.m128d_f64[1];
  (this->PreviousValue).Rotation.XY.m128d_f64[0] = (this->Cache).Rotation.XY.m128d_f64[0];
  (this->PreviousValue).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (this->Cache).Translation.XY.m128d_f64[0];
  dVar30 = (this->Cache).Translation.XY.m128d_f64[1];
  (this->PreviousValue).Rotation.ZW.m128d_f64[0] = dVar28;
  (this->PreviousValue).Rotation.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->Cache).Translation.ZW.m128d_f64[0];
  dVar29 = (this->Cache).Translation.ZW.m128d_f64[1];
  (this->PreviousValue).Translation.XY.m128d_f64[0] = dVar27;
  (this->PreviousValue).Translation.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->Cache).Scale3D.XY.m128d_f64[0];
  dVar30 = (this->Cache).Scale3D.XY.m128d_f64[1];
  (this->PreviousValue).Translation.ZW.m128d_f64[0] = dVar28;
  (this->PreviousValue).Translation.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->Cache).Scale3D.ZW.m128d_f64[0];
  dVar29 = (this->Cache).Scale3D.ZW.m128d_f64[1];
  (this->PreviousValue).Scale3D.XY.m128d_f64[0] = dVar27;
  (this->PreviousValue).Scale3D.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->Cache).Rotation.XY.m128d_f64[1];
  (this->Delta).Rotation.XY.m128d_f64[0] = (this->Cache).Rotation.XY.m128d_f64[0];
  (this->Delta).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (this->Cache).Translation.XY.m128d_f64[0];
  dVar30 = (this->Cache).Translation.XY.m128d_f64[1];
  (this->PreviousValue).Scale3D.ZW.m128d_f64[0] = dVar28;
  (this->PreviousValue).Scale3D.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->Cache).Rotation.ZW.m128d_f64[1];
  (this->Delta).Rotation.ZW.m128d_f64[0] = (this->Cache).Rotation.ZW.m128d_f64[0];
  (this->Delta).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (this->Cache).Translation.ZW.m128d_f64[0];
  dVar29 = (this->Cache).Translation.ZW.m128d_f64[1];
  (this->Delta).Translation.XY.m128d_f64[0] = dVar27;
  (this->Delta).Translation.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->Cache).Scale3D.XY.m128d_f64[0];
  dVar30 = (this->Cache).Scale3D.XY.m128d_f64[1];
  (this->Delta).Translation.ZW.m128d_f64[0] = dVar28;
  (this->Delta).Translation.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->Cache).Scale3D.ZW.m128d_f64[0];
  dVar29 = (this->Cache).Scale3D.ZW.m128d_f64[1];
  (this->Delta).Scale3D.XY.m128d_f64[0] = dVar27;
  (this->Delta).Scale3D.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->Cache).Rotation.XY.m128d_f64[1];
  (this->Value).Rotation.XY.m128d_f64[0] = (this->Cache).Rotation.XY.m128d_f64[0];
  (this->Value).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (this->Cache).Translation.XY.m128d_f64[0];
  dVar30 = (this->Cache).Translation.XY.m128d_f64[1];
  (this->Delta).Scale3D.ZW.m128d_f64[0] = dVar28;
  (this->Delta).Scale3D.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->Cache).Rotation.ZW.m128d_f64[1];
  (this->Value).Rotation.ZW.m128d_f64[0] = (this->Cache).Rotation.ZW.m128d_f64[0];
  (this->Value).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (this->Cache).Translation.ZW.m128d_f64[0];
  dVar29 = (this->Cache).Translation.ZW.m128d_f64[1];
  (this->Value).Translation.XY.m128d_f64[0] = dVar27;
  (this->Value).Translation.XY.m128d_f64[1] = dVar30;
  dVar27 = (this->Cache).Scale3D.XY.m128d_f64[0];
  dVar30 = (this->Cache).Scale3D.XY.m128d_f64[1];
  (this->Value).Translation.ZW.m128d_f64[0] = dVar28;
  (this->Value).Translation.ZW.m128d_f64[1] = dVar29;
  dVar28 = (this->Cache).Scale3D.ZW.m128d_f64[0];
  dVar29 = (this->Cache).Scale3D.ZW.m128d_f64[1];
  (this->Value).Scale3D.XY.m128d_f64[0] = dVar27;
  (this->Value).Scale3D.XY.m128d_f64[1] = dVar30;
  (this->Value).Scale3D.ZW.m128d_f64[0] = dVar28;
  (this->Value).Scale3D.ZW.m128d_f64[1] = dVar29;
  return this;
}

// Execute @ 14a19e860

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
FRigVMFunction_DeltaFromPreviousTransform::Execute
          (FRigVMFunction_DeltaFromPreviousTransform *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Delta,&this->PreviousValue,&this->Cache,
                &this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a1b8f30

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
FRigVMFunction_DeltaFromPreviousTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TTransform<double> *pTVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigVMSlice *pFVar8;
  TTransform<double> *pTVar9;
  bool *pbVar10;
  FRigVMExecuteContext *pFVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TTransform<double> *)pFVar7->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = (TTransform<double> *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar9 = (TTransform<double> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar10 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,pTVar6,pTVar2,pTVar3,pTVar9,pbVar10);
  return;
}

// StaticExecute @ 14a1db240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FRigVMFunction_DeltaFromPreviousTransform::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,bool *param_6)

{
  double dVar1;
  TTransform<double> *pTVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*param_6 == false) {
    *&(param_3->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_3->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_3->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_3->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_3->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_3->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    dVar1 = (param_2->Rotation).XY.m128d_f64[1];
    (param_5->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (param_5->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
    (param_5->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (param_5->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Translation).XY.m128d_f64[1];
    (param_5->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (param_5->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Translation).ZW.m128d_f64[1];
    (param_5->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (param_5->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
    (param_5->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (param_5->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
    (param_5->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (param_5->Scale3D).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_5->Rotation).XY.m128d_f64[1];
    (param_4->Rotation).XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
    (param_4->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_5->Rotation).ZW.m128d_f64[1];
    (param_4->Rotation).ZW.m128d_f64[0] = (param_5->Rotation).ZW.m128d_f64[0];
    (param_4->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_5->Translation).XY.m128d_f64[1];
    (param_4->Translation).XY.m128d_f64[0] = (param_5->Translation).XY.m128d_f64[0];
    (param_4->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_5->Translation).ZW.m128d_f64[1];
    (param_4->Translation).ZW.m128d_f64[0] = (param_5->Translation).ZW.m128d_f64[0];
    (param_4->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_5->Scale3D).XY.m128d_f64[1];
    (param_4->Scale3D).XY.m128d_f64[0] = (param_5->Scale3D).XY.m128d_f64[0];
    (param_4->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_5->Scale3D).ZW.m128d_f64[1];
    (param_4->Scale3D).ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0];
    (param_4->Scale3D).ZW.m128d_f64[1] = dVar1;
    *param_6 = true;
  }
  dVar1 = (param_5->Rotation).XY.m128d_f64[1];
  (param_4->Rotation).XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
  (param_4->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_5->Rotation).ZW.m128d_f64[1];
  (param_4->Rotation).ZW.m128d_f64[0] = (param_5->Rotation).ZW.m128d_f64[0];
  (param_4->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_5->Translation).XY.m128d_f64[1];
  (param_4->Translation).XY.m128d_f64[0] = (param_5->Translation).XY.m128d_f64[0];
  (param_4->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_5->Translation).ZW.m128d_f64[1];
  (param_4->Translation).ZW.m128d_f64[0] = (param_5->Translation).ZW.m128d_f64[0];
  (param_4->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_5->Scale3D).XY.m128d_f64[1];
  (param_4->Scale3D).XY.m128d_f64[0] = (param_5->Scale3D).XY.m128d_f64[0];
  (param_4->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_5->Scale3D).ZW.m128d_f64[1];
  (param_4->Scale3D).ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0];
  (param_4->Scale3D).ZW.m128d_f64[1] = dVar1;
  pTVar2 = UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_88,param_5);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_3->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_3->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_3->Rotation).ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_3->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_3->Translation).XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_3->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_3->Translation).ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_3->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_3->Scale3D).XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_3->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_3->Scale3D).ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_3->Scale3D).ZW.m128d_f64[1] = dVar1;
  uVar3 = SUB84(param_1->DeltaTime,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)param_1->DeltaTime >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000) {
    dVar1 = (param_2->Rotation).XY.m128d_f64[1];
    (param_5->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (param_5->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
    (param_5->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (param_5->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Translation).XY.m128d_f64[1];
    (param_5->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (param_5->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Translation).ZW.m128d_f64[1];
    (param_5->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (param_5->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
    (param_5->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (param_5->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
    (param_5->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (param_5->Scale3D).ZW.m128d_f64[1] = dVar1;
  }
  return;
}

