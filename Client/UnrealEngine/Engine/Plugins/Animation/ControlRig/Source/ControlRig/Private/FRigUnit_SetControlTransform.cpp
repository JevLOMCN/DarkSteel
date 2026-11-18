// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a486af0

UScriptStruct * __cdecl FRigUnit_SetControlTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlTransform,(UObject *)pUVar1,
                         L"RigUnit_SetControlTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a486be0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlTransform::GetExecuteContextStruct(FRigUnit_SetControlTransform *this)

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

// Execute @ 14a486f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlTransform::Execute(FRigUnit_SetControlTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Weight,&this->Transform,
                this->Space,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4871b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SetControlTransform::GetUpgradeInfo
          (FRigUnit_SetControlTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_118 [32];
  undefined1 local_e8 [4];
  uint uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_d8;
  FRigVMStruct local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  uint local_b0;
  ERigVMTransformSpace local_ac;
  undefined1 local_ab;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  float local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  undefined2 local_34;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_98 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dStack_90 = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_e8[0] = 4;
  local_ab = 0;
  local_c0 = &___7FRigVMExecutePin__6B_;
  local_78 = (this->Transform).Translation.ZW.m128d_f64[0];
  dStack_70 = (this->Transform).Translation.ZW.m128d_f64[1];
  local_c8 = (FRigVMStruct)&___7FRigUnit_SetTransform__6B_;
  local_34 = 0xffff;
  uStack_e4 = (uint)(this->Control).ComparisonIndex;
  uStack_e0 = (this->Control).Number;
  local_b8 = CONCAT44(uStack_e4,local_e8);
  local_a8 = (this->Transform).Rotation.XY.m128d_f64[0];
  dStack_a0 = (this->Transform).Rotation.XY.m128d_f64[1];
  local_b0 = uStack_e0;
  local_ac = this->Space;
  local_88 = (this->Transform).Translation.XY.m128d_f64[0];
  dStack_80 = (this->Transform).Translation.XY.m128d_f64[1];
  local_58 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_50 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  local_44 = 1;
  local_68 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dStack_60 = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_40 = 0;
  local_3c = 0;
  local_48 = this->Weight;
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
  local_30 = 0xffffffff;
  local_28 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlTransform,(UObject *)pUVar1,
                         L"RigUnit_SetControlTransform");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_e8 = (undefined1  [4])0x52193b68;
    uStack_e4 = 1;
    uStack_e0 = 1;
    local_d8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics::RigVMFunctions;
    local_d8._12_4_ = iStack_dc;
    local_d8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlTransform.OuterSingleton
               ,&local_d8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetControlTransform.OuterSingleton;
  pUVar2 = FRigUnit_SetTransform::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_e8 = (undefined1  [4])0x0;
  uStack_e4 = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_c8);
  ::FString::FString((FString *)&local_d8,L"Item.Name");
  ::FString::FString((FString *)local_e8,L"Control");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_e8,(FString *)&local_d8,true,true);
  if ((void *)CONCAT44(uStack_e4,local_e8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_e4,local_e8));
  }
  if (local_d8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  ::FString::FString((FString *)local_e8,L"Value");
  ::FString::FString((FString *)&local_d8,L"Transform");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_d8,(FString *)local_e8,true,true);
  if (local_d8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  if ((void *)CONCAT44(uStack_e4,local_e8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_e4,local_e8));
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52ca80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlTransform::Execute
          (FRigUnit_SetControlTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Weight,&this->Transform,this->Space,
                &this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a551a60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMTransformSpace EVar2;
  int iVar3;
  TTransform<double> *pTVar4;
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
  pTVar4 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
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

// StaticExecute @ 14a591840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,float param_3,
          TTransform<double> *param_4,ERigVMTransformSpace param_5,FCachedRigElement *param_6)

{
  ushort uVar1;
  URigHierarchy *this;
  bool bVar2;
  TTransform<double> *pTVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_148 [32];
  FRigElementKey local_118;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_118.Name = *param_2;
    local_118.Type = Control;
    bVar2 = FCachedRigElement::UpdateCache(param_6,&local_118,this);
    if (bVar2) {
      if (param_5 == LocalSpace) {
        uVar1 = param_6->Index;
        uVar4 = 0xffffffff;
        if (__real_322bcc77 <
            (float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          uVar5 = 0xffffffff;
          if (uVar1 != 0xffff) {
            uVar5 = (uint)uVar1;
          }
          URigHierarchy::GetLocalTransformByIndex(this,&local_108,uVar5,false);
          if (__real_3f800000 <= param_3) {
            param_3 = __real_3f800000;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          param_4 = FRigVMMathLibrary::LerpTransform(&local_a8,&local_108,param_4,param_3);
          if (param_6->Index != 0xffff) {
            uVar4 = (uint)param_6->Index;
          }
        }
        else if (uVar1 != 0xffff) {
          uVar4 = (uint)uVar1;
        }
        URigHierarchy::SetLocalTransform(this,uVar4,param_4,true,false,false);
      }
      else if (param_5 == GlobalSpace) {
        uVar1 = param_6->Index;
        uVar4 = 0xffffffff;
        if (__real_322bcc77 <
            (float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          uVar5 = 0xffffffff;
          if (uVar1 != 0xffff) {
            uVar5 = (uint)uVar1;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_108,uVar5,false);
          if (__real_3f800000 <= param_3) {
            param_3 = __real_3f800000;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          pTVar3 = FRigVMMathLibrary::LerpTransform(&local_a8,&local_108,param_4,param_3);
          if (param_6->Index != 0xffff) {
            uVar4 = (uint)param_6->Index;
          }
          URigHierarchy::SetGlobalTransform(this,uVar4,pTVar3,true,false);
        }
        else {
          if (uVar1 != 0xffff) {
            uVar4 = (uint)uVar1;
          }
          URigHierarchy::SetGlobalTransform(this,uVar4,param_4,true,false);
        }
      }
    }
  }
  return;
}

