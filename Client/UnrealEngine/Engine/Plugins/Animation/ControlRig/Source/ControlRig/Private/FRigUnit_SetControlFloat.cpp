// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4cfe00

UScriptStruct * __cdecl FRigUnit_SetControlFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlFloat,(UObject *)pUVar1,
                         L"RigUnit_SetControlFloat");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlFloat.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlFloat.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4cfe80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlFloat::GetExecuteContextStruct(FRigUnit_SetControlFloat *this)

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

// Execute @ 14a4d0070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlFloat::Execute(FRigUnit_SetControlFloat *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Weight,&this->FloatValue
                ,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52c940

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlFloat::Execute(FRigUnit_SetControlFloat *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Weight,&this->FloatValue,&this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a5510b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlFloat::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  float *pfVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigVMSlice *pFVar8;
  FCachedRigElement *pFVar9;
  FControlRigExecuteContext *pFVar10;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar6 = (float *)pFVar7[1].Ptr;
  }
  else {
    pfVar6 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  fVar1 = *pfVar6;
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
  pfVar6 = (float *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar9 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar5,fVar1,pfVar6,pFVar9);
  return;
}

// StaticExecute @ 14a590e20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlFloat::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,float param_3,float *param_4,
          FCachedRigElement *param_5)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  FRigElementKey local_148;
  FRigControlValue local_138;
  FRigControlValue local_b4;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_148.Name = *param_2;
    local_148.Type = Control;
    bVar1 = FCachedRigElement::UpdateCache(param_5,&local_148,this);
    if (bVar1) {
      uVar3 = 0xffffffff;
      if (__real_322bcc77 <
          (float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        uVar2 = 0xffffffff;
        if (param_5->Index != 0xffff) {
          uVar2 = (uint)param_5->Index;
        }
        URigHierarchy::GetControlValueByIndex(this,&local_b4,uVar2,Current);
        if (__real_3f800000 <= param_3) {
          param_3 = __real_3f800000;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        local_138.FloatStorage.Float00 =
             param_3 * (*param_4 - local_b4.FloatStorage.Float00) + local_b4.FloatStorage.Float00;
      }
      else {
        local_138.FloatStorage.Float00 = *param_4;
      }
      local_138.FloatStorage.Float01 = 0.0;
      local_138.FloatStorage.Float32_2 = 0.0;
      local_138.FloatStorage.Float33_2 = 0.0;
      local_138.FloatStorage.Float30_2 = 0.0;
      local_138.FloatStorage.Float31_2 = 0.0;
      local_138.FloatStorage.Float22_2 = 0.0;
      local_138.FloatStorage.Float23_2 = 0.0;
      local_138.FloatStorage.Float20_2 = 0.0;
      local_138.FloatStorage.Float21_2 = 0.0;
      local_138.FloatStorage.Float12_2 = 0.0;
      local_138.FloatStorage.Float13_2 = 0.0;
      local_138.FloatStorage.Float10_2 = 0.0;
      local_138.FloatStorage.Float11_2 = 0.0;
      local_138.FloatStorage.Float02_2 = 0.0;
      local_138.FloatStorage.Float03_2 = 0.0;
      local_138.FloatStorage.Float00_2 = 0.0;
      local_138.FloatStorage.Float01_2 = 0.0;
      local_138.FloatStorage.Float32 = 0.0;
      local_138.FloatStorage.Float33 = 0.0;
      local_138.FloatStorage.Float30 = 0.0;
      local_138.FloatStorage.Float31 = 0.0;
      local_138.FloatStorage.Float22 = 0.0;
      local_138.FloatStorage.Float23 = 0.0;
      local_138.FloatStorage.Float20 = 0.0;
      local_138.FloatStorage.Float21 = 0.0;
      local_138.FloatStorage.Float12 = 0.0;
      local_138.FloatStorage.Float13 = 0.0;
      local_138.FloatStorage.Float10 = 0.0;
      local_138.FloatStorage.Float11 = 0.0;
      local_138.FloatStorage.Float02 = 0.0;
      local_138.FloatStorage.Float03 = 0.0;
      local_138.FloatStorage.bValid = true;
      local_138.FloatStorage._129_3_ = 0;
      if (param_5->Index != 0xffff) {
        uVar3 = (uint)param_5->Index;
      }
      URigHierarchy::SetControlValue(this,uVar3,&local_138,Current,false,false);
    }
  }
  return;
}

