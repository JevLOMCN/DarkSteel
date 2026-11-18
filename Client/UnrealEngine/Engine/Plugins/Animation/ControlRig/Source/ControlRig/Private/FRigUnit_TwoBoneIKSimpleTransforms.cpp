// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4e4f40

UScriptStruct * __cdecl FRigUnit_TwoBoneIKSimpleTransforms::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms,
                         (UObject *)pUVar1,L"RigUnit_TwoBoneIKSimpleTransforms");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e4fe0

UScriptStruct * __thiscall
FRigUnit_TwoBoneIKSimpleTransforms::GetExecuteContextStruct
          (FRigUnit_TwoBoneIKSimpleTransforms *this)

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

// Execute @ 14a4e5260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TwoBoneIKSimpleTransforms::Execute(FRigUnit_TwoBoneIKSimpleTransforms *this)

{
  undefined1 auStackY_2c8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
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
  FControlRigMathLibrary::SolveBasicTwoBoneIK
            (&this->Root,&this->Elbow,&this->Effector,&this->PoleVector,&this->PrimaryAxis,
             &this->SecondaryAxis,this->SecondaryAxisWeight,this->BoneALength,this->BoneBLength,
             this->bEnableStretch,this->StretchStartRatio,this->StretchMaximumRatio);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_TwoBoneIKSimpleTransforms @ 14a517590

FRigUnit_TwoBoneIKSimpleTransforms * __thiscall
FRigUnit_TwoBoneIKSimpleTransforms::FRigUnit_TwoBoneIKSimpleTransforms
          (FRigUnit_TwoBoneIKSimpleTransforms *this)

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
  undefined8 uVar25;
  
  this->_padding_ = (longlong)&___7FRigUnit_TwoBoneIKSimpleTransforms__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Root).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Root).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Root).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Root).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Root).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Root).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Effector).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Elbow).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Elbow).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Elbow).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Elbow).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Elbow).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Elbow).Scale3D.ZW.m128d_f64 = auVar20;
  *&(this->Elbow).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Elbow).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Elbow).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Elbow).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Elbow).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Elbow).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  dVar21 = (this->Elbow).Rotation.XY.m128d_f64[1];
  dVar22 = (this->Elbow).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Elbow).Rotation.ZW.m128d_f64[1];
  (this->Effector).Rotation.XY.m128d_f64[0] = (this->Elbow).Rotation.XY.m128d_f64[0];
  (this->Effector).Rotation.XY.m128d_f64[1] = dVar21;
  dVar21 = (this->Elbow).Translation.XY.m128d_f64[0];
  dVar24 = (this->Elbow).Translation.XY.m128d_f64[1];
  (this->Effector).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->Effector).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Elbow).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Elbow).Translation.ZW.m128d_f64[1];
  (this->Effector).Translation.XY.m128d_f64[0] = dVar21;
  (this->Effector).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Elbow).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Elbow).Scale3D.XY.m128d_f64[1];
  (this->Effector).Translation.ZW.m128d_f64[0] = dVar22;
  (this->Effector).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Elbow).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Elbow).Scale3D.ZW.m128d_f64[1];
  (this->Effector).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->Effector).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Elbow).Rotation.XY.m128d_f64[0];
  dVar24 = (this->Elbow).Rotation.XY.m128d_f64[1];
  (this->Effector).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->Effector).Scale3D.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Elbow).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Elbow).Rotation.ZW.m128d_f64[1];
  (this->Root).Rotation.XY.m128d_f64[0] = dVar21;
  (this->Root).Rotation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Elbow).Translation.XY.m128d_f64[0];
  dVar24 = (this->Elbow).Translation.XY.m128d_f64[1];
  (this->Root).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->Root).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Elbow).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Elbow).Translation.ZW.m128d_f64[1];
  (this->Root).Translation.XY.m128d_f64[0] = dVar21;
  (this->Root).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Elbow).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Elbow).Scale3D.XY.m128d_f64[1];
  (this->Root).Translation.ZW.m128d_f64[0] = dVar22;
  (this->Root).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Elbow).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Elbow).Scale3D.ZW.m128d_f64[1];
  (this->Root).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->Root).Scale3D.XY.m128d_f64[1] = dVar24;
  (this->Root).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->Root).Scale3D.ZW.m128d_f64[1] = dVar23;
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PoleVector).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PoleVector).field0_0x0._s_0.Y = (double)uVar25;
  (this->PoleVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PrimaryAxis).field0_0x0._s_0.X = 1.0;
  (this->PrimaryAxis).field0_0x0._s_0.Y = 0.0;
  (this->PrimaryAxis).field0_0x0._s_0.Z = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.X = 0.0;
  (this->SecondaryAxis).field0_0x0._s_0.Y = 1.0;
  (this->SecondaryAxis).field0_0x0._s_0.Z = 0.0;
  this->bEnableStretch = false;
  this->SecondaryAxisWeight = 1.0;
  this->StretchStartRatio = 0.75;
  this->StretchMaximumRatio = 1.25;
  this->BoneBLength = 1.0;
  this->BoneALength = 1.0;
  return this;
}

// Execute @ 14a52f730

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TwoBoneIKSimpleTransforms::Execute
          (FRigUnit_TwoBoneIKSimpleTransforms *this,FControlRigExecuteContext *param_1)

{
  FControlRigMathLibrary::SolveBasicTwoBoneIK
            (&this->Root,&this->Elbow,&this->Effector,&this->PoleVector,&this->PrimaryAxis,
             &this->SecondaryAxis,this->SecondaryAxisWeight,this->BoneALength,this->BoneBLength,
             this->bEnableStretch,this->StretchStartRatio,this->StretchMaximumRatio);
  return;
}

// RigVMExecute @ 14a55b660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwoBoneIKSimpleTransforms::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TTransform<double> *pTVar7;
  TTransform<double> *pTVar8;
  code *pcVar9;
  bool bVar10;
  TVector<double> *pTVar11;
  FRigVMMemoryHandle *pFVar12;
  TVector<double> *pTVar13;
  TVector<double> *pTVar14;
  float *pfVar15;
  uchar *puVar16;
  TTransform<double> *pTVar17;
  FControlRigExecuteContext *pFVar18;
  
  iVar6 = param_2->ArrayNum;
  if (iVar6 < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar7 = (TTransform<double> *)param_2->DataPtr->Ptr;
  if (iVar6 < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar11 = (TVector<double> *)pFVar12[1].Ptr;
  }
  else {
    pTVar11 = (TVector<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar12[1].PropertyPath,pFVar12[1].Ptr,pFVar12[1].Property);
  }
  if (iVar6 < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar8 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar13 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar14 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar1 = *pfVar15;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar16 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar10 = (bool)*puVar16;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar2 = *pfVar15;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar3 = *pfVar15;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar4 = *pfVar15;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pfVar15 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar5 = *pfVar15;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pTVar17 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar18 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar18,pTVar7,pTVar11,pTVar8,pTVar13,pTVar14,fVar1,bVar10,fVar2,fVar3,fVar4,fVar5,
                pTVar17);
  return;
}

// StaticExecute @ 14a5a25e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwoBoneIKSimpleTransforms::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          TTransform<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          float param_7,bool param_8,float param_9,float param_10,float param_11,float param_12,
          TTransform<double> *param_13)

{
  FControlRigMathLibrary::SolveBasicTwoBoneIK
            (param_2,param_13,param_4,param_3,param_5,param_6,param_7,param_11,param_12,param_8,
             param_9,param_10);
  return;
}

