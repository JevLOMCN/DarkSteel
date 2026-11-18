// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 8

// StaticStruct @ 14debf690

UScriptStruct * __cdecl FRigUnit_FitChainToSplineCurveItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray,
                         (UObject *)pUVar1,L"RigUnit_FitChainToSplineCurveItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray.OuterSingleton;
}

// <lambda_1> @ 14dec15a0

<lambda_1> * __thiscall
`FRigUnit_FitChainToSplineCurveItemArray::StaticExecute'::__l44::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->RotationRatios).ArrayNum;
  _Src = (param_1->RotationRatios).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
  return this;
}

// FRigUnit_FitChainToSplineCurveItemArray @ 14dec22e0

FRigUnit_FitChainToSplineCurveItemArray * __thiscall
FRigUnit_FitChainToSplineCurveItemArray::FRigUnit_FitChainToSplineCurveItemArray
          (FRigUnit_FitChainToSplineCurveItemArray *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FLinearColor FVar9;
  undefined8 uVar10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  __m128d _Var15;
  __m128d _Var16;
  uint local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  (this->Rotations).ArrayNum = 0;
  (this->Rotations).ArrayMax = 0;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spline).SplineData.Object = (FControlRigSplineImpl *)0x0;
  (this->Spline).SplineData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Rotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)this = &___7FRigUnit_FitChainToSplineCurveItemArray__6B_;
  (this->Spline)._padding_ = (longlong)&___7FControlRigSpline__6B_;
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
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
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
  this->Alignment = Stretched;
  this->Minimum = 0.0;
  this->Maximum = 1.0;
  this->SamplingPrecision = 0xc;
  (this->PrimaryAxis).field0_0x0._s_0.X = 1.0;
  (this->PrimaryAxis).field0_0x0._s_0.Y = 0.0;
  (this->PrimaryAxis).field0_0x0._s_0.Z = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.X = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.Y = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.Z = 0.0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8 = local_b8 & 0xffffff00;
  (this->PoleVectorPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PoleVectorPosition).field0_0x0._s_0.Y = (double)uVar10;
  (this->PoleVectorPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->RotationEaseType = Linear;
  this->Weight = 1.0;
  this->bPropagateToChildren = true;
  _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var15 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var14 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var13 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var12 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var11 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  FVar9 = FLinearColor::Red;
  uStack_b0 = FLinearColor::Yellow.field0_0x0._0_8_;
  uStack_a8 = FLinearColor::Yellow.field0_0x0._8_8_;
  uStack_a0 = FLinearColor::Red.field0_0x0._0_8_;
  (this->DebugSettings).bEnabled = (bool)(char)local_b8;
  *(int3 *)&(this->DebugSettings).field_0x1 = (int3)(local_b8 >> 8);
  (this->DebugSettings).Scale = 1.0;
  *(undefined8 *)&(this->DebugSettings).CurveColor.field0_0x0 = uStack_b0;
  uStack_98 = FVar9.field0_0x0._8_8_;
  *(undefined8 *)((longlong)&(this->DebugSettings).CurveColor.field0_0x0 + 8) = uStack_a8;
  *(undefined8 *)&(this->DebugSettings).SegmentsColor.field0_0x0 = uStack_a0;
  *(undefined8 *)((longlong)&(this->DebugSettings).SegmentsColor.field0_0x0 + 8) = uStack_98;
  (this->DebugSettings)._padding_ = lStack_90;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var11.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var12.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var13.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var14.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var15.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var16.m128d_f64;
  return this;
}

// Execute @ 14dec3b10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FitChainToSplineCurveItemArray::Execute
          (FRigUnit_FitChainToSplineCurveItemArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> local_28;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = (FRigUnit_FitChainToCurve_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar2 = (this->Rotations).ArrayNum;
  local_18.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.ArrayNum = iVar2;
  StaticExecute(param_1,&local_18,&this->Spline,this->Alignment,this->Minimum,this->Maximum,
                this->SamplingPrecision,&this->PrimaryAxis,&this->SecondaryAxis,
                &this->PoleVectorPosition,&local_28,this->RotationEaseType,this->Weight,
                this->bPropagateToChildren,&this->DebugSettings,&this->WorkData);
  return;
}

// Execute @ 14dec3c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FitChainToSplineCurveItemArray::Execute(FRigUnit_FitChainToSplineCurveItemArray *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_308 [32];
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> local_288;
  TArrayView<FRigElementKey_const_,int> local_278;
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
  local_278.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_288.DataPtr = (FRigUnit_FitChainToCurve_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar2 = (this->Rotations).ArrayNum;
  local_278.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_288.ArrayNum = iVar2;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Spline,this->Alignment,
                this->Minimum,this->Maximum,this->SamplingPrecision,&this->PrimaryAxis,
                &this->SecondaryAxis,&this->PoleVectorPosition,&local_288,this->RotationEaseType,
                this->Weight,this->bPropagateToChildren,&this->DebugSettings,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14dec4c40

UScriptStruct * __thiscall
FRigUnit_FitChainToSplineCurveItemArray::GetExecuteContextStruct
          (FRigUnit_FitChainToSplineCurveItemArray *this)

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

// RigVMExecute @ 14dec67a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FitChainToSplineCurveItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EControlRigCurveAlignment EVar4;
  ERigVMAnimEasingType EVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  uchar *puVar11;
  FControlRigSpline *pFVar12;
  EControlRigCurveAlignment *pEVar13;
  FRigVMMemoryHandle *pFVar14;
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
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> local_88;
  TArrayView<FRigElementKey_const_,int> local_78 [4];
  
  iVar6 = param_2->ArrayNum;
  if (iVar6 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar14 = param_2->DataPtr;
  if (pFVar14->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar11 = pFVar14->Ptr;
  }
  else {
    puVar11 = FRigVMPropertyPath::GetData_Internal
                        (pFVar14->PropertyPath,pFVar14->Ptr,pFVar14->Property);
  }
  if (iVar6 < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar14 = param_2->DataPtr;
  if (pFVar14[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar12 = (FControlRigSpline *)pFVar14[1].Ptr;
  }
  else {
    pFVar12 = (FControlRigSpline *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar14[1].PropertyPath,pFVar14[1].Ptr,pFVar14[1].Property);
  }
  if (iVar6 < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar14 = param_2->DataPtr;
  if (pFVar14[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar13 = pFVar14[2].Ptr;
  }
  else {
    pEVar13 = FRigVMPropertyPath::GetData_Internal
                        (pFVar14[2].PropertyPath,pFVar14[2].Ptr,pFVar14[2].Property);
  }
  EVar4 = *pEVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar1 = *pfVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar2 = *pfVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  piVar16 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  iVar6 = *piVar16;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar17 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar18 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pTVar19 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  puVar20 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pEVar21 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  EVar5 = *pEVar21;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar3 = *pfVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  puVar22 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  bVar9 = (bool)*puVar22;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pFVar23 = (FRigUnit_FitChainToCurve_DebugSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xe);
  pFVar24 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar25 = (FRigUnit_FitChainToCurve_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar14,false,pFVar24->Offset + pFVar24->Index);
  local_88.DataPtr = *(FRigUnit_FitChainToCurve_Rotation **)puVar20;
  local_88.ArrayNum = *(int *)(puVar20 + 8);
  if (local_88.ArrayNum < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_78[0].DataPtr = *(FRigElementKey **)puVar11;
  iVar7 = *(int *)(puVar11 + 8);
  if (iVar7 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_78[0].ArrayNum = iVar7;
  pFVar26 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar26,local_78,pFVar12,EVar4,fVar1,fVar2,iVar6,pTVar17,pTVar18,pTVar19,&local_88,
                EVar5,fVar3,bVar9,pFVar23,pFVar25);
  return;
}

// StaticExecute @ 14decb4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_FitChainToSplineCurveItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          FControlRigSpline *param_3,EControlRigCurveAlignment param_4,float param_5,float param_6,
          int param_7,TVector<double> *param_8,TVector<double> *param_9,TVector<double> *param_10,
          TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> *param_11,
          ERigVMAnimEasingType param_12,float param_13,bool param_14,
          FRigUnit_FitChainToCurve_DebugSettings *param_15,
          FRigUnit_FitChainToCurve_WorkData *param_16)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FLinearColor *pFVar3;
  FRigElementKey *pFVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort uVar10;
  FCachedRigElement *pFVar11;
  FRigVMDrawInterface *pFVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  ForAnyElementType FVar24;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar25;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar26;
  FControlRigSpline *this;
  FControlRigExecuteContext *pFVar27;
  FRigUnit_FitChainToCurve_DebugSettings *pFVar28;
  __m128d _Var29;
  __m128d _Var30;
  __m128d _Var31;
  __m128d _Var32;
  bool bVar33;
  bool bVar34;
  uint uVar35;
  int iVar38;
  int iVar39;
  FControlRigSplineImpl *pFVar40;
  <lambda_1> *p<Var41;
  FScriptContainerElement *pFVar42;
  TVector<double> *pTVar43;
  TQuat<double> *pTVar44;
  longlong *plVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  FRigElementKey *pFVar49;
  FRigUnit_FitChainToCurve_Rotation *pFVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  double *pdVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  FRigUnit_FitChainToCurve_Rotation *pFVar57;
  FScriptContainerElement *pFVar58;
  uint uVar59;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar60;
  uint uVar61;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar62;
  uint uVar63;
  longlong lVar64;
  ulonglong uVar65;
  longlong lVar66;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar67;
  ulonglong uVar68;
  longlong lVar69;
  URigHierarchy *pUVar70;
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> *pTVar71;
  ulonglong uVar72;
  float fVar73;
  undefined4 uVar74;
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar77 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 auVar78 [16];
  undefined4 uVar111;
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
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
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
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined4 uVar147;
  undefined4 uVar150;
  undefined4 uVar151;
  undefined4 uVar152;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  float fVar153;
  undefined1 auVar154 [16];
  TTransform<double> *pTVar155;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar163;
  double dVar164;
  double dVar165;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  double dVar170;
  double dVar171;
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  uint uVar180;
  uint uVar181;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  uint uVar182;
  double dVar183;
  undefined1 auVar184 [16];
  double dVar186;
  undefined1 auVar185 [16];
  float fVar187;
  undefined4 uVar188;
  undefined4 uVar189;
  undefined4 uVar190;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined8 uVar194;
  undefined1 auVar193 [16];
  undefined4 uVar195;
  undefined4 uVar196;
  double dVar197;
  undefined1 auVar198 [16];
  double dVar201;
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auStackY_b38 [32];
  TLess<void> local_ae0 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_ad8;
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> *local_ad0;
  ForAnyElementType local_ac8;
  uint local_ac0;
  uint local_abc;
  ForAnyElementType local_ab8;
  undefined8 local_ab0;
  EControlRigCurveAlignment local_aa8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_aa0;
  longlong local_a98;
  longlong local_a90;
  longlong local_a88;
  undefined8 local_a80;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *local_a78;
  URigHierarchy *local_a70;
  uint local_a68;
  float local_a64;
  longlong local_a60;
  ForAnyElementType local_a58;
  undefined8 local_a50;
  TTransform<double> *local_a48;
  double dStack_a40;
  undefined8 local_a38;
  TArray<float,TSizedDefaultAllocator<32>_> *local_a30;
  TTransform<double> *local_a28;
  double local_a18 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_a08;
  FRigElementKey local_a00;
  FControlRigSpline *local_9f0;
  FControlRigExecuteContext *local_9e8;
  FRigUnit_FitChainToCurve_DebugSettings *local_9e0;
  double local_9d8;
  FCachedRigElement local_9d0;
  double local_9a8 [2];
  double local_998 [2];
  TVector<double>_u_0 local_988;
  double local_970;
  double dStack_968;
  undefined8 local_960;
  double local_948;
  FRigElementKey local_938;
  FRigElementKey local_928;
  <lambda_1> local_918;
  TArray<float,TSizedDefaultAllocator<32>_> local_908;
  FRigElementKey local_8f8;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  double local_8c0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_8b8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_8a8;
  TQuat<double> local_898;
  double local_878;
  double local_870;
  double local_868;
  double local_860;
  double local_858;
  double local_850;
  double local_848;
  TVector<double>_u_0 local_840;
  TVector<double>_u_0 local_828;
  double local_810;
  double dStack_808;
  double local_800;
  undefined1 local_7f8 [16];
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double local_7d0;
  undefined1 local_7c8 [16];
  undefined1 local_7b8 [16];
  undefined1 local_7a8 [16];
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  undefined1 local_778 [16];
  undefined1 local_768 [32];
  double local_748 [2];
  double local_738 [2];
  double local_728 [2];
  double local_718 [2];
  undefined1 local_708 [16];
  double local_6f8;
  double local_6f0;
  double dStack_6e8;
  double local_6e0;
  TTransform<double> local_6d8;
  TTransform<double> local_678;
  TTransform<double> local_618;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  TVector<double> local_588;
  TVector<double> local_570;
  TQuat<double> local_558;
  TQuat<double> local_538;
  TTransform<double> local_518;
  TTransform<double> local_4b8;
  FRigVMDrawInstruction local_458;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  uint uVar36;
  uint uVar37;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b38;
  local_a70 = param_1->Hierarchy;
  local_9e0 = param_15;
  local_ad0 = param_11;
  if ((local_a70 != (URigHierarchy *)0x0) &&
     ((param_3->SplineData).Object != (FControlRigSplineImpl *)0x0)) {
    local_aa8 = param_4;
    local_9f0 = param_3;
    local_9e8 = param_1;
    pFVar40 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
    uVar47 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar153 = __real_3f800000;
    fVar73 = __real_322bcc77;
    if (pFVar40->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      }
    }
    else {
      local_a30 = &param_16->ItemSegments;
      pTVar1 = &param_16->ItemPositions;
      pTVar60 = &param_16->CachedItems;
      local_aa0 = &param_16->CurvePositions;
      local_a08 = &param_16->ItemLocalTransforms;
      uVar52 = 0;
      iVar39 = 0;
      local_a88 = 4;
      uVar35 = 0;
      uVar36 = 0;
      uVar48 = 0;
      uVar37 = 0;
      local_ad8 = pTVar1;
      local_a78 = pTVar60;
      if (((param_16->CachedItems).ArrayNum == 0) && (1 < param_2->ArrayNum)) {
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Reset(local_aa0,0);
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Reset(pTVar1,0);
        TArray<float,TSizedDefaultAllocator<32>_>::Reset(local_a30,0);
        TArray<float,TSizedDefaultAllocator<32>_>::Reset(&param_16->CurveSegments,0);
        TArray<int,TSizedDefaultAllocator<32>_>::Reset(&param_16->ItemRotationA,0);
        TArray<int,TSizedDefaultAllocator<32>_>::Reset(&param_16->ItemRotationB,0);
        TArray<float,TSizedDefaultAllocator<32>_>::Reset(&param_16->ItemRotationT,0);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Reset
                  (&param_16->ItemLocalTransforms,0);
        pUVar70 = local_a70;
        param_16->ChainLength = 0.0;
        lVar66 = 0x20;
        pFVar49 = param_2->DataPtr;
        pFVar4 = pFVar49 + param_2->ArrayNum;
        for (; pFVar49 != pFVar4; pFVar49 = pFVar49 + 1) {
          local_8f8.Type = pFVar49->Type;
          local_8f8._1_3_ = *(undefined3 *)&pFVar49->field_0x1;
          local_8f8.Name.ComparisonIndex.Value = (pFVar49->Name).ComparisonIndex.Value;
          local_8f8.Name.Number = (pFVar49->Name).Number;
          local_9d0.Index = 0xffff;
          local_9d0.Key._0_4_ = local_9d0.Key._0_4_ & 0xffffff00;
          local_9d0.Key.Name.ComparisonIndex.Value = 0;
          local_9d0.Key.Name.Number = 0;
          local_9d0.ContainerVersion = -1;
          local_9d0.Element = (FRigBaseElement *)0x0;
          FCachedRigElement::UpdateCache(&local_9d0,&local_8f8,pUVar70);
          pFVar11 = (FCachedRigElement *)(pTVar60->AllocatorInstance).Data;
          if (((pFVar11 <= &local_9d0) && (&local_9d0 < pFVar11 + (param_16->CachedItems).ArrayMax))
             && (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar33)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar38 = (param_16->CachedItems).ArrayNum;
          if (iVar38 == (param_16->CachedItems).ArrayMax) {
            iVar38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar60->AllocatorInstance,&(param_16->CachedItems).ArrayMax)
            ;
          }
          (param_16->CachedItems).ArrayNum = iVar38 + 1;
          pFVar58 = (pTVar60->AllocatorInstance).Data;
          pFVar42 = pFVar58 + (longlong)iVar38 * 0x20;
          *(ulonglong *)pFVar42 =
               CONCAT44(local_9d0.Key.Name.ComparisonIndex.Value,local_9d0.Key._0_4_);
          *(ulonglong *)(pFVar42 + 8) =
               CONCAT26(local_9d0._14_2_,CONCAT24(local_9d0.Index,local_9d0.Key.Name.Number));
          pFVar58 = pFVar58 + (longlong)iVar38 * 0x20 + 0x10;
          *(ulonglong *)pFVar58 = CONCAT44(local_9d0._20_4_,local_9d0.ContainerVersion);
          *(FRigBaseElement **)(pFVar58 + 8) = local_9d0.Element;
          param_11 = local_ad0;
        }
        iVar38 = (param_16->CachedItems).ArrayNum;
        if (iVar38 < 2) {
          return;
        }
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (local_ad8,iVar38,Default);
        pTVar67 = local_a30;
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (local_a30,(param_16->CachedItems).ArrayNum,Default);
        if ((pTVar67->ArrayNum < 1) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar25 = local_a30;
        uVar46 = 1;
        *(undefined4 *)(pTVar67->AllocatorInstance).Data = 0;
        iVar38 = (param_16->CachedItems).ArrayNum;
        if (1 < iVar38) {
          lVar64 = 1;
          do {
            uVar59 = 0;
            if ((int)(uVar46 - 1) < iVar38) {
              uVar59 = -uVar46 >> 0x1f;
            }
            if ((uVar59 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar59 = 0xffffffff;
            uVar10 = *(ushort *)((pTVar60->AllocatorInstance).Data + lVar66 + -0x14);
            if (uVar10 != 0xffff) {
              uVar59 = (uint)uVar10;
            }
            URigHierarchy::GetGlobalTransformByIndex(local_a70,&local_208,uVar59,false);
            uVar54 = ~uVar46 >> 0x1f;
            local_8e8 = local_208.Translation.XY.m128d_f64[0];
            dStack_8e0 = local_208.Translation.XY.m128d_f64[1];
            local_8d8 = local_208.Translation.ZW.m128d_f64[0];
            uVar59 = uVar36;
            if ((int)uVar46 < (param_16->CachedItems).ArrayNum) {
              uVar59 = uVar54;
            }
            if ((uVar59 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar59 = 0xffffffff;
            uVar10 = *(ushort *)((pTVar60->AllocatorInstance).Data + lVar66 + 0xc);
            if (uVar10 != 0xffff) {
              uVar59 = (uint)uVar10;
            }
            URigHierarchy::GetGlobalTransformByIndex(local_a70,&local_1a8,uVar59,false);
            local_6f0 = local_1a8.Translation.XY.m128d_f64[0];
            dStack_6e8 = local_1a8.Translation.XY.m128d_f64[1];
            auVar76._8_8_ = local_1a8.Translation.XY.m128d_f64[1];
            auVar76._0_8_ = local_1a8.Translation.XY.m128d_f64[1];
            local_6e0 = local_1a8.Translation.ZW.m128d_f64[0];
            uVar59 = uVar36;
            if ((int)uVar46 < pTVar25->ArrayNum) {
              uVar59 = uVar54;
            }
            auVar80._0_8_ =
                 (dStack_8e0 - local_1a8.Translation.XY.m128d_f64[1]) *
                 (dStack_8e0 - local_1a8.Translation.XY.m128d_f64[1]) +
                 (local_8e8 - local_1a8.Translation.XY.m128d_f64[0]) *
                 (local_8e8 - local_1a8.Translation.XY.m128d_f64[0]) +
                 (local_8d8 - local_6e0) * (local_8d8 - local_6e0);
            auVar80._8_8_ = 0;
            auVar76 = sqrtpd(auVar76,auVar80);
            if ((uVar59 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(float *)((pTVar25->AllocatorInstance).Data + lVar64 * 4) = (float)auVar76._0_8_;
            uVar59 = uVar35;
            if ((int)uVar46 < pTVar25->ArrayNum) {
              uVar59 = uVar54;
            }
            if ((uVar59 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar46 = uVar46 + 1;
            lVar66 = lVar66 + 0x20;
            lVar69 = lVar64 * 4;
            lVar64 = lVar64 + 1;
            param_16->ChainLength =
                 *(float *)((pTVar25->AllocatorInstance).Data + lVar69) + param_16->ChainLength;
            iVar38 = (param_16->CachedItems).ArrayNum;
            param_11 = local_ad0;
          } while ((int)uVar46 < iVar38);
        }
        TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&param_16->ItemRotationA,iVar38,Default);
        TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&param_16->ItemRotationB,(param_16->CachedItems).ArrayNum,Default);
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&param_16->ItemRotationT,(param_16->CachedItems).ArrayNum,Default);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&param_16->ItemLocalTransforms,(param_16->CachedItems).ArrayNum,Default);
        if (1 < param_11->ArrayNum) {
          pFVar50 = param_11->DataPtr;
          pFVar57 = pFVar50 + param_11->ArrayNum;
          local_ab8.Data = (FScriptContainerElement *)0x0;
          local_ab0 = 0;
          local_ac8.Data = (FScriptContainerElement *)0x0;
          local_ac0 = 0;
          local_abc = 0;
          uVar51 = uVar52;
          if (pFVar50 != pFVar57) {
            while( true ) {
              local_a68 = (uint)uVar51;
              uVar46 = local_a68;
              if (((local_ac8.Data <= (FScriptContainerElement *)&local_a68) &&
                  ((FScriptContainerElement *)&local_a68 <
                   local_ac8.Data + (longlong)(int)local_abc * 4)) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), uVar46 = local_ac0, bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (uVar46 == local_abc) {
                uVar46 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_ac8,(int *)&local_abc);
              }
              local_ac0 = uVar46 + 1;
              *(uint *)(local_ac8.Data + (longlong)(int)uVar46 * 4) = local_a68;
              local_a64 = pFVar50->Ratio;
              if (fVar153 <= pFVar50->Ratio) {
                local_a64 = fVar153;
              }
              if (local_a64 <= 0.0) {
                local_a64 = 0.0;
              }
              if (((local_ab8.Data <= (FScriptContainerElement *)&local_a64) &&
                  ((FScriptContainerElement *)&local_a64 <
                   local_ab8.Data + (longlong)local_ab0._4_4_ * 4)) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar38 = (int)local_ab0;
              if ((int)local_ab0 == local_ab0._4_4_) {
                iVar38 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_ab8,(int *)((longlong)&local_ab0 + 4));
              }
              iVar39 = iVar38 + 1;
              pFVar50 = pFVar50 + 1;
              local_ab0 = CONCAT44(local_ab0._4_4_,iVar39);
              *(float *)(local_ab8.Data + (longlong)iVar38 * 4) = local_a64;
              param_11 = local_ad0;
              if (pFVar50 == pFVar57) break;
              uVar51 = (ulonglong)local_ac0;
            }
          }
          local_908.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                    (&local_908,(float *)local_ab8.Data,iVar39,0);
          p<Var41 = `FRigUnit_FitChainToSplineCurveItemArray::StaticExecute'::__l44::<lambda_1>::
                    <lambda_1>(local_5b8,(<lambda_1> *)&local_908);
          local_918.RotationRatios.AllocatorInstance.Data =
               (p<Var41->RotationRatios).AllocatorInstance.Data;
          (p<Var41->RotationRatios).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_918.RotationRatios.ArrayNum = (p<Var41->RotationRatios).ArrayNum;
          local_918.RotationRatios.ArrayMax = (p<Var41->RotationRatios).ArrayMax;
          (p<Var41->RotationRatios).ArrayNum = 0;
          (p<Var41->RotationRatios).ArrayMax = 0;
          AlgoImpl::
          IntroSortInternal<int,int,_FRigUnit_FitChainToSplineCurveItemArray::StaticExecute_::__l44::<lambda_1>,TLess<void>_>
                    ((int *)local_ac8.Data,local_ac0,&local_918,local_ae0[0]);
          pFVar42 = (p<Var41->RotationRatios).AllocatorInstance.Data;
          if (pFVar42 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar42);
          }
          iVar39 = (param_16->CachedItems).ArrayNum;
          if (0 < iVar39) {
            local_a98 = 0;
            local_a60 = 0;
            uVar51 = uVar52;
            do {
              lVar66 = local_a98;
              fVar163 = 0.0;
              uVar46 = (uint)uVar51;
              if (1 < iVar39) {
                fVar163 = (float)(int)uVar46 / (float)(iVar39 + -1);
              }
              if (((int)local_ac0 < 1) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar59 = *(uint *)local_ac8.Data;
              uVar54 = uVar36;
              if ((int)uVar59 < (int)local_ab0) {
                uVar54 = ~uVar59 >> 0x1f;
              }
              if ((uVar54 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (*(float *)(local_ab8.Data + (longlong)(int)uVar59 * 4) <= fVar163 &&
                  fVar163 != *(float *)(local_ab8.Data + (longlong)(int)uVar59 * 4)) {
                uVar59 = uVar48;
                if ((int)(local_ac0 - 1) < (int)local_ac0) {
                  uVar59 = ~(local_ac0 - 1) >> 0x1f;
                }
                if ((uVar59 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar59 = *(uint *)(local_ac8.Data + (longlong)(int)(local_ac0 - 1) * 4);
                uVar54 = uVar48;
                if ((int)uVar59 < (int)local_ab0) {
                  uVar54 = ~uVar59 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                if (*(float *)(local_ab8.Data + (longlong)(int)uVar59 * 4) <= fVar163) {
                  uVar59 = uVar48;
                  if ((int)(local_ac0 - 1) < (int)local_ac0) {
                    uVar59 = ~(local_ac0 - 1) >> 0x1f;
                  }
                  if ((uVar59 == 0) &&
                     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar33)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  uVar55 = ~uVar46 >> 0x1f;
                  uVar59 = *(uint *)(local_ac8.Data + (longlong)(int)(local_ac0 - 1) * 4);
                  uVar54 = uVar48;
                  if ((int)uVar46 < (param_16->ItemRotationB).ArrayNum) {
                    uVar54 = uVar55;
                  }
                  if ((uVar54 == 0) &&
                     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar33)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + lVar66 * 4) = uVar59;
                  goto LAB_14decbe9f;
                }
                uVar59 = 1;
                if (1 < (int)local_ac0) {
                  local_a90 = 4;
                  do {
                    lVar66 = local_a90;
                    uVar54 = uVar48;
                    if ((int)(uVar59 - 1) < (int)local_ac0) {
                      uVar54 = -uVar59 >> 0x1f;
                    }
                    if ((uVar54 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    uVar54 = *(uint *)(local_ac8.Data + lVar66 + -4);
                    lVar64 = (longlong)(int)uVar54;
                    uVar55 = uVar48;
                    if ((int)uVar59 < (int)local_ac0) {
                      uVar55 = ~uVar59 >> 0x1f;
                    }
                    if ((uVar55 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    uVar61 = ~uVar54 >> 0x1f;
                    uVar55 = *(uint *)(local_ac8.Data + lVar66);
                    lVar66 = (longlong)(int)uVar55;
                    uVar56 = uVar37;
                    if ((int)uVar54 < param_11->ArrayNum) {
                      uVar56 = uVar61;
                    }
                    if ((uVar56 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    if ((float)((uint)(local_ad0->DataPtr[lVar64].Ratio - fVar163) & uVar47) <=
                        fVar73) {
                      uVar56 = ~uVar46 >> 0x1f;
                      uVar59 = uVar36;
                      if ((int)uVar46 < (param_16->ItemRotationB).ArrayNum) {
                        uVar59 = uVar56;
                      }
                      if ((uVar59 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      lVar66 = local_a98;
                      *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_a98 * 4) =
                           uVar54;
                      uVar59 = uVar36;
                      if ((int)uVar46 < (param_16->ItemRotationA).ArrayNum) {
                        uVar59 = uVar56;
                      }
                      if ((uVar59 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + lVar66 * 4) =
                           uVar54;
LAB_14decc8ad:
                      uVar59 = uVar35;
                      if ((int)uVar46 < (param_16->ItemRotationT).ArrayNum) {
                        uVar59 = uVar56;
                      }
                      if ((uVar59 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
LAB_14decc8f5:
                      pFVar42 = (param_16->ItemRotationT).AllocatorInstance.Data;
                      pTVar60 = local_a78;
                      param_11 = local_ad0;
                      goto LAB_14decc902;
                    }
                    uVar63 = ~uVar55 >> 0x1f;
                    uVar56 = uVar37;
                    if ((int)uVar55 < local_ad0->ArrayNum) {
                      uVar56 = uVar63;
                    }
                    if ((uVar56 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    local_a80 = (FScriptContainerElement *)(lVar66 * 0x30);
                    if ((float)((uint)(*(float *)(local_a80 + (longlong)&local_ad0->DataPtr->Ratio)
                                      - fVar163) & uVar47) <= fVar73) {
                      uVar56 = ~uVar46 >> 0x1f;
                      uVar59 = uVar36;
                      if ((int)uVar46 < (param_16->ItemRotationB).ArrayNum) {
                        uVar59 = uVar56;
                      }
                      if ((uVar59 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      lVar66 = local_a98;
                      *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_a98 * 4) =
                           uVar55;
                      uVar59 = uVar36;
                      if ((int)uVar46 < (param_16->ItemRotationA).ArrayNum) {
                        uVar59 = uVar56;
                      }
                      if ((uVar59 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + lVar66 * 4) =
                           uVar55;
                      goto LAB_14decc8ad;
                    }
                    uVar56 = uVar37;
                    if ((int)uVar55 < local_ad0->ArrayNum) {
                      uVar56 = uVar63;
                    }
                    if ((uVar56 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    if (fVar163 < *(float *)(local_a80 + (longlong)&local_ad0->DataPtr->Ratio)) {
                      uVar59 = uVar37;
                      if ((int)uVar55 < (int)local_ab0) {
                        uVar59 = uVar63;
                      }
                      if (uVar59 == 0) {
                        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar33) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                      }
                      fVar187 = *(float *)(local_ab8.Data + lVar66 * 4);
                      uVar59 = uVar37;
                      if ((int)uVar54 < (int)local_ab0) {
                        uVar59 = uVar61;
                      }
                      if ((uVar59 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      uVar59 = ~uVar46 >> 0x1f;
                      local_a90 = CONCAT44(local_a90._4_4_,uVar59);
                      if ((float)((uint)(*(float *)(local_ab8.Data + lVar64 * 4) - fVar187) & uVar47
                                 ) <= fVar73) {
                        uVar55 = uVar37;
                        if ((int)uVar46 < (param_16->ItemRotationB).ArrayNum) {
                          uVar55 = uVar59;
                        }
                        if ((uVar55 == 0) &&
                           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar33)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        lVar66 = local_a98;
                        *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_a98 * 4)
                             = uVar54;
                        uVar55 = uVar37;
                        if ((int)uVar46 < (param_16->ItemRotationA).ArrayNum) {
                          uVar55 = uVar59;
                        }
                        if ((uVar55 == 0) &&
                           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar33)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + lVar66 * 4) =
                             uVar54;
                        uVar54 = uVar37;
                        if ((int)uVar46 < (param_16->ItemRotationT).ArrayNum) {
                          uVar54 = uVar59;
                        }
                        if ((uVar54 == 0) &&
                           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar33)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        goto LAB_14decc8f5;
                      }
                      uVar56 = uVar37;
                      if ((int)uVar46 < (param_16->ItemRotationA).ArrayNum) {
                        uVar56 = uVar59;
                      }
                      if ((uVar56 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + local_a98 * 4) =
                           uVar54;
                      uVar59 = uVar37;
                      if ((int)uVar46 < (param_16->ItemRotationB).ArrayNum) {
                        uVar59 = (uint)local_a90;
                      }
                      if ((uVar59 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_a98 * 4) =
                           uVar55;
                      uVar59 = uVar37;
                      if ((int)uVar54 < (int)local_ab0) {
                        uVar59 = uVar61;
                      }
                      if (uVar59 == 0) {
                        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar33) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                      }
                      local_a80 = local_ab8.Data;
                      uVar59 = uVar37;
                      if ((int)uVar55 < (int)local_ab0) {
                        uVar59 = uVar63;
                      }
                      iVar39 = (int)local_ab0;
                      if (uVar59 == 0) {
                        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar33) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        iVar39 = (int)local_ab0;
                      }
                      FVar24.Data = local_ab8.Data;
                      uVar59 = uVar37;
                      if ((int)uVar54 < iVar39) {
                        uVar59 = uVar61;
                      }
                      if ((uVar59 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      fVar187 = *(float *)(FVar24.Data + lVar66 * 4);
                      uVar59 = (uint)local_a90;
                      fVar6 = *(float *)(local_ab8.Data + lVar64 * 4);
                      fVar7 = *(float *)(local_a80 + lVar64 * 4);
                      uVar54 = uVar37;
                      if ((int)uVar46 < (param_16->ItemRotationT).ArrayNum) {
                        uVar54 = (uint)local_a90;
                      }
                      if ((uVar54 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      lVar66 = local_a98;
                      *(float *)((param_16->ItemRotationT).AllocatorInstance.Data + local_a98 * 4) =
                           (fVar163 - fVar6) / (fVar187 - fVar7);
                      uVar54 = uVar37;
                      if ((int)uVar46 < (param_16->ItemRotationT).ArrayNum) {
                        uVar54 = uVar59;
                      }
                      if ((uVar54 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      fVar163 = FRigVMMathLibrary::EaseFloat
                                          (*(float *)((param_16->ItemRotationT).AllocatorInstance.
                                                      Data + lVar66 * 4),param_12);
                      uVar54 = uVar37;
                      if ((int)uVar46 < (param_16->ItemRotationT).ArrayNum) {
                        uVar54 = uVar59;
                      }
                      if ((uVar54 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      *(float *)((param_16->ItemRotationT).AllocatorInstance.Data + lVar66 * 4) =
                           fVar163;
                      pTVar60 = local_a78;
                      param_11 = local_ad0;
                      break;
                    }
                    uVar59 = uVar59 + 1;
                    local_a90 = local_a90 + 4;
                    pTVar60 = local_a78;
                    param_11 = local_ad0;
                    lVar66 = local_a98;
                  } while ((int)uVar59 < (int)local_ac0);
                }
              }
              else {
                if (((int)local_ac0 < 1) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar55 = ~uVar46 >> 0x1f;
                uVar59 = *(uint *)local_ac8.Data;
                uVar54 = uVar36;
                if ((int)uVar46 < (param_16->ItemRotationB).ArrayNum) {
                  uVar54 = uVar55;
                }
                if ((uVar54 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_a60) = uVar59;
LAB_14decbe9f:
                uVar54 = uVar48;
                if ((int)uVar46 < (param_16->ItemRotationA).ArrayNum) {
                  uVar54 = uVar55;
                }
                if ((uVar54 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + lVar66 * 4) = uVar59;
                uVar59 = uVar48;
                if ((int)uVar46 < (param_16->ItemRotationT).ArrayNum) {
                  uVar59 = uVar55;
                }
                if ((uVar59 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar42 = (param_16->ItemRotationT).AllocatorInstance.Data;
LAB_14decc902:
                *(undefined4 *)(pFVar42 + lVar66 * 4) = 0;
              }
              local_a60 = local_a60 + 4;
              local_a98 = lVar66 + 1;
              iVar39 = pTVar60->ArrayNum;
              uVar51 = (ulonglong)(uVar46 + 1);
            } while ((int)(uVar46 + 1) < iVar39);
          }
          if (local_908.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_908.AllocatorInstance.Data);
          }
          if (local_ac8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ac8.Data);
          }
          if (local_ab8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ab8.Data);
          }
        }
      }
      auVar156 = ZEXT816(0);
      if (1 < pTVar60->ArrayNum) {
        uVar47 = 0x40;
        if (param_7 < 0x40) {
          uVar47 = param_7;
        }
        uVar46 = 4;
        if (4 < (int)uVar47) {
          uVar46 = uVar47;
        }
        local_a60 = CONCAT44(local_a60._4_4_,uVar46);
        if (local_aa0->ArrayNum != uVar46) {
          uVar47 = uVar46 + 1;
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                    (local_aa0,uVar47,Default);
          pTVar67 = &param_16->CurveSegments;
          iVar39 = (param_16->CurveSegments).ArrayNum;
          piVar2 = &(param_16->CurveSegments).ArrayNum;
          if (iVar39 < (int)uVar47) {
            iVar38 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,uVar47 - iVar39,&pTVar67->AllocatorInstance,piVar2,
                                &(param_16->CurveSegments).ArrayMax);
            memset((pTVar67->AllocatorInstance).Data + (longlong)iVar38 * 4,0,
                   (longlong)(int)(uVar47 - iVar39) << 2);
          }
          else {
            if ((int)uVar47 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar47);
            }
            if ((int)uVar47 < iVar39) {
              uVar59 = iVar39 - uVar47;
              if (((int)(uVar59 | uVar47) < 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (uVar59 != 0) {
                TArray<float,TSizedDefaultAllocator<32>_>::RemoveAtImpl(pTVar67,uVar47,uVar59);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,&pTVar67->AllocatorInstance,*piVar2,
                           &(param_16->CurveSegments).ArrayMax);
              }
            }
          }
        }
        uVar194 = 0;
        uVar47 = local_a80._4_4_;
        local_a80 = (FScriptContainerElement *)((ulonglong)local_a80._4_4_ << 0x20);
        local_948 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        auVar184._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        auVar184._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        auVar184._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        auVar184._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        if (0 < (int)uVar46) {
          uVar59 = uVar46 - 1;
          fVar73 = (float)(int)uVar59;
          local_a80 = (FScriptContainerElement *)CONCAT44(uVar47,uVar59);
          uVar51 = uVar52;
          uVar65 = uVar52;
          uVar68 = uVar52;
          do {
            uVar54 = (uint)uVar51;
            fVar163 = (float)(int)uVar54 * (fVar153 / fVar73) * (param_6 - param_5) + param_5;
            pTVar43 = FControlRigSpline::PositionAtParam(local_9f0,&local_588,fVar163);
            uVar55 = ~uVar54 >> 0x1f;
            dVar171 = (pTVar43->field0_0x0)._s_0.X;
            dVar183 = (pTVar43->field0_0x0)._s_0.Y;
            dVar75 = (pTVar43->field0_0x0)._s_0.Z;
            uVar47 = uVar35;
            if ((int)uVar54 < (param_16->CurvePositions).ArrayNum) {
              uVar47 = uVar55;
            }
            if ((uVar47 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar58 = (param_16->CurvePositions).AllocatorInstance.Data;
            pFVar42 = pFVar58 + uVar65;
            *(double *)pFVar42 = dVar171;
            *(double *)(pFVar42 + 8) = dVar183;
            *(double *)(pFVar58 + uVar65 + 0x10) = dVar75;
            FControlRigSpline::TangentAtParam(local_9f0,(TVector<double> *)&local_840._s_0,fVar163);
            uVar194 = extraout_XMM0._8_8_;
            if (uVar54 == 0) {
LAB_14deccd61:
              uVar47 = uVar35;
              if ((int)uVar54 < (param_16->CurveSegments).ArrayNum) {
                uVar47 = uVar55;
              }
              if (uVar47 == 0) {
                bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar194 = extraout_XMM0_02._8_8_;
                if (bVar33) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              *(undefined4 *)((param_16->CurveSegments).AllocatorInstance.Data + uVar68 * 4) = 0;
            }
            else {
              if (uVar54 == uVar59) {
                uVar194 = 0;
                local_948 = local_840._s_0.Z;
                auVar184 = local_840._0_16_;
              }
              if ((int)uVar54 < 1) goto LAB_14deccd61;
              uVar47 = uVar48;
              if ((int)uVar54 < (param_16->CurvePositions).ArrayNum) {
                uVar47 = uVar55;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar42 = (local_aa0->AllocatorInstance).Data;
              uVar47 = uVar48;
              if ((int)(uVar54 - 1) < local_aa0->ArrayNum) {
                uVar47 = -uVar54 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar58 = (param_16->CurvePositions).AllocatorInstance.Data;
              uVar47 = uVar48;
              if ((int)uVar54 < (param_16->CurveSegments).ArrayNum) {
                uVar47 = uVar55;
              }
              auVar77._0_8_ =
                   (*(double *)(pFVar42 + uVar65 + 0x10) - *(double *)(pFVar58 + (uVar65 - 8))) *
                   (*(double *)(pFVar42 + uVar65 + 0x10) - *(double *)(pFVar58 + (uVar65 - 8)));
              auVar77._8_8_ = 0;
              auVar134._0_8_ =
                   (*(double *)(pFVar42 + uVar65 + 8) - *(double *)(pFVar58 + (uVar65 - 0x10))) *
                   (*(double *)(pFVar42 + uVar65 + 8) - *(double *)(pFVar58 + (uVar65 - 0x10))) +
                   (*(double *)(pFVar42 + uVar65) - *(double *)(pFVar58 + (uVar65 - 0x18))) *
                   (*(double *)(pFVar42 + uVar65) - *(double *)(pFVar58 + (uVar65 - 0x18))) +
                   auVar77._0_8_;
              auVar134._8_8_ = 0;
              auVar76 = sqrtpd(auVar77,auVar134);
              dVar75 = auVar76._0_8_;
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , auVar76 = extraout_XMM0_00, bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar194 = auVar76._8_8_;
              *(float *)((param_16->CurveSegments).AllocatorInstance.Data + uVar68 * 4) =
                   (float)dVar75;
              uVar47 = uVar48;
              if ((int)uVar54 < (param_16->CurveSegments).ArrayNum) {
                uVar47 = uVar55;
              }
              if (uVar47 == 0) {
                bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar194 = extraout_XMM0_01._8_8_;
                if (bVar33) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              auVar156._0_4_ =
                   auVar156._0_4_ +
                   *(float *)((param_16->CurveSegments).AllocatorInstance.Data + uVar68 * 4);
              uVar59 = (uint)local_a80;
            }
            uVar51 = (ulonglong)(uVar54 + 1);
            uVar68 = uVar68 + 1;
            uVar65 = uVar65 + 0x18;
          } while ((longlong)uVar68 < (longlong)(int)uVar46);
          local_a80 = (FScriptContainerElement *)CONCAT44(local_a80._4_4_,auVar156._0_4_);
          pTVar60 = local_a78;
          fVar73 = __real_322bcc77;
          uVar46 = (uint)local_a60;
        }
        pTVar1 = local_aa0;
        uVar59 = uVar46 - 1;
        uVar47 = uVar35;
        if ((int)uVar59 < local_aa0->ArrayNum) {
          uVar47 = ~uVar59 >> 0x1f;
        }
        if (uVar47 == 0) {
          bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar194 = extraout_XMM0_03._8_8_;
          if (bVar33) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        auVar15._4_8_ = uVar194;
        auVar15._0_4_ = auVar184._4_4_;
        auVar78._0_8_ = auVar15._0_8_ << 0x20;
        auVar78._8_4_ = auVar184._8_4_;
        auVar78._12_4_ = auVar184._12_4_;
        lVar66 = (longlong)(int)uVar59;
        pFVar42 = (pTVar1->AllocatorInstance).Data;
        dVar164 = (double)param_16->ChainLength;
        dVar170 = dVar164 * local_948;
        dVar75 = *(double *)(pFVar42 + lVar66 * 0x18 + 0x10);
        dVar171 = *(double *)(pFVar42 + lVar66 * 0x18 + 8);
        dVar183 = *(double *)(pFVar42 + lVar66 * 0x18);
        uVar47 = uVar48;
        if ((int)uVar46 < pTVar1->ArrayNum) {
          uVar47 = ~uVar46 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar66 = (longlong)(int)uVar46;
        pFVar42 = (pTVar1->AllocatorInstance).Data;
        *(double *)(pFVar42 + lVar66 * 0x18) = dVar164 * auVar184._0_8_ + dVar183;
        *(double *)(pFVar42 + lVar66 * 0x18 + 8) = dVar164 * auVar78._8_8_ + dVar171;
        *(double *)(pFVar42 + lVar66 * 0x18 + 0x10) = dVar170 + dVar75;
        fVar153 = param_16->ChainLength;
        uVar47 = uVar48;
        if ((int)uVar46 < (param_16->CurveSegments).ArrayNum) {
          uVar47 = ~uVar46 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        *(float *)((param_16->CurveSegments).AllocatorInstance.Data + (longlong)(int)uVar46 * 4) =
             fVar153;
        if ((fVar73 < param_16->ChainLength || fVar73 == param_16->ChainLength) &&
           (fVar73 <= auVar156._0_4_)) {
          uVar47 = 1;
          if ((pTVar1->ArrayNum < 1) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar62 = local_ad8;
          pFVar42 = (pTVar1->AllocatorInstance).Data;
          auVar76 = *(undefined1 (*) [16])pFVar42;
          uVar194 = *(undefined8 *)&pFVar42[0x10].field_0x0;
          if ((local_ad8->ArrayNum < 1) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar46 = 1;
          pFVar42 = (pTVar62->AllocatorInstance).Data;
          local_a60 = CONCAT44(local_a60._4_4_,1);
          *(undefined1 (*) [16])pFVar42 = auVar76;
          *(undefined8 *)&pFVar42[0x10].field_0x0 = uVar194;
          iVar39 = pTVar60->ArrayNum;
          if (1 < iVar39) {
            lVar64 = 1;
            local_a98 = CONCAT44(local_a98._4_4_,(uint)local_aa8);
            lVar66 = 0x18;
            uVar59 = (uint)local_aa8;
            do {
              pTVar1 = local_ad8;
              uVar54 = uVar48;
              if ((int)(uVar46 - 1) < local_ad8->ArrayNum) {
                uVar54 = -uVar46 >> 0x1f;
              }
              if ((uVar54 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar42 = (pTVar1->AllocatorInstance).Data;
              local_a90 = CONCAT44(local_a90._4_4_,~uVar46 >> 0x1f);
              uVar54 = uVar48;
              if ((int)uVar46 < local_a30->ArrayNum) {
                uVar54 = ~uVar46 >> 0x1f;
              }
              if ((uVar54 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar1 = local_aa0;
              fVar73 = *(float *)((local_a30->AllocatorInstance).Data + local_a88);
              if (uVar59 == 1) {
                fVar73 = (fVar73 * auVar156._0_4_) / param_16->ChainLength;
              }
              uVar59 = uVar36;
              if ((int)(uVar47 - 1) < local_aa0->ArrayNum) {
                uVar59 = -uVar47 >> 0x1f;
              }
              if ((uVar59 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar58 = (pTVar1->AllocatorInstance).Data;
              local_8c0 = *(double *)(pFVar58 + lVar64 * 0x18 + -8);
              auVar76 = *(undefined1 (*) [16])(pFVar58 + lVar64 * 0x18 + -0x18);
              dVar75 = auVar76._0_8_;
              uVar147 = auVar76._0_4_;
              uVar150 = auVar76._4_4_;
              uVar151 = auVar76._8_4_;
              uVar152 = auVar76._12_4_;
              uVar74 = SUB84(local_8c0,0);
              uVar111 = (undefined4)((ulonglong)local_8c0 >> 0x20);
              uVar59 = uVar36;
              if ((int)uVar47 < pTVar1->ArrayNum) {
                uVar59 = ~uVar47 >> 0x1f;
              }
              if ((uVar59 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar1 = local_aa0;
              uVar195 = SUB84(local_8c0,0);
              uVar196 = (undefined4)((ulonglong)local_8c0 >> 0x20);
              auVar16._4_8_ = auVar156._8_8_;
              auVar16._0_4_ = uVar150;
              auVar191._0_8_ = auVar16._0_8_ << 0x20;
              auVar191._8_4_ = uVar151;
              auVar191._12_4_ = uVar152;
              dVar164 = auVar191._8_8_;
              uVar194 = auVar76._8_8_;
              lVar69 = lVar64 * 0x18;
              pFVar58 = (local_aa0->AllocatorInstance).Data + lVar69;
              auVar76 = *(undefined1 (*) [16])pFVar58;
              dVar183 = auVar76._0_8_;
              local_948 = *(double *)&pFVar58[0x10].field_0x0;
              local_a28 = *(TTransform<double> **)(pFVar42 + lVar66 + -0x18);
              local_9d8 = *(double *)(pFVar42 + lVar66 + -0x10);
              dVar171 = *(double *)(pFVar42 + lVar66 + -8);
              local_a18[0] = dVar171;
              auVar79._0_8_ = (dVar171 - local_8c0) * (dVar171 - local_8c0);
              auVar79._8_8_ = 0;
              auVar113._0_8_ =
                   (local_9d8 - dVar164) * (local_9d8 - dVar164) +
                   ((double)local_a28 - dVar75) * ((double)local_a28 - dVar75) + auVar79._0_8_;
              auVar113._8_8_ = 0;
              auVar80 = sqrtpd(auVar79,auVar113);
              fVar153 = (float)auVar80._0_8_;
              auVar166._8_8_ = auVar76._8_8_;
              auVar166._0_8_ = auVar166._8_8_;
              auVar81._0_8_ = (dVar171 - local_948) * (dVar171 - local_948);
              auVar81._8_8_ = 0;
              auVar135._0_8_ =
                   (local_9d8 - auVar166._8_8_) * (local_9d8 - auVar166._8_8_) +
                   ((double)local_a28 - dVar183) * ((double)local_a28 - dVar183) + auVar81._0_8_;
              auVar135._8_8_ = 0;
              auVar80 = sqrtpd(auVar81,auVar135);
              fVar163 = (float)auVar80._0_8_;
              if (fVar163 <= fVar73) {
                iVar39 = local_aa0->ArrayNum;
                if ((int)uVar47 < iVar39 + -1) {
                  do {
                    fVar153 = fVar163;
                    auVar80 = auVar76;
                    dVar75 = auVar80._0_8_;
                    uVar47 = uVar47 + 1;
                    lVar64 = lVar64 + 1;
                    lVar69 = lVar69 + 0x18;
                    uVar147 = auVar80._0_4_;
                    uVar150 = auVar80._4_4_;
                    uVar151 = auVar80._8_4_;
                    uVar152 = auVar80._12_4_;
                    uVar111 = (undefined4)((ulonglong)local_948 >> 0x20);
                    uVar74 = SUB84(local_948,0);
                    uVar46 = uVar35;
                    if ((int)uVar47 < iVar39) {
                      uVar46 = ~uVar47 >> 0x1f;
                    }
                    local_8c0 = local_948;
                    if ((uVar46 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pFVar58 = (pTVar1->AllocatorInstance).Data + lVar69;
                    auVar76 = *(undefined1 (*) [16])pFVar58;
                    local_948 = *(double *)&pFVar58[0x10].field_0x0;
                    dVar183 = auVar76._0_8_;
                    auVar166._8_4_ = auVar76._8_4_;
                    auVar166._0_8_ = auVar76._8_8_;
                    auVar166._12_4_ = auVar76._12_4_;
                    dVar171 = auVar76._8_8_ - *(double *)(pFVar42 + lVar66 + -0x10);
                    fVar163 = (float)SQRT((dVar183 - *(double *)(pFVar42 + lVar66 + -0x18)) *
                                          (dVar183 - *(double *)(pFVar42 + lVar66 + -0x18)) +
                                          dVar171 * dVar171 +
                                          (local_948 - *(double *)(pFVar42 + lVar66 + -8)) *
                                          (local_948 - *(double *)(pFVar42 + lVar66 + -8)));
                  } while ((fVar153 < fVar73 == fVar163 < fVar73) &&
                          (iVar39 = pTVar1->ArrayNum, (int)uVar47 < iVar39 + -1));
                  uVar195 = SUB84(local_8c0,0);
                  uVar196 = (undefined4)((ulonglong)local_8c0 >> 0x20);
                  auVar17._4_8_ = uVar194;
                  auVar17._0_4_ = uVar150;
                  auVar192._0_8_ = auVar17._0_8_ << 0x20;
                  auVar192._8_4_ = uVar151;
                  auVar192._12_4_ = uVar152;
                  dVar164 = auVar192._8_8_;
                  uVar194 = auVar80._8_8_;
                  uVar46 = (uint)local_a60;
                }
                pTVar1 = local_ad8;
                dVar171 = auVar166._0_8_;
                fVar187 = fVar163;
                uVar188 = uVar150;
                uVar189 = uVar151;
                uVar190 = uVar152;
                if (fVar163 < fVar153) {
                  dVar183 = (double)CONCAT44(uVar150,uVar147);
                  local_948 = (double)CONCAT44(uVar111,uVar74);
                  auVar76 = *(undefined1 (*) [16])pFVar58;
                  dVar75 = auVar76._0_8_;
                  uVar147 = auVar76._0_4_;
                  uVar188 = auVar76._4_4_;
                  uVar189 = auVar76._8_4_;
                  uVar190 = auVar76._12_4_;
                  local_8c0 = *(double *)&pFVar58[0x10].field_0x0;
                  uVar74 = SUB84(local_8c0,0);
                  uVar111 = (undefined4)((ulonglong)local_8c0 >> 0x20);
                  auVar18._4_8_ = uVar194;
                  auVar18._0_4_ = uVar188;
                  auVar193._0_8_ = auVar18._0_8_ << 0x20;
                  auVar193._8_4_ = uVar189;
                  auVar193._12_4_ = uVar190;
                  auVar19._4_8_ = auVar166._8_8_;
                  auVar19._0_4_ = uVar150;
                  auVar167._0_8_ = auVar19._0_8_ << 0x20;
                  auVar167._8_4_ = uVar151;
                  auVar167._12_4_ = uVar152;
                  dVar164 = auVar193._8_8_;
                  dVar171 = auVar167._8_8_;
                  fVar187 = fVar153;
                  uVar195 = uVar74;
                  uVar196 = uVar111;
                  fVar153 = fVar163;
                }
                iVar39 = local_ad8->ArrayNum;
                if (__real_322bcc77 <
                    (float)((uint)(fVar153 - fVar187) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
                  dVar170 = (double)((fVar73 - fVar153) / (fVar187 - fVar153));
                  dVar75 = (dVar183 - dVar75) * dVar170 + dVar75;
                  dVar164 = (dVar171 - dVar164) * dVar170 + dVar164;
                  dVar171 = (local_948 - (double)CONCAT44(uVar196,uVar195)) * dVar170 +
                            (double)CONCAT44(uVar196,uVar195);
                  goto LAB_14decd523;
                }
                uVar59 = uVar35;
                if ((int)uVar46 < iVar39) {
                  uVar59 = (uint)local_a90;
                }
                if ((uVar59 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar58 = (pTVar1->AllocatorInstance).Data;
                pFVar42 = pFVar58 + lVar66;
                *(undefined4 *)pFVar42 = uVar147;
                *(undefined4 *)(pFVar42 + 4) = uVar188;
                *(undefined4 *)(pFVar42 + 8) = uVar189;
                *(undefined4 *)(pFVar42 + 0xc) = uVar190;
                *(ulonglong *)(pFVar58 + lVar66 + 0x10) = CONCAT44(uVar111,uVar74);
              }
              else {
                iVar39 = local_ad8->ArrayNum;
                dVar75 = (double)(fVar73 / fVar163);
                dVar171 = (local_948 - dVar171) * dVar75 + dVar171;
                dVar164 = (auVar166._8_8_ - local_9d8) * dVar75 + local_9d8;
                dVar75 = (dVar183 - (double)local_a28) * dVar75 + (double)local_a28;
LAB_14decd523:
                pTVar1 = local_ad8;
                uVar59 = uVar35;
                if ((int)uVar46 < iVar39) {
                  uVar59 = (uint)local_a90;
                }
                if ((uVar59 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar42 = (pTVar1->AllocatorInstance).Data;
                *(double *)(pFVar42 + lVar66) = dVar75;
                *(double *)(pFVar42 + lVar66 + 8) = dVar164;
                *(double *)(pFVar42 + lVar66 + 0x10) = dVar171;
              }
              uVar46 = uVar46 + 1;
              local_a88 = local_a88 + 4;
              lVar66 = lVar66 + 0x18;
              auVar156 = ZEXT416((uint)local_a80);
              iVar39 = local_a78->ArrayNum;
              local_a60 = CONCAT44(local_a60._4_4_,uVar46);
              pTVar60 = local_a78;
              pTVar62 = local_ad8;
              uVar59 = (uint)local_a98;
            } while ((int)uVar46 < iVar39);
          }
          pUVar70 = local_a70;
          fVar73 = __real_3f800000;
          local_a58.Data = (FScriptContainerElement *)0x0;
          local_a50 = 0;
          if ((param_13 < __real_3f800000) && (uVar51 = uVar52, uVar65 = uVar52, 0 < iVar39)) {
            do {
              uVar48 = (uint)uVar51;
              uVar47 = uVar35;
              if ((int)uVar48 < iVar39) {
                uVar47 = ~uVar48 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar47 = 0xffffffff;
              uVar10 = *(ushort *)((pTVar60->AllocatorInstance).Data + uVar65 + 0xc);
              if (uVar10 != 0xffff) {
                uVar47 = (uint)uVar10;
              }
              URigHierarchy::GetGlobalTransformByIndex(pUVar70,&local_328,uVar47,false);
              if (((local_a58.Data <= &local_328) &&
                  (&local_328 <
                   (TTransform<double> *)(local_a58.Data + (longlong)local_a50._4_4_ * 0x60))) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar39 = (int)local_a50;
              if ((int)local_a50 == local_a50._4_4_) {
                iVar39 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1060,&local_a58,(int *)((longlong)&local_a50 + 4));
              }
              local_a50 = CONCAT44(local_a50._4_4_,iVar39 + 1);
              lVar66 = (longlong)iVar39 * 0x60;
              *(double *)(local_a58.Data + lVar66) = local_328.Rotation.XY.m128d_f64[0];
              *(double *)(local_a58.Data + lVar66 + 8) = local_328.Rotation.XY.m128d_f64[1];
              *(double *)(local_a58.Data + lVar66 + 0x10) = local_328.Rotation.ZW.m128d_f64[0];
              *(double *)(local_a58.Data + lVar66 + 0x10 + 8) = local_328.Rotation.ZW.m128d_f64[1];
              *(double *)(local_a58.Data + lVar66 + 0x20) = local_328.Translation.XY.m128d_f64[0];
              *(double *)(local_a58.Data + lVar66 + 0x20 + 8) =
                   local_328.Translation.XY.m128d_f64[1];
              *(double *)(local_a58.Data + lVar66 + 0x30) = local_328.Translation.ZW.m128d_f64[0];
              *(double *)(local_a58.Data + lVar66 + 0x30 + 8) =
                   local_328.Translation.ZW.m128d_f64[1];
              *(double *)(local_a58.Data + lVar66 + 0x40) = local_328.Scale3D.XY.m128d_f64[0];
              *(double *)(local_a58.Data + lVar66 + 0x40 + 8) = local_328.Scale3D.XY.m128d_f64[1];
              *(double *)(local_a58.Data + lVar66 + 0x50) = local_328.Scale3D.ZW.m128d_f64[0];
              *(double *)(local_a58.Data + lVar66 + 0x50 + 8) = local_328.Scale3D.ZW.m128d_f64[1];
              iVar39 = pTVar60->ArrayNum;
              uVar51 = (ulonglong)(uVar48 + 1);
              uVar65 = uVar65 + 0x20;
              pTVar62 = local_ad8;
            } while ((int)(uVar48 + 1) < iVar39);
          }
          dVar75 = __real_3f1a36e2e0000000;
          uVar48 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar47 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar51 = uVar52;
          uVar65 = uVar52;
          if (0 < iVar39) {
            do {
              dVar183 = __real_3e45798ee0000000;
              dVar171 = __real_3ff0000000000000;
              uVar59 = (uint)uVar65;
              uVar54 = ~uVar59 >> 0x1f;
              uVar46 = uVar36;
              if ((int)uVar59 < iVar39) {
                uVar46 = uVar54;
              }
              if ((uVar46 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar46 = 0xffffffff;
              uVar10 = *(ushort *)((pTVar60->AllocatorInstance).Data + uVar51 * 0x20 + 0xc);
              if (uVar10 != 0xffff) {
                uVar46 = (uint)uVar10;
              }
              URigHierarchy::GetGlobalTransformByIndex(pUVar70,&local_518,uVar46,false);
              uVar46 = uVar36;
              if ((int)uVar59 < pTVar62->ArrayNum) {
                uVar46 = uVar54;
              }
              if ((uVar46 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar58 = (pTVar62->AllocatorInstance).Data;
              uVar147 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar150 = (undefined4)
                        ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
              ;
              pFVar42 = pFVar58 + uVar51 * 0x18;
              local_518.Translation.XY.m128d_f64[0] = *(double *)pFVar42;
              local_518.Translation.XY.m128d_f64[1] = *(double *)(pFVar42 + 8);
              local_518.Translation.ZW.m128d_f64[0] = *(double *)(pFVar58 + uVar51 * 0x18 + 0x10);
              local_518.Translation.ZW.m128d_f64[1] = 0.0;
              local_a48._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_a48._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              dStack_a40._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              dStack_a40._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              local_a38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              iVar39 = pTVar62->ArrayNum;
              if ((int)uVar59 < pTVar60->ArrayNum + -1) {
                uVar46 = uVar37;
                if ((int)(uVar59 + 1) < iVar39) {
                  uVar46 = ~(uVar59 + 1) >> 0x1f;
                }
                if (uVar46 == 0) {
                  bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar33) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  uVar147 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                  uVar150 = (undefined4)
                            ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                            0x20);
                }
                pFVar42 = (pTVar62->AllocatorInstance).Data;
                uVar46 = uVar37;
                if ((int)uVar59 < local_ad8->ArrayNum) {
                  uVar46 = uVar54;
                }
                if (uVar46 == 0) {
                  bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar33) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  uVar147 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                  uVar150 = (undefined4)
                            ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                            0x20);
                }
                pFVar58 = (local_ad8->AllocatorInstance).Data;
                local_a38 = *(double *)(pFVar42 + uVar51 * 0x18 + 0x28) -
                            *(double *)(pFVar58 + uVar51 * 0x18 + 0x10);
                dStack_a40 = *(double *)(pFVar42 + uVar51 * 0x18 + 0x20) -
                             *(double *)(pFVar58 + uVar51 * 0x18 + 8);
                local_a48 = (TTransform<double> *)
                            (*(double *)(pFVar42 + uVar51 * 0x18 + 0x18) -
                            *(double *)(pFVar58 + uVar51 * 0x18));
              }
              else {
                uVar46 = uVar37;
                if ((int)(iVar39 - 1U) < iVar39) {
                  uVar46 = ~(iVar39 - 1U) >> 0x1f;
                }
                if (uVar46 == 0) {
                  bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar33) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  uVar147 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                  uVar150 = (undefined4)
                            ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                            0x20);
                }
                iVar39 = pTVar62->ArrayNum;
                lVar66 = (longlong)iVar39;
                pFVar42 = (pTVar62->AllocatorInstance).Data;
                uVar55 = iVar39 - 2;
                uVar46 = uVar37;
                if ((int)uVar55 < iVar39) {
                  uVar46 = ~uVar55 >> 0x1f;
                }
                if (uVar46 == 0) {
                  bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar33) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  uVar147 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                  uVar150 = (undefined4)
                            ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                            0x20);
                }
                lVar64 = (longlong)(int)uVar55;
                pFVar58 = (local_ad8->AllocatorInstance).Data;
                local_a38 = *(double *)(pFVar42 + lVar66 * 0x18 + -8) -
                            *(double *)(pFVar58 + lVar64 * 0x18 + 0x10);
                dStack_a40 = *(double *)(pFVar42 + lVar66 * 0x18 + -0x10) -
                             *(double *)(pFVar58 + lVar64 * 0x18 + 8);
                local_a48 = (TTransform<double> *)
                            (*(double *)(pFVar42 + lVar66 * 0x18 + -0x18) -
                            *(double *)(pFVar58 + lVar64 * 0x18));
              }
              if (((dVar75 < (double)CONCAT44((uint)((ulonglong)local_a48 >> 0x20) & uVar48,
                                              (uint)local_a48 & uVar47)) ||
                  (dVar75 < (double)CONCAT44((uint)((ulonglong)dStack_a40 >> 0x20) & uVar48,
                                             SUB84(dStack_a40,0) & uVar47))) ||
                 (dVar75 < (double)CONCAT44((uint)((ulonglong)local_a38 >> 0x20) & uVar48,
                                            (uint)local_a38 & uVar47))) {
                if (((dVar75 < (double)CONCAT44((uint)((ulonglong)
                                                       *(undefined8 *)&param_8->field0_0x0 >> 0x20)
                                                & uVar48,(uint)*(undefined8 *)&param_8->field0_0x0 &
                                                         uVar47)) ||
                    (uVar194 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8),
                    dVar75 < (double)CONCAT44((uint)((ulonglong)uVar194 >> 0x20) & uVar48,
                                              (uint)uVar194 & uVar47))) ||
                   (uVar194 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 0x10),
                   dVar75 < (double)CONCAT44((uint)((ulonglong)uVar194 >> 0x20) & uVar48,
                                             (uint)uVar194 & uVar47))) {
                  bVar33 = false;
                }
                else {
                  bVar33 = true;
                }
                if (!bVar33) {
                  dVar164 = dStack_a40 * dStack_a40 + (double)local_a48 * (double)local_a48 +
                            (double)local_a38 * (double)local_a38;
                  if (dVar164 == dVar171) {
                  }
                  else if (dVar183 <= dVar164) {
                    local_878 = dVar171 / SQRT(dVar164);
                    local_a48 = (TTransform<double> *)(local_878 * (double)local_a48);
                    local_a38 = local_878 * (double)local_a38;
                    dStack_a40 = local_878 * dStack_a40;
                  }
                  else {
                    local_a48._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                    local_a48._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                    dStack_a40._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                    dStack_a40._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                    local_a38 = CONCAT44(uVar150,uVar147);
                  }
                  auVar76 = *(undefined1 (*) [16])&param_8->field0_0x0;
                  dVar171 = (param_8->field0_0x0)._s_0.Z;
                  auVar156 = blendpd((undefined1  [16])local_518.Rotation.XY.m128d_f64,
                                     (undefined1  [16])local_518.Rotation.ZW.m128d_f64,2);
                  dVar164 = local_518.Rotation.XY.m128d_f64[1];
                  dVar170 = auVar76._8_8_;
                  auVar82._8_4_ = local_518.Rotation.ZW.m128d_f64[0]._0_4_;
                  auVar82._0_8_ = dVar164;
                  auVar82._12_4_ = local_518.Rotation.ZW.m128d_f64[0]._4_4_;
                  auVar172._0_8_ =
                       dVar170 * local_518.Rotation.XY.m128d_f64[0] - dVar164 * auVar76._0_8_;
                  auVar172._8_8_ = dVar171 * dVar164 - auVar82._8_8_ * dVar170;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = dVar171;
                  auVar80 = blendpd(auVar76,auVar14,2);
                  auVar198._8_4_ = SUB84(auVar172._8_8_,0);
                  auVar198._0_8_ = auVar172._0_8_;
                  auVar198._12_4_ = (int)((ulonglong)auVar172._8_8_ >> 0x20);
                  dVar183 = auVar156._8_8_;
                  auVar114._0_8_ =
                       auVar80._0_8_ * local_518.Rotation.ZW.m128d_f64[0] - auVar156._0_8_ * dVar171
                  ;
                  auVar114._8_8_ =
                       auVar80._8_8_ * local_518.Rotation.ZW.m128d_f64[1] - dVar183 * 0.0;
                  auVar80 = blendpd(auVar172,auVar114,2);
                  dVar197 = auVar198._8_8_ + auVar198._8_8_;
                  dVar201 = auVar114._0_8_ + auVar114._0_8_;
                  auVar173._0_8_ = auVar80._0_8_ + auVar80._0_8_;
                  auVar173._8_8_ = auVar80._8_8_ + auVar80._8_8_;
                  uVar151 = SUB84(dVar201,0);
                  auVar136._8_4_ = uVar151;
                  auVar136._0_8_ = dVar197;
                  uVar152 = (undefined4)((ulonglong)dVar201 >> 0x20);
                  auVar136._12_4_ = uVar152;
                  auVar83._8_4_ = uVar151;
                  auVar83._0_8_ = dVar197;
                  auVar83._12_4_ = uVar152;
                  auVar115._8_4_ = uVar151;
                  auVar115._0_8_ = dVar197;
                  auVar115._12_4_ = uVar152;
                  auVar80 = blendpd(auVar115,auVar173,2);
                  auVar137._0_8_ =
                       auVar136._8_8_ * local_518.Rotation.XY.m128d_f64[0] - dVar197 * dVar164;
                  auVar137._8_8_ =
                       auVar173._0_8_ * dVar164 - auVar83._8_8_ * local_518.Rotation.ZW.m128d_f64[0]
                  ;
                  auVar84._8_4_ = SUB84(auVar173._8_8_,0);
                  auVar84._0_8_ = auVar173._0_8_;
                  auVar84._12_4_ = (int)((ulonglong)auVar173._8_8_ >> 0x20);
                  auVar116._0_8_ =
                       auVar80._0_8_ * local_518.Rotation.ZW.m128d_f64[0] -
                       auVar173._0_8_ * auVar156._0_8_;
                  auVar116._8_8_ =
                       auVar80._8_8_ * local_518.Rotation.ZW.m128d_f64[1] - auVar84._8_8_ * dVar183;
                  auVar85._8_4_ = SUB84(auVar137._8_8_,0);
                  auVar85._0_8_ = auVar137._0_8_;
                  auVar85._12_4_ = (int)((ulonglong)auVar137._8_8_ >> 0x20);
                  auVar80 = blendpd(auVar137,auVar116,2);
                  local_810 = dVar197 * local_518.Rotation.ZW.m128d_f64[1] + auVar76._0_8_ +
                              auVar85._8_8_;
                  dStack_808 = dVar201 * local_518.Rotation.ZW.m128d_f64[1] + dVar170 +
                               auVar116._0_8_;
                  local_800 = auVar173._0_8_ * local_518.Rotation.ZW.m128d_f64[1] + dVar171 +
                              auVar80._0_8_;
                  auVar20._4_8_ = dVar183;
                  auVar20._0_4_ = (int)((ulonglong)local_810 >> 0x20);
                  auVar157._0_8_ = auVar20._0_8_ << 0x20;
                  auVar157._8_4_ = SUB84(dStack_808,0);
                  auVar157._12_4_ = (int)((ulonglong)dStack_808 >> 0x20);
                  dVar183 = auVar157._8_8_;
                  dVar171 = dVar183 * dVar183 + local_810 * local_810 + local_800 * local_800;
                  local_988._s_0.X = local_810;
                  local_988._s_0.Y = dStack_808;
                  local_988._s_0.Z = local_800;
                  if (dVar171 != __real_3ff0000000000000) {
                    if (__real_3e45798ee0000000 <= dVar171) {
                      local_870 = __real_3ff0000000000000 / SQRT(dVar171);
                      local_988._s_0.X = local_810 * local_870;
                      local_988._s_0.Y = dVar183 * local_870;
                      local_988._s_0.Z = local_800 * local_870;
                    }
                    else {
                      local_988._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                      local_988._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                      local_988._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                      local_988._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                      local_988._s_0.Z = (double)CONCAT44(uVar150,uVar147);
                    }
                  }
                  UE::Math::TQuat<double>::FindBetweenNormals
                            ((TQuat<double> *)local_7c8,(TVector<double> *)&local_988._s_0,
                             (TVector<double> *)&local_a48);
                  dVar164 = local_7b8._0_8_;
                  uVar147 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                  uVar150 = (undefined4)
                            ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                            0x20);
                  dVar183 = local_7c8._0_8_;
                  auVar148._8_8_ = local_7c8._8_8_;
                  auVar158._8_4_ = local_7c8._0_4_;
                  auVar158._0_8_ = dVar183;
                  auVar158._12_4_ = local_7c8._4_4_;
                  dVar170 = local_7b8._8_8_;
                  auVar148._0_8_ = auVar148._8_8_;
                  auVar86._8_4_ = local_7b8._0_4_;
                  auVar86._0_8_ = dVar164;
                  auVar86._12_4_ = local_7b8._4_4_;
                  dVar197 = dVar183 * local_518.Rotation.ZW.m128d_f64[1] *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                            local_518.Rotation.XY.m128d_f64[0] * dVar170 +
                            local_518.Rotation.ZW.m128d_f64[0] * auVar148._8_8_ *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                            dVar164 * local_518.Rotation.XY.m128d_f64[1] *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  dVar201 = auVar158._8_8_ * local_518.Rotation.ZW.m128d_f64[0] *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                            local_518.Rotation.XY.m128d_f64[1] * dVar170 +
                            local_518.Rotation.ZW.m128d_f64[1] * auVar148._8_8_ *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                            auVar86._8_8_ * local_518.Rotation.XY.m128d_f64[0] *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  auVar87._8_4_ = SUB84(dVar201,0);
                  auVar87._0_8_ = dVar197;
                  auVar87._12_4_ = (int)((ulonglong)dVar201 >> 0x20);
                  dVar171 = dVar183 * local_518.Rotation.XY.m128d_f64[1] *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                            local_518.Rotation.ZW.m128d_f64[0] * dVar170 +
                            local_518.Rotation.XY.m128d_f64[0] * auVar148._8_8_ *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                            dVar164 * local_518.Rotation.ZW.m128d_f64[1] *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  dVar183 = dVar183 * local_518.Rotation.XY.m128d_f64[0] *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                            local_518.Rotation.ZW.m128d_f64[1] * dVar170 +
                            local_518.Rotation.XY.m128d_f64[1] * auVar148._8_8_ *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                            dVar164 * local_518.Rotation.ZW.m128d_f64[0] *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  auVar117._8_4_ = SUB84(dVar183,0);
                  auVar117._0_8_ = dVar171;
                  auVar117._12_4_ = (int)((ulonglong)dVar183 >> 0x20);
                  dVar164 = dVar171 * dVar171 + dVar197 * dVar197;
                  dVar170 = auVar117._8_8_ * dVar183 + auVar87._8_8_ * dVar201;
                  auVar88._8_4_ = SUB84(dVar170,0);
                  auVar88._0_8_ = dVar164;
                  auVar88._12_4_ = (int)((ulonglong)dVar170 >> 0x20);
                  auVar89._0_8_ = auVar88._8_8_ + dVar164;
                  auVar89._8_8_ = dVar164 + dVar170;
                  auVar76 = sqrtpd(auVar148,auVar89);
                  local_868 = __real_3e45798ee0000000;
                  auVar80 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar76);
                  uVar68 = -(ulonglong)(__real_3e45798ee0000000 <= auVar89._0_8_);
                  uVar72 = -(ulonglong)(__real_3e45798ee0000000 <= auVar89._8_8_);
                  uVar46 = (uint)(uVar68 >> 0x20);
                  uVar55 = (uint)(uVar72 >> 0x20);
                  auVar118._0_4_ =
                       ~(uint)uVar68 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
                  ;
                  auVar118._4_4_ =
                       ~uVar46 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
                  auVar118._8_4_ =
                       ~(uint)uVar72 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
                  ;
                  auVar118._12_4_ =
                       ~uVar55 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                                       );
                  auVar199._0_8_ = uVar68 & (ulonglong)(auVar80._0_8_ * dVar197);
                  uVar65 = uVar72 & (ulonglong)(auVar80._8_8_ * dVar201);
                  auVar199._8_4_ = (undefined4)uVar65;
                  auVar199._12_4_ = (undefined4)(uVar65 >> 0x20);
                  local_518.Rotation.XY.m128d_f64 = (double  [2])(auVar199 | auVar118);
                  auVar76 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar76);
                  auVar119._0_8_ = (ulonglong)(auVar76._0_8_ * dVar171) & uVar68;
                  uVar65 = (ulonglong)(auVar76._8_8_ * dVar183) & uVar72;
                  auVar119._8_4_ = (undefined4)uVar65;
                  auVar119._12_4_ = (undefined4)(uVar65 >> 0x20);
                  auVar138._0_4_ =
                       ~(uint)uVar68 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
                  ;
                  auVar138._4_4_ =
                       ~uVar46 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                                       );
                  auVar138._8_4_ =
                       ~(uint)uVar72 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
                  ;
                  auVar138._12_4_ =
                       ~uVar55 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                                       );
                  local_518.Rotation.ZW.m128d_f64 = (double  [2])(auVar138 | auVar119);
                  dVar171 = __real_3ff0000000000000;
                }
              }
              pTVar62 = local_ad8;
              uVar46 = uVar36;
              if ((int)uVar59 < local_ad8->ArrayNum) {
                uVar46 = uVar54;
              }
              if (uVar46 == 0) {
                local_a18 = local_518.Rotation.ZW.m128d_f64;
                bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar33) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar147 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar150 = (undefined4)
                          ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                          0x20);
              }
              pFVar42 = (pTVar62->AllocatorInstance).Data;
              local_9d8 = (param_10->field0_0x0)._s_0.Z -
                          *(double *)(pFVar42 + uVar51 * 0x18 + 0x10);
              dVar183 = (param_10->field0_0x0)._s_0.Y - *(double *)(pFVar42 + uVar51 * 0x18 + 8);
              local_a28 = (TTransform<double> *)
                          ((param_10->field0_0x0)._s_0.X - *(double *)(pFVar42 + uVar51 * 0x18));
              dStack_a40 = dVar183;
              local_a48 = local_a28;
              local_a38 = local_9d8;
              if (((dVar75 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_9->field0_0x0
                                                    >> 0x20) & uVar48,
                                              (uint)*(undefined8 *)&param_9->field0_0x0 & uVar47))
                  || (uVar194 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 8),
                     dVar75 < (double)CONCAT44((uint)((ulonglong)uVar194 >> 0x20) & uVar48,
                                               (uint)uVar194 & uVar47))) ||
                 (uVar194 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 0x10),
                 dVar75 < (double)CONCAT44((uint)((ulonglong)uVar194 >> 0x20) & uVar48,
                                           (uint)uVar194 & uVar47))) {
                dVar164 = local_518.Rotation.XY.m128d_f64[0];
                dVar170 = local_518.Rotation.XY.m128d_f64[1];
                local_a18[0] = local_518.Rotation.ZW.m128d_f64[0];
                local_a18[1] = local_518.Rotation.ZW.m128d_f64[1];
                if (((dVar75 < (double)CONCAT44((uint)((ulonglong)
                                                       *(undefined8 *)&param_8->field0_0x0 >> 0x20)
                                                & uVar48,(uint)*(undefined8 *)&param_8->field0_0x0 &
                                                         uVar47)) ||
                    (uVar194 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8),
                    dVar75 < (double)CONCAT44((uint)((ulonglong)uVar194 >> 0x20) & uVar48,
                                              (uint)uVar194 & uVar47))) ||
                   (uVar194 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 0x10),
                   pTVar155 = local_a28,
                   dVar75 < (double)CONCAT44((uint)((ulonglong)uVar194 >> 0x20) & uVar48,
                                             (uint)uVar194 & uVar47))) {
                  auVar76 = *(undefined1 (*) [16])&param_8->field0_0x0;
                  dVar171 = (param_8->field0_0x0)._s_0.Z;
                  auVar174._8_8_ = 0;
                  auVar174._0_8_ = dVar171;
                  dVar112 = auVar76._8_8_;
                  auVar80 = blendpd(auVar76,auVar174,2);
                  auVar156 = blendpd((undefined1  [16])local_518.Rotation.XY.m128d_f64,
                                     (undefined1  [16])local_518.Rotation.ZW.m128d_f64,2);
                  auVar90._8_4_ = local_518.Rotation.ZW.m128d_f64[0]._0_4_;
                  auVar90._0_8_ = dVar170;
                  auVar90._12_4_ = local_518.Rotation.ZW.m128d_f64[0]._4_4_;
                  auVar176._0_8_ = dVar112 * dVar164 - dVar170 * auVar76._0_8_;
                  auVar176._8_8_ = dVar171 * dVar170 - auVar90._8_8_ * dVar112;
                  auVar120._0_8_ = auVar80._0_8_ * local_a18[0] - dVar171 * auVar156._0_8_;
                  auVar120._8_8_ = auVar80._8_8_ * local_a18[1] - auVar156._8_8_ * 0.0;
                  auVar80 = blendpd(auVar176,auVar120,2);
                  dVar197 = auVar176._8_8_ + auVar176._8_8_;
                  dVar201 = auVar120._0_8_ + auVar120._0_8_;
                  uVar151 = SUB84(dVar201,0);
                  uVar152 = (undefined4)((ulonglong)dVar201 >> 0x20);
                  auVar177._0_8_ = auVar80._0_8_ + auVar80._0_8_;
                  auVar177._8_8_ = auVar80._8_8_ + auVar80._8_8_;
                  auVar139._8_4_ = uVar151;
                  auVar139._0_8_ = dVar197;
                  auVar139._12_4_ = uVar152;
                  auVar91._8_4_ = uVar151;
                  auVar91._0_8_ = dVar197;
                  auVar91._12_4_ = uVar152;
                  auVar121._8_4_ = uVar151;
                  auVar121._0_8_ = dVar197;
                  auVar121._12_4_ = uVar152;
                  auVar80 = blendpd(auVar121,auVar177,2);
                  auVar140._0_8_ = auVar139._8_8_ * dVar164 - dVar197 * dVar170;
                  auVar140._8_8_ = auVar177._0_8_ * dVar170 - auVar91._8_8_ * local_a18[0];
                  auVar92._8_4_ = SUB84(auVar177._8_8_,0);
                  auVar92._0_8_ = auVar177._0_8_;
                  auVar92._12_4_ = (int)((ulonglong)auVar177._8_8_ >> 0x20);
                  auVar122._0_8_ = auVar80._0_8_ * local_a18[0] - auVar177._0_8_ * auVar156._0_8_;
                  auVar122._8_8_ = auVar80._8_8_ * local_a18[1] - auVar92._8_8_ * auVar156._8_8_;
                  auVar93._8_4_ = SUB84(auVar140._8_8_,0);
                  auVar93._0_8_ = auVar140._0_8_;
                  auVar93._12_4_ = (int)((ulonglong)auVar140._8_8_ >> 0x20);
                  dVar197 = dVar197 * local_a18[1] + auVar76._0_8_ + auVar93._8_8_;
                  dVar201 = dVar201 * local_a18[1] + dVar112 + auVar122._0_8_;
                  uVar151 = (undefined4)((ulonglong)dVar201 >> 0x20);
                  auVar76 = blendpd(auVar140,auVar122,2);
                  auVar21._4_8_ = dVar112;
                  auVar21._0_4_ = (int)((ulonglong)dVar197 >> 0x20);
                  auVar168._0_8_ = auVar21._0_8_ << 0x20;
                  auVar168._8_4_ = SUB84(dVar201,0);
                  auVar168._12_4_ = uVar151;
                  local_6f8 = auVar177._0_8_ * local_a18[1] + dVar171 + auVar76._0_8_;
                  dVar165 = auVar168._8_8_;
                  local_708._8_4_ = SUB84(dVar201,0);
                  local_708._0_8_ = dVar197;
                  local_708._12_4_ = uVar151;
                  dVar112 = dVar165 * dVar165 + dVar197 * dVar197 + local_6f8 * local_6f8;
                  dVar171 = local_6f8;
                  if (dVar112 != __real_3ff0000000000000) {
                    if (__real_3e45798ee0000000 <= dVar112) {
                      local_860 = __real_3ff0000000000000 / SQRT(dVar112);
                      dVar197 = dVar197 * local_860;
                      dVar165 = dVar165 * local_860;
                      dVar171 = local_6f8 * local_860;
                    }
                    else {
                      auVar22._4_8_ = dVar201;
                      auVar22._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                      auVar169._0_8_ = auVar22._0_8_ << 0x20;
                      auVar169._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                      auVar169._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                      dVar165 = auVar169._8_8_;
                      dVar171 = (double)CONCAT44(uVar150,uVar147);
                      dVar197 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                 _4_4_,UE::Math::TVector<double>::ZeroVector.
                                                       field0_0x0._0_4_);
                    }
                  }
                  dVar201 = dVar183 * dVar165 + (double)local_a28 * dVar197 + local_9d8 * dVar171;
                  pTVar155 = (TTransform<double> *)((double)local_a28 - dVar201 * dVar197);
                  dVar183 = dVar183 - dVar201 * dVar165;
                  local_a38 = local_9d8 - dVar201 * dVar171;
                  dStack_a40 = dVar183;
                  local_a48 = pTVar155;
                  dVar171 = __real_3ff0000000000000;
                }
                if (((dVar75 < (double)CONCAT44((uint)((ulonglong)pTVar155 >> 0x20) & uVar48,
                                                (uint)pTVar155 & uVar47)) ||
                    (dVar75 < (double)CONCAT44((uint)((ulonglong)dVar183 >> 0x20) & uVar48,
                                               SUB84(dVar183,0) & uVar47))) ||
                   (dVar75 < (double)CONCAT44((uint)((ulonglong)local_a38 >> 0x20) & uVar48,
                                              (uint)local_a38 & uVar47))) {
                  if (((dVar75 < (double)CONCAT44((uint)((ulonglong)
                                                         *(undefined8 *)&param_9->field0_0x0 >> 0x20
                                                        ) & uVar48,
                                                  (uint)*(undefined8 *)&param_9->field0_0x0 & uVar47
                                                 )) ||
                      (uVar194 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 8),
                      dVar75 < (double)CONCAT44((uint)((ulonglong)uVar194 >> 0x20) & uVar48,
                                                (uint)uVar194 & uVar47))) ||
                     (uVar194 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 0x10),
                     dVar75 < (double)CONCAT44((uint)((ulonglong)uVar194 >> 0x20) & uVar48,
                                               (uint)uVar194 & uVar47))) {
                    bVar33 = false;
                  }
                  else {
                    bVar33 = true;
                  }
                  if (!bVar33) {
                    dVar197 = dVar183 * dVar183 + (double)pTVar155 * (double)pTVar155 +
                              (double)local_a38 * (double)local_a38;
                    if (dVar197 == dVar171) {
                      dStack_a40 = dVar183;
                      local_a48 = pTVar155;
                    }
                    else if (__real_3e45798ee0000000 <= dVar197) {
                      local_858 = dVar171 / SQRT(dVar197);
                      local_a48 = (TTransform<double> *)(local_858 * (double)pTVar155);
                      local_a38 = local_858 * (double)local_a38;
                      dStack_a40 = local_858 * dVar183;
                    }
                    else {
                      local_a48._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                      local_a48._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                      dStack_a40._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                      dStack_a40._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                      local_a38 = CONCAT44(uVar150,uVar147);
                    }
                    auVar76 = *(undefined1 (*) [16])&param_9->field0_0x0;
                    dVar171 = (param_9->field0_0x0)._s_0.Z;
                    auVar178._8_8_ = 0;
                    auVar178._0_8_ = dVar171;
                    auVar156 = blendpd((undefined1  [16])local_518.Rotation.XY.m128d_f64,
                                       (undefined1  [16])local_518.Rotation.ZW.m128d_f64,2);
                    dVar201 = auVar76._8_8_;
                    auVar159._0_8_ = dVar201 * dVar164 - auVar76._0_8_ * dVar170;
                    auVar159._8_8_ = dVar171 * dVar170 - dVar201 * local_a18[0];
                    auVar80 = blendpd(auVar76,auVar178,2);
                    auVar123._0_8_ = auVar80._0_8_ * local_a18[0] - dVar171 * auVar156._0_8_;
                    auVar123._8_8_ = auVar80._8_8_ * local_a18[1] - auVar156._8_8_ * 0.0;
                    auVar80 = blendpd(auVar159,auVar123,2);
                    auVar160._0_8_ = auVar80._0_8_ + auVar80._0_8_;
                    auVar160._8_8_ = auVar80._8_8_ + auVar80._8_8_;
                    dVar183 = auVar159._8_8_ + auVar159._8_8_;
                    dVar197 = auVar123._0_8_ + auVar123._0_8_;
                    uVar151 = SUB84(dVar197,0);
                    uVar152 = (undefined4)((ulonglong)dVar197 >> 0x20);
                    auVar141._8_4_ = uVar151;
                    auVar141._0_8_ = dVar183;
                    auVar141._12_4_ = uVar152;
                    auVar94._8_4_ = uVar151;
                    auVar94._0_8_ = dVar183;
                    auVar94._12_4_ = uVar152;
                    auVar124._8_4_ = uVar151;
                    auVar124._0_8_ = dVar183;
                    auVar124._12_4_ = uVar152;
                    auVar80 = blendpd(auVar124,auVar160,2);
                    auVar142._0_8_ = auVar141._8_8_ * dVar164 - dVar183 * dVar170;
                    auVar142._8_8_ = auVar160._0_8_ * dVar170 - auVar94._8_8_ * local_a18[0];
                    auVar95._8_4_ = SUB84(auVar160._8_8_,0);
                    auVar95._0_8_ = auVar160._0_8_;
                    auVar95._12_4_ = (int)((ulonglong)auVar160._8_8_ >> 0x20);
                    auVar125._0_8_ = auVar80._0_8_ * local_a18[0] - auVar160._0_8_ * auVar156._0_8_;
                    auVar125._8_8_ = auVar80._8_8_ * local_a18[1] - auVar95._8_8_ * auVar156._8_8_;
                    auVar96._8_4_ = SUB84(auVar142._8_8_,0);
                    auVar96._0_8_ = auVar142._0_8_;
                    auVar96._12_4_ = (int)((ulonglong)auVar142._8_8_ >> 0x20);
                    auVar80 = blendpd(auVar142,auVar125,2);
                    local_7e8 = auVar160._0_8_ * local_a18[1] + dVar171 + auVar80._0_8_;
                    dVar171 = dVar183 * local_a18[1] + auVar76._0_8_ + auVar96._8_8_;
                    dVar183 = dVar197 * local_a18[1] + dVar201 + auVar125._0_8_;
                    uVar151 = SUB84(dVar183,0);
                    uVar152 = (undefined4)((ulonglong)dVar183 >> 0x20);
                    auVar23._4_8_ = auVar160._8_8_ * local_a18[1] + 0.0 + auVar80._8_8_;
                    auVar23._0_4_ = (int)((ulonglong)dVar171 >> 0x20);
                    auVar161._0_8_ = auVar23._0_8_ << 0x20;
                    auVar161._8_4_ = uVar151;
                    auVar161._12_4_ = uVar152;
                    dVar164 = auVar161._8_8_;
                    local_7f8._8_4_ = uVar151;
                    local_7f8._0_8_ = dVar171;
                    local_7f8._12_4_ = uVar152;
                    dVar183 = dVar164 * dVar164 + dVar171 * dVar171 + local_7e8 * local_7e8;
                    if (dVar183 == __real_3ff0000000000000) {
                      dStack_968._0_4_ = uVar151;
                      local_970 = dVar171;
                      dStack_968._4_4_ = uVar152;
                      local_960 = local_7e8;
                    }
                    else if (__real_3e45798ee0000000 <= dVar183) {
                      local_850 = __real_3ff0000000000000 / SQRT(dVar183);
                      local_960 = local_7e8 * local_850;
                      dStack_968 = dVar164 * local_850;
                      local_970 = dVar171 * local_850;
                    }
                    else {
                      local_970._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                      local_970._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                      dStack_968._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                      dStack_968._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                      local_960 = CONCAT44(uVar150,uVar147);
                    }
                    local_a18 = local_518.Rotation.ZW.m128d_f64;
                    UE::Math::TQuat<double>::FindBetweenNormals
                              ((TQuat<double> *)local_7a8,(TVector<double> *)&local_970,
                               (TVector<double> *)&local_a48);
                    dVar183 = local_518.Rotation.ZW.m128d_f64[0];
                    dVar165 = local_798._0_8_;
                    dVar170 = local_7a8._0_8_;
                    dVar197 = local_7a8._8_8_;
                    dVar164 = local_518.Rotation.ZW.m128d_f64[1];
                    auVar179._8_4_ = local_7a8._0_4_;
                    auVar179._0_8_ = dVar170;
                    auVar179._12_4_ = local_7a8._4_4_;
                    dVar186 = local_798._8_8_;
                    auVar126._8_4_ = local_7a8._8_4_;
                    auVar126._0_8_ = dVar197;
                    auVar126._12_4_ = local_7a8._12_4_;
                    auVar97._8_4_ = local_798._0_4_;
                    auVar97._0_8_ = dVar165;
                    auVar97._12_4_ = local_798._4_4_;
                    dVar201 = dVar170 * local_518.Rotation.XY.m128d_f64[1] *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                              dVar183 * dVar186 +
                              dVar197 * local_518.Rotation.XY.m128d_f64[0] *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                              dVar165 * dVar164 *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                    dVar112 = auVar179._8_8_ * local_518.Rotation.XY.m128d_f64[0] *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                              dVar164 * dVar186 +
                              auVar126._8_8_ * local_518.Rotation.XY.m128d_f64[1] *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                              auVar97._8_8_ * dVar183 *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                    auVar98._8_4_ = SUB84(dVar112,0);
                    auVar98._0_8_ = dVar201;
                    auVar98._12_4_ = (int)((ulonglong)dVar112 >> 0x20);
                    dVar171 = dVar170 * dVar164 *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                              local_518.Rotation.XY.m128d_f64[0] * dVar186 +
                              dVar197 * dVar183 *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                              dVar165 * local_518.Rotation.XY.m128d_f64[1] *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                    dVar183 = dVar170 * dVar183 *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                              local_518.Rotation.XY.m128d_f64[1] * dVar186 +
                              dVar197 * dVar164 *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                              dVar165 * local_518.Rotation.XY.m128d_f64[0] *
                              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                    auVar127._8_4_ = SUB84(dVar183,0);
                    auVar127._0_8_ = dVar171;
                    auVar127._12_4_ = (int)((ulonglong)dVar183 >> 0x20);
                    dVar164 = dVar171 * dVar171 + dVar201 * dVar201;
                    dVar170 = auVar127._8_8_ * dVar183 + auVar98._8_8_ * dVar112;
                    auVar99._8_4_ = SUB84(dVar170,0);
                    auVar99._0_8_ = dVar164;
                    auVar99._12_4_ = (int)((ulonglong)dVar170 >> 0x20);
                    auVar100._0_8_ = auVar99._8_8_ + dVar164;
                    auVar100._8_8_ = dVar164 + dVar170;
                    auVar76 = sqrtpd((undefined1  [16])local_518.Rotation.ZW.m128d_f64,auVar100);
                    local_848 = __real_3e45798ee0000000;
                    auVar80 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                    auVar76);
                    uVar68 = -(ulonglong)(__real_3e45798ee0000000 <= auVar100._0_8_);
                    uVar72 = -(ulonglong)(__real_3e45798ee0000000 <= auVar100._8_8_);
                    uVar46 = (uint)(uVar68 >> 0x20);
                    uVar55 = (uint)(uVar72 >> 0x20);
                    auVar128._0_4_ =
                         ~(uint)uVar68 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                    auVar128._4_4_ =
                         ~uVar46 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                         0x20);
                    auVar128._8_4_ =
                         ~(uint)uVar72 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                    auVar128._12_4_ =
                         ~uVar55 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                         0x20);
                    auVar200._0_8_ = uVar68 & (ulonglong)(auVar80._0_8_ * dVar171);
                    uVar65 = uVar72 & (ulonglong)(auVar80._8_8_ * dVar183);
                    auVar200._8_4_ = (undefined4)uVar65;
                    auVar200._12_4_ = (undefined4)(uVar65 >> 0x20);
                    local_518.Rotation.XY.m128d_f64 = (double  [2])(auVar200 | auVar128);
                    auVar76 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                    auVar76);
                    auVar129._0_8_ = (ulonglong)(auVar76._0_8_ * dVar201) & uVar68;
                    uVar65 = (ulonglong)(auVar76._8_8_ * dVar112) & uVar72;
                    auVar129._8_4_ = (undefined4)uVar65;
                    auVar129._12_4_ = (undefined4)(uVar65 >> 0x20);
                    auVar143._0_4_ =
                         ~(uint)uVar68 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
                    auVar143._4_4_ =
                         ~uVar46 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                         0x20);
                    auVar143._8_4_ =
                         ~(uint)uVar72 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                    auVar143._12_4_ =
                         ~uVar55 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                         0x20);
                    local_518.Rotation.ZW.m128d_f64 = (double  [2])(auVar143 | auVar129);
                  }
                }
              }
              pTVar60 = local_a78;
              fVar73 = __real_3f800000;
              local_a18 = local_518.Rotation.ZW.m128d_f64;
              if (param_13 < __real_3f800000) {
                fVar153 = param_13;
                if (__real_3f800000 <= param_13) {
                  fVar153 = __real_3f800000;
                }
                uVar46 = uVar36;
                if ((int)uVar59 < (int)local_a50) {
                  uVar46 = uVar54;
                }
                if (fVar153 <= __real_00000000) {
                  fVar153 = __real_00000000;
                }
                if ((uVar46 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar155 = FRigVMMathLibrary::LerpTransform
                                     (&local_148,
                                      (TTransform<double> *)(local_a58.Data + uVar51 * 0x60),
                                      &local_518,fVar153);
                pTVar60 = local_a78;
                local_518.Rotation.XY.m128d_f64 = *&(pTVar155->Rotation).XY.m128d_f64;
                local_518.Rotation.ZW.m128d_f64 = *&(pTVar155->Rotation).ZW.m128d_f64;
                local_518.Translation.XY.m128d_f64[0] = (pTVar155->Translation).XY.m128d_f64[0];
                local_518.Translation.XY.m128d_f64[1] = (pTVar155->Translation).XY.m128d_f64[1];
                local_518.Translation.ZW.m128d_f64[0] = (pTVar155->Translation).ZW.m128d_f64[0];
                local_518.Translation.ZW.m128d_f64[1] = (pTVar155->Translation).ZW.m128d_f64[1];
                local_518.Scale3D.XY.m128d_f64[0] = (pTVar155->Scale3D).XY.m128d_f64[0];
                local_518.Scale3D.XY.m128d_f64[1] = (pTVar155->Scale3D).XY.m128d_f64[1];
                local_518.Scale3D.ZW.m128d_f64[0] = (pTVar155->Scale3D).ZW.m128d_f64[0];
                local_518.Scale3D.ZW.m128d_f64[1] = (pTVar155->Scale3D).ZW.m128d_f64[1];
                if ((param_14) && (local_ad0->ArrayNum == 0)) {
                  bVar33 = true;
                }
                else {
                  bVar33 = false;
                }
                uVar46 = uVar36;
                if ((int)uVar59 < local_a78->ArrayNum) {
                  uVar46 = uVar54;
                }
                if ((uVar46 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar10 = *(ushort *)((pTVar60->AllocatorInstance).Data + uVar51 * 0x20 + 0xc);
                uVar46 = (uint)uVar10;
                if (uVar10 == 0xffff) {
                  uVar46 = 0xffffffff;
                }
                pTVar155 = &local_678;
                local_678.Rotation.XY.m128d_f64[0] = local_518.Rotation.XY.m128d_f64[0];
                local_678.Rotation.XY.m128d_f64[1] = local_518.Rotation.XY.m128d_f64[1];
                local_678.Rotation.ZW.m128d_f64[0] = local_518.Rotation.ZW.m128d_f64[0];
                local_678.Rotation.ZW.m128d_f64[1] = local_518.Rotation.ZW.m128d_f64[1];
                local_678.Translation.XY.m128d_f64[0] = local_518.Translation.XY.m128d_f64[0];
                local_678.Translation.XY.m128d_f64[1] = local_518.Translation.XY.m128d_f64[1];
                local_678.Translation.ZW.m128d_f64[0] = local_518.Translation.ZW.m128d_f64[0];
                local_678.Translation.ZW.m128d_f64[1] = local_518.Translation.ZW.m128d_f64[1];
                local_678.Scale3D.XY.m128d_f64[0] = local_518.Scale3D.XY.m128d_f64[0];
                local_678.Scale3D.XY.m128d_f64[1] = local_518.Scale3D.XY.m128d_f64[1];
                local_678.Scale3D.ZW.m128d_f64[0] = local_518.Scale3D.ZW.m128d_f64[0];
                local_678.Scale3D.ZW.m128d_f64[1] = local_518.Scale3D.ZW.m128d_f64[1];
              }
              else {
                if ((param_14) && (local_ad0->ArrayNum == 0)) {
                  bVar33 = true;
                }
                else {
                  bVar33 = false;
                }
                uVar46 = uVar36;
                if ((int)uVar59 < local_a78->ArrayNum) {
                  uVar46 = uVar54;
                }
                if (uVar46 == 0) {
                  bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar34) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                }
                else {
                  local_a18[0] = local_518.Rotation.ZW.m128d_f64[0];
                  local_a18[1] = local_518.Rotation.ZW.m128d_f64[1];
                  local_518.Rotation.ZW.m128d_f64[0] = local_a18[0];
                  local_518.Rotation.ZW.m128d_f64[1] = local_a18[1];
                }
                uVar10 = *(ushort *)((pTVar60->AllocatorInstance).Data + uVar51 * 0x20 + 0xc);
                uVar46 = (uint)uVar10;
                if (uVar10 == 0xffff) {
                  uVar46 = 0xffffffff;
                }
                pTVar155 = &local_6d8;
                local_6d8.Translation.XY.m128d_f64[0] = local_518.Translation.XY.m128d_f64[0];
                local_6d8.Translation.XY.m128d_f64[1] = local_518.Translation.XY.m128d_f64[1];
                local_6d8.Translation.ZW.m128d_f64[0] = local_518.Translation.ZW.m128d_f64[0];
                local_6d8.Translation.ZW.m128d_f64[1] = local_518.Translation.ZW.m128d_f64[1];
                local_6d8.Scale3D.XY.m128d_f64[0] = local_518.Scale3D.XY.m128d_f64[0];
                local_6d8.Scale3D.XY.m128d_f64[1] = local_518.Scale3D.XY.m128d_f64[1];
                local_6d8.Scale3D.ZW.m128d_f64[0] = local_518.Scale3D.ZW.m128d_f64[0];
                local_6d8.Scale3D.ZW.m128d_f64[1] = local_518.Scale3D.ZW.m128d_f64[1];
                local_6d8.Rotation.XY.m128d_f64 = local_518.Rotation.XY.m128d_f64;
                local_6d8.Rotation.ZW.m128d_f64[0] = local_518.Rotation.ZW.m128d_f64[0];
                local_6d8.Rotation.ZW.m128d_f64[1] = local_518.Rotation.ZW.m128d_f64[1];
              }
              pUVar70 = local_a70;
              URigHierarchy::SetGlobalTransformByIndex
                        (local_a70,uVar46,pTVar155,false,bVar33,false,false);
              iVar39 = pTVar60->ArrayNum;
              uVar51 = uVar51 + 1;
              uVar65 = (ulonglong)(uVar59 + 1);
            } while ((int)(uVar59 + 1) < iVar39);
          }
          pTVar71 = local_ad0;
          dVar75 = __real_3e45798ee0000000;
          if (0 < local_ad0->ArrayNum) {
            local_4b8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_4b8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_4b8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_4b8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_4b8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_4b8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            if ((iVar39 < 1) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pUVar70 = local_a70;
            pFVar42 = (pTVar60->AllocatorInstance).Data;
            local_938._0_8_ = *(undefined8 *)pFVar42;
            local_938.Name.Number = *(uint *)(pFVar42 + 8);
            URigHierarchy::GetFirstParent(local_a70,&local_a00,&local_938);
            bVar33 = ::FName::IsWithinBounds(local_a00.Name.ComparisonIndex);
            if (((bVar33) &&
                (CONCAT44(local_a00.Name.Number,local_a00.Name.ComparisonIndex.Value) != 0)) &&
               (local_a00.Type != None)) {
              local_928.Name.Number = local_a00.Name.Number;
              iVar39 = URigHierarchy::GetIndex(pUVar70,&local_928,true);
              URigHierarchy::GetGlobalTransformByIndex(pUVar70,&local_2c8,iVar39,false);
              local_4b8.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
              local_4b8.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
              local_4b8.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
              local_4b8.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
              local_4b8.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
              local_4b8.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
              local_4b8.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
              local_4b8.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
              local_4b8.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
              local_4b8.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
              local_4b8.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
              local_4b8.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
            }
            pUVar70 = local_a70;
            iVar39 = pTVar60->ArrayNum;
            if (0 < iVar39) {
              local_a88 = 0;
              uVar51 = uVar52;
              uVar65 = uVar52;
              uVar68 = uVar52;
              do {
                uVar48 = (uint)uVar65;
                uVar47 = uVar37;
                if ((int)uVar48 < iVar39) {
                  uVar47 = ~uVar48 >> 0x1f;
                }
                if ((uVar47 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar47 = 0xffffffff;
                uVar10 = *(ushort *)((pTVar60->AllocatorInstance).Data + uVar68 + 0xc);
                if (uVar10 != 0xffff) {
                  uVar47 = (uint)uVar10;
                }
                URigHierarchy::GetLocalTransformByIndex(pUVar70,&local_268,uVar47,false);
                dVar170 = local_268.Scale3D.ZW.m128d_f64[1];
                dVar164 = local_268.Scale3D.ZW.m128d_f64[0];
                dVar183 = local_268.Scale3D.XY.m128d_f64[1];
                dVar171 = local_268.Scale3D.XY.m128d_f64[0];
                _Var32.m128d_f64 = local_268.Translation.ZW.m128d_f64;
                _Var31.m128d_f64 = local_268.Translation.XY.m128d_f64;
                _Var30.m128d_f64 = local_268.Rotation.ZW.m128d_f64;
                _Var29.m128d_f64 = local_268.Rotation.XY.m128d_f64;
                uVar47 = uVar37;
                if ((int)uVar48 < local_a08->ArrayNum) {
                  uVar47 = ~uVar48 >> 0x1f;
                }
                if ((uVar47 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar65 = (ulonglong)(uVar48 + 1);
                local_a88 = local_a88 + 1;
                uVar68 = uVar68 + 0x20;
                pFVar42 = (local_a08->AllocatorInstance).Data;
                *(double (*) [2])(pFVar42 + uVar51) = _Var29.m128d_f64;
                *(double (*) [2])(pFVar42 + uVar51 + 0x10) = _Var30.m128d_f64;
                *(double (*) [2])(pFVar42 + uVar51 + 0x20) = _Var31.m128d_f64;
                *(double (*) [2])(pFVar42 + uVar51 + 0x30) = _Var32.m128d_f64;
                *(double *)(pFVar42 + uVar51 + 0x40) = dVar171;
                *(double *)(pFVar42 + uVar51 + 0x40 + 8) = dVar183;
                *(double *)(pFVar42 + uVar51 + 0x50) = dVar164;
                *(double *)(pFVar42 + uVar51 + 0x50 + 8) = dVar170;
                uVar51 = uVar51 + 0x60;
                iVar39 = pTVar60->ArrayNum;
                pTVar71 = local_ad0;
              } while ((int)(uVar48 + 1) < iVar39);
            }
            if (0 < iVar39) {
              local_ad8 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
              local_aa0 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
              local_a88 = 0;
              uVar51 = uVar52;
              uVar65 = uVar52;
              do {
                uVar48 = (uint)uVar51;
                iVar39 = pTVar71->ArrayNum;
                uVar46 = ~uVar48 >> 0x1f;
                uVar47 = uVar37;
                if ((int)uVar48 < (param_16->ItemRotationA).ArrayNum) {
                  uVar47 = uVar46;
                }
                if ((uVar47 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                if (*(int *)((param_16->ItemRotationA).AllocatorInstance.Data + local_a88) < iVar39)
                {
                  iVar39 = pTVar71->ArrayNum;
                  uVar47 = uVar37;
                  if ((int)uVar48 < (param_16->ItemRotationB).ArrayNum) {
                    uVar47 = uVar46;
                  }
                  if ((uVar47 == 0) &&
                     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar33)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  if (*(int *)((param_16->ItemRotationB).AllocatorInstance.Data + uVar65 * 4) <
                      iVar39) {
                    uVar47 = uVar36;
                    if ((int)uVar48 < (param_16->ItemRotationA).ArrayNum) {
                      uVar47 = uVar46;
                    }
                    if ((uVar47 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    uVar47 = *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + uVar65 * 4
                                      );
                    uVar59 = uVar36;
                    if ((int)uVar47 < pTVar71->ArrayNum) {
                      uVar59 = ~uVar47 >> 0x1f;
                    }
                    if ((uVar59 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pFVar50 = pTVar71->DataPtr + (int)uVar47;
                    local_9a8[0] = (pFVar50->Rotation).X;
                    local_9a8[1] = (pFVar50->Rotation).Y;
                    pFVar50 = pTVar71->DataPtr + (int)uVar47;
                    local_998[0] = (pFVar50->Rotation).Z;
                    local_998[1] = (pFVar50->Rotation).W;
                    uVar47 = uVar36;
                    if ((int)uVar48 < (param_16->ItemRotationB).ArrayNum) {
                      uVar47 = uVar46;
                    }
                    if ((uVar47 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    uVar47 = *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + uVar65 * 4
                                      );
                    uVar59 = uVar36;
                    if ((int)uVar47 < pTVar71->ArrayNum) {
                      uVar59 = ~uVar47 >> 0x1f;
                    }
                    if ((uVar59 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pFVar50 = pTVar71->DataPtr + (int)uVar47;
                    local_898.X = (pFVar50->Rotation).X;
                    local_898.Y = (pFVar50->Rotation).Y;
                    pdVar5 = &pTVar71->DataPtr[(int)uVar47].Rotation.Z;
                    local_898.Z = *pdVar5;
                    local_898.W = pdVar5[1];
                    uVar47 = uVar35;
                    if ((int)uVar48 < (param_16->ItemRotationB).ArrayNum) {
                      uVar47 = uVar46;
                    }
                    if ((uVar47 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pFVar42 = (param_16->ItemRotationB).AllocatorInstance.Data;
                    uVar47 = uVar35;
                    if ((int)uVar48 < (param_16->ItemRotationA).ArrayNum) {
                      uVar47 = uVar46;
                    }
                    if ((uVar47 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    if (*(int *)((param_16->ItemRotationA).AllocatorInstance.Data + uVar65 * 4) ==
                        *(int *)(pFVar42 + uVar65 * 4)) {
LAB_14decef2f:
                      fVar73 = GlobalVectorConstants::Float0001.m128_f32[0];
                      fVar153 = GlobalVectorConstants::Float0001.m128_f32[1];
                      fVar163 = GlobalVectorConstants::Float0001.m128_f32[2];
                      fVar187 = GlobalVectorConstants::Float0001.m128_f32[3];
                    }
                    else {
                      uVar47 = uVar35;
                      if ((int)uVar48 < (param_16->ItemRotationT).ArrayNum) {
                        uVar47 = uVar46;
                      }
                      if ((uVar47 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      if (fVar73 < *(float *)((param_16->ItemRotationT).AllocatorInstance.Data +
                                             uVar65 * 4)) {
                        local_9a8[1] = local_898.Y;
                        local_9a8[0] = local_898.X;
                        local_998[1] = local_898.W;
                        local_998[0] = local_898.Z;
                        goto LAB_14decef2f;
                      }
                      uVar47 = uVar36;
                      if ((int)uVar48 < (param_16->ItemRotationT).ArrayNum) {
                        uVar47 = uVar46;
                      }
                      if ((uVar47 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      if (*(float *)((param_16->ItemRotationT).AllocatorInstance.Data + uVar65 * 4)
                          <= __real_322bcc77) goto LAB_14decef2f;
                      uVar47 = uVar35;
                      if ((int)uVar48 < (param_16->ItemRotationT).ArrayNum) {
                        uVar47 = uVar46;
                      }
                      if ((uVar47 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      pTVar44 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                          (&local_558,(TQuat<double> *)local_9a8,&local_898,
                                           (double)*(float *)((param_16->ItemRotationT).
                                                              AllocatorInstance.Data + uVar65 * 4));
                      fVar73 = GlobalVectorConstants::Float0001.m128_f32[0];
                      fVar153 = GlobalVectorConstants::Float0001.m128_f32[1];
                      fVar163 = GlobalVectorConstants::Float0001.m128_f32[2];
                      fVar187 = GlobalVectorConstants::Float0001.m128_f32[3];
                      dVar171 = pTVar44->X;
                      dVar183 = pTVar44->Y;
                      dVar164 = pTVar44->Z;
                      dVar170 = pTVar44->W;
                      auVar132._0_8_ = dVar171 * dVar171 + dVar164 * dVar164;
                      auVar132._8_8_ = dVar183 * dVar183 + dVar170 * dVar170;
                      local_7e0 = dVar75;
                      auVar105._8_4_ = SUB84(auVar132._8_8_,0);
                      auVar105._0_8_ = auVar132._0_8_;
                      auVar105._12_4_ = (int)((ulonglong)auVar132._8_8_ >> 0x20);
                      local_7d8 = dVar75;
                      auVar106._0_8_ = auVar105._8_8_ + auVar132._0_8_;
                      auVar106._8_8_ = auVar132._0_8_ + auVar132._8_8_;
                      auVar76 = sqrtpd(auVar132,auVar106);
                      uVar68 = -(ulonglong)(dVar75 <= auVar106._0_8_);
                      uVar72 = -(ulonglong)(dVar75 <= auVar106._8_8_);
                      auVar80 = divpd((undefined1  [16])
                                      GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar76);
                      auVar76 = divpd((undefined1  [16])
                                      GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar76);
                      uVar47 = (uint)(uVar68 >> 0x20);
                      uVar59 = (uint)(uVar72 >> 0x20);
                      local_788._0_8_ = uVar68 & (ulonglong)(auVar80._0_8_ * dVar171);
                      uVar51 = uVar72 & (ulonglong)(auVar80._8_8_ * dVar183);
                      local_788._8_4_ = (undefined4)uVar51;
                      local_788._12_4_ = (undefined4)(uVar51 >> 0x20);
                      uVar54 = SUB84((double)fVar73,0);
                      auVar107._0_4_ = ~(uint)uVar68 & uVar54;
                      uVar55 = (uint)((ulonglong)(double)fVar73 >> 0x20);
                      auVar107._4_4_ = ~uVar47 & uVar55;
                      uVar56 = SUB84((double)fVar153,0);
                      auVar107._8_4_ = ~(uint)uVar72 & uVar56;
                      uVar61 = (uint)((ulonglong)(double)fVar153 >> 0x20);
                      auVar107._12_4_ = ~uVar59 & uVar61;
                      local_788 = local_788 | auVar107;
                      dVar171 = local_788._0_8_;
                      local_778._0_8_ = (ulonglong)(auVar76._0_8_ * dVar164) & uVar68;
                      uVar51 = (ulonglong)(auVar76._8_8_ * dVar170) & uVar72;
                      local_778._8_4_ = (undefined4)uVar51;
                      local_778._12_4_ = (undefined4)(uVar51 >> 0x20);
                      uVar63 = SUB84((double)fVar163,0);
                      auVar145._0_4_ = ~(uint)uVar68 & uVar63;
                      uVar180 = (uint)((ulonglong)(double)fVar163 >> 0x20);
                      auVar145._4_4_ = ~uVar47 & uVar180;
                      uVar181 = SUB84((double)fVar187,0);
                      auVar145._8_4_ = ~(uint)uVar72 & uVar181;
                      uVar182 = (uint)((ulonglong)(double)fVar187 >> 0x20);
                      auVar145._12_4_ = ~uVar59 & uVar182;
                      local_778 = local_778 | auVar145;
                      dVar183 = local_788._8_8_;
                      dVar164 = local_778._0_8_;
                      dVar170 = local_778._8_8_;
                      auVar133._0_8_ = dVar164 * dVar164 + dVar171 * dVar171;
                      auVar133._8_8_ = dVar170 * dVar170 + dVar183 * dVar183;
                      auVar108._8_4_ = SUB84(auVar133._8_8_,0);
                      auVar108._0_8_ = auVar133._0_8_;
                      auVar108._12_4_ = (int)((ulonglong)auVar133._8_8_ >> 0x20);
                      auVar109._0_8_ = auVar108._8_8_ + auVar133._0_8_;
                      auVar109._8_8_ = auVar133._0_8_ + auVar133._8_8_;
                      auVar76 = sqrtpd(auVar133,auVar109);
                      uVar68 = -(ulonglong)(dVar75 <= auVar109._0_8_);
                      uVar72 = -(ulonglong)(dVar75 <= auVar109._8_8_);
                      auVar80 = divpd((undefined1  [16])
                                      GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar76);
                      auVar76 = divpd((undefined1  [16])
                                      GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar76);
                      uVar47 = (uint)(uVar68 >> 0x20);
                      uVar59 = (uint)(uVar72 >> 0x20);
                      auVar185._0_8_ = uVar68 & (ulonglong)(auVar80._0_8_ * dVar171);
                      uVar51 = uVar72 & (ulonglong)(auVar80._8_8_ * dVar183);
                      auVar185._8_4_ = (undefined4)uVar51;
                      auVar185._12_4_ = (undefined4)(uVar51 >> 0x20);
                      auVar175._0_8_ = (ulonglong)(auVar76._0_8_ * dVar164) & uVar68;
                      uVar51 = (ulonglong)(auVar76._8_8_ * dVar170) & uVar72;
                      auVar175._8_4_ = (undefined4)uVar51;
                      auVar175._12_4_ = (undefined4)(uVar51 >> 0x20);
                      auVar110._0_4_ = ~(uint)uVar68 & uVar54;
                      auVar110._4_4_ = ~uVar47 & uVar55;
                      auVar110._8_4_ = ~(uint)uVar72 & uVar56;
                      auVar110._12_4_ = ~uVar59 & uVar61;
                      local_9a8 = (double  [2])(auVar185 | auVar110);
                      auVar146._0_4_ = ~(uint)uVar68 & uVar63;
                      auVar146._4_4_ = ~uVar47 & uVar180;
                      auVar146._8_4_ = ~(uint)uVar72 & uVar181;
                      auVar146._12_4_ = ~uVar59 & uVar182;
                      local_998 = (double  [2])(auVar175 | auVar146);
                      local_5a8 = (undefined1  [16])local_9a8;
                      local_598 = (undefined1  [16])local_998;
                    }
                    pTVar26 = local_a08;
                    uVar47 = uVar35;
                    if ((int)uVar48 < local_a08->ArrayNum) {
                      uVar47 = uVar46;
                    }
                    if (uVar47 == 0) {
                      bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar33) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      fVar73 = GlobalVectorConstants::Float0001.m128_f32[0];
                      fVar153 = GlobalVectorConstants::Float0001.m128_f32[1];
                      fVar163 = GlobalVectorConstants::Float0001.m128_f32[2];
                      fVar187 = GlobalVectorConstants::Float0001.m128_f32[3];
                    }
                    local_388.Rotation.XY.m128d_f64[0] = (double)fVar73;
                    local_388.Rotation.XY.m128d_f64[1] = (double)fVar153;
                    local_388.Translation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                    local_388.Translation.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                    local_388.Rotation.ZW.m128d_f64[0] = (double)fVar163;
                    local_388.Rotation.ZW.m128d_f64[1] = (double)fVar187;
                    local_388.Translation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                    local_388.Translation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                    local_388.Scale3D.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[0];
                    local_388.Scale3D.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[1];
                    local_388.Scale3D.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[2];
                    local_388.Scale3D.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[3];
                    UE::Math::TTransform<double>::Multiply
                              (&local_388,
                               (TTransform<double> *)
                               ((pTVar26->AllocatorInstance).Data +
                               (longlong)&(local_aa0->AllocatorInstance).Data),&local_4b8);
                    fVar73 = __real_3f800000;
                    local_748[1] = local_388.Rotation.XY.m128d_f64[1];
                    local_748[0] = local_388.Rotation.XY.m128d_f64[0];
                    local_738[1] = local_388.Rotation.ZW.m128d_f64[1];
                    local_738[0] = local_388.Rotation.ZW.m128d_f64[0];
                    local_4b8.Translation.XY.m128d_f64[1] = local_388.Translation.XY.m128d_f64[1];
                    local_4b8.Translation.XY.m128d_f64[0] = local_388.Translation.XY.m128d_f64[0];
                    local_4b8.Scale3D.XY.m128d_f64[1] = local_388.Scale3D.XY.m128d_f64[1];
                    local_4b8.Scale3D.XY.m128d_f64[0] = local_388.Scale3D.XY.m128d_f64[0];
                    auVar144._8_4_ = SUB84(local_388.Rotation.XY.m128d_f64[0],0);
                    auVar144._0_8_ = local_388.Rotation.XY.m128d_f64[0];
                    auVar144._12_4_ = (int)((ulonglong)local_388.Rotation.XY.m128d_f64[0] >> 0x20);
                    local_4b8.Translation.ZW.m128d_f64[1] = local_388.Translation.ZW.m128d_f64[1];
                    local_4b8.Translation.ZW.m128d_f64[0] = local_388.Translation.ZW.m128d_f64[0];
                    local_4b8.Scale3D.ZW.m128d_f64[1] = local_388.Scale3D.ZW.m128d_f64[1];
                    local_4b8.Scale3D.ZW.m128d_f64[0] = local_388.Scale3D.ZW.m128d_f64[0];
                    auVar101._8_4_ = SUB84(local_388.Rotation.ZW.m128d_f64[1],0);
                    auVar101._0_8_ = local_388.Rotation.ZW.m128d_f64[1];
                    auVar101._12_4_ = (int)((ulonglong)local_388.Rotation.ZW.m128d_f64[1] >> 0x20);
                    auVar102._8_4_ = SUB84(local_388.Rotation.ZW.m128d_f64[0],0);
                    auVar102._0_8_ = local_388.Rotation.ZW.m128d_f64[0];
                    auVar102._12_4_ = (int)((ulonglong)local_388.Rotation.ZW.m128d_f64[0] >> 0x20);
                    auVar154._0_8_ =
                         local_388.Rotation.XY.m128d_f64[1] * local_9a8[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
                    auVar154._8_8_ =
                         local_388.Rotation.XY.m128d_f64[1] * local_9a8[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
                    local_768._0_8_ =
                         local_388.Rotation.XY.m128d_f64[0] * local_998[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                         local_388.Rotation.ZW.m128d_f64[1] * local_9a8[0] +
                         local_998[0] * local_388.Rotation.XY.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                         local_388.Rotation.ZW.m128d_f64[0] * local_9a8[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                    local_768._8_8_ =
                         auVar144._8_8_ * local_998[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                         auVar101._8_8_ * local_9a8[1] +
                         local_998[1] * local_388.Rotation.XY.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                         auVar102._8_8_ * local_9a8[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                    local_768._16_8_ =
                         local_388.Rotation.XY.m128d_f64[0] * local_9a8[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                         local_998[0] * local_388.Rotation.ZW.m128d_f64[1] + auVar154._0_8_ +
                         local_388.Rotation.ZW.m128d_f64[0] * local_998[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                    local_768._24_8_ =
                         local_388.Rotation.XY.m128d_f64[0] * local_9a8[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                         local_998[1] * local_388.Rotation.ZW.m128d_f64[1] + auVar154._8_8_ +
                         local_388.Rotation.ZW.m128d_f64[0] * local_998[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                    fVar153 = param_13;
                    if (__real_3f800000 <= param_13) {
                      fVar153 = __real_3f800000;
                    }
                    if (fVar153 <= 0.0) {
                      fVar153 = 0.0;
                    }
                    local_4b8.Rotation.XY.m128d_f64 = local_748;
                    local_4b8.Rotation.ZW.m128d_f64 = local_738;
                    pTVar44 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                        (&local_538,(TQuat<double> *)local_748,
                                         (TQuat<double> *)local_768,(double)fVar153);
                    pTVar60 = local_a78;
                    dVar171 = pTVar44->X;
                    dVar183 = pTVar44->Y;
                    uVar8 = pTVar44->Z;
                    uVar9 = pTVar44->W;
                    local_7d0 = dVar75;
                    dVar164 = dVar171 * dVar171 + (double)uVar8 * (double)uVar8;
                    dVar170 = dVar183 * dVar183 + (double)uVar9 * (double)uVar9;
                    auVar103._8_4_ = SUB84(dVar170,0);
                    auVar103._0_8_ = dVar164;
                    auVar103._12_4_ = (int)((ulonglong)dVar170 >> 0x20);
                    auVar104._0_8_ = auVar103._8_8_ + dVar164;
                    auVar104._8_8_ = dVar164 + dVar170;
                    auVar76 = sqrtpd(auVar154,auVar104);
                    uVar72 = -(ulonglong)(dVar75 <= auVar104._0_8_);
                    uVar68 = -(ulonglong)(dVar75 <= auVar104._8_8_);
                    auVar80 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                    auVar76);
                    uVar47 = (uint)(uVar72 >> 0x20);
                    uVar59 = (uint)(uVar68 >> 0x20);
                    auVar162._0_8_ = uVar72 & (ulonglong)(auVar80._0_8_ * dVar171);
                    uVar51 = uVar68 & (ulonglong)(auVar80._8_8_ * dVar183);
                    auVar162._8_4_ = (undefined4)uVar51;
                    auVar162._12_4_ = (undefined4)(uVar51 >> 0x20);
                    auVar130._0_4_ =
                         ~(uint)uVar72 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                    auVar130._4_4_ =
                         ~uVar47 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                         0x20);
                    auVar130._8_4_ =
                         ~(uint)uVar68 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                    auVar130._12_4_ =
                         ~uVar59 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                         0x20);
                    local_9a8 = (double  [2])(auVar162 | auVar130);
                    auVar76 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                    auVar76);
                    auVar149._0_4_ =
                         ~(uint)uVar72 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
                    auVar149._4_4_ =
                         ~uVar47 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                         0x20);
                    auVar149._8_4_ =
                         ~(uint)uVar68 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                    auVar149._12_4_ =
                         ~uVar59 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                         0x20);
                    auVar131._0_8_ = (ulonglong)(auVar76._0_8_ * (double)uVar8) & uVar72;
                    uVar68 = (ulonglong)(auVar76._8_8_ * (double)uVar9) & uVar68;
                    auVar131._8_4_ = (undefined4)uVar68;
                    auVar131._12_4_ = (undefined4)(uVar68 >> 0x20);
                    local_998 = (double  [2])(auVar149 | auVar131);
                    uVar47 = uVar36;
                    if ((int)uVar48 < local_a78->ArrayNum) {
                      uVar47 = uVar46;
                    }
                    local_728 = local_9a8;
                    local_718 = local_998;
                    local_4b8.Rotation.XY.m128d_f64 = local_9a8;
                    local_4b8.Rotation.ZW.m128d_f64 = local_998;
                    if ((uVar47 == 0) &&
                       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar33)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    uVar47 = 0xffffffff;
                    uVar10 = *(ushort *)
                              ((pTVar60->AllocatorInstance).Data + 0xc + (longlong)local_ad8);
                    if (uVar10 != 0xffff) {
                      uVar47 = (uint)uVar10;
                    }
                    local_618.Rotation.XY.m128d_f64[0] = local_4b8.Rotation.XY.m128d_f64[0];
                    local_618.Rotation.XY.m128d_f64[1] = local_4b8.Rotation.XY.m128d_f64[1];
                    local_618.Rotation.ZW.m128d_f64[0] = local_4b8.Rotation.ZW.m128d_f64[0];
                    local_618.Rotation.ZW.m128d_f64[1] = local_4b8.Rotation.ZW.m128d_f64[1];
                    local_618.Translation.XY.m128d_f64[0] = local_4b8.Translation.XY.m128d_f64[0];
                    local_618.Translation.XY.m128d_f64[1] = local_4b8.Translation.XY.m128d_f64[1];
                    local_618.Translation.ZW.m128d_f64[0] = local_4b8.Translation.ZW.m128d_f64[0];
                    local_618.Translation.ZW.m128d_f64[1] = local_4b8.Translation.ZW.m128d_f64[1];
                    local_618.Scale3D.XY.m128d_f64[0] = local_4b8.Scale3D.XY.m128d_f64[0];
                    local_618.Scale3D.XY.m128d_f64[1] = local_4b8.Scale3D.XY.m128d_f64[1];
                    local_618.Scale3D.ZW.m128d_f64[0] = local_4b8.Scale3D.ZW.m128d_f64[0];
                    local_618.Scale3D.ZW.m128d_f64[1] = local_4b8.Scale3D.ZW.m128d_f64[1];
                    URigHierarchy::SetGlobalTransformByIndex
                              (local_a70,uVar47,&local_618,false,param_14,false,false);
                  }
                }
                local_a88 = local_a88 + 4;
                local_aa0 = local_aa0 + 6;
                local_ad8 = local_ad8 + 2;
                uVar51 = (ulonglong)(uVar48 + 1);
                uVar65 = uVar65 + 1;
              } while ((int)(uVar48 + 1) < pTVar60->ArrayNum);
            }
          }
          pFVar27 = local_9e8;
          fVar73 = __real_bf800000;
          if ((*(longlong *)&local_9e8->field_0x58 != 0) && (local_9e0->bEnabled != false)) {
            local_458.Color.field0_0x0._0_8_ = *(undefined8 *)&(local_9e0->CurveColor).field0_0x0;
            local_458.Color.field0_0x0._8_8_ =
                 *(undefined8 *)((longlong)&(local_9e0->CurveColor).field0_0x0 + 8);
            local_a28 = &local_9e0->WorldOffset;
            local_458.Thickness = local_9e0->Scale;
            local_458.Transform.Rotation.XY.m128d_f64[0] = (local_a28->Rotation).XY.m128d_f64[0];
            local_458.Transform.Rotation.XY.m128d_f64[1] =
                 (local_9e0->WorldOffset).Rotation.XY.m128d_f64[1];
            local_458.Transform.Rotation.ZW.m128d_f64[0] =
                 (local_9e0->WorldOffset).Rotation.ZW.m128d_f64[0];
            local_458.Transform.Rotation.ZW.m128d_f64[1] =
                 (local_9e0->WorldOffset).Rotation.ZW.m128d_f64[1];
            local_458.Transform.Translation.XY.m128d_f64[0] =
                 (local_9e0->WorldOffset).Translation.XY.m128d_f64[0];
            local_458.Transform.Translation.XY.m128d_f64[1] =
                 (local_9e0->WorldOffset).Translation.XY.m128d_f64[1];
            local_458.Transform.Translation.ZW.m128d_f64[0] =
                 (local_9e0->WorldOffset).Translation.ZW.m128d_f64[0];
            local_458.Transform.Translation.ZW.m128d_f64[1] =
                 (local_9e0->WorldOffset).Translation.ZW.m128d_f64[1];
            local_458.Transform.Scale3D.XY.m128d_f64[0] =
                 (local_9e0->WorldOffset).Scale3D.XY.m128d_f64[0];
            local_458.Transform.Scale3D.XY.m128d_f64[1] =
                 (local_9e0->WorldOffset).Scale3D.XY.m128d_f64[1];
            local_458.Transform.Scale3D.ZW.m128d_f64[0] =
                 (local_9e0->WorldOffset).Scale3D.ZW.m128d_f64[0];
            local_458.Transform.Scale3D.ZW.m128d_f64[1] =
                 (local_9e0->WorldOffset).Scale3D.ZW.m128d_f64[1];
            local_458.Name.ComparisonIndex.Value = 0;
            local_458.Name.Number = 0;
            local_458.PrimitiveType.Value = '\x02';
            local_458.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_458.Positions.ArrayNum = 0;
            local_458.Positions.ArrayMax = 0;
            local_458.DepthPriority.Value = '\x01';
            local_458.Lifetime = -1.0;
            local_458.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_458.MeshVerts.ArrayNum = 0;
            local_458.MeshVerts.ArrayMax = 0;
            local_458.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_458.MeshIndices.ArrayNum = 0;
            local_458.MeshIndices.ArrayMax = 0;
            local_458.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
            TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                      (&local_458.Positions,0x40,Default);
            this = local_9f0;
            fVar153 = __real_3c820821;
            fVar163 = 0.0;
            uVar51 = uVar52;
            do {
              pTVar43 = FControlRigSpline::PositionAtParam(this,&local_570,fVar163);
              dVar171 = (pTVar43->field0_0x0)._s_0.X;
              dVar183 = (pTVar43->field0_0x0)._s_0.Y;
              dVar75 = (pTVar43->field0_0x0)._s_0.Z;
              if ((local_458.Positions.ArrayNum <= (int)uVar51) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar163 = fVar163 + fVar153;
              uVar51 = (ulonglong)((int)uVar51 + 1);
              *(double *)(local_458.Positions.AllocatorInstance.Data + uVar52) = dVar171;
              *(double *)(local_458.Positions.AllocatorInstance.Data + uVar52 + 8) = dVar183;
              *(double *)(local_458.Positions.AllocatorInstance.Data + uVar52 + 0x10) = dVar75;
              uVar52 = uVar52 + 0x18;
            } while ((longlong)uVar52 < 0x600);
            lVar66 = *(longlong *)&pFVar27->field_0x58;
            if (((*(FRigVMDrawInstruction **)(lVar66 + 8) <= &local_458) &&
                (&local_458 < *(FRigVMDrawInstruction **)(lVar66 + 8) + *(int *)(lVar66 + 0x14))) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            iVar39 = *(int *)(lVar66 + 0x10);
            if (iVar39 == *(int *)(lVar66 + 0x14)) {
              iVar39 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10d0,(ForAnyElementType *)(lVar66 + 8),(int *)(lVar66 + 0x14));
            }
            *(int *)(lVar66 + 0x10) = iVar39 + 1;
            FRigVMDrawInstruction::FRigVMDrawInstruction
                      ((FRigVMDrawInstruction *)
                       ((longlong)iVar39 * 0xd0 + *(longlong *)(lVar66 + 8)),&local_458);
            if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar40 = (this->SplineData).Object;
            if ((pFVar40->Spline == (ControlRigBaseSpline *)0x0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Spline",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineTypes.cpp"
                                    ,0x116,L""), bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            plVar45 = (longlong *)(**(code **)(pFVar40->Spline->_padding_ + 0x18))();
            pFVar28 = local_9e0;
            fVar153 = __real_40c00000;
            lVar66 = plVar45[1];
            pdVar53 = (double *)*plVar45;
            pFVar3 = &local_9e0->CurveColor;
            pdVar5 = pdVar53 + (longlong)(int)lVar66 * 3;
            while( true ) {
              if ((int)plVar45[1] != (int)lVar66) {
                local_ae0[0] = (TLess<void>)0x0;
                `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_ae0);
              }
              pFVar27 = local_9e8;
              pTVar155 = local_a28;
              if (pdVar53 == pdVar5) break;
              local_828._s_0.X = *pdVar53;
              local_828._s_0.Y = pdVar53[1];
              local_828._s_0.Z = pdVar53[2];
              FRigVMDrawInterface::DrawPoint
                        (*(FRigVMDrawInterface **)&local_9e8->field_0x58,&pFVar28->WorldOffset,
                         (TVector<double> *)&local_828._s_0,pFVar28->Scale * fVar153,pFVar3,
                         SDPG_Foreground,fVar73);
              pdVar53 = pdVar53 + 3;
            }
            fVar153 = pFVar28->Scale;
            local_8a8.DataPtr = (TVector<double> *)(param_16->CurvePositions).AllocatorInstance.Data
            ;
            pFVar12 = *(FRigVMDrawInterface **)&local_9e8->field_0x58;
            iVar39 = (param_16->CurvePositions).ArrayNum;
            if ((iVar39 < 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar28 = local_9e0;
            pFVar3 = &local_9e0->SegmentsColor;
            local_8a8.ArrayNum = iVar39;
            FRigVMDrawInterface::DrawLineStrip
                      (pFVar12,pTVar155,&local_8a8,pFVar3,fVar153,SDPG_Foreground,fVar73);
            local_8b8.DataPtr = (TVector<double> *)(param_16->CurvePositions).AllocatorInstance.Data
            ;
            pFVar12 = *(FRigVMDrawInterface **)&pFVar27->field_0x58;
            fVar153 = pFVar28->Scale * __real_40800000;
            local_8b8.ArrayNum = (param_16->CurvePositions).ArrayNum;
            if ((local_8b8.ArrayNum < 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar33)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            FRigVMDrawInterface::DrawPoints
                      (pFVar12,pTVar155,&local_8b8,fVar153,pFVar3,SDPG_Foreground,fVar73);
            if (local_458.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_458.MeshIndices.AllocatorInstance.Data);
            }
            if (local_458.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_458.MeshVerts.AllocatorInstance.Data);
            }
            if (local_458.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_458.Positions.AllocatorInstance.Data);
            }
          }
          if ((TTransform<double> *)local_a58.Data != (TTransform<double> *)0x0) {
            FMemory::Free(local_a58.Data);
          }
        }
      }
    }
  }
  return;
}

