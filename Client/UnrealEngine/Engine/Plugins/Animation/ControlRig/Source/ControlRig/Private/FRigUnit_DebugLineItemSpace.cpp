// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4f7b70

UScriptStruct * __cdecl FRigUnit_DebugLineItemSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugLineItemSpace,(UObject *)pUVar1,
                         L"RigUnit_DebugLineItemSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DebugLineItemSpace_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineItemSpace.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineItemSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f7bf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_DebugLineItemSpace::GetExecuteContextStruct(FRigUnit_DebugLineItemSpace *this)

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

// Execute @ 14a4f8420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_DebugLineItemSpace::Execute(FRigUnit_DebugLineItemSpace *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->A,&this->B,&this->Color,
                this->Thickness,&this->Space,&this->WorldOffset,this->bEnabled,
                (FRigVMDebugDrawSettings *)&this->field_0x10);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4f8570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DebugLineItemSpace::GetUpgradeInfo
          (FRigUnit_DebugLineItemSpace *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_118 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_f8;
  FRigVMStruct local_e8;
  undefined **local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_d0 = (this->A).field0_0x0._s_0.X;
  dStack_c8 = (this->A).field0_0x0._s_0.Y;
  local_c0 = (this->A).field0_0x0._s_0.Z;
  local_e0 = &___7FRigVMExecutePin__6B_;
  local_b8 = (this->B).field0_0x0._s_0.X;
  dStack_b0 = (this->B).field0_0x0._s_0.Y;
  local_e8 = (FRigVMStruct)&___7FRigVMFunction_DebugLineNoSpace__6B_;
  local_28 = this->bEnabled;
  local_a8 = (this->B).field0_0x0._s_0.Z;
  local_a0 = *(undefined8 *)&(this->Color).field0_0x0;
  uStack_98 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  local_d8 = 1;
  local_90 = this->Thickness;
  local_d4 = 0xbf800000;
  local_88 = (this->WorldOffset).Rotation.XY.m128d_f64[0];
  dStack_80 = (this->WorldOffset).Rotation.XY.m128d_f64[1];
  local_78 = (this->WorldOffset).Rotation.ZW.m128d_f64[0];
  dStack_70 = (this->WorldOffset).Rotation.ZW.m128d_f64[1];
  local_68 = (this->WorldOffset).Translation.XY.m128d_f64[0];
  dStack_60 = (this->WorldOffset).Translation.XY.m128d_f64[1];
  local_58 = (this->WorldOffset).Translation.ZW.m128d_f64[0];
  dStack_50 = (this->WorldOffset).Translation.ZW.m128d_f64[1];
  local_48 = (this->WorldOffset).Scale3D.XY.m128d_f64[0];
  dStack_40 = (this->WorldOffset).Scale3D.XY.m128d_f64[1];
  local_38 = (this->WorldOffset).Scale3D.ZW.m128d_f64[0];
  dStack_30 = (this->WorldOffset).Scale3D.ZW.m128d_f64[1];
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugLineItemSpace,(UObject *)pUVar1,
                         L"RigUnit_DebugLineItemSpace");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_f8.ArrayNum = 1;
    local_f8.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DebugLineItemSpace_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineItemSpace.OuterSingleton,
               &local_f8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineItemSpace.OuterSingleton;
  pUVar2 = FRigVMFunction_DebugLineNoSpace::StaticStruct();
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  __return_storage_ptr__->NewStruct = pUVar2;
  local_f8.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_e8);
  return __return_storage_ptr__;
}

// FRigUnit_DebugLineItemSpace @ 14a50e100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_DebugLineItemSpace * __thiscall
FRigUnit_DebugLineItemSpace::FRigUnit_DebugLineItemSpace(FRigUnit_DebugLineItemSpace *this)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  ulonglong uVar11;
  FLinearColor FVar12;
  undefined8 uVar13;
  uint local_18;
  
  this->field_0x10 = 1;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined4 *)&this->field_0x14 = 0xbf800000;
  (this->Space).Type = None;
  *(undefined ***)this = &___7FRigUnit_DebugLineItemSpace__6B_;
  (this->Space).Name.ComparisonIndex = 0;
  (this->Space).Name.Number = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_18 = CONCAT31(local_18._1_3_,1);
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.ZW.m128d_f64 = auVar9;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->B).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->B).field0_0x0._s_0.Y = (double)uVar13;
  (this->B).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar10 = (this->B).field0_0x0._s_0.Y;
  dVar1 = (this->B).field0_0x0._s_0.Z;
  (this->A).field0_0x0._s_0.X = (this->B).field0_0x0._s_0.X;
  (this->A).field0_0x0._s_0.Y = dVar10;
  (this->A).field0_0x0._s_0.Z = dVar1;
  FVar12 = FLinearColor::Red;
  this->Thickness = 0.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar12.field0_0x0;
  uVar11 = (ulonglong)local_18;
  (this->Space).Type = (char)uVar11;
  *(int3 *)&(this->Space).field_0x1 = (int3)(uVar11 >> 8);
  (this->Space).Name.ComparisonIndex = (FNameEntryId)(int)(uVar11 >> 0x20);
  (this->Space).Name.Number = 0;
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

// Execute @ 14a526730

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugLineItemSpace::Execute
          (FRigUnit_DebugLineItemSpace *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->A,&this->B,&this->Color,this->Thickness,&this->Space,
                &this->WorldOffset,this->bEnabled,(FRigVMDebugDrawSettings *)&this->field_0x10);
  return;
}

// RigVMExecute @ 14a53b1f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugLineItemSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  FLinearColor *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  float *pfVar9;
  FRigElementKey *pFVar10;
  TTransform<double> *pTVar11;
  uchar *puVar12;
  FRigVMDebugDrawSettings *pFVar13;
  FControlRigExecuteContext *pFVar14;
  
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
    pTVar5 = (TVector<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
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
    pTVar6 = (TVector<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
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
    pFVar7 = (FLinearColor *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  fVar1 = *pfVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar11 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar12;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar13 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,pTVar5,pTVar6,pFVar7,fVar1,pFVar10,pTVar11,bVar4,pFVar13);
  return;
}

// StaticExecute @ 14a56a6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugLineItemSpace::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FLinearColor *param_4,float param_5,FRigElementKey *param_6,TTransform<double> *param_7,
          bool param_8,FRigVMDebugDrawSettings *param_9)

{
  URigHierarchy *this;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
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
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStackY_198 [32];
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  FRigElementKey local_128;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*(longlong *)&param_1->field_0x58 != 0) && (param_8)) {
    local_140._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_140._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_140._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_158._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_158._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_158._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    bVar8 = ::FName::IsWithinBounds((FNameEntryId)(param_6->Name).ComparisonIndex.Value);
    if ((bVar8) && ((param_6->Name != (FName)0x0 && (param_6->Type != None)))) {
      local_128.Type = param_6->Type;
      local_128._1_3_ = *(undefined3 *)&param_6->field_0x1;
      local_128.Name.ComparisonIndex.Value = (param_6->Name).ComparisonIndex.Value;
      local_128.Name.Number = (param_6->Name).Number;
      this = param_1->Hierarchy;
      iVar9 = URigHierarchy::GetIndex(this,&local_128,true);
      URigHierarchy::GetGlobalTransformByIndex(this,&local_118,iVar9,false);
      dVar3 = local_140._s_0.Z * local_118.Scale3D.ZW.m128d_f64[0];
      dVar22 = local_118.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar27 = local_118.Scale3D.XY.m128d_f64[0] * local_140._s_0.X;
      dVar31 = local_118.Scale3D.XY.m128d_f64[1] * local_140._s_0.Y;
      dVar6 = local_118.Rotation.ZW.m128d_f64[0];
      dVar5 = local_118.Rotation.XY.m128d_f64[1];
      auVar36 = blendpd((undefined1  [16])local_118.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_118.Rotation.ZW.m128d_f64,2);
      auVar32._8_4_ = SUB84(dVar31,0);
      auVar32._0_8_ = dVar27;
      uVar10 = (undefined4)((ulonglong)dVar31 >> 0x20);
      auVar32._12_4_ = uVar10;
      dVar7 = local_118.Rotation.ZW.m128d_f64[1];
      dVar4 = local_118.Rotation.XY.m128d_f64[0];
      auVar11._8_4_ = SUB84(dVar31,0);
      auVar11._0_8_ = dVar27;
      auVar11._12_4_ = uVar10;
      auVar33._0_8_ = auVar32._8_8_ * dVar4 - dVar5 * dVar27;
      auVar33._8_8_ = dVar3 * dVar5 - dVar6 * dVar31;
      auVar12._8_4_ = SUB84(dVar22,0);
      auVar12._0_8_ = dVar3;
      auVar12._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      auVar12 = blendpd(auVar11,auVar12,2);
      auVar23._8_4_ = SUB84(auVar33._8_8_,0);
      auVar23._0_8_ = auVar33._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
      dVar1 = auVar36._0_8_;
      dVar2 = auVar36._8_8_;
      auVar36._0_8_ = auVar12._0_8_ * dVar6 - dVar1 * dVar3;
      auVar36._8_8_ = auVar12._8_8_ * dVar7 - dVar2 * dVar22;
      auVar12 = blendpd(auVar33,auVar36,2);
      auVar34._0_8_ = auVar12._0_8_ + auVar12._0_8_;
      auVar34._8_8_ = auVar12._8_8_ + auVar12._8_8_;
      dVar22 = auVar23._8_8_ + auVar23._8_8_;
      dVar26 = auVar36._0_8_ + auVar36._0_8_;
      auVar18._8_4_ = SUB84(dVar26,0);
      auVar18._0_8_ = dVar22;
      uVar10 = (undefined4)((ulonglong)dVar26 >> 0x20);
      auVar18._12_4_ = uVar10;
      auVar13._8_4_ = SUB84(dVar26,0);
      auVar13._0_8_ = dVar22;
      auVar13._12_4_ = uVar10;
      auVar12 = blendpd(auVar13,auVar34,2);
      auVar19._0_8_ = auVar18._8_8_ * dVar4 - dVar22 * dVar5;
      auVar19._8_8_ = auVar34._0_8_ * dVar5 - dVar26 * dVar6;
      auVar14._0_8_ = auVar12._0_8_ * dVar6 - auVar34._0_8_ * dVar1;
      auVar14._8_8_ = auVar12._8_8_ * dVar7 - auVar34._8_8_ * dVar2;
      local_140._s_0.X =
           dVar22 * dVar7 + dVar27 + auVar19._8_8_ + local_118.Translation.XY.m128d_f64[0];
      local_140._s_0.Y =
           dVar26 * dVar7 + dVar31 + auVar14._0_8_ + local_118.Translation.XY.m128d_f64[1];
      auVar12 = blendpd(auVar19,auVar14,2);
      local_140._s_0.Z =
           auVar34._0_8_ * dVar7 + dVar3 + auVar12._0_8_ + local_118.Translation.ZW.m128d_f64[0];
      local_118.Scale3D.XY.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0] * local_158._s_0.X;
      local_118.Scale3D.XY.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1] * local_158._s_0.Y;
      uVar10 = (undefined4)((ulonglong)local_118.Scale3D.XY.m128d_f64[1] >> 0x20);
      auVar35._0_8_ = local_158._s_0.Z * local_118.Scale3D.ZW.m128d_f64[0];
      auVar35._8_8_ = local_118.Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar28._8_4_ = SUB84(local_118.Scale3D.XY.m128d_f64[1],0);
      auVar28._0_8_ = local_118.Scale3D.XY.m128d_f64[0];
      auVar28._12_4_ = uVar10;
      auVar15._8_4_ = SUB84(local_118.Scale3D.XY.m128d_f64[1],0);
      auVar15._0_8_ = local_118.Scale3D.XY.m128d_f64[0];
      auVar15._12_4_ = uVar10;
      auVar12 = blendpd(auVar15,auVar35,2);
      auVar29._0_8_ = auVar28._8_8_ * dVar4 - dVar5 * local_118.Scale3D.XY.m128d_f64[0];
      auVar29._8_8_ = auVar35._0_8_ * dVar5 - dVar6 * local_118.Scale3D.XY.m128d_f64[1];
      auVar16._0_8_ = auVar12._0_8_ * dVar6 - dVar1 * auVar35._0_8_;
      auVar16._8_8_ = auVar12._8_8_ * dVar7 - dVar2 * auVar35._8_8_;
      dVar3 = auVar29._8_8_ + auVar29._8_8_;
      dVar22 = auVar16._0_8_ + auVar16._0_8_;
      uVar10 = (undefined4)((ulonglong)dVar22 >> 0x20);
      auVar12 = blendpd(auVar29,auVar16,2);
      auVar17._8_4_ = local_118.Rotation.ZW.m128d_f64[1]._0_4_;
      auVar17._0_8_ = dVar7;
      auVar17._12_4_ = local_118.Rotation.ZW.m128d_f64[1]._4_4_;
      auVar24._8_4_ = SUB84(dVar22,0);
      auVar24._0_8_ = dVar3;
      auVar24._12_4_ = uVar10;
      auVar30._0_8_ = auVar12._0_8_ + auVar12._0_8_;
      auVar30._8_8_ = auVar12._8_8_ + auVar12._8_8_;
      auVar20._8_4_ = SUB84(dVar22,0);
      auVar20._0_8_ = dVar3;
      auVar20._12_4_ = uVar10;
      auVar25._0_8_ = auVar24._8_8_ * dVar4 - dVar5 * dVar3;
      auVar25._8_8_ = auVar30._0_8_ * dVar5 - dVar6 * dVar22;
      auVar12 = blendpd(auVar20,auVar30,2);
      auVar21._0_8_ = auVar12._0_8_ * dVar6 - dVar1 * auVar30._0_8_;
      auVar21._8_8_ = auVar12._8_8_ * dVar7 - dVar2 * auVar30._8_8_;
      auVar12 = blendpd(auVar25,auVar21,2);
      local_158._s_0.Z =
           dVar7 * auVar30._0_8_ + auVar35._0_8_ + auVar12._0_8_ +
           local_118.Translation.ZW.m128d_f64[0];
      local_158._s_0.X =
           dVar7 * dVar3 + local_118.Scale3D.XY.m128d_f64[0] + auVar25._8_8_ +
           local_118.Translation.XY.m128d_f64[0];
      local_158._s_0.Y =
           auVar17._8_8_ * dVar22 + local_118.Scale3D.XY.m128d_f64[1] + auVar21._0_8_ +
           local_118.Translation.XY.m128d_f64[1];
    }
    FRigVMDrawInterface::DrawLine
              (*(FRigVMDrawInterface **)&param_1->field_0x58,param_7,
               (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_158._s_0,param_4,param_5
               ,(uint)(param_9->DepthPriority).Value,param_9->Lifetime);
  }
  return;
}

