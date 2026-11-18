// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a4a9d30

UScriptStruct * __cdecl FRigUnit_FitChainToCurveItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurveItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurveItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray,
                         (UObject *)pUVar1,L"RigUnit_FitChainToCurveItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurveItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurveItemArray.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a9e20

UScriptStruct * __thiscall
FRigUnit_FitChainToCurveItemArray::GetExecuteContextStruct(FRigUnit_FitChainToCurveItemArray *this)

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

// Execute @ 14a4abe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FitChainToCurveItemArray::Execute(FRigUnit_FitChainToCurveItemArray *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Bezier,this->Alignment,
                this->Minimum,this->Maximum,this->SamplingPrecision,&this->PrimaryAxis,
                &this->SecondaryAxis,&this->PoleVectorPosition,&local_288,this->RotationEaseType,
                this->Weight,this->bPropagateToChildren,&this->DebugSettings,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4ac680

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_FitChainToCurveItemArray::GetUpgradeInfo
          (FRigUnit_FitChainToCurveItemArray *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// <lambda_1> @ 14a50a590

<lambda_1> * __thiscall
`FRigUnit_FitChainToCurveItemArray::StaticExecute'::__l20::<lambda_1>::<lambda_1>
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

// FRigUnit_FitChainToCurveItemArray @ 14a50f810

FRigUnit_FitChainToCurveItemArray * __thiscall
FRigUnit_FitChainToCurveItemArray::FRigUnit_FitChainToCurveItemArray
          (FRigUnit_FitChainToCurveItemArray *this)

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
  
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_FitChainToCurveItemArray__6B_;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
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

// Execute @ 14a527af0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FitChainToCurveItemArray::Execute
          (FRigUnit_FitChainToCurveItemArray *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&local_18,&this->Bezier,this->Alignment,this->Minimum,this->Maximum,
                this->SamplingPrecision,&this->PrimaryAxis,&this->SecondaryAxis,
                &this->PoleVectorPosition,&local_28,this->RotationEaseType,this->Weight,
                this->bPropagateToChildren,&this->DebugSettings,&this->WorkData);
  return;
}

// RigVMExecute @ 14a53f740

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FitChainToCurveItemArray::RigVMExecute
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
  FRigVMFourPointBezier *pFVar12;
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
    pFVar12 = (FRigVMFourPointBezier *)pFVar14[1].Ptr;
  }
  else {
    pFVar12 = (FRigVMFourPointBezier *)
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

// StaticExecute @ 14a571ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
FRigUnit_FitChainToCurveItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          FRigVMFourPointBezier *param_3,EControlRigCurveAlignment param_4,float param_5,
          float param_6,int param_7,TVector<double> *param_8,TVector<double> *param_9,
          TVector<double> *param_10,
          TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> *param_11,
          ERigVMAnimEasingType param_12,float param_13,bool param_14,
          FRigUnit_FitChainToCurve_DebugSettings *param_15,
          FRigUnit_FitChainToCurve_WorkData *param_16)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  FLinearColor *pFVar1;
  FRigElementKey *pFVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  FCachedRigElement *pFVar9;
  FRigVMDrawInterface *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  ForAnyElementType FVar19;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar22;
  FRigVMFourPointBezier *pFVar23;
  FControlRigExecuteContext *pFVar24;
  FRigUnit_FitChainToCurve_DebugSettings *pFVar25;
  __m128d _Var26;
  __m128d _Var27;
  __m128d _Var28;
  __m128d _Var29;
  bool bVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  <lambda_1> *p<Var34;
  TTransform<double> *pTVar35;
  TQuat<double> *pTVar36;
  uint uVar37;
  uint uVar38;
  FRigElementKey *pFVar39;
  FRigUnit_FitChainToCurve_Rotation *pFVar40;
  ulonglong uVar41;
  uint uVar42;
  longlong lVar43;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar44;
  uint uVar45;
  uint uVar46;
  FRigUnit_FitChainToCurve_Rotation *pFVar47;
  ulonglong uVar48;
  FScriptContainerElement *pFVar49;
  uint uVar50;
  uint uVar51;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar52;
  URigHierarchy *pUVar53;
  uint uVar54;
  longlong lVar55;
  longlong lVar56;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  float fVar61;
  undefined4 uVar62;
  double dVar63;
  undefined4 extraout_XMM0_Dc;
  undefined1 auVar64 [16];
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar65 [16];
  undefined4 uVar94;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
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
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar95;
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
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  double dVar117;
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
  undefined4 uVar131;
  undefined4 uVar135;
  undefined4 uVar136;
  undefined4 uVar137;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar138;
  FScriptContainerElement *pFVar139;
  undefined1 auVar140 [16];
  double dVar141;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  double dVar152;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  double dVar153;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar154 [16];
  undefined8 uVar160;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  double dVar161;
  undefined1 auVar159 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  uint uVar167;
  double dVar168;
  uint uVar172;
  uint uVar173;
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  uint uVar174;
  undefined1 auVar175 [16];
  float fVar176;
  float fVar177;
  undefined4 uVar178;
  undefined4 uVar179;
  undefined4 uVar180;
  undefined1 auStackY_a18 [32];
  longlong local_9b8;
  ForAnyElementType local_9b0;
  undefined8 local_9a8;
  ForAnyElementType local_9a0;
  undefined8 local_998;
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> *local_990;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *local_988;
  longlong local_980;
  longlong local_978;
  TArray<float,TSizedDefaultAllocator<32>_> *local_970;
  uint local_968;
  float local_964;
  URigHierarchy *local_960;
  FScriptContainerElement *local_958;
  ForAnyElementType local_950;
  undefined8 local_948;
  double local_938 [2];
  double local_928 [2];
  FScriptContainerElement *local_918;
  double dStack_910;
  undefined8 local_908;
  TArray<float,TSizedDefaultAllocator<32>_> *local_900;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_8f8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_8f0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_8e8;
  FRigElementKey local_8e0;
  FRigVMFourPointBezier *local_8d0;
  FCachedRigElement local_8c8;
  double local_8a8 [2];
  double local_898 [2];
  double local_878;
  double local_870;
  double dStack_868;
  undefined8 local_860;
  double local_858;
  double dStack_850;
  undefined8 local_848;
  FControlRigExecuteContext *local_840;
  FRigUnit_FitChainToCurve_DebugSettings *local_838;
  FRigElementKey local_828;
  FRigElementKey local_818;
  <lambda_1> local_808;
  TArray<float,TSizedDefaultAllocator<32>_> local_7f8;
  FRigElementKey local_7e8;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double local_7b0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_7a8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_798;
  TQuat<double> local_788;
  double local_768;
  double local_760;
  double local_758;
  double local_750;
  undefined8 local_748;
  undefined8 local_740;
  double local_738;
  double local_730;
  undefined8 local_728;
  TVector<double>_u_0 local_720;
  double local_708;
  undefined1 local_700 [16];
  double local_6f0;
  undefined1 local_6e8 [16];
  double local_6d8;
  undefined1 local_6c8 [32];
  double local_6a8 [2];
  double local_698 [2];
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  double local_668 [2];
  double local_658 [2];
  TQuat<double> local_648;
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  double local_608;
  double dStack_600;
  double local_5f8;
  undefined1 local_5f0 [16];
  double local_5e0;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  TQuat<double> local_488;
  TQuat<double> local_468;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  uVar38 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar138 = __real_3f800000;
  fVar61 = __real_322bcc77;
  uVar160 = unaff_XMM6._8_8_;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  local_838 = param_15;
  local_960 = param_1->Hierarchy;
  local_990 = param_11;
  if (local_960 != (URigHierarchy *)0x0) {
    local_8f0 = &param_16->ItemSegments;
    this = &param_16->ItemPositions;
    local_8f8 = &param_16->CurvePositions;
    pTVar52 = &param_16->ItemRotationT;
    pTVar57 = &param_16->CachedItems;
    local_900 = &param_16->CurveSegments;
    local_8e8 = &param_16->ItemLocalTransforms;
    local_938[0] = 1.97626258336499e-323;
    local_988 = pTVar57;
    local_970 = pTVar52;
    local_8d0 = param_3;
    local_840 = param_1;
    if (((param_16->CachedItems).ArrayNum == 0) && (1 < param_2->ArrayNum)) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Reset(local_8f8,0);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Reset(this,0);
      TArray<float,TSizedDefaultAllocator<32>_>::Reset(local_8f0,0);
      TArray<float,TSizedDefaultAllocator<32>_>::Reset(local_900,0);
      TArray<int,TSizedDefaultAllocator<32>_>::Reset(&param_16->ItemRotationA,0);
      TArray<int,TSizedDefaultAllocator<32>_>::Reset(&param_16->ItemRotationB,0);
      TArray<float,TSizedDefaultAllocator<32>_>::Reset(pTVar52,0);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Reset
                (&param_16->ItemLocalTransforms,0);
      pUVar53 = local_960;
      lVar55 = 0x20;
      param_16->ChainLength = 0.0;
      pFVar39 = param_2->DataPtr;
      pFVar2 = pFVar39 + param_2->ArrayNum;
      for (; pFVar39 != pFVar2; pFVar39 = pFVar39 + 1) {
        local_7e8.Type = pFVar39->Type;
        local_7e8._1_3_ = *(undefined3 *)&pFVar39->field_0x1;
        local_7e8.Name.ComparisonIndex.Value = (pFVar39->Name).ComparisonIndex.Value;
        local_7e8.Name.Number = (pFVar39->Name).Number;
        local_8c8.Element = (FRigBaseElement *)0x0;
        local_8c8.Index = 0xffff;
        local_8c8.Key._0_4_ = local_8c8.Key._0_4_ & 0xffffff00;
        local_8c8.Key.Name.ComparisonIndex.Value = 0;
        local_8c8.Key.Name.Number = 0;
        local_8c8.ContainerVersion = -1;
        FCachedRigElement::UpdateCache(&local_8c8,&local_7e8,pUVar53);
        pFVar9 = (FCachedRigElement *)(pTVar57->AllocatorInstance).Data;
        if (((pFVar9 <= &local_8c8) && (&local_8c8 < pFVar9 + (param_16->CachedItems).ArrayMax)) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar30)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar32 = (param_16->CachedItems).ArrayNum;
        if (iVar32 == (param_16->CachedItems).ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar57->AllocatorInstance,&(param_16->CachedItems).ArrayMax);
        }
        (param_16->CachedItems).ArrayNum = iVar32 + 1;
        pFVar49 = (pTVar57->AllocatorInstance).Data;
        pFVar139 = pFVar49 + (longlong)iVar32 * 0x20;
        *(ulonglong *)pFVar139 =
             CONCAT44(local_8c8.Key.Name.ComparisonIndex.Value,local_8c8.Key._0_4_);
        *(ulonglong *)(pFVar139 + 8) =
             CONCAT26(local_8c8._14_2_,CONCAT24(local_8c8.Index,local_8c8.Key.Name.Number));
        pFVar49 = pFVar49 + (longlong)iVar32 * 0x20 + 0x10;
        *(ulonglong *)pFVar49 = CONCAT44(local_8c8._20_4_,local_8c8.ContainerVersion);
        *(FRigBaseElement **)(pFVar49 + 8) = local_8c8.Element;
        param_11 = local_990;
      }
      iVar32 = (param_16->CachedItems).ArrayNum;
      if (iVar32 < 2) {
        return;
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (this,iVar32,Default);
      pTVar20 = local_8f0;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (local_8f0,(param_16->CachedItems).ArrayNum,Default);
      if ((pTVar20->ArrayNum < 1) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar21 = local_8f0;
      uVar37 = 1;
      *(undefined4 *)(pTVar20->AllocatorInstance).Data = 0;
      iVar32 = (param_16->CachedItems).ArrayNum;
      if (1 < iVar32) {
        lVar43 = 1;
        do {
          uVar51 = 0;
          if ((int)(uVar37 - 1) < iVar32) {
            uVar51 = -uVar37 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar51 = 0xffffffff;
          uVar8 = *(ushort *)((pTVar57->AllocatorInstance).Data + lVar55 + -0x14);
          if (uVar8 != 0xffff) {
            uVar51 = (uint)uVar8;
          }
          URigHierarchy::GetGlobalTransformByIndex(local_960,&local_208,uVar51,false);
          local_7c8 = local_208.Translation.ZW.m128d_f64[0];
          uVar45 = ~uVar37 >> 0x1f;
          local_7d8 = local_208.Translation.XY.m128d_f64[0];
          dStack_7d0 = local_208.Translation.XY.m128d_f64[1];
          uVar51 = 0;
          if ((int)uVar37 < (param_16->CachedItems).ArrayNum) {
            uVar51 = uVar45;
          }
          if ((uVar51 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar51 = 0xffffffff;
          uVar8 = *(ushort *)((pTVar57->AllocatorInstance).Data + lVar55 + 0xc);
          if (uVar8 != 0xffff) {
            uVar51 = (uint)uVar8;
          }
          URigHierarchy::GetGlobalTransformByIndex(local_960,&local_1a8,uVar51,false);
          local_608 = local_1a8.Translation.XY.m128d_f64[0];
          dStack_600 = local_1a8.Translation.XY.m128d_f64[1];
          auVar64._8_8_ = local_1a8.Translation.XY.m128d_f64[1];
          auVar64._0_8_ = local_1a8.Translation.XY.m128d_f64[1];
          local_5f8 = local_1a8.Translation.ZW.m128d_f64[0];
          uVar51 = 0;
          if ((int)uVar37 < pTVar21->ArrayNum) {
            uVar51 = uVar45;
          }
          auVar97._0_8_ =
               (dStack_7d0 - local_1a8.Translation.XY.m128d_f64[1]) *
               (dStack_7d0 - local_1a8.Translation.XY.m128d_f64[1]) +
               (local_7d8 - local_1a8.Translation.XY.m128d_f64[0]) *
               (local_7d8 - local_1a8.Translation.XY.m128d_f64[0]) +
               (local_7c8 - local_5f8) * (local_7c8 - local_5f8);
          auVar97._8_8_ = 0;
          auVar64 = sqrtpd(auVar64,auVar97);
          uVar160 = 0;
          if ((uVar51 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(float *)((pTVar21->AllocatorInstance).Data + lVar43 * 4) = (float)auVar64._0_8_;
          uVar51 = 0;
          if ((int)uVar37 < pTVar21->ArrayNum) {
            uVar51 = uVar45;
          }
          if ((uVar51 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar37 = uVar37 + 1;
          lVar55 = lVar55 + 0x20;
          lVar56 = lVar43 * 4;
          lVar43 = lVar43 + 1;
          param_16->ChainLength =
               *(float *)((pTVar21->AllocatorInstance).Data + lVar56) + param_16->ChainLength;
          iVar32 = (param_16->CachedItems).ArrayNum;
          param_11 = local_990;
        } while ((int)uVar37 < iVar32);
      }
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&param_16->ItemRotationA,iVar32,Default)
      ;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&param_16->ItemRotationB,(param_16->CachedItems).ArrayNum,Default);
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (pTVar52,(param_16->CachedItems).ArrayNum,Default);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&param_16->ItemLocalTransforms,(param_16->CachedItems).ArrayNum,Default);
      if (1 < param_11->ArrayNum) {
        pFVar40 = param_11->DataPtr;
        iVar32 = 0;
        local_9a0.Data = (FScriptContainerElement *)0x0;
        local_998 = 0;
        local_9a8._0_4_ = 0;
        local_9b0.Data = (FScriptContainerElement *)0x0;
        pFVar47 = pFVar40 + param_11->ArrayNum;
        local_9a8 = 0;
        if (pFVar40 != pFVar47) {
          while( true ) {
            uVar37 = (uint)local_9a8;
            local_968 = (uint)local_9a8;
            if ((local_9b0.Data <= (FScriptContainerElement *)&local_968) &&
               ((FScriptContainerElement *)&local_968 <
                local_9b0.Data + (longlong)(int)local_9a8._4_4_ * 4)) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar37 = (uint)local_9a8;
            }
            if (uVar37 == local_9a8._4_4_) {
              uVar37 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_9b0,(int *)((longlong)&local_9a8 + 4));
            }
            local_9a8 = CONCAT44(local_9a8._4_4_,uVar37 + 1);
            *(uint *)(local_9b0.Data + (longlong)(int)uVar37 * 4) = local_968;
            local_964 = pFVar40->Ratio;
            if (fVar138 <= pFVar40->Ratio) {
              local_964 = fVar138;
            }
            if (local_964 <= 0.0) {
              local_964 = 0.0;
            }
            if (((local_9a0.Data <= (FScriptContainerElement *)&local_964) &&
                ((FScriptContainerElement *)&local_964 <
                 local_9a0.Data + (longlong)local_998._4_4_ * 4)) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar33 = (int)local_998;
            if ((int)local_998 == local_998._4_4_) {
              iVar33 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_9a0,(int *)((longlong)&local_998 + 4));
            }
            iVar32 = iVar33 + 1;
            pFVar40 = pFVar40 + 1;
            local_998 = CONCAT44(local_998._4_4_,iVar32);
            *(float *)(local_9a0.Data + (longlong)iVar33 * 4) = local_964;
            param_11 = local_990;
            if (pFVar40 == pFVar47) break;
          }
        }
        local_7f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                  (&local_7f8,(float *)local_9a0.Data,iVar32,0);
        p<Var34 = `FRigUnit_FitChainToCurveItemArray::StaticExecute'::__l20::<lambda_1>::<lambda_1>
                            (local_4b8,(<lambda_1> *)&local_7f8);
        local_808.RotationRatios.AllocatorInstance.Data =
             (p<Var34->RotationRatios).AllocatorInstance.Data;
        (p<Var34->RotationRatios).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_808.RotationRatios.ArrayNum = (p<Var34->RotationRatios).ArrayNum;
        local_808.RotationRatios.ArrayMax = (p<Var34->RotationRatios).ArrayMax;
        (p<Var34->RotationRatios).ArrayNum = 0;
        (p<Var34->RotationRatios).ArrayMax = 0;
        AlgoImpl::
        IntroSortInternal<int,int,_FRigUnit_FitChainToCurveItemArray::StaticExecute_::__l20::<lambda_1>,TLess<void>_>
                  ((int *)local_9b0.Data,(uint)local_9a8,&local_808,(TLess<void>)param_4);
        pFVar139 = (p<Var34->RotationRatios).AllocatorInstance.Data;
        if (pFVar139 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar139);
        }
        iVar32 = (param_16->CachedItems).ArrayNum;
        uVar37 = 0;
        if (0 < iVar32) {
          auVar142._8_8_ = 0;
          auVar142._0_8_ = local_928[1];
          local_928 = (double  [2])(auVar142 << 0x40);
          local_978 = 0;
          do {
            lVar55 = local_978;
            auVar154 = ZEXT816(0);
            if (1 < iVar32) {
              auVar154 = ZEXT416((uint)((float)(int)uVar37 / (float)(iVar32 + -1)));
            }
            if (((int)(uint)local_9a8 < 1) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar51 = *(uint *)local_9b0.Data;
            uVar45 = 0;
            if ((int)uVar51 < (int)local_998) {
              uVar45 = ~uVar51 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar177 = auVar154._0_4_;
            if (*(float *)(local_9a0.Data + (longlong)(int)uVar51 * 4) <= fVar177 &&
                fVar177 != *(float *)(local_9a0.Data + (longlong)(int)uVar51 * 4)) {
              uVar51 = 0;
              if ((int)((uint)local_9a8 - 1) < (int)(uint)local_9a8) {
                uVar51 = ~((uint)local_9a8 - 1) >> 0x1f;
              }
              if ((uVar51 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar51 = *(uint *)(local_9b0.Data + (longlong)(int)((uint)local_9a8 + -1) * 4);
              uVar45 = 0;
              if ((int)uVar51 < (int)local_998) {
                uVar45 = ~uVar51 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (*(float *)(local_9a0.Data + (longlong)(int)uVar51 * 4) <= fVar177) {
                uVar51 = 0;
                if ((int)((uint)local_9a8 - 1) < (int)(uint)local_9a8) {
                  uVar51 = ~((uint)local_9a8 - 1) >> 0x1f;
                }
                if ((uVar51 == 0) &&
                   (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar46 = ~uVar37 >> 0x1f;
                uVar51 = *(uint *)(local_9b0.Data + (longlong)(int)((uint)local_9a8 + -1) * 4);
                uVar45 = 0;
                if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                  uVar45 = uVar46;
                }
                if ((uVar45 == 0) &&
                   (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + lVar55 * 4) = uVar51;
                goto LAB_14a572448;
              }
              uVar51 = 1;
              if (1 < (int)(uint)local_9a8) {
                local_980 = 4;
                do {
                  lVar55 = local_980;
                  uVar45 = 0;
                  if ((int)(uVar51 - 1) < (int)(uint)local_9a8) {
                    uVar45 = -uVar51 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar45 = *(uint *)(local_9b0.Data + lVar55 + -4);
                  lVar43 = (longlong)(int)uVar45;
                  uVar46 = 0;
                  if ((int)uVar51 < (int)(uint)local_9a8) {
                    uVar46 = ~uVar51 >> 0x1f;
                  }
                  if ((uVar46 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar50 = ~uVar45 >> 0x1f;
                  uVar46 = *(uint *)(local_9b0.Data + lVar55);
                  lVar55 = (longlong)(int)uVar46;
                  uVar54 = 0;
                  if ((int)uVar45 < param_11->ArrayNum) {
                    uVar54 = uVar50;
                  }
                  if ((uVar54 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if ((float)((uint)(param_11->DataPtr[lVar43].Ratio - fVar177) & uVar38) <= fVar61)
                  {
                    uVar46 = ~uVar37 >> 0x1f;
                    uVar51 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                      uVar51 = uVar46;
                    }
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    lVar55 = local_978;
                    *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_978 * 4) =
                         uVar45;
                    uVar51 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationA).ArrayNum) {
                      uVar51 = uVar46;
                    }
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pTVar52 = local_970;
                    *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + lVar55 * 4) =
                         uVar45;
                    uVar51 = 0;
                    if ((int)uVar37 < local_970->ArrayNum) {
                      uVar51 = uVar46;
                    }
                    pTVar57 = local_988;
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), pTVar57 = local_988, bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    goto LAB_14a572e9f;
                  }
                  uVar42 = ~uVar46 >> 0x1f;
                  uVar54 = 0;
                  if ((int)uVar46 < param_11->ArrayNum) {
                    uVar54 = uVar42;
                  }
                  if ((uVar54 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if ((float)((uint)(local_990->DataPtr[lVar55].Ratio - fVar177) & uVar38) <= fVar61
                     ) {
                    uVar54 = ~uVar37 >> 0x1f;
                    uVar51 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                      uVar51 = uVar54;
                    }
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    lVar55 = local_978;
                    *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_978 * 4) =
                         uVar46;
                    uVar51 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationA).ArrayNum) {
                      uVar51 = uVar54;
                    }
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + lVar55 * 4) =
                         uVar46;
LAB_14a5729ed:
                    pTVar52 = local_970;
                    uVar51 = 0;
                    if ((int)uVar37 < local_970->ArrayNum) {
                      uVar51 = uVar54;
                    }
                    param_11 = local_990;
                    pTVar57 = local_988;
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), param_11 = local_990, pTVar57 = local_988, bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    goto LAB_14a572e9f;
                  }
                  uVar54 = 0;
                  if ((int)uVar46 < local_990->ArrayNum) {
                    uVar54 = uVar42;
                  }
                  if ((uVar54 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if (fVar177 < local_990->DataPtr[lVar55].Ratio) {
                    uVar51 = 0;
                    if ((int)uVar46 < (int)local_998) {
                      uVar51 = uVar42;
                    }
                    if (uVar51 == 0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                    }
                    fVar176 = *(float *)(local_9a0.Data + lVar55 * 4);
                    uVar51 = 0;
                    if ((int)uVar45 < (int)local_998) {
                      uVar51 = uVar50;
                    }
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    uVar54 = ~uVar37 >> 0x1f;
                    local_980 = CONCAT44(local_980._4_4_,uVar54);
                    if ((float)((uint)(*(float *)(local_9a0.Data + lVar43 * 4) - fVar176) & uVar38)
                        <= fVar61) {
                      uVar51 = 0;
                      if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                        uVar51 = uVar54;
                      }
                      if ((uVar51 == 0) &&
                         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar30)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      lVar55 = local_978;
                      *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_978 * 4) =
                           uVar45;
                      uVar51 = 0;
                      if ((int)uVar37 < (param_16->ItemRotationA).ArrayNum) {
                        uVar51 = uVar54;
                      }
                      if ((uVar51 == 0) &&
                         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar30)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + lVar55 * 4) =
                           uVar45;
                      goto LAB_14a5729ed;
                    }
                    uVar51 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationA).ArrayNum) {
                      uVar51 = uVar54;
                    }
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + local_978 * 4) =
                         uVar45;
                    iVar32 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                      iVar32 = (uint)local_980;
                    }
                    if ((iVar32 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + local_978 * 4) =
                         uVar46;
                    uVar51 = 0;
                    if ((int)uVar45 < (int)local_998) {
                      uVar51 = uVar50;
                    }
                    if (uVar51 == 0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                    }
                    local_958 = local_9a0.Data;
                    uVar51 = 0;
                    if ((int)uVar45 < (int)local_998) {
                      uVar51 = uVar50;
                    }
                    iVar32 = (int)local_998;
                    if (uVar51 == 0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      iVar32 = (int)local_998;
                    }
                    FVar19.Data = local_9a0.Data;
                    uVar51 = 0;
                    if ((int)uVar46 < iVar32) {
                      uVar51 = uVar42;
                    }
                    if ((uVar51 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pTVar52 = local_970;
                    iVar32 = (uint)local_980;
                    fVar176 = *(float *)(local_958 + lVar43 * 4);
                    fVar4 = *(float *)(local_9a0.Data + lVar55 * 4);
                    fVar5 = *(float *)(FVar19.Data + lVar43 * 4);
                    iVar33 = 0;
                    if ((int)uVar37 < local_970->ArrayNum) {
                      iVar33 = (uint)local_980;
                    }
                    if ((iVar33 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    lVar55 = local_978;
                    *(float *)((pTVar52->AllocatorInstance).Data + local_978 * 4) =
                         (fVar177 - fVar176) / (fVar4 - fVar5);
                    iVar33 = 0;
                    if ((int)uVar37 < pTVar52->ArrayNum) {
                      iVar33 = iVar32;
                    }
                    if ((iVar33 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    fVar177 = FRigVMMathLibrary::EaseFloat
                                        (*(float *)((pTVar52->AllocatorInstance).Data + lVar55 * 4),
                                         param_12);
                    auVar154._4_4_ = extraout_XMM0_Db;
                    auVar154._0_4_ = fVar177;
                    auVar154._8_4_ = extraout_XMM0_Dc;
                    auVar154._12_4_ = extraout_XMM0_Dd;
                    iVar33 = 0;
                    if ((int)uVar37 < pTVar52->ArrayNum) {
                      iVar33 = iVar32;
                    }
                    if ((iVar33 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    *(float *)((pTVar52->AllocatorInstance).Data + lVar55 * 4) = fVar177;
                    param_11 = local_990;
                    pTVar57 = local_988;
                    break;
                  }
                  uVar51 = uVar51 + 1;
                  local_980 = local_980 + 4;
                  lVar55 = local_978;
                  pTVar52 = local_970;
                  param_11 = local_990;
                  pTVar57 = local_988;
                } while ((int)uVar51 < (int)(uint)local_9a8);
              }
            }
            else {
              if (((int)(uint)local_9a8 < 1) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar46 = ~uVar37 >> 0x1f;
              uVar51 = *(uint *)local_9b0.Data;
              uVar45 = 0;
              if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                uVar45 = uVar46;
              }
              if ((uVar45 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + (longlong)local_928[0]) =
                   uVar51;
LAB_14a572448:
              uVar45 = 0;
              if ((int)uVar37 < (param_16->ItemRotationA).ArrayNum) {
                uVar45 = uVar46;
              }
              if ((uVar45 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + lVar55 * 4) = uVar51;
              uVar51 = 0;
              if ((int)uVar37 < pTVar52->ArrayNum) {
                uVar51 = uVar46;
              }
              if ((uVar51 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
LAB_14a572e9f:
              *(undefined4 *)((pTVar52->AllocatorInstance).Data + lVar55 * 4) = 0;
            }
            uVar160 = auVar154._8_8_;
            iVar32 = pTVar57->ArrayNum;
            local_978 = lVar55 + 1;
            local_928[0] = (double)((longlong)local_928[0] + 4);
            uVar37 = uVar37 + 1;
          } while ((int)uVar37 < iVar32);
        }
        if (local_7f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7f8.AllocatorInstance.Data);
        }
        if (local_9b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9b0.Data);
        }
        if (local_9a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9a0.Data);
        }
      }
    }
    pTVar44 = local_8f8;
    if (1 < pTVar57->ArrayNum) {
      uVar38 = 0x40;
      if (param_7 < 0x40) {
        uVar38 = param_7;
      }
      uVar37 = 4;
      if (4 < (int)uVar38) {
        uVar37 = uVar38;
      }
      local_980 = CONCAT44(local_980._4_4_,uVar37);
      if (local_8f8->ArrayNum != uVar37) {
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                  (local_8f8,uVar37 + 1,Default);
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(local_900,uVar37 + 1,Default);
      }
      pTVar52 = local_900;
      uVar38 = 0;
      uVar41 = (ulonglong)local_970 >> 0x20;
      local_970 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                  ((ulonglong)local_970 & 0xffffffff00000000);
      fVar177 = 0.0;
      local_878 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      auVar162._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      auVar162._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      auVar162._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      auVar162._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      if (0 < (int)uVar37) {
        uVar51 = uVar37 - 1;
        lVar43 = 0;
        fVar61 = (float)(int)uVar51;
        local_970 = (TArray<float,TSizedDefaultAllocator<32>_> *)CONCAT44((int)uVar41,uVar51);
        lVar55 = 0;
        do {
          uVar46 = ~uVar38 >> 0x1f;
          uVar45 = 0;
          if ((int)uVar38 < (param_16->CurvePositions).ArrayNum) {
            uVar45 = uVar46;
          }
          if ((uVar45 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FRigVMMathLibrary::FourPointBezier
                    (local_8d0,
                     (float)(int)uVar38 * (fVar138 / fVar61) * (param_6 - param_5) + param_5,
                     (TVector<double> *)((param_16->CurvePositions).AllocatorInstance.Data + lVar55)
                     ,(TVector<double> *)&local_720._s_0);
          if (uVar38 == 0) {
LAB_14a5731f3:
            uVar45 = 0;
            if ((int)uVar38 < pTVar52->ArrayNum) {
              uVar45 = uVar46;
            }
            if ((uVar45 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(undefined4 *)((pTVar52->AllocatorInstance).Data + lVar43 * 4) = 0;
          }
          else {
            if (uVar38 == uVar51) {
              local_878 = local_720._s_0.Z;
              auVar162 = local_720._0_16_;
            }
            if ((int)uVar38 < 1) goto LAB_14a5731f3;
            uVar51 = 0;
            if ((int)uVar38 < (param_16->CurvePositions).ArrayNum) {
              uVar51 = uVar46;
            }
            if ((uVar51 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar139 = (param_16->CurvePositions).AllocatorInstance.Data;
            uVar51 = 0;
            if ((int)(uVar38 - 1) < (param_16->CurvePositions).ArrayNum) {
              uVar51 = -uVar38 >> 0x1f;
            }
            if ((uVar51 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar49 = (param_16->CurvePositions).AllocatorInstance.Data;
            uVar51 = 0;
            if ((int)uVar38 < pTVar52->ArrayNum) {
              uVar51 = uVar46;
            }
            auVar65._0_8_ =
                 (*(double *)(pFVar139 + lVar55 + 0x10) - *(double *)(pFVar49 + lVar55 + -8)) *
                 (*(double *)(pFVar139 + lVar55 + 0x10) - *(double *)(pFVar49 + lVar55 + -8));
            auVar65._8_8_ = 0;
            auVar118._0_8_ =
                 (*(double *)(pFVar139 + lVar55 + 8) - *(double *)(pFVar49 + lVar55 + -0x10)) *
                 (*(double *)(pFVar139 + lVar55 + 8) - *(double *)(pFVar49 + lVar55 + -0x10)) +
                 (*(double *)(pFVar139 + lVar55) - *(double *)(pFVar49 + lVar55 + -0x18)) *
                 (*(double *)(pFVar139 + lVar55) - *(double *)(pFVar49 + lVar55 + -0x18)) +
                 auVar65._0_8_;
            auVar118._8_8_ = 0;
            auVar64 = sqrtpd(auVar65,auVar118);
            if ((uVar51 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)((pTVar52->AllocatorInstance).Data + lVar43 * 4) = (float)auVar64._0_8_;
            uVar51 = 0;
            if ((int)uVar38 < pTVar52->ArrayNum) {
              uVar51 = uVar46;
            }
            if ((uVar51 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar177 = fVar177 + *(float *)((pTVar52->AllocatorInstance).Data + lVar43 * 4);
            uVar51 = (uint)local_970._0_4_;
          }
          uVar160 = 0;
          uVar38 = uVar38 + 1;
          lVar43 = lVar43 + 1;
          lVar55 = lVar55 + 0x18;
        } while (lVar43 < (int)uVar37);
        local_970 = (TArray<float,TSizedDefaultAllocator<32>_> *)CONCAT44(local_970._4_4_,fVar177);
        pTVar44 = local_8f8;
        param_11 = local_990;
        pTVar57 = local_988;
        uVar37 = (uint)local_980;
        fVar61 = __real_322bcc77;
      }
      uVar51 = uVar37 - 1;
      uVar38 = 0;
      if ((int)uVar51 < pTVar44->ArrayNum) {
        uVar38 = ~uVar51 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      auVar13._4_8_ = uVar160;
      auVar13._0_4_ = auVar162._4_4_;
      auVar155._0_8_ = auVar13._0_8_ << 0x20;
      auVar155._8_4_ = auVar162._8_4_;
      auVar155._12_4_ = auVar162._12_4_;
      lVar55 = (longlong)(int)uVar51;
      dVar63 = (double)param_16->ChainLength;
      pFVar139 = (pTVar44->AllocatorInstance).Data;
      dVar168 = local_878 * dVar63;
      dVar153 = *(double *)(pFVar139 + lVar55 * 0x18 + 0x10);
      dVar95 = *(double *)(pFVar139 + lVar55 * 0x18 + 8);
      dVar117 = *(double *)(pFVar139 + lVar55 * 0x18);
      uVar38 = 0;
      if ((int)uVar37 < pTVar44->ArrayNum) {
        uVar38 = ~uVar37 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar52 = local_900;
      lVar55 = (longlong)(int)uVar37;
      pFVar139 = (pTVar44->AllocatorInstance).Data;
      *(double *)(pFVar139 + lVar55 * 0x18) = auVar162._0_8_ * dVar63 + dVar117;
      *(double *)(pFVar139 + lVar55 * 0x18 + 8) = auVar155._8_8_ * dVar63 + dVar95;
      *(double *)(pFVar139 + lVar55 * 0x18 + 0x10) = dVar168 + dVar153;
      fVar176 = param_16->ChainLength;
      uVar38 = 0;
      if ((int)uVar37 < local_900->ArrayNum) {
        uVar38 = ~uVar37 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(float *)((pTVar52->AllocatorInstance).Data + (longlong)(int)uVar37 * 4) = fVar176;
      if ((fVar61 < param_16->ChainLength || fVar61 == param_16->ChainLength) && (fVar61 <= fVar177)
         ) {
        uVar38 = 1;
        if ((pTVar44->ArrayNum < 1) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar139 = (pTVar44->AllocatorInstance).Data;
        auVar64 = *(undefined1 (*) [16])pFVar139;
        uVar160 = *(undefined8 *)&pFVar139[0x10].field_0x0;
        if (((param_16->ItemPositions).ArrayNum < 1) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar37 = 1;
        pFVar139 = (this->AllocatorInstance).Data;
        *(undefined1 (*) [16])pFVar139 = auVar64;
        *(undefined8 *)&pFVar139[0x10].field_0x0 = uVar160;
        iVar32 = pTVar57->ArrayNum;
        if (1 < iVar32) {
          uVar51 = (uint)param_4;
          lVar43 = 1;
          local_978 = CONCAT44(local_978._4_4_,(uint)param_4);
          lVar55 = 0x18;
          do {
            uVar45 = 0;
            if ((int)(uVar37 - 1) < (param_16->ItemPositions).ArrayNum) {
              uVar45 = -uVar37 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar52 = local_8f0;
            pFVar139 = (this->AllocatorInstance).Data;
            local_980 = CONCAT44(local_980._4_4_,~uVar37 >> 0x1f);
            uVar45 = 0;
            if ((int)uVar37 < local_8f0->ArrayNum) {
              uVar45 = ~uVar37 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar61 = *(float *)((pTVar52->AllocatorInstance).Data + (longlong)local_938[0]);
            if (uVar51 == 1) {
              fVar61 = (fVar61 * fVar177) / param_16->ChainLength;
            }
            uVar45 = 0;
            if ((int)(uVar38 - 1) < (param_16->CurvePositions).ArrayNum) {
              uVar45 = -uVar38 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar49 = (param_16->CurvePositions).AllocatorInstance.Data;
            local_7b0 = *(double *)(pFVar49 + lVar43 * 0x18 + -8);
            auVar64 = *(undefined1 (*) [16])(pFVar49 + lVar43 * 0x18 + -0x18);
            uVar131 = auVar64._0_4_;
            uVar135 = auVar64._4_4_;
            uVar136 = auVar64._8_4_;
            uVar137 = auVar64._12_4_;
            uVar62 = SUB84(local_7b0,0);
            uVar94 = (undefined4)((ulonglong)local_7b0 >> 0x20);
            uVar45 = 0;
            if ((int)uVar38 < (param_16->CurvePositions).ArrayNum) {
              uVar45 = ~uVar38 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar44 = local_8f8;
            lVar56 = lVar43 * 0x18;
            pFVar49 = (param_16->CurvePositions).AllocatorInstance.Data + lVar56;
            auVar97 = *(undefined1 (*) [16])pFVar49;
            dVar63 = auVar97._0_8_;
            local_878 = *(double *)&pFVar49[0x10].field_0x0;
            local_900 = *(TArray<float,TSizedDefaultAllocator<32>_> **)(pFVar139 + lVar55 + -0x18);
            dVar153 = *(double *)(pFVar139 + lVar55 + -0x10);
            dVar117 = (double)local_900 - auVar64._0_8_;
            local_928[0] = dVar153;
            local_958 = *(FScriptContainerElement **)(pFVar139 + lVar55 + -8);
            dVar95 = dVar153 - auVar64._8_8_;
            auVar66._0_8_ = ((double)local_958 - local_7b0) * ((double)local_958 - local_7b0);
            auVar66._8_8_ = 0;
            auVar96._0_8_ = dVar95 * dVar95 + dVar117 * dVar117 + auVar66._0_8_;
            auVar96._8_8_ = 0;
            auVar64 = sqrtpd(auVar66,auVar96);
            fVar138 = (float)auVar64._0_8_;
            auVar156._8_8_ = auVar97._8_8_;
            auVar156._0_8_ = auVar156._8_8_;
            auVar67._0_8_ = ((double)local_958 - local_878) * ((double)local_958 - local_878);
            auVar67._8_8_ = 0;
            auVar119._0_8_ =
                 (dVar153 - auVar156._8_8_) * (dVar153 - auVar156._8_8_) +
                 ((double)local_900 - dVar63) * ((double)local_900 - dVar63) + auVar67._0_8_;
            auVar119._8_8_ = 0;
            auVar64 = sqrtpd(auVar67,auVar119);
            fVar177 = (float)auVar64._0_8_;
            if (fVar177 <= fVar61) {
              iVar32 = (param_16->CurvePositions).ArrayNum;
              if ((int)uVar38 < iVar32 + -1) {
                do {
                  fVar138 = fVar177;
                  uVar38 = uVar38 + 1;
                  lVar43 = lVar43 + 1;
                  lVar56 = lVar56 + 0x18;
                  uVar131 = auVar97._0_4_;
                  uVar135 = auVar97._4_4_;
                  uVar136 = auVar97._8_4_;
                  uVar137 = auVar97._12_4_;
                  uVar94 = (undefined4)((ulonglong)local_878 >> 0x20);
                  uVar62 = SUB84(local_878,0);
                  uVar51 = 0;
                  if ((int)uVar38 < iVar32) {
                    uVar51 = ~uVar38 >> 0x1f;
                  }
                  local_7b0 = local_878;
                  if ((uVar51 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar49 = (pTVar44->AllocatorInstance).Data + lVar56;
                  auVar97 = *(undefined1 (*) [16])pFVar49;
                  local_878 = *(double *)&pFVar49[0x10].field_0x0;
                  dVar63 = auVar97._0_8_;
                  auVar156._8_4_ = auVar97._8_4_;
                  auVar156._0_8_ = auVar97._8_8_;
                  auVar156._12_4_ = auVar97._12_4_;
                  dVar153 = auVar97._8_8_ - *(double *)(pFVar139 + lVar55 + -0x10);
                  fVar177 = (float)SQRT((dVar63 - *(double *)(pFVar139 + lVar55 + -0x18)) *
                                        (dVar63 - *(double *)(pFVar139 + lVar55 + -0x18)) +
                                        dVar153 * dVar153 +
                                        (local_878 - *(double *)(pFVar139 + lVar55 + -8)) *
                                        (local_878 - *(double *)(pFVar139 + lVar55 + -8)));
                } while ((fVar138 < fVar61 == fVar177 < fVar61) &&
                        (iVar32 = pTVar44->ArrayNum, (int)uVar38 < iVar32 + -1));
                uVar51 = (uint)local_978;
              }
              dVar153 = auVar156._0_8_;
              fVar176 = fVar177;
              uVar178 = uVar136;
              uVar179 = uVar137;
              uVar180 = uVar135;
              if (fVar177 < fVar138) {
                dVar63 = (double)CONCAT44(uVar135,uVar131);
                local_878 = (double)CONCAT44(uVar94,uVar62);
                uVar131 = *(undefined4 *)&pFVar49->field_0x0;
                uVar180 = *(undefined4 *)(pFVar49 + 4);
                uVar178 = *(undefined4 *)(pFVar49 + 8);
                uVar179 = *(undefined4 *)(pFVar49 + 0xc);
                local_7b0 = *(double *)&pFVar49[0x10].field_0x0;
                uVar62 = SUB84(local_7b0,0);
                uVar94 = (undefined4)((ulonglong)local_7b0 >> 0x20);
                auVar14._4_8_ = auVar156._8_8_;
                auVar14._0_4_ = uVar135;
                auVar157._0_8_ = auVar14._0_8_ << 0x20;
                auVar157._8_4_ = uVar136;
                auVar157._12_4_ = uVar137;
                dVar153 = auVar157._8_8_;
                fVar176 = fVar138;
                fVar138 = fVar177;
              }
              iVar32 = (param_16->ItemPositions).ArrayNum;
              if (__real_322bcc77 <
                  (float)((uint)(fVar138 - fVar176) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
                dVar95 = (double)((fVar61 - fVar138) / (fVar176 - fVar138));
                dVar117 = (dVar63 - (double)CONCAT44(uVar180,uVar131)) * dVar95 +
                          (double)CONCAT44(uVar180,uVar131);
                dVar153 = (dVar153 - (double)CONCAT44(uVar179,uVar178)) * dVar95 +
                          (double)CONCAT44(uVar179,uVar178);
                dVar95 = (local_878 - local_7b0) * dVar95 + local_7b0;
                goto LAB_14a573993;
              }
              iVar33 = 0;
              if ((int)uVar37 < iVar32) {
                iVar33 = (uint)local_980;
              }
              if ((iVar33 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar49 = (this->AllocatorInstance).Data;
              pFVar139 = pFVar49 + lVar55;
              *(undefined4 *)pFVar139 = uVar131;
              *(undefined4 *)(pFVar139 + 4) = uVar180;
              *(undefined4 *)(pFVar139 + 8) = uVar178;
              *(undefined4 *)(pFVar139 + 0xc) = uVar179;
              *(ulonglong *)(pFVar49 + lVar55 + 0x10) = CONCAT44(uVar94,uVar62);
            }
            else {
              iVar32 = (param_16->ItemPositions).ArrayNum;
              dVar117 = (double)(fVar61 / fVar177);
              dVar95 = (local_878 - (double)local_958) * dVar117 + (double)local_958;
              dVar153 = (auVar156._8_8_ - dVar153) * dVar117 + dVar153;
              dVar117 = (dVar63 - (double)local_900) * dVar117 + (double)local_900;
LAB_14a573993:
              iVar33 = 0;
              if ((int)uVar37 < iVar32) {
                iVar33 = (uint)local_980;
              }
              if ((iVar33 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar139 = (this->AllocatorInstance).Data;
              *(double *)(pFVar139 + lVar55) = dVar117;
              *(double *)(pFVar139 + lVar55 + 8) = dVar153;
              *(double *)(pFVar139 + lVar55 + 0x10) = dVar95;
            }
            local_938[0] = (double)((longlong)local_938[0] + 4);
            uVar37 = uVar37 + 1;
            lVar55 = lVar55 + 0x18;
            iVar32 = local_988->ArrayNum;
            param_11 = local_990;
            pTVar57 = local_988;
            fVar177 = local_970._0_4_;
            fVar138 = __real_3f800000;
          } while ((int)uVar37 < iVar32);
        }
        pUVar53 = local_960;
        uVar41 = 0;
        local_950.Data = (FScriptContainerElement *)0x0;
        local_948 = 0;
        if ((param_13 < fVar138) && (0 < iVar32)) {
          lVar55 = 0;
          uVar48 = uVar41;
          do {
            uVar37 = (uint)uVar48;
            uVar38 = 0;
            if ((int)uVar37 < iVar32) {
              uVar38 = ~uVar37 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar38 = 0xffffffff;
            uVar8 = *(ushort *)((pTVar57->AllocatorInstance).Data + lVar55 + 0xc);
            if (uVar8 != 0xffff) {
              uVar38 = (uint)uVar8;
            }
            URigHierarchy::GetGlobalTransformByIndex(pUVar53,&local_328,uVar38,false);
            if (((local_950.Data <= &local_328) &&
                (&local_328 <
                 (TTransform<double> *)(local_950.Data + (longlong)local_948._4_4_ * 0x60))) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar32 = (int)local_948;
            if ((int)local_948 == local_948._4_4_) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,&local_950,(int *)((longlong)&local_948 + 4));
            }
            local_948 = CONCAT44(local_948._4_4_,iVar32 + 1);
            uVar48 = (ulonglong)(uVar37 + 1);
            lVar55 = lVar55 + 0x20;
            lVar43 = (longlong)iVar32 * 0x60;
            *(double *)(local_950.Data + lVar43) = local_328.Rotation.XY.m128d_f64[0];
            *(double *)(local_950.Data + lVar43 + 8) = local_328.Rotation.XY.m128d_f64[1];
            *(double *)(local_950.Data + lVar43 + 0x10) = local_328.Rotation.ZW.m128d_f64[0];
            *(double *)(local_950.Data + lVar43 + 0x10 + 8) = local_328.Rotation.ZW.m128d_f64[1];
            *(double *)(local_950.Data + lVar43 + 0x20) = local_328.Translation.XY.m128d_f64[0];
            *(double *)(local_950.Data + lVar43 + 0x20 + 8) = local_328.Translation.XY.m128d_f64[1];
            *(double *)(local_950.Data + lVar43 + 0x30) = local_328.Translation.ZW.m128d_f64[0];
            *(double *)(local_950.Data + lVar43 + 0x30 + 8) = local_328.Translation.ZW.m128d_f64[1];
            *(double *)(local_950.Data + lVar43 + 0x40) = local_328.Scale3D.XY.m128d_f64[0];
            *(double *)(local_950.Data + lVar43 + 0x40 + 8) = local_328.Scale3D.XY.m128d_f64[1];
            *(double *)(local_950.Data + lVar43 + 0x50) = local_328.Scale3D.ZW.m128d_f64[0];
            *(double *)(local_950.Data + lVar43 + 0x50 + 8) = local_328.Scale3D.ZW.m128d_f64[1];
            iVar32 = pTVar57->ArrayNum;
            param_11 = local_990;
          } while ((int)(uVar37 + 1) < iVar32);
        }
        dVar153 = __real_3f1a36e2e0000000;
        uVar37 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar131 = SUB84(__real_3e45798ee0000000,0);
        uVar135 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        uVar48 = uVar41;
        if (0 < iVar32) {
          do {
            dVar95 = __real_3ff0000000000000;
            uVar46 = (uint)uVar48;
            uVar45 = ~uVar46 >> 0x1f;
            uVar51 = 0;
            if ((int)uVar46 < iVar32) {
              uVar51 = uVar45;
            }
            if ((uVar51 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar51 = 0xffffffff;
            uVar8 = *(ushort *)((pTVar57->AllocatorInstance).Data + uVar41 * 0x20 + 0xc);
            if (uVar8 != 0xffff) {
              uVar51 = (uint)uVar8;
            }
            URigHierarchy::GetGlobalTransformByIndex(pUVar53,&local_448,uVar51,false);
            uVar51 = 0;
            if ((int)uVar46 < (param_16->ItemPositions).ArrayNum) {
              uVar51 = uVar45;
            }
            if ((uVar51 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar136 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar137 = (undefined4)
                      ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            pFVar49 = (this->AllocatorInstance).Data;
            pFVar139 = pFVar49 + uVar41 * 0x18;
            local_448.Translation.XY.m128d_f64[0] = *(double *)pFVar139;
            local_448.Translation.XY.m128d_f64[1] = *(double *)(pFVar139 + 8);
            local_448.Translation.ZW.m128d_f64[0] = *(double *)(pFVar49 + uVar41 * 0x18 + 0x10);
            local_448.Translation.ZW.m128d_f64[1] = 0.0;
            local_918._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            local_918._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            dStack_910._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            dStack_910._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_908 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            iVar32 = (param_16->ItemPositions).ArrayNum;
            if ((int)uVar46 < pTVar57->ArrayNum + -1) {
              uVar51 = 0;
              if ((int)(uVar46 + 1) < iVar32) {
                uVar51 = ~(uVar46 + 1) >> 0x1f;
              }
              if (uVar51 == 0) {
                bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar30) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar136 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar137 = (undefined4)
                          ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                          0x20);
              }
              pFVar139 = (this->AllocatorInstance).Data;
              local_938[0] = (double)pFVar139;
              uVar51 = 0;
              if ((int)uVar46 < (param_16->ItemPositions).ArrayNum) {
                uVar51 = uVar45;
              }
              if (uVar51 == 0) {
                bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar30) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar136 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar137 = (undefined4)
                          ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                          0x20);
                pFVar139 = (FScriptContainerElement *)local_938[0];
              }
              pFVar49 = (this->AllocatorInstance).Data;
              local_908 = *(double *)(pFVar139 + uVar41 * 0x18 + 0x28) -
                          *(double *)(pFVar49 + uVar41 * 0x18 + 0x10);
              dStack_910 = *(double *)(pFVar139 + uVar41 * 0x18 + 0x20) -
                           *(double *)(pFVar49 + uVar41 * 0x18 + 8);
              local_918 = (FScriptContainerElement *)
                          (*(double *)(pFVar139 + uVar41 * 0x18 + 0x18) -
                          *(double *)(pFVar49 + uVar41 * 0x18));
            }
            else {
              uVar51 = 0;
              if ((int)(iVar32 - 1U) < iVar32) {
                uVar51 = ~(iVar32 - 1U) >> 0x1f;
              }
              if (uVar51 == 0) {
                bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar30) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar136 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar137 = (undefined4)
                          ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                          0x20);
              }
              iVar32 = (param_16->ItemPositions).ArrayNum;
              lVar55 = (longlong)iVar32;
              uVar54 = iVar32 - 2;
              local_958 = (this->AllocatorInstance).Data;
              uVar51 = 0;
              if ((int)uVar54 < iVar32) {
                uVar51 = ~uVar54 >> 0x1f;
              }
              if (uVar51 == 0) {
                bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar30) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar136 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar137 = (undefined4)
                          ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                          0x20);
              }
              lVar43 = (longlong)(int)uVar54;
              pFVar139 = (this->AllocatorInstance).Data;
              local_908 = *(double *)(local_958 + lVar55 * 0x18 + -8) -
                          *(double *)(pFVar139 + lVar43 * 0x18 + 0x10);
              dStack_910 = *(double *)(local_958 + lVar55 * 0x18 + -0x10) -
                           *(double *)(pFVar139 + lVar43 * 0x18 + 8);
              local_918 = (FScriptContainerElement *)
                          (*(double *)(local_958 + lVar55 * 0x18 + -0x18) -
                          *(double *)(pFVar139 + lVar43 * 0x18));
            }
            if (((dVar153 < (double)CONCAT44((uint)((ulonglong)local_918 >> 0x20) & uVar37,
                                             (uint)local_918 & uVar38)) ||
                (dVar153 < (double)CONCAT44((uint)((ulonglong)dStack_910 >> 0x20) & uVar37,
                                            SUB84(dStack_910,0) & uVar38))) ||
               (dVar153 < (double)CONCAT44((uint)((ulonglong)local_908 >> 0x20) & uVar37,
                                           (uint)local_908 & uVar38))) {
              if (((dVar153 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_8->field0_0x0
                                                     >> 0x20) & uVar37,
                                               (uint)*(undefined8 *)&param_8->field0_0x0 & uVar38))
                  || (uVar160 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8),
                     dVar153 < (double)CONCAT44((uint)((ulonglong)uVar160 >> 0x20) & uVar37,
                                                (uint)uVar160 & uVar38))) ||
                 (uVar160 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 0x10),
                 dVar153 < (double)CONCAT44((uint)((ulonglong)uVar160 >> 0x20) & uVar37,
                                            (uint)uVar160 & uVar38))) {
                bVar30 = false;
              }
              else {
                bVar30 = true;
              }
              if (!bVar30) {
                dVar117 = dStack_910 * dStack_910 + (double)local_918 * (double)local_918 +
                          (double)local_908 * (double)local_908;
                if (dVar117 == dVar95) {
LAB_14a574007:
                }
                else {
                  if ((double)CONCAT44(uVar135,uVar131) <= dVar117) {
                    local_730 = dVar95 / SQRT(dVar117);
                    local_908 = (double)local_908 * local_730;
                    local_918 = (FScriptContainerElement *)((double)local_918 * local_730);
                    dStack_910 = dStack_910 * local_730;
                    goto LAB_14a574007;
                  }
                  local_918._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                  local_918._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                  dStack_910._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  dStack_910._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  local_908 = CONCAT44(uVar137,uVar136);
                }
                auVar64 = *(undefined1 (*) [16])&param_8->field0_0x0;
                dVar95 = (param_8->field0_0x0)._s_0.Z;
                auVar142 = blendpd((undefined1  [16])local_448.Rotation.XY.m128d_f64,
                                   (undefined1  [16])local_448.Rotation.ZW.m128d_f64,2);
                dVar141 = auVar64._8_8_;
                auVar163._0_8_ =
                     dVar141 * local_448.Rotation.XY.m128d_f64[0] -
                     auVar64._0_8_ * local_448.Rotation.XY.m128d_f64[1];
                auVar163._8_8_ =
                     dVar95 * local_448.Rotation.XY.m128d_f64[1] -
                     dVar141 * local_448.Rotation.ZW.m128d_f64[0];
                auVar12._8_8_ = 0;
                auVar12._0_8_ = dVar95;
                auVar97 = blendpd(auVar64,auVar12,2);
                dVar168 = auVar142._8_8_;
                auVar98._0_8_ =
                     auVar97._0_8_ * local_448.Rotation.ZW.m128d_f64[0] - auVar142._0_8_ * dVar95;
                auVar98._8_8_ = auVar97._8_8_ * local_448.Rotation.ZW.m128d_f64[1] - dVar168 * 0.0;
                auVar97 = blendpd(auVar163,auVar98,2);
                dVar117 = auVar163._8_8_ + auVar163._8_8_;
                dVar63 = auVar98._0_8_ + auVar98._0_8_;
                uVar131 = SUB84(dVar63,0);
                uVar135 = (undefined4)((ulonglong)dVar63 >> 0x20);
                auVar164._0_8_ = auVar97._0_8_ + auVar97._0_8_;
                auVar164._8_8_ = auVar97._8_8_ + auVar97._8_8_;
                auVar120._8_4_ = uVar131;
                auVar120._0_8_ = dVar117;
                auVar120._12_4_ = uVar135;
                auVar68._8_4_ = uVar131;
                auVar68._0_8_ = dVar117;
                auVar68._12_4_ = uVar135;
                auVar99._8_4_ = uVar131;
                auVar99._0_8_ = dVar117;
                auVar99._12_4_ = uVar135;
                auVar97 = blendpd(auVar99,auVar164,2);
                auVar121._0_8_ =
                     auVar120._8_8_ * local_448.Rotation.XY.m128d_f64[0] -
                     dVar117 * local_448.Rotation.XY.m128d_f64[1];
                auVar121._8_8_ =
                     auVar164._0_8_ * local_448.Rotation.XY.m128d_f64[1] -
                     auVar68._8_8_ * local_448.Rotation.ZW.m128d_f64[0];
                auVar69._8_4_ = SUB84(auVar164._8_8_,0);
                auVar69._0_8_ = auVar164._0_8_;
                auVar69._12_4_ = (int)((ulonglong)auVar164._8_8_ >> 0x20);
                auVar100._0_8_ =
                     auVar97._0_8_ * local_448.Rotation.ZW.m128d_f64[0] -
                     auVar164._0_8_ * auVar142._0_8_;
                auVar100._8_8_ =
                     auVar97._8_8_ * local_448.Rotation.ZW.m128d_f64[1] - auVar69._8_8_ * dVar168;
                auVar70._8_4_ = SUB84(auVar121._8_8_,0);
                auVar70._0_8_ = auVar121._0_8_;
                auVar70._12_4_ = (int)((ulonglong)auVar121._8_8_ >> 0x20);
                auVar97 = blendpd(auVar121,auVar100,2);
                dVar117 = dVar117 * local_448.Rotation.ZW.m128d_f64[1] + auVar64._0_8_ +
                          auVar70._8_8_;
                dVar63 = dVar63 * local_448.Rotation.ZW.m128d_f64[1] + dVar141 + auVar100._0_8_;
                uVar131 = SUB84(dVar63,0);
                uVar135 = (undefined4)((ulonglong)dVar63 >> 0x20);
                local_6f0 = auVar164._0_8_ * local_448.Rotation.ZW.m128d_f64[1] + dVar95 +
                            auVar97._0_8_;
                auVar15._4_8_ = dVar168;
                auVar15._0_4_ = (int)((ulonglong)dVar117 >> 0x20);
                auVar143._0_8_ = auVar15._0_8_ << 0x20;
                auVar143._8_4_ = uVar131;
                auVar143._12_4_ = uVar135;
                dVar63 = auVar143._8_8_;
                local_700._8_4_ = uVar131;
                local_700._0_8_ = dVar117;
                local_700._12_4_ = uVar135;
                dVar95 = dVar63 * dVar63 + dVar117 * dVar117 + local_6f0 * local_6f0;
                if (dVar95 == __real_3ff0000000000000) {
                  dStack_850._0_4_ = uVar131;
                  local_858 = dVar117;
                  dStack_850._4_4_ = uVar135;
                  local_848 = local_6f0;
                }
                else if (__real_3e45798ee0000000 <= dVar95) {
                  local_768 = __real_3ff0000000000000 / SQRT(dVar95);
                  local_848 = local_768 * local_6f0;
                  dStack_850 = local_768 * dVar63;
                  local_858 = local_768 * dVar117;
                }
                else {
                  local_858._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                  local_858._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                  dStack_850._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  dStack_850._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  local_848 = CONCAT44(uVar137,uVar136);
                }
                UE::Math::TQuat<double>::FindBetweenNormals
                          ((TQuat<double> *)local_688,(TVector<double> *)&local_858,
                           (TVector<double> *)&local_918);
                dVar63 = local_678._0_8_;
                uVar131 = SUB84(__real_3e45798ee0000000,0);
                uVar135 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                uVar136 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar137 = (undefined4)
                          ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                          0x20);
                dVar117 = local_688._0_8_;
                auVar132._8_8_ = local_688._8_8_;
                auVar144._8_4_ = local_688._0_4_;
                auVar144._0_8_ = dVar117;
                auVar144._12_4_ = local_688._4_4_;
                dVar168 = local_678._8_8_;
                auVar132._0_8_ = auVar132._8_8_;
                auVar71._8_4_ = local_678._0_4_;
                auVar71._0_8_ = dVar63;
                auVar71._12_4_ = local_678._4_4_;
                dVar141 = dVar117 * local_448.Rotation.ZW.m128d_f64[1] *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                          local_448.Rotation.XY.m128d_f64[0] * dVar168 +
                          local_448.Rotation.ZW.m128d_f64[0] * auVar132._8_8_ *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                          dVar63 * local_448.Rotation.XY.m128d_f64[1] *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                dVar152 = auVar144._8_8_ * local_448.Rotation.ZW.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                          local_448.Rotation.XY.m128d_f64[1] * dVar168 +
                          local_448.Rotation.ZW.m128d_f64[1] * auVar132._8_8_ *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                          auVar71._8_8_ * local_448.Rotation.XY.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                dVar95 = dVar117 * local_448.Rotation.XY.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                         local_448.Rotation.ZW.m128d_f64[0] * dVar168 +
                         local_448.Rotation.XY.m128d_f64[0] * auVar132._8_8_ *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                         dVar63 * local_448.Rotation.ZW.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                dVar117 = dVar117 * local_448.Rotation.XY.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                          local_448.Rotation.ZW.m128d_f64[1] * dVar168 +
                          local_448.Rotation.XY.m128d_f64[1] * auVar132._8_8_ *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                          dVar63 * local_448.Rotation.ZW.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                auVar72._8_4_ = SUB84(dVar152,0);
                auVar72._0_8_ = dVar141;
                auVar72._12_4_ = (int)((ulonglong)dVar152 >> 0x20);
                local_760 = __real_3e45798ee0000000;
                auVar101._8_4_ = SUB84(dVar117,0);
                auVar101._0_8_ = dVar95;
                auVar101._12_4_ = (int)((ulonglong)dVar117 >> 0x20);
                dVar63 = dVar95 * dVar95 + dVar141 * dVar141;
                dVar168 = auVar101._8_8_ * dVar117 + auVar72._8_8_ * dVar152;
                auVar73._8_4_ = SUB84(dVar168,0);
                auVar73._0_8_ = dVar63;
                auVar73._12_4_ = (int)((ulonglong)dVar168 >> 0x20);
                auVar74._0_8_ = auVar73._8_8_ + dVar63;
                auVar74._8_8_ = dVar63 + dVar168;
                auVar64 = sqrtpd(auVar132,auVar74);
                uVar58 = -(ulonglong)(__real_3e45798ee0000000 <= auVar74._0_8_);
                uVar60 = -(ulonglong)(__real_3e45798ee0000000 <= auVar74._8_8_);
                auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                auVar64);
                uVar51 = (uint)(uVar58 >> 0x20);
                uVar54 = (uint)(uVar60 >> 0x20);
                auVar102._0_4_ =
                     ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                auVar102._4_4_ =
                     ~uVar51 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
                auVar102._8_4_ =
                     ~(uint)uVar60 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                auVar102._12_4_ =
                     ~uVar54 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
                auVar158._0_8_ = uVar58 & (ulonglong)(auVar97._0_8_ * dVar141);
                uVar48 = uVar60 & (ulonglong)(auVar97._8_8_ * dVar152);
                auVar158._8_4_ = (undefined4)uVar48;
                auVar158._12_4_ = (undefined4)(uVar48 >> 0x20);
                local_448.Rotation.XY.m128d_f64 = (double  [2])(auVar158 | auVar102);
                auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar64);
                auVar103._0_8_ = (ulonglong)(auVar64._0_8_ * dVar95) & uVar58;
                uVar48 = (ulonglong)(auVar64._8_8_ * dVar117) & uVar60;
                auVar103._8_4_ = (undefined4)uVar48;
                auVar103._12_4_ = (undefined4)(uVar48 >> 0x20);
                auVar122._0_4_ =
                     ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
                auVar122._4_4_ =
                     ~uVar51 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
                auVar122._8_4_ =
                     ~(uint)uVar60 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                auVar122._12_4_ =
                     ~uVar54 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
                local_448.Rotation.ZW.m128d_f64 = (double  [2])(auVar122 | auVar103);
                dVar95 = __real_3ff0000000000000;
              }
            }
            uVar51 = 0;
            if ((int)uVar46 < (param_16->ItemPositions).ArrayNum) {
              uVar51 = uVar45;
            }
            if (uVar51 == 0) {
              local_938 = local_448.Rotation.XY.m128d_f64;
              local_928 = local_448.Rotation.ZW.m128d_f64;
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar136 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar137 = (undefined4)
                        ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
              ;
            }
            pFVar139 = (this->AllocatorInstance).Data;
            local_908 = (param_10->field0_0x0)._s_0.Z - *(double *)(pFVar139 + uVar41 * 0x18 + 0x10)
            ;
            dVar117 = (param_10->field0_0x0)._s_0.Y - *(double *)(pFVar139 + uVar41 * 0x18 + 8);
            local_958 = (FScriptContainerElement *)
                        ((param_10->field0_0x0)._s_0.X - *(double *)(pFVar139 + uVar41 * 0x18));
            dStack_910 = dVar117;
            local_918 = local_958;
            if (((dVar153 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_9->field0_0x0
                                                   >> 0x20) & uVar37,
                                             (uint)*(undefined8 *)&param_9->field0_0x0 & uVar38)) ||
                (uVar160 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 8),
                dVar153 < (double)CONCAT44((uint)((ulonglong)uVar160 >> 0x20) & uVar37,
                                           (uint)uVar160 & uVar38))) ||
               (uVar160 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 0x10),
               dVar153 < (double)CONCAT44((uint)((ulonglong)uVar160 >> 0x20) & uVar37,
                                          (uint)uVar160 & uVar38))) {
              local_938[0] = local_448.Rotation.XY.m128d_f64[0];
              local_938[1] = local_448.Rotation.XY.m128d_f64[1];
              local_928[0] = local_448.Rotation.ZW.m128d_f64[0];
              local_928[1] = local_448.Rotation.ZW.m128d_f64[1];
              if (((dVar153 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_8->field0_0x0
                                                     >> 0x20) & uVar37,
                                               (uint)*(undefined8 *)&param_8->field0_0x0 & uVar38))
                  || (uVar160 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8),
                     dVar153 < (double)CONCAT44((uint)((ulonglong)uVar160 >> 0x20) & uVar37,
                                                (uint)uVar160 & uVar38))) ||
                 (uVar160 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 0x10),
                 pFVar139 = local_958,
                 dVar153 < (double)CONCAT44((uint)((ulonglong)uVar160 >> 0x20) & uVar37,
                                            (uint)uVar160 & uVar38))) {
                dVar95 = (param_8->field0_0x0)._s_0.Z;
                auVar165._8_8_ = 0;
                auVar165._0_8_ = dVar95;
                auVar64 = *(undefined1 (*) [16])&param_8->field0_0x0;
                auVar142 = blendpd((undefined1  [16])local_448.Rotation.XY.m128d_f64,
                                   (undefined1  [16])local_448.Rotation.ZW.m128d_f64,2);
                dVar141 = auVar64._8_8_;
                auVar169._0_8_ = dVar141 * local_938[0] - auVar64._0_8_ * local_938[1];
                auVar169._8_8_ = dVar95 * local_938[1] - dVar141 * local_928[0];
                auVar97 = blendpd(auVar64,auVar165,2);
                auVar104._0_8_ = auVar97._0_8_ * local_928[0] - dVar95 * auVar142._0_8_;
                auVar104._8_8_ = auVar97._8_8_ * local_928[1] - auVar142._8_8_ * 0.0;
                auVar97 = blendpd(auVar169,auVar104,2);
                dVar63 = auVar169._8_8_ + auVar169._8_8_;
                dVar168 = auVar104._0_8_ + auVar104._0_8_;
                uVar131 = SUB84(dVar168,0);
                uVar135 = (undefined4)((ulonglong)dVar168 >> 0x20);
                auVar170._0_8_ = auVar97._0_8_ + auVar97._0_8_;
                auVar170._8_8_ = auVar97._8_8_ + auVar97._8_8_;
                auVar123._8_4_ = uVar131;
                auVar123._0_8_ = dVar63;
                auVar123._12_4_ = uVar135;
                auVar75._8_4_ = uVar131;
                auVar75._0_8_ = dVar63;
                auVar75._12_4_ = uVar135;
                auVar105._8_4_ = uVar131;
                auVar105._0_8_ = dVar63;
                auVar105._12_4_ = uVar135;
                auVar97 = blendpd(auVar105,auVar170,2);
                auVar124._0_8_ = auVar123._8_8_ * local_938[0] - dVar63 * local_938[1];
                auVar124._8_8_ = auVar170._0_8_ * local_938[1] - auVar75._8_8_ * local_928[0];
                auVar76._8_4_ = SUB84(auVar170._8_8_,0);
                auVar76._0_8_ = auVar170._0_8_;
                auVar76._12_4_ = (int)((ulonglong)auVar170._8_8_ >> 0x20);
                auVar106._0_8_ = auVar97._0_8_ * local_928[0] - auVar170._0_8_ * auVar142._0_8_;
                auVar106._8_8_ = auVar97._8_8_ * local_928[1] - auVar76._8_8_ * auVar142._8_8_;
                auVar77._8_4_ = SUB84(auVar124._8_8_,0);
                auVar77._0_8_ = auVar124._0_8_;
                auVar77._12_4_ = (int)((ulonglong)auVar124._8_8_ >> 0x20);
                auVar97 = blendpd(auVar124,auVar106,2);
                local_5e0 = auVar170._0_8_ * local_928[1] + dVar95 + auVar97._0_8_;
                dVar95 = dVar63 * local_928[1] + auVar64._0_8_ + auVar77._8_8_;
                dVar63 = dVar168 * local_928[1] + dVar141 + auVar106._0_8_;
                uVar131 = (undefined4)((ulonglong)dVar63 >> 0x20);
                auVar16._4_8_ = local_928[1];
                auVar16._0_4_ = (int)((ulonglong)dVar95 >> 0x20);
                auVar145._0_8_ = auVar16._0_8_ << 0x20;
                auVar145._8_4_ = SUB84(dVar63,0);
                auVar145._12_4_ = uVar131;
                dVar152 = auVar145._8_8_;
                local_5f0._8_4_ = SUB84(dVar63,0);
                local_5f0._0_8_ = dVar95;
                local_5f0._12_4_ = uVar131;
                dVar141 = dVar152 * dVar152 + dVar95 * dVar95 + local_5e0 * local_5e0;
                dVar168 = local_5e0;
                if (dVar141 != __real_3ff0000000000000) {
                  if (__real_3e45798ee0000000 <= dVar141) {
                    local_758 = __real_3ff0000000000000 / SQRT(dVar141);
                    dVar95 = dVar95 * local_758;
                    dVar152 = dVar152 * local_758;
                    dVar168 = local_5e0 * local_758;
                  }
                  else {
                    auVar17._4_8_ = dVar63;
                    auVar17._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                    auVar146._0_8_ = auVar17._0_8_ << 0x20;
                    auVar146._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                    auVar146._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                    dVar152 = auVar146._8_8_;
                    dVar168 = (double)CONCAT44(uVar137,uVar136);
                    dVar95 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_
                                              ,UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                               _0_4_);
                  }
                }
                dVar63 = (double)local_958 * dVar95 + dVar152 * dVar117 +
                         dVar168 * (double)local_908;
                pFVar139 = (FScriptContainerElement *)((double)local_958 - dVar63 * dVar95);
                dVar117 = dVar117 - dVar63 * dVar152;
                local_908 = (double)local_908 - dVar63 * dVar168;
                dStack_910 = dVar117;
                local_918 = pFVar139;
                dVar95 = __real_3ff0000000000000;
              }
              if (((dVar153 < (double)CONCAT44((uint)((ulonglong)pFVar139 >> 0x20) & uVar37,
                                               (uint)pFVar139 & uVar38)) ||
                  (dVar153 < (double)CONCAT44((uint)((ulonglong)dVar117 >> 0x20) & uVar37,
                                              SUB84(dVar117,0) & uVar38))) ||
                 (dVar153 < (double)CONCAT44((uint)((ulonglong)local_908 >> 0x20) & uVar37,
                                             (uint)local_908 & uVar38))) {
                if (((dVar153 < (double)CONCAT44((uint)((ulonglong)
                                                        *(undefined8 *)&param_9->field0_0x0 >> 0x20)
                                                 & uVar37,(uint)*(undefined8 *)&param_9->field0_0x0
                                                          & uVar38)) ||
                    (uVar160 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 8),
                    dVar153 < (double)CONCAT44((uint)((ulonglong)uVar160 >> 0x20) & uVar37,
                                               (uint)uVar160 & uVar38))) ||
                   (uVar160 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 0x10),
                   dVar153 < (double)CONCAT44((uint)((ulonglong)uVar160 >> 0x20) & uVar37,
                                              (uint)uVar160 & uVar38))) {
                  bVar30 = false;
                }
                else {
                  bVar30 = true;
                }
                if (!bVar30) {
                  dVar63 = dVar117 * dVar117 + (double)pFVar139 * (double)pFVar139 +
                           (double)local_908 * (double)local_908;
                  if (dVar63 == dVar95) {
LAB_14a57473b:
                    dStack_910 = dVar117;
                    local_918 = pFVar139;
                  }
                  else {
                    if (__real_3e45798ee0000000 <= dVar63) {
                      local_708 = dVar95 / SQRT(dVar63);
                      local_908 = (double)local_908 * local_708;
                      pFVar139 = (FScriptContainerElement *)((double)pFVar139 * local_708);
                      dVar117 = dVar117 * local_708;
                      goto LAB_14a57473b;
                    }
                    local_918._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                    local_918._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                    dStack_910._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                    dStack_910._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                    local_908 = CONCAT44(uVar137,uVar136);
                  }
                  auVar64 = *(undefined1 (*) [16])&param_9->field0_0x0;
                  dVar95 = (param_9->field0_0x0)._s_0.Z;
                  auVar171._8_8_ = 0;
                  auVar171._0_8_ = dVar95;
                  auVar142 = blendpd((undefined1  [16])local_448.Rotation.XY.m128d_f64,
                                     (undefined1  [16])local_448.Rotation.ZW.m128d_f64,2);
                  dVar168 = auVar64._8_8_;
                  auVar147._0_8_ = dVar168 * local_938[0] - auVar64._0_8_ * local_938[1];
                  auVar147._8_8_ = dVar95 * local_938[1] - dVar168 * local_928[0];
                  auVar97 = blendpd(auVar64,auVar171,2);
                  auVar107._0_8_ = auVar97._0_8_ * local_928[0] - dVar95 * auVar142._0_8_;
                  auVar107._8_8_ = auVar97._8_8_ * local_928[1] - auVar142._8_8_ * 0.0;
                  auVar97 = blendpd(auVar147,auVar107,2);
                  auVar148._0_8_ = auVar97._0_8_ + auVar97._0_8_;
                  auVar148._8_8_ = auVar97._8_8_ + auVar97._8_8_;
                  dVar117 = auVar147._8_8_ + auVar147._8_8_;
                  dVar63 = auVar107._0_8_ + auVar107._0_8_;
                  uVar131 = SUB84(dVar63,0);
                  uVar135 = (undefined4)((ulonglong)dVar63 >> 0x20);
                  auVar125._8_4_ = uVar131;
                  auVar125._0_8_ = dVar117;
                  auVar125._12_4_ = uVar135;
                  auVar78._8_4_ = uVar131;
                  auVar78._0_8_ = dVar117;
                  auVar78._12_4_ = uVar135;
                  auVar108._8_4_ = uVar131;
                  auVar108._0_8_ = dVar117;
                  auVar108._12_4_ = uVar135;
                  auVar97 = blendpd(auVar108,auVar148,2);
                  auVar126._0_8_ = auVar125._8_8_ * local_938[0] - dVar117 * local_938[1];
                  auVar126._8_8_ = auVar148._0_8_ * local_938[1] - auVar78._8_8_ * local_928[0];
                  auVar79._8_4_ = SUB84(auVar148._8_8_,0);
                  auVar79._0_8_ = auVar148._0_8_;
                  auVar79._12_4_ = (int)((ulonglong)auVar148._8_8_ >> 0x20);
                  auVar109._0_8_ = auVar97._0_8_ * local_928[0] - auVar148._0_8_ * auVar142._0_8_;
                  auVar109._8_8_ = auVar97._8_8_ * local_928[1] - auVar79._8_8_ * auVar142._8_8_;
                  auVar80._8_4_ = SUB84(auVar126._8_8_,0);
                  auVar80._0_8_ = auVar126._0_8_;
                  auVar80._12_4_ = (int)((ulonglong)auVar126._8_8_ >> 0x20);
                  auVar97 = blendpd(auVar126,auVar109,2);
                  local_6d8 = auVar148._0_8_ * local_928[1] + dVar95 + auVar97._0_8_;
                  dVar95 = dVar117 * local_928[1] + auVar64._0_8_ + auVar80._8_8_;
                  dVar117 = dVar63 * local_928[1] + dVar168 + auVar109._0_8_;
                  uVar131 = SUB84(dVar117,0);
                  uVar135 = (undefined4)((ulonglong)dVar117 >> 0x20);
                  auVar18._4_8_ = auVar148._8_8_ * local_928[1] + 0.0 + auVar97._8_8_;
                  auVar18._0_4_ = (int)((ulonglong)dVar95 >> 0x20);
                  auVar149._0_8_ = auVar18._0_8_ << 0x20;
                  auVar149._8_4_ = uVar131;
                  auVar149._12_4_ = uVar135;
                  dVar63 = auVar149._8_8_;
                  local_6e8._8_4_ = uVar131;
                  local_6e8._0_8_ = dVar95;
                  local_6e8._12_4_ = uVar135;
                  dVar117 = dVar63 * dVar63 + dVar95 * dVar95 + local_6d8 * local_6d8;
                  if (dVar117 == __real_3ff0000000000000) {
                    dStack_868._0_4_ = uVar131;
                    local_870 = dVar95;
                    dStack_868._4_4_ = uVar135;
                    local_860 = local_6d8;
                  }
                  else if (__real_3e45798ee0000000 <= dVar117) {
                    local_750 = __real_3ff0000000000000 / SQRT(dVar117);
                    local_860 = local_750 * local_6d8;
                    dStack_868 = local_750 * dVar63;
                    local_870 = local_750 * dVar95;
                  }
                  else {
                    local_870._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                    local_870._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                    dStack_868._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                    dStack_868._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                    local_860 = CONCAT44(uVar137,uVar136);
                  }
                  local_938 = local_448.Rotation.XY.m128d_f64;
                  local_928 = local_448.Rotation.ZW.m128d_f64;
                  UE::Math::TQuat<double>::FindBetweenNormals
                            (&local_648,(TVector<double> *)&local_870,(TVector<double> *)&local_918)
                  ;
                  dVar63 = local_448.Rotation.ZW.m128d_f64[0];
                  dVar117 = local_448.Rotation.XY.m128d_f64[0];
                  uVar131 = SUB84(__real_3e45798ee0000000,0);
                  uVar135 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                  dVar161 = local_448.Rotation.XY.m128d_f64[1];
                  dVar168 = local_448.Rotation.ZW.m128d_f64[1];
                  auVar150._8_4_ = local_448.Rotation.ZW.m128d_f64[0]._0_4_;
                  auVar150._0_8_ = dVar168;
                  auVar150._12_4_ = local_448.Rotation.ZW.m128d_f64[0]._4_4_;
                  auVar133._8_8_ = local_648.Y;
                  auVar133._0_8_ = local_648.Y;
                  auVar81._8_4_ = local_448.Rotation.XY.m128d_f64[0]._0_4_;
                  auVar81._0_8_ = dVar161;
                  auVar81._12_4_ = local_448.Rotation.XY.m128d_f64[0]._4_4_;
                  dVar141 = dVar168 * local_648.X *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                            dVar117 * local_648.W +
                            dVar63 * local_648.Y *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                            dVar161 * local_648.Z *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  dVar152 = auVar150._8_8_ * local_648.X *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                            dVar161 * local_648.W +
                            dVar168 * local_648.Y *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                            auVar81._8_8_ * local_648.Z *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  auVar82._8_4_ = SUB84(dVar152,0);
                  auVar82._0_8_ = dVar141;
                  auVar82._12_4_ = (int)((ulonglong)dVar152 >> 0x20);
                  dVar95 = dVar161 * local_648.X *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           dVar63 * local_648.W +
                           dVar117 * local_648.Y *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                           dVar168 * local_648.Z *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  dVar117 = dVar117 * local_648.X *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                            dVar168 * local_648.W +
                            dVar161 * local_648.Y *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                            dVar63 * local_648.Z *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  local_738 = __real_3e45798ee0000000;
                  auVar110._8_4_ = SUB84(dVar117,0);
                  auVar110._0_8_ = dVar95;
                  auVar110._12_4_ = (int)((ulonglong)dVar117 >> 0x20);
                  dVar63 = dVar95 * dVar95 + dVar141 * dVar141;
                  dVar168 = auVar110._8_8_ * dVar117 + auVar82._8_8_ * dVar152;
                  auVar83._8_4_ = SUB84(dVar168,0);
                  auVar83._0_8_ = dVar63;
                  auVar83._12_4_ = (int)((ulonglong)dVar168 >> 0x20);
                  auVar84._0_8_ = auVar83._8_8_ + dVar63;
                  auVar84._8_8_ = dVar63 + dVar168;
                  auVar64 = sqrtpd(auVar133,auVar84);
                  uVar58 = -(ulonglong)(__real_3e45798ee0000000 <= auVar84._0_8_);
                  uVar60 = -(ulonglong)(__real_3e45798ee0000000 <= auVar84._8_8_);
                  auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar64);
                  uVar51 = (uint)(uVar58 >> 0x20);
                  uVar54 = (uint)(uVar60 >> 0x20);
                  auVar111._0_4_ =
                       ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
                  ;
                  auVar111._4_4_ =
                       ~uVar51 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
                  auVar111._8_4_ =
                       ~(uint)uVar60 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
                  ;
                  auVar111._12_4_ =
                       ~uVar54 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                                       );
                  auVar159._0_8_ = uVar58 & (ulonglong)(auVar97._0_8_ * dVar141);
                  uVar48 = uVar60 & (ulonglong)(auVar97._8_8_ * dVar152);
                  auVar159._8_4_ = (undefined4)uVar48;
                  auVar159._12_4_ = (undefined4)(uVar48 >> 0x20);
                  local_448.Rotation.XY.m128d_f64 = (double  [2])(auVar159 | auVar111);
                  auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar64);
                  auVar112._0_8_ = (ulonglong)(auVar64._0_8_ * dVar95) & uVar58;
                  uVar48 = (ulonglong)(auVar64._8_8_ * dVar117) & uVar60;
                  auVar112._8_4_ = (undefined4)uVar48;
                  auVar112._12_4_ = (undefined4)(uVar48 >> 0x20);
                  auVar127._0_4_ =
                       ~(uint)uVar58 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
                  ;
                  auVar127._4_4_ =
                       ~uVar51 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                                       );
                  auVar127._8_4_ =
                       ~(uint)uVar60 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
                  ;
                  auVar127._12_4_ =
                       ~uVar54 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                                       );
                  local_448.Rotation.ZW.m128d_f64 = (double  [2])(auVar127 | auVar112);
                  goto LAB_14a574a73;
                }
              }
              uVar131 = SUB84(__real_3e45798ee0000000,0);
              uVar135 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
            }
LAB_14a574a73:
            fVar138 = __real_3f800000;
            local_938 = local_448.Rotation.XY.m128d_f64;
            local_928 = local_448.Rotation.ZW.m128d_f64;
            if (param_13 < __real_3f800000) {
              fVar61 = param_13;
              if (__real_3f800000 <= param_13) {
                fVar61 = __real_3f800000;
              }
              uVar51 = 0;
              if ((int)uVar46 < (int)local_948) {
                uVar51 = uVar45;
              }
              if (fVar61 <= __real_00000000) {
                fVar61 = __real_00000000;
              }
              if ((uVar51 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pTVar35 = FRigVMMathLibrary::LerpTransform
                                  (&local_148,(TTransform<double> *)(local_950.Data + uVar41 * 0x60)
                                   ,&local_448,fVar61);
              local_448.Rotation.XY.m128d_f64 = *&(pTVar35->Rotation).XY.m128d_f64;
              local_448.Rotation.ZW.m128d_f64 = *&(pTVar35->Rotation).ZW.m128d_f64;
              local_448.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
              local_448.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
              local_448.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
              local_448.Translation.ZW.m128d_f64[1] = (pTVar35->Translation).ZW.m128d_f64[1];
              local_448.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
              local_448.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
              local_448.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
              local_448.Scale3D.ZW.m128d_f64[1] = (pTVar35->Scale3D).ZW.m128d_f64[1];
              if ((param_14) && (param_11->ArrayNum == 0)) {
                bVar30 = true;
              }
              else {
                bVar30 = false;
              }
              uVar51 = 0;
              if ((int)uVar46 < pTVar57->ArrayNum) {
                uVar51 = uVar45;
              }
              if ((uVar51 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar8 = *(ushort *)((pTVar57->AllocatorInstance).Data + uVar41 * 0x20 + 0xc);
              uVar51 = (uint)uVar8;
              if (uVar8 == 0xffff) {
                uVar51 = 0xffffffff;
              }
              pTVar35 = &local_578;
              local_578.Rotation.XY.m128d_f64[0] = local_448.Rotation.XY.m128d_f64[0];
              local_578.Rotation.XY.m128d_f64[1] = local_448.Rotation.XY.m128d_f64[1];
              local_578.Rotation.ZW.m128d_f64[0] = local_448.Rotation.ZW.m128d_f64[0];
              local_578.Rotation.ZW.m128d_f64[1] = local_448.Rotation.ZW.m128d_f64[1];
              local_578.Translation.XY.m128d_f64[0] = local_448.Translation.XY.m128d_f64[0];
              local_578.Translation.XY.m128d_f64[1] = local_448.Translation.XY.m128d_f64[1];
              local_578.Translation.ZW.m128d_f64[0] = local_448.Translation.ZW.m128d_f64[0];
              local_578.Translation.ZW.m128d_f64[1] = local_448.Translation.ZW.m128d_f64[1];
              local_578.Scale3D.XY.m128d_f64[0] = local_448.Scale3D.XY.m128d_f64[0];
              local_578.Scale3D.XY.m128d_f64[1] = local_448.Scale3D.XY.m128d_f64[1];
              local_578.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
              local_578.Scale3D.ZW.m128d_f64[1] = local_448.Scale3D.ZW.m128d_f64[1];
            }
            else {
              if ((param_14) && (param_11->ArrayNum == 0)) {
                bVar30 = true;
              }
              else {
                bVar30 = false;
              }
              uVar51 = 0;
              if ((int)uVar46 < pTVar57->ArrayNum) {
                uVar51 = uVar45;
              }
              if (uVar51 == 0) {
                bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar31) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              else {
                local_938[0] = local_448.Rotation.XY.m128d_f64[0];
                local_938[1] = local_448.Rotation.XY.m128d_f64[1];
                local_928[0] = local_448.Rotation.ZW.m128d_f64[0];
                local_928[1] = local_448.Rotation.ZW.m128d_f64[1];
                local_448.Rotation.ZW.m128d_f64[0] = local_928[0];
                local_448.Rotation.ZW.m128d_f64[1] = local_928[1];
                local_448.Rotation.XY.m128d_f64[0] = local_938[0];
                local_448.Rotation.XY.m128d_f64[1] = local_938[1];
              }
              uVar8 = *(ushort *)((pTVar57->AllocatorInstance).Data + uVar41 * 0x20 + 0xc);
              uVar51 = (uint)uVar8;
              if (uVar8 == 0xffff) {
                uVar51 = 0xffffffff;
              }
              pTVar35 = &local_5d8;
              local_5d8.Translation.XY.m128d_f64[0] = local_448.Translation.XY.m128d_f64[0];
              local_5d8.Translation.XY.m128d_f64[1] = local_448.Translation.XY.m128d_f64[1];
              local_5d8.Translation.ZW.m128d_f64[0] = local_448.Translation.ZW.m128d_f64[0];
              local_5d8.Translation.ZW.m128d_f64[1] = local_448.Translation.ZW.m128d_f64[1];
              local_5d8.Scale3D.XY.m128d_f64[0] = local_448.Scale3D.XY.m128d_f64[0];
              local_5d8.Scale3D.XY.m128d_f64[1] = local_448.Scale3D.XY.m128d_f64[1];
              local_5d8.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
              local_5d8.Scale3D.ZW.m128d_f64[1] = local_448.Scale3D.ZW.m128d_f64[1];
              local_5d8.Rotation.XY.m128d_f64[0] = local_448.Rotation.XY.m128d_f64[0];
              local_5d8.Rotation.XY.m128d_f64[1] = local_448.Rotation.XY.m128d_f64[1];
              local_5d8.Rotation.ZW.m128d_f64[0] = local_448.Rotation.ZW.m128d_f64[0];
              local_5d8.Rotation.ZW.m128d_f64[1] = local_448.Rotation.ZW.m128d_f64[1];
            }
            pUVar53 = local_960;
            URigHierarchy::SetGlobalTransformByIndex
                      (local_960,uVar51,pTVar35,false,bVar30,false,false);
            iVar32 = pTVar57->ArrayNum;
            uVar41 = uVar41 + 1;
            uVar48 = (ulonglong)(uVar46 + 1);
          } while ((int)(uVar46 + 1) < iVar32);
        }
        uVar41 = 0;
        if (0 < param_11->ArrayNum) {
          local_3e8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_3e8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_3e8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_3e8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_3e8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_3e8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          if ((iVar32 < 1) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar139 = (pTVar57->AllocatorInstance).Data;
          local_828._0_8_ = *(undefined8 *)pFVar139;
          local_828.Name.Number = *(uint *)(pFVar139 + 8);
          URigHierarchy::GetFirstParent(pUVar53,&local_8e0,&local_828);
          bVar30 = ::FName::IsWithinBounds(local_8e0.Name.ComparisonIndex);
          if (((bVar30) &&
              (CONCAT44(local_8e0.Name.Number,local_8e0.Name.ComparisonIndex.Value) != 0)) &&
             (local_8e0.Type != None)) {
            local_818.Name.Number = local_8e0.Name.Number;
            iVar32 = URigHierarchy::GetIndex(pUVar53,&local_818,true);
            URigHierarchy::GetGlobalTransformByIndex(pUVar53,&local_2c8,iVar32,false);
            local_3e8.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
            local_3e8.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
            local_3e8.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
            local_3e8.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
            local_3e8.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
            local_3e8.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
            local_3e8.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
            local_3e8.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
            local_3e8.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
            local_3e8.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
            local_3e8.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
            local_3e8.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
          }
          pUVar53 = local_960;
          iVar32 = pTVar57->ArrayNum;
          uVar48 = uVar41;
          uVar58 = uVar41;
          if (0 < iVar32) {
            do {
              uVar37 = (uint)uVar48;
              uVar38 = 0;
              if ((int)uVar37 < iVar32) {
                uVar38 = ~uVar37 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar38 = 0xffffffff;
              uVar8 = *(ushort *)((pTVar57->AllocatorInstance).Data + uVar58 + 0xc);
              if (uVar8 != 0xffff) {
                uVar38 = (uint)uVar8;
              }
              URigHierarchy::GetLocalTransformByIndex(pUVar53,&local_268,uVar38,false);
              dVar63 = local_268.Scale3D.ZW.m128d_f64[1];
              dVar117 = local_268.Scale3D.ZW.m128d_f64[0];
              dVar95 = local_268.Scale3D.XY.m128d_f64[1];
              dVar153 = local_268.Scale3D.XY.m128d_f64[0];
              _Var29.m128d_f64 = local_268.Translation.ZW.m128d_f64;
              _Var28.m128d_f64 = local_268.Translation.XY.m128d_f64;
              _Var27.m128d_f64 = local_268.Rotation.ZW.m128d_f64;
              _Var26.m128d_f64 = local_268.Rotation.XY.m128d_f64;
              uVar38 = 0;
              if ((int)uVar37 < local_8e8->ArrayNum) {
                uVar38 = ~uVar37 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar139 = (local_8e8->AllocatorInstance).Data;
              *(double (*) [2])(pFVar139 + uVar41) = _Var26.m128d_f64;
              *(double (*) [2])(pFVar139 + uVar41 + 0x10) = _Var27.m128d_f64;
              *(double (*) [2])(pFVar139 + uVar41 + 0x20) = _Var28.m128d_f64;
              *(double (*) [2])(pFVar139 + uVar41 + 0x30) = _Var29.m128d_f64;
              *(double *)(pFVar139 + uVar41 + 0x40) = dVar153;
              *(double *)(pFVar139 + uVar41 + 0x40 + 8) = dVar95;
              *(double *)(pFVar139 + uVar41 + 0x50) = dVar117;
              *(double *)(pFVar139 + uVar41 + 0x50 + 8) = dVar63;
              uVar41 = uVar41 + 0x60;
              iVar32 = pTVar57->ArrayNum;
              uVar48 = (ulonglong)(uVar37 + 1);
              param_11 = local_990;
              uVar58 = uVar58 + 0x20;
            } while ((int)(uVar37 + 1) < iVar32);
          }
          uVar41 = 0;
          if (0 < iVar32) {
            local_9b8 = 0;
            local_988 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)0x0;
            uVar48 = uVar41;
            uVar58 = uVar41;
            do {
              iVar32 = param_11->ArrayNum;
              uVar37 = (uint)uVar41;
              uVar51 = ~uVar37 >> 0x1f;
              uVar38 = 0;
              if ((int)uVar37 < (param_16->ItemRotationA).ArrayNum) {
                uVar38 = uVar51;
              }
              if ((uVar38 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (*(int *)((param_16->ItemRotationA).AllocatorInstance.Data + uVar58) < iVar32) {
                iVar32 = param_11->ArrayNum;
                uVar38 = 0;
                if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                  uVar38 = uVar51;
                }
                if ((uVar38 == 0) &&
                   (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (*(int *)((param_16->ItemRotationB).AllocatorInstance.Data + uVar48 * 4) < iVar32
                   ) {
                  uVar38 = 0;
                  if ((int)uVar37 < (param_16->ItemRotationA).ArrayNum) {
                    uVar38 = uVar51;
                  }
                  if ((uVar38 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar38 = *(uint *)((param_16->ItemRotationA).AllocatorInstance.Data + uVar48 * 4);
                  uVar45 = 0;
                  if ((int)uVar38 < param_11->ArrayNum) {
                    uVar45 = ~uVar38 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar40 = param_11->DataPtr + (int)uVar38;
                  local_8a8[0] = (pFVar40->Rotation).X;
                  local_8a8[1] = (pFVar40->Rotation).Y;
                  pFVar40 = param_11->DataPtr + (int)uVar38;
                  local_898[0] = (pFVar40->Rotation).Z;
                  local_898[1] = (pFVar40->Rotation).W;
                  uVar38 = 0;
                  if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                    uVar38 = uVar51;
                  }
                  if ((uVar38 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar38 = *(uint *)((param_16->ItemRotationB).AllocatorInstance.Data + uVar48 * 4);
                  uVar45 = 0;
                  if ((int)uVar38 < param_11->ArrayNum) {
                    uVar45 = ~uVar38 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar40 = param_11->DataPtr + (int)uVar38;
                  local_788.X = (pFVar40->Rotation).X;
                  local_788.Y = (pFVar40->Rotation).Y;
                  pdVar3 = &param_11->DataPtr[(int)uVar38].Rotation.Z;
                  local_788.Z = *pdVar3;
                  local_788.W = pdVar3[1];
                  uVar38 = 0;
                  if ((int)uVar37 < (param_16->ItemRotationB).ArrayNum) {
                    uVar38 = uVar51;
                  }
                  if ((uVar38 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar139 = (param_16->ItemRotationB).AllocatorInstance.Data;
                  uVar38 = 0;
                  if ((int)uVar37 < (param_16->ItemRotationA).ArrayNum) {
                    uVar38 = uVar51;
                  }
                  if ((uVar38 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if (*(int *)((param_16->ItemRotationA).AllocatorInstance.Data + uVar48 * 4) ==
                      *(int *)(pFVar139 + uVar48 * 4)) {
LAB_14a57537e:
                    fVar61 = GlobalVectorConstants::Float0001.m128_f32[0];
                    fVar138 = GlobalVectorConstants::Float0001.m128_f32[1];
                    fVar177 = GlobalVectorConstants::Float0001.m128_f32[2];
                    fVar176 = GlobalVectorConstants::Float0001.m128_f32[3];
                  }
                  else {
                    uVar38 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationT).ArrayNum) {
                      uVar38 = uVar51;
                    }
                    if ((uVar38 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    if (fVar138 < *(float *)((param_16->ItemRotationT).AllocatorInstance.Data +
                                            uVar48 * 4)) {
                      local_8a8[1] = local_788.Y;
                      local_8a8[0] = local_788.X;
                      local_898[1] = local_788.W;
                      local_898[0] = local_788.Z;
                      goto LAB_14a57537e;
                    }
                    uVar38 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationT).ArrayNum) {
                      uVar38 = uVar51;
                    }
                    if ((uVar38 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    if (*(float *)((param_16->ItemRotationT).AllocatorInstance.Data + uVar48 * 4) <=
                        __real_322bcc77) goto LAB_14a57537e;
                    uVar38 = 0;
                    if ((int)uVar37 < (param_16->ItemRotationT).ArrayNum) {
                      uVar38 = uVar51;
                    }
                    if ((uVar38 == 0) &&
                       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar30)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pTVar36 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                        (&local_488,(TQuat<double> *)local_8a8,&local_788,
                                         (double)*(float *)((param_16->ItemRotationT).
                                                            AllocatorInstance.Data + uVar48 * 4));
                    fVar61 = GlobalVectorConstants::Float0001.m128_f32[0];
                    fVar138 = GlobalVectorConstants::Float0001.m128_f32[1];
                    fVar177 = GlobalVectorConstants::Float0001.m128_f32[2];
                    fVar176 = GlobalVectorConstants::Float0001.m128_f32[3];
                    dVar153 = pTVar36->X;
                    dVar95 = pTVar36->Y;
                    dVar117 = pTVar36->Z;
                    dVar63 = pTVar36->W;
                    auVar115._0_8_ = dVar153 * dVar153 + dVar117 * dVar117;
                    auVar115._8_8_ = dVar95 * dVar95 + dVar63 * dVar63;
                    local_740 = CONCAT44(uVar135,uVar131);
                    auVar88._8_4_ = SUB84(auVar115._8_8_,0);
                    auVar88._0_8_ = auVar115._0_8_;
                    auVar88._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
                    local_748 = CONCAT44(uVar135,uVar131);
                    auVar89._0_8_ = auVar88._8_8_ + auVar115._0_8_;
                    auVar89._8_8_ = auVar115._0_8_ + auVar115._8_8_;
                    auVar64 = sqrtpd(auVar115,auVar89);
                    uVar60 = -(ulonglong)((double)CONCAT44(uVar135,uVar131) <= auVar89._0_8_);
                    uVar59 = -(ulonglong)((double)CONCAT44(uVar135,uVar131) <= auVar89._8_8_);
                    auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                    auVar64);
                    auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                    auVar64);
                    uVar38 = (uint)(uVar60 >> 0x20);
                    uVar45 = (uint)(uVar59 >> 0x20);
                    local_628._0_8_ = uVar60 & (ulonglong)(auVar97._0_8_ * dVar153);
                    uVar41 = uVar59 & (ulonglong)(auVar97._8_8_ * dVar95);
                    local_628._8_4_ = (undefined4)uVar41;
                    local_628._12_4_ = (undefined4)(uVar41 >> 0x20);
                    uVar46 = SUB84((double)fVar61,0);
                    auVar90._0_4_ = ~(uint)uVar60 & uVar46;
                    uVar54 = (uint)((ulonglong)(double)fVar61 >> 0x20);
                    auVar90._4_4_ = ~uVar38 & uVar54;
                    uVar50 = SUB84((double)fVar138,0);
                    auVar90._8_4_ = ~(uint)uVar59 & uVar50;
                    uVar42 = (uint)((ulonglong)(double)fVar138 >> 0x20);
                    auVar90._12_4_ = ~uVar45 & uVar42;
                    local_628 = local_628 | auVar90;
                    dVar153 = local_628._0_8_;
                    local_618._0_8_ = (ulonglong)(auVar64._0_8_ * dVar117) & uVar60;
                    uVar41 = (ulonglong)(auVar64._8_8_ * dVar63) & uVar59;
                    local_618._8_4_ = (undefined4)uVar41;
                    local_618._12_4_ = (undefined4)(uVar41 >> 0x20);
                    uVar167 = SUB84((double)fVar177,0);
                    auVar129._0_4_ = ~(uint)uVar60 & uVar167;
                    uVar172 = (uint)((ulonglong)(double)fVar177 >> 0x20);
                    auVar129._4_4_ = ~uVar38 & uVar172;
                    uVar173 = SUB84((double)fVar176,0);
                    auVar129._8_4_ = ~(uint)uVar59 & uVar173;
                    uVar174 = (uint)((ulonglong)(double)fVar176 >> 0x20);
                    auVar129._12_4_ = ~uVar45 & uVar174;
                    local_618 = local_618 | auVar129;
                    dVar95 = local_628._8_8_;
                    dVar117 = local_618._0_8_;
                    dVar63 = local_618._8_8_;
                    auVar116._0_8_ = dVar117 * dVar117 + dVar153 * dVar153;
                    auVar116._8_8_ = dVar63 * dVar63 + dVar95 * dVar95;
                    auVar91._8_4_ = SUB84(auVar116._8_8_,0);
                    auVar91._0_8_ = auVar116._0_8_;
                    auVar91._12_4_ = (int)((ulonglong)auVar116._8_8_ >> 0x20);
                    auVar92._0_8_ = auVar91._8_8_ + auVar116._0_8_;
                    auVar92._8_8_ = auVar116._0_8_ + auVar116._8_8_;
                    auVar64 = sqrtpd(auVar116,auVar92);
                    uVar60 = -(ulonglong)((double)CONCAT44(uVar135,uVar131) <= auVar92._0_8_);
                    uVar59 = -(ulonglong)((double)CONCAT44(uVar135,uVar131) <= auVar92._8_8_);
                    auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                    auVar64);
                    auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                    auVar64);
                    uVar38 = (uint)(uVar60 >> 0x20);
                    uVar45 = (uint)(uVar59 >> 0x20);
                    auVar175._0_8_ = uVar60 & (ulonglong)(auVar97._0_8_ * dVar153);
                    uVar41 = uVar59 & (ulonglong)(auVar97._8_8_ * dVar95);
                    auVar175._8_4_ = (undefined4)uVar41;
                    auVar175._12_4_ = (undefined4)(uVar41 >> 0x20);
                    auVar166._0_8_ = (ulonglong)(auVar64._0_8_ * dVar117) & uVar60;
                    uVar41 = (ulonglong)(auVar64._8_8_ * dVar63) & uVar59;
                    auVar166._8_4_ = (undefined4)uVar41;
                    auVar166._12_4_ = (undefined4)(uVar41 >> 0x20);
                    auVar93._0_4_ = ~(uint)uVar60 & uVar46;
                    auVar93._4_4_ = ~uVar38 & uVar54;
                    auVar93._8_4_ = ~(uint)uVar59 & uVar50;
                    auVar93._12_4_ = ~uVar45 & uVar42;
                    local_8a8 = (double  [2])(auVar175 | auVar93);
                    auVar130._0_4_ = ~(uint)uVar60 & uVar167;
                    auVar130._4_4_ = ~uVar38 & uVar172;
                    auVar130._8_4_ = ~(uint)uVar59 & uVar173;
                    auVar130._12_4_ = ~uVar45 & uVar174;
                    local_898 = (double  [2])(auVar166 | auVar130);
                    local_4a8 = (undefined1  [16])local_8a8;
                    local_498 = (undefined1  [16])local_898;
                  }
                  pTVar22 = local_8e8;
                  uVar38 = 0;
                  if ((int)uVar37 < local_8e8->ArrayNum) {
                    uVar38 = uVar51;
                  }
                  if (uVar38 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    fVar61 = GlobalVectorConstants::Float0001.m128_f32[0];
                    fVar138 = GlobalVectorConstants::Float0001.m128_f32[1];
                    fVar177 = GlobalVectorConstants::Float0001.m128_f32[2];
                    fVar176 = GlobalVectorConstants::Float0001.m128_f32[3];
                  }
                  local_388.Rotation.XY.m128d_f64[0] = (double)fVar61;
                  local_388.Rotation.XY.m128d_f64[1] = (double)fVar138;
                  local_388.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_388.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_388.Rotation.ZW.m128d_f64[0] = (double)fVar177;
                  local_388.Rotation.ZW.m128d_f64[1] = (double)fVar176;
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
                             ((pTVar22->AllocatorInstance).Data +
                             (longlong)&(local_988->AllocatorInstance).Data),&local_3e8);
                  fVar138 = __real_3f800000;
                  local_6a8[1] = local_388.Rotation.XY.m128d_f64[1];
                  local_6a8[0] = local_388.Rotation.XY.m128d_f64[0];
                  local_698[1] = local_388.Rotation.ZW.m128d_f64[1];
                  local_698[0] = local_388.Rotation.ZW.m128d_f64[0];
                  local_3e8.Translation.XY.m128d_f64[1] = local_388.Translation.XY.m128d_f64[1];
                  local_3e8.Translation.XY.m128d_f64[0] = local_388.Translation.XY.m128d_f64[0];
                  local_3e8.Scale3D.XY.m128d_f64[1] = local_388.Scale3D.XY.m128d_f64[1];
                  local_3e8.Scale3D.XY.m128d_f64[0] = local_388.Scale3D.XY.m128d_f64[0];
                  auVar128._8_4_ = SUB84(local_388.Rotation.XY.m128d_f64[0],0);
                  auVar128._0_8_ = local_388.Rotation.XY.m128d_f64[0];
                  auVar128._12_4_ = (int)((ulonglong)local_388.Rotation.XY.m128d_f64[0] >> 0x20);
                  local_3e8.Translation.ZW.m128d_f64[1] = local_388.Translation.ZW.m128d_f64[1];
                  local_3e8.Translation.ZW.m128d_f64[0] = local_388.Translation.ZW.m128d_f64[0];
                  local_3e8.Scale3D.ZW.m128d_f64[1] = local_388.Scale3D.ZW.m128d_f64[1];
                  local_3e8.Scale3D.ZW.m128d_f64[0] = local_388.Scale3D.ZW.m128d_f64[0];
                  auVar140._8_8_ = local_388.Rotation.XY.m128d_f64[1];
                  auVar140._0_8_ = local_388.Rotation.XY.m128d_f64[1];
                  auVar85._8_4_ = SUB84(local_388.Rotation.ZW.m128d_f64[0],0);
                  auVar85._0_8_ = local_388.Rotation.ZW.m128d_f64[0];
                  auVar85._12_4_ = (int)((ulonglong)local_388.Rotation.ZW.m128d_f64[0] >> 0x20);
                  local_6c8._0_8_ =
                       local_388.Rotation.XY.m128d_f64[0] * local_898[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       local_8a8[0] * local_388.Rotation.ZW.m128d_f64[1] +
                       local_898[0] * local_388.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       local_388.Rotation.ZW.m128d_f64[0] * local_8a8[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  local_6c8._8_8_ =
                       auVar128._8_8_ * local_898[0] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       local_8a8[1] * local_388.Rotation.ZW.m128d_f64[1] +
                       local_898[1] * local_388.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       auVar85._8_8_ * local_8a8[0] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  local_6c8._16_8_ =
                       local_388.Rotation.XY.m128d_f64[0] * local_8a8[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       local_898[0] * local_388.Rotation.ZW.m128d_f64[1] +
                       local_8a8[0] * local_388.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       local_388.Rotation.ZW.m128d_f64[0] * local_898[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  local_6c8._24_8_ =
                       local_388.Rotation.XY.m128d_f64[0] * local_8a8[0] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       local_898[1] * local_388.Rotation.ZW.m128d_f64[1] +
                       local_8a8[1] * local_388.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       local_388.Rotation.ZW.m128d_f64[0] * local_898[0] *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  fVar61 = param_13;
                  if (__real_3f800000 <= param_13) {
                    fVar61 = __real_3f800000;
                  }
                  if (fVar61 <= 0.0) {
                    fVar61 = 0.0;
                  }
                  local_3e8.Rotation.XY.m128d_f64 = local_6a8;
                  local_3e8.Rotation.ZW.m128d_f64 = local_698;
                  pTVar36 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                      (&local_468,(TQuat<double> *)local_6a8,
                                       (TQuat<double> *)local_6c8,(double)fVar61);
                  dVar153 = pTVar36->X;
                  dVar95 = pTVar36->Y;
                  uVar6 = pTVar36->Z;
                  uVar7 = pTVar36->W;
                  local_728 = CONCAT44(uVar135,uVar131);
                  dVar117 = dVar153 * dVar153 + (double)uVar6 * (double)uVar6;
                  dVar63 = dVar95 * dVar95 + (double)uVar7 * (double)uVar7;
                  auVar86._8_4_ = SUB84(dVar63,0);
                  auVar86._0_8_ = dVar117;
                  auVar86._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
                  auVar87._0_8_ = auVar86._8_8_ + dVar117;
                  auVar87._8_8_ = dVar117 + dVar63;
                  auVar64 = sqrtpd(auVar140,auVar87);
                  uVar59 = -(ulonglong)((double)CONCAT44(uVar135,uVar131) <= auVar87._0_8_);
                  uVar60 = -(ulonglong)((double)CONCAT44(uVar135,uVar131) <= auVar87._8_8_);
                  auVar97 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar64);
                  uVar38 = (uint)(uVar59 >> 0x20);
                  uVar45 = (uint)(uVar60 >> 0x20);
                  auVar151._0_8_ = uVar59 & (ulonglong)(auVar97._0_8_ * dVar153);
                  uVar41 = uVar60 & (ulonglong)(auVar97._8_8_ * dVar95);
                  auVar151._8_4_ = (undefined4)uVar41;
                  auVar151._12_4_ = (undefined4)(uVar41 >> 0x20);
                  auVar113._0_4_ =
                       ~(uint)uVar59 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
                  ;
                  auVar113._4_4_ =
                       ~uVar38 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
                  auVar113._8_4_ =
                       ~(uint)uVar60 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
                  ;
                  auVar113._12_4_ =
                       ~uVar45 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                                       );
                  local_8a8 = (double  [2])(auVar151 | auVar113);
                  auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar64);
                  auVar134._0_4_ =
                       ~(uint)uVar59 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
                  ;
                  auVar134._4_4_ =
                       ~uVar38 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                                       );
                  auVar134._8_4_ =
                       ~(uint)uVar60 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
                  ;
                  auVar134._12_4_ =
                       ~uVar45 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                                       );
                  auVar114._0_8_ = (ulonglong)(auVar64._0_8_ * (double)uVar6) & uVar59;
                  uVar60 = (ulonglong)(auVar64._8_8_ * (double)uVar7) & uVar60;
                  auVar114._8_4_ = (undefined4)uVar60;
                  auVar114._12_4_ = (undefined4)(uVar60 >> 0x20);
                  local_898 = (double  [2])(auVar134 | auVar114);
                  uVar38 = 0;
                  if ((int)uVar37 < pTVar57->ArrayNum) {
                    uVar38 = uVar51;
                  }
                  local_668 = local_8a8;
                  local_658 = local_898;
                  local_3e8.Rotation.XY.m128d_f64 = local_8a8;
                  local_3e8.Rotation.ZW.m128d_f64 = local_898;
                  if ((uVar38 == 0) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar38 = 0xffffffff;
                  uVar8 = *(ushort *)((pTVar57->AllocatorInstance).Data + local_9b8 + 0xc);
                  if (uVar8 != 0xffff) {
                    uVar38 = (uint)uVar8;
                  }
                  local_518.Rotation.XY.m128d_f64[0] = local_3e8.Rotation.XY.m128d_f64[0];
                  local_518.Rotation.XY.m128d_f64[1] = local_3e8.Rotation.XY.m128d_f64[1];
                  local_518.Rotation.ZW.m128d_f64[0] = local_3e8.Rotation.ZW.m128d_f64[0];
                  local_518.Rotation.ZW.m128d_f64[1] = local_3e8.Rotation.ZW.m128d_f64[1];
                  local_518.Translation.XY.m128d_f64[0] = local_3e8.Translation.XY.m128d_f64[0];
                  local_518.Translation.XY.m128d_f64[1] = local_3e8.Translation.XY.m128d_f64[1];
                  local_518.Translation.ZW.m128d_f64[0] = local_3e8.Translation.ZW.m128d_f64[0];
                  local_518.Translation.ZW.m128d_f64[1] = local_3e8.Translation.ZW.m128d_f64[1];
                  local_518.Scale3D.XY.m128d_f64[0] = local_3e8.Scale3D.XY.m128d_f64[0];
                  local_518.Scale3D.XY.m128d_f64[1] = local_3e8.Scale3D.XY.m128d_f64[1];
                  local_518.Scale3D.ZW.m128d_f64[0] = local_3e8.Scale3D.ZW.m128d_f64[0];
                  local_518.Scale3D.ZW.m128d_f64[1] = local_3e8.Scale3D.ZW.m128d_f64[1];
                  URigHierarchy::SetGlobalTransformByIndex
                            (local_960,uVar38,&local_518,false,param_14,false,false);
                }
              }
              local_988 = local_988 + 6;
              local_9b8 = local_9b8 + 0x20;
              uVar41 = (ulonglong)(uVar37 + 1);
              uVar48 = uVar48 + 1;
              uVar58 = uVar58 + 4;
            } while ((int)(uVar37 + 1) < pTVar57->ArrayNum);
          }
        }
        pFVar25 = local_838;
        pFVar24 = local_840;
        pFVar23 = local_8d0;
        if ((*(longlong *)&local_840->field_0x58 != 0) && (local_838->bEnabled != false)) {
          pFVar1 = &local_838->CurveColor;
          FRigUnit_DebugBezierItemSpace::DrawBezier
                    ((FRigVMExecuteContext *)local_840,&local_838->WorldOffset,local_8d0,0.0,fVar138
                     ,pFVar1,local_838->Scale,0x40);
          fVar138 = __real_bf800000;
          fVar61 = __real_40c00000;
          FRigVMDrawInterface::DrawPoint
                    (*(FRigVMDrawInterface **)&pFVar24->field_0x58,&pFVar25->WorldOffset,&pFVar23->A
                     ,pFVar25->Scale * __real_40c00000,pFVar1,SDPG_Foreground,__real_bf800000);
          FRigVMDrawInterface::DrawPoint
                    (*(FRigVMDrawInterface **)&pFVar24->field_0x58,&pFVar25->WorldOffset,&pFVar23->B
                     ,pFVar25->Scale * fVar61,pFVar1,SDPG_Foreground,fVar138);
          FRigVMDrawInterface::DrawPoint
                    (*(FRigVMDrawInterface **)&pFVar24->field_0x58,&pFVar25->WorldOffset,&pFVar23->C
                     ,pFVar25->Scale * fVar61,pFVar1,SDPG_Foreground,fVar138);
          FRigVMDrawInterface::DrawPoint
                    (*(FRigVMDrawInterface **)&pFVar24->field_0x58,&pFVar25->WorldOffset,&pFVar23->D
                     ,pFVar25->Scale * fVar61,pFVar1,SDPG_Foreground,fVar138);
          pFVar10 = *(FRigVMDrawInterface **)&pFVar24->field_0x58;
          fVar61 = pFVar25->Scale;
          local_7a8.DataPtr = (TVector<double> *)(param_16->CurvePositions).AllocatorInstance.Data;
          local_7a8.ArrayNum = (param_16->CurvePositions).ArrayNum;
          if ((local_7a8.ArrayNum < 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar30)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FRigVMDrawInterface::DrawLineStrip
                    (pFVar10,&pFVar25->WorldOffset,&local_7a8,&pFVar25->SegmentsColor,fVar61,
                     SDPG_Foreground,fVar138);
          local_798.DataPtr = (TVector<double> *)(param_16->CurvePositions).AllocatorInstance.Data;
          pFVar10 = *(FRigVMDrawInterface **)&pFVar24->field_0x58;
          fVar61 = pFVar25->Scale * __real_40800000;
          local_798.ArrayNum = (param_16->CurvePositions).ArrayNum;
          if ((local_798.ArrayNum < 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar30)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FRigVMDrawInterface::DrawPoints
                    (pFVar10,&pFVar25->WorldOffset,&local_798,fVar61,&pFVar25->SegmentsColor,
                     SDPG_Foreground,fVar138);
        }
        if ((TTransform<double> *)local_950.Data != (TTransform<double> *)0x0) {
          FMemory::Free(local_950.Data);
        }
      }
    }
  }
  return;
}

