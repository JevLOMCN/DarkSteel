// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 8

// StaticStruct @ 14debed20

UScriptStruct * __cdecl FRigUnit_FitChainToSplineCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve,(UObject *)pUVar1,
                         L"RigUnit_FitChainToSplineCurve");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurve.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurve.OuterSingleton;
}

// GetExecuteContextStruct @ 14debeda0

UScriptStruct * __thiscall
FRigUnit_FitChainToSplineCurve::GetExecuteContextStruct(FRigUnit_FitChainToSplineCurve *this)

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

// Execute @ 14debedb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FitChainToSplineCurve::Execute(FRigUnit_FitChainToSplineCurve *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ERigVMAnimEasingType EVar4;
  EControlRigCurveAlignment EVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStackY_348 [32];
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> local_2c8;
  TArrayView<FRigElementKey_const_,int> local_2b8;
  undefined1 local_2a8 [592];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_348;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_2a8);
  if ((FRigVMNameCache *)local_2a8._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_2a8._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_2c8.DataPtr = (FRigUnit_FitChainToCurve_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar6 = (this->Rotations).ArrayNum;
  if (iVar6 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_2b8.DataPtr = (FRigElementKey *)(this->Items).Keys.AllocatorInstance.Data;
  bVar10 = this->bPropagateToChildren;
  fVar1 = this->Weight;
  EVar4 = this->RotationEaseType;
  iVar7 = this->SamplingPrecision;
  fVar2 = this->Maximum;
  fVar3 = this->Minimum;
  EVar5 = this->Alignment;
  iVar8 = (this->Items).Keys.ArrayNum;
  local_2c8.ArrayNum = iVar6;
  if (iVar8 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_2b8.ArrayNum = iVar8;
  FRigUnit_FitChainToSplineCurveItemArray::StaticExecute
            ((FControlRigExecuteContext *)local_2a8,&local_2b8,&this->Spline,EVar5,fVar3,fVar2,iVar7
             ,&this->PrimaryAxis,&this->SecondaryAxis,&this->PoleVectorPosition,&local_2c8,EVar4,
             fVar1,bVar10,&this->DebugSettings,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_2a8);
  return;
}

// GetUpgradeInfo @ 14debeff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_FitChainToSplineCurve::GetUpgradeInfo
          (FRigUnit_FitChainToSplineCurve *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FSharedReferencer<1> FVar3;
  UPackage *pUVar4;
  FRigVMRegistry_RWLock *pFVar5;
  undefined1 auStackY_268 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_228;
  FRigUnit_FitChainToSplineCurveItemArray local_218;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  FRigUnit_FitChainToSplineCurveItemArray::FRigUnit_FitChainToSplineCurveItemArray(&local_218);
  if (&local_218.Items != &(this->Items).Keys) {
    iVar1 = (this->Items).Keys.ArrayNum;
    pFVar2 = (this->Items).Keys.AllocatorInstance.Data;
    local_218.Items.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_218.Items.ArrayMax == 0)) {
      local_218.Items.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar1,local_218.Items.ArrayMax,&local_218.Items.AllocatorInstance,iVar1,
                 &local_218.Items.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_218.Items.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 0xc);
      }
    }
  }
  FVar3.ReferenceController = local_218.Spline.SplineData.SharedReferenceCount.ReferenceController;
  local_218.Spline.SplineData.SharedReferenceCount.ReferenceController =
       (this->Spline).SplineData.SharedReferenceCount.ReferenceController;
  local_218.Spline.SplineData.Object = (this->Spline).SplineData.Object;
  if (local_218.Spline.SplineData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_218.Spline.SplineData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_218.Spline.SplineData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  local_218.Alignment = this->Alignment;
  local_218.Minimum = this->Minimum;
  local_218.Maximum = this->Maximum;
  local_218.PrimaryAxis.field0_0x0._s_0.X = (this->PrimaryAxis).field0_0x0._s_0.X;
  local_218.PrimaryAxis.field0_0x0._s_0.Y = (this->PrimaryAxis).field0_0x0._s_0.Y;
  local_218.SamplingPrecision = this->SamplingPrecision;
  local_218.PrimaryAxis.field0_0x0._s_0.Z = (this->PrimaryAxis).field0_0x0._s_0.Z;
  local_218.SecondaryAxis.field0_0x0._s_0.Z = (this->SecondaryAxis).field0_0x0._s_0.Z;
  local_218.PoleVectorPosition.field0_0x0._s_0.Z = (this->PoleVectorPosition).field0_0x0._s_0.Z;
  local_218.SecondaryAxis.field0_0x0._s_0.X = (this->SecondaryAxis).field0_0x0._s_0.X;
  local_218.SecondaryAxis.field0_0x0._s_0.Y = (this->SecondaryAxis).field0_0x0._s_0.Y;
  local_218.PoleVectorPosition.field0_0x0._s_0.X = (this->PoleVectorPosition).field0_0x0._s_0.X;
  local_218.PoleVectorPosition.field0_0x0._s_0.Y = (this->PoleVectorPosition).field0_0x0._s_0.Y;
  if (&local_218.Rotations != &this->Rotations) {
    iVar1 = (this->Rotations).ArrayNum;
    pFVar2 = (this->Rotations).AllocatorInstance.Data;
    local_218.Rotations.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_218.Rotations.ArrayMax == 0)) {
      local_218.Rotations.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar1,local_218.Rotations.ArrayMax,&local_218.Rotations.AllocatorInstance
                 ,iVar1,&local_218.Rotations.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_218.Rotations.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 0x30);
      }
    }
  }
  local_218.Weight = this->Weight;
  local_218.DebugSettings.CurveColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(this->DebugSettings).CurveColor.field0_0x0 + 8);
  local_218.DebugSettings.SegmentsColor.field0_0x0._0_8_ =
       *(undefined8 *)&(this->DebugSettings).SegmentsColor.field0_0x0;
  local_218.RotationEaseType = this->RotationEaseType;
  local_218.DebugSettings.bEnabled = (this->DebugSettings).bEnabled;
  local_218.DebugSettings._1_3_ = *(undefined3 *)&(this->DebugSettings).field_0x1;
  local_218.DebugSettings.Scale = (this->DebugSettings).Scale;
  local_218.DebugSettings.CurveColor.field0_0x0._0_8_ =
       *(undefined8 *)&(this->DebugSettings).CurveColor.field0_0x0;
  local_218.bPropagateToChildren = this->bPropagateToChildren;
  local_218.DebugSettings.SegmentsColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(this->DebugSettings).SegmentsColor.field0_0x0 + 8);
  local_218.DebugSettings._padding_ = (this->DebugSettings)._padding_;
  local_218.DebugSettings.WorldOffset.Rotation.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64[0];
  local_218.DebugSettings.WorldOffset.Rotation.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64[1];
  local_218.DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64[0];
  local_218.DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64[1];
  local_218.DebugSettings.WorldOffset.Translation.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Translation.XY.m128d_f64[0];
  local_218.DebugSettings.WorldOffset.Translation.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Translation.XY.m128d_f64[1];
  local_218.DebugSettings.WorldOffset.Translation.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64[0];
  local_218.DebugSettings.WorldOffset.Translation.ZW.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64[1];
  local_218.DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64[0];
  local_218.DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64[1];
  local_218.DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[0] =
       (this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64[0];
  local_218.DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[1] =
       (this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64[1];
  local_218.WorkData.ChainLength = (this->WorkData).ChainLength;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.ItemPositions,&(this->WorkData).ItemPositions);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.ItemSegments,&(this->WorkData).ItemSegments);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.CurvePositions,&(this->WorkData).CurvePositions);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.CurveSegments,&(this->WorkData).CurveSegments);
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.CachedItems,&(this->WorkData).CachedItems);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.ItemRotationA,&(this->WorkData).ItemRotationA);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.ItemRotationB,&(this->WorkData).ItemRotationB);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.ItemRotationT,&(this->WorkData).ItemRotationT);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&local_218.WorkData.ItemLocalTransforms,&(this->WorkData).ItemLocalTransforms);
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve,(UObject *)pUVar4,
                         L"RigUnit_FitChainToSplineCurve");
    pFVar5 = FRigVMRegistry_RWLock::Get();
    local_228.ArrayNum = 1;
    local_228.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar5,Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurve.
                      OuterSingleton,&local_228);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurve.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray,
                         (UObject *)pUVar4,L"RigUnit_FitChainToSplineCurveItemArray");
    pFVar5 = FRigVMRegistry_RWLock::Get();
    local_228.ArrayNum = 1;
    local_228.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar5,Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray.
                      OuterSingleton,&local_228);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_228.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_218);
  FRigUnit_FitChainToCurve_WorkData::~FRigUnit_FitChainToCurve_WorkData(&local_218.WorkData);
  if (local_218.Rotations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Rotations.AllocatorInstance.Data);
  }
  local_218.Spline._padding_ = (longlong)&___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.Spline.SplineData.SharedReferenceCount.ReferenceController);
  if (local_218.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Items.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_FitChainToSplineCurve @ 14dec2010

FRigUnit_FitChainToSplineCurve * __thiscall
FRigUnit_FitChainToSplineCurve::FRigUnit_FitChainToSplineCurve(FRigUnit_FitChainToSplineCurve *this)

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
  
  (this->Items).Keys.ArrayNum = 0;
  (this->Items).Keys.ArrayMax = 0;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  (this->Rotations).ArrayNum = 0;
  (this->Rotations).ArrayMax = 0;
  (this->Items).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spline).SplineData.Object = (FControlRigSplineImpl *)0x0;
  (this->Spline).SplineData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Rotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)this = &___7FRigUnit_FitChainToSplineCurve__6B_;
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

// Execute @ 14dec3a00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FitChainToSplineCurve::Execute
          (FRigUnit_FitChainToSplineCurve *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&this->Items,&this->Spline,this->Alignment,this->Minimum,this->Maximum,
                this->SamplingPrecision,&this->PrimaryAxis,&this->SecondaryAxis,
                &this->PoleVectorPosition,&local_18,this->RotationEaseType,this->Weight,
                this->bPropagateToChildren,&this->DebugSettings,&this->WorkData);
  return;
}

// RigVMExecute @ 14dec63a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FitChainToSplineCurve::RigVMExecute
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
  FRigElementKeyCollection *pFVar10;
  FControlRigSpline *pFVar11;
  EControlRigCurveAlignment *pEVar12;
  FRigVMMemoryHandle *pFVar13;
  float *pfVar14;
  int *piVar15;
  TVector<double> *pTVar16;
  TVector<double> *pTVar17;
  TVector<double> *pTVar18;
  uchar *puVar19;
  ERigVMAnimEasingType *pEVar20;
  uchar *puVar21;
  FRigUnit_FitChainToCurve_DebugSettings *pFVar22;
  FRigVMSlice *pFVar23;
  FRigUnit_FitChainToCurve_WorkData *pFVar24;
  FControlRigExecuteContext *pFVar25;
  TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> local_78 [4];
  
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
    pFVar10 = (FRigElementKeyCollection *)pFVar13->Ptr;
  }
  else {
    pFVar10 = (FRigElementKeyCollection *)
              FRigVMPropertyPath::GetData_Internal
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
    pFVar11 = (FControlRigSpline *)pFVar13[1].Ptr;
  }
  else {
    pFVar11 = (FControlRigSpline *)
              FRigVMPropertyPath::GetData_Internal
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
    pEVar12 = pFVar13[2].Ptr;
  }
  else {
    pEVar12 = FRigVMPropertyPath::GetData_Internal
                        (pFVar13[2].PropertyPath,pFVar13[2].Ptr,pFVar13[2].Property);
  }
  EVar4 = *pEVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar14 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar1 = *pfVar14;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar14 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar2 = *pfVar14;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  piVar15 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  iVar6 = *piVar15;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar16 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar17 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pTVar18 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  puVar19 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pEVar20 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  EVar5 = *pEVar20;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pfVar14 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar3 = *pfVar14;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  puVar21 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  bVar8 = (bool)*puVar21;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pFVar22 = (FRigUnit_FitChainToCurve_DebugSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xe);
  pFVar23 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar24 = (FRigUnit_FitChainToCurve_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar13,false,pFVar23->Offset + pFVar23->Index);
  local_78[0].DataPtr = *(FRigUnit_FitChainToCurve_Rotation **)puVar19;
  local_78[0].ArrayNum = *(int *)(puVar19 + 8);
  if (local_78[0].ArrayNum < 0) {
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
  pFVar25 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar25,pFVar10,pFVar11,EVar4,fVar1,fVar2,iVar6,pTVar16,pTVar17,pTVar18,local_78,
                EVar5,fVar3,bVar8,pFVar22,pFVar24);
  return;
}

// StaticExecute @ 14decb3c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FitChainToSplineCurve::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,
          FControlRigSpline *param_3,EControlRigCurveAlignment param_4,float param_5,float param_6,
          int param_7,TVector<double> *param_8,TVector<double> *param_9,TVector<double> *param_10,
          TArrayView<FRigUnit_FitChainToCurve_Rotation_const_,int> *param_11,
          ERigVMAnimEasingType param_12,float param_13,bool param_14,
          FRigUnit_FitChainToCurve_DebugSettings *param_15,
          FRigUnit_FitChainToCurve_WorkData *param_16)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(param_2->Keys).AllocatorInstance.Data;
  iVar1 = (param_2->Keys).ArrayNum;
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
  FRigUnit_FitChainToSplineCurveItemArray::StaticExecute
            (param_1,&local_18,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14,param_15,param_16);
  return;
}

