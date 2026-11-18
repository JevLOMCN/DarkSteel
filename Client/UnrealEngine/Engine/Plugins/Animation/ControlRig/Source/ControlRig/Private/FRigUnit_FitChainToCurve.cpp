// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a49adf0

UScriptStruct * __cdecl FRigUnit_FitChainToCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve,(UObject *)pUVar1,
                         L"RigUnit_FitChainToCurve");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurve.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurve.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49ae70

UScriptStruct * __thiscall
FRigUnit_FitChainToCurve::GetExecuteContextStruct(FRigUnit_FitChainToCurve *this)

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

// Execute @ 14a49b280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FitChainToCurve::Execute(FRigUnit_FitChainToCurve *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_308 [32];
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_308;
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
  local_278.DataPtr = (FRigUnit_FitChainToCurve_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar1 = (this->Rotations).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&this->StartBone,&this->EndBone,&this->Bezier
                ,this->Alignment,this->Minimum,this->Maximum,this->SamplingPrecision,
                &this->PrimaryAxis,&this->SecondaryAxis,&this->PoleVectorPosition,&local_278,
                this->RotationEaseType,this->Weight,this->bPropagateToChildren,&this->DebugSettings,
                &this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4a33c0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_FitChainToCurve::GetUpgradeInfo
          (FRigUnit_FitChainToCurve *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_FitChainToCurve @ 14a50f480

FRigUnit_FitChainToCurve * __thiscall
FRigUnit_FitChainToCurve::FRigUnit_FitChainToCurve(FRigUnit_FitChainToCurve *this)

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
  __m128d _Var17;
  __m128d _Var18;
  __m128d _Var19;
  __m128d _Var20;
  __m128d _Var21;
  __m128d _Var22;
  uint local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  (this->StartBone).ComparisonIndex = 0;
  (this->StartBone).Number = 0;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  (this->EndBone).ComparisonIndex = 0;
  (this->EndBone).Number = 0;
  *(undefined ***)this = &___7FRigUnit_FitChainToCurve__6B_;
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
  (this->Rotations).ArrayNum = 0;
  (this->Rotations).ArrayMax = 0;
  (this->Rotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = auVar9;
  (this->DebugSettings).bEnabled = false;
  (this->DebugSettings).Scale = 1.0;
  (this->DebugSettings).CurveColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
  (this->DebugSettings).SegmentsColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
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
  (this->WorkData).ItemPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ItemPositions.ArrayNum = 0;
  (this->WorkData).ItemPositions.ArrayMax = 0;
  (this->WorkData).ItemSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ItemSegments.ArrayNum = 0;
  (this->WorkData).ItemSegments.ArrayMax = 0;
  (this->WorkData).CurvePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CurvePositions.ArrayNum = 0;
  (this->WorkData).CurvePositions.ArrayMax = 0;
  (this->WorkData).CurveSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CurveSegments.ArrayNum = 0;
  (this->WorkData).CurveSegments.ArrayMax = 0;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  (this->WorkData).ItemRotationA.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ItemRotationA.ArrayNum = 0;
  (this->WorkData).ItemRotationA.ArrayMax = 0;
  (this->WorkData).ItemRotationB.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ItemRotationB.ArrayNum = 0;
  (this->WorkData).ItemRotationB.ArrayMax = 0;
  (this->WorkData).ItemRotationT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ItemRotationT.ArrayNum = 0;
  (this->WorkData).ItemRotationT.ArrayMax = 0;
  (this->WorkData).ItemLocalTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ItemLocalTransforms.ArrayNum = 0;
  (this->WorkData).ItemLocalTransforms.ArrayMax = 0;
  (this->WorkData).ChainLength = 0.0;
  (this->EndBone).ComparisonIndex = 0;
  (this->EndBone).Number = 0;
  (this->StartBone).ComparisonIndex = 0;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartBone).Number = 0;
  (this->Bezier).A.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).A.field0_0x0._s_0.Y = (double)uVar14;
  this->Alignment = Stretched;
  this->Minimum = 0.0;
  this->Maximum = 1.0;
  this->SamplingPrecision = 0xc;
  uStack_a0._0_4_ = (undefined4)uVar13;
  uStack_a0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_98._0_4_ = (undefined4)uVar14;
  uStack_98._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
  *(undefined4 *)((longlong)&(this->Bezier).A.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).A.field0_0x0 + 0x14) = uVar16;
  *(undefined4 *)&(this->Bezier).B.field0_0x0 = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 4) = uStack_a0._4_4_;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 8) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0xc) = uStack_98._4_4_;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0x14) = uVar16;
  (this->Bezier).C.field0_0x0._s_0.X = (double)uVar13;
  (this->Bezier).C.field0_0x0._s_0.Y = (double)uVar14;
  *(undefined4 *)((longlong)&(this->Bezier).C.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).C.field0_0x0 + 0x14) = uVar16;
  *(undefined4 *)&(this->Bezier).D.field0_0x0 = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 4) = uStack_a0._4_4_;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 8) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0xc) = uStack_98._4_4_;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0x14) = uVar16;
  (this->PrimaryAxis).field0_0x0._s_0.X = 1.0;
  (this->PrimaryAxis).field0_0x0._s_0.Y = 0.0;
  (this->PrimaryAxis).field0_0x0._s_0.Z = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.X = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.Y = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.Z = 0.0;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8 = local_b8 & 0xffffff00;
  (this->PoleVectorPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PoleVectorPosition).field0_0x0._s_0.Y = (double)uVar13;
  (this->PoleVectorPosition).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  this->RotationEaseType = Linear;
  this->Weight = 1.0;
  this->bPropagateToChildren = true;
  _Var22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var21 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var20 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var19 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var18 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var17 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  FVar12 = FLinearColor::Red;
  uStack_b0 = FLinearColor::Yellow.field0_0x0._0_8_;
  uStack_a8 = FLinearColor::Yellow.field0_0x0._8_8_;
  uStack_a0 = FLinearColor::Red.field0_0x0._0_8_;
  (this->DebugSettings).bEnabled = (bool)(char)local_b8;
  *(int3 *)&(this->DebugSettings).field_0x1 = (int3)(local_b8 >> 8);
  (this->DebugSettings).Scale = 1.0;
  *(undefined8 *)&(this->DebugSettings).CurveColor.field0_0x0 = uStack_b0;
  uStack_98 = FVar12.field0_0x0._8_8_;
  *(undefined8 *)((longlong)&(this->DebugSettings).CurveColor.field0_0x0 + 8) = uStack_a8;
  *(undefined8 *)&(this->DebugSettings).SegmentsColor.field0_0x0 = uStack_a0;
  *(undefined8 *)((longlong)&(this->DebugSettings).SegmentsColor.field0_0x0 + 8) = uStack_98;
  (this->DebugSettings)._padding_ = CONCAT44(uVar16,uVar15);
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var17.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var18.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var19.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var20.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var21.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var22.m128d_f64;
  return this;
}

// Execute @ 14a5279c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FitChainToCurve::Execute(FRigUnit_FitChainToCurve *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> local_18;
  
  local_18.DataPtr = (FRigUnit_FitChainToCurve_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar1 = (this->Rotations).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&this->StartBone,&this->EndBone,&this->Bezier,this->Alignment,this->Minimum,
                this->Maximum,this->SamplingPrecision,&this->PrimaryAxis,&this->SecondaryAxis,
                &this->PoleVectorPosition,&local_18,this->RotationEaseType,this->Weight,
                this->bPropagateToChildren,&this->DebugSettings,&this->WorkData);
  return;
}

// RigVMExecute @ 14a53f300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FitChainToCurve::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EControlRigCurveAlignment EVar4;
  ERigVMAnimEasingType EVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FName *pFVar11;
  FRigVMFourPointBezier *pFVar12;
  FRigVMMemoryHandle *pFVar13;
  EControlRigCurveAlignment *pEVar14;
  float *pfVar15;
  int *piVar16;
  TVector<double> *pTVar17;
  TVector<double> *pTVar18;
  TVector<double> *pTVar19;
  uchar *puVar20;
  ERigVMAnimEasingType *pEVar21;
  uchar *puVar22;
  FRigUnit_FitChainToCurve_DebugSettings *pFVar23;
  FRigVMSlice *pFVar24;
  FRigUnit_FitChainToCurve_WorkData *pFVar25;
  FControlRigExecuteContext *pFVar26;
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> local_80 [4];
  
  iVar6 = param_2->ArrayNum;
  if (iVar6 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FName *)pFVar13->Ptr;
  }
  else {
    pFVar10 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar13->PropertyPath,pFVar13->Ptr,pFVar13->Property);
  }
  if (iVar6 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar11 = (FName *)pFVar13[1].Ptr;
  }
  else {
    pFVar11 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar13[1].PropertyPath,pFVar13[1].Ptr,pFVar13[1].Property);
  }
  if (iVar6 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar12 = (FRigVMFourPointBezier *)pFVar13[2].Ptr;
  }
  else {
    pFVar12 = (FRigVMFourPointBezier *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar13[2].PropertyPath,pFVar13[2].Ptr,pFVar13[2].Property);
  }
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  EVar4 = *pEVar14;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar1 = *pfVar15;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar2 = *pfVar15;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  piVar16 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  iVar6 = *piVar16;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar17 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pTVar18 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pTVar19 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  puVar20 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pEVar21 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  EVar5 = *pEVar21;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar3 = *pfVar15;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  puVar22 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  bVar8 = (bool)*puVar22;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xe);
  pFVar23 = (FRigUnit_FitChainToCurve_DebugSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xf);
  pFVar24 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar25 = (FRigUnit_FitChainToCurve_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar13,false,pFVar24->Offset + pFVar24->Index);
  local_80[0].DataPtr = *(FRigUnit_FitChainToCurve_Rotation **)puVar20;
  local_80[0].ArrayNum = *(int *)(puVar20 + 8);
  if (local_80[0].ArrayNum < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar26 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar26,pFVar10,pFVar11,pFVar12,EVar4,fVar1,fVar2,iVar6,pTVar17,pTVar18,pTVar19,
                local_80,EVar5,fVar3,bVar8,pFVar23,pFVar25);
  return;
}

// StaticExecute @ 14a5718f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FitChainToCurve::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,
          FRigVMFourPointBezier *param_4,EControlRigCurveAlignment param_5,float param_6,
          float param_7,int param_8,TVector<double> *param_9,TVector<double> *param_10,
          TVector<double> *param_11,
          TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> *param_12,
          ERigVMAnimEasingType param_13,float param_14,bool param_15,
          FRigUnit_FitChainToCurve_DebugSettings *param_16,
          FRigUnit_FitChainToCurve_WorkData *param_17)

{
  code *pcVar1;
  bool bVar2;
  FRigElementKeyCollection *pFVar3;
  int iVar4;
  FRigElementKey *pFVar5;
  FRigElementKey local_68;
  FRigElementKey local_5c;
  TArrayView<FRigElementKey_const_,int> local_50;
  FRigElementKeyCollection local_40;
  FRigElementKeyCollection local_30;
  
  pFVar5 = (FRigElementKey *)0x0;
  iVar4 = 0;
  if ((param_17->CachedItems).ArrayNum == 0) {
    local_68.Name = *param_3;
    local_5c.Name = *param_2;
    local_68.Type = Bone;
    local_5c.Type = Bone;
    pFVar3 = FRigElementKeyCollection::MakeFromChain
                       (&local_40,param_1->Hierarchy,&local_5c,&local_68,false);
    iVar4 = 0;
    if (&local_30 != pFVar3) {
      pFVar5 = (FRigElementKey *)(pFVar3->Keys).AllocatorInstance.Data;
      (pFVar3->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = (pFVar3->Keys).ArrayNum;
      (pFVar3->Keys).ArrayNum = 0;
      (pFVar3->Keys).ArrayMax = 0;
    }
    if (local_40.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Keys.AllocatorInstance.Data);
    }
  }
  local_50.DataPtr = pFVar5;
  if ((iVar4 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_50.ArrayNum = iVar4;
  FRigUnit_FitChainToCurveItemArray::StaticExecute
            (param_1,&local_50,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12,param_13,param_14,param_15,param_16,param_17);
  if (pFVar5 != (FRigElementKey *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

