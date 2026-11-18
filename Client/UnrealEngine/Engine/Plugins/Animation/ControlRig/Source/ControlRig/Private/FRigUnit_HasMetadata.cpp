// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4e56f0

UScriptStruct * __cdecl FRigUnit_HasMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HasMetadata.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HasMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HasMetadata,(UObject *)pUVar1,
                         L"RigUnit_HasMetadata");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HasMetadata.OuterSingleton,&local_18)
    ;
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HasMetadata.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e5770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_HasMetadata::GetExecuteContextStruct(FRigUnit_HasMetadata *this)

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

// Execute @ 14a4e5b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_HasMetadata::Execute(FRigUnit_HasMetadata *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,&this->Name,this->Type,
                this->NameSpace,&this->Found,&this->CachedIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a528f20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HasMetadata::Execute(FRigUnit_HasMetadata *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->Name,this->Type,this->NameSpace,&this->Found,
                &this->CachedIndex);
  return;
}

// RigVMExecute @ 14a544980

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HasMetadata::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetadataType EVar1;
  ERigMetaDataNameSpace EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  FName *pFVar7;
  ERigMetadataType *pEVar8;
  FRigVMMemoryHandle *pFVar9;
  ERigMetaDataNameSpace *pEVar10;
  bool *pbVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  FControlRigExecuteContext *pFVar14;
  
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
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
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
    pFVar7 = (FName *)pFVar9[1].Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
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
  EVar1 = *pEVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  EVar2 = *pEVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pbVar11 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,pFVar6,pFVar7,EVar1,EVar2,pbVar11,pFVar13);
  return;
}

// StaticExecute @ 14a579110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HasMetadata::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FName *param_3,
          ERigMetadataType param_4,ERigMetaDataNameSpace param_5,bool *param_6,
          FCachedRigElement *param_7)

{
  URigHierarchy *this;
  bool *pbVar1;
  FCachedRigElement *pFVar2;
  bool bVar3;
  uint uVar4;
  FRigBaseElement *this_00;
  FRigBaseMetadata *pFVar5;
  
  pFVar2 = param_7;
  pbVar1 = param_6;
  this = param_1->Hierarchy;
  *param_6 = false;
  if ((this != (URigHierarchy *)0x0) &&
     (bVar3 = FCachedRigElement::UpdateCache(param_7,param_2,this), bVar3)) {
    uVar4 = 0xffffffff;
    if (pFVar2->Index != 0xffff) {
      uVar4 = (uint)pFVar2->Index;
    }
    this_00 = URigHierarchy::Get(this,uVar4);
    if (this_00 != (FRigBaseElement *)0x0) {
      FControlRigExecuteContext::AdaptMetadataName
                (param_1,(ERigMetaDataNameSpace)&param_6,(FName *)(ulonglong)param_5);
      pFVar5 = FRigBaseElement::GetMetadata(this_00,(FName *)&param_6,param_4);
      *pbVar1 = pFVar5 != (FRigBaseMetadata *)0x0;
      if (pFVar5 == (FRigBaseMetadata *)0x0) {
        pFVar5 = FRigBaseElement::GetMetadata(this_00,param_3,param_4);
        *pbVar1 = pFVar5 != (FRigBaseMetadata *)0x0;
      }
    }
  }
  return;
}

