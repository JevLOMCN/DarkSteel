// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a48edc0

UScriptStruct * __cdecl FRigUnit_DebugArc::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugArc.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugArc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugArc,(UObject *)pUVar1,
                         L"RigUnit_DebugArc");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DebugArc_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugArc.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugArc.OuterSingleton;
}

// GetExecuteContextStruct @ 14a48ee40

UScriptStruct * __thiscall FRigUnit_DebugArc::GetExecuteContextStruct(FRigUnit_DebugArc *this)

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

// Execute @ 14a48f480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_DebugArc::Execute(FRigUnit_DebugArc *this)

{
  undefined1 auStackY_2d8 [32];
  FRigElementKey local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
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
  local_278.Name = this->Space;
  local_278.Type = Bone;
  FRigUnit_DebugArcItemSpace::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Transform,&this->Color,this->Radius,
             this->MinimumDegrees,this->MaximumDegrees,this->Thickness,this->Detail,&local_278,
             &this->WorldOffset,this->bEnabled,(FRigVMDebugDrawSettings *)&this->field_0x10);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a48f6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DebugArc::GetUpgradeInfo
          (FRigUnit_DebugArc *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_168 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_148;
  FRigVMFunction_DebugArcNoSpace local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  FRigVMFunction_DebugArcNoSpace::FRigVMFunction_DebugArcNoSpace(&local_138);
  local_138.Detail = this->Detail;
  local_138.Transform.Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  local_138.Transform.Rotation.XY.m128d_f64[1] = (this->Transform).Rotation.XY.m128d_f64[1];
  local_138.Transform.Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
  local_138.Transform.Rotation.ZW.m128d_f64[1] = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_138.bEnabled = this->bEnabled;
  local_138.Transform.Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
  local_138.Transform.Translation.XY.m128d_f64[1] = (this->Transform).Translation.XY.m128d_f64[1];
  local_138.Transform.Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
  local_138.Transform.Translation.ZW.m128d_f64[1] = (this->Transform).Translation.ZW.m128d_f64[1];
  local_138.Transform.Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
  local_138.Transform.Scale3D.XY.m128d_f64[1] = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_138.Transform.Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
  local_138.Transform.Scale3D.ZW.m128d_f64[1] = (this->Transform).Scale3D.ZW.m128d_f64[1];
  local_138.Color.field0_0x0._0_8_ = *(undefined8 *)&(this->Color).field0_0x0;
  local_138.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  local_138.Radius = this->Radius;
  local_138.MinimumDegrees = this->MinimumDegrees;
  local_138.MaximumDegrees = this->MaximumDegrees;
  local_138.Thickness = this->Thickness;
  local_138.WorldOffset.Rotation.XY.m128d_f64[0] = (this->WorldOffset).Rotation.XY.m128d_f64[0];
  local_138.WorldOffset.Rotation.XY.m128d_f64[1] = (this->WorldOffset).Rotation.XY.m128d_f64[1];
  local_138.WorldOffset.Rotation.ZW.m128d_f64[0] = (this->WorldOffset).Rotation.ZW.m128d_f64[0];
  local_138.WorldOffset.Rotation.ZW.m128d_f64[1] = (this->WorldOffset).Rotation.ZW.m128d_f64[1];
  local_138.WorldOffset.Translation.XY.m128d_f64[0] =
       (this->WorldOffset).Translation.XY.m128d_f64[0];
  local_138.WorldOffset.Translation.XY.m128d_f64[1] =
       (this->WorldOffset).Translation.XY.m128d_f64[1];
  local_138.WorldOffset.Translation.ZW.m128d_f64[0] =
       (this->WorldOffset).Translation.ZW.m128d_f64[0];
  local_138.WorldOffset.Translation.ZW.m128d_f64[1] =
       (this->WorldOffset).Translation.ZW.m128d_f64[1];
  local_138.WorldOffset.Scale3D.XY.m128d_f64[0] = (this->WorldOffset).Scale3D.XY.m128d_f64[0];
  local_138.WorldOffset.Scale3D.XY.m128d_f64[1] = (this->WorldOffset).Scale3D.XY.m128d_f64[1];
  local_138.WorldOffset.Scale3D.ZW.m128d_f64[0] = (this->WorldOffset).Scale3D.ZW.m128d_f64[0];
  local_138.WorldOffset.Scale3D.ZW.m128d_f64[1] = (this->WorldOffset).Scale3D.ZW.m128d_f64[1];
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugArc.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugArc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugArc,(UObject *)pUVar1,
                         L"RigUnit_DebugArc");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_148.ArrayNum = 1;
    local_148.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DebugArc_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_DebugArc.OuterSingleton,&local_148
              );
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DebugArc.OuterSingleton;
  pUVar2 = FRigVMFunction_DebugArcNoSpace::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  local_148.DataPtr = (FRigVMCompiledInFunction *)0x0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_138);
  return __return_storage_ptr__;
}

// FRigUnit_DebugArc @ 14a50d740

FRigUnit_DebugArc * __thiscall FRigUnit_DebugArc::FRigUnit_DebugArc(FRigUnit_DebugArc *this)

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
  
  this->field_0x10 = 1;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined4 *)&this->field_0x14 = 0xbf800000;
  *(undefined ***)this = &___7FRigUnit_DebugArc__6B_;
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
  this->Radius = 10.0;
  this->MinimumDegrees = 0.0;
  this->MaximumDegrees = 360.0;
  this->Thickness = 0.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar19.field0_0x0;
  this->Detail = 0x10;
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

// Execute @ 14a5263c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugArc::Execute(FRigUnit_DebugArc *this,FControlRigExecuteContext *param_1)

{
  FRigElementKey local_18 [2];
  
  local_18[0].Name = this->Space;
  local_18[0].Type = Bone;
  FRigUnit_DebugArcItemSpace::StaticExecute
            (param_1,&this->Transform,&this->Color,this->Radius,this->MinimumDegrees,
             this->MaximumDegrees,this->Thickness,this->Detail,local_18,&this->WorldOffset,
             this->bEnabled,(FRigVMDebugDrawSettings *)&this->field_0x10);
  return;
}

// RigVMExecute @ 14a53a200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugArc::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  TTransform<double> *pTVar8;
  FLinearColor *pFVar9;
  float *pfVar10;
  FRigVMMemoryHandle *pFVar11;
  int *piVar12;
  FName *pFVar13;
  TTransform<double> *pTVar14;
  uchar *puVar15;
  FRigVMDebugDrawSettings *pFVar16;
  FControlRigExecuteContext *pFVar17;
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TTransform<double> *)pFVar11->Ptr;
  }
  else {
    pTVar8 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
  }
  if (iVar5 < 2) {
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar9 = (FLinearColor *)pFVar11[1].Ptr;
  }
  else {
    pFVar9 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  if (iVar5 < 3) {
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar10 = (float *)pFVar11[2].Ptr;
  }
  else {
    pfVar10 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  fVar1 = *pfVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar3 = *pfVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar4 = *pfVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  piVar12 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  iVar5 = *piVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar13 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pTVar14 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  bVar7 = (bool)*puVar15;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar16 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar17 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar17,pTVar8,pFVar9,fVar1,fVar2,fVar3,fVar4,iVar5,pFVar13,pTVar14,bVar7,pFVar16);
  return;
}

// StaticExecute @ 14a56a1f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugArc::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,FLinearColor *param_3,
          float param_4,float param_5,float param_6,float param_7,int param_8,FName *param_9,
          TTransform<double> *param_10,bool param_11,FRigVMDebugDrawSettings *param_12)

{
  FRigElementKey local_18 [2];
  
  local_18[0].Type = Bone;
  local_18[0].Name = *param_9;
  FRigUnit_DebugArcItemSpace::StaticExecute
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_18,param_10,
             param_11,param_12);
  return;
}

