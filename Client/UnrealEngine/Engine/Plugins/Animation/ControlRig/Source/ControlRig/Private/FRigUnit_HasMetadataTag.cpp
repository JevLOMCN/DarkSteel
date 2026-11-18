// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f0a30

UScriptStruct * __cdecl FRigUnit_HasMetadataTag::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HasMetadataTag.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HasMetadataTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag,(UObject *)pUVar1,
                         L"RigUnit_HasMetadataTag");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HasMetadataTag.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HasMetadataTag.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f0c00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HasMetadataTag::GetExecuteContextStruct(FRigUnit_HasMetadataTag *this)

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

// Execute @ 14a4f0eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_HasMetadataTag::Execute(FRigUnit_HasMetadataTag *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,&this->Tag,this->NameSpace,
                &this->Found,&this->CachedIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a528f70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HasMetadataTag::Execute(FRigUnit_HasMetadataTag *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->Tag,this->NameSpace,&this->Found,&this->CachedIndex);
  return;
}

// RigVMExecute @ 14a544b90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HasMetadataTag::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  FName *pFVar6;
  ERigMetaDataNameSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  bool *pbVar9;
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
    pEVar7 = pFVar8[2].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  EVar1 = *pEVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pbVar9 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar5,pFVar6,EVar1,pbVar9,pFVar11);
  return;
}

// StaticExecute @ 14a5791f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HasMetadataTag::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FName *param_3,
          ERigMetaDataNameSpace param_4,bool *param_5,FCachedRigElement *param_6)

{
  longlong *plVar1;
  URigHierarchy *this;
  bool *pbVar2;
  FCachedRigElement *pFVar3;
  bool bVar4;
  uint uVar5;
  FRigBaseElement *this_00;
  FRigBaseMetadata *pFVar6;
  longlong *plVar7;
  longlong local_res8;
  
  pFVar3 = param_6;
  pbVar2 = param_5;
  *param_5 = false;
  this = param_1->Hierarchy;
  if ((this != (URigHierarchy *)0x0) &&
     (bVar4 = FCachedRigElement::UpdateCache(param_6,param_2,this), bVar4)) {
    uVar5 = 0xffffffff;
    if (pFVar3->Index != 0xffff) {
      uVar5 = (uint)pFVar3->Index;
    }
    this_00 = URigHierarchy::Get(this,uVar5);
    if (this_00 != (FRigBaseElement *)0x0) {
      FLazyName::Resolve(&URigHierarchy::TagMetadataName);
      pFVar6 = FRigBaseElement::GetMetadata(this_00,(FName *)&param_5,NameArray);
      if ((pFVar6 != (FRigBaseMetadata *)0x0) && (pFVar6->Type == NameArray)) {
        FControlRigExecuteContext::AdaptMetadataName
                  (param_1,(ERigMetaDataNameSpace)&local_res8,(FName *)(ulonglong)param_4);
        plVar7 = (longlong *)pFVar6[1]._padding_;
        plVar1 = plVar7 + (int)pFVar6[1].Name.ComparisonIndex.Value;
        for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
          if (*plVar7 == local_res8) {
            bVar4 = true;
            goto LAB_14a5792d0;
          }
        }
        bVar4 = false;
LAB_14a5792d0:
        *pbVar2 = bVar4;
      }
    }
  }
  return;
}

