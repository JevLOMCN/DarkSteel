// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a478900

UScriptStruct * __cdecl FRigUnit_GetTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetTransform.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTransform,(UObject *)pUVar1,
                         L"RigUnit_GetTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetTransform.OuterSingleton,&local_18
              );
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetTransform.OuterSingleton;
}

// Execute @ 14a528a30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetTransform::Execute(FRigUnit_GetTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,this->Space,this->bInitial,&this->Transform,&this->CachedIndex);
  return;
}

// Execute @ 14a528a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetTransform::Execute(FRigUnit_GetTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,this->Space,this->bInitial,
                &this->Transform,&this->CachedIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530ce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetTransform::GetExecuteContextStruct(FRigUnit_GetTransform *this)

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

// GetUnitLabel @ 14a531770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetTransform::GetUnitLabel(FRigUnit_GetTransform *this,FString *__return_storage_ptr__)

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
  ::FString::PrintfImpl(__return_storage_ptr__,L"Get Transform - %s%s");
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// RigVMExecute @ 14a543950

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  ERigVMTransformSpace *pEVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  TTransform<double> *pTVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  FControlRigExecuteContext *pFVar12;
  
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
    pFVar5 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
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
    pEVar6 = pFVar8[1].Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  EVar1 = *pEVar6;
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
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  bVar4 = (bool)*puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar5,EVar1,bVar4,pTVar9,pFVar11);
  return;
}

// StaticExecute @ 14a578690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,ERigVMTransformSpace param_3,
          bool param_4,TTransform<double> *param_5,FCachedRigElement *param_6)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  bVar1 = FCachedRigElement::UpdateCache(param_6,param_2,this);
  if (!bVar1) {
    return;
  }
  if (param_4) {
    if (param_3 != LocalSpace) {
      if (param_3 != GlobalSpace) {
        return;
      }
      uVar2 = 0xffffffff;
      if (param_6->Index != 0xffff) {
        uVar2 = (uint)param_6->Index;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_98,uVar2,true);
      goto LAB_14a57879b;
    }
    uVar2 = 0xffffffff;
    if (param_6->Index != 0xffff) {
      uVar2 = (uint)param_6->Index;
    }
    bVar1 = true;
  }
  else {
    if (param_3 != LocalSpace) {
      if (param_3 != GlobalSpace) {
        return;
      }
      uVar2 = 0xffffffff;
      if (param_6->Index != 0xffff) {
        uVar2 = (uint)param_6->Index;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_98,uVar2,false);
      goto LAB_14a57879b;
    }
    uVar2 = 0xffffffff;
    if (param_6->Index != 0xffff) {
      uVar2 = (uint)param_6->Index;
    }
    bVar1 = false;
  }
  URigHierarchy::GetLocalTransformByIndex(this,&local_98,uVar2,bVar1);
LAB_14a57879b:
  (param_5->Rotation).XY.m128d_f64[0] = local_98.Rotation.XY.m128d_f64[0];
  (param_5->Rotation).XY.m128d_f64[1] = local_98.Rotation.XY.m128d_f64[1];
  (param_5->Rotation).ZW.m128d_f64[0] = local_98.Rotation.ZW.m128d_f64[0];
  (param_5->Rotation).ZW.m128d_f64[1] = local_98.Rotation.ZW.m128d_f64[1];
  (param_5->Translation).XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
  (param_5->Translation).XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
  (param_5->Translation).ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
  (param_5->Translation).ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
  (param_5->Scale3D).XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
  (param_5->Scale3D).XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
  (param_5->Scale3D).ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0];
  (param_5->Scale3D).ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1];
  return;
}

