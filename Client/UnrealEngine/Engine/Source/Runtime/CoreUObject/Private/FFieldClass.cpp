// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FFieldClass @ 141fbd870

FFieldClass * __thiscall
FFieldClass::FFieldClass
          (FFieldClass *this,wchar_t *param_1,ulong64 param_2,EClassCastFlags param_3,
          FFieldClass *param_4,
          _func___cdecl_FField_ptr_FFieldVariant_ptr_FName_ptr_EObjectFlags *param_5)

{
  code *pcVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar4;
  longlong lVar5;
  FFieldClass *local_res8;
  FFieldClass *local_28;
  FFieldClass *local_20;
  FFieldClass **local_18;
  
  this->SuperClass = param_4;
  this->ConstructFn = param_5;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->ClassFlags = CLASS_None;
  this->Id = param_2;
  this->CastFlags = param_3;
  this->DefaultObject = (FField *)0x0;
  this->UniqueNameIndexCounter = (atomic<int>)0x0;
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCPPName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFieldClass *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*param_1 != L'F') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCPPName[0] == \'F\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFieldClass *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FName::FName((FName *)&param_5,param_1 + 1);
  uVar4 = (ulonglong)_tls_index;
  this->Name = (FName)param_5;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FFieldClass::GetAllFieldClasses'::__l2::_dynamic_atexit_destructor_for__AllClasses__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_28 = this;
  if ((AllClasses.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      AllClasses.AllocatorInstance.Data + (longlong)AllClasses.ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFieldClass *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (AllClasses.ArrayNum == AllClasses.ArrayMax) {
    AllClasses.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&AllClasses.AllocatorInstance,&AllClasses.ArrayMax);
  }
  lVar5 = (longlong)AllClasses.ArrayNum;
  AllClasses.ArrayNum = AllClasses.ArrayNum + 1;
  *(FFieldClass **)(AllClasses.AllocatorInstance.Data + lVar5 * 8) = local_28;
  this_00 = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
             *)GetNameToFieldClassMap();
  local_18 = &local_res8;
  local_res8 = this;
  local_20 = this;
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFieldClass_*_&&>_>
            (this_00,(TPairInitializer<FName_const_&,FFieldClass_*_&&> *)&param_4,(bool *)&local_20)
  ;
  return this;
}

// ~FFieldClass @ 141fbfcb0

void __thiscall FFieldClass::~FFieldClass(FFieldClass *this)

{
  FField *pFVar1;
  
  pFVar1 = this->DefaultObject;
  if (pFVar1 != (FField *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
  }
  this->DefaultObject = (FField *)0x0;
  return;
}

// ConstructDefaultObject @ 141fc7780

FField * __thiscall FFieldClass::ConstructDefaultObject(FFieldClass *this)

{
  UClass *this_00;
  UPackage *pUVar1;
  FField *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FFieldObjectUnion local_res10;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&this->Name,&local_18);
  ::FString::PrintfImpl(&local_28,L"Default__%s");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  this_00 = Z_Construct_UClass_UClass_NoRegister();
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
  local_res10.Unknown = (ulonglong)pUVar1 | 1;
  if (((UObject *)((ulonglong)pUVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pUVar1 & 0xfffffffffffffffe));
  }
  pFVar2 = (*this->ConstructFn)
                     ((FFieldVariant *)&local_res10,&local_res8,RF_Transient|RF_ClassDefaultObject);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pFVar2;
}

// GetAllFieldClasses @ 141fcd9e0

TArray<FFieldClass_*,TSizedDefaultAllocator<32>_> * __cdecl FFieldClass::GetAllFieldClasses(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FFieldClass::GetAllFieldClasses'::__l2::_dynamic_atexit_destructor_for__AllClasses__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &AllClasses;
}

// GetDefaultObject @ 141fceef0

FField * __thiscall FFieldClass::GetDefaultObject(FFieldClass *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *this_00;
  UPackage *pUVar3;
  FField *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FFieldObjectUnion local_res10;
  FString local_28;
  FString local_18;
  
  if (this->DefaultObject != (FField *)0x0) {
    return this->DefaultObject;
  }
  ::FName::ToString(&this->Name,&local_18);
  ::FString::PrintfImpl(&local_28,L"Default__%s");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
  this_00 = Z_Construct_UClass_UClass_NoRegister();
  pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
  local_res10.Unknown = (ulonglong)pUVar3 | 1;
  if (((UObject *)((ulonglong)pUVar3 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pUVar3 & 0xfffffffffffffffe));
  }
  pFVar4 = (*this->ConstructFn)
                     ((FFieldVariant *)&local_res10,&local_res8,RF_Transient|RF_ClassDefaultObject);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->DefaultObject = pFVar4;
  if ((pFVar4 == (FField *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0xb3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FField *)(*pcVar1)();
    return pFVar4;
  }
  return this->DefaultObject;
}

// GetDescription @ 141fcf010

FString * __thiscall FFieldClass::GetDescription(FFieldClass *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->Name,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDisplayNameText @ 141fcf0a0

FText * __thiscall FFieldClass::GetDisplayNameText(FFieldClass *this,FText *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::ToString(&this->Name,&local_18);
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNameToFieldClassMap @ 141fd19b0

TMap<FName,FFieldClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>_> *
__cdecl FFieldClass::GetNameToFieldClassMap(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FFieldClass::GetNameToFieldClassMap'::__l2::
             _dynamic_atexit_destructor_for__NameToFieldClassMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &NameToFieldClassMap;
}

