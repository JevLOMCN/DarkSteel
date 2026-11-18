// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4896d0

UScriptStruct * __cdecl FRigUnit_GetControlTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlTransform,(UObject *)pUVar1,
                         L"RigUnit_GetControlTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a489750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlTransform::GetExecuteContextStruct(FRigUnit_GetControlTransform *this)

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

// Execute @ 14a489e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlTransform::Execute(FRigUnit_GetControlTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Space,&this->Transform,
                &this->Minimum,&this->Maximum,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_GetControlTransform @ 14a50ff30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_GetControlTransform * __thiscall
FRigUnit_GetControlTransform::FRigUnit_GetControlTransform(FRigUnit_GetControlTransform *this)

{
  this->Space = GlobalSpace;
  this->_padding_ = (longlong)&___7FRigUnit_GetControlTransform__6B_;
  (this->Control).ComparisonIndex = 0;
  (this->Control).Number = 0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Minimum).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Minimum).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Minimum).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Minimum).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Minimum).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Minimum).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Maximum).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Maximum).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Maximum).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Maximum).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Maximum).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Maximum).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->CachedControlIndex).Key.Type = None;
  (this->CachedControlIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedControlIndex).Key.Name.Number = 0;
  (this->CachedControlIndex).Index = 0xffff;
  (this->CachedControlIndex).ContainerVersion = -1;
  (this->CachedControlIndex).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a528040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlTransform::Execute
          (FRigUnit_GetControlTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Space,&this->Transform,&this->Minimum,&this->Maximum,
                &this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a541270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlTransform::RigVMExecute
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
  TTransform<double> *pTVar9;
  TTransform<double> *pTVar10;
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
  pTVar3 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar6,EVar1,pTVar3,pTVar9,pTVar10,pFVar12);
  return;
}

// StaticExecute @ 14a576a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigVMTransformSpace param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,TTransform<double> *param_6,
          FCachedRigElement *param_7)

{
  URigHierarchy *this;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_168 [32];
  FRigElementKey local_148 [2];
  undefined1 local_128 [56];
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_168;
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  local_148[0].Name = *param_2;
  local_148[0].Type = Control;
  bVar9 = FCachedRigElement::UpdateCache(param_7,local_148,this);
  if (!bVar9) {
    return;
  }
  uVar11 = 0xffffffff;
  if (param_3 == LocalSpace) {
    uVar10 = 0xffffffff;
    if (param_7->Index != 0xffff) {
      uVar10 = (uint)param_7->Index;
    }
    URigHierarchy::GetLocalTransformByIndex(this,(TTransform<double> *)local_128,uVar10,false);
  }
  else {
    if (param_3 != GlobalSpace) goto LAB_14a576b44;
    uVar10 = 0xffffffff;
    if (param_7->Index != 0xffff) {
      uVar10 = (uint)param_7->Index;
    }
    URigHierarchy::GetGlobalTransformByIndex(this,(TTransform<double> *)local_128,uVar10,false);
  }
  (param_4->Rotation).XY.m128d_f64[0] = (double)CONCAT44(local_128._4_4_,local_128._0_4_);
  (param_4->Rotation).XY.m128d_f64[1] = (double)CONCAT44(local_128._12_4_,local_128._8_4_);
  (param_4->Rotation).ZW.m128d_f64[0] = (double)CONCAT44(local_128._20_4_,local_128._16_4_);
  (param_4->Rotation).ZW.m128d_f64[1] = (double)CONCAT44(local_128._28_4_,local_128._24_4_);
  (param_4->Translation).XY.m128d_f64[0] = (double)CONCAT44(local_128._36_4_,local_128._32_4_);
  (param_4->Translation).XY.m128d_f64[1] = (double)CONCAT44(local_128._44_4_,local_128._40_4_);
  (param_4->Translation).ZW.m128d_f64[0] = (double)local_128._48_8_;
  (param_4->Translation).ZW.m128d_f64[1] = dStack_f0;
  (param_4->Scale3D).XY.m128d_f64[0] = local_e8;
  (param_4->Scale3D).XY.m128d_f64[1] = dStack_e0;
  (param_4->Scale3D).ZW.m128d_f64[0] = local_d8;
  (param_4->Scale3D).ZW.m128d_f64[1] = dStack_d0;
LAB_14a576b44:
  uVar10 = 0xffffffff;
  if (param_7->Index != 0xffff) {
    uVar10 = (uint)param_7->Index;
  }
  URigHierarchy::GetControlValueByIndex(this,(FRigControlValue *)local_128,uVar10,Minimum);
  auVar3._8_4_ = SUB84((double)(float)local_128._4_4_,0);
  auVar3._0_8_ = (double)(float)local_128._0_4_;
  auVar3._12_4_ = (int)((ulonglong)(double)(float)local_128._4_4_ >> 0x20);
  *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64 = auVar3;
  auVar7._8_4_ = SUB84((double)(float)local_128._12_4_,0);
  auVar7._0_8_ = (double)(float)local_128._8_4_;
  auVar7._12_4_ = (int)((ulonglong)(double)(float)local_128._12_4_ >> 0x20);
  *(undefined1 (*) [16])(param_5->Rotation).ZW.m128d_f64 = auVar7;
  auVar5._8_4_ = SUB84((double)(float)local_128._20_4_,0);
  auVar5._0_8_ = (double)(float)local_128._16_4_;
  auVar5._12_4_ = (int)((ulonglong)(double)(float)local_128._20_4_ >> 0x20);
  *(undefined1 (*) [16])(param_5->Translation).XY.m128d_f64 = auVar5;
  (param_5->Translation).ZW.m128d_f64[0] = (double)(float)local_128._24_4_;
  (param_5->Translation).ZW.m128d_f64[1] = 0.0;
  auVar1._8_4_ = SUB84((double)(float)local_128._36_4_,0);
  auVar1._0_8_ = (double)(float)local_128._32_4_;
  auVar1._12_4_ = (int)((ulonglong)(double)(float)local_128._36_4_ >> 0x20);
  *(undefined1 (*) [16])(param_5->Scale3D).XY.m128d_f64 = auVar1;
  (param_5->Scale3D).ZW.m128d_f64[0] = (double)(float)local_128._40_4_;
  (param_5->Scale3D).ZW.m128d_f64[1] = 0.0;
  if (param_7->Index != 0xffff) {
    uVar11 = (uint)param_7->Index;
  }
  URigHierarchy::GetControlValueByIndex(this,(FRigControlValue *)local_128,uVar11,Maximum);
  auVar4._8_4_ = SUB84((double)(float)local_128._4_4_,0);
  auVar4._0_8_ = (double)(float)local_128._0_4_;
  auVar4._12_4_ = (int)((ulonglong)(double)(float)local_128._4_4_ >> 0x20);
  *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64 = auVar4;
  auVar8._8_4_ = SUB84((double)(float)local_128._12_4_,0);
  auVar8._0_8_ = (double)(float)local_128._8_4_;
  auVar8._12_4_ = (int)((ulonglong)(double)(float)local_128._12_4_ >> 0x20);
  *(undefined1 (*) [16])(param_6->Rotation).ZW.m128d_f64 = auVar8;
  auVar6._8_4_ = SUB84((double)(float)local_128._20_4_,0);
  auVar6._0_8_ = (double)(float)local_128._16_4_;
  auVar6._12_4_ = (int)((ulonglong)(double)(float)local_128._20_4_ >> 0x20);
  *(undefined1 (*) [16])(param_6->Translation).XY.m128d_f64 = auVar6;
  (param_6->Translation).ZW.m128d_f64[0] = (double)(float)local_128._24_4_;
  (param_6->Translation).ZW.m128d_f64[1] = 0.0;
  auVar2._8_4_ = SUB84((double)(float)local_128._36_4_,0);
  auVar2._0_8_ = (double)(float)local_128._32_4_;
  auVar2._12_4_ = (int)((ulonglong)(double)(float)local_128._36_4_ >> 0x20);
  *(undefined1 (*) [16])(param_6->Scale3D).XY.m128d_f64 = auVar2;
  (param_6->Scale3D).ZW.m128d_f64[0] = (double)(float)local_128._40_4_;
  (param_6->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

