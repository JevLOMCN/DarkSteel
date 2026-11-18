// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4861a0

UScriptStruct * __cdecl FRigUnit_GetControlVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlVector,(UObject *)pUVar1,
                         L"RigUnit_GetControlVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVector.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a486220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlVector::GetExecuteContextStruct(FRigUnit_GetControlVector *this)

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

// Execute @ 14a4863a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlVector::Execute(FRigUnit_GetControlVector *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Space,&this->Vector,
                &this->Minimum,&this->Maximum,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a5280d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlVector::Execute
          (FRigUnit_GetControlVector *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Space,&this->Vector,&this->Minimum,&this->Maximum,
                &this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a541610

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  ERigVMTransformSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
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
  pTVar3 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar6,EVar1,pTVar3,pTVar9,pTVar10,pFVar12);
  return;
}

// StaticExecute @ 14a576e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlVector::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigVMTransformSpace param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          FCachedRigElement *param_7)

{
  ERigControlType EVar1;
  URigHierarchy *this;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FRigControlElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_1a8 [32];
  FRigElementKey local_188;
  undefined1 local_178 [8];
  double dStack_170;
  double local_168 [2];
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  local_188.Name = *param_2;
  local_188.Type = Control;
  bVar2 = FCachedRigElement::UpdateCache(param_7,&local_188,this);
  if (!bVar2) {
    return;
  }
  uVar4 = 0xffffffff;
  local_178 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  dStack_170 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_168[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_168[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  if (param_3 == LocalSpace) {
    uVar3 = 0xffffffff;
    if (param_7->Index != 0xffff) {
      uVar3 = (uint)param_7->Index;
    }
    URigHierarchy::GetLocalTransformByIndex(this,&local_e8,uVar3,false);
  }
  else {
    uVar6 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar7 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar9 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar10 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar11 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar12 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar13 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar14 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar15 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar16 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar17 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    if (param_3 != GlobalSpace) goto LAB_14a576fd0;
    uVar3 = 0xffffffff;
    if (param_7->Index != 0xffff) {
      uVar3 = (uint)param_7->Index;
    }
    URigHierarchy::GetGlobalTransformByIndex(this,&local_e8,uVar3,false);
  }
  local_168[1] = local_e8.Rotation.ZW.m128d_f64[1];
  local_168[0] = local_e8.Rotation.ZW.m128d_f64[0];
  dStack_170 = local_e8.Rotation.XY.m128d_f64[1];
  local_178 = (undefined1  [8])local_e8.Rotation.XY.m128d_f64[0];
  uVar6 = local_e8.Translation.ZW.m128d_f64[0]._0_4_;
  uVar7 = local_e8.Translation.ZW.m128d_f64[0]._4_4_;
  uVar8 = local_e8.Translation.XY.m128d_f64[0]._0_4_;
  uVar9 = local_e8.Translation.XY.m128d_f64[0]._4_4_;
  uVar10 = local_e8.Translation.XY.m128d_f64[1]._0_4_;
  uVar11 = local_e8.Translation.XY.m128d_f64[1]._4_4_;
  uVar12 = local_e8.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar13 = local_e8.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar14 = local_e8.Scale3D.XY.m128d_f64[0]._0_4_;
  uVar15 = local_e8.Scale3D.XY.m128d_f64[0]._4_4_;
  uVar16 = local_e8.Scale3D.XY.m128d_f64[1]._0_4_;
  uVar17 = local_e8.Scale3D.XY.m128d_f64[1]._4_4_;
LAB_14a576fd0:
  uVar3 = 0xffffffff;
  if (param_7->Index != 0xffff) {
    uVar3 = (uint)param_7->Index;
  }
  pFVar5 = URigHierarchy::GetChecked<FRigControlElement>(this,uVar3);
  EVar1 = (pFVar5->Settings).ControlType;
  if (EVar1 == Position) {
    *(undefined4 *)&param_4->field0_0x0 = uVar8;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 4) = uVar9;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = uVar10;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = uVar11;
    (param_4->field0_0x0)._s_0.Z = (double)CONCAT44(uVar7,uVar6);
  }
  else if (EVar1 == Scale) {
    *(undefined4 *)&param_4->field0_0x0 = uVar14;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 4) = uVar15;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = uVar16;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = uVar17;
    (param_4->field0_0x0)._s_0.Z = (double)CONCAT44(uVar13,uVar12);
  }
  uVar3 = 0xffffffff;
  if (param_7->Index != 0xffff) {
    uVar3 = (uint)param_7->Index;
  }
  URigHierarchy::GetControlValueByIndex(this,(FRigControlValue *)local_178,uVar3,Minimum);
  (param_5->field0_0x0)._s_0.X = (double)(float)local_178._0_4_;
  (param_5->field0_0x0)._s_0.Y = (double)(float)local_178._4_4_;
  (param_5->field0_0x0)._s_0.Z = (double)dStack_170._0_4_;
  if (param_7->Index != 0xffff) {
    uVar4 = (uint)param_7->Index;
  }
  URigHierarchy::GetControlValueByIndex(this,(FRigControlValue *)local_178,uVar4,Maximum);
  (param_6->field0_0x0)._s_0.X = (double)(float)local_178._0_4_;
  (param_6->field0_0x0)._s_0.Y = (double)(float)local_178._4_4_;
  (param_6->field0_0x0)._s_0.Z = (double)dStack_170._0_4_;
  return;
}

