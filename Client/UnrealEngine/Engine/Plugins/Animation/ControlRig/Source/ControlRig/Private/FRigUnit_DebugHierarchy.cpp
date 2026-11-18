// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a4a93f0

UScriptStruct * __cdecl FRigUnit_DebugHierarchy::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugHierarchy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugHierarchy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy,(UObject *)pUVar1,
                         L"RigUnit_DebugHierarchy");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugHierarchy.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugHierarchy.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a9490

UScriptStruct * __thiscall
FRigUnit_DebugHierarchy::GetExecuteContextStruct(FRigUnit_DebugHierarchy *this)

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

// Execute @ 14a4a96b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigUnit_DebugHierarchy::Execute(FRigUnit_DebugHierarchy *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2c8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [456];
  URigHierarchy *local_a0;
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
  local_278.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  if (local_a0 != (URigHierarchy *)0x0) {
    DrawHierarchy((FRigVMExecuteContext *)local_268,&this->WorldOffset,local_a0,Axes,this->Scale,
                  &this->Color,this->Thickness,(FRigPose *)0x0,&local_278,
                  (FRigVMDebugDrawSettings *)&this->field_0x8);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_DebugHierarchy @ 14a50def0

FRigUnit_DebugHierarchy * __thiscall
FRigUnit_DebugHierarchy::FRigUnit_DebugHierarchy(FRigUnit_DebugHierarchy *this)

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
  
  this->field_0x8 = 1;
  *(undefined4 *)&this->field_0xc = 0xbf800000;
  *(undefined ***)this = &___7FRigUnit_DebugHierarchy__6B_;
  this->ExecutePin = (FRigVMExecutePin)&___7FRigVMExecutePin__6B_;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.ZW.m128d_f64 = auVar8;
  this->Scale = 10.0;
  FVar9 = FLinearColor::White;
  this->Thickness = 0.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
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

// operator() @ 14a51bd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`FRigUnit_DebugHierarchy::DrawHierarchy'::__l21::<lambda_1>::operator()
          (void *this,FRigTransformElement *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  ForElementType<FRigBaseElement_*> FVar17;
  longlong lVar18;
  UScriptStruct *pUVar19;
  uint uVar20;
  uint uVar21;
  longlong *plVar22;
  FRigTransformElement *pFVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar48 [16];
  double dVar50;
  double dVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auStack_2e8 [32];
  double *local_2c8;
  double *local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  undefined1 local_268 [16];
  double local_258;
  undefined1 local_250 [16];
  double local_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> local_210;
  TTransform<double> local_1f8;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  TTransform<double> local_178;
  undefined8 local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  TArray<FRigBaseElement_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_e8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  local_220 = **(undefined8 **)this;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_218 = **(undefined8 **)((longlong)this + 8);
  if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
LAB_14a51bdda:
    local_1f8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_1f8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_1f8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_1f8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_1f8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1f8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    bVar14 = ``FRigUnit_DebugHierarchy::DrawHierarchy'::__l21::<lambda_1>::operator()'::__l2::
             <lambda_1>::operator()(&local_220,param_1,&local_1f8);
    if (bVar14) {
      pfVar2 = *(float **)((longlong)this + 0x18);
      uStack_188 = 0;
      auVar56._0_8_ = local_1f8.Scale3D.ZW.m128d_f64[0] * 0.0;
      auVar56._8_8_ = local_1f8.Scale3D.ZW.m128d_f64[1] * 0.0;
      local_298 = local_1f8.Translation.XY.m128d_f64[0];
      dStack_290 = local_1f8.Translation.XY.m128d_f64[1];
      dVar11 = local_1f8.Rotation.ZW.m128d_f64[0];
      dVar10 = local_1f8.Rotation.XY.m128d_f64[1];
      local_288 = local_1f8.Translation.ZW.m128d_f64[0];
      auVar60 = blendpd((undefined1  [16])local_1f8.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_1f8.Rotation.ZW.m128d_f64,2);
      dVar12 = local_1f8.Rotation.ZW.m128d_f64[1];
      dVar50 = local_1f8.Scale3D.XY.m128d_f64[0] * (double)*pfVar2;
      dVar55 = local_1f8.Scale3D.XY.m128d_f64[1] * 0.0;
      auStack_198._8_8_ = 0;
      auStack_198._0_8_ = (double)*pfVar2;
      auVar45._8_4_ = SUB84(dVar55,0);
      auVar45._0_8_ = dVar50;
      uVar43 = (undefined4)((ulonglong)dVar55 >> 0x20);
      auVar45._12_4_ = uVar43;
      auVar26._8_4_ = SUB84(dVar55,0);
      auVar26._0_8_ = dVar50;
      auVar26._12_4_ = uVar43;
      dVar9 = local_1f8.Rotation.XY.m128d_f64[0];
      auVar26 = blendpd(auVar26,auVar56,2);
      auVar46._0_8_ = auVar45._8_8_ * dVar9 - dVar10 * dVar50;
      auVar46._8_8_ = auVar56._0_8_ * dVar10 - dVar11 * dVar55;
      dVar8 = auVar60._0_8_;
      dVar5 = auVar60._8_8_;
      auVar60._0_8_ = auVar26._0_8_ * dVar11 - dVar8 * auVar56._0_8_;
      auVar60._8_8_ = auVar26._8_8_ * dVar12 - dVar5 * auVar56._8_8_;
      auVar26 = blendpd(auVar46,auVar60,2);
      dVar6 = auVar46._8_8_ + auVar46._8_8_;
      dVar7 = auVar60._0_8_ + auVar60._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar47._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar47._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar37._8_4_ = SUB84(dVar7,0);
      auVar37._0_8_ = dVar6;
      auVar37._12_4_ = uVar43;
      auVar27._8_4_ = SUB84(dVar7,0);
      auVar27._0_8_ = dVar6;
      auVar27._12_4_ = uVar43;
      auVar26 = blendpd(auVar27,auVar47,2);
      auVar38._0_8_ = auVar37._8_8_ * dVar9 - dVar6 * dVar10;
      auVar38._8_8_ = auVar47._0_8_ * dVar10 - dVar7 * dVar11;
      auVar28._0_8_ = auVar26._0_8_ * dVar11 - auVar47._0_8_ * dVar8;
      auVar28._8_8_ = auVar26._8_8_ * dVar12 - auVar47._8_8_ * dVar5;
      auVar26 = blendpd(auVar38,auVar28,2);
      dVar7 = dVar7 * dVar12 + dVar55 + auVar28._0_8_ + local_1f8.Translation.XY.m128d_f64[1];
      local_270 = auVar47._0_8_ * dVar12 + auVar56._0_8_ + auVar26._0_8_ +
                  local_1f8.Translation.ZW.m128d_f64[0];
      local_280._8_4_ = SUB84(dVar7,0);
      local_280._0_8_ =
           dVar6 * dVar12 + dVar50 + auVar38._8_8_ + local_1f8.Translation.XY.m128d_f64[0];
      local_280._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dStack_110 = (double)*pfVar2;
      local_108 = 0;
      auVar51._0_8_ = local_1f8.Scale3D.ZW.m128d_f64[0] * 0.0;
      auVar51._8_8_ = local_1f8.Scale3D.ZW.m128d_f64[1] * 0.0;
      local_118 = 0;
      dVar44 = local_1f8.Scale3D.XY.m128d_f64[0] * 0.0;
      dVar49 = local_1f8.Scale3D.XY.m128d_f64[1] * dStack_110;
      auVar57._8_4_ = SUB84(dVar49,0);
      auVar57._0_8_ = dVar44;
      uVar43 = (undefined4)((ulonglong)dVar49 >> 0x20);
      auVar57._12_4_ = uVar43;
      auVar29._8_4_ = SUB84(dVar49,0);
      auVar29._0_8_ = dVar44;
      auVar29._12_4_ = uVar43;
      auVar26 = blendpd(auVar29,auVar51,2);
      auVar58._0_8_ = auVar57._8_8_ * dVar9 - dVar44 * dVar10;
      auVar58._8_8_ = auVar51._0_8_ * dVar10 - dVar49 * dVar11;
      auVar30._0_8_ = auVar26._0_8_ * dVar11 - auVar51._0_8_ * dVar8;
      auVar30._8_8_ = auVar26._8_8_ * dVar12 - auVar51._8_8_ * dVar5;
      auVar26 = blendpd(auVar58,auVar30,2);
      dVar6 = auVar58._8_8_ + auVar58._8_8_;
      dVar7 = auVar30._0_8_ + auVar30._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar59._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar59._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar39._8_4_ = SUB84(dVar7,0);
      auVar39._0_8_ = dVar6;
      auVar39._12_4_ = uVar43;
      auVar31._8_4_ = SUB84(dVar7,0);
      auVar31._0_8_ = dVar6;
      auVar31._12_4_ = uVar43;
      auVar26 = blendpd(auVar31,auVar59,2);
      auVar40._0_8_ = auVar39._8_8_ * dVar9 - dVar6 * dVar10;
      auVar40._8_8_ = auVar59._0_8_ * dVar10 - dVar7 * dVar11;
      auVar32._0_8_ = auVar26._0_8_ * dVar11 - auVar59._0_8_ * dVar8;
      auVar32._8_8_ = auVar26._8_8_ * dVar12 - auVar59._8_8_ * dVar5;
      auVar26 = blendpd(auVar40,auVar32,2);
      dVar50 = local_1f8.Scale3D.XY.m128d_f64[0] * 0.0;
      dVar55 = local_1f8.Scale3D.XY.m128d_f64[1] * 0.0;
      uVar43 = (undefined4)((ulonglong)dVar55 >> 0x20);
      local_100 = 0;
      uStack_f8 = 0;
      dVar7 = dVar7 * dVar12 + dVar49 + auVar32._0_8_ + local_1f8.Translation.XY.m128d_f64[1];
      local_258 = auVar59._0_8_ * dVar12 + auVar51._0_8_ + auVar26._0_8_ +
                  local_1f8.Translation.ZW.m128d_f64[0];
      local_268._8_4_ = SUB84(dVar7,0);
      local_268._0_8_ =
           dVar6 * dVar12 + dVar44 + auVar40._8_8_ + local_1f8.Translation.XY.m128d_f64[0];
      local_268._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar52._8_4_ = SUB84(dVar55,0);
      auVar52._0_8_ = dVar50;
      auVar52._12_4_ = uVar43;
      local_f0 = (double)*pfVar2;
      auVar48._0_8_ = local_f0 * local_1f8.Scale3D.ZW.m128d_f64[0];
      auVar48._8_8_ = local_1f8.Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar33._8_4_ = SUB84(dVar55,0);
      auVar33._0_8_ = dVar50;
      auVar33._12_4_ = uVar43;
      auVar26 = blendpd(auVar33,auVar48,2);
      auVar53._0_8_ = auVar52._8_8_ * dVar9 - dVar50 * dVar10;
      auVar53._8_8_ = auVar48._0_8_ * dVar10 - dVar55 * dVar11;
      auVar34._0_8_ = auVar26._0_8_ * dVar11 - auVar48._0_8_ * dVar8;
      auVar34._8_8_ = auVar26._8_8_ * dVar12 - auVar48._8_8_ * dVar5;
      dVar6 = auVar53._8_8_ + auVar53._8_8_;
      dVar7 = auVar34._0_8_ + auVar34._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar26 = blendpd(auVar53,auVar34,2);
      auVar54._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar54._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar41._8_4_ = SUB84(dVar7,0);
      auVar41._0_8_ = dVar6;
      auVar41._12_4_ = uVar43;
      lVar24 = *(longlong *)((longlong)this + 0x20);
      auVar35._8_4_ = SUB84(dVar7,0);
      auVar35._0_8_ = dVar6;
      auVar35._12_4_ = uVar43;
      auVar26 = blendpd(auVar35,auVar54,2);
      auVar42._0_8_ = auVar41._8_8_ * dVar9 - dVar6 * dVar10;
      auVar42._8_8_ = auVar54._0_8_ * dVar10 - dVar7 * dVar11;
      auVar36._0_8_ = auVar26._0_8_ * dVar11 - auVar54._0_8_ * dVar8;
      auVar36._8_8_ = auVar26._8_8_ * dVar12 - auVar54._8_8_ * dVar5;
      auVar26 = blendpd(auVar42,auVar36,2);
      dVar8 = dVar7 * dVar12 + dVar55 + auVar36._0_8_ + local_1f8.Translation.XY.m128d_f64[1];
      local_240 = auVar54._0_8_ * dVar12 + auVar48._0_8_ + auVar26._0_8_ +
                  local_1f8.Translation.ZW.m128d_f64[0];
      local_250._8_4_ = SUB84(dVar8,0);
      local_250._0_8_ =
           dVar6 * dVar12 + dVar50 + auVar42._8_8_ + local_1f8.Translation.XY.m128d_f64[0];
      local_250._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      pdVar3 = *(double **)(lVar24 + 0x10);
      if ((pdVar3 <= &local_298) && (&local_298 < pdVar3 + (longlong)*(int *)(lVar24 + 0x1c) * 3)) {
        local_2b0 = (longlong)*(int *)(lVar24 + 0x18);
        local_2a8 = 0x18;
        local_2c8 = &local_298;
        local_2c0 = pdVar3;
        local_2b8 = (longlong)*(int *)(lVar24 + 0x1c);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
      }
      iVar16 = *(int *)(lVar24 + 0x18);
      if (iVar16 == *(int *)(lVar24 + 0x1c)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar24 + 0x10),(int *)(lVar24 + 0x1c));
      }
      *(int *)(lVar24 + 0x18) = iVar16 + 1;
      lVar24 = *(longlong *)(lVar24 + 0x10);
      pdVar3 = (double *)(lVar24 + (longlong)iVar16 * 0x18);
      *pdVar3 = local_298;
      pdVar3[1] = dStack_290;
      *(double *)(lVar24 + 0x10 + (longlong)iVar16 * 0x18) = local_288;
      lVar24 = *(longlong *)((longlong)this + 0x20);
      pdVar3 = *(double **)(lVar24 + 0x10);
      if ((pdVar3 <= local_280) && (local_280 < pdVar3 + (longlong)*(int *)(lVar24 + 0x1c) * 3)) {
        local_2b0 = (longlong)*(int *)(lVar24 + 0x18);
        local_2a8 = 0x18;
        local_2c8 = (double *)local_280;
        local_2c0 = pdVar3;
        local_2b8 = (longlong)*(int *)(lVar24 + 0x1c);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
      }
      iVar16 = *(int *)(lVar24 + 0x18);
      if (iVar16 == *(int *)(lVar24 + 0x1c)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar24 + 0x10),(int *)(lVar24 + 0x1c));
      }
      *(int *)(lVar24 + 0x18) = iVar16 + 1;
      lVar24 = *(longlong *)(lVar24 + 0x10);
      pdVar3 = (double *)(lVar24 + (longlong)iVar16 * 0x18);
      *pdVar3 = (double)local_280._0_8_;
      pdVar3[1] = (double)local_280._8_8_;
      *(double *)(lVar24 + 0x10 + (longlong)iVar16 * 0x18) = local_270;
      lVar24 = *(longlong *)((longlong)this + 0x28);
      pdVar3 = *(double **)(lVar24 + 0x10);
      if ((pdVar3 <= &local_298) && (&local_298 < pdVar3 + (longlong)*(int *)(lVar24 + 0x1c) * 3)) {
        local_2b0 = (longlong)*(int *)(lVar24 + 0x18);
        local_2a8 = 0x18;
        local_2c8 = &local_298;
        local_2c0 = pdVar3;
        local_2b8 = (longlong)*(int *)(lVar24 + 0x1c);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
      }
      iVar16 = *(int *)(lVar24 + 0x18);
      if (iVar16 == *(int *)(lVar24 + 0x1c)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar24 + 0x10),(int *)(lVar24 + 0x1c));
      }
      *(int *)(lVar24 + 0x18) = iVar16 + 1;
      lVar24 = *(longlong *)(lVar24 + 0x10);
      pdVar3 = (double *)(lVar24 + (longlong)iVar16 * 0x18);
      *pdVar3 = local_298;
      pdVar3[1] = dStack_290;
      *(double *)(lVar24 + 0x10 + (longlong)iVar16 * 0x18) = local_288;
      lVar24 = *(longlong *)((longlong)this + 0x28);
      pdVar3 = *(double **)(lVar24 + 0x10);
      if ((pdVar3 <= local_268) && (local_268 < pdVar3 + (longlong)*(int *)(lVar24 + 0x1c) * 3)) {
        local_2b0 = (longlong)*(int *)(lVar24 + 0x18);
        local_2a8 = 0x18;
        local_2c8 = (double *)local_268;
        local_2c0 = pdVar3;
        local_2b8 = (longlong)*(int *)(lVar24 + 0x1c);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
      }
      iVar16 = *(int *)(lVar24 + 0x18);
      if (iVar16 == *(int *)(lVar24 + 0x1c)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar24 + 0x10),(int *)(lVar24 + 0x1c));
      }
      *(int *)(lVar24 + 0x18) = iVar16 + 1;
      lVar24 = *(longlong *)(lVar24 + 0x10);
      pdVar3 = (double *)(lVar24 + (longlong)iVar16 * 0x18);
      *pdVar3 = (double)local_268._0_8_;
      pdVar3[1] = (double)local_268._8_8_;
      *(double *)(lVar24 + 0x10 + (longlong)iVar16 * 0x18) = local_258;
      lVar24 = *(longlong *)((longlong)this + 0x30);
      pdVar3 = *(double **)(lVar24 + 0x10);
      if ((pdVar3 <= &local_298) && (&local_298 < pdVar3 + (longlong)*(int *)(lVar24 + 0x1c) * 3)) {
        local_2b0 = (longlong)*(int *)(lVar24 + 0x18);
        local_2a8 = 0x18;
        local_2c8 = &local_298;
        local_2c0 = pdVar3;
        local_2b8 = (longlong)*(int *)(lVar24 + 0x1c);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
      }
      iVar16 = *(int *)(lVar24 + 0x18);
      if (iVar16 == *(int *)(lVar24 + 0x1c)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar24 + 0x10),(int *)(lVar24 + 0x1c));
      }
      *(int *)(lVar24 + 0x18) = iVar16 + 1;
      lVar24 = *(longlong *)(lVar24 + 0x10);
      pdVar3 = (double *)(lVar24 + (longlong)iVar16 * 0x18);
      *pdVar3 = local_298;
      pdVar3[1] = dStack_290;
      *(double *)(lVar24 + 0x10 + (longlong)iVar16 * 0x18) = local_288;
      lVar24 = *(longlong *)((longlong)this + 0x30);
      pdVar3 = *(double **)(lVar24 + 0x10);
      if ((pdVar3 <= local_250) && (local_250 < pdVar3 + (longlong)*(int *)(lVar24 + 0x1c) * 3)) {
        local_2b0 = (longlong)*(int *)(lVar24 + 0x18);
        local_2a8 = 0x18;
        local_2c8 = (double *)local_250;
        local_2c0 = pdVar3;
        local_2b8 = (longlong)*(int *)(lVar24 + 0x1c);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
      }
      iVar16 = *(int *)(lVar24 + 0x18);
      if (iVar16 == *(int *)(lVar24 + 0x1c)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar24 + 0x10),(int *)(lVar24 + 0x1c));
      }
      *(int *)(lVar24 + 0x18) = iVar16 + 1;
      lVar24 = *(longlong *)(lVar24 + 0x10);
      pdVar3 = (double *)(lVar24 + (longlong)iVar16 * 0x18);
      *pdVar3 = (double)local_250._0_8_;
      pdVar3[1] = (double)local_250._8_8_;
      *(double *)(lVar24 + 0x10 + (longlong)iVar16 * 0x18) = local_240;
      URigHierarchy::GetParents
                ((URigHierarchy *)**(undefined8 **)((longlong)this + 8),&local_e8,
                 (FRigBaseElement *)param_1,false);
      URigHierarchy::GetParentWeightArray
                ((URigHierarchy *)**(undefined8 **)((longlong)this + 8),&local_210,
                 (FRigBaseElement *)param_1,false);
      fVar13 = __real_322bcc77;
      uVar20 = 0;
      if (0 < local_e8.ArrayNum) {
        lVar25 = 0;
        lVar24 = 0;
        do {
          uVar21 = 0;
          if ((int)uVar20 < local_e8.ArrayNum) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if (uVar21 == 0) {
            local_2c8 = (double *)(longlong)(int)uVar20;
            local_2c0 = (double *)(longlong)local_e8.ArrayNum;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
          }
          FVar17 = (ForElementType<FRigBaseElement_*>)&local_e8;
          if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
            FVar17 = local_e8.AllocatorInstance.SecondaryData;
          }
          pFVar23 = *(FRigTransformElement **)(lVar24 + (longlong)FVar17);
          if (pFVar23 == (FRigTransformElement *)0x0) {
LAB_14a51c718:
            pFVar23 = (FRigTransformElement *)0x0;
          }
          else {
            lVar18 = (**(code **)(pFVar23->_padding_ + 0x10))(pFVar23);
            pUVar19 = FRigTransformElement::StaticStruct();
            if (pUVar19 == (UScriptStruct *)0x0) goto LAB_14a51c718;
            iVar16 = (int)pUVar19->_padding_;
            if ((*(int *)(lVar18 + 0x38) < iVar16) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar16 * 8) !=
                &pUVar19->_padding_)) {
              bVar14 = false;
            }
            else {
              bVar14 = true;
            }
            if (!bVar14) goto LAB_14a51c718;
          }
          if (pFVar23 != (FRigTransformElement *)0x0) {
            plVar1 = *(longlong **)((longlong)this + 0x10);
            if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
LAB_14a51c7ac:
              if ((-1 < (int)uVar20) && ((int)uVar20 < local_210.ArrayNum)) {
                uVar21 = 0;
                if ((int)uVar20 < local_210.ArrayNum) {
                  uVar21 = ~uVar20 >> 0x1f;
                }
                if (uVar21 == 0) {
                  local_2c8 = (double *)(longlong)(int)uVar20;
                  local_2c0 = (double *)(longlong)local_210.ArrayNum;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar4 = (code *)swi(3);
                    uVar15 = (*pcVar4)();
                    return (bool)uVar15;
                  }
                }
                if (((*(float *)(local_210.AllocatorInstance.Data + lVar25) <= fVar13) &&
                    (*(float *)(local_210.AllocatorInstance.Data + lVar25 + 4) <= fVar13)) &&
                   (*(float *)(local_210.AllocatorInstance.Data + lVar25 + 8) <= fVar13))
                goto LAB_14a51c9f1;
              }
              local_178.Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              local_178.Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              local_178.Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              local_178.Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              local_178.Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              local_178.Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              ``FRigUnit_DebugHierarchy::DrawHierarchy'::__l21::<lambda_1>::operator()'::__l2::
              <lambda_1>::operator()(&local_220,pFVar23,&local_178);
              lVar18 = *(longlong *)((longlong)this + 0x38);
              local_238 = local_178.Translation.XY.m128d_f64[0];
              dStack_230 = local_178.Translation.XY.m128d_f64[1];
              local_228 = local_178.Translation.ZW.m128d_f64[0];
              pdVar3 = *(double **)(lVar18 + 0x10);
              if ((pdVar3 <= &local_298) &&
                 (&local_298 < pdVar3 + (longlong)*(int *)(lVar18 + 0x1c) * 3)) {
                local_2b0 = (longlong)*(int *)(lVar18 + 0x18);
                local_2a8 = 0x18;
                local_2c8 = &local_298;
                local_2c0 = pdVar3;
                local_2b8 = (longlong)*(int *)(lVar18 + 0x1c);
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar14) {
                  pcVar4 = (code *)swi(3);
                  uVar15 = (*pcVar4)();
                  return (bool)uVar15;
                }
              }
              iVar16 = *(int *)(lVar18 + 0x18);
              if (iVar16 == *(int *)(lVar18 + 0x1c)) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,(ForAnyElementType *)(lVar18 + 0x10),
                                    (int *)(lVar18 + 0x1c));
              }
              *(int *)(lVar18 + 0x18) = iVar16 + 1;
              lVar18 = *(longlong *)(lVar18 + 0x10);
              pdVar3 = (double *)(lVar18 + (longlong)iVar16 * 0x18);
              *pdVar3 = local_298;
              pdVar3[1] = dStack_290;
              *(double *)(lVar18 + 0x10 + (longlong)iVar16 * 0x18) = local_288;
              lVar18 = *(longlong *)((longlong)this + 0x38);
              pdVar3 = *(double **)(lVar18 + 0x10);
              if ((pdVar3 <= &local_238) &&
                 (&local_238 < pdVar3 + (longlong)*(int *)(lVar18 + 0x1c) * 3)) {
                local_2b0 = (longlong)*(int *)(lVar18 + 0x18);
                local_2a8 = 0x18;
                local_2c8 = &local_238;
                local_2c0 = pdVar3;
                local_2b8 = (longlong)*(int *)(lVar18 + 0x1c);
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar14) {
                  pcVar4 = (code *)swi(3);
                  uVar15 = (*pcVar4)();
                  return (bool)uVar15;
                }
              }
              iVar16 = *(int *)(lVar18 + 0x18);
              if (iVar16 == *(int *)(lVar18 + 0x1c)) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,(ForAnyElementType *)(lVar18 + 0x10),
                                    (int *)(lVar18 + 0x1c));
              }
              *(int *)(lVar18 + 0x18) = iVar16 + 1;
              lVar18 = *(longlong *)(lVar18 + 0x10);
              pdVar3 = (double *)(lVar18 + (longlong)iVar16 * 0x18);
              *pdVar3 = local_238;
              pdVar3[1] = dStack_230;
              *(double *)(lVar18 + 0x10 + (longlong)iVar16 * 0x18) = local_228;
            }
            else {
              uVar21 = ((uint)((ulonglong)pFVar23 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pFVar23 >> 4)) * -0x7a143595;
              uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
              if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
                plVar22 = plVar1 + 7;
                if ((longlong *)plVar1[8] != (longlong *)0x0) {
                  plVar22 = (longlong *)plVar1[8];
                }
                iVar16 = *(int *)((longlong)plVar22 +
                                 (ulonglong)((int)plVar1[9] - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
                if (iVar16 != -1) {
                  do {
                    if (*(FRigTransformElement **)(*plVar1 + (longlong)iVar16 * 0x18) == pFVar23)
                    goto LAB_14a51c7ac;
                    iVar16 = *(int *)(*plVar1 + 0x10 + (longlong)iVar16 * 0x18);
                  } while (iVar16 != -1);
                }
              }
            }
          }
LAB_14a51c9f1:
          uVar20 = uVar20 + 1;
          lVar24 = lVar24 + 8;
          lVar25 = lVar25 + 0xc;
        } while ((int)uVar20 < local_e8.ArrayNum);
      }
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
        FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
      }
    }
  }
  else {
    uVar20 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar22 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar22 = plVar1 + 7;
      }
      iVar16 = *(int *)((longlong)plVar22 +
                       (ulonglong)((int)plVar1[9] - 1U & (uVar20 >> 0x10 ^ uVar20)) * 4);
      if (iVar16 != -1) {
        do {
          if (*(FRigTransformElement **)(*plVar1 + (longlong)iVar16 * 0x18) == param_1)
          goto LAB_14a51bdda;
          iVar16 = *(int *)(*plVar1 + 0x10 + (longlong)iVar16 * 0x18);
        } while (iVar16 != -1);
      }
    }
  }
  return true;
}

// DrawHierarchy @ 14a522330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
FRigUnit_DebugHierarchy::DrawHierarchy
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,URigHierarchy *param_3,
          Type param_4,float param_5,FLinearColor *param_6,float param_7,FRigPose *param_8,
          TArrayView<FRigElementKey_const_,int> *param_9,FRigVMDebugDrawSettings *param_10)

{
  FRigElementKey *pFVar1;
  FRigVMDrawInterface *this;
  FRigTransformElement *pFVar2;
  code *pcVar3;
  URigHierarchy *pUVar4;
  TArrayView<FRigElementKey_const_,int> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  UScriptStruct *pUVar10;
  uint uVar11;
  ulonglong uVar12;
  FRigElementKey *pFVar13;
  ulonglong uVar14;
  undefined1 auStackY_488 [32];
  undefined1 local_458 [8];
  URigHierarchy *local_450;
  TPairInitializer<FRigBaseElement_const_*_const_&,bool_&&> local_448;
  FRigTransformElement *local_438;
  bool **local_430;
  undefined1 *local_428;
  FRigPose **local_420;
  URigHierarchy **local_418;
  TSet<TTuple<FRigBaseElement_const_*,bool>,TDefaultMapHashableKeyFuncs<FRigBaseElement_const_*,bool,0>,FDefaultSetAllocator>
  *local_410;
  float *local_408;
  FRigVMDrawInstruction *local_400;
  FRigVMDrawInstruction *local_3f8;
  FRigVMDrawInstruction *local_3f0;
  FRigVMDrawInstruction *local_3e8;
  TSet<TTuple<FRigBaseElement_const_*,bool>,TDefaultMapHashableKeyFuncs<FRigBaseElement_const_*,bool,0>,FDefaultSetAllocator>
  local_3d8;
  FRigVMDrawInstruction local_388;
  FRigVMDrawInstruction local_2b8;
  FRigVMDrawInstruction local_1e8;
  FRigVMDrawInstruction local_118;
  ulonglong local_48;
  
  pTVar5 = param_9;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  this = param_1->DrawInterfacePtr;
  if ((this != (FRigVMDrawInterface *)0x0) &&
     (local_450 = param_3, bVar6 = FRigVMDrawInterface::IsEnabled(this), bVar6)) {
    uVar12 = 0;
    local_3d8.Elements._0_8_ = 0;
    local_3d8.Elements._8_8_ = 0;
    local_3d8.Elements._32_8_ = 0;
    local_3d8.Elements._40_4_ = 0;
    local_3d8.Elements._44_4_ = 0x80;
    local_3d8.Elements._48_4_ = 0xffffffff;
    local_3d8.Elements._52_4_ = 0;
    local_3d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_3d8.HashSize = 0;
    if (pTVar5 != (TArrayView<FRigElementKey_const_,int> *)0x0) {
      pFVar13 = pTVar5->DataPtr;
      pFVar1 = pFVar13 + pTVar5->ArrayNum;
      pUVar4 = local_450;
      for (; local_450 = pUVar4, pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
        iVar7 = URigHierarchy::GetIndex(pUVar4,pFVar13,true);
        local_448.Value = (bool *)URigHierarchy::Get(pUVar4,iVar7);
        if ((FRigBaseElement *)local_448.Value != (FRigBaseElement *)0x0) {
          local_430 = &local_448.Value;
          local_458[0] = 1;
          local_428 = local_458;
          TSet<TTuple<FRigBaseElement_const_*,bool>,TDefaultMapHashableKeyFuncs<FRigBaseElement_const_*,bool,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FRigBaseElement_const_*_const_&,bool_&&>_>
                    (&local_3d8,&local_448,(bool *)&local_430);
        }
        pUVar4 = local_450;
      }
    }
    if (param_4 == Axes) {
      local_118.Transform.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      local_118.Transform.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
      local_118.Color.field0_0x0._s_0 = FLinearColor::Red.field0_0x0;
      local_118.Transform.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      local_118.Transform.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
      local_388.DepthPriority.Value = (param_10->DepthPriority).Value;
      local_388.Lifetime = param_10->Lifetime;
      local_118.Transform.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_118.Transform.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_118.Transform.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      local_118.Transform.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
      local_118.Name.ComparisonIndex.Value = 0;
      local_118.Name.Number = 0;
      local_118.Transform.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_118.Transform.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      local_1e8.Color.field0_0x0._s_0 = FLinearColor::Green.field0_0x0;
      local_1e8.Transform.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      local_1e8.Transform.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
      local_118.Transform.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      local_118.Transform.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
      local_1e8.Transform.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_1e8.Transform.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_1e8.Transform.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      local_1e8.Transform.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
      local_1e8.Transform.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      local_1e8.Transform.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
      local_1e8.Transform.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_1e8.Transform.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      local_118.PrimitiveType.Value = '\x01';
      local_1e8.Transform.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      local_1e8.Transform.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
      local_2b8.Color.field0_0x0._s_0 = FLinearColor::Blue.field0_0x0;
      local_2b8.Transform.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      local_2b8.Transform.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
      local_2b8.Transform.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      local_2b8.Transform.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
      local_2b8.Transform.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_2b8.Transform.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_2b8.Transform.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_2b8.Transform.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      local_2b8.Transform.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      local_2b8.Transform.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
      local_2b8.Transform.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      local_2b8.Transform.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
      local_118.Thickness = param_7;
      local_1e8.Thickness = param_7;
      local_2b8.Thickness = param_7;
      local_118.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Positions.ArrayNum = 0;
      local_118.Positions.ArrayMax = 0;
      local_118.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.MeshVerts.ArrayNum = 0;
      local_118.MeshVerts.ArrayMax = 0;
      local_118.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.MeshIndices.ArrayNum = 0;
      local_118.MeshIndices.ArrayMax = 0;
      local_118.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
      local_1e8.Name.ComparisonIndex.Value = 0;
      local_1e8.Name.Number = 0;
      local_1e8.PrimitiveType.Value = '\x01';
      local_1e8.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Positions.ArrayNum = 0;
      local_1e8.Positions.ArrayMax = 0;
      local_1e8.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.MeshVerts.ArrayNum = 0;
      local_1e8.MeshVerts.ArrayMax = 0;
      local_1e8.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.MeshIndices.ArrayNum = 0;
      local_1e8.MeshIndices.ArrayMax = 0;
      local_1e8.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
      local_2b8.Name.ComparisonIndex.Value = 0;
      local_2b8.Name.Number = 0;
      local_2b8.PrimitiveType.Value = '\x01';
      local_2b8.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.Positions.ArrayNum = 0;
      local_2b8.Positions.ArrayMax = 0;
      local_2b8.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.Transform.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      local_388.Transform.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
      local_388.Transform.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_388.Transform.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      local_388.Color.field0_0x0._0_8_ = *(undefined8 *)&param_6->field0_0x0;
      local_388.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
      local_2b8.MeshVerts.ArrayNum = 0;
      local_2b8.MeshVerts.ArrayMax = 0;
      local_388.Transform.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      local_388.Transform.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
      local_388.Transform.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      local_388.Transform.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
      local_388.Transform.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_388.Transform.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_388.Transform.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      local_388.Transform.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
      local_388.Thickness = param_7;
      local_2b8.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.MeshIndices.ArrayNum = 0;
      local_2b8.MeshIndices.ArrayMax = 0;
      local_2b8.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
      local_388.Name.ComparisonIndex.Value = 0;
      local_388.Name.Number = 0;
      local_388.PrimitiveType.Value = '\x01';
      local_388.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.Positions.ArrayNum = 0;
      local_388.Positions.ArrayMax = 0;
      local_388.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.MeshVerts.ArrayNum = 0;
      local_388.MeshVerts.ArrayMax = 0;
      local_388.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.MeshIndices.ArrayNum = 0;
      local_388.MeshIndices.ArrayMax = 0;
      local_388.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
      uVar8 = (local_450->Elements).ArrayNum * 2;
      local_2b8.DepthPriority.Value = local_388.DepthPriority.Value;
      local_2b8.Lifetime = local_388.Lifetime;
      local_1e8.DepthPriority.Value = local_388.DepthPriority.Value;
      local_1e8.Lifetime = local_388.Lifetime;
      local_118.DepthPriority.Value = local_388.DepthPriority.Value;
      local_118.Lifetime = local_388.Lifetime;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (0 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar8,&local_118.Positions.AllocatorInstance,0,
                   &local_118.Positions.ArrayMax);
      }
      uVar8 = (local_450->Elements).ArrayNum * 2;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (local_1e8.Positions.ArrayMax < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar8,&local_1e8.Positions.AllocatorInstance,local_1e8.Positions.ArrayNum,
                   &local_1e8.Positions.ArrayMax);
      }
      uVar8 = (local_450->Elements).ArrayNum * 2;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (local_2b8.Positions.ArrayMax < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar8,&local_2b8.Positions.AllocatorInstance,local_2b8.Positions.ArrayNum,
                   &local_2b8.Positions.ArrayMax);
      }
      uVar8 = (local_450->Elements).ArrayNum * 6;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (local_388.Positions.ArrayMax < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar8,&local_388.Positions.AllocatorInstance,local_388.Positions.ArrayNum,
                   &local_388.Positions.ArrayMax);
      }
      pUVar4 = local_450;
      local_420 = &param_8;
      local_418 = &local_450;
      local_410 = &local_3d8;
      local_408 = &param_5;
      local_400 = &local_118;
      local_3f8 = &local_1e8;
      local_3f0 = &local_2b8;
      uVar14 = uVar12;
      local_3e8 = &local_388;
      if (0 < (local_450->Elements).ArrayNum) {
        do {
          uVar11 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar11 < (pUVar4->Elements).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRigTransformElement **)((pUVar4->Elements).AllocatorInstance.Data + uVar14);
          if (pFVar2 != (FRigTransformElement *)0x0) {
            lVar9 = (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
            pUVar10 = FRigTransformElement::StaticStruct();
            if (pUVar10 != (UScriptStruct *)0x0) {
              iVar7 = (int)pUVar10->_padding_;
              if ((*(int *)(lVar9 + 0x38) < iVar7) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) !=
                  &pUVar10->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if ((bVar6) &&
                 (local_438 = pFVar2,
                 bVar6 = UE::Core::Private::Function::
                         TFunctionRefCaller<`FRigUnit_DebugHierarchy::DrawHierarchy'::__l21::<lambda_1>,bool,FRigTransformElement_*>
                         ::Call(&local_420,&local_438), !bVar6)) break;
            }
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar14 = uVar14 + 8;
        } while ((int)(uVar11 + 1) < (pUVar4->Elements).ArrayNum);
      }
      FRigVMDrawInterface::DrawInstruction(this,&local_118);
      FRigVMDrawInterface::DrawInstruction(this,&local_1e8);
      FRigVMDrawInterface::DrawInstruction(this,&local_2b8);
      FRigVMDrawInterface::DrawInstruction(this,&local_388);
      if (local_388.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.MeshIndices.AllocatorInstance.Data);
      }
      if (local_388.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.MeshVerts.AllocatorInstance.Data);
      }
      if (local_388.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Positions.AllocatorInstance.Data);
      }
      if (local_2b8.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.MeshIndices.AllocatorInstance.Data);
      }
      if (local_2b8.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.MeshVerts.AllocatorInstance.Data);
      }
      if (local_2b8.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Positions.AllocatorInstance.Data);
      }
      if (local_1e8.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.MeshIndices.AllocatorInstance.Data);
      }
      if (local_1e8.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.MeshVerts.AllocatorInstance.Data);
      }
      if (local_1e8.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Positions.AllocatorInstance.Data);
      }
      if (local_118.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.MeshIndices.AllocatorInstance.Data);
      }
      if (local_118.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.MeshVerts.AllocatorInstance.Data);
      }
      if (local_118.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Positions.AllocatorInstance.Data);
      }
    }
    local_3d8.HashSize = 0;
    if (local_3d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigBaseElement_const_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigBaseElement_const_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_3d8.Elements);
  }
  return;
}

// Execute @ 14a526600

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
FRigUnit_DebugHierarchy::Execute(FRigUnit_DebugHierarchy *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    local_18.ArrayNum = iVar1;
    DrawHierarchy((FRigVMExecuteContext *)param_1,&this->WorldOffset,param_1->Hierarchy,Axes,
                  this->Scale,&this->Color,this->Thickness,(FRigPose *)0x0,&local_18,
                  (FRigVMDebugDrawSettings *)&this->field_0x8);
  }
  return;
}

// RigVMExecute @ 14a53ad20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
FRigUnit_DebugHierarchy::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  float *pfVar7;
  FLinearColor *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  TTransform<double> *pTVar10;
  FRigVMDebugDrawSettings *pFVar11;
  FControlRigExecuteContext *pFVar12;
  TArrayView<FRigElementKey_const_,int> local_48 [3];
  
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
    puVar6 = pFVar9->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
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
    pfVar7 = (float *)pFVar9[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  fVar1 = *pfVar7;
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
    pFVar8 = (FLinearColor *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar7 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar2 = *pfVar7;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  local_48[0].DataPtr = *(FRigElementKey **)puVar6;
  local_48[0].ArrayNum = *(int *)(puVar6 + 8);
  if (local_48[0].ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  if (pFVar12->Hierarchy != (URigHierarchy *)0x0) {
    DrawHierarchy((FRigVMExecuteContext *)pFVar12,pTVar10,pFVar12->Hierarchy,Axes,fVar1,pFVar8,fVar2
                  ,(FRigPose *)0x0,local_48,pFVar11);
  }
  return;
}

// StaticExecute @ 14a56a620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
FRigUnit_DebugHierarchy::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          float param_3,FLinearColor *param_4,float param_5,TTransform<double> *param_6,bool param_7
          ,FRigVMDebugDrawSettings *param_8)

{
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    DrawHierarchy((FRigVMExecuteContext *)param_1,param_6,param_1->Hierarchy,Axes,param_3,param_4,
                  param_5,(FRigPose *)0x0,param_2,param_8);
  }
  return;
}

