// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4da580

UScriptStruct * __cdecl FRigUnit_GetRelativeTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform,(UObject *)pUVar1,
                         L"RigUnit_GetRelativeTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4da640

UScriptStruct * __thiscall
FRigUnit_GetRelativeTransform::GetExecuteContextStruct(FRigUnit_GetRelativeTransform *this)

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

// Execute @ 14a4da790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetRelativeTransform::Execute(FRigUnit_GetRelativeTransform *this)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_2e8 [32];
  TTransform<double> local_2c8;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2e8;
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
  pTVar2 = UE::Math::TTransform<double>::GetRelativeTransform
                     ((TTransform<double> *)&this->field_0x10,&local_2c8,
                      (TTransform<double> *)&this->field_0x70);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  *(double *)&this->field_0xd0 = (pTVar2->Rotation).XY.m128d_f64[0];
  *(double *)&this->field_0xd8 = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  *(double *)&this->field_0xe0 = (pTVar2->Rotation).ZW.m128d_f64[0];
  *(double *)&this->field_0xe8 = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  *(double *)&this->field_0xf0 = (pTVar2->Translation).XY.m128d_f64[0];
  *(double *)&this->field_0xf8 = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  *(double *)&this->field_0x100 = (pTVar2->Translation).ZW.m128d_f64[0];
  *(double *)&this->field_0x108 = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  *(double *)&this->field_0x110 = (pTVar2->Scale3D).XY.m128d_f64[0];
  *(double *)&this->field_0x118 = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  *(double *)&this->field_0x120 = (pTVar2->Scale3D).ZW.m128d_f64[0];
  *(double *)&this->field_0x128 = dVar1;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4da8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_GetRelativeTransform::GetUpgradeInfo
          (FRigUnit_GetRelativeTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_198 [32];
  FString local_168;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_158;
  FRigVMFunction_MathTransformMakeRelative local_148;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  FRigVMFunction_MathTransformMakeRelative::FRigVMFunction_MathTransformMakeRelative(&local_148);
  local_148.Global.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x10;
  local_148.Global.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x18;
  local_148.Global.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x20;
  local_148.Global.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x28;
  local_148.Global.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x30;
  local_148.Global.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x38;
  local_148.Global.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x40;
  local_148.Global.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0x48;
  local_148.Global.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x50;
  local_148.Global.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0x58;
  local_148.Global.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x60;
  local_148.Global.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0x68;
  local_148.Parent.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x70;
  local_148.Parent.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x78;
  local_148.Parent.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x80;
  local_148.Parent.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x88;
  local_148.Parent.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x90;
  local_148.Parent.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x98;
  local_148.Parent.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0xa0;
  local_148.Parent.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0xa8;
  local_148.Parent.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0xb0;
  local_148.Parent.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0xb8;
  local_148.Parent.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0xc0;
  local_148.Parent.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0xc8;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform,(UObject *)pUVar1,
                         L"RigUnit_GetRelativeTransform");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_168.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::RigVMFunctions;
    local_168.Data.ArrayNum = 1;
    local_158._12_4_ = local_168.Data.ArrayMax;
    local_158.ArrayNum = 1;
    local_158.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransform.
                       OuterSingleton,&local_158);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransform.OuterSingleton;
  pUVar2 = FRigVMFunction_MathTransformMakeRelative::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_148);
  ::FString::FString((FString *)&local_158,L"Global");
  ::FString::FString(&local_168,L"Argument0");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_168,(FString *)&local_158,true,true);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_158.DataPtr);
  }
  ::FString::FString(&local_168,L"Parent");
  ::FString::FString((FString *)&local_158,L"Argument1");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_158,&local_168,true,true);
  if (local_158.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_158.DataPtr);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_168,L"Local");
  ::FString::FString((FString *)&local_158,L"Result");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_158,&local_168,true,true);
  if (local_158.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_158.DataPtr);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a5287a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetRelativeTransform::Execute
          (FRigUnit_GetRelativeTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,(TTransform<double> *)&this->field_0x10,
                (TTransform<double> *)&this->field_0x70,(TTransform<double> *)&this->field_0xd0);
  return;
}

// RigVMExecute @ 14a542f40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetRelativeTransform::RigVMExecute
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
  FControlRigExecuteContext *pFVar8;
  
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
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a578120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetRelativeTransform::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,TTransform<double> *param_4)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar2 = UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_78,param_3);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_4->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_4->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_4->Rotation).ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_4->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_4->Translation).XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_4->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_4->Translation).ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_4->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_4->Scale3D).XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_4->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_4->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

