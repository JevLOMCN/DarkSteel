// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4e69f0

UScriptStruct * __cdecl FRigUnit_FindItemsWithMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata,(UObject *)pUVar1,
                         L"RigUnit_FindItemsWithMetadata");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadata.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadata.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e6b80

UScriptStruct * __thiscall
FRigUnit_FindItemsWithMetadata::GetExecuteContextStruct(FRigUnit_FindItemsWithMetadata *this)

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

// Execute @ 14a4e71a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FindItemsWithMetadata::Execute(FRigUnit_FindItemsWithMetadata *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Name,this->Type,this->NameSpace,
                &this->Items);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a5278e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FindItemsWithMetadata::Execute
          (FRigUnit_FindItemsWithMetadata *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Name,this->Type,this->NameSpace,&this->Items);
  return;
}

// RigVMExecute @ 14a53ee60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FindItemsWithMetadata::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetadataType EVar1;
  ERigMetaDataNameSpace EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  ERigMetadataType *pEVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMMemoryHandle *pFVar9;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar10;
  FControlRigExecuteContext *pFVar11;
  
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
  pTVar10 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar6,EVar1,EVar2,pTVar10);
  return;
}

// StaticExecute @ 14a571450

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FindItemsWithMetadata::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigMetadataType param_3,
          ERigMetaDataNameSpace param_4,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_5)

{
  URigHierarchy *this;
  FName FVar1;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined7 uStack_4f;
  code *local_48 [5];
  undefined8 *local_20;
  
  pTVar2 = param_5;
  this = param_1->Hierarchy;
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  if (this != (URigHierarchy *)0x0) {
    FControlRigExecuteContext::AdaptMetadataName
              (param_1,(ERigMetaDataNameSpace)&param_5,(FName *)(ulonglong)param_4);
    pTVar3 = param_5;
    FVar1 = *param_2;
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x28,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadata::StaticExecute'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_20[1] = pTVar2;
    *(FName *)(local_20 + 2) = FVar1;
    local_20[3] = pTVar3;
    local_20[4] = CONCAT71(uStack_4f,param_3);
    if (local_20 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRigUnit_FindItemsWithMetadata::StaticExecute'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                    ::Call;
    }
    URigHierarchy::Traverse(this,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_48,true)
    ;
  }
  return;
}

