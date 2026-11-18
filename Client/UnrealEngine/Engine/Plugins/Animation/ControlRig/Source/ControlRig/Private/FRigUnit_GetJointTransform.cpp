// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4777c0

UScriptStruct * __cdecl FRigUnit_GetJointTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetJointTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetJointTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform,(UObject *)pUVar1,
                         L"RigUnit_GetJointTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetJointTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetJointTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a477840

UScriptStruct * __thiscall
FRigUnit_GetJointTransform::GetExecuteContextStruct(FRigUnit_GetJointTransform *this)

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

// Execute @ 14a477ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetJointTransform::Execute(FRigUnit_GetJointTransform *this)

{
  undefined1 auStackY_2a8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Joint,this->Type,this->TransformSpace,
                &this->BaseTransform,&this->BaseJoint,&this->Output);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a478080

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_GetJointTransform::GetUpgradeInfo
          (FRigUnit_GetJointTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a5285b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetJointTransform::Execute
          (FRigUnit_GetJointTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Joint,this->Type,this->TransformSpace,&this->BaseTransform,
                &this->BaseJoint,&this->Output);
  return;
}

// RigVMExecute @ 14a542990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetJointTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ETransformGetterType EVar1;
  ETransformSpaceMode EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  ETransformGetterType *pEVar7;
  ETransformSpaceMode *pEVar8;
  FRigVMMemoryHandle *pFVar9;
  TTransform<double> *pTVar10;
  FName *pFVar11;
  TTransform<double> *pTVar12;
  FControlRigExecuteContext *pFVar13;
  
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
    pFVar6 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
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
    pEVar7 = pFVar9[1].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  EVar1 = *pEVar7;
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
    pEVar8 = pFVar9[2].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  EVar2 = *pEVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar11 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar12 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar6,EVar1,EVar2,pTVar10,pFVar11,pTVar12);
  return;
}

// StaticExecute @ 14a577b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetJointTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ETransformGetterType param_3,
          ETransformSpaceMode param_4,TTransform<double> *param_5,FName *param_6,
          TTransform<double> *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  URigHierarchy *this;
  double dVar3;
  uint uVar4;
  int iVar5;
  FRigElementKey *pFVar6;
  TTransform<double> *pTVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 auStack_1a8 [32];
  FRigElementKey local_188;
  undefined4 local_178;
  FNameEntryId FStack_174;
  uint uStack_170;
  undefined4 local_168;
  FNameEntryId FStack_164;
  uint uStack_160;
  FRigElementKey local_15c;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  FStack_174 = (*param_2).ComparisonIndex;
  uStack_170 = (*param_2).Number;
  uVar4 = uStack_170;
  local_178 = CONCAT31(local_178._1_3_,1);
  if ((param_3 == Initial) || (param_3 != Current)) {
    local_188.Name.ComparisonIndex.Value = FStack_174.Value;
    local_188._0_4_ = local_178;
    local_168 = CONCAT31(local_168._1_3_,1);
    FStack_164 = (*param_6).ComparisonIndex;
    uStack_160 = (*param_6).Number;
    local_188.Name.Number = uStack_170;
    pFVar6 = URigHierarchy::GetFirstParent(this,&local_15c,&local_188);
    if (param_4 == LocalSpace) {
      uVar2._0_1_ = pFVar6->Type;
      uVar2._1_3_ = *(undefined3 *)&pFVar6->field_0x1;
      uVar2._4_4_ = (pFVar6->Name).ComparisonIndex.Value;
      uVar9 = (int)uVar2;
      local_188.Name.Number = (pFVar6->Name).Number;
LAB_14a577d6e:
      local_188.Name.ComparisonIndex.Value = uVar2._4_4_;
      local_188._0_4_ = uVar9;
      iVar5 = URigHierarchy::GetIndex(this,&local_188,true);
      bVar8 = true;
      goto LAB_14a577d8b;
    }
    if (param_4 != GlobalSpace) {
      if (param_4 == BaseSpace) goto LAB_14a577cee;
      uVar9 = local_168;
      uVar2._4_4_ = FStack_164.Value;
      local_188.Name.Number = uStack_160;
      if (param_4 == BaseJoint) goto LAB_14a577d6e;
    }
  }
  else {
    local_188.Name.ComparisonIndex.Value = FStack_174.Value;
    local_188._0_4_ = local_178;
    local_168 = CONCAT31(local_168._1_3_,1);
    FStack_164 = (*param_6).ComparisonIndex;
    uStack_160 = (*param_6).Number;
    local_188.Name.Number = uStack_170;
    pFVar6 = URigHierarchy::GetFirstParent(this,&local_15c,&local_188);
    if (param_4 == LocalSpace) {
      uVar1._0_1_ = pFVar6->Type;
      uVar1._1_3_ = *(undefined3 *)&pFVar6->field_0x1;
      uVar1._4_4_ = (pFVar6->Name).ComparisonIndex.Value;
      uVar9 = (int)uVar1;
      local_188.Name.Number = (pFVar6->Name).Number;
LAB_14a577c67:
      local_188.Name.ComparisonIndex.Value = uVar1._4_4_;
      local_188._0_4_ = uVar9;
      iVar5 = URigHierarchy::GetIndex(this,&local_188,true);
      bVar8 = false;
LAB_14a577d8b:
      URigHierarchy::GetGlobalTransformByIndex(this,&local_148,iVar5,bVar8);
      goto LAB_14a577d9b;
    }
    if (param_4 != GlobalSpace) {
      if (param_4 == BaseSpace) {
LAB_14a577cee:
        local_148.Rotation.XY.m128d_f64 = *&(param_5->Rotation).XY.m128d_f64;
        local_148.Rotation.ZW.m128d_f64 = *&(param_5->Rotation).ZW.m128d_f64;
        local_148.Translation.XY.m128d_f64 = *&(param_5->Translation).XY.m128d_f64;
        local_148.Translation.ZW.m128d_f64 = *&(param_5->Translation).ZW.m128d_f64;
        local_148.Scale3D.XY.m128d_f64 = *&(param_5->Scale3D).XY.m128d_f64;
        local_148.Scale3D.ZW.m128d_f64 = *&(param_5->Scale3D).ZW.m128d_f64;
        goto LAB_14a577d9b;
      }
      uVar9 = local_168;
      uVar1._4_4_ = FStack_164.Value;
      local_188.Name.Number = uStack_160;
      if (param_4 == BaseJoint) goto LAB_14a577c67;
    }
  }
  local_148.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_148.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_148.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_148.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_148.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_148.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
LAB_14a577d9b:
  local_188.Name.ComparisonIndex.Value = FStack_174.Value;
  local_188._0_4_ = local_178;
  local_188.Name.Number = uVar4;
  iVar5 = URigHierarchy::GetIndex(this,&local_188,true);
  URigHierarchy::GetGlobalTransformByIndex(this,&local_e8,iVar5,true);
  pTVar7 = UE::Math::TTransform<double>::GetRelativeTransform(&local_e8,&local_88,&local_148);
  dVar3 = (pTVar7->Rotation).XY.m128d_f64[1];
  (param_7->Rotation).XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  (param_7->Rotation).XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Rotation).ZW.m128d_f64[1];
  (param_7->Rotation).ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
  (param_7->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).XY.m128d_f64[1];
  (param_7->Translation).XY.m128d_f64[0] = (pTVar7->Translation).XY.m128d_f64[0];
  (param_7->Translation).XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).ZW.m128d_f64[1];
  (param_7->Translation).ZW.m128d_f64[0] = (pTVar7->Translation).ZW.m128d_f64[0];
  (param_7->Translation).ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).XY.m128d_f64[1];
  (param_7->Scale3D).XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
  (param_7->Scale3D).XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).ZW.m128d_f64[1];
  (param_7->Scale3D).ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
  (param_7->Scale3D).ZW.m128d_f64[1] = dVar3;
  return;
}

