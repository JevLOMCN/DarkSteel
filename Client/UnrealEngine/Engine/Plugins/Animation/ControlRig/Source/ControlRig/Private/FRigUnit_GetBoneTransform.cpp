// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4fc3b0

UScriptStruct * __cdecl FRigUnit_GetBoneTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetBoneTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetBoneTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetBoneTransform,(UObject *)pUVar1,
                         L"RigUnit_GetBoneTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetBoneTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetBoneTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetBoneTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4fc4a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetBoneTransform::GetExecuteContextStruct(FRigUnit_GetBoneTransform *this)

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

// Execute @ 14a4fc600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetBoneTransform::Execute(FRigUnit_GetBoneTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Bone,this->Space,&this->Transform,
                &this->CachedBone,&this->bFirstUpdate);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4fc7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_GetBoneTransform::GetUpgradeInfo
          (FRigUnit_GetBoneTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_108 [32];
  undefined1 local_d8 [4];
  uint uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_c8;
  FRigVMStruct local_b8;
  undefined8 local_b0;
  uint local_a8;
  ERigVMTransformSpace local_a4;
  undefined1 local_a3;
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  undefined1 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_48 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_b8 = (FRigVMStruct)&___7FRigUnit_GetTransform__6B_;
  local_98 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_2c = 0xffff;
  uStack_d4 = (uint)(this->Bone).ComparisonIndex;
  uStack_d0 = (this->Bone).Number;
  local_88 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_a8 = uStack_d0;
  local_a4 = this->Space;
  local_78 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
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
  local_d8[0] = 1;
  local_b0 = CONCAT44(uStack_d4,local_d8);
  local_a3 = 0;
  local_38 = 0;
  local_34 = 0;
  local_28 = 0xffffffff;
  local_20 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetBoneTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetBoneTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetBoneTransform,(UObject *)pUVar1,
                         L"RigUnit_GetBoneTransform");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_d8 = (undefined1  [4])0x5218f488;
    uStack_d4 = 1;
    uStack_d0 = 1;
    local_c8.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetBoneTransform_Statics::RigVMFunctions;
    local_c8._12_4_ = iStack_cc;
    local_c8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_GetBoneTransform.OuterSingleton,
               &local_c8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetBoneTransform.OuterSingleton;
  pUVar2 = FRigUnit_GetTransform::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_d8 = (undefined1  [4])0x0;
  uStack_d4 = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_b8);
  ::FString::FString((FString *)&local_c8,L"Item.Name");
  ::FString::FString((FString *)local_d8,L"Bone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_d8,(FString *)&local_c8,true,true);
  if ((void *)CONCAT44(uStack_d4,local_d8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_d4,local_d8));
  }
  if (local_c8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a527d90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetBoneTransform::Execute
          (FRigUnit_GetBoneTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Bone,this->Space,&this->Transform,&this->CachedBone,
                &this->bFirstUpdate);
  return;
}

// RigVMExecute @ 14a53ff90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetBoneTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  ERigVMTransformSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  bool *pbVar11;
  FControlRigExecuteContext *pFVar12;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  if (iVar2 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar8[1].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  EVar1 = *pEVar7;
  if (iVar2 < 3) {
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
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar11 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar6,EVar1,pTVar3,pFVar10,pbVar11);
  return;
}

// StaticExecute @ 14a575d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetBoneTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigVMTransformSpace param_3,
          TTransform<double> *param_4,FCachedRigElement *param_5,bool *param_6)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  undefined1 auStackY_d8 [32];
  FRigElementKey local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    if (*param_6 == false) {
      local_a8.Name = *param_2;
      local_a8.Type = Bone;
      bVar1 = FCachedRigElement::UpdateCache(param_5,&local_a8,this);
      if (bVar1) {
        if (param_3 == LocalSpace) {
          uVar2 = 0xffffffff;
          if (param_5->Index != 0xffff) {
            uVar2 = (uint)param_5->Index;
          }
          URigHierarchy::GetLocalTransformByIndex(this,&local_98,uVar2,false);
        }
        else {
          if (param_3 != GlobalSpace) {
            return;
          }
          uVar2 = 0xffffffff;
          if (param_5->Index != 0xffff) {
            uVar2 = (uint)param_5->Index;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_98,uVar2,false);
        }
        (param_4->Rotation).XY.m128d_f64[0] = local_98.Rotation.XY.m128d_f64[0];
        (param_4->Rotation).XY.m128d_f64[1] = local_98.Rotation.XY.m128d_f64[1];
        (param_4->Rotation).ZW.m128d_f64[0] = local_98.Rotation.ZW.m128d_f64[0];
        (param_4->Rotation).ZW.m128d_f64[1] = local_98.Rotation.ZW.m128d_f64[1];
        (param_4->Translation).XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
        (param_4->Translation).XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
        (param_4->Translation).ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
        (param_4->Translation).ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
        (param_4->Scale3D).XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
        (param_4->Scale3D).XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
        (param_4->Scale3D).ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0];
        (param_4->Scale3D).ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1];
      }
    }
    else {
      FRigUnit_GetInitialBoneTransform::StaticExecute(param_1,param_2,param_3,param_4,param_5);
      *param_6 = false;
    }
  }
  return;
}

