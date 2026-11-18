// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4745b0

UScriptStruct * __cdecl FRigUnit_SetControlRotator::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlRotator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlRotator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlRotator,(UObject *)pUVar1,
                         L"RigUnit_SetControlRotator");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlRotator.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlRotator.OuterSingleton;
}

// GetExecuteContextStruct @ 14a474630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlRotator::GetExecuteContextStruct(FRigUnit_SetControlRotator *this)

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

// Execute @ 14a475170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlRotator::Execute(FRigUnit_SetControlRotator *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Weight,&this->Rotator,
                this->Space,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52ca10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlRotator::Execute
          (FRigUnit_SetControlRotator *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Weight,&this->Rotator,this->Space,
                &this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a551700

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlRotator::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMTransformSpace EVar2;
  int iVar3;
  TRotator<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  ERigVMTransformSpace *pEVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
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
    pFVar7 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  if (iVar3 < 2) {
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
  if (iVar3 < 3) {
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
  pTVar4 = (TRotator<double> *)param_2->DataPtr[2].Ptr;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  EVar2 = *pEVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar7,fVar1,pTVar4,EVar2,pFVar12);
  return;
}

// StaticExecute @ 14a591350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlRotator::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,float param_3,TRotator<double> *param_4
          ,ERigVMTransformSpace param_5,FCachedRigElement *param_6)

{
  URigHierarchy *this;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TQuat<double> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  double dVar18;
  double dVar22;
  undefined1 auVar19 [16];
  double dVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 in_XMM2_Db;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  __m128d _Var29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStackY_1e8 [32];
  FRigElementKey local_1a8 [2];
  double local_188 [2];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  TQuat<double> local_148;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this = param_1->Hierarchy;
  auVar21._4_4_ = in_XMM2_Db;
  auVar21._0_4_ = param_3;
  auVar21._8_4_ = in_XMM2_Dc;
  auVar21._12_4_ = in_XMM2_Dd;
  if (this != (URigHierarchy *)0x0) {
    local_1a8[0].Name = *param_2;
    local_1a8[0].Type = Control;
    bVar4 = FCachedRigElement::UpdateCache(param_6,local_1a8,this);
    if (bVar4) {
      uVar6 = 0xffffffff;
      _Var29 = UE::Math::TTransform<double>::Identity.Rotation.XY;
      uVar31 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar32 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar33 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar34 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar35 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar36 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      uVar39 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar40 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar41 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar42 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar44 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar45 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar46 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar50 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar51 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar52 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      if (param_5 == GlobalSpace) {
        uVar5 = 0xffffffff;
        if (param_6->Index != 0xffff) {
          uVar5 = (uint)param_6->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_128,uVar5,false);
        _Var29.m128d_f64 = local_128.Rotation.XY.m128d_f64;
        uVar31 = local_128.Translation.XY.m128d_f64[0]._0_4_;
        uVar32 = local_128.Translation.XY.m128d_f64[0]._4_4_;
        uVar33 = local_128.Translation.XY.m128d_f64[1]._0_4_;
        uVar34 = local_128.Translation.XY.m128d_f64[1]._4_4_;
        uVar35 = local_128.Translation.ZW.m128d_f64[0]._0_4_;
        uVar36 = local_128.Translation.ZW.m128d_f64[0]._4_4_;
        uVar37 = local_128.Translation.ZW.m128d_f64[1]._0_4_;
        uVar38 = local_128.Translation.ZW.m128d_f64[1]._4_4_;
        uVar39 = local_128.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar40 = local_128.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar41 = local_128.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar42 = local_128.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar43 = local_128.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar44 = local_128.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar45 = local_128.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar46 = local_128.Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar50 = local_128.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar51 = local_128.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar52 = local_128.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar53 = local_128.Rotation.ZW.m128d_f64[1]._4_4_;
      }
      pTVar7 = UE::Math::TRotator<double>::Quaternion(param_4,(TQuat<double> *)local_188);
      auVar27._0_8_ = pTVar7->X;
      auVar27._8_8_ = pTVar7->Y;
      auVar49._0_8_ = pTVar7->Z;
      auVar49._8_8_ = pTVar7->W;
      local_168 = auVar27;
      local_158 = auVar49;
      if (__real_322bcc77 <
          (float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if (__real_3f800000 <= param_3) {
          auVar21._0_4_ = __real_3f800000;
        }
        if (auVar21._0_4_ <= 0.0) {
          auVar2._12_4_ = 0;
          auVar2._0_12_ = auVar21._4_12_;
          auVar21 = auVar2 << 0x20;
        }
        auVar24._0_8_ = (double)auVar21._0_4_;
        auVar24._8_8_ = 0;
        local_188 = _Var29.m128d_f64;
        local_178 = uVar50;
        uStack_174 = uVar51;
        uStack_170 = uVar52;
        uStack_16c = uVar53;
        pTVar7 = UE::Math::TQuat<double>::Slerp_NotNormalized
                           (&local_148,(TQuat<double> *)local_188,(TQuat<double> *)local_168,
                            auVar24._0_8_);
        dVar10 = pTVar7->X;
        dVar16 = pTVar7->Y;
        dVar18 = pTVar7->Z;
        dVar23 = pTVar7->W;
        dVar17 = dVar10 * dVar10 + dVar18 * dVar18;
        dVar22 = dVar16 * dVar16 + dVar23 * dVar23;
        auVar11._8_4_ = SUB84(dVar22,0);
        auVar11._0_8_ = dVar17;
        auVar11._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        auVar12._0_8_ = auVar11._8_8_ + dVar17;
        auVar12._8_8_ = dVar17 + dVar22;
        auVar21 = sqrtpd(auVar24,auVar12);
        uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= auVar12._0_8_);
        uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= auVar12._8_8_);
        auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
        uVar5 = (uint)(uVar9 >> 0x20);
        uVar26 = (uint)(uVar8 >> 0x20);
        auVar47._0_8_ = uVar9 & (ulonglong)(auVar27._0_8_ * dVar10);
        uVar3 = uVar8 & (ulonglong)(auVar27._8_8_ * dVar16);
        auVar47._8_4_ = (undefined4)uVar3;
        auVar47._12_4_ = (undefined4)(uVar3 >> 0x20);
        auVar19._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
        ;
        auVar19._4_4_ =
             ~uVar5 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                            );
        auVar19._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
        ;
        auVar19._12_4_ =
             ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar27 = auVar47 | auVar19;
        auVar48._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
        ;
        auVar48._4_4_ =
             ~uVar5 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                            );
        auVar48._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
        ;
        auVar48._12_4_ =
             ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
        auVar13._0_8_ = (ulonglong)(auVar21._0_8_ * dVar18) & uVar9;
        uVar8 = (ulonglong)(auVar21._8_8_ * dVar23) & uVar8;
        auVar13._8_4_ = (undefined4)uVar8;
        auVar13._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar49 = auVar48 | auVar13;
      }
      dVar18 = auVar27._0_8_;
      dVar10 = auVar49._0_8_;
      dVar16 = auVar49._8_8_;
      dVar23 = auVar27._8_8_;
      auVar20._0_8_ = dVar18 * dVar18 + dVar10 * dVar10;
      auVar20._8_8_ = dVar23 * dVar23 + dVar16 * dVar16;
      auVar14._8_4_ = SUB84(auVar20._8_8_,0);
      auVar14._0_8_ = auVar20._0_8_;
      auVar14._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
      auVar15._0_8_ = auVar14._8_8_ + auVar20._0_8_;
      auVar15._8_8_ = auVar20._0_8_ + auVar20._8_8_;
      auVar21 = sqrtpd(auVar20,auVar15);
      uVar8 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar15._0_8_);
      uVar9 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar15._8_8_);
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
      auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
      auVar28._0_8_ = uVar8 & (ulonglong)(auVar27._0_8_ * dVar18);
      uVar3 = uVar9 & (ulonglong)(auVar27._8_8_ * dVar23);
      auVar28._8_4_ = (undefined4)uVar3;
      auVar28._12_4_ = (undefined4)(uVar3 >> 0x20);
      auVar1._4_4_ = ~(uint)(uVar8 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar1._0_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar1._8_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar1._12_4_ =
           ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_128.Rotation.XY.m128d_f64 = (double  [2])(auVar28 | auVar1);
      uVar8 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar15._0_8_);
      uVar9 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar15._8_8_);
      auVar30._0_8_ = uVar8 & (ulonglong)(auVar21._0_8_ * dVar10);
      uVar3 = uVar9 & (ulonglong)(auVar21._8_8_ * dVar16);
      auVar30._8_4_ = (undefined4)uVar3;
      auVar30._12_4_ = (undefined4)(uVar3 >> 0x20);
      auVar25._0_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar25._4_4_ =
           ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar25._8_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar25._12_4_ =
           ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_128.Rotation.ZW.m128d_f64 = (double  [2])(auVar30 | auVar25);
      local_128.Translation.XY.m128d_f64[0]._0_4_ = uVar31;
      local_128.Translation.XY.m128d_f64[0]._4_4_ = uVar32;
      local_128.Translation.XY.m128d_f64[1]._0_4_ = uVar33;
      local_128.Translation.XY.m128d_f64[1]._4_4_ = uVar34;
      local_128.Translation.ZW.m128d_f64[0]._0_4_ = uVar35;
      local_128.Translation.ZW.m128d_f64[0]._4_4_ = uVar36;
      local_128.Translation.ZW.m128d_f64[1]._0_4_ = uVar37;
      local_128.Translation.ZW.m128d_f64[1]._4_4_ = uVar38;
      local_128.Scale3D.XY.m128d_f64[0]._0_4_ = uVar39;
      local_128.Scale3D.XY.m128d_f64[0]._4_4_ = uVar40;
      local_128.Scale3D.XY.m128d_f64[1]._0_4_ = uVar41;
      local_128.Scale3D.XY.m128d_f64[1]._4_4_ = uVar42;
      local_128.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar43;
      local_128.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar44;
      local_128.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar45;
      local_128.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar46;
      if (param_5 == LocalSpace) {
        if (param_6->Index != 0xffff) {
          uVar6 = (uint)param_6->Index;
        }
        URigHierarchy::SetLocalTransformByIndex(this,uVar6,&local_128,false,true,false,false);
      }
      else if (param_5 == GlobalSpace) {
        if (param_6->Index != 0xffff) {
          uVar6 = (uint)param_6->Index;
        }
        URigHierarchy::SetGlobalTransformByIndex(this,uVar6,&local_128,false,true,false,false);
      }
    }
  }
  return;
}

