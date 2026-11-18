// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// StaticStruct @ 14a1653b0

UScriptStruct * __cdecl FRigVMFunction_UserDefinedEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_UserDefinedEvent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_UserDefinedEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent,(UObject *)pUVar1
                         ,L"RigVMFunction_UserDefinedEvent");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_UserDefinedEvent.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_UserDefinedEvent.OuterSingleton;
}

// GetExecuteContextStruct @ 14a165430

UScriptStruct * __thiscall
FRigVMFunction_UserDefinedEvent::GetExecuteContextStruct(FRigVMFunction_UserDefinedEvent *this)

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

// Execute @ 14a1655c0

void __thiscall FRigVMFunction_UserDefinedEvent::Execute(FRigVMFunction_UserDefinedEvent *this)

{
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
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUnitLabel @ 14a165630

FString * __thiscall
FRigVMFunction_UserDefinedEvent::GetUnitLabel
          (FRigVMFunction_UserDefinedEvent *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  FString *pFVar2;
  wchar_t *pwVar3;
  int iVar4;
  FString local_18;
  
  if (this->EventName == (FName)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FString::FString(&InvalidEvent,L"Invalid Event");
        atexit(`FRigVMFunction_UserDefinedEvent::GetUnitLabel'::__l5::
               _dynamic_atexit_destructor_for__InvalidEvent__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    _Src = InvalidEvent.Data.AllocatorInstance;
    iVar4 = InvalidEvent.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayNum = iVar4;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,(ForAnyElementType *)__return_storage_ptr__,iVar4,piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
      return __return_storage_ptr__;
    }
    *piVar1 = 0;
  }
  else {
    pFVar2 = ::FName::ToString(&this->EventName,&local_18);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    ::FString::FString(__return_storage_ptr__,pwVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetEventName @ 14a165790

FName __thiscall
FRigVMFunction_UserDefinedEvent::GetEventName(FRigVMFunction_UserDefinedEvent *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->EventName;
  return in_RDX;
}

// CanOnlyExistOnce @ 14a1657b0

bool __thiscall
FRigVMFunction_UserDefinedEvent::CanOnlyExistOnce(FRigVMFunction_UserDefinedEvent *this)

{
  return false;
}

// Execute @ 14a1a4340

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
FRigVMFunction_UserDefinedEvent::Execute
          (FRigVMFunction_UserDefinedEvent *this,FRigVMExecuteContext *param_1)

{
  if (this->EventName == (FName)0x0) {
    (param_1->EventName).ComparisonIndex = 0;
    (param_1->EventName).Number = 0;
  }
  return;
}

// RigVMExecute @ 14a1d52b0

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
FRigVMFunction_UserDefinedEvent::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMMemoryHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FRigVMExecuteContext *pFVar5;
  
  if (param_2->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr;
  if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
    plVar4 = (longlong *)pFVar1->Ptr;
  }
  else {
    plVar4 = (longlong *)
             FRigVMPropertyPath::GetData_Internal(pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property)
    ;
  }
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  if (*plVar4 == 0) {
    (pFVar5->EventName).ComparisonIndex = 0;
    (pFVar5->EventName).Number = 0;
  }
  return;
}

// StaticExecute @ 14a1e9950

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
FRigVMFunction_UserDefinedEvent::StaticExecute(FRigVMExecuteContext *param_1,FName *param_2)

{
  if (*param_2 == (FName)0x0) {
    (param_1->EventName).ComparisonIndex = 0;
    (param_1->EventName).Number = 0;
  }
  return;
}

