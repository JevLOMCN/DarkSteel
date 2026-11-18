// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a15c9f0

UScriptStruct * __cdecl FRigVMFunction_MathTransformClampSpatially::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformClampSpatially.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformClampSpatially.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformClampSpatially");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformClampSpatially.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformClampSpatially.OuterSingleton
  ;
}

// GetExecuteContextStruct @ 14a15cb80

UScriptStruct * __thiscall
FRigVMFunction_MathTransformClampSpatially::GetExecuteContextStruct
          (FRigVMFunction_MathTransformClampSpatially *this)

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

// Execute @ 14a15ce40

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
FRigVMFunction_MathTransformClampSpatially::Execute
          (FRigVMFunction_MathTransformClampSpatially *this)

{
  double dVar1;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
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
  local_148._s_0.X = (this->Value).Translation.XY.m128d_f64[0];
  local_148._s_0.Y = (this->Value).Translation.XY.m128d_f64[1];
  local_148._s_0.Z = (this->Value).Translation.ZW.m128d_f64[0];
  local_118.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  FRigVMFunction_MathVectorClampSpatially::StaticExecute
            (&local_118,(TVector<double> *)&local_148._s_0,&this->Axis,&this->Type,this->Minimum,
             this->Maximum,&this->Space,this->bDrawDebug,&this->DebugColor,this->DebugThickness,
             (TVector<double> *)&local_130._s_0);
  dVar1 = (this->Value).Rotation.XY.m128d_f64[1];
  (this->Result).Rotation.XY.m128d_f64[0] = (this->Value).Rotation.XY.m128d_f64[0];
  (this->Result).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Value).Rotation.ZW.m128d_f64[1];
  (this->Result).Rotation.ZW.m128d_f64[0] = (this->Value).Rotation.ZW.m128d_f64[0];
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->Value).Translation.XY.m128d_f64[1];
  (this->Result).Translation.XY.m128d_f64[0] = (this->Value).Translation.XY.m128d_f64[0];
  (this->Result).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Value).Translation.ZW.m128d_f64[1];
  (this->Result).Translation.ZW.m128d_f64[0] = (this->Value).Translation.ZW.m128d_f64[0];
  (this->Result).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->Value).Scale3D.XY.m128d_f64[1];
  (this->Result).Scale3D.XY.m128d_f64[0] = (this->Value).Scale3D.XY.m128d_f64[0];
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Value).Scale3D.ZW.m128d_f64[1];
  (this->Result).Scale3D.ZW.m128d_f64[0] = (this->Value).Scale3D.ZW.m128d_f64[0];
  (this->Result).Scale3D.ZW.m128d_f64[1] = dVar1;
  (this->Result).Translation.XY.m128d_f64[0] = local_130._s_0.X;
  (this->Result).Translation.XY.m128d_f64[1] = local_130._s_0.Y;
  (this->Result).Translation.ZW.m128d_f64[0] = local_130._s_0.Z;
  (this->Result).Translation.ZW.m128d_f64[1] = 0.0;
  if (local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data);
  }
  if (local_118.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// FRigVMFunction_MathTransformClampSpatially @ 14a18ee40

FRigVMFunction_MathTransformClampSpatially * __thiscall
FRigVMFunction_MathTransformClampSpatially::FRigVMFunction_MathTransformClampSpatially
          (FRigVMFunction_MathTransformClampSpatially *this)

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
  double dVar22;
  double dVar23;
  double dVar24;
  FLinearColor FVar25;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformClampSpatially__6B_;
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
  *(undefined1 (*) [16])(this->Space).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Space).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Space).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Space).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Space).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Space).Scale3D.ZW.m128d_f64 = auVar14;
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
  *&(this->Result).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Result).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Result).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Result).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Result).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Result).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->Axis = '\x01';
  this->Type = '\0';
  dVar21 = (this->Result).Rotation.XY.m128d_f64[1];
  dVar22 = (this->Result).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Rotation.ZW.m128d_f64[1];
  (this->Value).Rotation.XY.m128d_f64[0] = (this->Result).Rotation.XY.m128d_f64[0];
  (this->Value).Rotation.XY.m128d_f64[1] = dVar21;
  dVar21 = (this->Result).Translation.XY.m128d_f64[0];
  dVar24 = (this->Result).Translation.XY.m128d_f64[1];
  (this->Value).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->Value).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Translation.ZW.m128d_f64[1];
  (this->Value).Translation.XY.m128d_f64[0] = dVar21;
  (this->Value).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Result).Scale3D.XY.m128d_f64[1];
  (this->Value).Translation.ZW.m128d_f64[0] = dVar22;
  (this->Value).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Result).Scale3D.ZW.m128d_f64[1];
  (this->Value).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->Value).Scale3D.XY.m128d_f64[1] = dVar24;
  (this->Value).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->Value).Scale3D.ZW.m128d_f64[1] = dVar23;
  this->Minimum = 0.0;
  this->Maximum = 100.0;
  *&(this->Space).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Space).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Space).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Space).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Space).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Space).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  this->bDrawDebug = false;
  FVar25 = FLinearColor::Red;
  this->DebugThickness = 1.0;
  (this->DebugColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar25.field0_0x0;
  return this;
}

// Execute @ 14a1a2100

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
FRigVMFunction_MathTransformClampSpatially::Execute
          (FRigVMFunction_MathTransformClampSpatially *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Axis,&this->Type,this->Minimum,this->Maximum,
                &this->Space,this->bDrawDebug,&this->DebugColor,this->DebugThickness,&this->Result);
  return;
}

// RigVMExecute @ 14a1cb830

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
FRigVMFunction_MathTransformClampSpatially::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  TTransform<double> *pTVar7;
  TEnumAsByte<EAxis::Type> *pTVar8;
  TEnumAsByte<ERigVMClampSpatialMode::Type> *pTVar9;
  FRigVMMemoryHandle *pFVar10;
  float *pfVar11;
  TTransform<double> *pTVar12;
  uchar *puVar13;
  FLinearColor *pFVar14;
  TTransform<double> *pTVar15;
  FRigVMExecuteContext *pFVar16;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TTransform<double> *)pFVar10->Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  if (iVar4 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TEnumAsByte<EAxis::Type> *)pFVar10[1].Ptr;
  }
  else {
    pTVar8 = (TEnumAsByte<EAxis::Type> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  if (iVar4 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar9 = (TEnumAsByte<ERigVMClampSpatialMode::Type> *)pFVar10[2].Ptr;
  }
  else {
    pTVar9 = (TEnumAsByte<ERigVMClampSpatialMode::Type> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar1 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar2 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar12 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar6 = (bool)*puVar13;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar14 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar3 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pTVar15 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar16,pTVar7,pTVar8,pTVar9,fVar1,fVar2,pTVar12,bVar6,pFVar14,fVar3,pTVar15);
  return;
}

// StaticExecute @ 14a1e36e0

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
FRigVMFunction_MathTransformClampSpatially::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,
          TEnumAsByte<EAxis::Type> *param_3,TEnumAsByte<ERigVMClampSpatialMode::Type> *param_4,
          float param_5,float param_6,TTransform<double> *param_7,bool param_8,FLinearColor *param_9
          ,float param_10,TTransform<double> *param_11)

{
  double dVar1;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_38._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_38._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_38._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  FRigVMFunction_MathVectorClampSpatially::StaticExecute
            (param_1,(TVector<double> *)&local_38._s_0,param_3,param_4,param_5,param_6,param_7,
             param_8,param_9,param_10,(TVector<double> *)&local_20._s_0);
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  (param_11->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (param_11->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  (param_11->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (param_11->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (param_11->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (param_11->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  (param_11->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (param_11->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (param_11->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (param_11->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  (param_11->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (param_11->Scale3D).ZW.m128d_f64[1] = dVar1;
  (param_11->Translation).XY.m128d_f64[0] = local_20._s_0.X;
  (param_11->Translation).XY.m128d_f64[1] = local_20._s_0.Y;
  (param_11->Translation).ZW.m128d_f64[0] = local_20._s_0.Z;
  (param_11->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

