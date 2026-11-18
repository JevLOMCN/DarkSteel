// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4e9fd0

UScriptStruct * __cdecl FRigUnit_SetFloatAnimationChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetFloatAnimationChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetFloatAnimationChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel,
                         (UObject *)pUVar1,L"RigUnit_SetFloatAnimationChannel");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetFloatAnimationChannel.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetFloatAnimationChannel.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ea2f0

UScriptStruct * __thiscall
FRigUnit_SetFloatAnimationChannel::GetExecuteContextStruct(FRigUnit_SetFloatAnimationChannel *this)

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

// Execute @ 14a4ea900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetFloatAnimationChannel::Execute(FRigUnit_SetFloatAnimationChannel *this)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStackY_2a8 [32];
  undefined1 local_278 [456];
  URigHierarchy *local_b0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  if ((FRigVMNameCache *)local_278._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_278._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  lVar2 = this->_padding_;
  fVar1 = this->Value;
  bVar3 = FRigUnit_GetAnimationChannelBase::UpdateCache
                    (local_b0,(FName *)&this->_padding_,(FName *)&this->_padding_,
                     (FRigElementKey *)((longlong)&this->_padding_ + 4),(int *)&this->_padding_);
  if (bVar3) {
    FRigUnit_SetFloatAnimationChannelFromItem::StaticExecute
              ((FControlRigExecuteContext *)local_278,fVar1,
               (FRigElementKey *)((longlong)&this->_padding_ + 4),SUB81(lVar2,0));
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  return;
}

// Execute @ 14a52cbf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetFloatAnimationChannel::Execute
          (FRigUnit_SetFloatAnimationChannel *this,FControlRigExecuteContext *param_1)

{
  FRigElementKey *pFVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = this->_padding_;
  pFVar1 = (FRigElementKey *)((longlong)&this->_padding_ + 4);
  fVar2 = this->Value;
  bVar4 = FRigUnit_GetAnimationChannelBase::UpdateCache
                    (param_1->Hierarchy,(FName *)&this->_padding_,(FName *)&this->_padding_,pFVar1,
                     (int *)&this->_padding_);
  if (bVar4) {
    FRigUnit_SetFloatAnimationChannelFromItem::StaticExecute(param_1,fVar2,pFVar1,SUB81(lVar3,0));
  }
  return;
}

// RigVMExecute @ 14a552610

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetFloatAnimationChannel::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  FName *pFVar6;
  FName *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  FRigVMSlice *pFVar10;
  FRigElementKey *pFVar11;
  int *piVar12;
  FControlRigExecuteContext *pFVar13;
  
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
    pfVar5 = (float *)pFVar8->Ptr;
  }
  else {
    pfVar5 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  fVar1 = *pfVar5;
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
    pFVar6 = (FName *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
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
    pFVar7 = (FName *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FRigElementKey *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar12 = (int *)FRigVMMemoryHandle::GetData_Internal
                             (pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,fVar1,pFVar6,pFVar7,bVar4,pFVar11,piVar12);
  return;
}

// StaticExecute @ 14a592810

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetFloatAnimationChannel::StaticExecute
          (FControlRigExecuteContext *param_1,float param_2,FName *param_3,FName *param_4,
          bool param_5,FRigElementKey *param_6,int *param_7)

{
  bool bVar1;
  
  bVar1 = FRigUnit_GetAnimationChannelBase::UpdateCache
                    (param_1->Hierarchy,param_3,param_4,param_6,param_7);
  if (bVar1) {
    FRigUnit_SetFloatAnimationChannelFromItem::StaticExecute(param_1,param_2,param_6,param_5);
  }
  return;
}

