// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4b83a0

UScriptStruct * __cdecl FRigUnit_GetRelativeBoneTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeBoneTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeBoneTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform,
                         (UObject *)pUVar1,L"RigUnit_GetRelativeBoneTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeBoneTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeBoneTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4b84a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetRelativeBoneTransform::GetExecuteContextStruct(FRigUnit_GetRelativeBoneTransform *this)

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

// Execute @ 14a4b8890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetRelativeBoneTransform::Execute(FRigUnit_GetRelativeBoneTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Bone,&this->Space,&this->Transform,
                &this->CachedBone,&this->CachedSpace);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4b8f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_GetRelativeBoneTransform::GetUpgradeInfo
          (FRigUnit_GetRelativeBoneTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  undefined1 auStack_138 [32];
  undefined1 local_108 [4];
  uint uStack_104;
  uint uStack_100;
  int iStack_fc;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_f8;
  FRigVMStruct local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  uint local_c8;
  undefined1 local_c4;
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  undefined1 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_68 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_e8 = (FRigVMStruct)&___7FRigUnit_GetRelativeTransformForItem__6B_;
  local_b8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_4c = 0xffff;
  local_2c = 0xffff;
  uStack_104 = (uint)(this->Space).ComparisonIndex;
  uStack_100 = (this->Space).Number;
  local_c8 = uStack_100;
  local_98 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_108 = (undefined1  [4])CONCAT31(local_108._1_3_,1);
  local_a8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_d0 = CONCAT44(uStack_104,local_108);
  uStack_104 = (uint)(this->Bone).ComparisonIndex;
  uStack_100 = (this->Bone).Number;
  local_88 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
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
  local_d8 = uStack_100;
  local_108[0] = 1;
  local_e0 = CONCAT44(uStack_104,local_108);
  local_d4 = 0;
  local_c4 = 0;
  local_58 = 0;
  local_54 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_28 = 0xffffffff;
  local_20 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeBoneTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeBoneTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform,
                         (UObject *)pUVar1,L"RigUnit_GetRelativeBoneTransform");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_108 = (undefined1  [4])0x52190420;
    uStack_104 = 1;
    uStack_100 = 1;
    local_f8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::RigVMFunctions;
    local_f8._12_4_ = iStack_fc;
    local_f8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeBoneTransform.
                      OuterSingleton,&local_f8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeBoneTransform.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransformForItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransformForItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem,
                         (UObject *)pUVar1,L"RigUnit_GetRelativeTransformForItem");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_108 = (undefined1  [4])0x521905f8;
    uStack_104 = 1;
    uStack_100 = 1;
    local_f8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::RigVMFunctions;
    local_f8._12_4_ = iStack_fc;
    local_f8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransformForItem.
                      OuterSingleton,&local_f8);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetRelativeTransformForItem.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_108 = (undefined1  [4])0x0;
  uStack_104 = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_e8);
  ::FString::FString((FString *)&local_f8,L"Parent.Name");
  ::FString::FString((FString *)local_108,L"Space");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_108,(FString *)&local_f8,true,true);
  if ((void *)CONCAT44(uStack_104,local_108) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_104,local_108));
  }
  if (local_f8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_f8.DataPtr);
  }
  ::FString::FString((FString *)local_108,L"Child.Name");
  ::FString::FString((FString *)&local_f8,L"Bone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_f8,(FString *)local_108,true,true);
  if (local_f8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_f8.DataPtr);
  }
  if ((void *)CONCAT44(uStack_104,local_108) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_104,local_108));
  }
  ::FString::FString((FString *)local_108,L"RelativeTransform");
  ::FString::FString((FString *)&local_f8,L"Transform");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_f8,(FString *)local_108,true,true);
  if (local_f8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_f8.DataPtr);
  }
  if ((void *)CONCAT44(uStack_104,local_108) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_104,local_108));
  }
  return __return_storage_ptr__;
}

// Execute @ 14a528760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetRelativeBoneTransform::Execute
          (FRigUnit_GetRelativeBoneTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Bone,&this->Space,&this->Transform,&this->CachedBone,
                &this->CachedSpace);
  return;
}

// RigVMExecute @ 14a542d70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetRelativeBoneTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FName *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigVMSlice *pFVar8;
  FCachedRigElement *pFVar9;
  FCachedRigElement *pFVar10;
  FControlRigExecuteContext *pFVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  if (iVar1 < 2) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar7[1].Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
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
  pTVar2 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar9 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar5,pFVar6,pTVar2,pFVar9,pFVar10);
  return;
}

// StaticExecute @ 14a577fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetRelativeBoneTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,
          TTransform<double> *param_4,FCachedRigElement *param_5,FCachedRigElement *param_6)

{
  URigHierarchy *this;
  double dVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  undefined1 auStack_178 [32];
  FRigElementKey local_158;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_158.Name = *param_2;
    local_158.Type = Bone;
    bVar2 = FCachedRigElement::UpdateCache(param_5,&local_158,this);
    if (bVar2) {
      local_158.Name = *param_3;
      local_158.Type = Bone;
      bVar2 = FCachedRigElement::UpdateCache(param_6,&local_158,this);
      if (bVar2) {
        uVar4 = 0xffffffff;
        uVar3 = 0xffffffff;
        if (param_6->Index != 0xffff) {
          uVar3 = (uint)param_6->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_148,uVar3,false);
        if (param_5->Index != 0xffff) {
          uVar4 = (uint)param_5->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_e8,uVar4,false);
        pTVar5 = UE::Math::TTransform<double>::GetRelativeTransform(&local_e8,&local_88,&local_148);
        dVar1 = (pTVar5->Rotation).XY.m128d_f64[1];
        (param_4->Rotation).XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
        (param_4->Rotation).XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar5->Rotation).ZW.m128d_f64[1];
        (param_4->Rotation).ZW.m128d_f64[0] = (pTVar5->Rotation).ZW.m128d_f64[0];
        (param_4->Rotation).ZW.m128d_f64[1] = dVar1;
        dVar1 = (pTVar5->Translation).XY.m128d_f64[1];
        (param_4->Translation).XY.m128d_f64[0] = (pTVar5->Translation).XY.m128d_f64[0];
        (param_4->Translation).XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar5->Translation).ZW.m128d_f64[1];
        (param_4->Translation).ZW.m128d_f64[0] = (pTVar5->Translation).ZW.m128d_f64[0];
        (param_4->Translation).ZW.m128d_f64[1] = dVar1;
        dVar1 = (pTVar5->Scale3D).XY.m128d_f64[1];
        (param_4->Scale3D).XY.m128d_f64[0] = (pTVar5->Scale3D).XY.m128d_f64[0];
        (param_4->Scale3D).XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar5->Scale3D).ZW.m128d_f64[1];
        (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar5->Scale3D).ZW.m128d_f64[0];
        (param_4->Scale3D).ZW.m128d_f64[1] = dVar1;
      }
    }
  }
  return;
}

