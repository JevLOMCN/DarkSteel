// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a11db90

UScriptStruct * __cdecl FRigVMFunction_VisualLogText::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualLogText.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualLogText.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualLogText,(UObject *)pUVar1,
                         L"RigVMFunction_VisualLogText");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_VisualLogText_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualLogText.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualLogText.OuterSingleton;
}

// GetExecuteContextStruct @ 14a11dc50

UScriptStruct * __thiscall
FRigVMFunction_VisualLogText::GetExecuteContextStruct(FRigVMFunction_VisualLogText *this)

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

// Execute @ 14a11e000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigVMFunction_VisualLogText::Execute(FRigVMFunction_VisualLogText *this)

{
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  FVisualLogger::CategorizedLogfImpl((UObject *)0x0,(FName *)&this->field_0x28,Display,L"%s");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a4ad0

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
FRigVMFunction_VisualLogText::Execute
          (FRigVMFunction_VisualLogText *this,FRigVMExecuteContext *param_1)

{
  FVisualLogger::CategorizedLogfImpl(param_1->OwningObject,(FName *)&this->field_0x28,Display,L"%s")
  ;
  return;
}

// RigVMExecute @ 14a1d7870

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
FRigVMFunction_VisualLogText::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FRigVMExecuteContext *pFVar6;
  
  iVar1 = param_2->ArrayNum;
  if ((iVar1 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if ((iVar1 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar2[1].Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if ((iVar1 < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[2].PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar2[2].PropertyPath,pFVar2[2].Ptr,pFVar2[2].Property);
  }
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  FVisualLogger::CategorizedLogfImpl(pFVar6->OwningObject,pFVar5,Display,L"%s");
  return;
}

// StaticExecute @ 14a1ea920

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
FRigVMFunction_VisualLogText::StaticExecute
          (FRigVMExecuteContext *param_1,FString *param_2,FName *param_3,
          FRigVMDebugDrawSettings *param_4)

{
  FVisualLogger::CategorizedLogfImpl(param_1->OwningObject,param_3,Display,L"%s");
  return;
}

