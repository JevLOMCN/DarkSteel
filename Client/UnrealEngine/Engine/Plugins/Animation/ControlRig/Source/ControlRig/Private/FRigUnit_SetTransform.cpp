// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4d5720

UScriptStruct * __cdecl FRigUnit_SetTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetTransform.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransform,(UObject *)pUVar1,
                         L"RigUnit_SetTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetTransform.OuterSingleton,&local_18
              );
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetTransform.OuterSingleton;
}

// FRigUnit_SetTransform @ 14a515f00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_SetTransform * __thiscall
FRigUnit_SetTransform::FRigUnit_SetTransform(FRigUnit_SetTransform *this)

{
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_SetTransform__6B_;
  (this->Item).Type = Bone;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  this->Space = GlobalSpace;
  this->bInitial = false;
  *&(this->Value).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Value).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Value).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Value).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Value).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Value).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  (this->CachedIndex).Key.Type = None;
  this->Weight = 1.0;
  this->bPropagateToChildren = true;
  (this->CachedIndex).Key.Name.ComparisonIndex = 0;
  (this->CachedIndex).Key.Name.Number = 0;
  (this->CachedIndex).Index = 0xffff;
  (this->CachedIndex).ContainerVersion = -1;
  (this->CachedIndex).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a52d680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetTransform::Execute(FRigUnit_SetTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,this->Space,this->bInitial,&this->Value,this->Weight,
                this->bPropagateToChildren,&this->CachedIndex);
  return;
}

// Execute @ 14a52d6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetTransform::Execute(FRigUnit_SetTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,this->Space,this->bInitial,
                &this->Value,this->Weight,this->bPropagateToChildren,&this->CachedIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a5311a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetTransform::GetExecuteContextStruct(FRigUnit_SetTransform *this)

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

// GetUnitLabel @ 14a5319b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetTransform::GetUnitLabel(FRigUnit_SetTransform *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  UEnum *this_00;
  FText *this_01;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FText local_28;
  
  if (this->bInitial == false) {
    pFVar2 = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar1 = ::FString::FString((FString *)&local_28,L" Initial");
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_28.TextData.Reference);
    }
  }
  this_00 = StaticEnum<enum_ERigElementType>();
  this_01 = UEnum::GetDisplayNameTextByValue(this_00,&local_28,(ulonglong)(this->Item).Type);
  pFVar1 = FText::ToString(this_01);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (pFVar1->Data).ArrayNum;
  lVar3 = (longlong)local_30;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar3 * 2);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Set Transform - %s%s");
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// RigVMExecute @ 14a555060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMTransformSpace EVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FRigElementKey *pFVar7;
  ERigVMTransformSpace *pEVar8;
  uchar *puVar9;
  FRigVMMemoryHandle *pFVar10;
  TTransform<double> *pTVar11;
  float *pfVar12;
  FRigVMSlice *pFVar13;
  FCachedRigElement *pFVar14;
  FControlRigExecuteContext *pFVar15;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar10->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  if (iVar4 < 2) {
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar10[1].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  EVar2 = *pEVar8;
  if (iVar4 < 3) {
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar10[2].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  bVar6 = (bool)*puVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar11 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar1 = *pfVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar3 = (bool)*puVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar13->Offset + pFVar13->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar7,EVar2,bVar6,pTVar11,fVar1,bVar3,pFVar14);
  return;
}

// StaticExecute @ 14a594670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,ERigVMTransformSpace param_3,
          bool param_4,TTransform<double> *param_5,float param_6,bool param_7,
          FCachedRigElement *param_8)

{
  __m128d *p_Var1;
  URigHierarchy *this;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  TTransform<double> *pTVar18;
  undefined1 auStackY_1c8 [32];
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (param_6 < __real_322bcc77) {
    return;
  }
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  bVar15 = FCachedRigElement::UpdateCache(param_8,param_2,this);
  if (!bVar15) {
    return;
  }
  if ((param_4) && ((param_8->Key).Type == Control)) {
    local_118.Rotation.XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
    local_118.Rotation.XY.m128d_f64[1] = (param_5->Rotation).XY.m128d_f64[1];
    local_118.Rotation.ZW.m128d_f64[0] = (param_5->Rotation).ZW.m128d_f64[0];
    local_118.Rotation.ZW.m128d_f64[1] = (param_5->Rotation).ZW.m128d_f64[1];
    local_118.Translation.XY.m128d_f64[0] = (param_5->Translation).XY.m128d_f64[0];
    local_118.Translation.XY.m128d_f64[1] = (param_5->Translation).XY.m128d_f64[1];
    local_118.Translation.ZW.m128d_f64[0] = (param_5->Translation).ZW.m128d_f64[0];
    local_118.Translation.ZW.m128d_f64[1] = (param_5->Translation).ZW.m128d_f64[1];
    local_118.Scale3D.XY.m128d_f64[0] = (param_5->Scale3D).XY.m128d_f64[0];
    local_118.Scale3D.XY.m128d_f64[1] = (param_5->Scale3D).XY.m128d_f64[1];
    local_118.Scale3D.ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0];
    local_118.Scale3D.ZW.m128d_f64[1] = (param_5->Scale3D).ZW.m128d_f64[1];
    FRigUnit_SetControlOffset::StaticExecute
              (param_1,&(param_8->Key).Name,&local_118,param_3,param_8);
    bVar15 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
    if (!bVar15) {
      return;
    }
    uVar17 = 0xffffffff;
    uVar16 = 0xffffffff;
    if (param_8->Index != 0xffff) {
      uVar16 = (uint)param_8->Index;
    }
    local_178.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_178.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_178.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_178.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_178.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_178.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    URigHierarchy::SetLocalTransformByIndex(this,uVar16,&local_178,true,param_7,false,false);
    if (param_8->Index != 0xffff) {
      uVar17 = (uint)param_8->Index;
    }
    local_178.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_178.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_178.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_178.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_178.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_178.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    URigHierarchy::SetLocalTransformByIndex(this,uVar17,&local_178,false,param_7,false,false);
    return;
  }
  uVar16 = 0xffffffff;
  local_b8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_5->Rotation).XY.m128d_f64;
  local_b8.Rotation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Rotation).XY.m128d_f64 + 4);
  dVar3 = (param_5->Rotation).XY.m128d_f64[0];
  pdVar2 = (param_5->Rotation).XY.m128d_f64 + 1;
  local_b8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)pdVar2;
  local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Rotation).XY.m128d_f64 + 0xc);
  dVar4 = *pdVar2;
  p_Var1 = &(param_5->Rotation).ZW;
  local_b8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)p_Var1->m128d_f64;
  local_b8.Rotation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Rotation).ZW.m128d_f64 + 4);
  dVar5 = p_Var1->m128d_f64[0];
  pdVar2 = (param_5->Rotation).ZW.m128d_f64 + 1;
  local_b8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)pdVar2;
  local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Rotation).ZW.m128d_f64 + 0xc);
  dVar6 = *pdVar2;
  local_b8.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_5->Translation).XY.m128d_f64;
  local_b8.Translation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Translation).XY.m128d_f64 + 4);
  dVar7 = (param_5->Translation).XY.m128d_f64[0];
  pdVar2 = (param_5->Translation).XY.m128d_f64 + 1;
  local_b8.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)pdVar2;
  local_b8.Translation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Translation).XY.m128d_f64 + 0xc);
  dVar8 = *pdVar2;
  p_Var1 = &(param_5->Translation).ZW;
  local_b8.Translation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)p_Var1->m128d_f64;
  local_b8.Translation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Translation).ZW.m128d_f64 + 4);
  dVar9 = p_Var1->m128d_f64[0];
  pdVar2 = (param_5->Translation).ZW.m128d_f64 + 1;
  local_b8.Translation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)pdVar2;
  local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Translation).ZW.m128d_f64 + 0xc);
  dVar10 = *pdVar2;
  local_b8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_5->Scale3D).XY.m128d_f64;
  local_b8.Scale3D.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Scale3D).XY.m128d_f64 + 4);
  dVar11 = (param_5->Scale3D).XY.m128d_f64[0];
  pdVar2 = (param_5->Scale3D).XY.m128d_f64 + 1;
  local_b8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)pdVar2;
  local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Scale3D).XY.m128d_f64 + 0xc);
  dVar12 = *pdVar2;
  p_Var1 = &(param_5->Scale3D).ZW;
  local_b8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)p_Var1->m128d_f64;
  local_b8.Scale3D.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Scale3D).ZW.m128d_f64 + 4);
  dVar13 = p_Var1->m128d_f64[0];
  pdVar2 = (param_5->Scale3D).ZW.m128d_f64 + 1;
  local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)pdVar2;
  local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(param_5->Scale3D).ZW.m128d_f64 + 0xc);
  dVar14 = *pdVar2;
  if (__real_3f800000 <= param_6) goto LAB_14a594992;
  local_118.Rotation.XY.m128d_f64[0] = dVar3;
  local_118.Rotation.XY.m128d_f64[1] = dVar4;
  local_118.Rotation.ZW.m128d_f64[0] = dVar5;
  local_118.Rotation.ZW.m128d_f64[1] = dVar6;
  local_118.Translation.XY.m128d_f64[0] = dVar7;
  local_118.Translation.XY.m128d_f64[1] = dVar8;
  local_118.Translation.ZW.m128d_f64[0] = dVar9;
  local_118.Translation.ZW.m128d_f64[1] = dVar10;
  local_118.Scale3D.XY.m128d_f64[0] = dVar11;
  local_118.Scale3D.XY.m128d_f64[1] = dVar12;
  local_118.Scale3D.ZW.m128d_f64[0] = dVar13;
  local_118.Scale3D.ZW.m128d_f64[1] = dVar14;
  if (param_3 == LocalSpace) {
    uVar17 = 0xffffffff;
    if (param_8->Index != 0xffff) {
      uVar17 = (uint)param_8->Index;
    }
    pTVar18 = URigHierarchy::GetLocalTransformByIndex(this,&local_178,uVar17,param_4);
LAB_14a59491a:
    local_118.Rotation.XY.m128d_f64[0] = (pTVar18->Rotation).XY.m128d_f64[0];
    local_118.Rotation.XY.m128d_f64[1] = (pTVar18->Rotation).XY.m128d_f64[1];
    local_118.Rotation.ZW.m128d_f64[0] = (pTVar18->Rotation).ZW.m128d_f64[0];
    local_118.Rotation.ZW.m128d_f64[1] = (pTVar18->Rotation).ZW.m128d_f64[1];
    local_118.Translation.XY.m128d_f64[0] = (pTVar18->Translation).XY.m128d_f64[0];
    local_118.Translation.XY.m128d_f64[1] = (pTVar18->Translation).XY.m128d_f64[1];
    local_118.Translation.ZW.m128d_f64[0] = (pTVar18->Translation).ZW.m128d_f64[0];
    local_118.Translation.ZW.m128d_f64[1] = (pTVar18->Translation).ZW.m128d_f64[1];
    local_118.Scale3D.XY.m128d_f64[0] = (pTVar18->Scale3D).XY.m128d_f64[0];
    local_118.Scale3D.XY.m128d_f64[1] = (pTVar18->Scale3D).XY.m128d_f64[1];
    local_118.Scale3D.ZW.m128d_f64[0] = (pTVar18->Scale3D).ZW.m128d_f64[0];
    local_118.Scale3D.ZW.m128d_f64[1] = (pTVar18->Scale3D).ZW.m128d_f64[1];
  }
  else if (param_3 == GlobalSpace) {
    uVar17 = 0xffffffff;
    if (param_8->Index != 0xffff) {
      uVar17 = (uint)param_8->Index;
    }
    pTVar18 = URigHierarchy::GetGlobalTransformByIndex(this,&local_178,uVar17,param_4);
    goto LAB_14a59491a;
  }
  pTVar18 = FRigVMMathLibrary::LerpTransform(&local_178,&local_118,&local_b8,param_6);
  local_b8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar18->Rotation).XY.m128d_f64;
  local_b8.Rotation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Rotation).XY.m128d_f64 + 4);
  local_b8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar18->Rotation).XY.m128d_f64 + 1);
  local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Rotation).XY.m128d_f64 + 0xc);
  local_b8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar18->Rotation).ZW.m128d_f64;
  local_b8.Rotation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Rotation).ZW.m128d_f64 + 4);
  local_b8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar18->Rotation).ZW.m128d_f64 + 1);
  local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Rotation).ZW.m128d_f64 + 0xc);
  local_b8.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar18->Translation).XY.m128d_f64;
  local_b8.Translation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Translation).XY.m128d_f64 + 4);
  local_b8.Translation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((pTVar18->Translation).XY.m128d_f64 + 1);
  local_b8.Translation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Translation).XY.m128d_f64 + 0xc);
  local_b8.Translation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar18->Translation).ZW.m128d_f64;
  local_b8.Translation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Translation).ZW.m128d_f64 + 4);
  local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
       *(undefined4 *)((pTVar18->Translation).ZW.m128d_f64 + 1);
  local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Translation).ZW.m128d_f64 + 0xc);
  local_b8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar18->Scale3D).XY.m128d_f64;
  local_b8.Scale3D.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Scale3D).XY.m128d_f64 + 4);
  local_b8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar18->Scale3D).XY.m128d_f64 + 1);
  local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Scale3D).XY.m128d_f64 + 0xc);
  local_b8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar18->Scale3D).ZW.m128d_f64;
  local_b8.Scale3D.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Scale3D).ZW.m128d_f64 + 4);
  local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar18->Scale3D).ZW.m128d_f64 + 1);
  local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar18->Scale3D).ZW.m128d_f64 + 0xc);
LAB_14a594992:
  if (param_3 == LocalSpace) {
    uVar17 = (uint)param_8->Index;
    if (param_8->Index == 0xffff) {
      uVar17 = 0xffffffff;
    }
    local_178.Rotation.XY.m128d_f64[0]._4_4_ = local_b8.Rotation.XY.m128d_f64[0]._4_4_;
    local_178.Rotation.XY.m128d_f64[0]._0_4_ = local_b8.Rotation.XY.m128d_f64[0]._0_4_;
    local_178.Rotation.XY.m128d_f64[1]._0_4_ = local_b8.Rotation.XY.m128d_f64[1]._0_4_;
    local_178.Rotation.XY.m128d_f64[1]._4_4_ = local_b8.Rotation.XY.m128d_f64[1]._4_4_;
    local_178.Rotation.ZW.m128d_f64[0]._4_4_ = local_b8.Rotation.ZW.m128d_f64[0]._4_4_;
    local_178.Rotation.ZW.m128d_f64[0]._0_4_ = local_b8.Rotation.ZW.m128d_f64[0]._0_4_;
    local_178.Rotation.ZW.m128d_f64[1]._0_4_ = local_b8.Rotation.ZW.m128d_f64[1]._0_4_;
    local_178.Rotation.ZW.m128d_f64[1]._4_4_ = local_b8.Rotation.ZW.m128d_f64[1]._4_4_;
    local_178.Translation.XY.m128d_f64[0]._4_4_ = local_b8.Translation.XY.m128d_f64[0]._4_4_;
    local_178.Translation.XY.m128d_f64[0]._0_4_ = local_b8.Translation.XY.m128d_f64[0]._0_4_;
    local_178.Translation.XY.m128d_f64[1]._0_4_ = local_b8.Translation.XY.m128d_f64[1]._0_4_;
    local_178.Translation.XY.m128d_f64[1]._4_4_ = local_b8.Translation.XY.m128d_f64[1]._4_4_;
    local_178.Translation.ZW.m128d_f64[0]._4_4_ = local_b8.Translation.ZW.m128d_f64[0]._4_4_;
    local_178.Translation.ZW.m128d_f64[0]._0_4_ = local_b8.Translation.ZW.m128d_f64[0]._0_4_;
    local_178.Translation.ZW.m128d_f64[1]._0_4_ = local_b8.Translation.ZW.m128d_f64[1]._0_4_;
    local_178.Translation.ZW.m128d_f64[1]._4_4_ = local_b8.Translation.ZW.m128d_f64[1]._4_4_;
    local_178.Scale3D.XY.m128d_f64[0]._4_4_ = local_b8.Scale3D.XY.m128d_f64[0]._4_4_;
    local_178.Scale3D.XY.m128d_f64[0]._0_4_ = local_b8.Scale3D.XY.m128d_f64[0]._0_4_;
    local_178.Scale3D.XY.m128d_f64[1]._0_4_ = local_b8.Scale3D.XY.m128d_f64[1]._0_4_;
    local_178.Scale3D.XY.m128d_f64[1]._4_4_ = local_b8.Scale3D.XY.m128d_f64[1]._4_4_;
    local_178.Scale3D.ZW.m128d_f64[0]._4_4_ = local_b8.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_178.Scale3D.ZW.m128d_f64[0]._0_4_ = local_b8.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = local_b8.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = local_b8.Scale3D.ZW.m128d_f64[1]._4_4_;
    URigHierarchy::SetLocalTransformByIndex(this,uVar17,&local_178,param_4,param_7,false,false);
    if ((param_4) &&
       (bVar15 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1), bVar15)) {
      if (param_8->Index != 0xffff) {
        uVar16 = (uint)param_8->Index;
      }
      local_178.Rotation.XY.m128d_f64[0]._4_4_ = local_b8.Rotation.XY.m128d_f64[0]._4_4_;
      local_178.Rotation.XY.m128d_f64[0]._0_4_ = local_b8.Rotation.XY.m128d_f64[0]._0_4_;
      local_178.Rotation.XY.m128d_f64[1]._4_4_ = local_b8.Rotation.XY.m128d_f64[1]._4_4_;
      local_178.Rotation.XY.m128d_f64[1]._0_4_ = local_b8.Rotation.XY.m128d_f64[1]._0_4_;
      local_178.Rotation.ZW.m128d_f64[0]._4_4_ = local_b8.Rotation.ZW.m128d_f64[0]._4_4_;
      local_178.Rotation.ZW.m128d_f64[0]._0_4_ = local_b8.Rotation.ZW.m128d_f64[0]._0_4_;
      local_178.Rotation.ZW.m128d_f64[1]._4_4_ = local_b8.Rotation.ZW.m128d_f64[1]._4_4_;
      local_178.Rotation.ZW.m128d_f64[1]._0_4_ = local_b8.Rotation.ZW.m128d_f64[1]._0_4_;
      local_178.Translation.XY.m128d_f64[0]._4_4_ = local_b8.Translation.XY.m128d_f64[0]._4_4_;
      local_178.Translation.XY.m128d_f64[0]._0_4_ = local_b8.Translation.XY.m128d_f64[0]._0_4_;
      local_178.Translation.XY.m128d_f64[1]._4_4_ = local_b8.Translation.XY.m128d_f64[1]._4_4_;
      local_178.Translation.XY.m128d_f64[1]._0_4_ = local_b8.Translation.XY.m128d_f64[1]._0_4_;
      local_178.Translation.ZW.m128d_f64[0]._4_4_ = local_b8.Translation.ZW.m128d_f64[0]._4_4_;
      local_178.Translation.ZW.m128d_f64[0]._0_4_ = local_b8.Translation.ZW.m128d_f64[0]._0_4_;
      local_178.Translation.ZW.m128d_f64[1]._4_4_ = local_b8.Translation.ZW.m128d_f64[1]._4_4_;
      local_178.Translation.ZW.m128d_f64[1]._0_4_ = local_b8.Translation.ZW.m128d_f64[1]._0_4_;
      local_178.Scale3D.XY.m128d_f64[0]._4_4_ = local_b8.Scale3D.XY.m128d_f64[0]._4_4_;
      local_178.Scale3D.XY.m128d_f64[0]._0_4_ = local_b8.Scale3D.XY.m128d_f64[0]._0_4_;
      local_178.Scale3D.XY.m128d_f64[1]._4_4_ = local_b8.Scale3D.XY.m128d_f64[1]._4_4_;
      local_178.Scale3D.XY.m128d_f64[1]._0_4_ = local_b8.Scale3D.XY.m128d_f64[1]._0_4_;
      local_178.Scale3D.ZW.m128d_f64[0]._4_4_ = local_b8.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_178.Scale3D.ZW.m128d_f64[0]._0_4_ = local_b8.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = local_b8.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = local_b8.Scale3D.ZW.m128d_f64[1]._0_4_;
      URigHierarchy::SetLocalTransformByIndex(this,uVar16,&local_178,false,param_7,false,false);
    }
  }
  else if (param_3 == GlobalSpace) {
    uVar17 = (uint)param_8->Index;
    if (param_8->Index == 0xffff) {
      uVar17 = 0xffffffff;
    }
    local_178.Rotation.XY.m128d_f64[0]._4_4_ = local_b8.Rotation.XY.m128d_f64[0]._4_4_;
    local_178.Rotation.XY.m128d_f64[0]._0_4_ = local_b8.Rotation.XY.m128d_f64[0]._0_4_;
    local_178.Rotation.XY.m128d_f64[1]._0_4_ = local_b8.Rotation.XY.m128d_f64[1]._0_4_;
    local_178.Rotation.XY.m128d_f64[1]._4_4_ = local_b8.Rotation.XY.m128d_f64[1]._4_4_;
    local_178.Rotation.ZW.m128d_f64[0]._4_4_ = local_b8.Rotation.ZW.m128d_f64[0]._4_4_;
    local_178.Rotation.ZW.m128d_f64[0]._0_4_ = local_b8.Rotation.ZW.m128d_f64[0]._0_4_;
    local_178.Rotation.ZW.m128d_f64[1]._0_4_ = local_b8.Rotation.ZW.m128d_f64[1]._0_4_;
    local_178.Rotation.ZW.m128d_f64[1]._4_4_ = local_b8.Rotation.ZW.m128d_f64[1]._4_4_;
    local_178.Translation.XY.m128d_f64[0]._4_4_ = local_b8.Translation.XY.m128d_f64[0]._4_4_;
    local_178.Translation.XY.m128d_f64[0]._0_4_ = local_b8.Translation.XY.m128d_f64[0]._0_4_;
    local_178.Translation.XY.m128d_f64[1]._0_4_ = local_b8.Translation.XY.m128d_f64[1]._0_4_;
    local_178.Translation.XY.m128d_f64[1]._4_4_ = local_b8.Translation.XY.m128d_f64[1]._4_4_;
    local_178.Translation.ZW.m128d_f64[0]._4_4_ = local_b8.Translation.ZW.m128d_f64[0]._4_4_;
    local_178.Translation.ZW.m128d_f64[0]._0_4_ = local_b8.Translation.ZW.m128d_f64[0]._0_4_;
    local_178.Translation.ZW.m128d_f64[1]._0_4_ = local_b8.Translation.ZW.m128d_f64[1]._0_4_;
    local_178.Translation.ZW.m128d_f64[1]._4_4_ = local_b8.Translation.ZW.m128d_f64[1]._4_4_;
    local_178.Scale3D.XY.m128d_f64[0]._4_4_ = local_b8.Scale3D.XY.m128d_f64[0]._4_4_;
    local_178.Scale3D.XY.m128d_f64[0]._0_4_ = local_b8.Scale3D.XY.m128d_f64[0]._0_4_;
    local_178.Scale3D.XY.m128d_f64[1]._0_4_ = local_b8.Scale3D.XY.m128d_f64[1]._0_4_;
    local_178.Scale3D.XY.m128d_f64[1]._4_4_ = local_b8.Scale3D.XY.m128d_f64[1]._4_4_;
    local_178.Scale3D.ZW.m128d_f64[0]._4_4_ = local_b8.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_178.Scale3D.ZW.m128d_f64[0]._0_4_ = local_b8.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = local_b8.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = local_b8.Scale3D.ZW.m128d_f64[1]._4_4_;
    URigHierarchy::SetGlobalTransformByIndex(this,uVar17,&local_178,param_4,param_7,false,false);
    if ((param_4) &&
       (bVar15 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1), bVar15)) {
      if (param_8->Index != 0xffff) {
        uVar16 = (uint)param_8->Index;
      }
      local_178.Rotation.XY.m128d_f64[0]._4_4_ = local_b8.Rotation.XY.m128d_f64[0]._4_4_;
      local_178.Rotation.XY.m128d_f64[0]._0_4_ = local_b8.Rotation.XY.m128d_f64[0]._0_4_;
      local_178.Rotation.XY.m128d_f64[1]._4_4_ = local_b8.Rotation.XY.m128d_f64[1]._4_4_;
      local_178.Rotation.XY.m128d_f64[1]._0_4_ = local_b8.Rotation.XY.m128d_f64[1]._0_4_;
      local_178.Rotation.ZW.m128d_f64[0]._4_4_ = local_b8.Rotation.ZW.m128d_f64[0]._4_4_;
      local_178.Rotation.ZW.m128d_f64[0]._0_4_ = local_b8.Rotation.ZW.m128d_f64[0]._0_4_;
      local_178.Rotation.ZW.m128d_f64[1]._4_4_ = local_b8.Rotation.ZW.m128d_f64[1]._4_4_;
      local_178.Rotation.ZW.m128d_f64[1]._0_4_ = local_b8.Rotation.ZW.m128d_f64[1]._0_4_;
      local_178.Translation.XY.m128d_f64[0]._4_4_ = local_b8.Translation.XY.m128d_f64[0]._4_4_;
      local_178.Translation.XY.m128d_f64[0]._0_4_ = local_b8.Translation.XY.m128d_f64[0]._0_4_;
      local_178.Translation.XY.m128d_f64[1]._4_4_ = local_b8.Translation.XY.m128d_f64[1]._4_4_;
      local_178.Translation.XY.m128d_f64[1]._0_4_ = local_b8.Translation.XY.m128d_f64[1]._0_4_;
      local_178.Translation.ZW.m128d_f64[0]._4_4_ = local_b8.Translation.ZW.m128d_f64[0]._4_4_;
      local_178.Translation.ZW.m128d_f64[0]._0_4_ = local_b8.Translation.ZW.m128d_f64[0]._0_4_;
      local_178.Translation.ZW.m128d_f64[1]._4_4_ = local_b8.Translation.ZW.m128d_f64[1]._4_4_;
      local_178.Translation.ZW.m128d_f64[1]._0_4_ = local_b8.Translation.ZW.m128d_f64[1]._0_4_;
      local_178.Scale3D.XY.m128d_f64[0]._4_4_ = local_b8.Scale3D.XY.m128d_f64[0]._4_4_;
      local_178.Scale3D.XY.m128d_f64[0]._0_4_ = local_b8.Scale3D.XY.m128d_f64[0]._0_4_;
      local_178.Scale3D.XY.m128d_f64[1]._4_4_ = local_b8.Scale3D.XY.m128d_f64[1]._4_4_;
      local_178.Scale3D.XY.m128d_f64[1]._0_4_ = local_b8.Scale3D.XY.m128d_f64[1]._0_4_;
      local_178.Scale3D.ZW.m128d_f64[0]._4_4_ = local_b8.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_178.Scale3D.ZW.m128d_f64[0]._0_4_ = local_b8.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = local_b8.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = local_b8.Scale3D.ZW.m128d_f64[1]._0_4_;
      URigHierarchy::SetGlobalTransformByIndex(this,uVar16,&local_178,false,param_7,false,false);
    }
  }
  return;
}

