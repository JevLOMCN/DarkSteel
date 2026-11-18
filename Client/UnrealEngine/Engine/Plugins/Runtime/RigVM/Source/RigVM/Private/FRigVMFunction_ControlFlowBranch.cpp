// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a1756c0

UScriptStruct * __cdecl FRigVMFunction_ControlFlowBranch::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_ControlFlowBranch.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_ControlFlowBranch.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch,
                         (UObject *)pUVar1,L"RigVMFunction_ControlFlowBranch");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_ControlFlowBranch.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_ControlFlowBranch.OuterSingleton;
}

// GetExecuteContextStruct @ 14a175770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigVMFunction_ControlFlowBranch::GetExecuteContextStruct(FRigVMFunction_ControlFlowBranch *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a1758d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_ControlFlowBranch::Execute(FRigVMFunction_ControlFlowBranch *this)

{
  (**(code **)((this->ExecuteContext)._padding_ + 8))(&this->ExecuteContext);
  StaticExecute(&this->ExecuteContext,this->Condition,&this->BlockToRun);
  return;
}

// GetControlFlowBlocks_Impl @ 14a175910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl(FRigVMFunction_ControlFlowBranch *this)

{
  FName *pFVar1;
  undefined1 auStackY_78 [32];
  FName local_38;
  FName local_30;
  FName FStack_28;
  FName local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_38,4,L"True",FNAME_Add);
      local_30 = *pFVar1;
      pFVar1 = ::FName::FName(&local_38,5,L"False",FNAME_Add);
      FStack_28 = *pFVar1;
      FLazyName::Resolve(&FRigVMStruct::ForLoopCompletedPinName);
      _Blocks = (FName *)0x0;
      _DAT_1552a5048 = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,3,0,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl(void)const___ptr64'
                          ::__l2::Blocks,3,(int *)&DAT_1552a504c);
      pFVar1 = _Blocks;
      *_Blocks = local_30;
      pFVar1[1] = FStack_28;
      pFVar1[2] = local_20;
      atexit(`FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl'::__l2::
             _dynamic_atexit_destructor_for__Blocks__);
      _Init_thread_footer(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<FName,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl(void)const___ptr64'
              ::__l2::Blocks;
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ControlFlowBranch::GetControlFlowBlocks_Impl(void)const___ptr64'
          ::__l2::Blocks;
}

// ~FRigVMFunction_ControlFlowBranch @ 14a191700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_ControlFlowBranch::~FRigVMFunction_ControlFlowBranch
          (FRigVMFunction_ControlFlowBranch *this)

{
  FScriptContainerElement *pFVar1;
  
  (this->Completed)._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  pFVar1 = (this->Completed).AdditionalTraitMemoryHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Completed).Traits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Completed).RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController)
  ;
  (this->False)._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  pFVar1 = (this->False).AdditionalTraitMemoryHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->False).Traits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->False).RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  (this->True)._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  pFVar1 = (this->True).AdditionalTraitMemoryHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->True).Traits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->True).RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  (this->ExecuteContext)._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  pFVar1 = (this->ExecuteContext).AdditionalTraitMemoryHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecuteContext).Traits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExecuteContext).RuntimeSettings.LogFunction.SharedReferenceCount.
             ReferenceController);
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a19e080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_ControlFlowBranch::Execute
          (FRigVMFunction_ControlFlowBranch *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,this->Condition,&this->BlockToRun);
  return;
}

// RigVMExecute @ 14a1b6f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_ControlFlowBranch::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  FName *pFVar7;
  FRigVMExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar2->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  bVar4 = (bool)*puVar6;
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar2[1].Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,bVar4,pFVar7);
  return;
}

// StaticExecute @ 14a1da0e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_ControlFlowBranch::StaticExecute
          (FRigVMExecuteContext *param_1,bool param_2,FName *param_3)

{
  int iVar1;
  FName *pFVar2;
  FLazyName *this;
  FName local_res18 [2];
  
  if (*param_3 == (FName)0x0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (param_2) {
      if (iVar1 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          pFVar2 = ::FName::FName(local_res18,4,L"True",FNAME_Add);
          TrueName.Either.PackedName = (ulonglong)*pFVar2 & 0xffffffff | 0x8000000000000000;
          TrueName.Number = (*pFVar2).Number;
          TrueName.LiteralType = None;
          _Init_thread_footer(&::_TSS0);
        }
      }
      this = &TrueName;
    }
    else {
      if (iVar1 < ::_TSS1) {
        _Init_thread_header(&::_TSS1);
        if (::_TSS1 == -1) {
          pFVar2 = ::FName::FName(local_res18,5,L"False",FNAME_Add);
          FalseName.Either.PackedName = (ulonglong)*pFVar2 & 0xffffffff | 0x8000000000000000;
          FalseName.Number = (*pFVar2).Number;
          FalseName.LiteralType = None;
          _Init_thread_footer(&::_TSS1);
        }
      }
      this = &FalseName;
    }
  }
  else {
    this = &FRigVMStruct::ControlFlowCompletedName;
  }
  FLazyName::Resolve(this);
  *param_3 = local_res18[0];
  return;
}

