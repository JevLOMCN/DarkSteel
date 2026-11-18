// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 7

// StaticStruct @ 14debe130

UScriptStruct * __cdecl FRigUnit_TransformFromControlRigSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TransformFromControlRigSpline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_TransformFromControlRigSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline,
                         (UObject *)pUVar1,L"RigUnit_TransformFromControlRigSpline");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TransformFromControlRigSpline.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TransformFromControlRigSpline.OuterSingleton;
}

// GetExecuteContextStruct @ 14debe1b0

UScriptStruct * __thiscall
FRigUnit_TransformFromControlRigSpline::GetExecuteContextStruct
          (FRigUnit_TransformFromControlRigSpline *this)

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

// Execute @ 14debe1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TransformFromControlRigSpline::Execute(FRigUnit_TransformFromControlRigSpline *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Spline,&this->UpVector,this->Roll,
                this->U,&this->Transform);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_TransformFromControlRigSpline @ 14dec2760

FRigUnit_TransformFromControlRigSpline * __thiscall
FRigUnit_TransformFromControlRigSpline::FRigUnit_TransformFromControlRigSpline
          (FRigUnit_TransformFromControlRigSpline *this)

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
  
  this->_padding_ = (longlong)&___7FRigUnit_TransformFromControlRigSpline__6B_;
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
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->UpVector).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->UpVector).field0_0x0._s_0.Y = (double)uVar9;
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->Roll = 0.0;
  this->U = 0.0;
  (this->UpVector).field0_0x0._s_0.Z = (double)uVar9;
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
  return this;
}

// Execute @ 14dec4370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TransformFromControlRigSpline::Execute
          (FRigUnit_TransformFromControlRigSpline *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Spline,&this->UpVector,this->Roll,this->U,&this->Transform);
  return;
}

// RigVMExecute @ 14dec7be0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TransformFromControlRigSpline::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FControlRigSpline *pFVar6;
  TVector<double> *pTVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  TTransform<double> *pTVar10;
  FControlRigExecuteContext *pFVar11;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FControlRigSpline *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FControlRigSpline *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar3 < 2) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar9[1].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar3 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar9[2].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  fVar1 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar2 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar6,pTVar7,fVar1,fVar2,pTVar10);
  return;
}

// StaticExecute @ 14ded1d70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_TransformFromControlRigSpline::StaticExecute
          (FControlRigExecuteContext *param_1,FControlRigSpline *param_2,TVector<double> *param_3,
          float param_4,float param_5,TTransform<double> *param_6)

{
  FControlRigSplineImpl *pFVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TMatrix<double> *pTVar6;
  TVector<double> *pTVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  float fVar17;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  TVector<double>_u_0 local_1e0;
  double local_1c8;
  TVector<double> local_1c0;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128 [2];
  
  dVar11 = __real_3e45798ee0000000;
  dVar5 = __real_3ff0000000000000;
  pFVar1 = (param_2->SplineData).Object;
  if (pFVar1 != (FControlRigSplineImpl *)0x0) {
    if (pFVar1->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      }
    }
    else {
      dVar4 = (param_3->field0_0x0)._s_0.X;
      dVar3 = (param_3->field0_0x0)._s_0.Y;
      local_1e0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
      dVar8 = dVar3 * dVar3 + dVar4 * dVar4 + local_1e0._s_0.Z * local_1e0._s_0.Z;
      dVar10 = local_1e0._s_0.Z;
      if (__real_3e45798ee0000000 < dVar8) {
        dVar10 = __real_3ff0000000000000 / SQRT(dVar8);
        dVar4 = dVar4 * dVar10;
        dVar3 = dVar3 * dVar10;
        dVar10 = local_1e0._s_0.Z * dVar10;
      }
      fVar17 = param_5;
      if (__real_3f800000 <= param_5) {
        fVar17 = __real_3f800000;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      FControlRigSpline::TangentAtParam(param_2,(TVector<double> *)&local_1f8,fVar17);
      dVar8 = dStack_1f0 * dStack_1f0 + local_1f8 * local_1f8 +
              (double)local_1e8 * (double)local_1e8;
      if (dVar8 <= dVar11) {
        pTVar6 = UE::Math::TTransform<double>::ToMatrixNoScale(param_6,local_128);
        dVar8 = pTVar6->M[0][0];
        dVar9 = pTVar6->M[0][1];
        dVar12 = pTVar6->M[0][2];
        dVar14 = dVar9 * dVar9 + dVar8 * dVar8 + dVar12 * dVar12;
        uVar13 = dVar8;
        uVar15 = dVar9;
        uVar2 = dVar12;
        if ((dVar14 != dVar5) &&
           (uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar11 <= dVar14)) {
          dVar11 = dVar5 / SQRT(dVar14);
          uVar13 = dVar8 * dVar11;
          uVar15 = dVar9 * dVar11;
          uVar2 = dVar12 * dVar11;
        }
        unique0x10000123 = (int)uVar15;
        local_1f8 = (double)uVar13;
        unique0x10000127 = (int)((ulonglong)uVar15 >> 0x20);
        local_1e0._s_0.Z = (double)uVar2;
      }
      else {
        dVar11 = dVar5 / SQRT(dVar8);
        uVar13 = local_1f8 * dVar11;
        uVar15 = dStack_1f0 * dVar11;
        uVar2 = (double)local_1e8 * dVar11;
        dStack_1f0 = (double)uVar15;
        local_1f8 = (double)uVar13;
      }
      local_1c8 = (double)uVar2 * dVar4 - (double)uVar13 * dVar10;
      dVar11 = dVar10 * (double)uVar15 - dVar3 * (double)uVar2;
      dVar3 = dVar3 * (double)uVar13 - (double)uVar15 * dVar4;
      local_1e8 = uVar2;
      __libm_sse2_sincos_();
      dVar16 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      dVar12 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)uVar15;
      dVar14 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)uVar13;
      dVar5 = dVar5 - dVar16;
      dVar9 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)uVar2;
      dVar10 = (double)uVar2 * (double)uVar13 * dVar5;
      dVar8 = (double)uVar15 * (double)uVar13 * dVar5;
      dVar4 = (double)uVar15 * (double)uVar2 * dVar5;
      local_1e0._s_0.X =
           ((double)uVar13 * (double)uVar13 * dVar5 + dVar16) * dVar11 + (dVar8 - dVar9) * local_1c8
           + (dVar10 + dVar12) * dVar3;
      local_1e0._s_0.Y =
           ((double)uVar15 * (double)uVar15 * dVar5 + dVar16) * local_1c8 + (dVar8 + dVar9) * dVar11
           + (dVar4 - dVar14) * dVar3;
      local_1e0._s_0.Z =
           (dVar10 - dVar12) * dVar11 + (dVar4 + dVar14) * local_1c8 +
           ((double)uVar2 * (double)uVar2 * dVar5 + dVar16) * dVar3;
      UE::Math::TRotationMatrix<double>::MakeFromXZ
                (&local_1a8,(TVector<double> *)&local_1f8,(TVector<double> *)&local_1e0._s_0);
      UE::Math::TTransform<double>::SetFromMatrix(param_6,&local_1a8);
      pTVar7 = FControlRigSpline::PositionAtParam(param_2,&local_1c0,param_5);
      dVar11 = (pTVar7->field0_0x0)._s_0.Y;
      dVar5 = (pTVar7->field0_0x0)._s_0.Z;
      (param_6->Translation).XY.m128d_f64[0] = (pTVar7->field0_0x0)._s_0.X;
      (param_6->Translation).XY.m128d_f64[1] = dVar11;
      (param_6->Translation).ZW.m128d_f64[0] = dVar5;
      (param_6->Translation).ZW.m128d_f64[1] = 0.0;
    }
  }
  return;
}

