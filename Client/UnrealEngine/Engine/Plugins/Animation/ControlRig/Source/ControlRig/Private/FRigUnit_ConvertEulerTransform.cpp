// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a495ee0

UScriptStruct * __cdecl FRigUnit_ConvertEulerTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ConvertEulerTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ConvertEulerTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform,(UObject *)pUVar1,
                         L"RigUnit_ConvertEulerTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ConvertEulerTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ConvertEulerTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a495f60

UScriptStruct * __thiscall
FRigUnit_ConvertEulerTransform::GetExecuteContextStruct(FRigUnit_ConvertEulerTransform *this)

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

// Execute @ 14a4960c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ConvertEulerTransform::Execute(FRigUnit_ConvertEulerTransform *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TQuat<double> *pTVar10;
  undefined1 auStack_2a8 [32];
  TQuat<double> local_288;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
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
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&(this->Input).Rotation,&local_288);
  dVar3 = (this->Input).Location.field0_0x0._s_0.X;
  dVar4 = (this->Input).Location.field0_0x0._s_0.Y;
  dVar1 = (this->Input).Location.field0_0x0._s_0.Z;
  dVar5 = pTVar10->Y;
  dVar6 = pTVar10->Z;
  dVar7 = pTVar10->W;
  dVar8 = (this->Input).Scale.field0_0x0._s_0.X;
  dVar9 = (this->Input).Scale.field0_0x0._s_0.Y;
  dVar2 = (this->Input).Scale.field0_0x0._s_0.Z;
  (this->Result).Rotation.XY.m128d_f64[0] = pTVar10->X;
  (this->Result).Rotation.XY.m128d_f64[1] = dVar5;
  (this->Result).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar7;
  (this->Result).Translation.XY.m128d_f64[0] = dVar3;
  (this->Result).Translation.XY.m128d_f64[1] = dVar4;
  (this->Result).Translation.ZW.m128d_f64[0] = dVar1;
  (this->Result).Translation.ZW.m128d_f64[1] = 0.0;
  (this->Result).Scale3D.XY.m128d_f64[0] = dVar8;
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar9;
  (this->Result).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Result).Scale3D.ZW.m128d_f64[1] = 0.0;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4961d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ConvertEulerTransform::GetUpgradeInfo
          (FRigUnit_ConvertEulerTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_118 [32];
  FString local_e8;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_d8;
  FRigVMStruct local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_c8 = (FRigVMStruct)&___7FRigVMFunction_MathTransformFromEulerTransform__6B_;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_c0 = (this->Input).Location.field0_0x0._s_0.X;
  dStack_b8 = (this->Input).Location.field0_0x0._s_0.Y;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_b0 = (this->Input).Location.field0_0x0._s_0.Z;
  dStack_a8 = (this->Input).Rotation.Pitch;
  local_a0 = (this->Input).Rotation.Yaw;
  dStack_98 = (this->Input).Rotation.Roll;
  local_90 = (this->Input).Scale.field0_0x0._s_0.X;
  dStack_88 = (this->Input).Scale.field0_0x0._s_0.Y;
  local_80 = (this->Input).Scale.field0_0x0._s_0.Z;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ConvertEulerTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ConvertEulerTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform,(UObject *)pUVar1,
                         L"RigUnit_ConvertEulerTransform");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_e8.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::RigVMFunctions;
    local_e8.Data.ArrayNum = 1;
    local_d8._12_4_ = local_e8.Data.ArrayMax;
    local_d8.ArrayNum = 1;
    local_d8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_ConvertEulerTransform.
                       OuterSingleton,&local_d8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ConvertEulerTransform.OuterSingleton;
  pUVar2 = FRigVMFunction_MathTransformFromEulerTransform::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_c8);
  ::FString::FString((FString *)&local_d8,L"EulerTransform");
  ::FString::FString(&local_e8,L"Input");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_e8,(FString *)&local_d8,true,true);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a5260a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ConvertEulerTransform::Execute
          (FRigUnit_ConvertEulerTransform *this,FControlRigExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TQuat<double> *pTVar10;
  TQuat<double> local_28;
  
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&(this->Input).Rotation,&local_28);
  dVar3 = (this->Input).Location.field0_0x0._s_0.X;
  dVar4 = (this->Input).Location.field0_0x0._s_0.Y;
  dVar1 = (this->Input).Location.field0_0x0._s_0.Z;
  dVar5 = pTVar10->Y;
  dVar6 = pTVar10->Z;
  dVar7 = pTVar10->W;
  dVar8 = (this->Input).Scale.field0_0x0._s_0.X;
  dVar9 = (this->Input).Scale.field0_0x0._s_0.Y;
  dVar2 = (this->Input).Scale.field0_0x0._s_0.Z;
  (this->Result).Rotation.XY.m128d_f64[0] = pTVar10->X;
  (this->Result).Rotation.XY.m128d_f64[1] = dVar5;
  (this->Result).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar7;
  (this->Result).Translation.XY.m128d_f64[0] = dVar3;
  (this->Result).Translation.XY.m128d_f64[1] = dVar4;
  (this->Result).Translation.ZW.m128d_f64[0] = dVar1;
  (this->Result).Translation.ZW.m128d_f64[1] = 0.0;
  (this->Result).Scale3D.XY.m128d_f64[0] = dVar8;
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar9;
  (this->Result).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Result).Scale3D.ZW.m128d_f64[1] = 0.0;
  return;
}

// RigVMExecute @ 14a539760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertEulerTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FRigVMMemoryHandle *pFVar4;
  double *pdVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  double *pdVar15;
  TQuat<double> *pTVar16;
  TQuat<double> local_28;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar15 = (double *)pFVar4->Ptr;
  }
  else {
    pdVar15 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  if (iVar3 < 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pdVar5 = (double *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pTVar16 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)(pdVar15 + 3),&local_28);
  dVar7 = *pdVar15;
  dVar8 = pdVar15[1];
  dVar1 = pdVar15[2];
  dVar9 = pdVar15[6];
  dVar10 = pdVar15[7];
  dVar2 = pdVar15[8];
  dVar11 = pTVar16->Y;
  dVar12 = pTVar16->Z;
  dVar13 = pTVar16->W;
  *pdVar5 = pTVar16->X;
  pdVar5[1] = dVar11;
  pdVar5[2] = dVar12;
  pdVar5[3] = dVar13;
  pdVar5[4] = dVar7;
  pdVar5[5] = dVar8;
  pdVar5[6] = dVar1;
  pdVar5[7] = 0.0;
  pdVar5[8] = dVar9;
  pdVar5[9] = dVar10;
  pdVar5[10] = dVar2;
  pdVar5[0xb] = 0.0;
  return;
}

// StaticExecute @ 14a569f00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertEulerTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FEulerTransform *param_2,TTransform<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TQuat<double> *pTVar10;
  TQuat<double> local_28;
  
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&param_2->Rotation,&local_28);
  dVar3 = (param_2->Location).field0_0x0._s_0.X;
  dVar4 = (param_2->Location).field0_0x0._s_0.Y;
  dVar1 = (param_2->Location).field0_0x0._s_0.Z;
  dVar5 = (param_2->Scale).field0_0x0._s_0.X;
  dVar6 = (param_2->Scale).field0_0x0._s_0.Y;
  dVar2 = (param_2->Scale).field0_0x0._s_0.Z;
  dVar7 = pTVar10->Y;
  dVar8 = pTVar10->Z;
  dVar9 = pTVar10->W;
  (param_3->Rotation).XY.m128d_f64[0] = pTVar10->X;
  (param_3->Rotation).XY.m128d_f64[1] = dVar7;
  (param_3->Rotation).ZW.m128d_f64[0] = dVar8;
  (param_3->Rotation).ZW.m128d_f64[1] = dVar9;
  (param_3->Translation).XY.m128d_f64[0] = dVar3;
  (param_3->Translation).XY.m128d_f64[1] = dVar4;
  (param_3->Translation).ZW.m128d_f64[0] = dVar1;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  (param_3->Scale3D).XY.m128d_f64[0] = dVar5;
  (param_3->Scale3D).XY.m128d_f64[1] = dVar6;
  (param_3->Scale3D).ZW.m128d_f64[0] = dVar2;
  (param_3->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

