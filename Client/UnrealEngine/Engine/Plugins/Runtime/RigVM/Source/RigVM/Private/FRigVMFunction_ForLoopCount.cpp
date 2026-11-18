// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// StaticStruct @ 14a15d3a0

UScriptStruct * __cdecl FRigVMFunction_ForLoopCount::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_ForLoopCount.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_ForLoopCount.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount,(UObject *)pUVar1,
                         L"RigVMFunction_ForLoopCount");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_ForLoopCount.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_ForLoopCount.OuterSingleton;
}

// GetExecuteContextStruct @ 14a15d420

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
FRigVMFunction_ForLoopCount::GetExecuteContextStruct(FRigVMFunction_ForLoopCount *this)

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

// GetControlFlowBlocks_Impl @ 14a15d6d0

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
FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl(FRigVMFunction_ForLoopCount *this)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
      FLazyName::Resolve(&FRigVMStruct::ForLoopCompletedPinName);
      _Blocks = (undefined8 *)0x0;
      _DAT_1552a3c90 = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,2,0,(ForAnyElementType *)
                         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl(void)const___ptr64'
                          ::__l2::Blocks,2,(int *)&DAT_1552a3c94);
      puVar1 = _Blocks;
      *_Blocks = local_18;
      puVar1[1] = uStack_10;
      atexit(`FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl'::__l2::
             _dynamic_atexit_destructor_for__Blocks__);
      _Init_thread_footer(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<FName,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl(void)const___ptr64'
              ::__l2::Blocks;
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FRigVMFunction_ForLoopCount::GetControlFlowBlocks_Impl(void)const___ptr64'
          ::__l2::Blocks;
}

// IsControlFlowBlockSliced @ 14a15d820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRigVMFunction_ForLoopCount::IsControlFlowBlockSliced
          (FRigVMFunction_ForLoopCount *this,FName *param_1)

{
  FName local_res10;
  
  FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
  return *param_1 == local_res10;
}

// GetNumSlices @ 14a15d860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall FRigVMFunction_ForLoopCount::GetNumSlices(FRigVMFunction_ForLoopCount *this)

{
  return this->Count;
}

// Execute @ 14a15d900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_ForLoopCount::Execute(FRigVMFunction_ForLoopCount *this)

{
  (**(code **)((this->Completed)._padding_ + 8))(&this->Completed);
  StaticExecute(&this->Completed,&this->BlockToRun,this->Count,&this->Index,&this->Ratio);
  return;
}

// Execute @ 14a19e910

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
FRigVMFunction_ForLoopCount::Execute
          (FRigVMFunction_ForLoopCount *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->BlockToRun,this->Count,&this->Index,&this->Ratio);
  return;
}

// RigVMExecute @ 14a1b9410

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
FRigVMFunction_ForLoopCount::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  int *piVar6;
  FRigVMMemoryHandle *pFVar7;
  float *pfVar8;
  FRigVMExecuteContext *pFVar9;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  if (iVar1 < 2) {
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
    piVar6 = (int *)pFVar7[1].Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  iVar2 = *piVar6;
  if (iVar1 < 3) {
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
  piVar6 = (int *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar5,iVar2,piVar6,pfVar8);
  return;
}

// StaticExecute @ 14a1db540

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
FRigVMFunction_ForLoopCount::StaticExecute
          (FRigVMExecuteContext *param_1,FName *param_2,int param_3,int *param_4,float *param_5)

{
  float fVar1;
  FName local_res10;
  
  if (*param_2 == (FName)0x0) {
    *param_4 = 0;
    FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
    *param_2 = local_res10;
  }
  else {
    FLazyName::Resolve(&FRigVMStruct::ExecutePinName);
    if (*param_2 == local_res10) {
      *param_4 = *param_4 + 1;
    }
  }
  if (*param_4 == param_3) {
    FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
    *param_2 = local_res10;
  }
  fVar1 = FRigVMStruct::GetRatioFromIndex(*param_4,param_3);
  *param_5 = fVar1;
  return;
}

