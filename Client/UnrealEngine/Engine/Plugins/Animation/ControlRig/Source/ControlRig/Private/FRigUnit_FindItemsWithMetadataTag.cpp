// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f4090

UScriptStruct * __cdecl FRigUnit_FindItemsWithMetadataTag::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadataTag.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadataTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag,
                         (UObject *)pUVar1,L"RigUnit_FindItemsWithMetadataTag");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadataTag.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FindItemsWithMetadataTag.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f4110

UScriptStruct * __thiscall
FRigUnit_FindItemsWithMetadataTag::GetExecuteContextStruct(FRigUnit_FindItemsWithMetadataTag *this)

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

// Execute @ 14a4f4820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FindItemsWithMetadataTag::Execute(FRigUnit_FindItemsWithMetadataTag *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Tag,this->NameSpace,&this->Items);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// operator() @ 14a51b420

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FRigUnit_FindItemsWithMetadataTag::StaticExecute'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  longlong *plVar1;
  FRigBaseMetadata *pFVar2;
  longlong *plVar3;
  FName local_res18 [2];
  
  FLazyName::Resolve(&URigHierarchy::TagMetadataName);
  pFVar2 = FRigBaseElement::GetMetadata(param_1,local_res18,NameArray);
  if ((pFVar2 != (FRigBaseMetadata *)0x0) && (pFVar2->Type == NameArray)) {
    plVar3 = (longlong *)pFVar2[1]._padding_;
    plVar1 = plVar3 + (int)pFVar2[1].Name.ComparisonIndex.Value;
    if (plVar3 != plVar1) {
      while (*plVar3 != *(longlong *)((longlong)this + 8)) {
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar1) {
          *param_2 = true;
          return;
        }
      }
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                (*(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> **)this,&param_1->Key);
    }
  }
  *param_2 = true;
  return;
}

// Execute @ 14a527920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FindItemsWithMetadataTag::Execute
          (FRigUnit_FindItemsWithMetadataTag *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Tag,this->NameSpace,&this->Items);
  return;
}

// RigVMExecute @ 14a53f000

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FindItemsWithMetadataTag::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  FControlRigExecuteContext *pFVar9;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if (iVar2 < 2) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar3[1].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  EVar1 = *pEVar8;
  if (iVar2 < 3) {
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
  pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[2].Ptr;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar7,EVar1,pTVar4);
  return;
}

// StaticExecute @ 14a571580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FindItemsWithMetadataTag::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigMetaDataNameSpace param_3,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_4)

{
  URigHierarchy *this;
  undefined8 local_res8;
  code *local_48 [2];
  undefined **local_38;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  this = param_1->Hierarchy;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if (this != (URigHierarchy *)0x0) {
    FControlRigExecuteContext::AdaptMetadataName
              (param_1,(ERigMetaDataNameSpace)&local_res8,(FName *)(ulonglong)param_3);
    local_20 = 0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTag::StaticExecute'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_28 = local_res8;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRigUnit_FindItemsWithMetadataTag::StaticExecute'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                  ::Call;
    local_30 = param_4;
    URigHierarchy::Traverse(this,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_48,true)
    ;
  }
  return;
}

