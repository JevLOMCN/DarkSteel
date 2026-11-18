// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a499ad0

UScriptStruct * __cdecl FRigUnit_DebugBezier::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugBezier.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugBezier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugBezier,(UObject *)pUVar1,
                         L"RigUnit_DebugBezier");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugBezier.OuterSingleton,&local_18)
    ;
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugBezier.OuterSingleton;
}

// GetExecuteContextStruct @ 14a499b50

UScriptStruct * __thiscall FRigUnit_DebugBezier::GetExecuteContextStruct(FRigUnit_DebugBezier *this)

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

// Execute @ 14a49a110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigUnit_DebugBezier::Execute(FRigUnit_DebugBezier *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FRigVMExecuteContext local_1a8;
  TTransform<double> local_98;
  
  local_1a8.FramesPerSecond = __real_3f91111111111111;
  local_1a8.DeltaTime = 0.0;
  local_1a8.AbsoluteTime = 0.0;
  local_1a8.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_1a8.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_1a8.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_1a8.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_1a8._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_1a8.EventName.ComparisonIndex.Value = 0;
  local_1a8.EventName.Number = 0;
  local_1a8.FunctionName.ComparisonIndex.Value = 0;
  local_1a8.FunctionName.Number = 0;
  local_1a8.InstructionIndex = 0;
  local_1a8.NumExecutions = 0;
  local_1a8.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_1a8.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_1a8.Traits.ArrayNum = 0;
  local_1a8.Traits.ArrayMax = 0;
  local_1a8.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_1a8.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_1a8.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  local_1a8.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_1a8.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_1a8.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_1a8.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_1a8.RuntimeSettings.MaximumArraySize = 0x800;
  local_1a8.RuntimeSettings._4_4_ = 0;
  local_1a8.OwningObject = (UObject *)0x0;
  local_1a8.OwningActor = (AActor *)0x0;
  local_1a8.World = (UWorld *)0x0;
  local_1a8.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  local_98.Rotation.XY.m128d_f64[0] = (this->WorldOffset).Rotation.XY.m128d_f64[0];
  local_98.Rotation.XY.m128d_f64[1] = (this->WorldOffset).Rotation.XY.m128d_f64[1];
  local_98.Rotation.ZW.m128d_f64[0] = (this->WorldOffset).Rotation.ZW.m128d_f64[0];
  local_98.Rotation.ZW.m128d_f64[1] = (this->WorldOffset).Rotation.ZW.m128d_f64[1];
  iVar4 = this->Detail;
  fVar1 = this->Thickness;
  fVar2 = this->MaximumU;
  fVar3 = this->MinimumU;
  local_98.Translation.XY.m128d_f64[0] = (this->WorldOffset).Translation.XY.m128d_f64[0];
  local_98.Translation.XY.m128d_f64[1] = (this->WorldOffset).Translation.XY.m128d_f64[1];
  local_98.Translation.ZW.m128d_f64[0] = (this->WorldOffset).Translation.ZW.m128d_f64[0];
  local_98.Translation.ZW.m128d_f64[1] = (this->WorldOffset).Translation.ZW.m128d_f64[1];
  local_98.Scale3D.XY.m128d_f64[0] = (this->WorldOffset).Scale3D.XY.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] = (this->WorldOffset).Scale3D.XY.m128d_f64[1];
  local_98.Scale3D.ZW.m128d_f64[0] = (this->WorldOffset).Scale3D.ZW.m128d_f64[0];
  local_98.Scale3D.ZW.m128d_f64[1] = (this->WorldOffset).Scale3D.ZW.m128d_f64[1];
  local_1a8.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  ::FName::IsWithinBounds((FNameEntryId)(this->Space).ComparisonIndex.Value);
  FRigUnit_DebugBezierItemSpace::DrawBezier
            (&local_1a8,&local_98,&this->Bezier,fVar3,fVar2,&this->Color,fVar1,iVar4);
  if (local_1a8.AdditionalTraitMemoryHandles.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AdditionalTraitMemoryHandles.AllocatorInstance.Data);
  }
  if (local_1a8.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// GetUpgradeInfo @ 14a49a780

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DebugBezier::GetUpgradeInfo
          (FRigUnit_DebugBezier *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_DebugBezier @ 14a50db60

FRigUnit_DebugBezier * __thiscall
FRigUnit_DebugBezier::FRigUnit_DebugBezier(FRigUnit_DebugBezier *this)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  FLinearColor FVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  this->field_0x10 = 1;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined4 *)&this->field_0x14 = 0xbf800000;
  *(undefined ***)this = &___7FRigUnit_DebugBezier__6B_;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Bezier).D.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).D.field0_0x0._s_0.Y = (double)uVar13;
  (this->Bezier).D.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  dVar10 = (this->Bezier).D.field0_0x0._s_0.X;
  dVar11 = (this->Bezier).D.field0_0x0._s_0.Y;
  dVar1 = (this->Bezier).D.field0_0x0._s_0.Z;
  (this->Bezier).C.field0_0x0._s_0.X = dVar10;
  (this->Bezier).C.field0_0x0._s_0.Y = dVar11;
  (this->Bezier).B.field0_0x0._s_0.X = dVar10;
  (this->Bezier).B.field0_0x0._s_0.Y = dVar11;
  (this->Bezier).A.field0_0x0._s_0.X = dVar10;
  (this->Bezier).A.field0_0x0._s_0.Y = dVar11;
  (this->Bezier).C.field0_0x0._s_0.Z = dVar1;
  (this->Bezier).B.field0_0x0._s_0.Z = dVar1;
  (this->Bezier).A.field0_0x0._s_0.Z = dVar1;
  (this->Space).ComparisonIndex = 0;
  (this->Space).Number = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.ZW.m128d_f64 = auVar9;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).A.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).A.field0_0x0._s_0.Y = (double)uVar14;
  local_50 = (undefined4)uVar13;
  uStack_4c = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_48 = (undefined4)uVar14;
  uStack_44 = (undefined4)((ulonglong)uVar14 >> 0x20);
  *(undefined4 *)((longlong)&(this->Bezier).A.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).A.field0_0x0 + 0x14) = uVar16;
  *(undefined4 *)&(this->Bezier).B.field0_0x0 = local_50;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 4) = uStack_4c;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 8) = uStack_48;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0xc) = uStack_44;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0x14) = uVar16;
  (this->Bezier).C.field0_0x0._s_0.X = (double)uVar13;
  (this->Bezier).C.field0_0x0._s_0.Y = (double)uVar14;
  *(undefined4 *)((longlong)&(this->Bezier).C.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).C.field0_0x0 + 0x14) = uVar16;
  *(undefined4 *)&(this->Bezier).D.field0_0x0 = local_50;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 4) = uStack_4c;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 8) = uStack_48;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0xc) = uStack_44;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0x14) = uVar16;
  FVar12 = FLinearColor::Red;
  this->MinimumU = 0.0;
  this->Thickness = 0.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar12.field0_0x0;
  this->MaximumU = 1.0;
  this->Detail = 0x10;
  *&(this->WorldOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->WorldOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->WorldOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->WorldOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->WorldOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->WorldOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->bEnabled = true;
  return this;
}

// Execute @ 14a5264f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugBezier::Execute(FRigUnit_DebugBezier *this,FRigVMExecuteContext *param_1)

{
  FRigElementKey local_18 [2];
  
  local_18[0].Name = this->Space;
  local_18[0].Type = Bone;
  FRigUnit_DebugBezierItemSpace::StaticExecute
            (param_1,&this->Bezier,this->MinimumU,this->MaximumU,&this->Color,this->Thickness,
             this->Detail,local_18,&this->WorldOffset,this->bEnabled,
             (FRigVMDebugDrawSettings *)&this->field_0x10);
  return;
}

// RigVMExecute @ 14a53a7c0

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
FRigUnit_DebugBezier::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FRigVMFourPointBezier *pFVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  FLinearColor *pFVar10;
  int *piVar11;
  FName *pFVar12;
  TTransform<double> *pTVar13;
  uchar *puVar14;
  FRigVMDebugDrawSettings *pFVar15;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigVMFourPointBezier *)pFVar9->Ptr;
  }
  else {
    pFVar7 = (FRigVMFourPointBezier *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar9[1].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  fVar1 = *pfVar8;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar9[2].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  fVar2 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar10 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar3 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  iVar4 = *piVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar13 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar6 = (bool)*puVar14;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar15 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar16,pFVar7,fVar1,fVar2,pFVar10,fVar3,iVar4,pFVar12,pTVar13,bVar6,pFVar15);
  return;
}

// StaticExecute @ 14a56a4c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugBezier::StaticExecute
          (FRigVMExecuteContext *param_1,FRigVMFourPointBezier *param_2,float param_3,float param_4,
          FLinearColor *param_5,float param_6,int param_7,FName *param_8,TTransform<double> *param_9
          ,bool param_10,FRigVMDebugDrawSettings *param_11)

{
  FRigElementKey local_18 [2];
  
  local_18[0].Type = Bone;
  local_18[0].Name = *param_8;
  FRigUnit_DebugBezierItemSpace::StaticExecute
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,local_18,param_9,param_10,
             param_11);
  return;
}

