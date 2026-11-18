// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4b56f0

UScriptStruct * __cdecl FRigUnit_DebugTransformMutableItemSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace,
                         (UObject *)pUVar1,L"RigUnit_DebugTransformMutableItemSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4b5770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_DebugTransformMutableItemSpace::GetExecuteContextStruct
          (FRigUnit_DebugTransformMutableItemSpace *this)

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

// Execute @ 14a4b5960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugTransformMutableItemSpace::Execute(FRigUnit_DebugTransformMutableItemSpace *this)

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
                (FRigVMDebugDrawSettings *)&this->field_0x10);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4b5d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DebugTransformMutableItemSpace::GetUpgradeInfo
          (FRigUnit_DebugTransformMutableItemSpace *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace,
                         (UObject *)pUVar1,L"RigUnit_DebugTransformMutableItemSpace");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_138.ArrayNum = 1;
    local_138.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace.
                       OuterSingleton,&local_138);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace.OuterSingleton;
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

// FRigUnit_DebugTransformMutableItemSpace @ 14a50eef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_DebugTransformMutableItemSpace * __thiscall
FRigUnit_DebugTransformMutableItemSpace::FRigUnit_DebugTransformMutableItemSpace
          (FRigUnit_DebugTransformMutableItemSpace *this)

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
  ulonglong uVar19;
  FLinearColor FVar20;
  uint local_18;
  
  this->field_0x10 = 1;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined4 *)&this->field_0x14 = 0xbf800000;
  *(undefined ***)this = &___7FRigUnit_DebugTransformMutableItemSpace__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_18 = CONCAT31(local_18._1_3_,1);
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
  (this->Space).Type = None;
  (this->Space).Name.ComparisonIndex = 0;
  (this->Space).Name.Number = 0;
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
  FVar20 = FLinearColor::Red;
  this->Thickness = 0.0;
  this->Scale = 10.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar20.field0_0x0;
  this->bEnabled = true;
  uVar19 = (ulonglong)local_18;
  (this->Space).Type = (char)uVar19;
  *(int3 *)&(this->Space).field_0x1 = (int3)(uVar19 >> 8);
  (this->Space).Name.ComparisonIndex = (FNameEntryId)(int)(uVar19 >> 0x20);
  (this->Space).Name.Number = 0;
  return this;
}

// Execute @ 14a526d90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugTransformMutableItemSpace::Execute
          (FRigUnit_DebugTransformMutableItemSpace *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Transform,this->Mode,&this->Color,this->Thickness,this->Scale,
                &this->Space,&this->WorldOffset,this->bEnabled,
                (FRigVMDebugDrawSettings *)&this->field_0x10);
  return;
}

// RigVMExecute @ 14a53cb90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugTransformMutableItemSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ERigUnitDebugTransformMode EVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  TTransform<double> *pTVar7;
  ERigUnitDebugTransformMode *pEVar8;
  FLinearColor *pFVar9;
  FRigVMMemoryHandle *pFVar10;
  float *pfVar11;
  FRigElementKey *pFVar12;
  TTransform<double> *pTVar13;
  uchar *puVar14;
  FRigVMDebugDrawSettings *pFVar15;
  FControlRigExecuteContext *pFVar16;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TTransform<double> *)pFVar10->Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  if (iVar4 < 2) {
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
  pFVar12 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar13 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar6 = (bool)*puVar14;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar15 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pTVar7,EVar3,pFVar9,fVar1,fVar2,pFVar12,pTVar13,bVar6,pFVar15);
  return;
}

// StaticExecute @ 14a56bda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugTransformMutableItemSpace::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          ERigUnitDebugTransformMode param_3,FLinearColor *param_4,float param_5,float param_6,
          FRigElementKey *param_7,TTransform<double> *param_8,bool param_9,
          FRigVMDebugDrawSettings *param_10)

{
  URigHierarchy *this;
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  FNameEntryId FVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [32];
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((*(longlong *)&param_1->field_0x58 != 0) && (param_9)) {
    local_178.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    local_178.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
    local_178.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    local_178.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
    local_178.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    local_178.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
    local_178.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    local_178.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
    local_178.Scale3D.XY.m128d_f64 = *&(param_2->Scale3D).XY.m128d_f64;
    local_178.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    local_178.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
    bVar3 = ::FName::IsWithinBounds((FNameEntryId)(param_7->Name).ComparisonIndex.Value);
    if ((bVar3) &&
       (((param_7->Name != (FName)0x0 && (param_7->Type != None)) &&
        (this = param_1->Hierarchy, this != (URigHierarchy *)0x0)))) {
      local_198._0_8_ = *(undefined8 *)param_7;
      local_198._8_4_ = (param_7->Name).Number;
      iVar4 = URigHierarchy::GetIndex(this,(FRigElementKey *)local_198,true);
      URigHierarchy::GetGlobalTransformByIndex(this,&local_b8,iVar4,false);
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
      uVar10 = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar11 = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar12 = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar13 = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
      local_178.Rotation.XY.m128d_f64[0] = local_118.Rotation.XY.m128d_f64[0];
      local_178.Rotation.XY.m128d_f64[1] = local_118.Rotation.XY.m128d_f64[1];
      local_178.Rotation.ZW.m128d_f64[0] = local_118.Rotation.ZW.m128d_f64[0];
      local_178.Rotation.ZW.m128d_f64[1] = local_118.Rotation.ZW.m128d_f64[1];
      local_178.Translation.XY.m128d_f64[0] = local_118.Translation.XY.m128d_f64[0];
      local_178.Translation.XY.m128d_f64[1] = local_118.Translation.XY.m128d_f64[1];
      local_178.Translation.ZW.m128d_f64[0] = local_118.Translation.ZW.m128d_f64[0];
      local_178.Translation.ZW.m128d_f64[1] = local_118.Translation.ZW.m128d_f64[1];
      local_178.Scale3D.XY.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0];
      local_178.Scale3D.XY.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1];
      local_178.Scale3D.ZW.m128d_f64[0] = local_118.Scale3D.ZW.m128d_f64[0];
      local_178.Scale3D.ZW.m128d_f64[1] = local_118.Scale3D.ZW.m128d_f64[1];
      uVar5 = local_118.Translation.XY.m128d_f64[0]._0_4_;
      FVar6.Value = local_118.Translation.XY.m128d_f64[0]._4_4_;
      uVar7 = local_118.Translation.XY.m128d_f64[1]._0_4_;
      local_198._12_4_ = local_118.Translation.XY.m128d_f64[1]._4_4_;
      uVar8 = local_118.Translation.ZW.m128d_f64[0]._0_4_;
      uVar9 = local_118.Translation.ZW.m128d_f64[0]._4_4_;
      uVar14 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar15 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
    }
    else {
      uVar5 = local_178.Translation.XY.m128d_f64[0]._0_4_;
      FVar6.Value = local_178.Translation.XY.m128d_f64[0]._4_4_;
      uVar7 = local_178.Translation.XY.m128d_f64[1]._0_4_;
      local_198._12_4_ = local_178.Translation.XY.m128d_f64[1]._4_4_;
      uVar8 = local_178.Translation.ZW.m128d_f64[0]._0_4_;
      uVar9 = local_178.Translation.ZW.m128d_f64[0]._4_4_;
      uVar10 = local_178.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar11 = local_178.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar12 = local_178.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar13 = local_178.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar14 = local_178.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar15 = local_178.Scale3D.ZW.m128d_f64[0]._4_4_;
    }
    if (param_3 == Point) {
      local_198._4_4_ = FVar6.Value;
      local_198._0_4_ = uVar5;
      local_198._16_8_ = CONCAT44(uVar9,uVar8);
      local_198._8_4_ = uVar7;
      FRigVMDrawInterface::DrawPoint
                (*(FRigVMDrawInterface **)&param_1->field_0x58,param_8,(TVector<double> *)local_198,
                 param_6,param_4,(uint)(param_10->DepthPriority).Value,param_10->Lifetime);
    }
    else if (param_3 == Axes) {
      FRigVMDrawInterface::DrawAxes
                (*(FRigVMDrawInterface **)&param_1->field_0x58,param_8,&local_178,param_6,param_5,
                 (uint)(param_10->DepthPriority).Value,param_10->Lifetime);
    }
    else if (param_3 == Box) {
      dVar2 = (double)param_6;
      dVar1 = dVar2 * (double)CONCAT44(uVar13,uVar12);
      local_178.Scale3D.ZW.m128d_f64[0] = dVar2 * (double)CONCAT44(uVar15,uVar14);
      local_178.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
      local_178.Scale3D.XY.m128d_f64[0] = dVar2 * (double)CONCAT44(uVar11,uVar10);
      local_178.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
      local_178.Scale3D.ZW.m128d_f64[1] = 0.0;
      FRigVMDrawInterface::DrawBox
                (*(FRigVMDrawInterface **)&param_1->field_0x58,param_8,&local_178,param_4,param_5,
                 (uint)(param_10->DepthPriority).Value,param_10->Lifetime);
    }
  }
  return;
}

