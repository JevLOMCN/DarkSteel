// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4e4ba0

UScriptStruct * __cdecl FRigUnit_RemoveAllMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RemoveAllMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_RemoveAllMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata,(UObject *)pUVar1,
                         L"RigUnit_RemoveAllMetadata");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_RemoveAllMetadata.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_RemoveAllMetadata.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e4c20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_RemoveAllMetadata::GetExecuteContextStruct(FRigUnit_RemoveAllMetadata *this)

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

// Execute @ 14a4e5060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_RemoveAllMetadata::Execute(FRigUnit_RemoveAllMetadata *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,this->NameSpace,&this->Removed,
                &this->CachedIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52beb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RemoveAllMetadata::Execute
          (FRigUnit_RemoveAllMetadata *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,this->NameSpace,&this->Removed,&this->CachedIndex);
  return;
}

// RigVMExecute @ 14a54eb30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_RemoveAllMetadata::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  int iVar2;
  bool *pbVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  ERigMetaDataNameSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FControlRigExecuteContext *pFVar11;
  
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
    pFVar6 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
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
  pbVar3 = (bool *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar6,EVar1,pbVar3,pFVar10);
  return;
}

// StaticExecute @ 14a58b8a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_RemoveAllMetadata::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,ERigMetaDataNameSpace param_3,
          bool *param_4,FCachedRigElement *param_5)

{
  FName *pFVar1;
  URigHierarchy *this;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  FRigBaseElement *this_00;
  FString *pFVar5;
  int iVar6;
  ForAnyElementType this_01;
  int iVar7;
  undefined1 local_res8 [8];
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  this = param_1->Hierarchy;
  *param_4 = false;
  if ((this != (URigHierarchy *)0x0) &&
     (bVar3 = FCachedRigElement::UpdateCache(param_5,param_2,this), bVar3)) {
    uVar4 = 0xffffffff;
    if (param_5->Index != 0xffff) {
      uVar4 = (uint)param_5->Index;
    }
    this_00 = URigHierarchy::Get(this,uVar4);
    if (this_00 != (FRigBaseElement *)0x0) {
      if (param_3 == None) {
        bVar3 = FRigBaseElement::RemoveAllMetadata(this_00);
        *param_4 = bVar3;
      }
      else {
        local_58.Data.ArrayNum = (this_00->Key).Name.Number;
        local_58.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&this_00->Key;
        URigHierarchy::GetMetadataNames(this,&local_48,(FRigElementKey *)&local_58);
        *param_4 = false;
        pFVar5 = FControlRigExecuteContext::GetElementModulePrefix(param_1,param_3);
        ::FString::FString(&local_38,pFVar5);
        iVar6 = local_48.ArrayNum;
        pFVar1 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar6 * 8);
        this_01.Data = local_48.AllocatorInstance.Data;
        while( true ) {
          if (local_48.ArrayNum != iVar6) {
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if ((FName *)this_01.Data == pFVar1) break;
          pFVar5 = ::FName::ToString((FName *)this_01.Data,&local_58);
          iVar7 = local_38.Data.ArrayNum + -1;
          FVar2.Data = local_38.Data.AllocatorInstance.Data;
          if (local_38.Data.ArrayNum == 0) {
            iVar7 = 0;
            FVar2.Data = (FScriptContainerElement *)L"";
          }
          bVar3 = ::FString::StartsWith(pFVar5,(wchar_t *)FVar2.Data,iVar7,CaseSensitive);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar3) &&
             (bVar3 = FRigBaseElement::RemoveMetadata(this_00,(FName *)this_01.Data), bVar3)) {
            *param_4 = true;
          }
          this_01.Data = this_01.Data + 8;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

