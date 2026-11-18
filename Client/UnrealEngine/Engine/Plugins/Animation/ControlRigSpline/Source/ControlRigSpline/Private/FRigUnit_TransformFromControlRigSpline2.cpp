// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 7

// StaticStruct @ 14debe310

UScriptStruct * __cdecl FRigUnit_TransformFromControlRigSpline2::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TransformFromControlRigSpline2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_TransformFromControlRigSpline2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2,
                         (UObject *)pUVar1,L"RigUnit_TransformFromControlRigSpline2");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TransformFromControlRigSpline2.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TransformFromControlRigSpline2.OuterSingleton;
}

// GetExecuteContextStruct @ 14debe390

UScriptStruct * __thiscall
FRigUnit_TransformFromControlRigSpline2::GetExecuteContextStruct
          (FRigUnit_TransformFromControlRigSpline2 *this)

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

// Execute @ 14debe3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TransformFromControlRigSpline2::Execute(FRigUnit_TransformFromControlRigSpline2 *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Spline,this->U,&this->PrimaryAxis,
                &this->SecondaryAxis,&this->Transform);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_TransformFromControlRigSpline2 @ 14dec2660

FRigUnit_TransformFromControlRigSpline2 * __thiscall
FRigUnit_TransformFromControlRigSpline2::FRigUnit_TransformFromControlRigSpline2
          (FRigUnit_TransformFromControlRigSpline2 *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  this->_padding_ = (longlong)&___7FRigUnit_TransformFromControlRigSpline2__6B_;
  (this->Spline)._padding_ = (longlong)&___7FControlRigSpline__6B_;
  (this->Spline).SplineData.Object = (FControlRigSplineImpl *)0x0;
  (this->Spline).SplineData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar8;
  this->U = 0.0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrimaryAxis).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrimaryAxis).field0_0x0._s_0.Y = (double)uVar9;
  (this->PrimaryAxis).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SecondaryAxis).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SecondaryAxis).field0_0x0._s_0.Y = (double)uVar9;
  (this->SecondaryAxis).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// Execute @ 14dec4330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TransformFromControlRigSpline2::Execute
          (FRigUnit_TransformFromControlRigSpline2 *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Spline,this->U,&this->PrimaryAxis,&this->SecondaryAxis,
                &this->Transform);
  return;
}

// RigVMExecute @ 14dec7a00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TransformFromControlRigSpline2::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FControlRigSpline *pFVar5;
  float *pfVar6;
  TVector<double> *pTVar7;
  FRigVMMemoryHandle *pFVar8;
  TVector<double> *pTVar9;
  TTransform<double> *pTVar10;
  FControlRigExecuteContext *pFVar11;
  
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
    pFVar5 = (FControlRigSpline *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FControlRigSpline *)
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
    pfVar6 = (float *)pFVar8[1].Ptr;
  }
  else {
    pfVar6 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  fVar1 = *pfVar6;
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
    pTVar7 = (TVector<double> *)pFVar8[2].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar5,fVar1,pTVar7,pTVar9,pTVar10);
  return;
}

// StaticExecute @ 14ded1c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_TransformFromControlRigSpline2::StaticExecute
          (FControlRigExecuteContext *param_1,FControlRigSpline *param_2,float param_3,
          TVector<double> *param_4,TVector<double> *param_5,TTransform<double> *param_6)

{
  FControlRigSplineImpl *pFVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  TTransform<double> local_68;
  
  pFVar1 = (param_2->SplineData).Object;
  if (pFVar1 != (FControlRigSplineImpl *)0x0) {
    if (pFVar1->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        return;
      }
    }
    else {
      if (__real_3f800000 <= param_3) {
        param_3 = __real_3f800000;
      }
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      pTVar3 = FControlRigSpline::TransformAtParam(param_2,&local_68,param_3);
      dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
      (param_6->Rotation).XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
      (param_6->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
      (param_6->Rotation).ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
      (param_6->Rotation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
      (param_6->Translation).XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
      (param_6->Translation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
      (param_6->Translation).ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
      (param_6->Translation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
      (param_6->Scale3D).XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
      (param_6->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
      (param_6->Scale3D).ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
      (param_6->Scale3D).ZW.m128d_f64[1] = dVar2;
      pTVar3 = ApplyPrimarySecondaryAxis(&local_68,param_6,param_4,param_5);
      dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
      (param_6->Rotation).XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
      (param_6->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
      (param_6->Rotation).ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
      (param_6->Rotation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
      (param_6->Translation).XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
      (param_6->Translation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
      (param_6->Translation).ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
      (param_6->Translation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
      (param_6->Scale3D).XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
      (param_6->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
      (param_6->Scale3D).ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
      (param_6->Scale3D).ZW.m128d_f64[1] = dVar2;
    }
  }
  return;
}

