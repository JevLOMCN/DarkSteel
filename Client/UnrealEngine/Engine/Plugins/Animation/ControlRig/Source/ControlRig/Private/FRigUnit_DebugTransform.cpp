// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4b3440

UScriptStruct * __cdecl FRigUnit_DebugTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugTransform,(UObject *)pUVar1,
                         L"RigUnit_DebugTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DebugTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4b34c0

UScriptStruct * __thiscall
FRigUnit_DebugTransform::GetExecuteContextStruct(FRigUnit_DebugTransform *this)

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

// Execute @ 14a4b38d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_DebugTransform::Execute(FRigUnit_DebugTransform *this)

{
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Transform,this->Mode,&this->Color,
                this->Thickness,this->Scale,&this->Space,&this->WorldOffset,this->bEnabled,
                (FRigVMDebugDrawSettings *)&this->field_0x8);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4b3a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DebugTransform::GetUpgradeInfo
          (FRigUnit_DebugTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_158 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_138;
  FRigVMFunction_DebugTransformMutableNoSpace local_128;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  FRigVMFunction_DebugTransformMutableNoSpace::FRigVMFunction_DebugTransformMutableNoSpace
            (&local_128);
  local_128.Mode = this->Mode;
  local_128.Transform.Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  local_128.Transform.Rotation.XY.m128d_f64[1] = (this->Transform).Rotation.XY.m128d_f64[1];
  local_128.Transform.Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
  local_128.Transform.Rotation.ZW.m128d_f64[1] = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_128.bEnabled = this->bEnabled;
  local_128.Transform.Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
  local_128.Transform.Translation.XY.m128d_f64[1] = (this->Transform).Translation.XY.m128d_f64[1];
  local_128.Transform.Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
  local_128.Transform.Translation.ZW.m128d_f64[1] = (this->Transform).Translation.ZW.m128d_f64[1];
  local_128.Transform.Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
  local_128.Transform.Scale3D.XY.m128d_f64[1] = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_128.Transform.Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
  local_128.Transform.Scale3D.ZW.m128d_f64[1] = (this->Transform).Scale3D.ZW.m128d_f64[1];
  local_128.Color.field0_0x0._0_8_ = *(undefined8 *)&(this->Color).field0_0x0;
  local_128.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  local_128.Thickness = this->Thickness;
  local_128.Scale = this->Scale;
  local_128.WorldOffset.Rotation.ZW.m128d_f64[0] = (this->WorldOffset).Rotation.ZW.m128d_f64[0];
  local_128.WorldOffset.Rotation.ZW.m128d_f64[1] = (this->WorldOffset).Rotation.ZW.m128d_f64[1];
  local_128.WorldOffset.Rotation.XY.m128d_f64[0] = (this->WorldOffset).Rotation.XY.m128d_f64[0];
  local_128.WorldOffset.Rotation.XY.m128d_f64[1] = (this->WorldOffset).Rotation.XY.m128d_f64[1];
  local_128.WorldOffset.Translation.ZW.m128d_f64[0] =
       (this->WorldOffset).Translation.ZW.m128d_f64[0];
  local_128.WorldOffset.Translation.ZW.m128d_f64[1] =
       (this->WorldOffset).Translation.ZW.m128d_f64[1];
  local_128.WorldOffset.Translation.XY.m128d_f64[0] =
       (this->WorldOffset).Translation.XY.m128d_f64[0];
  local_128.WorldOffset.Translation.XY.m128d_f64[1] =
       (this->WorldOffset).Translation.XY.m128d_f64[1];
  local_128.WorldOffset.Scale3D.ZW.m128d_f64[0] = (this->WorldOffset).Scale3D.ZW.m128d_f64[0];
  local_128.WorldOffset.Scale3D.ZW.m128d_f64[1] = (this->WorldOffset).Scale3D.ZW.m128d_f64[1];
  local_128.WorldOffset.Scale3D.XY.m128d_f64[0] = (this->WorldOffset).Scale3D.XY.m128d_f64[0];
  local_128.WorldOffset.Scale3D.XY.m128d_f64[1] = (this->WorldOffset).Scale3D.XY.m128d_f64[1];
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugTransform,(UObject *)pUVar1,
                         L"RigUnit_DebugTransform");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_138.ArrayNum = 1;
    local_138.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DebugTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransform.OuterSingleton,
               &local_138);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransform.OuterSingleton;
  pUVar2 = FRigVMFunction_DebugTransformMutableNoSpace::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  local_138.DataPtr = (FRigVMCompiledInFunction *)0x0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_128);
  return __return_storage_ptr__;
}

// FRigUnit_DebugTransform @ 14a50e980

FRigUnit_DebugTransform * __thiscall
FRigUnit_DebugTransform::FRigUnit_DebugTransform(FRigUnit_DebugTransform *this)

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
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FLinearColor FVar19;
  
  this->field_0x8 = 1;
  *(undefined4 *)&this->field_0xc = 0xbf800000;
  *(undefined ***)this = &___7FRigUnit_DebugTransform__6B_;
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
  (this->Space).ComparisonIndex = 0;
  (this->Space).Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.ZW.m128d_f64 = auVar14;
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
  this->Mode = Axes;
  dVar15 = (this->WorldOffset).Rotation.XY.m128d_f64[1];
  dVar16 = (this->WorldOffset).Rotation.ZW.m128d_f64[0];
  dVar17 = (this->WorldOffset).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (this->WorldOffset).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar15;
  dVar15 = (this->WorldOffset).Translation.XY.m128d_f64[0];
  dVar18 = (this->WorldOffset).Translation.XY.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = dVar16;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar17;
  dVar16 = (this->WorldOffset).Translation.ZW.m128d_f64[0];
  dVar17 = (this->WorldOffset).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = dVar15;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar18;
  dVar15 = (this->WorldOffset).Scale3D.XY.m128d_f64[0];
  dVar18 = (this->WorldOffset).Scale3D.XY.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = dVar16;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar17;
  dVar16 = (this->WorldOffset).Scale3D.ZW.m128d_f64[0];
  dVar17 = (this->WorldOffset).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = dVar15;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar18;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar16;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar17;
  FVar19 = FLinearColor::Red;
  this->Thickness = 0.0;
  this->Scale = 10.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar19.field0_0x0;
  this->bEnabled = true;
  return this;
}

// Execute @ 14a526ab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugTransform::Execute(FRigUnit_DebugTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Transform,this->Mode,&this->Color,this->Thickness,this->Scale,
                &this->Space,&this->WorldOffset,this->bEnabled,
                (FRigVMDebugDrawSettings *)&this->field_0x8);
  return;
}

// RigVMExecute @ 14a53c080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ERigUnitDebugTransformMode EVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  bool bVar7;
  ERigUnitDebugTransformMode *pEVar8;
  FLinearColor *pFVar9;
  FRigVMMemoryHandle *pFVar10;
  float *pfVar11;
  FName *pFVar12;
  TTransform<double> *pTVar13;
  uchar *puVar14;
  FRigVMDebugDrawSettings *pFVar15;
  FControlRigExecuteContext *pFVar16;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar5 = (TTransform<double> *)param_2->DataPtr->Ptr;
  if (iVar4 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar10[1].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  EVar3 = *pEVar8;
  if (iVar4 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar9 = (FLinearColor *)pFVar10[2].Ptr;
  }
  else {
    pFVar9 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar1 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar2 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar13 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar7 = (bool)*puVar14;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar15 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pTVar5,EVar3,pFVar9,fVar1,fVar2,pFVar12,pTVar13,bVar7,pFVar15);
  return;
}

// StaticExecute @ 14a56b250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugTransform::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          ERigUnitDebugTransformMode param_3,FLinearColor *param_4,float param_5,float param_6,
          FName *param_7,TTransform<double> *param_8,bool param_9,FRigVMDebugDrawSettings *param_10)

{
  __m128d *p_Var1;
  FName FVar2;
  URigHierarchy *this;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStackY_1e8 [32];
  undefined4 local_1a8;
  FNameEntryId FStack_1a4;
  uint uStack_1a0;
  undefined1 local_198 [32];
  undefined1 local_178 [40];
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  __m128d local_138;
  double local_128;
  double dStack_120;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((*(longlong *)&param_1->field_0x58 != 0) && (param_9)) {
    local_178._0_8_ = (param_2->Rotation).XY.m128d_f64[0];
    local_178._8_8_ = (param_2->Rotation).XY.m128d_f64[1];
    local_178._16_8_ = (param_2->Rotation).ZW.m128d_f64[0];
    local_178._24_8_ = (param_2->Rotation).ZW.m128d_f64[1];
    uVar6 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
    uVar7 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
    uVar8 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
    uVar9 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
    local_138.m128d_f64 = *&(param_2->Scale3D).XY.m128d_f64;
    p_Var1 = &(param_2->Scale3D).ZW;
    uVar10 = *(undefined4 *)p_Var1->m128d_f64;
    uVar11 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
    local_128 = p_Var1->m128d_f64[0];
    dStack_120 = (param_2->Scale3D).ZW.m128d_f64[1];
    FVar2 = *param_7;
    local_178._32_4_ = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
    local_178._36_4_ = *(uint *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
    uStack_150 = *(uint *)((param_2->Translation).XY.m128d_f64 + 1);
    uStack_14c = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
    local_148 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
    uStack_144 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
    uStack_140 = *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
    uStack_13c = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
    if ((FVar2 != (FName)0x0) && (this = param_1->Hierarchy, this != (URigHierarchy *)0x0)) {
      FStack_1a4 = FVar2.ComparisonIndex.Value;
      uStack_1a0 = FVar2.Number;
      local_1a8 = CONCAT31(local_1a8._1_3_,1);
      local_198._0_8_ = CONCAT44(FStack_1a4.Value,local_1a8);
      local_198._8_4_ = uStack_1a0;
      iVar5 = URigHierarchy::GetIndex(this,(FRigElementKey *)local_198,true);
      URigHierarchy::GetGlobalTransformByIndex(this,&local_b8,iVar5,false);
      local_118.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_118.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_118.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_118.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_118.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_118,param_2,&local_b8);
      uVar6 = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar7 = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar8 = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar9 = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
      local_178._0_8_ = local_118.Rotation.XY.m128d_f64[0];
      local_178._8_8_ = local_118.Rotation.XY.m128d_f64[1];
      local_178._16_8_ = local_118.Rotation.ZW.m128d_f64[0];
      local_178._24_8_ = local_118.Rotation.ZW.m128d_f64[1];
      uStack_140 = local_118.Translation.ZW.m128d_f64[1]._0_4_;
      uStack_13c = local_118.Translation.ZW.m128d_f64[1]._4_4_;
      local_138.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0];
      local_138.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1];
      local_128 = local_118.Scale3D.ZW.m128d_f64[0];
      dStack_120 = local_118.Scale3D.ZW.m128d_f64[1];
      uVar10 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar11 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_178._32_4_ = local_118.Translation.XY.m128d_f64[0]._0_4_;
      local_178._36_4_ = local_118.Translation.XY.m128d_f64[0]._4_4_;
      uStack_150 = local_118.Translation.XY.m128d_f64[1]._0_4_;
      uStack_14c = local_118.Translation.XY.m128d_f64[1]._4_4_;
      local_148 = local_118.Translation.ZW.m128d_f64[0]._0_4_;
      uStack_144 = local_118.Translation.ZW.m128d_f64[0]._4_4_;
    }
    if (param_3 == Point) {
      local_198._4_4_ = local_178._36_4_;
      local_198._0_4_ = local_178._32_4_;
      local_198._16_8_ = CONCAT44(uStack_144,local_148);
      local_198._8_4_ = uStack_150;
      local_198._12_4_ = uStack_14c;
      FRigVMDrawInterface::DrawPoint
                (*(FRigVMDrawInterface **)&param_1->field_0x58,param_8,(TVector<double> *)local_198,
                 param_6,param_4,(uint)(param_10->DepthPriority).Value,param_10->Lifetime);
    }
    else if (param_3 == Axes) {
      FRigVMDrawInterface::DrawAxes
                (*(FRigVMDrawInterface **)&param_1->field_0x58,param_8,
                 (TTransform<double> *)local_178,param_6,param_5,
                 (uint)(param_10->DepthPriority).Value,param_10->Lifetime);
    }
    else if (param_3 == Box) {
      dVar4 = (double)param_6;
      dVar3 = dVar4 * (double)CONCAT44(uVar9,uVar8);
      local_128 = dVar4 * (double)CONCAT44(uVar11,uVar10);
      local_138.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_138.m128d_f64[0] = dVar4 * (double)CONCAT44(uVar7,uVar6);
      local_138.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      dStack_120 = 0.0;
      FRigVMDrawInterface::DrawBox
                (*(FRigVMDrawInterface **)&param_1->field_0x58,param_8,
                 (TTransform<double> *)local_178,param_4,param_5,
                 (uint)(param_10->DepthPriority).Value,param_10->Lifetime);
    }
  }
  return;
}

