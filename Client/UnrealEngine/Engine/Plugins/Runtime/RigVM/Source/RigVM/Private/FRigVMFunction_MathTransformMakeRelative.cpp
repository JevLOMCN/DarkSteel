// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a153710

UScriptStruct * __cdecl FRigVMFunction_MathTransformMakeRelative::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMakeRelative.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMakeRelative.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformMakeRelative");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMakeRelative.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMakeRelative.OuterSingleton;
}

// GetExecuteContextStruct @ 14a153790

UScriptStruct * __thiscall
FRigVMFunction_MathTransformMakeRelative::GetExecuteContextStruct
          (FRigVMFunction_MathTransformMakeRelative *this)

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

// Execute @ 14a153aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMFunction_MathTransformMakeRelative::Execute(FRigVMFunction_MathTransformMakeRelative *this)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TTransform<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
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
  pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform(&this->Global,&local_88,&this->Parent)
  ;
  dVar1 = (pTVar8->Rotation).XY.m128d_f64[1];
  (this->Local).Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
  (this->Local).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Rotation).ZW.m128d_f64[1];
  (this->Local).Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
  (this->Local).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Translation).XY.m128d_f64[1];
  (this->Local).Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
  (this->Local).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Translation).ZW.m128d_f64[1];
  (this->Local).Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
  (this->Local).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Scale3D).XY.m128d_f64[1];
  (this->Local).Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
  (this->Local).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Scale3D).ZW.m128d_f64[1];
  (this->Local).Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
  (this->Local).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar4 = (this->Local).Rotation.XY.m128d_f64[0];
  dVar5 = (this->Local).Rotation.XY.m128d_f64[1];
  dVar6 = (this->Local).Rotation.ZW.m128d_f64[0];
  dVar7 = (this->Local).Rotation.ZW.m128d_f64[1];
  dVar1 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar2 = dVar7 * dVar7 + dVar5 * dVar5;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar14._0_8_ = auVar13._8_8_ + dVar1;
  auVar14._8_8_ = dVar1 + dVar2;
  auVar17 = sqrtpd(in_XMM2,auVar14);
  uVar9 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar14._0_8_);
  uVar11 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar14._8_8_);
  uVar10 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar14._0_8_);
  uVar12 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar14._8_8_);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  auVar16._0_8_ = uVar10 & (ulonglong)(auVar15._0_8_ * dVar4);
  uVar3 = uVar12 & (ulonglong)(auVar15._8_8_ * dVar5);
  auVar16._8_4_ = (undefined4)uVar3;
  auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar18._0_8_ = uVar9 & (ulonglong)(auVar17._0_8_ * dVar6);
  uVar3 = uVar11 & (ulonglong)(auVar17._8_8_ * dVar7);
  auVar18._8_4_ = (undefined4)uVar3;
  auVar18._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar17._4_4_ = ~(uint)(uVar10 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar17._0_4_ = ~(uint)uVar10 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar17._8_4_ = ~(uint)uVar12 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar17._12_4_ = ~(uint)(uVar12 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  auVar15._4_4_ = ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar15._0_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar15._8_4_ = ~(uint)uVar11 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar15._12_4_ = ~(uint)(uVar11 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  *(undefined1 (*) [16])(this->Local).Rotation.XY.m128d_f64 = auVar16 | auVar17;
  *(undefined1 (*) [16])(this->Local).Rotation.ZW.m128d_f64 = auVar18 | auVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathTransformMakeRelative @ 14a18f920

FRigVMFunction_MathTransformMakeRelative * __thiscall
FRigVMFunction_MathTransformMakeRelative::FRigVMFunction_MathTransformMakeRelative
          (FRigVMFunction_MathTransformMakeRelative *this)

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
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformMakeRelative__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Global).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Global).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Global).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Global).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Global).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Global).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Parent).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Parent).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Parent).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Parent).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Parent).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Parent).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Local).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Local).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Local).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Local).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Local).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Local).Scale3D.ZW.m128d_f64 = auVar20;
  *&(this->Local).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Local).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Local).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Local).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Local).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Local).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  dVar21 = (this->Local).Rotation.XY.m128d_f64[1];
  dVar22 = (this->Local).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Local).Rotation.ZW.m128d_f64[1];
  (this->Parent).Rotation.XY.m128d_f64[0] = (this->Local).Rotation.XY.m128d_f64[0];
  (this->Parent).Rotation.XY.m128d_f64[1] = dVar21;
  dVar21 = (this->Local).Translation.XY.m128d_f64[0];
  dVar24 = (this->Local).Translation.XY.m128d_f64[1];
  (this->Parent).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->Parent).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Local).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Local).Translation.ZW.m128d_f64[1];
  (this->Parent).Translation.XY.m128d_f64[0] = dVar21;
  (this->Parent).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Local).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Local).Scale3D.XY.m128d_f64[1];
  (this->Parent).Translation.ZW.m128d_f64[0] = dVar22;
  (this->Parent).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Local).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Local).Scale3D.ZW.m128d_f64[1];
  (this->Parent).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->Parent).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Local).Rotation.XY.m128d_f64[0];
  dVar24 = (this->Local).Rotation.XY.m128d_f64[1];
  (this->Parent).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->Parent).Scale3D.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Local).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Local).Rotation.ZW.m128d_f64[1];
  (this->Global).Rotation.XY.m128d_f64[0] = dVar21;
  (this->Global).Rotation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Local).Translation.XY.m128d_f64[0];
  dVar24 = (this->Local).Translation.XY.m128d_f64[1];
  (this->Global).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->Global).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Local).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Local).Translation.ZW.m128d_f64[1];
  (this->Global).Translation.XY.m128d_f64[0] = dVar21;
  (this->Global).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Local).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Local).Scale3D.XY.m128d_f64[1];
  (this->Global).Translation.ZW.m128d_f64[0] = dVar22;
  (this->Global).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Local).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Local).Scale3D.ZW.m128d_f64[1];
  (this->Global).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->Global).Scale3D.XY.m128d_f64[1] = dVar24;
  (this->Global).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->Global).Scale3D.ZW.m128d_f64[1] = dVar23;
  return this;
}

// Execute @ 14a1a2490

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
FRigVMFunction_MathTransformMakeRelative::Execute
          (FRigVMFunction_MathTransformMakeRelative *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Global,&this->Parent,&this->Local);
  return;
}

// RigVMExecute @ 14a1cc4e0

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
FRigVMFunction_MathTransformMakeRelative::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  TTransform<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TTransform<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TTransform<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
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
  pTVar3 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a1e3be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FRigVMFunction_MathTransformMakeRelative::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TTransform<double> *param_4)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TTransform<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_88,param_3);
  dVar1 = (pTVar8->Rotation).XY.m128d_f64[1];
  (param_4->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
  (param_4->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Rotation).ZW.m128d_f64[1];
  (param_4->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
  (param_4->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Translation).XY.m128d_f64[1];
  (param_4->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
  (param_4->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Translation).ZW.m128d_f64[1];
  (param_4->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
  (param_4->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Scale3D).XY.m128d_f64[1];
  (param_4->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
  (param_4->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar8->Scale3D).ZW.m128d_f64[1];
  (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
  (param_4->Scale3D).ZW.m128d_f64[1] = dVar1;
  dVar4 = (param_4->Rotation).XY.m128d_f64[0];
  dVar5 = (param_4->Rotation).XY.m128d_f64[1];
  dVar6 = (param_4->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_4->Rotation).ZW.m128d_f64[1];
  dVar1 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar2 = dVar7 * dVar7 + dVar5 * dVar5;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar14._0_8_ = auVar13._8_8_ + dVar1;
  auVar14._8_8_ = dVar1 + dVar2;
  auVar17 = sqrtpd(in_XMM2,auVar14);
  uVar9 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar14._0_8_);
  uVar11 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar14._8_8_);
  uVar10 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar14._0_8_);
  uVar12 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar14._8_8_);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  auVar16._0_8_ = uVar10 & (ulonglong)(auVar15._0_8_ * dVar4);
  uVar3 = uVar12 & (ulonglong)(auVar15._8_8_ * dVar5);
  auVar16._8_4_ = (undefined4)uVar3;
  auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar18._0_8_ = uVar9 & (ulonglong)(auVar17._0_8_ * dVar6);
  uVar3 = uVar11 & (ulonglong)(auVar17._8_8_ * dVar7);
  auVar18._8_4_ = (undefined4)uVar3;
  auVar18._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar17._4_4_ = ~(uint)(uVar10 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar17._0_4_ = ~(uint)uVar10 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar17._8_4_ = ~(uint)uVar12 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar17._12_4_ = ~(uint)(uVar12 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  auVar15._4_4_ = ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar15._0_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar15._8_4_ = ~(uint)uVar11 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar15._12_4_ = ~(uint)(uVar11 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64 = auVar16 | auVar17;
  *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64 = auVar18 | auVar15;
  return;
}

