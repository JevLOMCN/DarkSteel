// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 453

// Name'' @ 140f48c60

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
IRowBatchInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  IRowBatchInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name,
                 "RowBatchInfo");
  return;
}

// Name'' @ 140f48c80

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name,
                 "RowBatchInfo");
  return;
}

// Name'' @ 140f48ca0

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
ISingleRowInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  ISingleRowInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name
                 ,"SingleRowInfo");
  return;
}

// Name'' @ 140f48cc0

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name,
                 "SingleRowInfo");
  return;
}

// ObjectMappingDomain'' @ 140f48ce0

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::ICompatibilityProvider::ObjectMappingDomain__
          (void)

{
  ::FName::FName(&UE::Editor::DataStorage::ICompatibilityProvider::ObjectMappingDomain,"Object");
  return;
}

// PurposeMappingDomain'' @ 140f48d00

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::IUiProvider::PurposeMappingDomain__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::IUiProvider::PurposeMappingDomain,"WidgetPurpose");
  return;
}

// `dynamic_initializer_for_'CVarAddDebugRows'' @ 140f48d20

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__CVarAddDebugRows__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Editor::DataStorage::<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarAddDebugRows,L"Teds.Debug.PerformanceTest.AddRows",
             L"Teds.Debug.PerformanceTest.AddRows <NumRows>;  NumRows = number of rows to add",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarAddDebugRows__);
  return;
}

// `dynamic_initializer_for_'CVarAllowUnversionedContentInEditor'' @ 140f48e50

void __cdecl
UE::Editor::DataStorage::Debug::ProcessorTests::
_dynamic_initializer_for__CVarAllowUnversionedContentInEditor__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnProcessorTestsEnabled;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowUnversionedContentInEditor,L"TEDS.Tests.ProcessorTestsEnabled",
             &GProcessorTestsEnabled,
             L"If true, registers processors and additional commands with TEDS to test processors.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarAllowUnversionedContentInEditor__);
  return;
}

// `dynamic_initializer_for_'CVarResetDebugEntities'' @ 140f48f90

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__CVarResetDebugEntities__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Editor::DataStorage::<lambda_6>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarResetDebugEntities,L"Teds.Debug.PerformanceTest.RemoveAllRows",
             L"Removes all added rows for the performance test",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarResetDebugEntities__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance'' @ 140f490c0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_4ByteMultiValue");
  FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::
  FEditorDataStorageUiSorter_Prefix_4ByteMultiValue
            (&FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance'' @ 140f49110

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_8ByteMultiValue");
  FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::
  FEditorDataStorageUiSorter_Prefix_8ByteMultiValue
            (&FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance'' @ 140f49160

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitive");
  FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitive::
  FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitive
            (&FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance'' @ 140f491b0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitive");
  FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitive::
  FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitive
            (&FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_BooleanInstance'' @ 140f49200

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_BooleanInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_Boolean");
  FEditorDataStorageUiSorter_Prefix_Boolean::FEditorDataStorageUiSorter_Prefix_Boolean
            (&FEditorDataStorageUiSorter_Prefix_BooleanInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_BooleanInstance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_DoubleInstance'' @ 140f49250

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_DoubleInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_Double");
  FEditorDataStorageUiSorter_Prefix_Double::FEditorDataStorageUiSorter_Prefix_Double
            (&FEditorDataStorageUiSorter_Prefix_DoubleInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_DoubleInstance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_FNameByIdInstance'' @ 140f492a0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_FNameByIdInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_FNameById");
  FEditorDataStorageUiSorter_Prefix_FNameById::FEditorDataStorageUiSorter_Prefix_FNameById
            (&FEditorDataStorageUiSorter_Prefix_FNameByIdInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_FNameByIdInstance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_FNameByStringInstance'' @ 140f492f0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_FNameByStringInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_FNameByString");
  FEditorDataStorageUiSorter_Prefix_FNameByString::FEditorDataStorageUiSorter_Prefix_FNameByString
            (&FEditorDataStorageUiSorter_Prefix_FNameByStringInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_FNameByStringInstance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_FloatInstance'' @ 140f49340

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_FloatInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_Float");
  FEditorDataStorageUiSorter_Prefix_Float::FEditorDataStorageUiSorter_Prefix_Float
            (&FEditorDataStorageUiSorter_Prefix_FloatInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_FloatInstance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_Int16Instance'' @ 140f49390

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_Int16Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_Int16");
  FEditorDataStorageUiSorter_Prefix_Int16::FEditorDataStorageUiSorter_Prefix_Int16
            (&FEditorDataStorageUiSorter_Prefix_Int16Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_Int16Instance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_Int32Instance'' @ 140f493e0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_Int32Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_Int32");
  FEditorDataStorageUiSorter_Prefix_Int32::FEditorDataStorageUiSorter_Prefix_Int32
            (&FEditorDataStorageUiSorter_Prefix_Int32Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_Int32Instance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_Int64Instance'' @ 140f49430

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_Int64Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_Int64");
  FEditorDataStorageUiSorter_Prefix_Int64::FEditorDataStorageUiSorter_Prefix_Int64
            (&FEditorDataStorageUiSorter_Prefix_Int64Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_Int64Instance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_Int8Instance'' @ 140f49480

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_Int8Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_Int8");
  FEditorDataStorageUiSorter_Prefix_Int8::FEditorDataStorageUiSorter_Prefix_Int8
            (&FEditorDataStorageUiSorter_Prefix_Int8Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_Int8Instance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance'' @ 140f494d0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes");
  FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
  FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes
            (&FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance'' @ 140f49520

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_MultiValueStrings");
  FEditorDataStorageUiSorter_Prefix_MultiValueStrings::
  FEditorDataStorageUiSorter_Prefix_MultiValueStrings
            (&FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance'' @ 140f49570

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers"
                    );
  FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
  FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers
            (&FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance'' @ 140f495c0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues");
  FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
  FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues
            (&FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance'' @ 140f49610

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_StringIndexCheck");
  FEditorDataStorageUiSorter_Prefix_StringIndexCheck::
  FEditorDataStorageUiSorter_Prefix_StringIndexCheck
            (&FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance'' @ 140f49660

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset");
  FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
  FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset
            (&FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance'' @ 140f496b0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitive");
  FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitive::
  FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitive
            (&FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance'' @ 140f49700

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitive");
  FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitive::
  FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitive
            (&FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance'' @ 140f49750

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitive");
  FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitive::
  FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitive
            (&FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance'' @ 140f497a0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitive");
  FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitive::
  FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitive
            (&FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_UInt16Instance'' @ 140f497f0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_UInt16Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_UInt16");
  FEditorDataStorageUiSorter_Prefix_UInt16::FEditorDataStorageUiSorter_Prefix_UInt16
            (&FEditorDataStorageUiSorter_Prefix_UInt16Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_UInt16Instance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_UInt32Instance'' @ 140f49840

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_UInt32Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_UInt32");
  FEditorDataStorageUiSorter_Prefix_UInt32::FEditorDataStorageUiSorter_Prefix_UInt32
            (&FEditorDataStorageUiSorter_Prefix_UInt32Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_UInt32Instance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_UInt64Instance'' @ 140f49890

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_UInt64Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_UInt64");
  FEditorDataStorageUiSorter_Prefix_UInt64::FEditorDataStorageUiSorter_Prefix_UInt64
            (&FEditorDataStorageUiSorter_Prefix_UInt64Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_UInt64Instance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_UInt8Instance'' @ 140f498e0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_UInt8Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_UInt8");
  FEditorDataStorageUiSorter_Prefix_UInt8::FEditorDataStorageUiSorter_Prefix_UInt8
            (&FEditorDataStorageUiSorter_Prefix_UInt8Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_UInt8Instance__);
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance'' @ 140f49930

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitive");
  FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitive::
  FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitive
            (&FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance__
        );
  return;
}

// `dynamic_initializer_for_'FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance'' @ 140f49980

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive");
  FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
  FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive
            (&FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance__
        );
  return;
}

// `dynamic_initializer_for_'FRowHandleArray_TestsInstance'' @ 140f499d0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FRowHandleArray_TestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRowHandleArray_Tests");
  FRowHandleArray_Tests::FRowHandleArray_Tests(&FRowHandleArray_TestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRowHandleArray_TestsInstance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions1Instance'' @ 140f49a20

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions1Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions1");
  FTypedElementQueryConditions1::FTypedElementQueryConditions1
            (&FTypedElementQueryConditions1Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions1Instance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions2Instance'' @ 140f49a70

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions2Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions2");
  FTypedElementQueryConditions2::FTypedElementQueryConditions2
            (&FTypedElementQueryConditions2Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions2Instance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions3Instance'' @ 140f49ac0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions3Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions3");
  FTypedElementQueryConditions3::FTypedElementQueryConditions3
            (&FTypedElementQueryConditions3Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions3Instance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions4Instance'' @ 140f49b10

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions4Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions4");
  FTypedElementQueryConditions4::FTypedElementQueryConditions4
            (&FTypedElementQueryConditions4Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions4Instance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions5Instance'' @ 140f49b60

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions5Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions5");
  FTypedElementQueryConditions5::FTypedElementQueryConditions5
            (&FTypedElementQueryConditions5Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions5Instance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions6Instance'' @ 140f49bb0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions6Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions6");
  FTypedElementQueryConditions6::FTypedElementQueryConditions6
            (&FTypedElementQueryConditions6Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions6Instance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions7Instance'' @ 140f49c00

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions7Instance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions7");
  FTypedElementQueryConditions7::FTypedElementQueryConditions7
            (&FTypedElementQueryConditions7Instance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions7Instance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions_MultiMatchInstance'' @ 140f49c50

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions_MultiMatchInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions_MultiMatch");
  FTypedElementQueryConditions_MultiMatch::FTypedElementQueryConditions_MultiMatch
            (&FTypedElementQueryConditions_MultiMatchInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions_MultiMatchInstance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions_NoColumnInstance'' @ 140f49ca0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions_NoColumnInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions_NoColumn");
  FTypedElementQueryConditions_NoColumn::FTypedElementQueryConditions_NoColumn
            (&FTypedElementQueryConditions_NoColumnInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions_NoColumnInstance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions_OneColumnInstance'' @ 140f49cf0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions_OneColumnInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions_OneColumn");
  FTypedElementQueryConditions_OneColumn::FTypedElementQueryConditions_OneColumn
            (&FTypedElementQueryConditions_OneColumnInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions_OneColumnInstance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementQueryConditions_SortedInstance'' @ 140f49d40

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementQueryConditions_SortedInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementQueryConditions_Sorted");
  FTypedElementQueryConditions_Sorted::FTypedElementQueryConditions_Sorted
            (&FTypedElementQueryConditions_SortedInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementQueryConditions_SortedInstance__);
  return;
}

// `dynamic_initializer_for_'IsConstName'' @ 140f49d90

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__IsConstName__(void)

{
  ::FName::FName(&IsConstName,L"IsConst");
  return;
}

// `dynamic_initializer_for_'IsEditableName'' @ 140f49db0

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__IsEditableName__(void)

{
  ::FName::FName(&IsEditableName,L"IsEditable");
  return;
}

// `dynamic_initializer_for_'QueryMergeTestFixtureAutomationSpecInstance'' @ 140f49dd0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_initializer_for__QueryMergeTestFixtureAutomationSpecInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"QueryMergeTestFixture");
  FAutomationSpecBase::FAutomationSpecBase
            ((FAutomationSpecBase *)&QueryMergeTestFixtureAutomationSpecInstance,&local_18,false);
  QueryMergeTestFixtureAutomationSpecInstance._padding_ =
       (longlong)&___7QueryMergeTestFixture_Tests_DataStorage_Editor_UE__6B_;
  QueryMergeTestFixtureAutomationSpecInstance.TedsInterface = (ICoreProvider *)0x0;
  ::FName::FName(&QueryMergeTestFixtureAutomationSpecInstance.TestTableName,
                 L"TestTable_QueryMergeTest");
  QueryMergeTestFixtureAutomationSpecInstance.Rows.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  QueryMergeTestFixtureAutomationSpecInstance.Rows.ArrayNum = 0;
  QueryMergeTestFixtureAutomationSpecInstance.Rows.ArrayMax = 0;
  QueryMergeTestFixtureAutomationSpecInstance.QueryHandles.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  QueryMergeTestFixtureAutomationSpecInstance.QueryHandles.ArrayNum = 0;
  QueryMergeTestFixtureAutomationSpecInstance.QueryHandles.ArrayMax = 0;
  QueryMergeTestFixtureAutomationSpecInstance.Identifier1.ComparisonIndex.Value = 0;
  QueryMergeTestFixtureAutomationSpecInstance.Identifier1.Number = 0;
  QueryMergeTestFixtureAutomationSpecInstance.Identifier2.ComparisonIndex.Value = 0;
  QueryMergeTestFixtureAutomationSpecInstance.Identifier2.Number = 0;
  QueryMergeTestFixtureAutomationSpecInstance.Identifier3.ComparisonIndex.Value = 0;
  QueryMergeTestFixtureAutomationSpecInstance.Identifier3.Number = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__QueryMergeTestFixtureAutomationSpecInstance__);
  return;
}

// `dynamic_initializer_for_'RegisteredCommands'' @ 140f49e80

void __cdecl
UE::Editor::DataStorage::Debug::ProcessorTests::_dynamic_initializer_for__RegisteredCommands__(void)

{
  atexit(_dynamic_atexit_destructor_for__RegisteredCommands__);
  return;
}

// `dynamic_initializer_for_'RegisteredQueries'' @ 140f49ea0

void __cdecl
UE::Editor::DataStorage::Debug::ProcessorTests::_dynamic_initializer_for__RegisteredQueries__(void)

{
  atexit(_dynamic_atexit_destructor_for__RegisteredQueries__);
  return;
}

// `dynamic_initializer_for_'TQueryFunction_TestsInstance'' @ 140f49ec0

void __cdecl
UE::Editor::DataStorage::Queries::Tests::`anonymous_namespace'::
_dynamic_initializer_for__TQueryFunction_TestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"TQueryFunction_Tests");
  TQueryFunction_Tests::TQueryFunction_Tests(&TQueryFunction_TestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__TQueryFunction_TestsInstance__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h__Script_TypedElementFramework_4110130225'' @ 140f49f10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h__Script_TypedElementFramework_4110130225__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h__Script_TypedElementFramework_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `scalar_deleting_destructor' @ 142cc4c60

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitive::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc4f40

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStrings::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_MultiValueStrings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc5200

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc54e0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitive::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc57a0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitive::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc5a60

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt64::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_UInt64 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc5d20

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbers *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc5fe0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt32::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_UInt32 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc62a0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt16::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_UInt16 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc6560

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_UInt8::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_UInt8 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc6820

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitive::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc6ae0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int64::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_Int64 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc6da0

void * __thiscall
FRowHandleArray_Tests::_scalar_deleting_destructor_(FRowHandleArray_Tests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc7060

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int32::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_Int32 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc7320

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitive::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc75e0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int16::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_Int16 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc78a0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitive::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc7b60

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameByString::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_FNameByString *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc8020

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_NoColumn::_scalar_deleting_destructor_
          (FTypedElementQueryConditions_NoColumn *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc82e0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Int8::_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_Int8 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc85a0

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_OneColumn::_scalar_deleting_destructor_
          (FTypedElementQueryConditions_OneColumn *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc8880

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions1::_scalar_deleting_destructor_
          (FTypedElementQueryConditions1 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc8b20

void * __thiscall
UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::_scalar_deleting_destructor_
          (TQueryFunction_Tests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory @ 142cc8b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory(void)

{
  if (Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.OuterSingleton,
               &Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.OuterSingleton;
}

// NewStructOps @ 142cc8bb0

void * __cdecl Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTest_PingPongPrePhys,&UE::CoreUObject::Private::Construct<FTest_PingPongPrePhys>,&UE::CoreUObject::Private::ConstructForTests<FTest_PingPongPrePhys>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142cc8e60

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions2::_scalar_deleting_destructor_
          (FTypedElementQueryConditions2 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// NewStructOps @ 142cc9030

void * __cdecl Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTest_PingPongDurPhys,&UE::CoreUObject::Private::Construct<FTest_PingPongDurPhys>,&UE::CoreUObject::Private::ConstructForTests<FTest_PingPongDurPhys>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142cc92e0

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions3::_scalar_deleting_destructor_
          (FTypedElementQueryConditions3 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc95a0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_FNameById::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_FNameById *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// NewStructOps @ 142cc95f0

void * __cdecl Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTest_PingPongPostPhys,&UE::CoreUObject::Private::Construct<FTest_PingPongPostPhys>,&UE::CoreUObject::Private::ConstructForTests<FTest_PingPongPostPhys>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142cc98d0

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions4::_scalar_deleting_destructor_
          (FTypedElementQueryConditions4 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc9b60

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Float::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_Float *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cc9e20

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions5::_scalar_deleting_destructor_
          (FTypedElementQueryConditions5 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cca150

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Double::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_Double *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cca3a0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_8ByteMultiValue::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_8ByteMultiValue *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cca660

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions6::_scalar_deleting_destructor_
          (FTypedElementQueryConditions6 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccab30

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheck::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_StringIndexCheck *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccabe0

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions7::_scalar_deleting_destructor_
          (FTypedElementQueryConditions7 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccae20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Editor::DataStorage::<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Editor::DataStorage::<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccb0c0

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_MultiMatch::
_scalar_deleting_destructor_(FTypedElementQueryConditions_MultiMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccb380

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_Boolean::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_Boolean *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccb640

void * __thiscall
UE::Editor::DataStorage::Tests::FTypedElementQueryConditions_Sorted::_scalar_deleting_destructor_
          (FTypedElementQueryConditions_Sorted *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccb880

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Editor::DataStorage::<lambda_6>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Editor::DataStorage::<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccbb20

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_4ByteMultiValue::
_scalar_deleting_destructor_(FEditorDataStorageUiSorter_Prefix_4ByteMultiValue *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccbde0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccc0a0

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValues *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccc240

void * __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::_scalar_deleting_destructor_
          (QueryMergeTestFixture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->QueryHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Rows).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccc550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccc590

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizes *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ccc870

void * __thiscall
UE::Editor::DataStorage::Tests::FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitive::
_scalar_deleting_destructor_
          (FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// TFunction<unsigned_int___cdecl(void)><`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_16>_> @ 142cccce0

TFunction<unsigned_int___cdecl(void)> * __thiscall
TFunction<unsigned_int___cdecl(void)>::
TFunction<unsigned_int___cdecl(void)><_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l125::<lambda_16>_>
          (TFunction<unsigned_int___cdecl(void)> *this,<lambda_16> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &___7__TFunction_OwnedObject_P6AIXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)&this->field_0x18 =
       `UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::
       <lambda_16>::<lambda_invoker_cdecl>;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::TFunctionRefCaller<unsigned_int_(__cdecl*)(void),unsigned_int>
         ::Call;
  }
  return this;
}

// Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_> @ 142cce820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FAutomationSpecBase::FAsyncLatentCommand::Update_::__l5::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,
          <lambda_1>_conflict *param_2,TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1d8 [32];
  TPromise<void> local_198;
  undefined4 local_180;
  TFutureState<void> *local_178;
  FRunnableThread *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FConstructor local_130;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  undefined1 local_f8 [16];
  undefined **local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined ***local_d0;
  TFutureState<void> *local_c8;
  undefined **local_b8;
  code *pcStack_b0;
  code *local_a8;
  undefined ***local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_180 = 0;
  local_e8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  uStack_e0 = *(code **)param_2;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>,void>
       ::Call;
  local_d0 = (undefined ***)0x0;
  TPromise<void>::TPromise<void>(&local_198,param_3);
  if ((local_198.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_198.bFutureRetrieved = true;
  if ((local_198.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_198.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_198.State.Object;
  if (local_198.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_130.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_180 = 1;
    if (param_1 == TaskGraph) {
      local_180 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_130,(TUniqueFunction<void___cdecl(void)> *)&local_178,
               (TPromise<void> *)local_f8,(Type *)&local_198);
    if (local_178 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_178->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_178)(local_178,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (TFutureState<void> *)local_f8._0_8_;
    local_a0 = local_d0;
    local_98 = local_198.State.Object;
    local_90 = local_198.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8;
    pcStack_b0 = uStack_e0;
    local_a8 = local_d8;
    local_f8._0_8_ = (TFutureState<void> *)0x0;
    local_198.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_198.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_198.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar16 = local_50 + 2;
    *ppcVar16 = (code *)local_c8;
    local_50[7] = (code *)local_a0;
    local_a0 = (undefined ***)0x0;
    local_50[4] = (code *)local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = local_a8;
    if (*ppcVar16 != (code *)0x0) {
      local_c8 = (TFutureState<void> *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar16 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar16 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar16 = local_50;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if (local_c8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar17 = local_a0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(code **)&pTVar12->field_0x28 = uStack_e0;
        *(code **)&pTVar12->field_0x30 = local_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_170 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_170);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(code **)&pTVar12->field_0x28 = uStack_e0;
        *(code **)&pTVar12->field_0x30 = local_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar19.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_f8._0_8_;
        puVar14[7] = local_d0;
        *(undefined4 *)(puVar14 + 4) = local_e8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_e0._4_4_;
        puVar14[6] = local_d8;
        if (puVar14[2] != 0) {
          local_f8._0_8_ = pTVar20;
        }
        puVar14[8] = local_198.State.Object;
        puVar14[9] = local_198.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_198.bFutureRetrieved;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_198.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_f8._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar17 = local_d0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_> @ 142ccf400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQueryFunction<int> * __cdecl
UE::Editor::DataStorage::Queries::
BuildQueryFunction<int,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l154::<lambda_25>_>
          (TQueryFunction<int> *__return_storage_ptr__,<lambda_25> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct ***pppUVar5;
  void *pvVar6;
  longlong *plVar7;
  int *piVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  uint uStack_54;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  pvVar6 = ThreadLocalStoragePointer;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  piVar8 = (int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x9d4c);
  if (*piVar8 < `public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Capabilities =
           (FName *)IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name;
      _Result = &`public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::Capabilities;
      _DAT_1550611c0 = 1;
      _Init_thread_footer(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = CONCAT44(uRam00000001550611c4,_DAT_1550611c0);
  *(FName ***)__return_storage_ptr__ = _Result;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
      _DAT_155061380 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  pppUVar5 = _Result;
  uVar3 = CONCAT44(uRam0000000155061384,_DAT_155061380);
  __return_storage_ptr__->field_0x60 = 0;
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x10 = pppUVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
  uStack_30 = CONCAT31(uStack_30._1_3_,local_68);
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(ulonglong *)&__return_storage_ptr__->field_0x28 = (ulonglong)uStack_54 << 0x20;
  local_48 = *(longlong *)&__return_storage_ptr__->field_0x30;
  uVar4 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  local_38 = *(longlong *)&__return_storage_ptr__->field_0x40;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->field_0x48;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x4c;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->field_0x50;
  plStack_20 = *(longlong **)&__return_storage_ptr__->field_0x58;
  *(code **)&__return_storage_ptr__->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<int>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
       ::Call;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0x509d9d68;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  uStack_30 = uVar1;
  uStack_2c = uVar2;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    uStack_40 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_> @ 142ccf5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQueryFunction<void> * __cdecl
UE::Editor::DataStorage::Queries::
BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l117::<lambda_13>_>
          (TQueryFunction<void> *__return_storage_ptr__,<lambda_13> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct ***pppUVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  uint uStack_54;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  pvVar6 = ThreadLocalStoragePointer;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = (ulonglong)uStack_54 << 0x20;
  if (*(int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
      _DAT_1550612e0 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  pppUVar5 = _Result;
  uVar3 = CONCAT44(uRam00000001550612e4,_DAT_1550612e0);
  __return_storage_ptr__->field_0x60 = 1;
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x20 = pppUVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar3;
  uStack_30 = CONCAT31(uStack_30._1_3_,local_68);
  local_48 = *(longlong *)&__return_storage_ptr__->field_0x30;
  uVar4 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  local_38 = *(longlong *)&__return_storage_ptr__->field_0x40;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->field_0x48;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x4c;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->field_0x50;
  plStack_20 = *(longlong **)&__return_storage_ptr__->field_0x58;
  *(code **)&__return_storage_ptr__->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
       ::Call;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0x509d9c88;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  uStack_30 = uVar1;
  uStack_2c = uVar2;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    uStack_40 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_> @ 142ccf770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQueryFunction<void> * __cdecl
UE::Editor::DataStorage::Queries::
BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l121::<lambda_14>_>
          (TQueryFunction<void> *__return_storage_ptr__,<lambda_14> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct ***pppUVar5;
  void *pvVar6;
  longlong *plVar7;
  int *piVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  pvVar6 = ThreadLocalStoragePointer;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  piVar8 = (int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x9d4c);
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
      _DAT_155061300 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = CONCAT44(uRam0000000155061304,_DAT_155061300);
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x10 = _Result;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
      _DAT_155061320 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  pppUVar5 = _Result;
  uVar3 = CONCAT44(uRam0000000155061324,_DAT_155061320);
  __return_storage_ptr__->field_0x60 = 1;
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x20 = pppUVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar3;
  uStack_30 = CONCAT31(uStack_30._1_3_,local_58);
  local_48 = *(longlong *)&__return_storage_ptr__->field_0x30;
  uVar4 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  local_38 = *(longlong *)&__return_storage_ptr__->field_0x40;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->field_0x48;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x4c;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->field_0x50;
  plStack_20 = *(longlong **)&__return_storage_ptr__->field_0x58;
  *(code **)&__return_storage_ptr__->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
       ::Call;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0x509d9ca8;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  uStack_30 = uVar1;
  uStack_2c = uVar2;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    uStack_40 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_> @ 142ccf950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQueryFunction<void> * __cdecl
UE::Editor::DataStorage::Queries::
BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::E]::<lambda_17>_>
          (TQueryFunction<void> *__return_storage_ptr__,<lambda_17> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName **ppFVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  uint uStack_54;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  pvVar6 = ThreadLocalStoragePointer;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Capabilities =
           (FName *)ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name;
      _Result = &`public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::Capabilities;
      _DAT_1550611a0 = 1;
      _Init_thread_footer(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  ppFVar5 = _Result;
  uVar3 = CONCAT44(uRam00000001550611a4,_DAT_1550611a0);
  __return_storage_ptr__->field_0x60 = 1;
  *(FName ***)__return_storage_ptr__ = ppFVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  uStack_30 = CONCAT31(uStack_30._1_3_,local_68);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = (ulonglong)uStack_54 << 0x20;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(ulonglong *)&__return_storage_ptr__->field_0x28 = (ulonglong)uStack_54 << 0x20;
  local_48 = *(longlong *)&__return_storage_ptr__->field_0x30;
  uVar4 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  local_38 = *(longlong *)&__return_storage_ptr__->field_0x40;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->field_0x48;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x4c;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->field_0x50;
  plStack_20 = *(longlong **)&__return_storage_ptr__->field_0x58;
  *(code **)&__return_storage_ptr__->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
       ::Call;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0x509d9ce8;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  uStack_30 = uVar1;
  uStack_2c = uVar2;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    uStack_40 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_> @ 142ccfae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQueryFunction<void> * __cdecl
UE::Editor::DataStorage::Queries::
BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l53::<lambda_6>_>
          (TQueryFunction<void> *__return_storage_ptr__,<lambda_6> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct ***pppUVar5;
  void *pvVar6;
  longlong *plVar7;
  int *piVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  pvVar6 = ThreadLocalStoragePointer;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  piVar8 = (int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x9d4c);
  if (*piVar8 < `public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Capabilities =
           (FName *)ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name;
      _Result = &`public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::Capabilities;
      _DAT_1550611a0 = 1;
      _Init_thread_footer(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = CONCAT44(uRam00000001550611a4,_DAT_1550611a0);
  *(FName ***)__return_storage_ptr__ = _Result;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
      _DAT_155061220 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = CONCAT44(uRam0000000155061224,_DAT_155061220);
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x10 = _Result;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
      _DAT_155061240 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  pppUVar5 = _Result;
  uVar3 = CONCAT44(uRam0000000155061244,_DAT_155061240);
  __return_storage_ptr__->field_0x60 = 1;
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x20 = pppUVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar3;
  uStack_30 = CONCAT31(uStack_30._1_3_,local_58);
  local_48 = *(longlong *)&__return_storage_ptr__->field_0x30;
  uVar4 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  local_38 = *(longlong *)&__return_storage_ptr__->field_0x40;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->field_0x48;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x4c;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->field_0x50;
  plStack_20 = *(longlong **)&__return_storage_ptr__->field_0x58;
  *(code **)&__return_storage_ptr__->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
       ::Call;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0x509d9ba8;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  uStack_30 = uVar1;
  uStack_2c = uVar2;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    uStack_40 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_> @ 142ccfd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQueryFunction<void> * __cdecl
UE::Editor::DataStorage::Queries::
BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l69::<lambda_7>_>
          (TQueryFunction<void> *__return_storage_ptr__,<lambda_7> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct ***pppUVar5;
  void *pvVar6;
  longlong *plVar7;
  int *piVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  pvVar6 = ThreadLocalStoragePointer;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  piVar8 = (int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x9d4c);
  if (*piVar8 < `public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Capabilities =
           (FName *)ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name;
      _Result = &`public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::Capabilities;
      _DAT_1550611a0 = 1;
      _Init_thread_footer(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = CONCAT44(uRam00000001550611a4,_DAT_1550611a0);
  *(FName ***)__return_storage_ptr__ = _Result;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
      _DAT_155061260 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = CONCAT44(uRam0000000155061264,_DAT_155061260);
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x10 = _Result;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
      _DAT_155061280 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  pppUVar5 = _Result;
  uVar3 = CONCAT44(uRam0000000155061284,_DAT_155061280);
  __return_storage_ptr__->field_0x60 = 1;
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x20 = pppUVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar3;
  uStack_30 = CONCAT31(uStack_30._1_3_,local_58);
  local_48 = *(longlong *)&__return_storage_ptr__->field_0x30;
  uVar4 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  local_38 = *(longlong *)&__return_storage_ptr__->field_0x40;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->field_0x48;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x4c;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->field_0x50;
  plStack_20 = *(longlong **)&__return_storage_ptr__->field_0x58;
  *(code **)&__return_storage_ptr__->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
       ::Call;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0x509d9bc8;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  uStack_30 = uVar1;
  uStack_2c = uVar2;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    uStack_40 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_> @ 142ccff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQueryFunction<void> * __cdecl
UE::Editor::DataStorage::Queries::
BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l85::<lambda_8>_>
          (TQueryFunction<void> *__return_storage_ptr__,<lambda_8> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UScriptStruct ***pppUVar5;
  void *pvVar6;
  longlong *plVar7;
  int *piVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  pvVar6 = ThreadLocalStoragePointer;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  piVar8 = (int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x9d4c);
  if (*piVar8 < `public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Capabilities =
           (FName *)IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name;
      _Result = &`public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::Capabilities;
      _DAT_1550611c0 = 1;
      _Init_thread_footer(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = CONCAT44(uRam00000001550611c4,_DAT_1550611c0);
  *(FName ***)__return_storage_ptr__ = _Result;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
      _DAT_1550612a0 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = CONCAT44(uRam00000001550612a4,_DAT_1550612a0);
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x10 = _Result;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
  if (*piVar8 < `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
                ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
      _DAT_1550612c0 = 1;
      _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::ResultColumns;
      _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  pppUVar5 = _Result;
  uVar3 = CONCAT44(uRam00000001550612c4,_DAT_1550612c0);
  __return_storage_ptr__->field_0x60 = 0;
  *(UScriptStruct ****)&__return_storage_ptr__->field_0x20 = pppUVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar3;
  uStack_30 = CONCAT31(uStack_30._1_3_,local_58);
  local_48 = *(longlong *)&__return_storage_ptr__->field_0x30;
  uVar4 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  local_38 = *(longlong *)&__return_storage_ptr__->field_0x40;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->field_0x48;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x4c;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->field_0x50;
  plStack_20 = *(longlong **)&__return_storage_ptr__->field_0x58;
  *(code **)&__return_storage_ptr__->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
       ::Call;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0x509d9be8;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  uStack_30 = uVar1;
  uStack_2c = uVar2;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    uStack_40 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_const_&> @ 142cd2a70

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l105::<lambda_10>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l105::<lambda_10>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_10> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_const_&> @ 142cd2b80

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l109::<lambda_11>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l109::<lambda_11>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_11> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_const_&> @ 142cd2c90

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l113::<lambda_12>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l113::<lambda_12>_const_&>
          (TResult<bool> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_12> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      (**(code **)*param_1)(param_1,1);
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString_&>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_const_&> @ 142cd2dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l117::<lambda_13>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l117::<lambda_13>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_13> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  void **ppvVar10;
  void **ppvVar11;
  bool bVar12;
  char cVar13;
  longlong lVar14;
  ulonglong uVar15;
  void **ppvVar16;
  FString *this;
  undefined1 *puVar17;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  void **local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  void **local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void **local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  void **local_88 [2];
  TArrayView<void_*,int> local_78;
  TArrayView<void_const_*,int> local_68;
  ulonglong local_58;
  
  puVar17 = auStack_128;
  local_58 = __security_cookie.value ^ (ulonglong)&local_108;
  ppvVar16 = (void **)0x0;
  local_108 = 0;
  uStack_100 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
    _DAT_1550612e0 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar8 = uRam00000001550612e4;
  iVar7 = _DAT_1550612e0;
  uVar5 = _Result;
  uVar6 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
          ::__l3::Result_4;
  local_c8 = _Result;
  uStack_c4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64>::ListColumns<130>(void)'
              ::__l3::Result_4;
  iStack_c0 = _DAT_1550612e0;
  uStack_bc = uRam00000001550612e4;
  lVar14 = (longlong)_DAT_1550612e0 * 8;
  if (lVar14 != 0) {
    uVar15 = lVar14 + 0x1e;
    if (uVar15 <= lVar14 + 0xfU) {
      uVar15 = 0xffffffffffffff0;
    }
    puVar17 = auStack_128 + -(uVar15 & 0xfffffffffffffff0);
    ppvVar16 = (void **)((longlong)&uStack_100 + -(uVar15 & 0xfffffffffffffff0));
  }
  local_f8 = (void **)0x0;
  iStack_f0 = 0;
  iStack_e0 = _DAT_1550612e0;
  local_e8 = ppvVar16;
  if (_DAT_1550612e0 < 0) {
    *(undefined8 *)(puVar17 + -8) = 0x142cd2ede;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar12) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppvVar11 = local_e8;
  ppvVar10 = local_f8;
  uVar9 = local_108;
  uVar2 = CONCAT44(uStack_fc,uStack_100);
  uVar3._4_4_ = uStack_ec;
  uVar3._0_4_ = iStack_f0;
  uVar4._4_4_ = uStack_dc;
  uVar4._0_4_ = iStack_e0;
  do {
    local_b8 = uVar9;
    local_a8[0] = ppvVar10;
    pcVar1 = *(code **)((longlong)*param_3 + 0x18);
    uStack_b0 = uVar2;
    local_a8[1] = (void **)uVar3;
    *(undefined8 *)(puVar17 + -8) = 0x142cd2f1c;
    (*pcVar1)(param_3,local_a8,&local_b8);
    local_98 = uVar5;
    uStack_94 = uVar6;
    iStack_90 = iVar7;
    uStack_8c = uVar8;
    local_88[0] = ppvVar11;
    pcVar1 = *(code **)((longlong)*param_3 + 0x20);
    local_88[1] = (void **)uVar4;
    *(undefined8 *)(puVar17 + -8) = 0x142cd2f3e;
    (*pcVar1)(param_3,local_88,&local_98);
    local_78.DataPtr = ppvVar11;
    local_68.DataPtr = ppvVar10;
    local_78._8_8_ = uVar4;
    local_68._8_8_ = uVar3;
    *(undefined8 *)(puVar17 + -8) = 0x142cd2f63;
    bVar12 = (*param_4)(param_3,&local_68,&local_78);
    if (!bVar12) break;
    this = *ppvVar16;
    do {
      *(undefined8 *)(puVar17 + -8) = 0x142cd2f7f;
      ::FString::operator=(this,L"Callback");
      this = this + 1;
      pcVar1 = *(code **)((longlong)*param_3 + 0x10);
      *(undefined8 *)(puVar17 + -8) = 0x142cd2f8c;
      cVar13 = (*pcVar1)(param_3);
    } while (cVar13 != '\0');
    pcVar1 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar17 + -8) = 0x142cd2f99;
    cVar13 = (*pcVar1)(param_3);
  } while (cVar13 != '\0');
  *(undefined8 *)(puVar17 + -8) = 0x142cd2fb0;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString_&,FTestColumnInt_const_&>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_const_&> @ 142cd3050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l121::<lambda_14>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString_&,FTestColumnInt_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l121::<lambda_14>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_14> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  FTestColumnString *pFVar12;
  FTestColumnInt *pFVar13;
  void **ppvVar14;
  void **ppvVar15;
  bool bVar16;
  char cVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  void **ppvVar22;
  int *piVar23;
  void **ppvVar24;
  undefined1 auStack_138 [32];
  FTestColumnString *local_118;
  FTestColumnInt *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  void **local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  void **local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  void **local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  void **local_98 [2];
  TArrayView<void_*,int> local_88;
  TArrayView<void_const_*,int> local_78;
  ulonglong local_68;
  
  puVar20 = auStack_138;
  local_68 = __security_cookie.value ^ (ulonglong)&local_118;
  piVar23 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar23 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
    _DAT_155061300 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar7 = uRam0000000155061304;
  iVar6 = _DAT_155061300;
  uVar4 = _Result;
  uVar5 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
          ::__l3::Result_4;
  local_f8 = _Result;
  uStack_f4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
              ::__l3::Result_4;
  iStack_f0 = _DAT_155061300;
  uStack_ec = uRam0000000155061304;
  if ((*piVar23 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
    _DAT_155061320 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar11 = uRam0000000155061324;
  iVar10 = _DAT_155061320;
  uVar8 = _Result;
  uVar9 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
          ::__l3::Result_4;
  ppvVar22 = (void **)0x0;
  local_108 = _Result;
  uStack_104 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<130>(void)'
               ::__l3::Result_4;
  iStack_100 = _DAT_155061320;
  uStack_fc = uRam0000000155061324;
  lVar18 = (longlong)iVar6 * 8;
  ppvVar24 = ppvVar22;
  if (lVar18 != 0) {
    uVar19 = lVar18 + 0x1e;
    if (uVar19 <= lVar18 + 0xfU) {
      uVar19 = 0xffffffffffffff0;
    }
    puVar20 = auStack_138 + -(uVar19 & 0xfffffffffffffff0);
    ppvVar24 = (void **)((longlong)&local_110 + -(uVar19 & 0xfffffffffffffff0));
  }
  lVar18 = (longlong)_DAT_155061320 * 8;
  puVar21 = puVar20;
  if (lVar18 != 0) {
    uVar19 = lVar18 + 0x1e;
    if (uVar19 <= lVar18 + 0xfU) {
      uVar19 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar20 + -8) = 0x142cd3186;
    puVar21 = puVar20 + -(uVar19 & 0xfffffffffffffff0);
    ppvVar22 = (void **)((ulonglong)(puVar20 + -(uVar19 & 0xfffffffffffffff0) + 0x2f) &
                        0xfffffffffffffff0);
  }
  iStack_e0 = iVar6;
  local_e8 = ppvVar24;
  if (iVar6 < 0) {
    *(undefined8 *)(puVar21 + -8) = 0x142cd31c1;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_d0 = iVar10;
  local_d8 = ppvVar22;
  if (iVar10 < 0) {
    *(undefined8 *)(puVar21 + -8) = 0x142cd31fe;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppvVar15 = local_d8;
  ppvVar14 = local_e8;
  uVar2._4_4_ = uStack_dc;
  uVar2._0_4_ = iStack_e0;
  uVar3._4_4_ = uStack_cc;
  uVar3._0_4_ = iStack_d0;
  local_110 = (FTestColumnInt *)0x0;
  do {
    local_c8 = uVar4;
    uStack_c4 = uVar5;
    iStack_c0 = iVar6;
    uStack_bc = uVar7;
    local_b8[0] = ppvVar14;
    pcVar1 = *(code **)((longlong)*param_3 + 0x18);
    local_b8[1] = (void **)uVar2;
    *(undefined8 *)(puVar21 + -8) = 0x142cd324c;
    (*pcVar1)(param_3,local_b8,&local_c8);
    local_a8 = uVar8;
    uStack_a4 = uVar9;
    iStack_a0 = iVar10;
    uStack_9c = uVar11;
    local_98[0] = ppvVar15;
    pcVar1 = *(code **)((longlong)*param_3 + 0x20);
    local_98[1] = (void **)uVar3;
    *(undefined8 *)(puVar21 + -8) = 0x142cd326e;
    (*pcVar1)(param_3,local_98,&local_a8);
    local_88.DataPtr = ppvVar15;
    local_78.DataPtr = ppvVar14;
    local_88._8_8_ = uVar3;
    local_78._8_8_ = uVar2;
    *(undefined8 *)(puVar21 + -8) = 0x142cd3294;
    bVar16 = (*param_4)(param_3,&local_78,&local_88);
    if (!bVar16) break;
    local_110 = *ppvVar24;
    local_118 = *ppvVar22;
    do {
      pFVar13 = local_110;
      pFVar12 = local_118;
      *(undefined8 *)(puVar21 + -8) = 0x142cd32ae;
      `UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>
      ::operator()(param_5,pFVar12,pFVar13);
      local_118 = local_118 + 1;
      local_110 = local_110 + 1;
      pcVar1 = *(code **)((longlong)*param_3 + 0x10);
      *(undefined8 *)(puVar21 + -8) = 0x142cd32c1;
      cVar17 = (*pcVar1)(param_3);
    } while (cVar17 != '\0');
    pcVar1 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar21 + -8) = 0x142cd32d8;
    cVar17 = (*pcVar1)(param_3);
  } while (cVar17 != '\0');
  *(undefined8 *)(puVar21 + -8) = 0x142cd32ef;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_const_&> @ 142cd33e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l125::<lambda_15>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l125::<lambda_15>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_15> *param_5)

{
  FTestColumnInt *pFVar1;
  FTestColumnString *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  void **ppvVar14;
  void **ppvVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  void **ppvVar24;
  void **ppvVar25;
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  undefined1 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  FTestColumnString *local_128;
  FTestColumnInt *local_120;
  IContextContract *local_118;
  FTestColumnString *local_110;
  FTestColumnInt *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  void **local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  void **local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  void **local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  void **local_98 [2];
  TArrayView<void_*,int> local_88;
  TArrayView<void_const_*,int> local_78;
  ulonglong local_68;
  
  puVar22 = auStack_168;
  local_68 = __security_cookie.value ^ (ulonglong)local_148;
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
    _DAT_155061340 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar9 = uRam0000000155061344;
  iVar8 = _DAT_155061340;
  uVar6 = _Result;
  uVar7 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
          ::__l3::Result_4;
  local_f8 = _Result;
  uStack_f4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
              ::__l3::Result_4;
  iStack_f0 = _DAT_155061340;
  uStack_ec = uRam0000000155061344;
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<130>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<130>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
    _DAT_155061360 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar13 = uRam0000000155061364;
  iVar12 = _DAT_155061360;
  uVar10 = _Result;
  uVar11 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<130>(void)'
           ::__l3::Result_4;
  ppvVar24 = (void **)0x0;
  local_138 = _Result;
  uStack_134 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<130>(void)'
               ::__l3::Result_4;
  iStack_130 = _DAT_155061360;
  uStack_12c = uRam0000000155061364;
  lVar19 = (longlong)iVar8 * 8;
  ppvVar25 = ppvVar24;
  if (lVar19 != 0) {
    uVar20 = lVar19 + 0x1e;
    if (uVar20 <= lVar19 + 0xfU) {
      uVar20 = 0xffffffffffffff0;
    }
    puVar22 = auStack_168 + -(uVar20 & 0xfffffffffffffff0);
    ppvVar25 = (void **)((longlong)&local_140 + -(uVar20 & 0xfffffffffffffff0));
  }
  lVar19 = (longlong)_DAT_155061360 * 8;
  puVar23 = puVar22;
  if (lVar19 != 0) {
    uVar20 = lVar19 + 0x1e;
    if (uVar20 <= lVar19 + 0xfU) {
      uVar20 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar22 + -8) = 0x142cd3521;
    puVar23 = puVar22 + -(uVar20 & 0xfffffffffffffff0);
    ppvVar24 = (void **)((ulonglong)(puVar22 + -(uVar20 & 0xfffffffffffffff0) + 0x2f) &
                        0xfffffffffffffff0);
  }
  iStack_e0 = iVar8;
  local_e8 = ppvVar25;
  if (iVar8 < 0) {
    *(undefined8 *)(puVar23 + -8) = 0x142cd355c;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iStack_d0 = iVar12;
  local_d8 = ppvVar24;
  if (iVar12 < 0) {
    *(undefined8 *)(puVar23 + -8) = 0x142cd3599;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ppvVar15 = local_d8;
  ppvVar14 = local_e8;
  uVar4._4_4_ = uStack_dc;
  uVar4._0_4_ = iStack_e0;
  uVar5._4_4_ = uStack_cc;
  uVar5._0_4_ = iStack_d0;
  local_110 = (FTestColumnString *)0x0;
  local_108 = (FTestColumnInt *)0x0;
  local_118 = param_2;
  do {
    local_c8 = uVar6;
    uStack_c4 = uVar7;
    iStack_c0 = iVar8;
    uStack_bc = uVar9;
    local_b8[0] = ppvVar14;
    pcVar3 = *(code **)((longlong)*param_3 + 0x18);
    local_b8[1] = (void **)uVar4;
    *(undefined8 *)(puVar23 + -8) = 0x142cd35e8;
    (*pcVar3)(param_3,local_b8,&local_c8);
    local_a8 = uVar10;
    uStack_a4 = uVar11;
    iStack_a0 = iVar12;
    uStack_9c = uVar13;
    local_98[0] = ppvVar15;
    pcVar3 = *(code **)((longlong)*param_3 + 0x20);
    local_98[1] = (void **)uVar5;
    *(undefined8 *)(puVar23 + -8) = 0x142cd3610;
    (*pcVar3)(param_3,local_98,&local_a8);
    local_88.DataPtr = ppvVar15;
    local_78.DataPtr = ppvVar14;
    local_88._8_8_ = uVar5;
    local_78._8_8_ = uVar4;
    *(undefined8 *)(puVar23 + -8) = 0x142cd3636;
    bVar16 = (*param_4)(param_3,&local_78,&local_88);
    if (!bVar16) break;
    pFVar1 = *ppvVar25;
    pFVar2 = *ppvVar24;
    pcVar3 = *(code **)(*(longlong *)&local_118->field_0x8 + 8);
    local_110 = pFVar2;
    local_108 = pFVar1;
    *(undefined8 *)(puVar23 + -8) = 0x142cd3656;
    uVar18 = (*pcVar3)();
    local_128 = pFVar2;
    local_120 = pFVar1;
    if (uVar18 != 0) {
      uVar20 = (ulonglong)uVar18;
      local_140 = local_148;
      do {
        *(undefined8 *)(puVar23 + -8) = 0x142cd3681;
        `UE::Editor::DataStorage::Queries::Private::
        TForwarder<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
        ::
        ForEachRow<``UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>::operator()'::__l2::<lambda_1>,FTestColumnString,FTestColumnInt_const_>'
        ::__l4::<lambda_1>::operator()(&local_140,&local_128,&local_120);
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    pcVar3 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar23 + -8) = 0x142cd3690;
    cVar17 = (*pcVar3)(param_3);
  } while (cVar17 != '\0');
  *(undefined8 *)(puVar23 + -8) = 0x142cd36a7;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_const_&> @ 142cd3790

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::E]::<lambda_17>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::E]::<lambda_17>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_17> *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  UScriptStruct *local_res10;
  uint uStack_7c;
  TArrayView<void_const_*,int> local_78;
  TArrayView<void_*,int> local_68;
  UScriptStruct **local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  
  local_58 = (UScriptStruct **)0x0;
  uStack_50 = 0;
  uVar1 = (ulonglong)uStack_4c;
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  uVar2 = local_78._8_8_;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar3 = local_68._8_8_;
  do {
    local_68.DataPtr = (void **)0x0;
    local_78.DataPtr = (void **)0x0;
    local_68.ArrayNum = (int)uVar3;
    local_68._12_4_ = SUB84(uVar3,4);
    local_78.ArrayNum = local_68.ArrayNum;
    local_78._12_4_ = local_68._12_4_;
    local_68._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_78,&local_68);
    local_68.DataPtr = (void **)0x0;
    local_78.ArrayNum = (int)uVar2;
    local_78._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_78.ArrayNum;
    local_68._12_4_ = local_78._12_4_;
    local_78.DataPtr = (void **)0x0;
    local_78._8_8_ = uVar1 << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_78,&local_68);
    local_68.DataPtr = (UScriptStruct **)0x0;
    local_78.DataPtr = (void **)0x0;
    local_68.ArrayNum = (int)uVar3;
    local_68._12_4_ = SUB84(uVar3,4);
    local_78.ArrayNum = local_68.ArrayNum;
    local_78._12_4_ = local_68._12_4_;
    local_68._8_8_ = uVar1 << 0x20;
    bVar4 = (*param_4)(param_3,&local_78,&local_68);
    if (!bVar4) {
      return;
    }
    do {
      (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
      local_res10 = FTestColumnString::StaticStruct();
      local_68.DataPtr = &local_res10;
      uStack_50 = 1;
      local_68._12_4_ = uStack_4c;
      local_68.ArrayNum = 1;
      local_58 = local_68.DataPtr;
      (**(code **)(*(longlong *)param_2 + 8))(param_2,&local_68);
      cVar5 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar5 != '\0');
    cVar5 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar5 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_const_&> @ 142cd3900

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l3::<lambda_1>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l3::<lambda_1>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_1> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_const_&> @ 142cd3a10

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::L]::<lambda_20>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::L]::<lambda_20>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_20> *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  UScriptStruct *local_res10;
  uint uStack_7c;
  TArrayView<void_const_*,int> local_78;
  TArrayView<void_*,int> local_68;
  UScriptStruct **local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  
  local_58 = (UScriptStruct **)0x0;
  uStack_50 = 0;
  uVar1 = (ulonglong)uStack_4c;
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  uVar2 = local_78._8_8_;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar3 = local_68._8_8_;
  do {
    local_68.DataPtr = (void **)0x0;
    local_78.DataPtr = (void **)0x0;
    local_68.ArrayNum = (int)uVar3;
    local_68._12_4_ = SUB84(uVar3,4);
    local_78.ArrayNum = local_68.ArrayNum;
    local_78._12_4_ = local_68._12_4_;
    local_68._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_78,&local_68);
    local_68.DataPtr = (void **)0x0;
    local_78.ArrayNum = (int)uVar2;
    local_78._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_78.ArrayNum;
    local_68._12_4_ = local_78._12_4_;
    local_78.DataPtr = (void **)0x0;
    local_78._8_8_ = uVar1 << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_78,&local_68);
    local_68.DataPtr = (UScriptStruct **)0x0;
    local_78.DataPtr = (void **)0x0;
    local_68.ArrayNum = (int)uVar3;
    local_68._12_4_ = SUB84(uVar3,4);
    local_78.ArrayNum = local_68.ArrayNum;
    local_78._12_4_ = local_68._12_4_;
    local_68._8_8_ = uVar1 << 0x20;
    bVar4 = (*param_4)(param_3,&local_78,&local_68);
    if (!bVar4) {
      return;
    }
    do {
      (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
      local_res10 = FTestColumnString::StaticStruct();
      local_68.DataPtr = &local_res10;
      uStack_50 = 1;
      local_68._12_4_ = uStack_4c;
      local_68.ArrayNum = 1;
      local_58 = local_68.DataPtr;
      (**(code **)(*(longlong *)param_2 + 8))(param_2,&local_68);
      cVar5 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar5 != '\0');
    cVar5 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar5 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_const_&> @ 142cd3b80

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l146::<lambda_23>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l146::<lambda_23>_const_&>
          (TResult<bool> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_23> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      (**(code **)*param_1)(param_1,1);
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TResult<bool>_&>,bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_const_&> @ 142cd3cb0

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l150::<lambda_24>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TResult<bool>_&>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l150::<lambda_24>_const_&>
          (TResult<bool> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_24> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      (**(code **)*param_1)(param_1,1);
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>_&,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>,int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_const_&> @ 142cd3de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l154::<lambda_25>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>_&,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>,int,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l154::<lambda_25>_const_&>
          (TResult<int> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_25> *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  TResult<int> *pTVar9;
  TResult<int> *pTVar10;
  void **ppvVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  void **ppvVar18;
  ulonglong uVar19;
  undefined1 auStack_158 [32];
  IContextContract *local_138;
  TResult<int> *local_130 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  void **local_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  void **local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  TArrayView<void_*,int> local_88;
  TArrayView<void_const_*,int> local_78;
  ulonglong local_68;
  
  puVar17 = auStack_158;
  local_68 = __security_cookie.value ^ (ulonglong)&local_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
    _DAT_155061380 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar8 = uRam0000000155061384;
  iVar7 = _DAT_155061380;
  uVar5 = _Result;
  uVar6 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
          ::__l3::Result_4;
  ppvVar18 = (void **)0x0;
  local_130[3] = (TResult<int> *)0x0;
  local_d8 = _Result;
  uStack_d4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>&___ptr64,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>::ListColumns<129>(void)'
              ::__l3::Result_4;
  iStack_d0 = _DAT_155061380;
  uStack_cc = uRam0000000155061384;
  uStack_110 = 0;
  lVar15 = (longlong)_DAT_155061380 * 8;
  if (lVar15 != 0) {
    uVar19 = lVar15 + 0x1e;
    if (uVar19 <= lVar15 + 0xfU) {
      uVar19 = 0xffffffffffffff0;
    }
    puVar17 = auStack_158 + -(uVar19 & 0xfffffffffffffff0);
    ppvVar18 = (void **)((longlong)local_130 + -(uVar19 & 0xfffffffffffffff0));
  }
  iStack_100 = _DAT_155061380;
  local_108 = ppvVar18;
  if (_DAT_155061380 < 0) {
    *(undefined8 *)(puVar17 + -8) = 0x142cd3f02;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ppvVar11 = local_108;
  pTVar10 = local_130[3];
  uVar3 = CONCAT44(uStack_10c,uStack_110);
  uVar4._4_4_ = uStack_fc;
  uVar4._0_4_ = iStack_100;
  local_f8 = 0;
  uStack_f0 = 0;
  local_130[1] = (TResult<int> *)0x0;
  local_138 = param_2;
  local_130[0] = param_1;
  do {
    local_c8 = uVar5;
    uStack_c4 = uVar6;
    iStack_c0 = iVar7;
    uStack_bc = uVar8;
    local_b8[0] = ppvVar11;
    pcVar2 = *(code **)((longlong)*param_3 + 0x18);
    local_b8[1] = (void **)uVar4;
    *(undefined8 *)(puVar17 + -8) = 0x142cd3f51;
    (*pcVar2)(param_3,local_b8,&local_c8);
    local_a8 = pTVar10;
    local_98 = 0;
    pcVar2 = *(code **)((longlong)*param_3 + 0x20);
    uStack_a0 = uVar3;
    lStack_90 = (ulonglong)uStack_ec << 0x20;
    *(undefined8 *)(puVar17 + -8) = 0x142cd3f7a;
    (*pcVar2)(param_3,&local_98,&local_a8);
    local_88.DataPtr = (void **)0x0;
    local_78.DataPtr = ppvVar11;
    local_88._8_8_ = (ulonglong)uStack_ec << 0x20;
    local_78._8_8_ = uVar4;
    *(undefined8 *)(puVar17 + -8) = 0x142cd3f9f;
    bVar12 = (*param_4)(param_3,&local_78,&local_88);
    pTVar9 = local_130[0];
    if (!bVar12) break;
    puVar16 = *ppvVar18;
    pcVar2 = *(code **)(*(longlong *)&local_138->field_0x8 + 8);
    local_130[1] = (TResult<int> *)puVar16;
    *(undefined8 *)(puVar17 + -8) = 0x142cd3fbc;
    uVar14 = (*pcVar2)();
    if (uVar14 != 0) {
      uVar19 = (ulonglong)uVar14;
      do {
        uVar1 = *puVar16;
        puVar16 = puVar16 + 1;
        pcVar2 = *(code **)*pTVar9;
        *(undefined8 *)(puVar17 + -8) = 0x142cd3fd0;
        (*pcVar2)(pTVar9,uVar1);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    pcVar2 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar17 + -8) = 0x142cd3fdf;
    cVar13 = (*pcVar2)(param_3);
  } while (cVar13 != '\0');
  *(undefined8 *)(puVar17 + -8) = 0x142cd3ff6;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<enum_UE::Editor::DataStorage::Queries::EFlowControl_&,FTestColumnInt_const_&>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_const_&> @ 142cd40a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l158::<lambda_27>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<enum_UE::Editor::DataStorage::Queries::EFlowControl_&,FTestColumnInt_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l158::<lambda_27>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_27> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  void **ppvVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  void **ppvVar15;
  undefined1 auStack_138 [32];
  int local_118 [2];
  int *local_110 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void **local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  void **local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  TArrayView<void_*,int> local_78;
  TArrayView<void_const_*,int> local_68;
  ulonglong local_58;
  
  puVar14 = auStack_138;
  local_58 = __security_cookie.value ^ (ulonglong)local_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::EFlowControl&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::EFlowControl&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::EFlowControl&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::EFlowControl&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
    _DAT_1550613a0 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::EFlowControl&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::EFlowControl&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar7 = uRam00000001550613a4;
  iVar6 = _DAT_1550613a0;
  uVar4 = _Result;
  uVar5 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::EFlowControl&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
          ::__l3::Result_4;
  ppvVar15 = (void **)0x0;
  local_110[3] = (int *)0x0;
  local_c8 = _Result;
  uStack_c4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::EFlowControl&___ptr64,FTestColumnInt_const&___ptr64>::ListColumns<129>(void)'
              ::__l3::Result_4;
  iStack_c0 = _DAT_1550613a0;
  uStack_bc = uRam00000001550613a4;
  uStack_f0 = 0;
  lVar12 = (longlong)_DAT_1550613a0 * 8;
  if (lVar12 != 0) {
    uVar13 = lVar12 + 0x1e;
    if (uVar13 <= lVar12 + 0xfU) {
      uVar13 = 0xffffffffffffff0;
    }
    puVar14 = auStack_138 + -(uVar13 & 0xfffffffffffffff0);
    ppvVar15 = (void **)((longlong)local_110 + -(uVar13 & 0xfffffffffffffff0));
  }
  iStack_e0 = _DAT_1550613a0;
  local_e8 = ppvVar15;
  if (_DAT_1550613a0 < 0) {
    *(undefined8 *)(puVar14 + -8) = 0x142cd41b6;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppvVar9 = local_e8;
  piVar8 = local_110[3];
  uVar2 = CONCAT44(uStack_ec,uStack_f0);
  uVar3._4_4_ = uStack_dc;
  uVar3._0_4_ = iStack_e0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_110[1] = (int *)0x0;
  local_118[0] = 0;
  local_110[0] = local_118;
  while( true ) {
    local_b8 = uVar4;
    uStack_b4 = uVar5;
    iStack_b0 = iVar6;
    uStack_ac = uVar7;
    local_a8[0] = ppvVar9;
    pcVar1 = *(code **)((longlong)*param_3 + 0x18);
    local_a8[1] = (void **)uVar3;
    *(undefined8 *)(puVar14 + -8) = 0x142cd420b;
    (*pcVar1)(param_3,local_a8,&local_b8);
    local_98 = piVar8;
    local_88 = 0;
    pcVar1 = *(code **)((longlong)*param_3 + 0x20);
    uStack_90 = uVar2;
    lStack_80 = (ulonglong)uStack_cc << 0x20;
    *(undefined8 *)(puVar14 + -8) = 0x142cd4234;
    (*pcVar1)(param_3,&local_88,&local_98);
    local_78.DataPtr = (void **)0x0;
    local_68.DataPtr = ppvVar9;
    local_78._8_8_ = (ulonglong)uStack_cc << 0x20;
    local_68._8_8_ = uVar3;
    *(undefined8 *)(puVar14 + -8) = 0x142cd4259;
    bVar10 = (*param_4)(param_3,&local_68,&local_78);
    if (!bVar10) break;
    local_110[1] = *ppvVar15;
    do {
      *param_5->LastValue = *local_110[1];
      *local_110[0] = 1;
      local_110[1] = local_110[1] + 1;
      if (local_118[0] != 0) goto LAB_142cd42aa;
      pcVar1 = *(code **)((longlong)*param_3 + 0x10);
      *(undefined8 *)(puVar14 + -8) = 0x142cd4289;
      cVar11 = (*pcVar1)(param_3);
    } while (cVar11 != '\0');
    if (local_118[0] != 0) break;
    pcVar1 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar14 + -8) = 0x142cd42a2;
    cVar11 = (*pcVar1)(param_3);
    if (cVar11 == '\0') break;
  }
LAB_142cd42aa:
  *(undefined8 *)(puVar14 + -8) = 0x142cd42b9;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_const_&> @ 142cd4350

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l13::<lambda_2>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l13::<lambda_2>_const_&>
          (TResult<bool> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_2> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      (**(code **)*param_1)(param_1,0);
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_const_&> @ 142cd4480

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l23::<lambda_3>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l23::<lambda_3>_const_&>
          (TResult<bool> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_3> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      (**(code **)*param_1)(param_1,*param_5->bResult);
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_const_&> @ 142cd45c0

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l33::<lambda_4>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l33::<lambda_4>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_4> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt_&,FTestColumnString_const_&>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_const_&> @ 142cd46d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l43::<lambda_5>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt_&,FTestColumnString_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l43::<lambda_5>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_5> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  void **ppvVar12;
  void **ppvVar13;
  bool bVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  void **ppvVar20;
  int *piVar21;
  void **ppvVar22;
  undefined1 auStack_138 [32];
  void *local_118;
  void *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  void **local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  void **local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  void **local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  void **local_98 [2];
  TArrayView<void_*,int> local_88;
  TArrayView<void_const_*,int> local_78;
  ulonglong local_68;
  
  puVar18 = auStack_138;
  local_68 = __security_cookie.value ^ (ulonglong)&local_118;
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
    _DAT_1550611e0 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar7 = uRam00000001550611e4;
  iVar6 = _DAT_1550611e0;
  uVar4 = _Result;
  uVar5 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
          ::__l3::Result_4;
  local_f8 = _Result;
  uStack_f4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
              ::__l3::Result_4;
  iStack_f0 = _DAT_1550611e0;
  uStack_ec = uRam00000001550611e4;
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
    _DAT_155061200 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar11 = uRam0000000155061204;
  iVar10 = _DAT_155061200;
  uVar8 = _Result;
  uVar9 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
          ::__l3::Result_4;
  ppvVar22 = (void **)0x0;
  local_108 = _Result;
  uStack_104 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
               ::__l3::Result_4;
  iStack_100 = _DAT_155061200;
  uStack_fc = uRam0000000155061204;
  lVar16 = (longlong)iVar6 * 8;
  ppvVar20 = ppvVar22;
  if (lVar16 != 0) {
    uVar17 = lVar16 + 0x1e;
    if (uVar17 <= lVar16 + 0xfU) {
      uVar17 = 0xffffffffffffff0;
    }
    puVar18 = auStack_138 + -(uVar17 & 0xfffffffffffffff0);
    ppvVar20 = (void **)((longlong)&local_110 + -(uVar17 & 0xfffffffffffffff0));
  }
  lVar16 = (longlong)_DAT_155061200 * 8;
  puVar19 = puVar18;
  if (lVar16 != 0) {
    uVar17 = lVar16 + 0x1e;
    if (uVar17 <= lVar16 + 0xfU) {
      uVar17 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar18 + -8) = 0x142cd4805;
    puVar19 = puVar18 + -(uVar17 & 0xfffffffffffffff0);
    ppvVar22 = (void **)((ulonglong)(puVar18 + -(uVar17 & 0xfffffffffffffff0) + 0x2f) &
                        0xfffffffffffffff0);
  }
  iStack_e0 = iVar6;
  local_e8 = ppvVar20;
  if (iVar6 < 0) {
    *(undefined8 *)(puVar19 + -8) = 0x142cd4840;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_d0 = iVar10;
  local_d8 = ppvVar22;
  if (iVar10 < 0) {
    *(undefined8 *)(puVar19 + -8) = 0x142cd487f;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppvVar13 = local_d8;
  ppvVar12 = local_e8;
  uVar2._4_4_ = uStack_dc;
  uVar2._0_4_ = iStack_e0;
  uVar3._4_4_ = uStack_cc;
  uVar3._0_4_ = iStack_d0;
  local_110 = (void *)0x0;
  do {
    local_c8 = uVar4;
    uStack_c4 = uVar5;
    iStack_c0 = iVar6;
    uStack_bc = uVar7;
    local_b8[0] = ppvVar12;
    pcVar1 = *(code **)((longlong)*param_3 + 0x18);
    local_b8[1] = (void **)uVar2;
    *(undefined8 *)(puVar19 + -8) = 0x142cd48bc;
    (*pcVar1)(param_3,local_b8,&local_c8);
    local_a8 = uVar8;
    uStack_a4 = uVar9;
    iStack_a0 = iVar10;
    uStack_9c = uVar11;
    local_98[0] = ppvVar13;
    pcVar1 = *(code **)((longlong)*param_3 + 0x20);
    local_98[1] = (void **)uVar3;
    *(undefined8 *)(puVar19 + -8) = 0x142cd48de;
    (*pcVar1)(param_3,local_98,&local_a8);
    local_88.DataPtr = ppvVar13;
    local_78.DataPtr = ppvVar12;
    local_88._8_8_ = uVar3;
    local_78._8_8_ = uVar2;
    *(undefined8 *)(puVar19 + -8) = 0x142cd4904;
    bVar14 = (*param_4)(param_3,&local_78,&local_88);
    if (!bVar14) break;
    local_110 = *ppvVar20;
    local_118 = *ppvVar22;
    do {
      local_110 = (void *)((longlong)local_110 + 0x10);
      local_118 = (void *)((longlong)local_118 + 4);
      pcVar1 = *(code **)((longlong)*param_3 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x142cd4939;
      cVar15 = (*pcVar1)(param_3);
    } while (cVar15 != '\0');
    pcVar1 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar19 + -8) = 0x142cd4950;
    cVar15 = (*pcVar1)(param_3);
  } while (cVar15 != '\0');
  *(undefined8 *)(puVar19 + -8) = 0x142cd4967;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt_&,FTestColumnString_const_&>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_const_&> @ 142cd4a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l53::<lambda_6>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt_&,FTestColumnString_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l53::<lambda_6>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_6> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  void **ppvVar12;
  void **ppvVar13;
  bool bVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  void **ppvVar20;
  int *piVar21;
  void **ppvVar22;
  undefined1 auStack_148 [32];
  IContextContract *local_128;
  void *local_120 [3];
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  void **local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  void **local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  void **local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  void **local_98 [2];
  TArrayView<void_*,int> local_88;
  TArrayView<void_const_*,int> local_78;
  ulonglong local_68;
  
  puVar18 = auStack_148;
  local_68 = __security_cookie.value ^ (ulonglong)&local_128;
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
    _DAT_155061220 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar7 = uRam0000000155061224;
  iVar6 = _DAT_155061220;
  uVar4 = _Result;
  uVar5 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
          ::__l3::Result_4;
  local_f8 = _Result;
  uStack_f4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
              ::__l3::Result_4;
  iStack_f0 = _DAT_155061220;
  uStack_ec = uRam0000000155061224;
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
    _DAT_155061240 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar11 = uRam0000000155061244;
  iVar10 = _DAT_155061240;
  uVar8 = _Result;
  uVar9 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
          ::__l3::Result_4;
  ppvVar22 = (void **)0x0;
  local_108 = _Result;
  uStack_104 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt&___ptr64,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
               ::__l3::Result_4;
  iStack_100 = _DAT_155061240;
  uStack_fc = uRam0000000155061244;
  lVar16 = (longlong)iVar6 * 8;
  ppvVar20 = ppvVar22;
  if (lVar16 != 0) {
    uVar17 = lVar16 + 0x1e;
    if (uVar17 <= lVar16 + 0xfU) {
      uVar17 = 0xffffffffffffff0;
    }
    puVar18 = auStack_148 + -(uVar17 & 0xfffffffffffffff0);
    ppvVar20 = (void **)((longlong)local_120 + -(uVar17 & 0xfffffffffffffff0));
  }
  lVar16 = (longlong)_DAT_155061240 * 8;
  puVar19 = puVar18;
  if (lVar16 != 0) {
    uVar17 = lVar16 + 0x1e;
    if (uVar17 <= lVar16 + 0xfU) {
      uVar17 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar18 + -8) = 0x142cd4b8f;
    puVar19 = puVar18 + -(uVar17 & 0xfffffffffffffff0);
    ppvVar22 = (void **)((ulonglong)(puVar18 + -(uVar17 & 0xfffffffffffffff0) + 0x2f) &
                        0xfffffffffffffff0);
  }
  iStack_e0 = iVar6;
  local_e8 = ppvVar20;
  if (iVar6 < 0) {
    *(undefined8 *)(puVar19 + -8) = 0x142cd4bca;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_d0 = iVar10;
  local_d8 = ppvVar22;
  if (iVar10 < 0) {
    *(undefined8 *)(puVar19 + -8) = 0x142cd4c09;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppvVar13 = local_d8;
  ppvVar12 = local_e8;
  uVar2._4_4_ = uStack_dc;
  uVar2._0_4_ = iStack_e0;
  uVar3._4_4_ = uStack_cc;
  uVar3._0_4_ = iStack_d0;
  local_120[0] = (void *)0x0;
  local_120[1] = (void *)0x0;
  local_128 = param_2;
  do {
    local_c8 = uVar4;
    uStack_c4 = uVar5;
    iStack_c0 = iVar6;
    uStack_bc = uVar7;
    local_b8[0] = ppvVar12;
    pcVar1 = *(code **)((longlong)*param_3 + 0x18);
    local_b8[1] = (void **)uVar2;
    *(undefined8 *)(puVar19 + -8) = 0x142cd4c4c;
    (*pcVar1)(param_3,local_b8,&local_c8);
    local_a8 = uVar8;
    uStack_a4 = uVar9;
    iStack_a0 = iVar10;
    uStack_9c = uVar11;
    local_98[0] = ppvVar13;
    pcVar1 = *(code **)((longlong)*param_3 + 0x20);
    local_98[1] = (void **)uVar3;
    *(undefined8 *)(puVar19 + -8) = 0x142cd4c74;
    (*pcVar1)(param_3,local_98,&local_a8);
    local_88.DataPtr = ppvVar13;
    local_78.DataPtr = ppvVar12;
    local_88._8_8_ = uVar3;
    local_78._8_8_ = uVar2;
    *(undefined8 *)(puVar19 + -8) = 0x142cd4c9a;
    bVar14 = (*param_4)(param_3,&local_78,&local_88);
    if (!bVar14) break;
    local_120[1] = *ppvVar20;
    local_120[0] = *ppvVar22;
    do {
      local_120[1] = (void *)((longlong)local_120[1] + 0x10);
      local_120[0] = (void *)((longlong)local_120[0] + 4);
      pcVar1 = *(code **)((longlong)*param_3 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x142cd4cc9;
      cVar15 = (*pcVar1)(param_3);
    } while (cVar15 != '\0');
    pcVar1 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar19 + -8) = 0x142cd4ce0;
    cVar15 = (*pcVar1)(param_3);
  } while (cVar15 != '\0');
  *(undefined8 *)(puVar19 + -8) = 0x142cd4cf7;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt_&,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const_&>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_const_&> @ 142cd4de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l69::<lambda_7>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt_&,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l69::<lambda_7>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_7> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  void **ppvVar12;
  void **ppvVar13;
  bool bVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  void **ppvVar20;
  int *piVar21;
  void **ppvVar22;
  undefined1 auStack_148 [32];
  void *local_128;
  IContextContract *local_120;
  void *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  void **local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  void **local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  void **local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  void **local_98 [2];
  TArrayView<void_*,int> local_88;
  TArrayView<void_const_*,int> local_78;
  ulonglong local_68;
  
  puVar18 = auStack_148;
  local_68 = __security_cookie.value ^ (ulonglong)&local_128;
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
    _DAT_155061260 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar7 = uRam0000000155061264;
  iVar6 = _DAT_155061260;
  uVar4 = _Result;
  uVar5 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
          ::__l3::Result_4;
  local_f8 = _Result;
  uStack_f4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<129>(void)'
              ::__l3::Result_4;
  iStack_f0 = _DAT_155061260;
  uStack_ec = uRam0000000155061264;
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
    _DAT_155061280 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar11 = uRam0000000155061284;
  iVar10 = _DAT_155061280;
  uVar8 = _Result;
  uVar9 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
          ::__l3::Result_4;
  ppvVar22 = (void **)0x0;
  local_108 = _Result;
  uStack_104 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt&___ptr64,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const&___ptr64>::ListColumns<130>(void)'
               ::__l3::Result_4;
  iStack_100 = _DAT_155061280;
  uStack_fc = uRam0000000155061284;
  lVar16 = (longlong)iVar6 * 8;
  ppvVar20 = ppvVar22;
  if (lVar16 != 0) {
    uVar17 = lVar16 + 0x1e;
    if (uVar17 <= lVar16 + 0xfU) {
      uVar17 = 0xffffffffffffff0;
    }
    puVar18 = auStack_148 + -(uVar17 & 0xfffffffffffffff0);
    ppvVar20 = (void **)((longlong)&local_120 + -(uVar17 & 0xfffffffffffffff0));
  }
  lVar16 = (longlong)_DAT_155061280 * 8;
  puVar19 = puVar18;
  if (lVar16 != 0) {
    uVar17 = lVar16 + 0x1e;
    if (uVar17 <= lVar16 + 0xfU) {
      uVar17 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar18 + -8) = 0x142cd4f1f;
    puVar19 = puVar18 + -(uVar17 & 0xfffffffffffffff0);
    ppvVar22 = (void **)((ulonglong)(puVar18 + -(uVar17 & 0xfffffffffffffff0) + 0x2f) &
                        0xfffffffffffffff0);
  }
  iStack_e0 = iVar6;
  local_e8 = ppvVar20;
  if (iVar6 < 0) {
    *(undefined8 *)(puVar19 + -8) = 0x142cd4f5a;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_d0 = iVar10;
  local_d8 = ppvVar22;
  if (iVar10 < 0) {
    *(undefined8 *)(puVar19 + -8) = 0x142cd4f99;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppvVar13 = local_d8;
  ppvVar12 = local_e8;
  uVar2._4_4_ = uStack_dc;
  uVar2._0_4_ = iStack_e0;
  uVar3._4_4_ = uStack_cc;
  uVar3._0_4_ = iStack_d0;
  local_118 = (void *)0x0;
  local_120 = param_2;
  do {
    local_c8 = uVar4;
    uStack_c4 = uVar5;
    iStack_c0 = iVar6;
    uStack_bc = uVar7;
    local_b8[0] = ppvVar12;
    pcVar1 = *(code **)((longlong)*param_3 + 0x18);
    local_b8[1] = (void **)uVar2;
    *(undefined8 *)(puVar19 + -8) = 0x142cd4fdc;
    (*pcVar1)(param_3,local_b8,&local_c8);
    local_a8 = uVar8;
    uStack_a4 = uVar9;
    iStack_a0 = iVar10;
    uStack_9c = uVar11;
    local_98[0] = ppvVar13;
    pcVar1 = *(code **)((longlong)*param_3 + 0x20);
    local_98[1] = (void **)uVar3;
    *(undefined8 *)(puVar19 + -8) = 0x142cd5004;
    (*pcVar1)(param_3,local_98,&local_a8);
    local_88.DataPtr = ppvVar13;
    local_78.DataPtr = ppvVar12;
    local_88._8_8_ = uVar3;
    local_78._8_8_ = uVar2;
    *(undefined8 *)(puVar19 + -8) = 0x142cd502a;
    bVar14 = (*param_4)(param_3,&local_78,&local_88);
    if (!bVar14) break;
    local_118 = *ppvVar20;
    local_128 = *ppvVar22;
    do {
      local_118 = (void *)((longlong)local_118 + 0x10);
      local_128 = (void *)((longlong)local_128 + 4);
      pcVar1 = *(code **)((longlong)*param_3 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x142cd5059;
      cVar15 = (*pcVar1)(param_3);
    } while (cVar15 != '\0');
    pcVar1 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar19 + -8) = 0x142cd5070;
    cVar15 = (*pcVar1)(param_3);
  } while (cVar15 != '\0');
  *(undefined8 *)(puVar19 + -8) = 0x142cd5087;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_const_&> @ 142cd5170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l85::<lambda_8>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l85::<lambda_8>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_8> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  void **ppvVar12;
  void **ppvVar13;
  bool bVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  void **ppvVar20;
  int *piVar21;
  void **ppvVar22;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  IContextContract *local_118;
  void *local_110;
  void *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  void **local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  void **local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  void **local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  void **local_98 [2];
  TArrayView<void_*,int> local_88;
  TArrayView<void_const_*,int> local_78;
  ulonglong local_68;
  
  puVar18 = auStack_148;
  local_68 = __security_cookie.value ^ (ulonglong)&local_128;
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnString::StaticStruct();
    _DAT_1550612a0 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar7 = uRam00000001550612a4;
  iVar6 = _DAT_1550612a0;
  uVar4 = _Result;
  uVar5 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
          ::__l3::Result_4;
  local_f8 = _Result;
  uStack_f4 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<129>(void)'
              ::__l3::Result_4;
  iStack_f0 = _DAT_1550612a0;
  uStack_ec = uRam00000001550612a4;
  if ((*piVar21 <
       `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    `public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
    ::__l2::ResultColumns = (UScriptStruct **)FTestColumnInt::StaticStruct();
    _DAT_1550612c0 = 1;
    _Result = &`public:___cdecl_`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'::`3'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::ResultColumns;
    _Init_thread_footer(&`private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar11 = uRam00000001550612c4;
  iVar10 = _DAT_1550612c0;
  uVar8 = _Result;
  uVar9 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
          ::__l3::Result_4;
  ppvVar22 = (void **)0x0;
  local_128 = _Result;
  uStack_124 = `private:_static_class_TArrayView<UScriptStruct_const*___ptr64_const,int>___cdecl_UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>::ListColumns<130>(void)'
               ::__l3::Result_4;
  iStack_120 = _DAT_1550612c0;
  uStack_11c = uRam00000001550612c4;
  lVar16 = (longlong)iVar6 * 8;
  ppvVar20 = ppvVar22;
  if (lVar16 != 0) {
    uVar17 = lVar16 + 0x1e;
    if (uVar17 <= lVar16 + 0xfU) {
      uVar17 = 0xffffffffffffff0;
    }
    puVar18 = auStack_148 + -(uVar17 & 0xfffffffffffffff0);
    ppvVar20 = (void **)((longlong)&iStack_120 + -(uVar17 & 0xfffffffffffffff0));
  }
  lVar16 = (longlong)_DAT_1550612c0 * 8;
  puVar19 = puVar18;
  if (lVar16 != 0) {
    uVar17 = lVar16 + 0x1e;
    if (uVar17 <= lVar16 + 0xfU) {
      uVar17 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar18 + -8) = 0x142cd52af;
    puVar19 = puVar18 + -(uVar17 & 0xfffffffffffffff0);
    ppvVar22 = (void **)((ulonglong)(puVar18 + -(uVar17 & 0xfffffffffffffff0) + 0x2f) &
                        0xfffffffffffffff0);
  }
  iStack_e0 = iVar6;
  local_e8 = ppvVar20;
  if (iVar6 < 0) {
    *(undefined8 *)(puVar19 + -8) = 0x142cd52ea;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_d0 = iVar10;
  local_d8 = ppvVar22;
  if (iVar10 < 0) {
    *(undefined8 *)(puVar19 + -8) = 0x142cd5329;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppvVar13 = local_d8;
  ppvVar12 = local_e8;
  uVar2._4_4_ = uStack_dc;
  uVar2._0_4_ = iStack_e0;
  uVar3._4_4_ = uStack_cc;
  uVar3._0_4_ = iStack_d0;
  local_110 = (void *)0x0;
  local_108 = (void *)0x0;
  local_118 = param_2;
  do {
    local_c8 = uVar4;
    uStack_c4 = uVar5;
    iStack_c0 = iVar6;
    uStack_bc = uVar7;
    local_b8[0] = ppvVar12;
    pcVar1 = *(code **)((longlong)*param_3 + 0x18);
    local_b8[1] = (void **)uVar2;
    *(undefined8 *)(puVar19 + -8) = 0x142cd536c;
    (*pcVar1)(param_3,local_b8,&local_c8);
    local_a8 = uVar8;
    uStack_a4 = uVar9;
    iStack_a0 = iVar10;
    uStack_9c = uVar11;
    local_98[0] = ppvVar13;
    pcVar1 = *(code **)((longlong)*param_3 + 0x20);
    local_98[1] = (void **)uVar3;
    *(undefined8 *)(puVar19 + -8) = 0x142cd5394;
    (*pcVar1)(param_3,local_98,&local_a8);
    local_88.DataPtr = ppvVar13;
    local_78.DataPtr = ppvVar12;
    local_88._8_8_ = uVar3;
    local_78._8_8_ = uVar2;
    *(undefined8 *)(puVar19 + -8) = 0x142cd53ba;
    bVar14 = (*param_4)(param_3,&local_78,&local_88);
    if (!bVar14) break;
    local_108 = *ppvVar20;
    local_110 = *ppvVar22;
    pcVar1 = *(code **)((longlong)*param_3 + 8);
    *(undefined8 *)(puVar19 + -8) = 0x142cd53d5;
    cVar15 = (*pcVar1)(param_3);
  } while (cVar15 != '\0');
  *(undefined8 *)(puVar19 + -8) = 0x142cd53ec;
  return;
}

// CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_const_&> @ 142cd54e0

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l101::<lambda_9>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l101::<lambda_9>_const_&>
          (TResult<void> *param_1,IContextContract *param_2,IQueryFunctionResponse *param_3,
          _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
          *param_4,<lambda_9> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uStack_7c;
  uint uStack_6c;
  TArrayView<void_const_*,int> local_68;
  TArrayView<void_*,int> local_58 [5];
  
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  uVar1 = local_68._8_8_;
  local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
  uVar2 = local_58[0]._8_8_;
  do {
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = (ulonglong)uStack_7c << 0x20;
    (**(code **)((longlong)*param_3 + 0x18))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_58[0].ArrayNum = (int)uVar2;
    local_58[0]._12_4_ = SUB84(uVar2,4);
    local_68.ArrayNum = local_58[0].ArrayNum;
    local_68._12_4_ = local_58[0]._12_4_;
    local_58[0]._8_8_ = (ulonglong)uStack_6c << 0x20;
    (**(code **)((longlong)*param_3 + 0x20))(param_3,&local_68,local_58);
    local_58[0].DataPtr = (void **)0x0;
    local_68.DataPtr = (void **)0x0;
    local_68._8_8_ = uVar1;
    local_58[0]._8_8_ = uVar2;
    bVar3 = (*param_4)(param_3,&local_68,local_58);
    if (!bVar3) {
      return;
    }
    do {
      cVar4 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    } while (cVar4 != '\0');
    cVar4 = (**(code **)((longlong)*param_3 + 8))(param_3);
  } while (cVar4 != '\0');
  return;
}

// CallQueryFunction<1,UE::Editor::DataStorage::IDirectQueryContext,`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_> @ 142cd57f0

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallQueryFunction<1,UE::Editor::DataStorage::IDirectQueryContext,_UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery_::__l2::<lambda_1>_>
          (FQueryDescription *param_1,IDirectQueryContext *param_2,<lambda_1> *param_3)

{
  ulong64 *local_18 [2];
  
  (**(code **)((longlong)*param_2 + 0x10))(param_2,local_18);
  `UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>::
  operator()(param_3,param_2,local_18[0]);
  return;
}

// CallQueryFunction_Expand<1,UE::Editor::DataStorage::IDirectQueryContext,`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>,`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>,UE::Editor::DataStorage::IDirectQueryContext_const_&,unsigned___int64_const_*> @ 142cd5830

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallQueryFunction_Expand<1,UE::Editor::DataStorage::IDirectQueryContext,_UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery_::__l2::<lambda_1>,_UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery_::__l2::<lambda_1>,UE::Editor::DataStorage::IDirectQueryContext_const_&,unsigned___int64_const_*>
          (FQueryDescription *param_1,IDirectQueryContext *param_2,<lambda_1> *param_3,
          pmf_27ed70a8 param_4)

{
  ulong64 *local_18 [2];
  
  (**(code **)((longlong)*param_2 + 0x10))(param_2,local_18);
  `UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>::
  operator()(param_3,param_2,local_18[0]);
  return;
}

// CallQueryFunction_Expand<1,UE::Editor::DataStorage::ISubqueryContext,``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,UE::Editor::DataStorage::ISubqueryContext_&,unsigned___int64,FTEDSProcessorTestsReferenceColumn_const_&> @ 142cd5870

void __cdecl
UE::Editor::DataStorage::Queries::Private::
CallQueryFunction_Expand<1,UE::Editor::DataStorage::ISubqueryContext,__UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,__UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,UE::Editor::DataStorage::ISubqueryContext_&,unsigned___int64,FTEDSProcessorTestsReferenceColumn_const_&>
          (FQueryDescription *param_1,ISubqueryContext *param_2,<lambda_1> *param_3,
          pmf_bf9a5c29 param_4)

{
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *this;
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> <Var4;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *pTVar5;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar6;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar7;
  uint uVar8;
  ulong64 *puVar9;
  uint uVar10;
  ulong64 *puVar11;
  ulong64 *local_res8;
  FName local_res10;
  FString local_48;
  ulong64 *local_38;
  int local_30;
  
  puVar11 = (ulong64 *)0x0;
  <Var4.ColumnType = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  this = &param_1->SelectionTypes;
  pTVar5 = TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           ::
           FindByPredicate<_UE::Editor::DataStorage::Queries::Private::FFunctionColumnInfo<UE::Editor::DataStorage::ISubqueryContext,1,FTEDSProcessorTestsReferenceColumn_const_&>::CheckValidity<FTEDSProcessorTestsReferenceColumn_const_>_::__l3::<lambda_1>_>
                     (this,<Var4);
  if (pTVar5 == (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)0x0) {
    local_res10 = (FName)(<Var4.ColumnType)->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryBuilder.inl"
                       ,0x1aa,
                       L"Provided query callback couldn\'t be bound because target query doesn\'t contain a column of type \'%s\'."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FVar6 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar6 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
    }
    uVar8 = (uint)((longlong)pTVar5 - (longlong)FVar6 >> 3);
    uVar10 = 0;
    if ((int)uVar8 < (param_1->SelectionAccessTypes).ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar7 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
    FVar6 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      FVar7 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
              &param_1->SelectionAccessTypes;
    }
    if (FVar6 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar6 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
    }
    (**(code **)((longlong)*param_2 + 0x30))(param_2,1,&local_res8,FVar6,FVar7);
    puVar11 = local_res8;
  }
  (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_38);
  for (puVar9 = local_38; puVar9 != local_38 + local_30; puVar9 = puVar9 + 1) {
    uVar1 = *puVar9;
    if (*puVar11 == param_3->SecondaryRow) {
      ICommonQueryWithEnvironmentContext::AddColumns<FTEDSProcessorTests_Linked>
                ((ICommonQueryWithEnvironmentContext *)param_2,param_3->SecondaryRow);
      ICommonQueryWithEnvironmentContext::AddColumns<FTEDSProcessorTests_Linked>
                ((ICommonQueryWithEnvironmentContext *)param_2,uVar1);
    }
    puVar11 = puVar11 + 2;
  }
  return;
}

// ConstructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,FName,int> @ 142cd5bf0

void __cdecl
ConstructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,FName,int>
          (void *param_1,FName *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = param_2;
      param_2 = param_2 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>,FName,int> @ 142cd5c30

void __cdecl
ConstructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>,FName,int>
          (void *param_1,FName *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0xc);
    do {
      *(FName **)(puVar1 + -0xc) = param_2;
      param_2 = param_2 + 1;
      *(undefined4 *)(puVar1 + -4) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>,FAnsiString,int> @ 142cd5c60

void __cdecl
ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>,FAnsiString,int>
          (void *param_1,FAnsiString *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FScriptContainerElement **)(lVar3 + (longlong)param_2) =
           (param_2->Data).AllocatorInstance.Data;
      iVar1 = (param_2->Data).ArrayNum;
      param_2 = param_2 + 1;
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      *(int *)(lVar3 + -8 + (longlong)param_2) = iVar2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>,FString,int> @ 142cd5ca0

void __cdecl
ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>,FString,int>
          (void *param_1,FString *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FScriptContainerElement **)(lVar3 + (longlong)param_2) =
           (param_2->Data).AllocatorInstance.Data;
      iVar1 = (param_2->Data).ArrayNum;
      param_2 = param_2 + 1;
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      *(int *)(lVar3 + -8 + (longlong)param_2) = iVar2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>,FText,int> @ 142cd5ce0

void __cdecl
ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>,FText,int>
          (void *param_1,FText *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      pFVar3 = FText::ToString((FText *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4)
                              );
      *puVar4 = (pFVar3->Data).AllocatorInstance.Data;
      iVar1 = (pFVar3->Data).ArrayNum;
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      *(int *)(puVar4 + 1) = iVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>,FAnsiString,int> @ 142cd5d50

void __cdecl
ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>,FAnsiString,int>
          (void *param_1,FAnsiString *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FScriptContainerElement **)(lVar3 + (longlong)param_2) =
           (param_2->Data).AllocatorInstance.Data;
      iVar1 = (param_2->Data).ArrayNum;
      param_2 = param_2 + 1;
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      *(int *)(lVar3 + -8 + (longlong)param_2) = iVar2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>,FString,int> @ 142cd5d90

void __cdecl
ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>,FString,int>
          (void *param_1,FString *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FScriptContainerElement **)(lVar3 + (longlong)param_2) =
           (param_2->Data).AllocatorInstance.Data;
      iVar1 = (param_2->Data).ArrayNum;
      param_2 = param_2 + 1;
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      *(int *)(lVar3 + -8 + (longlong)param_2) = iVar2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>,FText,int> @ 142cd5dd0

void __cdecl
ConstructItems<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>,FText,int>
          (void *param_1,FText *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      pFVar3 = FText::ToString((FText *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4)
                              );
      *puVar4 = (pFVar3->Data).AllocatorInstance.Data;
      iVar1 = (pFVar3->Data).ArrayNum;
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      *(int *)(puVar4 + 1) = iVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnsiString,FAnsiString,int> @ 142cd5e40

void __cdecl
ConstructItems<FAnsiString,FAnsiString,int>(void *param_1,FAnsiString *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_> @ 142cd5ef0

TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&)>
* __cdecl UE::Editor::DataStorage::Queries::
          CreateDirectQueryCallbackBinding<_UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery_::__l2::<lambda_1>_>
                    (TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&)>
                     *__return_storage_ptr__,<lambda_1> *param_1)

{
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar1;
  
  pTVar1 = param_1->OutputRows;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateDirectQueryCallbackBinding_V<lambda_1>__1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_DataStorage_Editor_UE__IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_567__Z__Queries_DataStorage_Editor_UE__YA_AV__TFunction___A6AXAEBUFQueryDescription_DataStorage_Editor_UE__AEAUIDirectQueryContext_234__Z____QEAV1_1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_345_IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_345__Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> **)
   &__return_storage_ptr__->field_0x18 = pTVar1;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&>
         ::Call;
  }
  return __return_storage_ptr__;
}

// DestructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,int> @ 142cd71f0

void __cdecl
DestructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,int>
          (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Cache;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix'::__l2::FData,int> @ 142cd7230

void __cdecl
DestructItems<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::FData,int>
          (FData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Value;
    do {
      pFVar1 = (pTVar2->Cache).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *)(&pTVar2->Cache + 2);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`UE::Editor::DataStorage::Queries::Private::FFunctionColumnInfo<UE::Editor::DataStorage::ISubqueryContext,1,FTEDSProcessorTestsReferenceColumn_const_&>::CheckValidity<FTEDSProcessorTestsReferenceColumn_const_>'::__l3::<lambda_1>_> @ 142cd76f0

TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> * __thiscall
TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::
FindByPredicate<_UE::Editor::DataStorage::Queries::Private::FFunctionColumnInfo<UE::Editor::DataStorage::ISubqueryContext,1,FTEDSProcessorTestsReferenceColumn_const_&>::CheckValidity<FTEDSProcessorTestsReferenceColumn_const_>_::__l3::<lambda_1>_>
          (TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,<lambda_1> param_1)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  bool bVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> this_00;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  this_00 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
  if (FVar1 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    this_00 = FVar1;
  }
  FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
          ((longlong)this_00 + (longlong)this->ArrayNum * 8);
  while( true ) {
    if (this_00 == FVar1) {
      return (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)0x0;
    }
    bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                      ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)this_00,
                       param_1.ColumnType);
    if (bVar2) break;
    this_00 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
              ((longlong)this_00 + 8);
  }
  return (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)this_00;
}

// HeapSortInternal<UE::Editor::DataStorage::Queries::FColumnBase_const_,int,`UE::Editor::DataStorage::Tests::TestMatching'::__l5::<lambda_1>,TLess<void>_> @ 142cd77f0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Editor::DataStorage::Queries::FColumnBase_const_,int,_UE::Editor::DataStorage::Tests::TestMatching_::__l5::<lambda_1>,TLess<void>_>
          (FColumnBase *param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  code *pcVar1;
  FWeakObjectPtr FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  FColumnBase *pFVar13;
  FColumnBase *pFVar14;
  int iVar15;
  FColumnBase *this;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar15 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_142cd7927:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar12 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar13 = param_1 + lVar12;
          do {
            FVar3 = pFVar13->Identifier;
            FVar2 = (param_1->TypeInfo).WeakPtr;
            FVar4 = param_1->Identifier;
            (param_1->TypeInfo).WeakPtr = (pFVar13->TypeInfo).WeakPtr;
            param_1->Identifier = FVar3;
            (pFVar13->TypeInfo).WeakPtr = FVar2;
            pFVar13->Identifier = FVar4;
            iVar15 = 0;
            if (1 < iVar7) {
              do {
                iVar11 = iVar15 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + (iVar11 + 2)));
                  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + iVar6));
                  if (pUVar8 < pUVar9) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                this = param_1 + iVar15;
                pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
                pFVar14 = param_1 + iVar6;
                pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar14);
                if (pUVar9 <= pUVar8) break;
                FVar2 = (this->TypeInfo).WeakPtr;
                FVar3 = this->Identifier;
                FVar4 = pFVar14->Identifier;
                (this->TypeInfo).WeakPtr = (pFVar14->TypeInfo).WeakPtr;
                this->Identifier = FVar4;
                (pFVar14->TypeInfo).WeakPtr = FVar2;
                pFVar14->Identifier = FVar3;
                iVar15 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar12 = lVar12 + -1;
            pFVar13 = pFVar13 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar15 + -2;
      iVar15 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar10 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + (iVar7 + 2)));
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + iVar10));
      if (pUVar8 < pUVar9) {
        iVar10 = iVar7;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar14 = param_1 + iVar6;
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar14);
    pFVar13 = param_1 + iVar10;
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar13);
    if (pUVar9 <= pUVar8) goto LAB_142cd7927;
    FVar2 = (pFVar14->TypeInfo).WeakPtr;
    FVar3 = pFVar14->Identifier;
    iVar7 = iVar10 * 2 + 1;
    FVar4 = pFVar13->Identifier;
    (pFVar14->TypeInfo).WeakPtr = (pFVar13->TypeInfo).WeakPtr;
    pFVar14->Identifier = FVar4;
    (pFVar13->TypeInfo).WeakPtr = FVar2;
    pFVar13->Identifier = FVar3;
    iVar6 = iVar10;
  } while( true );
}

// HeapSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,TLess<void>_>_> @ 142cd7a40

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,TLess<void>_>_>
          (ulong64 *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned___int64,TLess<void>_> param_4)

{
  ulonglong uVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar7 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_142cd7b20:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = 0;
            uVar2 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = uVar2;
            if (1 < iVar6) {
              do {
                iVar5 = iVar9 * 2;
                iVar7 = iVar5 + 1;
                if (iVar5 + 2 < iVar6) {
                  if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
                    iVar7 = iVar5;
                  }
                  iVar7 = iVar7 + 1;
                }
                uVar1 = param_1[iVar9];
                if (param_1[iVar7] <= uVar1) break;
                param_1[iVar9] = param_1[iVar7];
                param_1[iVar7] = uVar1;
                iVar9 = iVar7;
              } while (iVar7 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar7 + -2;
      iVar7 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2] < param_1[iVar8]) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    uVar1 = param_1[iVar5];
    if (param_1[iVar8] <= uVar1) goto LAB_142cd7b20;
    param_1[iVar5] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = uVar1;
    iVar5 = iVar8;
  } while( true );
}

// InternalConstructor<UTest_PingPongBetweenPhaseFactory> @ 142cd7c70

void __cdecl InternalConstructor<UTest_PingPongBetweenPhaseFactory>(FObjectInitializer *param_1)

{
  UEditorDataStorageFactory *this;
  
  this = (UEditorDataStorageFactory *)param_1->Obj;
  if (this != (UEditorDataStorageFactory *)0x0) {
    UEditorDataStorageFactory::UEditorDataStorageFactory(this,param_1);
    *(undefined ***)this = &___7UTest_PingPongBetweenPhaseFactory__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UTest_PingPongBetweenPhaseFactory> @ 142cd7ca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTest_PingPongBetweenPhaseFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTest_PingPongBetweenPhaseFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UEditorDataStorageFactory::UEditorDataStorageFactory
              ((UEditorDataStorageFactory *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTest_PingPongBetweenPhaseFactory__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<UE::Editor::DataStorage::Queries::FColumnBase_const_,int,`UE::Editor::DataStorage::Tests::TestMatching'::__l5::<lambda_1>,TLess<void>_> @ 142cd7d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Editor::DataStorage::Queries::FColumnBase_const_,int,_UE::Editor::DataStorage::Tests::TestMatching_::__l5::<lambda_1>,TLess<void>_>
          (FColumnBase *param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  FName FVar1;
  FWeakObjectPtr FVar2;
  FName FVar3;
  FWeakObjectPtr FVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  FColumnBase *pFVar8;
  FColumnBase **ppFVar9;
  FColumnBase *pFVar10;
  FColumnBase *pFVar11;
  FColumnBase *pFVar12;
  FColumnBase *this;
  FColumnBase *pFVar13;
  float fVar14;
  undefined1 auStack_388 [32];
  <lambda_1> local_368;
  int local_364;
  FColumnBase *local_350;
  FColumnBase *local_348;
  FColumnBase *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_368 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppFVar9 = &local_348;
    do {
      pFVar10 = ppFVar9[1];
      pFVar13 = *ppFVar9;
      local_350 = ppFVar9[2];
      iVar5 = (int)((longlong)pFVar10 - (longlong)pFVar13 >> 4) + 1;
      local_364 = (int)local_350;
      this = pFVar13;
      if ((int)local_350 != 0) {
LAB_142cd7e15:
        if (8 < iVar5) {
          FVar1 = this->Identifier;
          pFVar11 = pFVar10 + 1;
          FVar2 = this[iVar5 / 2].TypeInfo.WeakPtr;
          FVar3 = this[iVar5 / 2].Identifier;
          this[iVar5 / 2].TypeInfo.WeakPtr = (this->TypeInfo).WeakPtr;
          this[iVar5 / 2].Identifier = FVar1;
          (this->TypeInfo).WeakPtr = FVar2;
          this->Identifier = FVar3;
          pFVar13 = this;
LAB_142cd7e42:
          pFVar8 = pFVar13;
          pFVar13 = pFVar8 + 1;
          if (pFVar13 <= pFVar10) goto code_r0x000142cd7e4b;
          goto LAB_142cd7e63;
        }
        for (; pFVar11 = this, pFVar13 = this, this < pFVar10; pFVar10 = pFVar10 + -1) {
          while (pFVar8 = pFVar11, pFVar13 = pFVar13 + 1, pFVar13 <= pFVar10) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar13);
            pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar8);
            pFVar11 = pFVar13;
            if (pUVar6 <= pUVar7) {
              pFVar11 = pFVar8;
            }
          }
          FVar2 = (pFVar8->TypeInfo).WeakPtr;
          FVar1 = pFVar8->Identifier;
          FVar3 = pFVar10->Identifier;
          (pFVar8->TypeInfo).WeakPtr = (pFVar10->TypeInfo).WeakPtr;
          pFVar8->Identifier = FVar3;
          (pFVar10->TypeInfo).WeakPtr = FVar2;
          pFVar10->Identifier = FVar1;
          param_3 = local_368;
        }
        goto LAB_142cd7f41;
      }
LAB_142cd7f2f:
      HeapSortInternal<UE::Editor::DataStorage::Queries::FColumnBase_const_,int,_UE::Editor::DataStorage::Tests::TestMatching_::__l5::<lambda_1>,TLess<void>_>
                (pFVar13,iVar5,param_3,param_4);
LAB_142cd7f41:
      ppFVar9 = ppFVar9 + -3;
    } while (&local_348 <= ppFVar9);
  }
  return;
code_r0x000142cd7e4b:
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar13);
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar6 <= pUVar7) goto LAB_142cd7e42;
LAB_142cd7e63:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= this) break;
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar11);
  } while (pUVar6 <= pUVar7);
  FVar2 = (pFVar11->TypeInfo).WeakPtr;
  FVar1 = pFVar12[-1].Identifier;
  if (pFVar13 <= pFVar11) {
    FVar4 = (pFVar13->TypeInfo).WeakPtr;
    FVar3 = pFVar8[1].Identifier;
    (pFVar13->TypeInfo).WeakPtr = FVar2;
    pFVar8[1].Identifier = FVar1;
    (pFVar11->TypeInfo).WeakPtr = FVar4;
    pFVar12[-1].Identifier = FVar3;
    goto LAB_142cd7e42;
  }
  FVar4 = (this->TypeInfo).WeakPtr;
  FVar3 = this->Identifier;
  local_364 = local_364 + -1;
  (this->TypeInfo).WeakPtr = FVar2;
  this->Identifier = FVar1;
  (pFVar11->TypeInfo).WeakPtr = FVar4;
  pFVar12[-1].Identifier = FVar3;
  if ((longlong)((longlong)pFVar11 + (-0x10 - (longlong)this) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar10 - (longlong)pFVar13 & 0xfffffffffffffff0U)) {
    if (pFVar13 < pFVar10) {
      *ppFVar9 = pFVar13;
      ppFVar9[1] = pFVar10;
      *(int *)(ppFVar9 + 2) = local_364;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar11 <= this + 1) goto LAB_142cd7f41;
    pFVar10 = pFVar12 + -2;
    pFVar13 = this;
  }
  else {
    if (this + 1 < pFVar11) {
      *ppFVar9 = this;
      ppFVar9[1] = pFVar12 + -2;
      *(int *)(ppFVar9 + 2) = local_364;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar10 <= pFVar13) goto LAB_142cd7f41;
  }
  iVar5 = (int)((longlong)pFVar10 - (longlong)pFVar13 >> 4) + 1;
  this = pFVar13;
  if (local_364 == 0) goto LAB_142cd7f2f;
  goto LAB_142cd7e15;
}

// IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,TLess<void>_>_> @ 142cd8020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,TLess<void>_>_>
          (ulong64 *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned___int64,TLess<void>_> param_4)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulong64 **ppuVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  ulong64 *local_338;
  ulong64 *local_328;
  ulong64 *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppuVar5 = &local_328;
    do {
      puVar8 = ppuVar5[1];
      puVar4 = *ppuVar5;
      puVar1 = ppuVar5[2];
      iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 3) + 1;
      local_338._0_4_ = (int)puVar1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_142cd80d0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar6 = puVar8 + 1;
          uVar2 = puVar9[iVar3 >> 1];
          puVar9[iVar3 >> 1] = *puVar9;
          *puVar9 = uVar2;
          puVar4 = puVar9;
LAB_142cd8100:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x000142cd8109;
          goto LAB_142cd8111;
        }
        for (; puVar6 = puVar9, puVar4 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar4 = puVar4 + 1, puVar4 <= puVar8) {
            if (*puVar6 < *puVar4) {
              puVar6 = puVar4;
            }
          }
          uVar2 = *puVar6;
          *puVar6 = *puVar8;
          *puVar8 = uVar2;
        }
        goto LAB_142cd81cb;
      }
LAB_142cd81ba:
      local_338 = puVar1;
      HeapSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,TLess<void>_>_>
                (puVar4,iVar3,param_3,param_4);
LAB_142cd81cb:
      ppuVar5 = ppuVar5 + -3;
    } while (&local_328 <= ppuVar5);
  }
  return;
code_r0x000142cd8109:
  if (*puVar4 <= *puVar9) goto LAB_142cd8100;
LAB_142cd8111:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar9 <= *puVar6);
  if (puVar4 <= puVar6) {
    uVar2 = *puVar4;
    *puVar4 = *puVar6;
    *puVar6 = uVar2;
    goto LAB_142cd8100;
  }
  uVar2 = *puVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *puVar9 = *puVar6;
  *puVar6 = uVar2;
  if ((longlong)((longlong)puVar6 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffff8U)) {
    if (puVar4 < puVar8) {
      *ppuVar5 = puVar4;
      ppuVar5[1] = puVar8;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_142cd81cb;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *ppuVar5 = puVar9;
      ppuVar5[1] = puVar7 + -2;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_142cd81cb;
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 3) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_142cd81ba;
  goto LAB_142cd80d0;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix'::__l2::<lambda_2>_> @ 142cd8d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_2> *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cd8d36;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar11->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar15 = 0;
  iVar18 = 0;
  do {
    iVar2 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar3 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar15;
    aiStack_8028[lVar21] = iVar15;
    iVar8 = aiStack_6028[lVar21] + iVar18;
    aiStack_6028[lVar21] = iVar18;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar2 + iVar13;
    iVar22 = iVar3 + iVar22;
    iVar20 = iVar9;
    iVar15 = iVar7;
    iVar18 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar15 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar15 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar4 = pFVar11->Prefix;
      uVar5 = *(undefined8 *)&pFVar11->ValueTuple;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      uVar1 = *(undefined8 *)&(pFVar11->ValueTuple).field_0x8;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_2[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
      pFVar16 = param_2;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      uVar1 = *(undefined8 *)&(pFVar16->ValueTuple).field_0x8;
      uVar6 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar4 = pFVar16->Prefix;
      uVar5 = *(undefined8 *)&pFVar16->ValueTuple;
      iVar13 = aiStack_9028[uVar6];
      aiStack_9028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_1[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_1[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar1 = *(undefined8 *)&(pFVar11->ValueTuple).field_0x8;
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      uVar4 = pFVar11->Prefix;
      uVar5 = *(undefined8 *)&pFVar11->ValueTuple;
      iVar13 = aiStack_8028[uVar6];
      aiStack_8028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_2[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar14 = uVar14 - 1;
      pFVar16 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      uVar1 = *(undefined8 *)&(pFVar16->ValueTuple).field_0x8;
      uVar6 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar4 = pFVar16->Prefix;
      uVar5 = *(undefined8 *)&pFVar16->ValueTuple;
      iVar13 = aiStack_6028[uVar6];
      aiStack_6028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_1[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_1[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar1 = *(undefined8 *)&(pFVar11->ValueTuple).field_0x8;
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      uVar4 = pFVar11->Prefix;
      uVar5 = *(undefined8 *)&pFVar11->ValueTuple;
      iVar13 = aiStack_4028[uVar6];
      aiStack_4028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_2[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      uVar4 = param_2->Prefix;
      uVar5 = *(undefined8 *)&param_2->ValueTuple;
      uVar14 = param_2->Prefix >> 0x35;
      uVar1 = *(undefined8 *)&(param_2->ValueTuple).field_0x8;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      local_2028[uVar14] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_1[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_1[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::<lambda_2>_> @ 142cd90d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_2> *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong64 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FData *pFVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  FData *pFVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cd90e6;
  local_2028[0x7ff] = 1;
  uVar19 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar14 = param_1;
  uVar17 = uVar19;
  if (0 < param_3) {
    do {
      uVar21 = pFVar14->Prefix;
      local_a028[(uint)uVar21 & 0x3ff] = local_a028[(uint)uVar21 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar21 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar21 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar21 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar21 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar21 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar21 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar21 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar21 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar21 >> 0x35] = local_2028[uVar21 >> 0x35] + 1;
      uVar17 = uVar17 - 1;
      pFVar14 = pFVar14 + 1;
    } while (uVar17 != 0);
  }
  lVar15 = 0x400;
  iVar13 = 0;
  lVar24 = 0;
  iVar16 = 0;
  iVar25 = 0;
  iVar23 = 0;
  iVar20 = 0;
  iVar22 = 0;
  do {
    iVar2 = local_a028[lVar24];
    local_a028[lVar24] = iVar16;
    iVar3 = aiStack_9028[lVar24];
    aiStack_9028[lVar24] = iVar25;
    iVar10 = aiStack_8028[lVar24] + iVar20;
    aiStack_8028[lVar24] = iVar20;
    iVar11 = aiStack_6028[lVar24] + iVar22;
    aiStack_6028[lVar24] = iVar22;
    iVar12 = aiStack_4028[lVar24] + iVar23;
    aiStack_4028[lVar24] = iVar23;
    iVar23 = local_2028[lVar24];
    local_2028[lVar24] = iVar13;
    iVar13 = iVar23 + iVar13;
    lVar24 = lVar24 + 1;
    iVar16 = iVar2 + iVar16;
    iVar25 = iVar3 + iVar25;
    iVar23 = iVar12;
    iVar20 = iVar10;
    iVar22 = iVar11;
  } while (lVar24 < 0x400);
  do {
    iVar16 = aiStack_8028[lVar15];
    aiStack_8028[lVar15] = iVar10;
    iVar25 = aiStack_6028[lVar15];
    aiStack_6028[lVar15] = iVar11;
    iVar23 = aiStack_4028[lVar15];
    aiStack_4028[lVar15] = iVar12;
    iVar20 = local_2028[lVar15];
    local_2028[lVar15] = iVar13;
    iVar13 = iVar20 + iVar13;
    lVar15 = lVar15 + 1;
    iVar12 = iVar23 + iVar12;
    iVar10 = iVar16 + iVar10;
    iVar11 = iVar25 + iVar11;
  } while (lVar15 < 0x800);
  pFVar14 = param_1;
  uVar17 = uVar19;
  if (0 < param_3) {
    do {
      uVar4 = pFVar14->Prefix;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar9 = (uint)pFVar14->Prefix & 0x3ff;
      iVar16 = local_a028[uVar9];
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      local_a028[uVar9] = iVar16 + 1;
      param_2[iVar16].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      uVar17 = uVar17 - 1;
      pFVar18 = param_2;
      pFVar14 = pFVar14 + 1;
      uVar21 = uVar19;
    } while (uVar17 != 0);
    do {
      uVar9 = (uint)(pFVar18->Prefix >> 10) & 0x3ff;
      uVar5 = *(undefined8 *)&pFVar18->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x10;
      iVar16 = aiStack_9028[uVar9];
      param_1[iVar16].Prefix = pFVar18->Prefix;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_9028[uVar9] = iVar16 + 1;
      uVar21 = uVar21 - 1;
      pFVar14 = param_1;
      pFVar18 = pFVar18 + 1;
      uVar17 = uVar19;
    } while (uVar21 != 0);
    do {
      uVar9 = (uint)(pFVar14->Prefix >> 0x14) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      iVar16 = aiStack_8028[uVar9];
      param_2[iVar16].Prefix = pFVar14->Prefix;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_8028[uVar9] = iVar16 + 1;
      uVar17 = uVar17 - 1;
      pFVar18 = param_2;
      pFVar14 = pFVar14 + 1;
      uVar21 = uVar19;
    } while (uVar17 != 0);
    do {
      uVar9 = (uint)(pFVar18->Prefix >> 0x1f) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar18->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x10;
      iVar16 = aiStack_6028[uVar9];
      param_1[iVar16].Prefix = pFVar18->Prefix;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_6028[uVar9] = iVar16 + 1;
      uVar21 = uVar21 - 1;
      pFVar14 = param_1;
      pFVar18 = pFVar18 + 1;
      uVar17 = uVar19;
    } while (uVar21 != 0);
    do {
      uVar9 = (uint)(pFVar14->Prefix >> 0x2a) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      iVar16 = aiStack_4028[uVar9];
      param_2[iVar16].Prefix = pFVar14->Prefix;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_4028[uVar9] = iVar16 + 1;
      uVar17 = uVar17 - 1;
      pFVar14 = pFVar14 + 1;
    } while (uVar17 != 0);
    do {
      puVar8 = &param_2->Prefix;
      uVar5 = *(undefined8 *)&param_2->ValueTuple;
      uVar17 = param_2->Prefix >> 0x35;
      iVar16 = local_2028[uVar17];
      uVar6 = *(undefined8 *)&(param_2->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(param_2->ValueTuple).field_0x10;
      param_2 = param_2 + 1;
      param_1[iVar16].Prefix = *puVar8;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      local_2028[uVar17] = iVar16 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix'::__l2::<lambda_2>_> @ 142cd9480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_2> *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cd9496;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar11->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar15 = 0;
  iVar18 = 0;
  do {
    iVar2 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar3 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar15;
    aiStack_8028[lVar21] = iVar15;
    iVar8 = aiStack_6028[lVar21] + iVar18;
    aiStack_6028[lVar21] = iVar18;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar2 + iVar13;
    iVar22 = iVar3 + iVar22;
    iVar20 = iVar9;
    iVar15 = iVar7;
    iVar18 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar15 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar15 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar4 = pFVar11->Prefix;
      uVar5 = *(undefined8 *)&pFVar11->ValueTuple;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      uVar1 = *(undefined8 *)&(pFVar11->ValueTuple).field_0x8;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_2[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
      pFVar16 = param_2;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      uVar1 = *(undefined8 *)&(pFVar16->ValueTuple).field_0x8;
      uVar6 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar4 = pFVar16->Prefix;
      uVar5 = *(undefined8 *)&pFVar16->ValueTuple;
      iVar13 = aiStack_9028[uVar6];
      aiStack_9028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_1[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_1[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar1 = *(undefined8 *)&(pFVar11->ValueTuple).field_0x8;
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      uVar4 = pFVar11->Prefix;
      uVar5 = *(undefined8 *)&pFVar11->ValueTuple;
      iVar13 = aiStack_8028[uVar6];
      aiStack_8028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_2[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar14 = uVar14 - 1;
      pFVar16 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      uVar1 = *(undefined8 *)&(pFVar16->ValueTuple).field_0x8;
      uVar6 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar4 = pFVar16->Prefix;
      uVar5 = *(undefined8 *)&pFVar16->ValueTuple;
      iVar13 = aiStack_6028[uVar6];
      aiStack_6028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_1[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_1[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar1 = *(undefined8 *)&(pFVar11->ValueTuple).field_0x8;
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      uVar4 = pFVar11->Prefix;
      uVar5 = *(undefined8 *)&pFVar11->ValueTuple;
      iVar13 = aiStack_4028[uVar6];
      aiStack_4028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_2[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      uVar4 = param_2->Prefix;
      uVar5 = *(undefined8 *)&param_2->ValueTuple;
      uVar14 = param_2->Prefix >> 0x35;
      uVar1 = *(undefined8 *)&(param_2->ValueTuple).field_0x8;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      local_2028[uVar14] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar4;
      *(undefined8 *)&param_1[iVar13].ValueTuple = uVar5;
      *(undefined8 *)&param_1[iVar13].ValueTuple.field_0x8 = uVar1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::<lambda_2>_> @ 142cd9830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_2> *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong64 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FData *pFVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  FData *pFVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cd9846;
  local_2028[0x7ff] = 1;
  uVar19 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar14 = param_1;
  uVar17 = uVar19;
  if (0 < param_3) {
    do {
      uVar21 = pFVar14->Prefix;
      local_a028[(uint)uVar21 & 0x3ff] = local_a028[(uint)uVar21 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar21 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar21 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar21 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar21 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar21 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar21 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar21 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar21 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar21 >> 0x35] = local_2028[uVar21 >> 0x35] + 1;
      uVar17 = uVar17 - 1;
      pFVar14 = pFVar14 + 1;
    } while (uVar17 != 0);
  }
  lVar15 = 0x400;
  iVar13 = 0;
  lVar24 = 0;
  iVar16 = 0;
  iVar25 = 0;
  iVar23 = 0;
  iVar20 = 0;
  iVar22 = 0;
  do {
    iVar2 = local_a028[lVar24];
    local_a028[lVar24] = iVar16;
    iVar3 = aiStack_9028[lVar24];
    aiStack_9028[lVar24] = iVar25;
    iVar10 = aiStack_8028[lVar24] + iVar20;
    aiStack_8028[lVar24] = iVar20;
    iVar11 = aiStack_6028[lVar24] + iVar22;
    aiStack_6028[lVar24] = iVar22;
    iVar12 = aiStack_4028[lVar24] + iVar23;
    aiStack_4028[lVar24] = iVar23;
    iVar23 = local_2028[lVar24];
    local_2028[lVar24] = iVar13;
    iVar13 = iVar23 + iVar13;
    lVar24 = lVar24 + 1;
    iVar16 = iVar2 + iVar16;
    iVar25 = iVar3 + iVar25;
    iVar23 = iVar12;
    iVar20 = iVar10;
    iVar22 = iVar11;
  } while (lVar24 < 0x400);
  do {
    iVar16 = aiStack_8028[lVar15];
    aiStack_8028[lVar15] = iVar10;
    iVar25 = aiStack_6028[lVar15];
    aiStack_6028[lVar15] = iVar11;
    iVar23 = aiStack_4028[lVar15];
    aiStack_4028[lVar15] = iVar12;
    iVar20 = local_2028[lVar15];
    local_2028[lVar15] = iVar13;
    iVar13 = iVar20 + iVar13;
    lVar15 = lVar15 + 1;
    iVar12 = iVar23 + iVar12;
    iVar10 = iVar16 + iVar10;
    iVar11 = iVar25 + iVar11;
  } while (lVar15 < 0x800);
  pFVar14 = param_1;
  uVar17 = uVar19;
  if (0 < param_3) {
    do {
      uVar4 = pFVar14->Prefix;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar9 = (uint)pFVar14->Prefix & 0x3ff;
      iVar16 = local_a028[uVar9];
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      local_a028[uVar9] = iVar16 + 1;
      param_2[iVar16].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      uVar17 = uVar17 - 1;
      pFVar18 = param_2;
      pFVar14 = pFVar14 + 1;
      uVar21 = uVar19;
    } while (uVar17 != 0);
    do {
      uVar9 = (uint)(pFVar18->Prefix >> 10) & 0x3ff;
      uVar5 = *(undefined8 *)&pFVar18->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x10;
      iVar16 = aiStack_9028[uVar9];
      param_1[iVar16].Prefix = pFVar18->Prefix;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_9028[uVar9] = iVar16 + 1;
      uVar21 = uVar21 - 1;
      pFVar14 = param_1;
      pFVar18 = pFVar18 + 1;
      uVar17 = uVar19;
    } while (uVar21 != 0);
    do {
      uVar9 = (uint)(pFVar14->Prefix >> 0x14) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      iVar16 = aiStack_8028[uVar9];
      param_2[iVar16].Prefix = pFVar14->Prefix;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_8028[uVar9] = iVar16 + 1;
      uVar17 = uVar17 - 1;
      pFVar18 = param_2;
      pFVar14 = pFVar14 + 1;
      uVar21 = uVar19;
    } while (uVar17 != 0);
    do {
      uVar9 = (uint)(pFVar18->Prefix >> 0x1f) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar18->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x10;
      iVar16 = aiStack_6028[uVar9];
      param_1[iVar16].Prefix = pFVar18->Prefix;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_6028[uVar9] = iVar16 + 1;
      uVar21 = uVar21 - 1;
      pFVar14 = param_1;
      pFVar18 = pFVar18 + 1;
      uVar17 = uVar19;
    } while (uVar21 != 0);
    do {
      uVar9 = (uint)(pFVar14->Prefix >> 0x2a) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      iVar16 = aiStack_4028[uVar9];
      param_2[iVar16].Prefix = pFVar14->Prefix;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_4028[uVar9] = iVar16 + 1;
      uVar17 = uVar17 - 1;
      pFVar14 = pFVar14 + 1;
    } while (uVar17 != 0);
    do {
      puVar8 = &param_2->Prefix;
      uVar5 = *(undefined8 *)&param_2->ValueTuple;
      uVar17 = param_2->Prefix >> 0x35;
      iVar16 = local_2028[uVar17];
      uVar6 = *(undefined8 *)&(param_2->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(param_2->ValueTuple).field_0x10;
      param_2 = param_2 + 1;
      param_1[iVar16].Prefix = *puVar8;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      local_2028[uVar17] = iVar16 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix'::__l2::<lambda_2>_> @ 142cd9be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_2> *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong64 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FData *pFVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  FData *pFVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cd9bf6;
  local_2028[0x7ff] = 1;
  uVar19 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar14 = param_1;
  uVar17 = uVar19;
  if (0 < param_3) {
    do {
      uVar21 = pFVar14->Prefix;
      local_a028[(uint)uVar21 & 0x3ff] = local_a028[(uint)uVar21 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar21 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar21 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar21 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar21 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar21 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar21 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar21 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar21 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar21 >> 0x35] = local_2028[uVar21 >> 0x35] + 1;
      uVar17 = uVar17 - 1;
      pFVar14 = pFVar14 + 1;
    } while (uVar17 != 0);
  }
  lVar15 = 0x400;
  iVar13 = 0;
  lVar24 = 0;
  iVar16 = 0;
  iVar25 = 0;
  iVar23 = 0;
  iVar20 = 0;
  iVar22 = 0;
  do {
    iVar2 = local_a028[lVar24];
    local_a028[lVar24] = iVar16;
    iVar3 = aiStack_9028[lVar24];
    aiStack_9028[lVar24] = iVar25;
    iVar10 = aiStack_8028[lVar24] + iVar20;
    aiStack_8028[lVar24] = iVar20;
    iVar11 = aiStack_6028[lVar24] + iVar22;
    aiStack_6028[lVar24] = iVar22;
    iVar12 = aiStack_4028[lVar24] + iVar23;
    aiStack_4028[lVar24] = iVar23;
    iVar23 = local_2028[lVar24];
    local_2028[lVar24] = iVar13;
    iVar13 = iVar23 + iVar13;
    lVar24 = lVar24 + 1;
    iVar16 = iVar2 + iVar16;
    iVar25 = iVar3 + iVar25;
    iVar23 = iVar12;
    iVar20 = iVar10;
    iVar22 = iVar11;
  } while (lVar24 < 0x400);
  do {
    iVar16 = aiStack_8028[lVar15];
    aiStack_8028[lVar15] = iVar10;
    iVar25 = aiStack_6028[lVar15];
    aiStack_6028[lVar15] = iVar11;
    iVar23 = aiStack_4028[lVar15];
    aiStack_4028[lVar15] = iVar12;
    iVar20 = local_2028[lVar15];
    local_2028[lVar15] = iVar13;
    iVar13 = iVar20 + iVar13;
    lVar15 = lVar15 + 1;
    iVar12 = iVar23 + iVar12;
    iVar10 = iVar16 + iVar10;
    iVar11 = iVar25 + iVar11;
  } while (lVar15 < 0x800);
  pFVar14 = param_1;
  uVar17 = uVar19;
  if (0 < param_3) {
    do {
      uVar4 = pFVar14->Prefix;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar9 = (uint)pFVar14->Prefix & 0x3ff;
      iVar16 = local_a028[uVar9];
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      local_a028[uVar9] = iVar16 + 1;
      param_2[iVar16].Prefix = uVar4;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      uVar17 = uVar17 - 1;
      pFVar18 = param_2;
      pFVar14 = pFVar14 + 1;
      uVar21 = uVar19;
    } while (uVar17 != 0);
    do {
      uVar9 = (uint)(pFVar18->Prefix >> 10) & 0x3ff;
      uVar5 = *(undefined8 *)&pFVar18->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x10;
      iVar16 = aiStack_9028[uVar9];
      param_1[iVar16].Prefix = pFVar18->Prefix;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_9028[uVar9] = iVar16 + 1;
      uVar21 = uVar21 - 1;
      pFVar14 = param_1;
      pFVar18 = pFVar18 + 1;
      uVar17 = uVar19;
    } while (uVar21 != 0);
    do {
      uVar9 = (uint)(pFVar14->Prefix >> 0x14) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      iVar16 = aiStack_8028[uVar9];
      param_2[iVar16].Prefix = pFVar14->Prefix;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_8028[uVar9] = iVar16 + 1;
      uVar17 = uVar17 - 1;
      pFVar18 = param_2;
      pFVar14 = pFVar14 + 1;
      uVar21 = uVar19;
    } while (uVar17 != 0);
    do {
      uVar9 = (uint)(pFVar18->Prefix >> 0x1f) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar18->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar18->ValueTuple).field_0x10;
      iVar16 = aiStack_6028[uVar9];
      param_1[iVar16].Prefix = pFVar18->Prefix;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_6028[uVar9] = iVar16 + 1;
      uVar21 = uVar21 - 1;
      pFVar14 = param_1;
      pFVar18 = pFVar18 + 1;
      uVar17 = uVar19;
    } while (uVar21 != 0);
    do {
      uVar9 = (uint)(pFVar14->Prefix >> 0x2a) & 0x7ff;
      uVar5 = *(undefined8 *)&pFVar14->ValueTuple;
      uVar6 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar14->ValueTuple).field_0x10;
      iVar16 = aiStack_4028[uVar9];
      param_2[iVar16].Prefix = pFVar14->Prefix;
      *(undefined8 *)&param_2[iVar16].ValueTuple = uVar5;
      puVar1 = &param_2[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      aiStack_4028[uVar9] = iVar16 + 1;
      uVar17 = uVar17 - 1;
      pFVar14 = pFVar14 + 1;
    } while (uVar17 != 0);
    do {
      puVar8 = &param_2->Prefix;
      uVar5 = *(undefined8 *)&param_2->ValueTuple;
      uVar17 = param_2->Prefix >> 0x35;
      iVar16 = local_2028[uVar17];
      uVar6 = *(undefined8 *)&(param_2->ValueTuple).field_0x8;
      uVar7 = *(undefined8 *)&(param_2->ValueTuple).field_0x10;
      param_2 = param_2 + 1;
      param_1[iVar16].Prefix = *puVar8;
      *(undefined8 *)&param_1[iVar16].ValueTuple = uVar5;
      puVar1 = &param_1[iVar16].ValueTuple.field_0x8;
      *(undefined8 *)puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      local_2028[uVar17] = iVar16 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix'::__l2::<lambda_1>_> @ 142cd9f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  schar sVar5;
  undefined7 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FData *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cd9fa6;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar12->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
  }
  lVar13 = 0x400;
  iVar11 = 0;
  lVar22 = 0;
  iVar14 = 0;
  iVar23 = 0;
  iVar21 = 0;
  iVar18 = 0;
  iVar20 = 0;
  do {
    iVar1 = local_a028[lVar22];
    local_a028[lVar22] = iVar14;
    iVar2 = aiStack_9028[lVar22];
    aiStack_9028[lVar22] = iVar23;
    iVar8 = aiStack_8028[lVar22] + iVar18;
    aiStack_8028[lVar22] = iVar18;
    iVar9 = aiStack_6028[lVar22] + iVar20;
    aiStack_6028[lVar22] = iVar20;
    iVar10 = aiStack_4028[lVar22] + iVar21;
    aiStack_4028[lVar22] = iVar21;
    iVar21 = local_2028[lVar22];
    local_2028[lVar22] = iVar11;
    iVar11 = iVar21 + iVar11;
    lVar22 = lVar22 + 1;
    iVar14 = iVar1 + iVar14;
    iVar23 = iVar2 + iVar23;
    iVar21 = iVar10;
    iVar18 = iVar8;
    iVar20 = iVar9;
  } while (lVar22 < 0x400);
  do {
    iVar14 = aiStack_8028[lVar13];
    aiStack_8028[lVar13] = iVar8;
    iVar23 = aiStack_6028[lVar13];
    aiStack_6028[lVar13] = iVar9;
    iVar21 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar10;
    iVar18 = local_2028[lVar13];
    local_2028[lVar13] = iVar11;
    iVar11 = iVar18 + iVar11;
    lVar13 = lVar13 + 1;
    iVar10 = iVar21 + iVar10;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar23 + iVar9;
  } while (lVar13 < 0x800);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar12->Prefix;
      sVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      uVar7 = (uint)pFVar12->Prefix & 0x3ff;
      iVar14 = local_a028[uVar7];
      local_a028[uVar7] = iVar14 + 1;
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = uVar3;
      pFVar16->Value = sVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      sVar5 = pFVar16->Value;
      uVar6 = *(undefined7 *)&pFVar16->field_0x9;
      iVar14 = aiStack_9028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = sVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      aiStack_9028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x14) & 0x7ff;
      sVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      iVar14 = aiStack_8028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = sVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      aiStack_8028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      sVar5 = pFVar16->Value;
      uVar6 = *(undefined7 *)&pFVar16->field_0x9;
      iVar14 = aiStack_6028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = sVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      aiStack_6028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x2a) & 0x7ff;
      sVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      iVar14 = aiStack_4028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = sVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      aiStack_4028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
    do {
      puVar4 = &param_2->Prefix;
      sVar5 = param_2->Value;
      uVar6 = *(undefined7 *)&param_2->field_0x9;
      uVar15 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar14 = local_2028[uVar15];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = *puVar4;
      pFVar12->Value = sVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      local_2028[uVar15] = iVar14 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix'::__l2::<lambda_1>_> @ 142cda2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  uchar uVar5;
  undefined7 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FData *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cda306;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar12->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
  }
  lVar13 = 0x400;
  iVar11 = 0;
  lVar22 = 0;
  iVar14 = 0;
  iVar23 = 0;
  iVar21 = 0;
  iVar18 = 0;
  iVar20 = 0;
  do {
    iVar1 = local_a028[lVar22];
    local_a028[lVar22] = iVar14;
    iVar2 = aiStack_9028[lVar22];
    aiStack_9028[lVar22] = iVar23;
    iVar8 = aiStack_8028[lVar22] + iVar18;
    aiStack_8028[lVar22] = iVar18;
    iVar9 = aiStack_6028[lVar22] + iVar20;
    aiStack_6028[lVar22] = iVar20;
    iVar10 = aiStack_4028[lVar22] + iVar21;
    aiStack_4028[lVar22] = iVar21;
    iVar21 = local_2028[lVar22];
    local_2028[lVar22] = iVar11;
    iVar11 = iVar21 + iVar11;
    lVar22 = lVar22 + 1;
    iVar14 = iVar1 + iVar14;
    iVar23 = iVar2 + iVar23;
    iVar21 = iVar10;
    iVar18 = iVar8;
    iVar20 = iVar9;
  } while (lVar22 < 0x400);
  do {
    iVar14 = aiStack_8028[lVar13];
    aiStack_8028[lVar13] = iVar8;
    iVar23 = aiStack_6028[lVar13];
    aiStack_6028[lVar13] = iVar9;
    iVar21 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar10;
    iVar18 = local_2028[lVar13];
    local_2028[lVar13] = iVar11;
    iVar11 = iVar18 + iVar11;
    lVar13 = lVar13 + 1;
    iVar10 = iVar21 + iVar10;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar23 + iVar9;
  } while (lVar13 < 0x800);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar12->Prefix;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      uVar7 = (uint)pFVar12->Prefix & 0x3ff;
      iVar14 = local_a028[uVar7];
      local_a028[uVar7] = iVar14 + 1;
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = uVar3;
      pFVar16->Value = uVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar5 = pFVar16->Value;
      uVar6 = *(undefined7 *)&pFVar16->field_0x9;
      iVar14 = aiStack_9028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = uVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      aiStack_9028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x14) & 0x7ff;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      iVar14 = aiStack_8028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = uVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      aiStack_8028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar5 = pFVar16->Value;
      uVar6 = *(undefined7 *)&pFVar16->field_0x9;
      iVar14 = aiStack_6028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = uVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      aiStack_6028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x2a) & 0x7ff;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      iVar14 = aiStack_4028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = uVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      aiStack_4028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
    do {
      puVar4 = &param_2->Prefix;
      uVar5 = param_2->Value;
      uVar6 = *(undefined7 *)&param_2->field_0x9;
      uVar15 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar14 = local_2028[uVar15];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = *puVar4;
      pFVar12->Value = uVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      local_2028[uVar15] = iVar14 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix'::__l2::<lambda_1>_> @ 142cda650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  short sVar5;
  undefined6 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FData *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cda666;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar12->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
  }
  lVar13 = 0x400;
  iVar11 = 0;
  lVar22 = 0;
  iVar14 = 0;
  iVar23 = 0;
  iVar21 = 0;
  iVar18 = 0;
  iVar20 = 0;
  do {
    iVar1 = local_a028[lVar22];
    local_a028[lVar22] = iVar14;
    iVar2 = aiStack_9028[lVar22];
    aiStack_9028[lVar22] = iVar23;
    iVar8 = aiStack_8028[lVar22] + iVar18;
    aiStack_8028[lVar22] = iVar18;
    iVar9 = aiStack_6028[lVar22] + iVar20;
    aiStack_6028[lVar22] = iVar20;
    iVar10 = aiStack_4028[lVar22] + iVar21;
    aiStack_4028[lVar22] = iVar21;
    iVar21 = local_2028[lVar22];
    local_2028[lVar22] = iVar11;
    iVar11 = iVar21 + iVar11;
    lVar22 = lVar22 + 1;
    iVar14 = iVar1 + iVar14;
    iVar23 = iVar2 + iVar23;
    iVar21 = iVar10;
    iVar18 = iVar8;
    iVar20 = iVar9;
  } while (lVar22 < 0x400);
  do {
    iVar14 = aiStack_8028[lVar13];
    aiStack_8028[lVar13] = iVar8;
    iVar23 = aiStack_6028[lVar13];
    aiStack_6028[lVar13] = iVar9;
    iVar21 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar10;
    iVar18 = local_2028[lVar13];
    local_2028[lVar13] = iVar11;
    iVar11 = iVar18 + iVar11;
    lVar13 = lVar13 + 1;
    iVar10 = iVar21 + iVar10;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar23 + iVar9;
  } while (lVar13 < 0x800);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar12->Prefix;
      sVar5 = pFVar12->Value;
      uVar6 = *(undefined6 *)&pFVar12->field_0xa;
      uVar7 = (uint)pFVar12->Prefix & 0x3ff;
      iVar14 = local_a028[uVar7];
      local_a028[uVar7] = iVar14 + 1;
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = uVar3;
      pFVar16->Value = sVar5;
      *(undefined6 *)&pFVar16->field_0xa = uVar6;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      sVar5 = pFVar16->Value;
      uVar6 = *(undefined6 *)&pFVar16->field_0xa;
      iVar14 = aiStack_9028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = sVar5;
      *(undefined6 *)&pFVar12->field_0xa = uVar6;
      aiStack_9028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x14) & 0x7ff;
      sVar5 = pFVar12->Value;
      uVar6 = *(undefined6 *)&pFVar12->field_0xa;
      iVar14 = aiStack_8028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = sVar5;
      *(undefined6 *)&pFVar16->field_0xa = uVar6;
      aiStack_8028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      sVar5 = pFVar16->Value;
      uVar6 = *(undefined6 *)&pFVar16->field_0xa;
      iVar14 = aiStack_6028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = sVar5;
      *(undefined6 *)&pFVar12->field_0xa = uVar6;
      aiStack_6028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x2a) & 0x7ff;
      sVar5 = pFVar12->Value;
      uVar6 = *(undefined6 *)&pFVar12->field_0xa;
      iVar14 = aiStack_4028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = sVar5;
      *(undefined6 *)&pFVar16->field_0xa = uVar6;
      aiStack_4028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
    do {
      puVar4 = &param_2->Prefix;
      sVar5 = param_2->Value;
      uVar6 = *(undefined6 *)&param_2->field_0xa;
      uVar15 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar14 = local_2028[uVar15];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = *puVar4;
      pFVar12->Value = sVar5;
      *(undefined6 *)&pFVar12->field_0xa = uVar6;
      local_2028[uVar15] = iVar14 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix'::__l2::<lambda_1>_> @ 142cda9b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  ushort uVar5;
  undefined6 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FData *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cda9c6;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar12->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
  }
  lVar13 = 0x400;
  iVar11 = 0;
  lVar22 = 0;
  iVar14 = 0;
  iVar23 = 0;
  iVar21 = 0;
  iVar18 = 0;
  iVar20 = 0;
  do {
    iVar1 = local_a028[lVar22];
    local_a028[lVar22] = iVar14;
    iVar2 = aiStack_9028[lVar22];
    aiStack_9028[lVar22] = iVar23;
    iVar8 = aiStack_8028[lVar22] + iVar18;
    aiStack_8028[lVar22] = iVar18;
    iVar9 = aiStack_6028[lVar22] + iVar20;
    aiStack_6028[lVar22] = iVar20;
    iVar10 = aiStack_4028[lVar22] + iVar21;
    aiStack_4028[lVar22] = iVar21;
    iVar21 = local_2028[lVar22];
    local_2028[lVar22] = iVar11;
    iVar11 = iVar21 + iVar11;
    lVar22 = lVar22 + 1;
    iVar14 = iVar1 + iVar14;
    iVar23 = iVar2 + iVar23;
    iVar21 = iVar10;
    iVar18 = iVar8;
    iVar20 = iVar9;
  } while (lVar22 < 0x400);
  do {
    iVar14 = aiStack_8028[lVar13];
    aiStack_8028[lVar13] = iVar8;
    iVar23 = aiStack_6028[lVar13];
    aiStack_6028[lVar13] = iVar9;
    iVar21 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar10;
    iVar18 = local_2028[lVar13];
    local_2028[lVar13] = iVar11;
    iVar11 = iVar18 + iVar11;
    lVar13 = lVar13 + 1;
    iVar10 = iVar21 + iVar10;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar23 + iVar9;
  } while (lVar13 < 0x800);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar12->Prefix;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined6 *)&pFVar12->field_0xa;
      uVar7 = (uint)pFVar12->Prefix & 0x3ff;
      iVar14 = local_a028[uVar7];
      local_a028[uVar7] = iVar14 + 1;
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = uVar3;
      pFVar16->Value = uVar5;
      *(undefined6 *)&pFVar16->field_0xa = uVar6;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar5 = pFVar16->Value;
      uVar6 = *(undefined6 *)&pFVar16->field_0xa;
      iVar14 = aiStack_9028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = uVar5;
      *(undefined6 *)&pFVar12->field_0xa = uVar6;
      aiStack_9028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x14) & 0x7ff;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined6 *)&pFVar12->field_0xa;
      iVar14 = aiStack_8028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = uVar5;
      *(undefined6 *)&pFVar16->field_0xa = uVar6;
      aiStack_8028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar5 = pFVar16->Value;
      uVar6 = *(undefined6 *)&pFVar16->field_0xa;
      iVar14 = aiStack_6028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = uVar5;
      *(undefined6 *)&pFVar12->field_0xa = uVar6;
      aiStack_6028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x2a) & 0x7ff;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined6 *)&pFVar12->field_0xa;
      iVar14 = aiStack_4028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = uVar5;
      *(undefined6 *)&pFVar16->field_0xa = uVar6;
      aiStack_4028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
    do {
      puVar4 = &param_2->Prefix;
      uVar5 = param_2->Value;
      uVar6 = *(undefined6 *)&param_2->field_0xa;
      uVar15 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar14 = local_2028[uVar15];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = *puVar4;
      pFVar12->Value = uVar5;
      *(undefined6 *)&pFVar12->field_0xa = uVar6;
      local_2028[uVar15] = iVar14 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdad10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  FData *pFVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdad26;
  local_2028[0x7ff] = 1;
  uVar16 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar16;
  if (0 < param_3) {
    do {
      uVar18 = pFVar11->Prefix;
      local_a028[(uint)uVar18 & 0x3ff] = local_a028[(uint)uVar18 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar18 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar18 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar18 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar18 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar18 >> 0x35] = local_2028[uVar18 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar17 = 0;
  iVar19 = 0;
  do {
    iVar1 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar2 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar17;
    aiStack_8028[lVar21] = iVar17;
    iVar8 = aiStack_6028[lVar21] + iVar19;
    aiStack_6028[lVar21] = iVar19;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar1 + iVar13;
    iVar22 = iVar2 + iVar22;
    iVar20 = iVar9;
    iVar17 = iVar7;
    iVar19 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar17 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar17 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar16;
  if (0 < param_3) {
    do {
      uVar3 = pFVar11->Prefix;
      iVar22 = pFVar11->Value;
      uVar5 = *(undefined4 *)&pFVar11->field_0xc;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      pFVar15 = param_2 + iVar13;
      pFVar15->Prefix = uVar3;
      pFVar15->Value = iVar22;
      *(undefined4 *)&pFVar15->field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar15 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar18 = uVar16;
    } while (uVar14 != 0);
    do {
      uVar6 = (uint)(pFVar15->Prefix >> 10) & 0x3ff;
      iVar22 = pFVar15->Value;
      uVar5 = *(undefined4 *)&pFVar15->field_0xc;
      iVar13 = aiStack_9028[uVar6];
      pFVar11 = param_1 + iVar13;
      pFVar11->Prefix = pFVar15->Prefix;
      pFVar11->Value = iVar22;
      *(undefined4 *)&pFVar11->field_0xc = uVar5;
      aiStack_9028[uVar6] = iVar13 + 1;
      uVar18 = uVar18 - 1;
      pFVar11 = param_1;
      pFVar15 = pFVar15 + 1;
      uVar14 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      iVar22 = pFVar11->Value;
      uVar5 = *(undefined4 *)&pFVar11->field_0xc;
      iVar13 = aiStack_8028[uVar6];
      pFVar15 = param_2 + iVar13;
      pFVar15->Prefix = pFVar11->Prefix;
      pFVar15->Value = iVar22;
      *(undefined4 *)&pFVar15->field_0xc = uVar5;
      aiStack_8028[uVar6] = iVar13 + 1;
      uVar14 = uVar14 - 1;
      pFVar15 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar18 = uVar16;
    } while (uVar14 != 0);
    do {
      uVar6 = (uint)(pFVar15->Prefix >> 0x1f) & 0x7ff;
      iVar22 = pFVar15->Value;
      uVar5 = *(undefined4 *)&pFVar15->field_0xc;
      iVar13 = aiStack_6028[uVar6];
      pFVar11 = param_1 + iVar13;
      pFVar11->Prefix = pFVar15->Prefix;
      pFVar11->Value = iVar22;
      *(undefined4 *)&pFVar11->field_0xc = uVar5;
      aiStack_6028[uVar6] = iVar13 + 1;
      uVar18 = uVar18 - 1;
      pFVar11 = param_1;
      pFVar15 = pFVar15 + 1;
      uVar14 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      iVar22 = pFVar11->Value;
      uVar5 = *(undefined4 *)&pFVar11->field_0xc;
      iVar13 = aiStack_4028[uVar6];
      pFVar15 = param_2 + iVar13;
      pFVar15->Prefix = pFVar11->Prefix;
      pFVar15->Value = iVar22;
      *(undefined4 *)&pFVar15->field_0xc = uVar5;
      aiStack_4028[uVar6] = iVar13 + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      puVar4 = &param_2->Prefix;
      iVar22 = param_2->Value;
      uVar5 = *(undefined4 *)&param_2->field_0xc;
      uVar14 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      pFVar11 = param_1 + iVar13;
      pFVar11->Prefix = *puVar4;
      pFVar11->Value = iVar22;
      *(undefined4 *)&pFVar11->field_0xc = uVar5;
      local_2028[uVar14] = iVar13 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdb070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FData *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdb086;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar12->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
  }
  lVar13 = 0x400;
  iVar11 = 0;
  lVar22 = 0;
  iVar14 = 0;
  iVar23 = 0;
  iVar21 = 0;
  iVar18 = 0;
  iVar20 = 0;
  do {
    iVar1 = local_a028[lVar22];
    local_a028[lVar22] = iVar14;
    iVar2 = aiStack_9028[lVar22];
    aiStack_9028[lVar22] = iVar23;
    iVar8 = aiStack_8028[lVar22] + iVar18;
    aiStack_8028[lVar22] = iVar18;
    iVar9 = aiStack_6028[lVar22] + iVar20;
    aiStack_6028[lVar22] = iVar20;
    iVar10 = aiStack_4028[lVar22] + iVar21;
    aiStack_4028[lVar22] = iVar21;
    iVar21 = local_2028[lVar22];
    local_2028[lVar22] = iVar11;
    iVar11 = iVar21 + iVar11;
    lVar22 = lVar22 + 1;
    iVar14 = iVar1 + iVar14;
    iVar23 = iVar2 + iVar23;
    iVar21 = iVar10;
    iVar18 = iVar8;
    iVar20 = iVar9;
  } while (lVar22 < 0x400);
  do {
    iVar14 = aiStack_8028[lVar13];
    aiStack_8028[lVar13] = iVar8;
    iVar23 = aiStack_6028[lVar13];
    aiStack_6028[lVar13] = iVar9;
    iVar21 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar10;
    iVar18 = local_2028[lVar13];
    local_2028[lVar13] = iVar11;
    iVar11 = iVar18 + iVar11;
    lVar13 = lVar13 + 1;
    iVar10 = iVar21 + iVar10;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar23 + iVar9;
  } while (lVar13 < 0x800);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar12->Prefix;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined4 *)&pFVar12->field_0xc;
      uVar7 = (uint)pFVar12->Prefix & 0x3ff;
      iVar14 = local_a028[uVar7];
      local_a028[uVar7] = iVar14 + 1;
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = uVar3;
      pFVar16->Value = uVar5;
      *(undefined4 *)&pFVar16->field_0xc = uVar6;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar5 = pFVar16->Value;
      uVar6 = *(undefined4 *)&pFVar16->field_0xc;
      iVar14 = aiStack_9028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = uVar5;
      *(undefined4 *)&pFVar12->field_0xc = uVar6;
      aiStack_9028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x14) & 0x7ff;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined4 *)&pFVar12->field_0xc;
      iVar14 = aiStack_8028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = uVar5;
      *(undefined4 *)&pFVar16->field_0xc = uVar6;
      aiStack_8028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar5 = pFVar16->Value;
      uVar6 = *(undefined4 *)&pFVar16->field_0xc;
      iVar14 = aiStack_6028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = uVar5;
      *(undefined4 *)&pFVar12->field_0xc = uVar6;
      aiStack_6028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x2a) & 0x7ff;
      uVar5 = pFVar12->Value;
      uVar6 = *(undefined4 *)&pFVar12->field_0xc;
      iVar14 = aiStack_4028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = uVar5;
      *(undefined4 *)&pFVar16->field_0xc = uVar6;
      aiStack_4028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
    do {
      puVar4 = &param_2->Prefix;
      uVar5 = param_2->Value;
      uVar6 = *(undefined4 *)&param_2->field_0xc;
      uVar15 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar14 = local_2028[uVar15];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = *puVar4;
      pFVar12->Value = uVar5;
      *(undefined4 *)&pFVar12->field_0xc = uVar6;
      local_2028[uVar15] = iVar14 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdb3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FData *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdb3e6;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar12->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
  }
  lVar13 = 0x400;
  iVar11 = 0;
  lVar22 = 0;
  iVar14 = 0;
  iVar23 = 0;
  iVar21 = 0;
  iVar18 = 0;
  iVar20 = 0;
  do {
    iVar1 = local_a028[lVar22];
    local_a028[lVar22] = iVar14;
    iVar2 = aiStack_9028[lVar22];
    aiStack_9028[lVar22] = iVar23;
    iVar8 = aiStack_8028[lVar22] + iVar18;
    aiStack_8028[lVar22] = iVar18;
    iVar9 = aiStack_6028[lVar22] + iVar20;
    aiStack_6028[lVar22] = iVar20;
    iVar10 = aiStack_4028[lVar22] + iVar21;
    aiStack_4028[lVar22] = iVar21;
    iVar21 = local_2028[lVar22];
    local_2028[lVar22] = iVar11;
    iVar11 = iVar21 + iVar11;
    lVar22 = lVar22 + 1;
    iVar14 = iVar1 + iVar14;
    iVar23 = iVar2 + iVar23;
    iVar21 = iVar10;
    iVar18 = iVar8;
    iVar20 = iVar9;
  } while (lVar22 < 0x400);
  do {
    iVar14 = aiStack_8028[lVar13];
    aiStack_8028[lVar13] = iVar8;
    iVar23 = aiStack_6028[lVar13];
    aiStack_6028[lVar13] = iVar9;
    iVar21 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar10;
    iVar18 = local_2028[lVar13];
    local_2028[lVar13] = iVar11;
    iVar11 = iVar18 + iVar11;
    lVar13 = lVar13 + 1;
    iVar10 = iVar21 + iVar10;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar23 + iVar9;
  } while (lVar13 < 0x800);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar12->Prefix;
      fVar5 = pFVar12->Value;
      uVar6 = *(undefined4 *)&pFVar12->field_0xc;
      uVar7 = (uint)pFVar12->Prefix & 0x3ff;
      iVar14 = local_a028[uVar7];
      local_a028[uVar7] = iVar14 + 1;
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = uVar3;
      pFVar16->Value = fVar5;
      *(undefined4 *)&pFVar16->field_0xc = uVar6;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      fVar5 = pFVar16->Value;
      uVar6 = *(undefined4 *)&pFVar16->field_0xc;
      iVar14 = aiStack_9028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = fVar5;
      *(undefined4 *)&pFVar12->field_0xc = uVar6;
      aiStack_9028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x14) & 0x7ff;
      fVar5 = pFVar12->Value;
      uVar6 = *(undefined4 *)&pFVar12->field_0xc;
      iVar14 = aiStack_8028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = fVar5;
      *(undefined4 *)&pFVar16->field_0xc = uVar6;
      aiStack_8028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      fVar5 = pFVar16->Value;
      uVar6 = *(undefined4 *)&pFVar16->field_0xc;
      iVar14 = aiStack_6028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = fVar5;
      *(undefined4 *)&pFVar12->field_0xc = uVar6;
      aiStack_6028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x2a) & 0x7ff;
      fVar5 = pFVar12->Value;
      uVar6 = *(undefined4 *)&pFVar12->field_0xc;
      iVar14 = aiStack_4028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = fVar5;
      *(undefined4 *)&pFVar16->field_0xc = uVar6;
      aiStack_4028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
    do {
      puVar4 = &param_2->Prefix;
      fVar5 = param_2->Value;
      uVar6 = *(undefined4 *)&param_2->field_0xc;
      uVar15 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar14 = local_2028[uVar15];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = *puVar4;
      pFVar12->Value = fVar5;
      *(undefined4 *)&pFVar12->field_0xc = uVar6;
      local_2028[uVar15] = iVar14 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdb730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  double dVar4;
  ulong64 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  FData *pFVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdb746;
  local_2028[0x7ff] = 1;
  uVar16 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar16;
  if (0 < param_3) {
    do {
      uVar18 = pFVar11->Prefix;
      local_a028[(uint)uVar18 & 0x3ff] = local_a028[(uint)uVar18 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar18 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar18 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar18 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar18 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar18 >> 0x35] = local_2028[uVar18 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar17 = 0;
  iVar19 = 0;
  do {
    iVar1 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar2 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar17;
    aiStack_8028[lVar21] = iVar17;
    iVar8 = aiStack_6028[lVar21] + iVar19;
    aiStack_6028[lVar21] = iVar19;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar1 + iVar13;
    iVar22 = iVar2 + iVar22;
    iVar20 = iVar9;
    iVar17 = iVar7;
    iVar19 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar17 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar17 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar16;
  if (0 < param_3) {
    do {
      uVar3 = pFVar11->Prefix;
      dVar4 = pFVar11->Value;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value = dVar4;
      uVar14 = uVar14 - 1;
      pFVar15 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar18 = uVar16;
    } while (uVar14 != 0);
    do {
      uVar6 = (uint)(pFVar15->Prefix >> 10) & 0x3ff;
      dVar4 = pFVar15->Value;
      iVar13 = aiStack_9028[uVar6];
      param_1[iVar13].Prefix = pFVar15->Prefix;
      param_1[iVar13].Value = dVar4;
      aiStack_9028[uVar6] = iVar13 + 1;
      uVar18 = uVar18 - 1;
      pFVar11 = param_1;
      pFVar15 = pFVar15 + 1;
      uVar14 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      dVar4 = pFVar11->Value;
      iVar13 = aiStack_8028[uVar6];
      param_2[iVar13].Prefix = pFVar11->Prefix;
      param_2[iVar13].Value = dVar4;
      aiStack_8028[uVar6] = iVar13 + 1;
      uVar14 = uVar14 - 1;
      pFVar15 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar18 = uVar16;
    } while (uVar14 != 0);
    do {
      uVar6 = (uint)(pFVar15->Prefix >> 0x1f) & 0x7ff;
      dVar4 = pFVar15->Value;
      iVar13 = aiStack_6028[uVar6];
      param_1[iVar13].Prefix = pFVar15->Prefix;
      param_1[iVar13].Value = dVar4;
      aiStack_6028[uVar6] = iVar13 + 1;
      uVar18 = uVar18 - 1;
      pFVar11 = param_1;
      pFVar15 = pFVar15 + 1;
      uVar14 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      dVar4 = pFVar11->Value;
      iVar13 = aiStack_4028[uVar6];
      param_2[iVar13].Prefix = pFVar11->Prefix;
      param_2[iVar13].Value = dVar4;
      aiStack_4028[uVar6] = iVar13 + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      puVar5 = &param_2->Prefix;
      dVar4 = param_2->Value;
      uVar14 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      param_1[iVar13].Prefix = *puVar5;
      param_1[iVar13].Value = dVar4;
      local_2028[uVar14] = iVar13 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdba90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  ulong64 uVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FData *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  FData *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int local_a038 [1024];
  int local_9038 [1024];
  int local_8038 [1024];
  int aiStack_7038 [1024];
  int local_6038 [1024];
  int aiStack_5038 [1024];
  int local_4038 [1024];
  int aiStack_3038 [1024];
  int local_2038 [2048];
  
  local_2038[0x7fe] = 0x42cdbaa5;
  local_2038[0x7ff] = 1;
  uVar15 = (ulonglong)(uint)param_3;
  memset(local_a038,0,0xa000);
  if (0 < param_3) {
    uVar10 = (ulonglong)(uint)param_3;
    pFVar6 = param_1;
    do {
      uVar16 = pFVar6->Prefix;
      pFVar6 = pFVar6 + 1;
      local_a038[(uint)uVar16 & 0x3ff] = local_a038[(uint)uVar16 & 0x3ff] + 1;
      local_9038[(uint)(uVar16 >> 10) & 0x3ff] = local_9038[(uint)(uVar16 >> 10) & 0x3ff] + 1;
      local_8038[(uint)(uVar16 >> 0x14) & 0x7ff] = local_8038[(uint)(uVar16 >> 0x14) & 0x7ff] + 1;
      local_6038[(uint)(uVar16 >> 0x1f) & 0x7ff] = local_6038[(uint)(uVar16 >> 0x1f) & 0x7ff] + 1;
      local_4038[(uint)(uVar16 >> 0x2a) & 0x7ff] = local_4038[(uint)(uVar16 >> 0x2a) & 0x7ff] + 1;
      local_2038[uVar16 >> 0x35] = local_2038[uVar16 >> 0x35] + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar8 = 0;
  lVar7 = 0x400;
  uVar10 = uVar8;
  uVar16 = uVar8;
  uVar11 = uVar8;
  uVar12 = uVar8;
  uVar13 = uVar8;
  uVar14 = uVar8;
  do {
    iVar1 = local_a038[uVar8];
    local_a038[uVar8] = (int)uVar16;
    uVar16 = (ulonglong)(uint)(iVar1 + (int)uVar16);
    iVar1 = local_9038[uVar8];
    local_9038[uVar8] = (int)uVar10;
    uVar10 = (ulonglong)(uint)(iVar1 + (int)uVar10);
    iVar1 = local_8038[uVar8];
    local_8038[uVar8] = (int)uVar11;
    uVar11 = (ulonglong)(uint)(iVar1 + (int)uVar11);
    iVar1 = local_6038[uVar8];
    local_6038[uVar8] = (int)uVar12;
    uVar12 = (ulonglong)(uint)(iVar1 + (int)uVar12);
    iVar1 = local_4038[uVar8];
    local_4038[uVar8] = (int)uVar13;
    uVar13 = (ulonglong)(uint)(iVar1 + (int)uVar13);
    iVar1 = local_2038[uVar8];
    local_2038[uVar8] = (int)uVar14;
    uVar8 = uVar8 + 1;
    uVar14 = (ulonglong)(uint)(iVar1 + (int)uVar14);
  } while ((longlong)uVar8 < 0x400);
  do {
    iVar1 = local_8038[lVar7];
    local_8038[lVar7] = (int)uVar11;
    uVar11 = (ulonglong)(uint)(iVar1 + (int)uVar11);
    iVar1 = local_6038[lVar7];
    local_6038[lVar7] = (int)uVar12;
    uVar12 = (ulonglong)(uint)(iVar1 + (int)uVar12);
    iVar1 = local_4038[lVar7];
    local_4038[lVar7] = (int)uVar13;
    uVar13 = (ulonglong)(uint)(iVar1 + (int)uVar13);
    iVar1 = local_2038[lVar7];
    local_2038[lVar7] = (int)uVar14;
    lVar7 = lVar7 + 1;
    uVar14 = (ulonglong)(uint)(iVar1 + (int)uVar14);
  } while (lVar7 < 0x800);
  uVar10 = uVar15;
  pFVar6 = param_1;
  if (0 < param_3) {
    do {
      uVar2 = pFVar6->Prefix;
      uVar5 = (uint)uVar2 & 0x3ff;
      iVar1 = local_a038[uVar5];
      local_a038[uVar5] = iVar1 + 1;
      pFVar3 = (pFVar6->Value).View;
      param_2[iVar1].Prefix = uVar2;
      param_2[iVar1].Value.View = pFVar3;
      param_2[iVar1].Value.Cache.Data.AllocatorInstance.Data =
           (pFVar6->Value).Cache.Data.AllocatorInstance.Data;
      (pFVar6->Value).Cache.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      param_2[iVar1].Value.Cache.Data.ArrayNum = (pFVar6->Value).Cache.Data.ArrayNum;
      param_2[iVar1].Value.Cache.Data.ArrayMax = (pFVar6->Value).Cache.Data.ArrayMax;
      (pFVar6->Value).Cache.Data.ArrayNum = 0;
      (pFVar6->Value).Cache.Data.ArrayMax = 0;
      param_2[iVar1].Value.bIsCached = (pFVar6->Value).bIsCached;
      uVar10 = uVar10 - 1;
      pFVar9 = param_2;
      pFVar6 = pFVar6 + 1;
      uVar16 = uVar15;
    } while (uVar10 != 0);
    do {
      uVar10 = pFVar9->Prefix;
      uVar5 = (uint)(uVar10 >> 10) & 0x3ff;
      iVar1 = local_9038[uVar5];
      local_9038[uVar5] = iVar1 + 1;
      pFVar3 = (pFVar9->Value).View;
      pFVar6 = param_1 + iVar1;
      pFVar6->Prefix = uVar10;
      (pFVar6->Value).View = pFVar3;
      if (pFVar6 != pFVar9) {
        pFVar4 = (pFVar6->Value).Cache.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar6->Value).Cache.Data.AllocatorInstance.Data =
             (pFVar9->Value).Cache.Data.AllocatorInstance.Data;
        (pFVar9->Value).Cache.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Value).Cache.Data.ArrayNum = (pFVar9->Value).Cache.Data.ArrayNum;
        (pFVar6->Value).Cache.Data.ArrayMax = (pFVar9->Value).Cache.Data.ArrayMax;
        (pFVar9->Value).Cache.Data.ArrayNum = 0;
        (pFVar9->Value).Cache.Data.ArrayMax = 0;
      }
      (pFVar6->Value).bIsCached = (pFVar9->Value).bIsCached;
      uVar16 = uVar16 - 1;
      pFVar6 = param_1;
      pFVar9 = pFVar9 + 1;
      uVar10 = uVar15;
    } while (uVar16 != 0);
    do {
      uVar16 = pFVar6->Prefix;
      uVar5 = (uint)(uVar16 >> 0x14) & 0x7ff;
      iVar1 = local_8038[uVar5];
      local_8038[uVar5] = iVar1 + 1;
      pFVar3 = (pFVar6->Value).View;
      pFVar9 = param_2 + iVar1;
      pFVar9->Prefix = uVar16;
      (pFVar9->Value).View = pFVar3;
      if (pFVar9 != pFVar6) {
        pFVar4 = (pFVar9->Value).Cache.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar9->Value).Cache.Data.AllocatorInstance.Data =
             (pFVar6->Value).Cache.Data.AllocatorInstance.Data;
        (pFVar6->Value).Cache.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar9->Value).Cache.Data.ArrayNum = (pFVar6->Value).Cache.Data.ArrayNum;
        (pFVar9->Value).Cache.Data.ArrayMax = (pFVar6->Value).Cache.Data.ArrayMax;
        (pFVar6->Value).Cache.Data.ArrayNum = 0;
        (pFVar6->Value).Cache.Data.ArrayMax = 0;
      }
      (pFVar9->Value).bIsCached = (pFVar6->Value).bIsCached;
      uVar10 = uVar10 - 1;
      pFVar9 = param_2;
      pFVar6 = pFVar6 + 1;
      uVar16 = uVar15;
    } while (uVar10 != 0);
    do {
      uVar10 = pFVar9->Prefix;
      uVar5 = (uint)(uVar10 >> 0x1f) & 0x7ff;
      iVar1 = local_6038[uVar5];
      local_6038[uVar5] = iVar1 + 1;
      pFVar3 = (pFVar9->Value).View;
      pFVar6 = param_1 + iVar1;
      pFVar6->Prefix = uVar10;
      (pFVar6->Value).View = pFVar3;
      if (pFVar6 != pFVar9) {
        pFVar4 = (pFVar6->Value).Cache.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar6->Value).Cache.Data.AllocatorInstance.Data =
             (pFVar9->Value).Cache.Data.AllocatorInstance.Data;
        (pFVar9->Value).Cache.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Value).Cache.Data.ArrayNum = (pFVar9->Value).Cache.Data.ArrayNum;
        (pFVar6->Value).Cache.Data.ArrayMax = (pFVar9->Value).Cache.Data.ArrayMax;
        (pFVar9->Value).Cache.Data.ArrayNum = 0;
        (pFVar9->Value).Cache.Data.ArrayMax = 0;
      }
      (pFVar6->Value).bIsCached = (pFVar9->Value).bIsCached;
      uVar16 = uVar16 - 1;
      pFVar6 = param_1;
      pFVar9 = pFVar9 + 1;
      uVar10 = uVar15;
    } while (uVar16 != 0);
    do {
      uVar2 = pFVar6->Prefix;
      uVar5 = (uint)(uVar2 >> 0x2a) & 0x7ff;
      iVar1 = local_4038[uVar5];
      local_4038[uVar5] = iVar1 + 1;
      pFVar3 = (pFVar6->Value).View;
      pFVar9 = param_2 + iVar1;
      pFVar9->Prefix = uVar2;
      (pFVar9->Value).View = pFVar3;
      if (pFVar9 != pFVar6) {
        pFVar4 = (pFVar9->Value).Cache.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar9->Value).Cache.Data.AllocatorInstance.Data =
             (pFVar6->Value).Cache.Data.AllocatorInstance.Data;
        (pFVar6->Value).Cache.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar9->Value).Cache.Data.ArrayNum = (pFVar6->Value).Cache.Data.ArrayNum;
        (pFVar9->Value).Cache.Data.ArrayMax = (pFVar6->Value).Cache.Data.ArrayMax;
        (pFVar6->Value).Cache.Data.ArrayNum = 0;
        (pFVar6->Value).Cache.Data.ArrayMax = 0;
      }
      (pFVar9->Value).bIsCached = (pFVar6->Value).bIsCached;
      uVar10 = uVar10 - 1;
      pFVar6 = pFVar6 + 1;
    } while (uVar10 != 0);
    do {
      uVar10 = param_2->Prefix;
      uVar16 = uVar10 >> 0x35;
      iVar1 = local_2038[uVar16];
      local_2038[uVar16] = iVar1 + 1;
      pFVar3 = (param_2->Value).View;
      pFVar6 = param_1 + iVar1;
      pFVar6->Prefix = uVar10;
      (pFVar6->Value).View = pFVar3;
      if (pFVar6 != param_2) {
        pFVar4 = (pFVar6->Value).Cache.Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar6->Value).Cache.Data.AllocatorInstance.Data =
             (param_2->Value).Cache.Data.AllocatorInstance.Data;
        (param_2->Value).Cache.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Value).Cache.Data.ArrayNum = (param_2->Value).Cache.Data.ArrayNum;
        (pFVar6->Value).Cache.Data.ArrayMax = (param_2->Value).Cache.Data.ArrayMax;
        (param_2->Value).Cache.Data.ArrayNum = 0;
        (param_2->Value).Cache.Data.ArrayMax = 0;
      }
      (pFVar6->Value).bIsCached = (param_2->Value).bIsCached;
      uVar15 = uVar15 - 1;
      param_2 = param_2 + 1;
    } while (uVar15 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdbff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  FName *pFVar4;
  bool bVar5;
  undefined3 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FData *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  FData *pFVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdc006;
  local_2028[0x7ff] = 1;
  uVar18 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar12 = param_1;
  uVar15 = uVar18;
  if (0 < param_3) {
    do {
      uVar20 = pFVar12->Prefix;
      local_a028[(uint)uVar20 & 0x3ff] = local_a028[(uint)uVar20 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar20 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar20 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar20 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar20 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar20 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar20 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar20 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar20 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar20 >> 0x35] = local_2028[uVar20 >> 0x35] + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
  }
  lVar13 = 0x400;
  iVar11 = 0;
  lVar22 = 0;
  iVar14 = 0;
  iVar23 = 0;
  iVar21 = 0;
  iVar16 = 0;
  iVar19 = 0;
  do {
    iVar1 = local_a028[lVar22];
    local_a028[lVar22] = iVar14;
    iVar2 = aiStack_9028[lVar22];
    aiStack_9028[lVar22] = iVar23;
    iVar8 = aiStack_8028[lVar22] + iVar16;
    aiStack_8028[lVar22] = iVar16;
    iVar9 = aiStack_6028[lVar22] + iVar19;
    aiStack_6028[lVar22] = iVar19;
    iVar10 = aiStack_4028[lVar22] + iVar21;
    aiStack_4028[lVar22] = iVar21;
    iVar21 = local_2028[lVar22];
    local_2028[lVar22] = iVar11;
    iVar11 = iVar21 + iVar11;
    lVar22 = lVar22 + 1;
    iVar14 = iVar1 + iVar14;
    iVar23 = iVar2 + iVar23;
    iVar21 = iVar10;
    iVar16 = iVar8;
    iVar19 = iVar9;
  } while (lVar22 < 0x400);
  do {
    iVar14 = aiStack_8028[lVar13];
    aiStack_8028[lVar13] = iVar8;
    iVar23 = aiStack_6028[lVar13];
    aiStack_6028[lVar13] = iVar9;
    iVar21 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar10;
    iVar16 = local_2028[lVar13];
    local_2028[lVar13] = iVar11;
    iVar11 = iVar16 + iVar11;
    lVar13 = lVar13 + 1;
    iVar10 = iVar21 + iVar10;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar23 + iVar9;
  } while (lVar13 < 0x800);
  pFVar12 = param_1;
  uVar15 = uVar18;
  if (0 < param_3) {
    do {
      uVar3 = pFVar12->Prefix;
      pFVar4 = (pFVar12->Value).View;
      uVar7 = (uint)pFVar12->Prefix & 0x3ff;
      iVar23 = (pFVar12->Value).Cache;
      bVar5 = (pFVar12->Value).bIsCached;
      uVar6 = *(undefined3 *)&(pFVar12->Value).field_0xd;
      iVar14 = local_a028[uVar7];
      local_a028[uVar7] = iVar14 + 1;
      param_2[iVar14].Prefix = uVar3;
      param_2[iVar14].Value.View = pFVar4;
      pFVar17 = param_2 + iVar14;
      (pFVar17->Value).Cache = iVar23;
      (pFVar17->Value).bIsCached = bVar5;
      *(undefined3 *)&(pFVar17->Value).field_0xd = uVar6;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
      pFVar17 = param_2;
      uVar20 = uVar18;
    } while (uVar15 != 0);
    do {
      iVar23 = (pFVar17->Value).Cache;
      bVar5 = (pFVar17->Value).bIsCached;
      uVar6 = *(undefined3 *)&(pFVar17->Value).field_0xd;
      uVar7 = (uint)(pFVar17->Prefix >> 10) & 0x3ff;
      uVar3 = pFVar17->Prefix;
      pFVar4 = (pFVar17->Value).View;
      iVar14 = aiStack_9028[uVar7];
      aiStack_9028[uVar7] = iVar14 + 1;
      param_1[iVar14].Prefix = uVar3;
      param_1[iVar14].Value.View = pFVar4;
      pFVar12 = param_1 + iVar14;
      (pFVar12->Value).Cache = iVar23;
      (pFVar12->Value).bIsCached = bVar5;
      *(undefined3 *)&(pFVar12->Value).field_0xd = uVar6;
      uVar20 = uVar20 - 1;
      pFVar12 = param_1;
      pFVar17 = pFVar17 + 1;
      uVar15 = uVar18;
    } while (uVar20 != 0);
    do {
      iVar23 = (pFVar12->Value).Cache;
      bVar5 = (pFVar12->Value).bIsCached;
      uVar6 = *(undefined3 *)&(pFVar12->Value).field_0xd;
      uVar7 = (uint)(pFVar12->Prefix >> 0x14) & 0x7ff;
      uVar3 = pFVar12->Prefix;
      pFVar4 = (pFVar12->Value).View;
      iVar14 = aiStack_8028[uVar7];
      aiStack_8028[uVar7] = iVar14 + 1;
      param_2[iVar14].Prefix = uVar3;
      param_2[iVar14].Value.View = pFVar4;
      pFVar17 = param_2 + iVar14;
      (pFVar17->Value).Cache = iVar23;
      (pFVar17->Value).bIsCached = bVar5;
      *(undefined3 *)&(pFVar17->Value).field_0xd = uVar6;
      uVar15 = uVar15 - 1;
      pFVar17 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar20 = uVar18;
    } while (uVar15 != 0);
    do {
      iVar23 = (pFVar17->Value).Cache;
      bVar5 = (pFVar17->Value).bIsCached;
      uVar6 = *(undefined3 *)&(pFVar17->Value).field_0xd;
      uVar7 = (uint)(pFVar17->Prefix >> 0x1f) & 0x7ff;
      uVar3 = pFVar17->Prefix;
      pFVar4 = (pFVar17->Value).View;
      iVar14 = aiStack_6028[uVar7];
      aiStack_6028[uVar7] = iVar14 + 1;
      param_1[iVar14].Prefix = uVar3;
      param_1[iVar14].Value.View = pFVar4;
      pFVar12 = param_1 + iVar14;
      (pFVar12->Value).Cache = iVar23;
      (pFVar12->Value).bIsCached = bVar5;
      *(undefined3 *)&(pFVar12->Value).field_0xd = uVar6;
      uVar20 = uVar20 - 1;
      pFVar12 = param_1;
      pFVar17 = pFVar17 + 1;
      uVar15 = uVar18;
    } while (uVar20 != 0);
    do {
      iVar23 = (pFVar12->Value).Cache;
      bVar5 = (pFVar12->Value).bIsCached;
      uVar6 = *(undefined3 *)&(pFVar12->Value).field_0xd;
      uVar7 = (uint)(pFVar12->Prefix >> 0x2a) & 0x7ff;
      uVar3 = pFVar12->Prefix;
      pFVar4 = (pFVar12->Value).View;
      iVar14 = aiStack_4028[uVar7];
      aiStack_4028[uVar7] = iVar14 + 1;
      param_2[iVar14].Prefix = uVar3;
      param_2[iVar14].Value.View = pFVar4;
      pFVar17 = param_2 + iVar14;
      (pFVar17->Value).Cache = iVar23;
      (pFVar17->Value).bIsCached = bVar5;
      *(undefined3 *)&(pFVar17->Value).field_0xd = uVar6;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
    do {
      uVar3 = param_2->Prefix;
      pFVar4 = (param_2->Value).View;
      uVar15 = param_2->Prefix >> 0x35;
      iVar23 = (param_2->Value).Cache;
      bVar5 = (param_2->Value).bIsCached;
      uVar6 = *(undefined3 *)&(param_2->Value).field_0xd;
      param_2 = param_2 + 1;
      iVar14 = local_2028[uVar15];
      local_2028[uVar15] = iVar14 + 1;
      param_1[iVar14].Prefix = uVar3;
      param_1[iVar14].Value.View = pFVar4;
      pFVar12 = param_1 + iVar14;
      (pFVar12->Value).Cache = iVar23;
      (pFVar12->Value).bIsCached = bVar5;
      *(undefined3 *)&(pFVar12->Value).field_0xd = uVar6;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdc3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdc3b6;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar11->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar15 = 0;
  iVar18 = 0;
  do {
    iVar1 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar2 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar15;
    aiStack_8028[lVar21] = iVar15;
    iVar8 = aiStack_6028[lVar21] + iVar18;
    aiStack_6028[lVar21] = iVar18;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar1 + iVar13;
    iVar22 = iVar2 + iVar22;
    iVar20 = iVar9;
    iVar15 = iVar7;
    iVar18 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar15 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar15 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar11->Prefix;
      pcVar4 = (pFVar11->Value).View.DataPtr;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pcVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
      pFVar16 = param_2;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      iVar22 = (pFVar16->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar16->Value).View.field_0xc;
      uVar6 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar3 = pFVar16->Prefix;
      pcVar4 = (pFVar16->Value).View.DataPtr;
      iVar13 = aiStack_9028[uVar6];
      aiStack_9028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pcVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      uVar3 = pFVar11->Prefix;
      pcVar4 = (pFVar11->Value).View.DataPtr;
      iVar13 = aiStack_8028[uVar6];
      aiStack_8028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pcVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar16 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      iVar22 = (pFVar16->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar16->Value).View.field_0xc;
      uVar6 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar3 = pFVar16->Prefix;
      pcVar4 = (pFVar16->Value).View.DataPtr;
      iVar13 = aiStack_6028[uVar6];
      aiStack_6028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pcVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      uVar3 = pFVar11->Prefix;
      pcVar4 = (pFVar11->Value).View.DataPtr;
      iVar13 = aiStack_4028[uVar6];
      aiStack_4028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pcVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      uVar3 = param_2->Prefix;
      pcVar4 = (param_2->Value).View.DataPtr;
      uVar14 = param_2->Prefix >> 0x35;
      iVar22 = (param_2->Value).View.Size;
      uVar5 = *(undefined4 *)&(param_2->Value).View.field_0xc;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      local_2028[uVar14] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pcVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdc750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdc766;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar11->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar15 = 0;
  iVar18 = 0;
  do {
    iVar1 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar2 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar15;
    aiStack_8028[lVar21] = iVar15;
    iVar8 = aiStack_6028[lVar21] + iVar18;
    aiStack_6028[lVar21] = iVar18;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar1 + iVar13;
    iVar22 = iVar2 + iVar22;
    iVar20 = iVar9;
    iVar15 = iVar7;
    iVar18 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar15 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar15 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar11->Prefix;
      pwVar4 = (pFVar11->Value).View.DataPtr;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pwVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
      pFVar16 = param_2;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      iVar22 = (pFVar16->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar16->Value).View.field_0xc;
      uVar6 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar3 = pFVar16->Prefix;
      pwVar4 = (pFVar16->Value).View.DataPtr;
      iVar13 = aiStack_9028[uVar6];
      aiStack_9028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pwVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      uVar3 = pFVar11->Prefix;
      pwVar4 = (pFVar11->Value).View.DataPtr;
      iVar13 = aiStack_8028[uVar6];
      aiStack_8028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pwVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar16 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      iVar22 = (pFVar16->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar16->Value).View.field_0xc;
      uVar6 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar3 = pFVar16->Prefix;
      pwVar4 = (pFVar16->Value).View.DataPtr;
      iVar13 = aiStack_6028[uVar6];
      aiStack_6028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pwVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      uVar3 = pFVar11->Prefix;
      pwVar4 = (pFVar11->Value).View.DataPtr;
      iVar13 = aiStack_4028[uVar6];
      aiStack_4028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pwVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      uVar3 = param_2->Prefix;
      pwVar4 = (param_2->Value).View.DataPtr;
      uVar14 = param_2->Prefix >> 0x35;
      iVar22 = (param_2->Value).View.Size;
      uVar5 = *(undefined4 *)&(param_2->Value).View.field_0xc;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      local_2028[uVar14] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pwVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdcb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdcb16;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar11->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar15 = 0;
  iVar18 = 0;
  do {
    iVar1 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar2 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar15;
    aiStack_8028[lVar21] = iVar15;
    iVar8 = aiStack_6028[lVar21] + iVar18;
    aiStack_6028[lVar21] = iVar18;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar1 + iVar13;
    iVar22 = iVar2 + iVar22;
    iVar20 = iVar9;
    iVar15 = iVar7;
    iVar18 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar15 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar15 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar11->Prefix;
      pcVar4 = (pFVar11->Value).View.DataPtr;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pcVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
      pFVar16 = param_2;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      iVar22 = (pFVar16->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar16->Value).View.field_0xc;
      uVar6 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar3 = pFVar16->Prefix;
      pcVar4 = (pFVar16->Value).View.DataPtr;
      iVar13 = aiStack_9028[uVar6];
      aiStack_9028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pcVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      uVar3 = pFVar11->Prefix;
      pcVar4 = (pFVar11->Value).View.DataPtr;
      iVar13 = aiStack_8028[uVar6];
      aiStack_8028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pcVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar16 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      iVar22 = (pFVar16->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar16->Value).View.field_0xc;
      uVar6 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar3 = pFVar16->Prefix;
      pcVar4 = (pFVar16->Value).View.DataPtr;
      iVar13 = aiStack_6028[uVar6];
      aiStack_6028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pcVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      uVar3 = pFVar11->Prefix;
      pcVar4 = (pFVar11->Value).View.DataPtr;
      iVar13 = aiStack_4028[uVar6];
      aiStack_4028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pcVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      uVar3 = param_2->Prefix;
      pcVar4 = (param_2->Value).View.DataPtr;
      uVar14 = param_2->Prefix >> 0x35;
      iVar22 = (param_2->Value).View.Size;
      uVar5 = *(undefined4 *)&(param_2->Value).View.field_0xc;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      local_2028[uVar14] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pcVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdceb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdcec6;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar11->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar15 = 0;
  iVar18 = 0;
  do {
    iVar1 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar2 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar15;
    aiStack_8028[lVar21] = iVar15;
    iVar8 = aiStack_6028[lVar21] + iVar18;
    aiStack_6028[lVar21] = iVar18;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar1 + iVar13;
    iVar22 = iVar2 + iVar22;
    iVar20 = iVar9;
    iVar15 = iVar7;
    iVar18 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar15 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar15 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar11->Prefix;
      pwVar4 = (pFVar11->Value).View.DataPtr;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pwVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
      pFVar16 = param_2;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      iVar22 = (pFVar16->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar16->Value).View.field_0xc;
      uVar6 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      uVar3 = pFVar16->Prefix;
      pwVar4 = (pFVar16->Value).View.DataPtr;
      iVar13 = aiStack_9028[uVar6];
      aiStack_9028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pwVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      uVar3 = pFVar11->Prefix;
      pwVar4 = (pFVar11->Value).View.DataPtr;
      iVar13 = aiStack_8028[uVar6];
      aiStack_8028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pwVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar16 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar19 = uVar17;
    } while (uVar14 != 0);
    do {
      iVar22 = (pFVar16->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar16->Value).View.field_0xc;
      uVar6 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      uVar3 = pFVar16->Prefix;
      pwVar4 = (pFVar16->Value).View.DataPtr;
      iVar13 = aiStack_6028[uVar6];
      aiStack_6028[uVar6] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pwVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar19 = uVar19 - 1;
      pFVar11 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar14 = uVar17;
    } while (uVar19 != 0);
    do {
      iVar22 = (pFVar11->Value).View.Size;
      uVar5 = *(undefined4 *)&(pFVar11->Value).View.field_0xc;
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      uVar3 = pFVar11->Prefix;
      pwVar4 = (pFVar11->Value).View.DataPtr;
      iVar13 = aiStack_4028[uVar6];
      aiStack_4028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value.View.DataPtr = pwVar4;
      param_2[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_2[iVar13].Value.View.field_0xc = uVar5;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      uVar3 = param_2->Prefix;
      pwVar4 = (param_2->Value).View.DataPtr;
      uVar14 = param_2->Prefix >> 0x35;
      iVar22 = (param_2->Value).View.Size;
      uVar5 = *(undefined4 *)&(param_2->Value).View.field_0xc;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      local_2028[uVar14] = iVar13 + 1;
      param_1[iVar13].Prefix = uVar3;
      param_1[iVar13].Value.View.DataPtr = pwVar4;
      param_1[iVar13].Value.View.Size = iVar22;
      *(undefined4 *)&param_1[iVar13].Value.View.field_0xc = uVar5;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdd260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  long64 lVar4;
  ulong64 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  FData *pFVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdd276;
  local_2028[0x7ff] = 1;
  uVar16 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar16;
  if (0 < param_3) {
    do {
      uVar18 = pFVar11->Prefix;
      local_a028[(uint)uVar18 & 0x3ff] = local_a028[(uint)uVar18 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar18 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar18 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar18 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar18 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar18 >> 0x35] = local_2028[uVar18 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar17 = 0;
  iVar19 = 0;
  do {
    iVar1 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar2 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar17;
    aiStack_8028[lVar21] = iVar17;
    iVar8 = aiStack_6028[lVar21] + iVar19;
    aiStack_6028[lVar21] = iVar19;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar1 + iVar13;
    iVar22 = iVar2 + iVar22;
    iVar20 = iVar9;
    iVar17 = iVar7;
    iVar19 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar17 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar17 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar16;
  if (0 < param_3) {
    do {
      uVar3 = pFVar11->Prefix;
      lVar4 = pFVar11->Value;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value = lVar4;
      uVar14 = uVar14 - 1;
      pFVar15 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar18 = uVar16;
    } while (uVar14 != 0);
    do {
      uVar6 = (uint)(pFVar15->Prefix >> 10) & 0x3ff;
      lVar4 = pFVar15->Value;
      iVar13 = aiStack_9028[uVar6];
      param_1[iVar13].Prefix = pFVar15->Prefix;
      param_1[iVar13].Value = lVar4;
      aiStack_9028[uVar6] = iVar13 + 1;
      uVar18 = uVar18 - 1;
      pFVar11 = param_1;
      pFVar15 = pFVar15 + 1;
      uVar14 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      lVar4 = pFVar11->Value;
      iVar13 = aiStack_8028[uVar6];
      param_2[iVar13].Prefix = pFVar11->Prefix;
      param_2[iVar13].Value = lVar4;
      aiStack_8028[uVar6] = iVar13 + 1;
      uVar14 = uVar14 - 1;
      pFVar15 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar18 = uVar16;
    } while (uVar14 != 0);
    do {
      uVar6 = (uint)(pFVar15->Prefix >> 0x1f) & 0x7ff;
      lVar4 = pFVar15->Value;
      iVar13 = aiStack_6028[uVar6];
      param_1[iVar13].Prefix = pFVar15->Prefix;
      param_1[iVar13].Value = lVar4;
      aiStack_6028[uVar6] = iVar13 + 1;
      uVar18 = uVar18 - 1;
      pFVar11 = param_1;
      pFVar15 = pFVar15 + 1;
      uVar14 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      lVar4 = pFVar11->Value;
      iVar13 = aiStack_4028[uVar6];
      param_2[iVar13].Prefix = pFVar11->Prefix;
      param_2[iVar13].Value = lVar4;
      aiStack_4028[uVar6] = iVar13 + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      puVar5 = &param_2->Prefix;
      lVar4 = param_2->Value;
      uVar14 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      param_1[iVar13].Prefix = *puVar5;
      param_1[iVar13].Value = lVar4;
      local_2028[uVar14] = iVar13 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdd5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FData *pFVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  FData *pFVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdd5d6;
  local_2028[0x7ff] = 1;
  uVar16 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar11 = param_1;
  uVar14 = uVar16;
  if (0 < param_3) {
    do {
      uVar18 = pFVar11->Prefix;
      local_a028[(uint)uVar18 & 0x3ff] = local_a028[(uint)uVar18 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar18 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar18 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar18 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar18 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar18 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar18 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar18 >> 0x35] = local_2028[uVar18 >> 0x35] + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
  }
  lVar12 = 0x400;
  iVar10 = 0;
  lVar21 = 0;
  iVar13 = 0;
  iVar22 = 0;
  iVar20 = 0;
  iVar17 = 0;
  iVar19 = 0;
  do {
    iVar1 = local_a028[lVar21];
    local_a028[lVar21] = iVar13;
    iVar2 = aiStack_9028[lVar21];
    aiStack_9028[lVar21] = iVar22;
    iVar7 = aiStack_8028[lVar21] + iVar17;
    aiStack_8028[lVar21] = iVar17;
    iVar8 = aiStack_6028[lVar21] + iVar19;
    aiStack_6028[lVar21] = iVar19;
    iVar9 = aiStack_4028[lVar21] + iVar20;
    aiStack_4028[lVar21] = iVar20;
    iVar20 = local_2028[lVar21];
    local_2028[lVar21] = iVar10;
    iVar10 = iVar20 + iVar10;
    lVar21 = lVar21 + 1;
    iVar13 = iVar1 + iVar13;
    iVar22 = iVar2 + iVar22;
    iVar20 = iVar9;
    iVar17 = iVar7;
    iVar19 = iVar8;
  } while (lVar21 < 0x400);
  do {
    iVar13 = aiStack_8028[lVar12];
    aiStack_8028[lVar12] = iVar7;
    iVar22 = aiStack_6028[lVar12];
    aiStack_6028[lVar12] = iVar8;
    iVar20 = aiStack_4028[lVar12];
    aiStack_4028[lVar12] = iVar9;
    iVar17 = local_2028[lVar12];
    local_2028[lVar12] = iVar10;
    iVar10 = iVar17 + iVar10;
    lVar12 = lVar12 + 1;
    iVar9 = iVar20 + iVar9;
    iVar7 = iVar13 + iVar7;
    iVar8 = iVar22 + iVar8;
  } while (lVar12 < 0x800);
  pFVar11 = param_1;
  uVar14 = uVar16;
  if (0 < param_3) {
    do {
      uVar3 = pFVar11->Prefix;
      uVar4 = pFVar11->Value;
      uVar6 = (uint)pFVar11->Prefix & 0x3ff;
      iVar13 = local_a028[uVar6];
      local_a028[uVar6] = iVar13 + 1;
      param_2[iVar13].Prefix = uVar3;
      param_2[iVar13].Value = uVar4;
      uVar14 = uVar14 - 1;
      pFVar15 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar18 = uVar16;
    } while (uVar14 != 0);
    do {
      uVar6 = (uint)(pFVar15->Prefix >> 10) & 0x3ff;
      uVar3 = pFVar15->Value;
      iVar13 = aiStack_9028[uVar6];
      param_1[iVar13].Prefix = pFVar15->Prefix;
      param_1[iVar13].Value = uVar3;
      aiStack_9028[uVar6] = iVar13 + 1;
      uVar18 = uVar18 - 1;
      pFVar11 = param_1;
      pFVar15 = pFVar15 + 1;
      uVar14 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar11->Prefix >> 0x14) & 0x7ff;
      uVar3 = pFVar11->Value;
      iVar13 = aiStack_8028[uVar6];
      param_2[iVar13].Prefix = pFVar11->Prefix;
      param_2[iVar13].Value = uVar3;
      aiStack_8028[uVar6] = iVar13 + 1;
      uVar14 = uVar14 - 1;
      pFVar15 = param_2;
      pFVar11 = pFVar11 + 1;
      uVar18 = uVar16;
    } while (uVar14 != 0);
    do {
      uVar6 = (uint)(pFVar15->Prefix >> 0x1f) & 0x7ff;
      uVar3 = pFVar15->Value;
      iVar13 = aiStack_6028[uVar6];
      param_1[iVar13].Prefix = pFVar15->Prefix;
      param_1[iVar13].Value = uVar3;
      aiStack_6028[uVar6] = iVar13 + 1;
      uVar18 = uVar18 - 1;
      pFVar11 = param_1;
      pFVar15 = pFVar15 + 1;
      uVar14 = uVar16;
    } while (uVar18 != 0);
    do {
      uVar6 = (uint)(pFVar11->Prefix >> 0x2a) & 0x7ff;
      uVar3 = pFVar11->Value;
      iVar13 = aiStack_4028[uVar6];
      param_2[iVar13].Prefix = pFVar11->Prefix;
      param_2[iVar13].Value = uVar3;
      aiStack_4028[uVar6] = iVar13 + 1;
      uVar14 = uVar14 - 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar14 != 0);
    do {
      puVar5 = &param_2->Prefix;
      uVar3 = param_2->Value;
      uVar14 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar13 = local_2028[uVar14];
      param_1[iVar13].Prefix = *puVar5;
      param_1[iVar13].Value = uVar3;
      local_2028[uVar14] = iVar13 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// RadixSort64<1,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix'::__l2::<lambda_1>_> @ 142cdd920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,FData *param_2,int param_3,<lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  bool bVar5;
  undefined7 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FData *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  FData *pFVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int local_a028 [1024];
  int aiStack_9028 [1024];
  int aiStack_8028 [1024];
  int aiStack_7028 [1024];
  int aiStack_6028 [1024];
  int aiStack_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42cdd936;
  local_2028[0x7ff] = 1;
  uVar17 = (ulonglong)(uint)param_3;
  memset(local_a028,0,0xa000);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar19 = pFVar12->Prefix;
      local_a028[(uint)uVar19 & 0x3ff] = local_a028[(uint)uVar19 & 0x3ff] + 1;
      aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] = aiStack_9028[(uint)(uVar19 >> 10) & 0x3ff] + 1;
      aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] =
           aiStack_8028[(uint)(uVar19 >> 0x14) & 0x7ff] + 1;
      aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] =
           aiStack_6028[(uint)(uVar19 >> 0x1f) & 0x7ff] + 1;
      aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] =
           aiStack_4028[(uint)(uVar19 >> 0x2a) & 0x7ff] + 1;
      local_2028[uVar19 >> 0x35] = local_2028[uVar19 >> 0x35] + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
  }
  lVar13 = 0x400;
  iVar11 = 0;
  lVar22 = 0;
  iVar14 = 0;
  iVar23 = 0;
  iVar21 = 0;
  iVar18 = 0;
  iVar20 = 0;
  do {
    iVar1 = local_a028[lVar22];
    local_a028[lVar22] = iVar14;
    iVar2 = aiStack_9028[lVar22];
    aiStack_9028[lVar22] = iVar23;
    iVar8 = aiStack_8028[lVar22] + iVar18;
    aiStack_8028[lVar22] = iVar18;
    iVar9 = aiStack_6028[lVar22] + iVar20;
    aiStack_6028[lVar22] = iVar20;
    iVar10 = aiStack_4028[lVar22] + iVar21;
    aiStack_4028[lVar22] = iVar21;
    iVar21 = local_2028[lVar22];
    local_2028[lVar22] = iVar11;
    iVar11 = iVar21 + iVar11;
    lVar22 = lVar22 + 1;
    iVar14 = iVar1 + iVar14;
    iVar23 = iVar2 + iVar23;
    iVar21 = iVar10;
    iVar18 = iVar8;
    iVar20 = iVar9;
  } while (lVar22 < 0x400);
  do {
    iVar14 = aiStack_8028[lVar13];
    aiStack_8028[lVar13] = iVar8;
    iVar23 = aiStack_6028[lVar13];
    aiStack_6028[lVar13] = iVar9;
    iVar21 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar10;
    iVar18 = local_2028[lVar13];
    local_2028[lVar13] = iVar11;
    iVar11 = iVar18 + iVar11;
    lVar13 = lVar13 + 1;
    iVar10 = iVar21 + iVar10;
    iVar8 = iVar14 + iVar8;
    iVar9 = iVar23 + iVar9;
  } while (lVar13 < 0x800);
  pFVar12 = param_1;
  uVar15 = uVar17;
  if (0 < param_3) {
    do {
      uVar3 = pFVar12->Prefix;
      bVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      uVar7 = (uint)pFVar12->Prefix & 0x3ff;
      iVar14 = local_a028[uVar7];
      local_a028[uVar7] = iVar14 + 1;
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = uVar3;
      pFVar16->Value = bVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 10) & 0x3ff;
      bVar5 = pFVar16->Value;
      uVar6 = *(undefined7 *)&pFVar16->field_0x9;
      iVar14 = aiStack_9028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = bVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      aiStack_9028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x14) & 0x7ff;
      bVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      iVar14 = aiStack_8028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = bVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      aiStack_8028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar16 = param_2;
      pFVar12 = pFVar12 + 1;
      uVar19 = uVar17;
    } while (uVar15 != 0);
    do {
      uVar7 = (uint)(pFVar16->Prefix >> 0x1f) & 0x7ff;
      bVar5 = pFVar16->Value;
      uVar6 = *(undefined7 *)&pFVar16->field_0x9;
      iVar14 = aiStack_6028[uVar7];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = pFVar16->Prefix;
      pFVar12->Value = bVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      aiStack_6028[uVar7] = iVar14 + 1;
      uVar19 = uVar19 - 1;
      pFVar12 = param_1;
      pFVar16 = pFVar16 + 1;
      uVar15 = uVar17;
    } while (uVar19 != 0);
    do {
      uVar7 = (uint)(pFVar12->Prefix >> 0x2a) & 0x7ff;
      bVar5 = pFVar12->Value;
      uVar6 = *(undefined7 *)&pFVar12->field_0x9;
      iVar14 = aiStack_4028[uVar7];
      pFVar16 = param_2 + iVar14;
      pFVar16->Prefix = pFVar12->Prefix;
      pFVar16->Value = bVar5;
      *(undefined7 *)&pFVar16->field_0x9 = uVar6;
      aiStack_4028[uVar7] = iVar14 + 1;
      uVar15 = uVar15 - 1;
      pFVar12 = pFVar12 + 1;
    } while (uVar15 != 0);
    do {
      puVar4 = &param_2->Prefix;
      bVar5 = param_2->Value;
      uVar6 = *(undefined7 *)&param_2->field_0x9;
      uVar15 = param_2->Prefix >> 0x35;
      param_2 = param_2 + 1;
      iVar14 = local_2028[uVar15];
      pFVar12 = param_1 + iVar14;
      pFVar12->Prefix = *puVar4;
      pFVar12->Value = bVar5;
      *(undefined7 *)&pFVar12->field_0x9 = uVar6;
      local_2028[uVar15] = iVar14 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix'::__l2::<lambda_2>_> @ 142cddc80

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,int param_2,<lambda_2> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix_::__l2::<lambda_2>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::<lambda_2>_> @ 142cddd00

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,int param_2,<lambda_2> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_2>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix'::__l2::<lambda_2>_> @ 142cddd80

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,int param_2,<lambda_2> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix_::__l2::<lambda_2>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::<lambda_2>_> @ 142cdde00

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,int param_2,<lambda_2> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_2>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix'::__l2::<lambda_2>_> @ 142cdde80

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix_::__l2::<lambda_2>_>
          (FData *param_1,int param_2,<lambda_2> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix_::__l2::<lambda_2>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix'::__l2::<lambda_1>_> @ 142cddf00

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix'::__l2::<lambda_1>_> @ 142cddf80

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde000

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde080

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde100

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde180

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde200

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde280

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde300

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  DestructItems<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>::SortByPrefix_::__l2::FData,int>
            ((FData *)local_18.Data,local_10[0]);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde390

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde410

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde490

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde510

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde590

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde610

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde690

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RadixSort64<`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix'::__l2::FData,int,`UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix'::__l2::<lambda_1>_> @ 142cde710

void __cdecl
RadixSort64<_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix_::__l2::<lambda_1>_>
          (FData *param_1,int param_2,<lambda_1> *param_3)

{
  ForAnyElementType local_18;
  int local_10 [2];
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,&local_18,local_10,local_10 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::SortByPrefix_::__l2::<lambda_1>_>
            (param_1,(FData *)local_18.Data,param_2,param_3);
  if ((FData *)local_18.Data != (FData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ~<lambda_1> @ 142ce4780

void __thiscall
`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000142ce47e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_18>,0,0> @ 142ce4d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_18>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::E]::<lambda_18>,0,0>
          (void *this)

{
  *(undefined ***)this = &_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_19>,0,0> @ 142ce4d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_19>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::E]::<lambda_19>,0,0>
          (void *this)

{
  *(undefined ***)this = &_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0> @ 142ce4d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,_UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_1>,_UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::__l2::<lambda_1>,0,0> @ 142ce4d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,_UTest_PingPongBetweenPhaseFactory::RegisterQueries_::__l2::<lambda_1>,_UTest_PingPongBetweenPhaseFactory::RegisterQueries_::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0> @ 142ce4d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,_UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_2>,_UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::__l2::<lambda_1>,0,0> @ 142ce4db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,_UTest_PingPongBetweenPhaseFactory::RegisterQueries_::__l2::<lambda_2>,_UTest_PingPongBetweenPhaseFactory::RegisterQueries_::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::__l2::<lambda_1>,0,0> @ 142ce4dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,_UTest_PingPongBetweenPhaseFactory::RegisterQueries_::__l2::<lambda_3>,_UTest_PingPongBetweenPhaseFactory::RegisterQueries_::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>'::__l2::<lambda_1>,0,0> @ 142ce4df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<int,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l154::<lambda_25>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`154'::<lambda_25>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_>'::__l2::<lambda_1>,0,0> @ 142ce4e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l105::<lambda_10>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`105'::<lambda_10>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_>'::__l2::<lambda_1>,0,0> @ 142ce4e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l109::<lambda_11>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`109'::<lambda_11>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>'::__l2::<lambda_1>,0,0> @ 142ce4e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l117::<lambda_13>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`117'::<lambda_13>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>'::__l2::<lambda_1>,0,0> @ 142ce4e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l121::<lambda_14>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`121'::<lambda_14>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_>'::__l2::<lambda_1>,0,0> @ 142ce4e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l125::<lambda_15>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`125'::<lambda_15>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::__l2::<lambda_1>,0,0> @ 142ce4eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::E]::<lambda_17>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,0,0> @ 142ce4ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l3::<lambda_1>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`3'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::__l2::<lambda_1>,0,0> @ 142ce4ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::L]::<lambda_20>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_>'::__l2::<lambda_1>,0,0> @ 142ce4f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l158::<lambda_27>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`158'::<lambda_27>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_>'::__l2::<lambda_1>,0,0> @ 142ce4f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l33::<lambda_4>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`33'::<lambda_4>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_>'::__l2::<lambda_1>,0,0> @ 142ce4f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l43::<lambda_5>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`43'::<lambda_5>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>'::__l2::<lambda_1>,0,0> @ 142ce4f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l53::<lambda_6>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`53'::<lambda_6>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>'::__l2::<lambda_1>,0,0> @ 142ce4f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l69::<lambda_7>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`69'::<lambda_7>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>'::__l2::<lambda_1>,0,0> @ 142ce4fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l85::<lambda_8>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`85'::<lambda_8>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_>'::__l2::<lambda_1>,0,0> @ 142ce4fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l101::<lambda_9>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`101'::<lambda_9>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_>'::__l2::<lambda_1>,0,0> @ 142ce4ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l113::<lambda_12>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`113'::<lambda_12>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_>'::__l2::<lambda_1>,0,0> @ 142ce5010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l146::<lambda_23>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`146'::<lambda_23>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_>'::__l2::<lambda_1>,0,0> @ 142ce5030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l150::<lambda_24>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`150'::<lambda_24>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_>'::__l2::<lambda_1>,0,0> @ 142ce5050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l13::<lambda_2>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`13'::<lambda_2>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_>'::__l2::<lambda_1>,0,0> @ 142ce5070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l23::<lambda_3>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`23'::<lambda_3>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0> @ 142ce5090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<_UE::Editor::DataStorage::<lambda_6>::operator()_::__l2::<lambda_1>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0> @ 142ce50b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<_UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery_::__l2::<lambda_1>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateDirectQueryCallbackBinding_V<lambda_1>__1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_DataStorage_Editor_UE__IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_567__Z__Queries_DataStorage_Editor_UE__YA_AV__TFunction___A6AXAEBUFQueryDescription_DataStorage_Editor_UE__AEAUIDirectQueryContext_234__Z____QEAV1_1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_345_IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_345__Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,0,0> @ 142ce50d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<__UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 142ce50f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 142ce5110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<___UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0> @ 142ce5130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0> @ 142ce5150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<___UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0> @ 142ce5170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0> @ 142ce5190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_3>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0> @ 142ce51b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>,0,0> @ 142ce51d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 142ce51f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FAutomationSpecBase::FAsyncLatentCommand::Update_::__l5::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>,1,0> @ 142ce5210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FAutomationSpecBase::FAsyncLatentCommand::Update_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_21>,0,0> @ 142ce5230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_21>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::L]::<lambda_21>,0,0>
          (void *this)

{
  *(undefined ***)this = &_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_22>,0,0> @ 142ce5250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_22>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::L]::<lambda_22>,0,0>
          (void *this)

{
  *(undefined ***)this = &_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0> @ 142ce5270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<___UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0> @ 142ce5290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0> @ 142ce52b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0> @ 142ce52d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<___UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0> @ 142ce52f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0> @ 142ce5310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_3>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0> @ 142ce5330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_4>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>,0,0> @ 142ce5350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0> @ 142ce5370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_3>::operator()_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0> @ 142ce5390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<___UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0> @ 142ce53b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<___UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>::operator()_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>,0,0> @ 142ce53d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0> @ 142ce53f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<___UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0> @ 142ce5410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<___UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>::operator()_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0> @ 142ce5430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<____UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_3>::operator()_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 142ce5fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  Select *pSVar1;
  FSimpleQuery FVar2;
  FQueryDescription *pFVar3;
  undefined1 auStack_2678 [32];
  undefined1 local_2658 [16];
  undefined1 local_2648 [3280];
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce5fe0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)(local_2648 + 0x20));
  FVar2 = UE::Editor::DataStorage::Queries::Select::Where(pSVar1);
  local_2658._0_8_ = FTestColumnA::StaticStruct();
  local_2658._8_8_ = FTestTagColumnA::StaticStruct();
  local_2648._8_4_ = 2;
  local_2648._0_8_ = local_2658;
  UE::Editor::DataStorage::Queries::FSimpleQuery::All
            ((FSimpleQuery *)FVar2.Query,(TArrayView<UScriptStruct_const_*_const,int> *)local_2648);
  pFVar3 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar2.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,pFVar3);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription
            ((FQueryDescription *)(local_2648 + 0x20));
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)(local_2648 + 0x20));
  FVar2 = UE::Editor::DataStorage::Queries::Select::Where(pSVar1);
  local_2648._0_8_ = FTestColumnB::StaticStruct();
  local_2648._8_8_ = FTestTagColumnB::StaticStruct();
  local_2658._8_4_ = 2;
  local_2658._0_8_ = local_2648;
  UE::Editor::DataStorage::Queries::FSimpleQuery::All
            ((FSimpleQuery *)FVar2.Query,(TArrayView<UScriptStruct_const_*_const,int> *)local_2658);
  pFVar3 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar2.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar3);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription
            ((FQueryDescription *)(local_2648 + 0x20));
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_cc8,&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  return;
}

// operator() @ 142ce6150

void __thiscall
```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_68;
  FSourceLocation local_58;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,L"Simple");
  local_58.Impl._Line = 0x9d;
  local_58.Impl._Column = 6;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_38,&local_58)
  ;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,L"Complex");
  local_58.Impl._Line = 0xae;
  local_58.Impl._Column = 6;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_38,&local_58)
  ;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ce62a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  Select *pSVar1;
  UScriptStruct *pUVar2;
  FQueryDescription *pFVar3;
  undefined1 auStack_2648 [32];
  FQueryDescription local_2628;
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce62b0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2648;
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  pUVar2 = FTestColumnA::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadOnly(pSVar1,pUVar2);
  pFVar3 = UE::Editor::DataStorage::Queries::Select::Compile(pSVar1);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,pFVar3);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  pUVar2 = FTestColumnB::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadOnly(pSVar1,pUVar2);
  pFVar3 = UE::Editor::DataStorage::Queries::Select::Compile(pSVar1);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar3);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_cc8,&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  return;
}

// operator() @ 142ce63a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  bool bVar1;
  Select *pSVar2;
  FSimpleQuery FVar3;
  UScriptStruct *pUVar4;
  FQueryDescription *pFVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_2678 [32];
  FString local_2658;
  FString local_2648;
  FText local_2638;
  FQueryDescription local_2628;
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x142ce63c2;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar2 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar2);
  pUVar4 = FTestColumnA::StaticStruct();
  UE::Editor::DataStorage::Queries::FSimpleQuery::All((FSimpleQuery *)FVar3.Query,pUVar4);
  pFVar5 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,pFVar5);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  pSVar2 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar2);
  pUVar4 = FTestColumnA::StaticStruct();
  UE::Editor::DataStorage::Queries::FSimpleQuery::None((FSimpleQuery *)FVar3.Query,pUVar4);
  pFVar5 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar5);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_2648,
                     L"Conflicting conditions .All<FTestColumnA>() and .None<FTestColumnA>()");
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_2628,&local_cc8);
  FText::FText(&local_2638);
  bVar1 = UE::Editor::DataStorage::Queries::MergeQueries(&local_2628,&local_1978,&local_2638);
  ::FString::PrintfImpl(&local_2658,L"Expected merge to fail because of %s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_2658.Data.ArrayNum != 0) {
    FVar6.Data = local_2658.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this_00,(wchar_t *)FVar6.Data,bVar1);
  if (local_2658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2658.Data.AllocatorInstance.Data);
  }
  if (local_2638.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2638.TextData.Reference + 0x10))();
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  if (local_2648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2648.Data.AllocatorInstance.Data);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  return;
}

// operator() @ 142ce6580

void __thiscall
``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Where()");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Select()");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"FConditions");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Combination");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ce6700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  Select *pSVar1;
  FWeakObjectPtr FVar2;
  FQueryConditionQuery FVar3;
  FQueryDescription *pFVar4;
  undefined1 auStack_2948 [32];
  FWeakObjectPtr local_2928 [2];
  FColumnBase local_2918;
  FColumnBase local_2908;
  undefined1 local_28f8 [272];
  void *local_27e8;
  void *local_27b8;
  void *local_2768;
  void *local_2658;
  FQueryDescription local_2638;
  FQueryDescription local_1988;
  FQueryDescription local_cd8;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x142ce6720;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2948;
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2638);
  local_2918.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestTagColumnA::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2918.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2918.TypeInfo.WeakPtr);
  }
  local_2928[0].ObjectIndex = 0;
  local_2928[0].ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2918.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2918.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(local_2928,(FObjectPtr)&local_2918);
  local_2908.TypeInfo.WeakPtr = local_2928[0];
  local_2908.Identifier.ComparisonIndex.Value = 0;
  local_2908.Identifier.Number = 0;
  FVar2 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  local_2928[0].ObjectIndex = 0;
  local_2928[0].ObjectSerialNumber = 0;
  local_2918.TypeInfo.WeakPtr = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(local_2928,(FObjectPtr)&local_2918);
  local_2918.TypeInfo.WeakPtr = local_2928[0];
  local_2918.Identifier.ComparisonIndex.Value = 0;
  local_2918.Identifier.Number = 0;
  UE::Editor::DataStorage::Queries::operator&&
            ((FConditions *)(local_28f8 + 0x10),&local_2918,&local_2908);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar1,(FConditions *)local_28f8);
  pFVar4 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cd8,pFVar4);
  if (local_2658 != (void *)0x0) {
    FMemory::Free(local_2658);
  }
  if (local_2768 != (void *)0x0) {
    FMemory::Free(local_2768);
  }
  if (local_27b8 != (void *)0x0) {
    FMemory::Free(local_27b8);
  }
  if (local_27e8 != (void *)0x0) {
    FMemory::Free(local_27e8);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2638);
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2638);
  FVar2 = (FWeakObjectPtr)FTestTagColumnB::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  local_2928[0].ObjectIndex = 0;
  local_2928[0].ObjectSerialNumber = 0;
  local_2918.TypeInfo.WeakPtr = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(local_2928,(FObjectPtr)&local_2918);
  local_2908.TypeInfo.WeakPtr = local_2928[0];
  local_2908.Identifier.ComparisonIndex.Value = 0;
  local_2908.Identifier.Number = 0;
  FVar2 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  local_2928[0].ObjectIndex = 0;
  local_2928[0].ObjectSerialNumber = 0;
  local_2918.TypeInfo.WeakPtr = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(local_2928,(FObjectPtr)&local_2918);
  local_2918.TypeInfo.WeakPtr = local_2928[0];
  local_2918.Identifier.ComparisonIndex.Value = 0;
  local_2918.Identifier.Number = 0;
  UE::Editor::DataStorage::Queries::operator&&
            ((FConditions *)(local_28f8 + 0x10),&local_2918,&local_2908);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar1,(FConditions *)local_28f8);
  pFVar4 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1988,pFVar4);
  if (local_2658 != (void *)0x0) {
    FMemory::Free(local_2658);
  }
  if (local_2768 != (void *)0x0) {
    FMemory::Free(local_2768);
  }
  if (local_27b8 != (void *)0x0) {
    FMemory::Free(local_27b8);
  }
  if (local_27e8 != (void *)0x0) {
    FMemory::Free(local_27e8);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2638);
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_cd8,&local_1988);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1988);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cd8);
  return;
}

// operator() @ 142ce6a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  Select *pSVar2;
  UScriptStruct *pUVar3;
  FSimpleQuery FVar4;
  FQueryDescription *pFVar5;
  undefined1 auStack_2678 [32];
  undefined1 local_2658 [24];
  undefined1 local_2640 [3272];
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x142ce6ab2;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar2 = UE::Editor::DataStorage::Queries::Select::Select((Select *)(local_2640 + 0x18));
  pUVar3 = FTestColumnA::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadOnly(pSVar2,pUVar3);
  FVar4 = UE::Editor::DataStorage::Queries::Select::Where(pSVar2);
  local_2640._0_8_ = FTestColumnB::StaticStruct();
  local_2640._8_8_ = FTestTagColumnA::StaticStruct();
  local_2658._8_4_ = 2;
  local_2658._0_8_ = local_2640;
  UE::Editor::DataStorage::Queries::FSimpleQuery::All
            ((FSimpleQuery *)FVar4.Query,(TArrayView<UScriptStruct_const_*_const,int> *)local_2658);
  pFVar5 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar4.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,pFVar5);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription
            ((FQueryDescription *)(local_2640 + 0x18));
  pSVar2 = UE::Editor::DataStorage::Queries::Select::Select((Select *)(local_2640 + 0x18));
  lVar1 = *(longlong *)this;
  local_2658._0_8_ = FTestColumnDynamic::StaticStruct();
  local_2658._8_8_ = *(FName *)(lVar1 + 0x1d0);
  UE::Editor::DataStorage::Queries::Select::ReadWrite
            (pSVar2,(FDynamicColumnDescription *)local_2658);
  FVar4 = UE::Editor::DataStorage::Queries::Select::Where(pSVar2);
  local_2640._0_8_ = FTestColumnB::StaticStruct();
  local_2640._8_8_ = FTestColumnC::StaticStruct();
  local_2640._16_8_ = FTestColumnD::StaticStruct();
  local_2658._8_4_ = 3;
  local_2658._0_8_ = local_2640;
  UE::Editor::DataStorage::Queries::FSimpleQuery::Any
            ((FSimpleQuery *)FVar4.Query,(TArrayView<UScriptStruct_const_*_const,int> *)local_2658);
  pFVar5 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar4.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar5);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription
            ((FQueryDescription *)(local_2640 + 0x18));
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_cc8,&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  return;
}

// operator() @ 142ce6c60

void __thiscall
`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>::operator()
          (void *this,IDirectQueryContext *param_1,ulong64 *param_2)

{
  longlong lVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  pFVar3 = *(ForAnyElementType **)this;
  iVar2 = *(int *)&pFVar3[1].Data;
  iVar6 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (param_2 == (ulong64 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x793,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,pFVar3,(int *)(pFVar3 + 1),(int *)((longlong)&pFVar3[1].Data + 4));
  lVar1 = (longlong)iVar2 * 8;
  memmove(pFVar3->Data + lVar1 + (longlong)iVar6 * 8,pFVar3->Data + lVar1,
          (longlong)(iVar7 - iVar2) << 3);
  if (iVar6 != 0) {
    memcpy(pFVar3->Data + lVar1,param_2,(longlong)iVar6 * 8);
  }
  return;
}

// operator() @ 142ce77c0

void __thiscall
``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'
::__l5::<lambda_1>::operator()
          (void *this,ISubqueryContext *param_1,ulong64 param_2,
          FTEDSProcessorTestsReferenceColumn *param_3)

{
  if (param_3->Reference == *(ulong64 *)this) {
    UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
    AddColumns<FTEDSProcessorTests_Linked>
              ((ICommonQueryWithEnvironmentContext *)param_1,*(ulong64 *)this);
    UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
    AddColumns<FTEDSProcessorTests_Linked>((ICommonQueryWithEnvironmentContext *)param_1,param_2);
  }
  return;
}

// operator() @ 142ce79c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  FAutomationTestBase *this_00;
  bool bVar2;
  Select *pSVar3;
  FSimpleQuery FVar4;
  FSimpleQuery *pFVar5;
  FQueryDescription *pFVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_2678 [32];
  FDynamicColumnDescription local_2658;
  FString local_2648;
  FText local_2638;
  FQueryDescription local_2628;
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x142ce79e2;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar3 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  FVar4 = UE::Editor::DataStorage::Queries::Select::Where(pSVar3);
  lVar1 = *(longlong *)this;
  local_2658.TemplateType = FTestColumnDynamic::StaticStruct();
  local_2658.Identifier = *(FName *)(lVar1 + 0x1d0);
  pFVar5 = UE::Editor::DataStorage::Queries::FSimpleQuery::All
                     ((FSimpleQuery *)FVar4.Query,&local_2658);
  pFVar6 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(pFVar5);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,pFVar6);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  pSVar3 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  FVar4 = UE::Editor::DataStorage::Queries::Select::Where(pSVar3);
  lVar1 = *(longlong *)this;
  local_2658.TemplateType = FTestColumnDynamic::StaticStruct();
  local_2658.Identifier = *(FName *)(lVar1 + 0x1d0);
  pFVar5 = UE::Editor::DataStorage::Queries::FSimpleQuery::None
                     ((FSimpleQuery *)FVar4.Query,&local_2658);
  pFVar6 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(pFVar5);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar6);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString((FString *)&local_2658,
                     L"Conflicting conditions .All<FTestColumnDynamic>(Identifier1) and .None<FTestColumnDynamic>(Identifier1)"
                    );
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_2628,&local_cc8);
  FText::FText(&local_2638);
  bVar2 = UE::Editor::DataStorage::Queries::MergeQueries(&local_2628,&local_1978,&local_2638);
  ::FString::PrintfImpl(&local_2648,L"Expected merge to fail because of %s");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_2648.Data.ArrayNum != 0) {
    FVar7.Data = local_2648.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this_00,(wchar_t *)FVar7.Data,bVar2);
  if (local_2648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2648.Data.AllocatorInstance.Data);
  }
  if (local_2638.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2638.TextData.Reference + 0x10))();
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  if (local_2658.TemplateType != (UScriptStruct *)0x0) {
    FMemory::Free(local_2658.TemplateType);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  return;
}

// operator() @ 142ce7bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()
          (void *this)

{
  Select *pSVar1;
  UScriptStruct *pUVar2;
  FQueryDescription *pFVar3;
  undefined1 auStack_2648 [32];
  FQueryDescription local_2628;
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce7be0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2648;
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  pUVar2 = FTestColumnA::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadOnly(pSVar1,pUVar2);
  pUVar2 = FTestColumnB::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadWrite(pSVar1,pUVar2);
  pFVar3 = UE::Editor::DataStorage::Queries::Select::Compile(pSVar1);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,pFVar3);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  pUVar2 = FTestColumnB::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadOnly(pSVar1,pUVar2);
  pUVar2 = FTestColumnD::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadWrite(pSVar1,pUVar2);
  pFVar3 = UE::Editor::DataStorage::Queries::Select::Compile(pSVar1);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar3);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_cc8,&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  return;
}

// operator() @ 142ce7cf0

void __thiscall
``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_78;
  FSourceLocation local_68;
  code *local_48 [2];
  undefined **local_38;
  FAutomationSpecBase *local_30;
  undefined8 local_20;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = 0;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Where()");
  local_68.Impl._Line = 0x151;
  local_68.Impl._Column = 5;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_48,&local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Where()::Dynamic");
  local_68.Impl._Line = 0x162;
  local_68.Impl._Column = 5;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_48,&local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Select()+Where()");
  local_68.Impl._Line = 0x174;
  local_68.Impl._Column = 5;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_48,&local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Select()+Where()::Dynamic");
  local_68.Impl._Line = 0x187;
  local_68.Impl._Column = 5;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_48,&local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ce7f20

void __thiscall
```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_68;
  FSourceLocation local_58;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,L"Simple");
  local_58.Impl._Line = 199;
  local_58.Impl._Column = 6;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_38,&local_58)
  ;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,L"Complex");
  local_58.Impl._Line = 0xd6;
  local_58.Impl._Column = 6;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_38,&local_58)
  ;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ce8070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()
          (void *this)

{
  Select *pSVar1;
  FSimpleQuery FVar2;
  UScriptStruct *pUVar3;
  FQueryDescription *pFVar4;
  undefined1 auStack_3338 [32];
  TArrayView<UScriptStruct_const_*_const,int> local_3318;
  UScriptStruct *local_3300;
  UScriptStruct *local_32f8;
  FText local_32f0;
  FQueryDescription local_32d8;
  FQueryDescription local_2628;
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce8080;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3338;
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  FVar2 = UE::Editor::DataStorage::Queries::Select::Where(pSVar1);
  local_3300 = FTestColumnB::StaticStruct();
  local_32f8 = FTestColumnD::StaticStruct();
  local_3318.ArrayNum = 2;
  local_3318.DataPtr = &local_3300;
  UE::Editor::DataStorage::Queries::FSimpleQuery::Any((FSimpleQuery *)FVar2.Query,&local_3318);
  pUVar3 = FTestColumnC::StaticStruct();
  UE::Editor::DataStorage::Queries::FSimpleQuery::None((FSimpleQuery *)FVar2.Query,pUVar3);
  pFVar4 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar2.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_32d8,pFVar4);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  FVar2 = UE::Editor::DataStorage::Queries::Select::Where(pSVar1);
  pUVar3 = FTestColumnB::StaticStruct();
  UE::Editor::DataStorage::Queries::FSimpleQuery::All((FSimpleQuery *)FVar2.Query,pUVar3);
  pUVar3 = FTestTagColumnC::StaticStruct();
  UE::Editor::DataStorage::Queries::FSimpleQuery::None((FSimpleQuery *)FVar2.Query,pUVar3);
  pFVar4 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar2.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar4);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,&local_32d8);
  FText::FText(&local_32f0);
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_32d8,&local_1978);
  if (local_32f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_32f0.TextData.Reference + 0x10))();
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_32d8);
  return;
}

// operator() @ 142ce8220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()
          (void *this)

{
  Select *pSVar1;
  FWeakObjectPtr FVar2;
  FQueryConditionQuery FVar3;
  FQueryDescription *pFVar4;
  undefined1 auStack_2948 [32];
  FWeakObjectPtr local_2928 [2];
  FColumnBase local_2918;
  FColumnBase local_2908;
  undefined1 local_28f8 [272];
  void *local_27e8;
  void *local_27b8;
  void *local_2768;
  void *local_2658;
  FQueryDescription local_2638;
  FQueryDescription local_1988;
  FQueryDescription local_cd8;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x142ce8240;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2948;
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2638);
  local_2918.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestTagColumnA::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2918.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2918.TypeInfo.WeakPtr);
  }
  local_2928[0].ObjectIndex = 0;
  local_2928[0].ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2918.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2918.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(local_2928,(FObjectPtr)&local_2918);
  local_2908.TypeInfo.WeakPtr = local_2928[0];
  local_2908.Identifier.ComparisonIndex.Value = 0;
  local_2908.Identifier.Number = 0;
  FVar2 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  local_2928[0].ObjectIndex = 0;
  local_2928[0].ObjectSerialNumber = 0;
  local_2918.TypeInfo.WeakPtr = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(local_2928,(FObjectPtr)&local_2918);
  local_2918.TypeInfo.WeakPtr = local_2928[0];
  local_2918.Identifier.ComparisonIndex.Value = 0;
  local_2918.Identifier.Number = 0;
  UE::Editor::DataStorage::Queries::operator&&
            ((FConditions *)(local_28f8 + 0x10),&local_2918,&local_2908);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar1,(FConditions *)local_28f8);
  pFVar4 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cd8,pFVar4);
  if (local_2658 != (void *)0x0) {
    FMemory::Free(local_2658);
  }
  if (local_2768 != (void *)0x0) {
    FMemory::Free(local_2768);
  }
  if (local_27b8 != (void *)0x0) {
    FMemory::Free(local_27b8);
  }
  if (local_27e8 != (void *)0x0) {
    FMemory::Free(local_27e8);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2638);
  pSVar1 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2638);
  FVar2 = (FWeakObjectPtr)FTestTagColumnB::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  local_2928[0].ObjectIndex = 0;
  local_2928[0].ObjectSerialNumber = 0;
  local_2918.TypeInfo.WeakPtr = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(local_2928,(FObjectPtr)&local_2918);
  local_2908.TypeInfo.WeakPtr = local_2928[0];
  local_2908.Identifier.ComparisonIndex.Value = 0;
  local_2908.Identifier.Number = 0;
  FVar2 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  local_2928[0].ObjectIndex = 0;
  local_2928[0].ObjectSerialNumber = 0;
  local_2918.TypeInfo.WeakPtr = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(local_2928,(FObjectPtr)&local_2918);
  local_2918.TypeInfo.WeakPtr = local_2928[0];
  local_2918.Identifier.ComparisonIndex.Value = 0;
  local_2918.Identifier.Number = 0;
  UE::Editor::DataStorage::Queries::operator&&
            ((FConditions *)(local_28f8 + 0x10),&local_2918,&local_2908);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar1,(FConditions *)local_28f8);
  pFVar4 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1988,pFVar4);
  if (local_2658 != (void *)0x0) {
    FMemory::Free(local_2658);
  }
  if (local_2768 != (void *)0x0) {
    FMemory::Free(local_2768);
  }
  if (local_27b8 != (void *)0x0) {
    FMemory::Free(local_27b8);
  }
  if (local_27e8 != (void *)0x0) {
    FMemory::Free(local_27e8);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2638);
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_cd8,&local_1988);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1988);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cd8);
  return;
}

// operator() @ 142ce85b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()
          (void *this)

{
  longlong lVar1;
  FName FVar2;
  Select *pSVar3;
  UScriptStruct *pUVar4;
  FWeakObjectPtr FVar5;
  FQueryConditionQuery FVar6;
  FQueryDescription *pFVar7;
  undefined1 auStack_2958 [32];
  FWeakObjectPtr local_2938 [2];
  FColumnBase local_2928;
  undefined1 local_2918 [16];
  undefined1 local_2908 [16];
  FConditions local_28f8;
  FQueryDescription local_2648;
  FQueryDescription local_1998;
  FQueryDescription local_ce8;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142ce85d4;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2958;
  pSVar3 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2648);
  pUVar4 = FTestColumnA::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadOnly(pSVar3,pUVar4);
  local_2928.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestColumnC::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2928.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2928.TypeInfo.WeakPtr);
  }
  local_2938[0].ObjectIndex = 0;
  local_2938[0].ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2928.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2928.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(local_2938,(FObjectPtr)&local_2928);
  local_2908._0_4_ = local_2938[0].ObjectIndex;
  local_2908._4_4_ = local_2938[0].ObjectSerialNumber;
  local_2908._8_4_ = 0;
  local_2908._12_4_ = 0;
  FVar5 = (FWeakObjectPtr)FTestTagColumnB::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_2938[0].ObjectIndex = 0;
  local_2938[0].ObjectSerialNumber = 0;
  local_2928.TypeInfo.WeakPtr = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(local_2938,(FObjectPtr)&local_2928);
  local_2928.TypeInfo.WeakPtr = local_2938[0];
  local_2928.Identifier.ComparisonIndex.Value = 0;
  local_2928.Identifier.Number = 0;
  UE::Editor::DataStorage::Queries::operator||(&local_28f8,&local_2928,(FColumnBase *)local_2908);
  FVar6 = UE::Editor::DataStorage::Queries::Select::Where(pSVar3,(FConditions *)local_2918);
  pFVar7 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar6.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_ce8,pFVar7);
  if (local_28f8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_28f8.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (local_28f8.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)local_28f8.Tokens.AllocatorInstance.SecondaryData);
  }
  if (local_28f8.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)local_28f8.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (local_28f8.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_28f8.Columns.AllocatorInstance.SecondaryData);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2648);
  pSVar3 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2648);
  lVar1 = *(longlong *)this;
  local_2918._0_8_ = FTestColumnDynamic::StaticStruct();
  local_2918._8_8_ = *(FName *)(lVar1 + 0x1d0);
  UE::Editor::DataStorage::Queries::Select::ReadWrite
            (pSVar3,(FDynamicColumnDescription *)local_2918);
  lVar1 = *(longlong *)this;
  FVar5 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_2938[0].ObjectIndex = 0;
  local_2938[0].ObjectSerialNumber = 0;
  local_2928.TypeInfo.WeakPtr = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(local_2938,(FObjectPtr)&local_2928);
  FVar2 = *(FName *)(lVar1 + 0x1e0);
  lVar1 = *(longlong *)this;
  FVar5 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_2928.TypeInfo.WeakPtr.ObjectIndex = 0;
  local_2928.TypeInfo.WeakPtr.ObjectSerialNumber = 0;
  local_2918._0_8_ = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2928,(FObjectPtr)local_2918);
  local_2918._0_4_ = local_2938[0].ObjectIndex;
  local_2918._4_4_ = local_2938[0].ObjectSerialNumber;
  local_2928.Identifier = *(FName *)(lVar1 + 0x1d8);
  local_2918._8_8_ = FVar2;
  UE::Editor::DataStorage::Queries::operator||(&local_28f8,&local_2928,(FColumnBase *)local_2918);
  FVar6 = UE::Editor::DataStorage::Queries::Select::Where(pSVar3,(FConditions *)local_2908);
  pFVar7 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar6.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1998,pFVar7);
  if (local_28f8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_28f8.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (local_28f8.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)local_28f8.Tokens.AllocatorInstance.SecondaryData);
  }
  if (local_28f8.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)local_28f8.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (local_28f8.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_28f8.Columns.AllocatorInstance.SecondaryData);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2648);
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_ce8,&local_1998);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1998);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_ce8);
  return;
}

// operator() @ 142ce9180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()
          (void *this)

{
  longlong lVar1;
  Select *pSVar2;
  FQueryConditionQuery FVar3;
  FQueryDescription *pFVar4;
  FWeakObjectPtr FVar5;
  undefined1 auStack_2938 [32];
  FWeakObjectPtr local_2918 [2];
  FColumnBase local_2908;
  undefined1 local_28f8 [272];
  void *local_27e8;
  void *local_27b8;
  void *local_2768;
  void *local_2658;
  FQueryDescription local_2638;
  FQueryDescription local_1988;
  FQueryDescription local_cd8;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x142ce91a6;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2938;
  pSVar2 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2638);
  lVar1 = *(longlong *)this;
  local_2908.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2908.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2908.TypeInfo.WeakPtr);
  }
  local_2918[0].ObjectIndex = 0;
  local_2918[0].ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2908.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2908.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(local_2918,(FObjectPtr)&local_2908);
  local_2908.TypeInfo.WeakPtr = local_2918[0];
  local_2908.Identifier = *(FName *)(lVar1 + 0x1d0);
  UE::Editor::DataStorage::Queries::FConditions::FConditions
            ((FConditions *)(local_28f8 + 0x10),&local_2908);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar2,(FConditions *)local_28f8);
  pFVar4 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cd8,pFVar4);
  if (local_2658 != (void *)0x0) {
    FMemory::Free(local_2658);
  }
  if (local_2768 != (void *)0x0) {
    FMemory::Free(local_2768);
  }
  if (local_27b8 != (void *)0x0) {
    FMemory::Free(local_27b8);
  }
  if (local_27e8 != (void *)0x0) {
    FMemory::Free(local_27e8);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2638);
  pSVar2 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2638);
  lVar1 = *(longlong *)this;
  FVar5 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_2918[0].ObjectIndex = 0;
  local_2918[0].ObjectSerialNumber = 0;
  local_2908.TypeInfo.WeakPtr = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(local_2918,(FObjectPtr)&local_2908);
  local_2908.TypeInfo.WeakPtr = local_2918[0];
  local_2908.Identifier = *(FName *)(lVar1 + 0x1d8);
  UE::Editor::DataStorage::Queries::FConditions::FConditions
            ((FConditions *)(local_28f8 + 0x10),&local_2908);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar2,(FConditions *)local_28f8);
  pFVar4 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1988,pFVar4);
  if (local_2658 != (void *)0x0) {
    FMemory::Free(local_2658);
  }
  if (local_2768 != (void *)0x0) {
    FMemory::Free(local_2768);
  }
  if (local_27b8 != (void *)0x0) {
    FMemory::Free(local_27b8);
  }
  if (local_27e8 != (void *)0x0) {
    FMemory::Free(local_27e8);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2638);
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_cd8,&local_1988);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1988);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cd8);
  return;
}

// operator() @ 142ce9420

void __thiscall
```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_78;
  FSourceLocation local_68;
  code *local_48 [2];
  undefined **local_38;
  FAutomationSpecBase *local_30;
  undefined8 local_20;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = 0;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Simple");
  local_68.Impl._Line = 0xea;
  local_68.Impl._Column = 6;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_3>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_48,&local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Complex");
  local_68.Impl._Line = 0xf9;
  local_68.Impl._Column = 6;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_3>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_48,&local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Simple::Dynamic");
  local_68.Impl._Line = 0x108;
  local_68.Impl._Column = 6;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_3>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_48,&local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Complex::Dynamic");
  local_68.Impl._Line = 0x117;
  local_68.Impl._Column = 6;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_3>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_48,&local_68)
  ;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ce9650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  bool bVar1;
  Select *pSVar2;
  FSimpleQuery FVar3;
  FQueryDescription *pFVar4;
  UScriptStruct *pUVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_2678 [32];
  TArrayView<UScriptStruct_const_*_const,int> local_2658;
  undefined1 local_2648 [16];
  FString local_2638;
  FQueryDescription local_2628;
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x142ce9672;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar2 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  local_2648._0_8_ = FTestColumnA::StaticStruct();
  local_2648._8_8_ = FTestColumnB::StaticStruct();
  local_2658.ArrayNum = 2;
  local_2658.DataPtr = (UScriptStruct **)local_2648;
  UE::Editor::DataStorage::Queries::Select::ReadWrite(pSVar2,&local_2658);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar2);
  pFVar4 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,pFVar4);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  pSVar2 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  pUVar5 = FTestColumnC::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadOnly(pSVar2,pUVar5);
  FVar3 = UE::Editor::DataStorage::Queries::Select::Where(pSVar2);
  pUVar5 = FTestColumnB::StaticStruct();
  UE::Editor::DataStorage::Queries::FSimpleQuery::None((FSimpleQuery *)FVar3.Query,pUVar5);
  pUVar5 = FTestColumnA::StaticStruct();
  UE::Editor::DataStorage::Queries::FSimpleQuery::All((FSimpleQuery *)FVar3.Query,pUVar5);
  pFVar4 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar3.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar4);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString((FString *)local_2648,
                     L"Conflicting conditions .ReadWrite<FTestColumnB>() and .None<FTestColumnB>()")
  ;
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_2628,&local_cc8);
  FText::FText((FText *)&local_2658);
  bVar1 = UE::Editor::DataStorage::Queries::MergeQueries
                    (&local_2628,&local_1978,(FText *)&local_2658);
  ::FString::PrintfImpl(&local_2638,L"Expected merge to fail because of %s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_2638.Data.ArrayNum != 0) {
    FVar6.Data = local_2638.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this_00,(wchar_t *)FVar6.Data,bVar1);
  if (local_2638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2638.Data.AllocatorInstance.Data);
  }
  if (local_2658.DataPtr != (UScriptStruct **)0x0) {
    (*(code *)(*local_2658.DataPtr)->_padding_)();
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  if ((UScriptStruct *)local_2648._0_8_ != (UScriptStruct *)0x0) {
    FMemory::Free((void *)local_2648._0_8_);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  return;
}

// operator() @ 142ce9f30

void __thiscall
```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_68;
  FSourceLocation local_58;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,L"Select()+Where()");
  local_58.Impl._Line = 0x129;
  local_58.Impl._Column = 6;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_4>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_38,&local_58)
  ;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,L"Select()+FConditions");
  local_58.Impl._Line = 0x13c;
  local_58.Impl._Column = 6;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_4>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&local_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)local_38,&local_58)
  ;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142cea080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()(void *this)

{
  longlong lVar1;
  FAutomationTestBase *this_00;
  bool bVar2;
  Select *pSVar3;
  FSimpleQuery FVar4;
  FQueryDescription *pFVar5;
  UScriptStruct *pUVar6;
  FSimpleQuery *pFVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_2678 [32];
  FDynamicColumnDescription local_2658;
  FString local_2648;
  FDynamicColumnDescription local_2638;
  FQueryDescription local_2628;
  FQueryDescription local_1978;
  FQueryDescription local_cc8;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x142cea0a2;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar3 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  lVar1 = *(longlong *)this;
  local_2658.TemplateType = FTestColumnDynamic::StaticStruct();
  local_2658.Identifier = *(FName *)(lVar1 + 0x1d8);
  UE::Editor::DataStorage::Queries::Select::ReadWrite(pSVar3,&local_2658);
  FVar4 = UE::Editor::DataStorage::Queries::Select::Where(pSVar3);
  pFVar5 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar4.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_cc8,pFVar5);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  pSVar3 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2628);
  pUVar6 = FTestColumnC::StaticStruct();
  UE::Editor::DataStorage::Queries::Select::ReadOnly(pSVar3,pUVar6);
  FVar4 = UE::Editor::DataStorage::Queries::Select::Where(pSVar3);
  lVar1 = *(longlong *)this;
  local_2658.TemplateType = FTestColumnDynamic::StaticStruct();
  local_2658.Identifier = *(FName *)(lVar1 + 0x1d8);
  pFVar7 = UE::Editor::DataStorage::Queries::FSimpleQuery::None
                     ((FSimpleQuery *)FVar4.Query,&local_2658);
  lVar1 = *(longlong *)this;
  local_2638.TemplateType = FTestColumnDynamic::StaticStruct();
  local_2638.Identifier = *(FName *)(lVar1 + 0x1d0);
  pFVar7 = UE::Editor::DataStorage::Queries::FSimpleQuery::All(pFVar7,&local_2638);
  pFVar5 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(pFVar7);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1978,pFVar5);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString((FString *)&local_2658,
                     L"Conflicting conditions .ReadWrite<FTestColumnB>() and .None<FTestColumnB>()")
  ;
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_2628,&local_cc8);
  FText::FText((FText *)&local_2638);
  bVar2 = UE::Editor::DataStorage::Queries::MergeQueries
                    (&local_2628,&local_1978,(FText *)&local_2638);
  ::FString::PrintfImpl(&local_2648,L"Expected merge to fail because of %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_2648.Data.ArrayNum != 0) {
    FVar8.Data = local_2648.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this_00,(wchar_t *)FVar8.Data,bVar2);
  if (local_2648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2648.Data.AllocatorInstance.Data);
  }
  if (local_2638.TemplateType != (UScriptStruct *)0x0) {
    (**(code **)((local_2638.TemplateType)->_padding_ + 0x10))();
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2628);
  if (local_2658.TemplateType != (UScriptStruct *)0x0) {
    FMemory::Free(local_2658.TemplateType);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1978);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_cc8);
  return;
}

// operator() @ 142cea2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>::operator()
          (void *this)

{
  longlong lVar1;
  FName FVar2;
  Select *pSVar3;
  FQueryConditionQuery FVar4;
  FQueryDescription *pFVar5;
  FWeakObjectPtr FVar6;
  undefined1 auStack_2958 [32];
  FWeakObjectPtr local_2938 [2];
  FColumnBase local_2928;
  FColumnBase local_2918;
  undefined1 local_2908 [272];
  void *local_27f8;
  void *local_27c8;
  void *local_2778;
  void *local_2668;
  FQueryDescription local_2648;
  FQueryDescription local_1998;
  FQueryDescription local_ce8;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142cea2e4;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2958;
  pSVar3 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2648);
  lVar1 = *(longlong *)this;
  local_2938[0] = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2938[0] != (FWeakObjectPtr)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_2938[0]);
  }
  local_2918.TypeInfo.WeakPtr.ObjectIndex = 0;
  local_2918.TypeInfo.WeakPtr.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2938[0] != (FWeakObjectPtr)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_2938[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2918,(FObjectPtr)local_2938);
  FVar2 = *(FName *)(lVar1 + 0x1d8);
  local_2928.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2928.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2928.TypeInfo.WeakPtr);
  }
  local_2938[0].ObjectIndex = 0;
  local_2938[0].ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2928.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2928.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(local_2938,(FObjectPtr)&local_2928);
  local_2928.TypeInfo.WeakPtr = local_2938[0];
  local_2928.Identifier.ComparisonIndex.Value = 0;
  local_2928.Identifier.Number = 0;
  local_2918.Identifier = FVar2;
  UE::Editor::DataStorage::Queries::operator||
            ((FConditions *)(local_2908 + 0x10),&local_2928,&local_2918);
  FVar4 = UE::Editor::DataStorage::Queries::Select::Where(pSVar3,(FConditions *)local_2908);
  pFVar5 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar4.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_ce8,pFVar5);
  if (local_2668 != (void *)0x0) {
    FMemory::Free(local_2668);
  }
  if (local_2778 != (void *)0x0) {
    FMemory::Free(local_2778);
  }
  if (local_27c8 != (void *)0x0) {
    FMemory::Free(local_27c8);
  }
  if (local_27f8 != (void *)0x0) {
    FMemory::Free(local_27f8);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2648);
  pSVar3 = UE::Editor::DataStorage::Queries::Select::Select((Select *)&local_2648);
  lVar1 = *(longlong *)this;
  FVar6 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar6);
  }
  local_2918.TypeInfo.WeakPtr.ObjectIndex = 0;
  local_2918.TypeInfo.WeakPtr.ObjectSerialNumber = 0;
  local_2928.TypeInfo.WeakPtr = FVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar6);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2918,(FObjectPtr)&local_2928);
  FVar2 = *(FName *)(lVar1 + 0x1d8);
  lVar1 = *(longlong *)this;
  FVar6 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar6);
  }
  local_2938[0].ObjectIndex = 0;
  local_2938[0].ObjectSerialNumber = 0;
  local_2928.TypeInfo.WeakPtr = FVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar6);
  }
  FWeakObjectPtr::operator=(local_2938,(FObjectPtr)&local_2928);
  local_2928.TypeInfo.WeakPtr = local_2918.TypeInfo.WeakPtr;
  local_2918.TypeInfo.WeakPtr = local_2938[0];
  local_2918.Identifier = *(FName *)(lVar1 + 0x1d0);
  local_2928.Identifier = FVar2;
  UE::Editor::DataStorage::Queries::operator&&
            ((FConditions *)(local_2908 + 0x10),&local_2918,&local_2928);
  FVar4 = UE::Editor::DataStorage::Queries::Select::Where(pSVar3,(FConditions *)local_2908);
  pFVar5 = UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar4.Query);
  UE::Editor::DataStorage::FQueryDescription::FQueryDescription(&local_1998,pFVar5);
  if (local_2668 != (void *)0x0) {
    FMemory::Free(local_2668);
  }
  if (local_2778 != (void *)0x0) {
    FMemory::Free(local_2778);
  }
  if (local_27c8 != (void *)0x0) {
    FMemory::Free(local_27c8);
  }
  if (local_27f8 != (void *)0x0) {
    FMemory::Free(local_27f8);
  }
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_2648);
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)this,&local_ce8,&local_1998);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_1998);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(&local_ce8);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142cea92c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<struct
   UE::Editor::DataStorage::Queries::ISingleRowInfo,struct
   UE::Editor::DataStorage::Queries::IRowBatchInfo>::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Editor::DataStorage::Queries::Private::
IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
::_vector_deleting_destructor__adjustor_8__
          (IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
                       *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142cea93c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Editor::DataStorage::Queries::Private::IPreContextContractCombiner<int,struct
   UE::Editor::DataStorage::Queries::ISingleRowInfo,struct
   UE::Editor::DataStorage::Queries::IRowBatchInfo>::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Editor::DataStorage::Queries::Private::
IPreContextContractCombiner<int,UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
::_vector_deleting_destructor__adjustor_8__
          (IPreContextContractCombiner<int,UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((IPreContextContractCombiner<int,UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
                       *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142cea94c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Editor::DataStorage::Queries::TQueryContextImpl<struct
   UE::Editor::DataStorage::Queries::FQueryContextMock>::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::
_vector_deleting_destructor__adjustor_8__
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this,uint param_1
          )

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *)
                      &this[-1].Implementation.RowBatchInfo_CurrentBatchTableHasColumns_Mock.
                       field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142cea95c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Editor::DataStorage::Queries::TQueryContextImpl<struct
   UE::Editor::DataStorage::Queries::FQueryContextMock,struct
   UE::Editor::DataStorage::Queries::ISingleRowInfo<struct
   UE::Editor::DataStorage::Queries::IContextCapability> >::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::_vector_deleting_destructor__adjustor_8__
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
                       *)&this[-1].Implementation.RowBatchInfo_CurrentBatchTableHasColumns_Mock.
                          field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142cea96c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Editor::DataStorage::Queries::FQueryContextMock::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::_vector_deleting_destructor__adjustor_8__
          (FQueryContextMock *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FQueryContextMock *)
                      &this[-1].RowBatchInfo_CurrentBatchTableHasColumns_Mock.field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142cea97c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Editor::DataStorage::Queries::IContextContract::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Editor::DataStorage::Queries::IContextContract::_vector_deleting_destructor__adjustor_8__
          (IContextContract *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((IContextContract *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142cea990

void * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::
_scalar_deleting_destructor_
          (FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cea9e0

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::_scalar_deleting_destructor_
          (FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceaa30

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceaa80

void * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int>::_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceaad0

void * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char>::
_scalar_deleting_destructor_(FMultiValueTestSorter<unsigned_int,unsigned_char> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceab20

void * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short>::
_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceab70

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::
_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceabc0

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>::
_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceac10

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
::_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceac60

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
::_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceacb0

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
::_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cead00

void * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cead50

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceada0

void * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::
_scalar_deleting_destructor_
          (FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceadf0

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<signed_char>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<signed_char> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceae40

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_char>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<unsigned_char> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceae90

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<short>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<short> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceaee0

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_short>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<unsigned_short> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceaf30

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<int>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<int> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceaf80

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned_int>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<unsigned_int> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceafd0

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<float>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<float> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb020

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<double>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<double> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb070

void * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
::_scalar_deleting_destructor_
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>,int>
            ((TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *)
             (this->Values).AllocatorInstance.Data,(this->Values).ArrayNum);
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb0c0

void * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
::_scalar_deleting_destructor_
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb110

void * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
::_scalar_deleting_destructor_
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb160

void * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::_scalar_deleting_destructor_
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb1b0

void * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
::_scalar_deleting_destructor_
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb200

void * __thiscall
UE::Editor::DataStorage::Tests::
FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::_scalar_deleting_destructor_
          (FSingleValueTestSorter<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb250

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<__int64>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<__int64> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb2a0

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<unsigned___int64>::
_scalar_deleting_destructor_(FSingleValueTestSorter<unsigned___int64> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb2f0

void * __thiscall
UE::Editor::DataStorage::Tests::FSingleValueTestSorter<bool>::_scalar_deleting_destructor_
          (FSingleValueTestSorter<bool> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb340

void * __thiscall
UE::Editor::DataStorage::Queries::Private::
IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
::_scalar_deleting_destructor_
          (IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb370

void * __thiscall
UE::Editor::DataStorage::Queries::Private::
IContextContractCombinerImpl<UE::Editor::DataStorage::Queries::IRowBatchInfo>::
_scalar_deleting_destructor_
          (IContextContractCombinerImpl<UE::Editor::DataStorage::Queries::IRowBatchInfo> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb3a0

void * __thiscall
UE::Editor::DataStorage::Queries::Private::
IContextContractCombinerImpl<UE::Editor::DataStorage::Queries::ISingleRowInfo>::
_scalar_deleting_destructor_
          (IContextContractCombinerImpl<UE::Editor::DataStorage::Queries::ISingleRowInfo> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb3d0

void * __thiscall
UE::Editor::DataStorage::Queries::Private::
IPreContextContractCombiner<int,UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
::_scalar_deleting_destructor_
          (IPreContextContractCombiner<int,UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb400

void * __thiscall
UE::Editor::DataStorage::Queries::
IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::_scalar_deleting_destructor_
          (IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb430

void * __thiscall
UE::Editor::DataStorage::Queries::
ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::_scalar_deleting_destructor_
          (ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb460

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterCommands'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0> *this
          ,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TArrayView___CB_KH__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb4d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AIXZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb510

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_KXZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NV__TArrayView_QEBVUScriptStruct__H___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_18>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_19>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`154'::<lambda_25>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`105'::<lambda_10>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`109'::<lambda_11>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`117'::<lambda_13>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`121'::<lambda_14>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`125'::<lambda_15>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`3'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`158'::<lambda_27>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceb9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`33'::<lambda_4>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceba10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`43'::<lambda_5>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceba50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`53'::<lambda_6>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ceba90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`69'::<lambda_7>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`85'::<lambda_8>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebb10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`101'::<lambda_9>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebb50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`113'::<lambda_12>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`146'::<lambda_23>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`150'::<lambda_24>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebc10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`13'::<lambda_2>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`23'::<lambda_3>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateDirectQueryCallbackBinding_V<lambda_1>__1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_DataStorage_Editor_UE__IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_567__Z__Queries_DataStorage_Editor_UE__YA_AV__TFunction___A6AXAEBUFQueryDescription_DataStorage_Editor_UE__AEAUIDirectQueryContext_234__Z____QEAV1_1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_345_IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_345__Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebcd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebd90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebdd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebe10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebe50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebe90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebf10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebf60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__Update_FAsyncLatentCommand_FAutomationSpecBase__UEAA_NXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebfa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_21>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cebfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_22>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec0e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec3e0

void * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::_scalar_deleting_destructor_
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this,uint param_1
          )

{
  FQueryContextMock::~FQueryContextMock(&this->Implementation);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec420

void * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::_scalar_deleting_destructor_
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this,uint param_1)

{
  FQueryContextMock::~FQueryContextMock(&this->Implementation);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec460

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FAsyncLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FAsyncLatentCommand>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationSpecBase::FAsyncLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FAsyncLatentCommand>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec4a0

void * __thiscall
FAutomationSpecBase::FAsyncLatentCommand::_scalar_deleting_destructor_
          (FAsyncLatentCommand *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FAsyncLatentCommand_FAutomationSpecBase__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActionCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Future).field_0x8);
  if (*(longlong *)&this->Predicate != 0) {
    plVar3 = *(longlong **)&(this->Predicate).field_0x28;
    plVar4 = (longlong *)&(this->Predicate).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec550

void * __thiscall
UE::Editor::DataStorage::FColumnSorterInterface::_scalar_deleting_destructor_
          (FColumnSorterInterface *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec580

void * __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::_scalar_deleting_destructor_
          (FQueryContextMock *this,uint param_1)

{
  ~FQueryContextMock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec5c0

void * __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::_scalar_deleting_destructor_
          (FTestQueryFunctionResponse *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->MutableColumns).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MutableColumns).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MutableColumns);
  *(undefined4 *)&(this->ConstColumns).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstColumns).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstColumns);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec650

void * __thiscall
UE::Editor::DataStorage::Queries::IContextCapability::_scalar_deleting_destructor_
          (IContextCapability *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec680

void * __thiscall
UE::Editor::DataStorage::Queries::IContextContract::_scalar_deleting_destructor_
          (IContextContract *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec6b0

void * __thiscall
UE::Editor::DataStorage::Queries::IQueryFunctionResponse::_scalar_deleting_destructor_
          (IQueryFunctionResponse *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142cec6e0

void * __thiscall
UTest_PingPongBetweenPhaseFactory::_scalar_deleting_destructor_
          (UTest_PingPongBetweenPhaseFactory *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementDataStoragePerformanceTestCommands @ 142cf4de0

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementDataStoragePerformanceTestCommands(void)

{
  return;
}

// Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_NoRegister @ 142d19e90

UClass * __cdecl Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"Test_PingPongBetweenPhaseFactory",
               &Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton,
               UTest_PingPongBetweenPhaseFactory::
               StaticRegisterNativesUTest_PingPongBetweenPhaseFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTest_PingPongBetweenPhaseFactory>,
               InternalVTableHelperCtorCaller<UTest_PingPongBetweenPhaseFactory>,local_res8,
               UEditorDataStorageFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton;
}

// Z_Construct_UScriptStruct_FTest_PingPongDurPhys @ 142d19f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTest_PingPongDurPhys(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.InnerSingleton,
               &Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTest_PingPongPostPhys @ 142d19fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTest_PingPongPostPhys(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.InnerSingleton,
               &Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTest_PingPongPrePhys @ 142d1a050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTest_PingPongPrePhys(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.InnerSingleton,
               &Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `dynamic_atexit_destructor_for_'CVarAddDebugRows'' @ 15035ead0

void __cdecl UE::Editor::DataStorage::_dynamic_atexit_destructor_for__CVarAddDebugRows__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAddDebugRows);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowUnversionedContentInEditor'' @ 15035eaf0

void __cdecl
UE::Editor::DataStorage::Debug::ProcessorTests::
_dynamic_atexit_destructor_for__CVarAllowUnversionedContentInEditor__(void)

{
  CVarAllowUnversionedContentInEditor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowUnversionedContentInEditor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResetDebugEntities'' @ 15035eb10

void __cdecl UE::Editor::DataStorage::_dynamic_atexit_destructor_for__CVarResetDebugEntities__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResetDebugEntities);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance'' @ 15035eb30

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance.PrettyNameDotNotation.
                  Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_4ByteMultiValueInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance'' @ 15035eb60

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance.PrettyNameDotNotation.
                  Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_8ByteMultiValueInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance'' @ 15035eb90

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance.PrettyNameDotNotation
      .Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseInsensitiveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance'' @ 15035ebc0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance.PrettyNameDotNotation.
      Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_AnsiStringView_CaseSensitiveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_BooleanInstance'' @ 15035ebf0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_BooleanInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_BooleanInstance.PrettyNameDotNotation.Data.AllocatorInstance
      .Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_BooleanInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_BooleanInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_DoubleInstance'' @ 15035ec20

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_DoubleInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_DoubleInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_DoubleInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_DoubleInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_FNameByIdInstance'' @ 15035ec50

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_FNameByIdInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_FNameByIdInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_FNameByIdInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_FNameByIdInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_FNameByStringInstance'' @ 15035ec80

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_FNameByStringInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_FNameByStringInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_FNameByStringInstance.PrettyNameDotNotation.Data
                  .AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_FNameByStringInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_FloatInstance'' @ 15035ecb0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_FloatInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_FloatInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_FloatInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_FloatInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_Int16Instance'' @ 15035ece0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_Int16Instance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_Int16Instance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_Int16Instance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_Int16Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_Int32Instance'' @ 15035ed10

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_Int32Instance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_Int32Instance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_Int32Instance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_Int32Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_Int64Instance'' @ 15035ed40

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_Int64Instance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_Int64Instance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_Int64Instance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_Int64Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_Int8Instance'' @ 15035ed70

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_Int8Instance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_Int8Instance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_Int8Instance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_Int8Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance'' @ 15035eda0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance.PrettyNameDotNotation.Data
      .AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_MultiValueMisMatchedSizesInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance'' @ 15035edd0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance.PrettyNameDotNotation.
                  Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_MultiValueStringsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance'' @ 15035ee00

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance.
      PrettyNameDotNotation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_MultiValueStringsMatchingNumbersInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance'' @ 15035ee30

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_MultiVariableSizedValuesInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance'' @ 15035ee60

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance.PrettyNameDotNotation.
                  Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_StringIndexCheckInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance'' @ 15035ee90

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance.PrettyNameDotNotation.
      Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_StringIndexCheckWithOffsetInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance'' @ 15035eec0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance.PrettyNameDotNotation.
      Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_StringView_CaseInsensitiveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance'' @ 15035eef0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_StringView_CaseSensitiveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance'' @ 15035ef20

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_TextView_CaseInsensitiveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance'' @ 15035ef50

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_TextView_CaseSensitiveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_UInt16Instance'' @ 15035ef80

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_UInt16Instance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_UInt16Instance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_UInt16Instance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_UInt16Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_UInt32Instance'' @ 15035efb0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_UInt32Instance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_UInt32Instance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_UInt32Instance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_UInt32Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_UInt64Instance'' @ 15035efe0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_UInt64Instance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_UInt64Instance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_UInt64Instance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_UInt64Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_UInt8Instance'' @ 15035f010

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_UInt8Instance__(void)

{
  if (FEditorDataStorageUiSorter_Prefix_UInt8Instance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_UInt8Instance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEditorDataStorageUiSorter_Prefix_UInt8Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance'' @ 15035f040

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance.PrettyNameDotNotation
      .Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_WideStringView_CaseInsensitiveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance'' @ 15035f070

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance__
          (void)

{
  if (FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance.PrettyNameDotNotation.
      Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FEditorDataStorageUiSorter_Prefix_WideStringView_CaseSensitiveInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRowHandleArray_TestsInstance'' @ 15035f0a0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FRowHandleArray_TestsInstance__(void)

{
  if (FRowHandleArray_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRowHandleArray_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FRowHandleArray_TestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions1Instance'' @ 15035f0d0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions1Instance__(void)

{
  if (FTypedElementQueryConditions1Instance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions1Instance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions1Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions2Instance'' @ 15035f100

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions2Instance__(void)

{
  if (FTypedElementQueryConditions2Instance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions2Instance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions2Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions3Instance'' @ 15035f130

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions3Instance__(void)

{
  if (FTypedElementQueryConditions3Instance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions3Instance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions3Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions4Instance'' @ 15035f160

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions4Instance__(void)

{
  if (FTypedElementQueryConditions4Instance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions4Instance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions4Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions5Instance'' @ 15035f190

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions5Instance__(void)

{
  if (FTypedElementQueryConditions5Instance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions5Instance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions5Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions6Instance'' @ 15035f1c0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions6Instance__(void)

{
  if (FTypedElementQueryConditions6Instance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions6Instance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions6Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions7Instance'' @ 15035f1f0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions7Instance__(void)

{
  if (FTypedElementQueryConditions7Instance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions7Instance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions7Instance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions_MultiMatchInstance'' @ 15035f220

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions_MultiMatchInstance__(void)

{
  if (FTypedElementQueryConditions_MultiMatchInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions_MultiMatchInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions_MultiMatchInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions_NoColumnInstance'' @ 15035f250

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions_NoColumnInstance__(void)

{
  if (FTypedElementQueryConditions_NoColumnInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions_NoColumnInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions_NoColumnInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions_OneColumnInstance'' @ 15035f280

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions_OneColumnInstance__(void)

{
  if (FTypedElementQueryConditions_OneColumnInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions_OneColumnInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions_OneColumnInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementQueryConditions_SortedInstance'' @ 15035f2b0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementQueryConditions_SortedInstance__(void)

{
  if (FTypedElementQueryConditions_SortedInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTypedElementQueryConditions_SortedInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementQueryConditions_SortedInstance);
  return;
}

// `dynamic_atexit_destructor_for_'QueryMergeTestFixtureAutomationSpecInstance'' @ 15035f2e0

void __cdecl
UE::Editor::DataStorage::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__QueryMergeTestFixtureAutomationSpecInstance__(void)

{
  if (QueryMergeTestFixtureAutomationSpecInstance.QueryHandles.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(QueryMergeTestFixtureAutomationSpecInstance.QueryHandles.AllocatorInstance.Data);
  }
  if (QueryMergeTestFixtureAutomationSpecInstance.Rows.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(QueryMergeTestFixtureAutomationSpecInstance.Rows.AllocatorInstance.Data);
  }
  FAutomationSpecBase::~FAutomationSpecBase
            ((FAutomationSpecBase *)&QueryMergeTestFixtureAutomationSpecInstance);
  return;
}

// `dynamic_atexit_destructor_for_'RegisteredCommands'' @ 15035f320

void __cdecl
UE::Editor::DataStorage::Debug::ProcessorTests::_dynamic_atexit_destructor_for__RegisteredCommands__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RegisteredCommands.AllocatorInstance.Data;
  if (RegisteredCommands.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RegisteredCommands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RegisteredQueries'' @ 15035f340

void __cdecl
UE::Editor::DataStorage::Debug::ProcessorTests::_dynamic_atexit_destructor_for__RegisteredQueries__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RegisteredQueries.AllocatorInstance.Data;
  if (RegisteredQueries.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RegisteredQueries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TQueryFunction_TestsInstance'' @ 15035f360

void __cdecl
UE::Editor::DataStorage::Queries::Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__TQueryFunction_TestsInstance__(void)

{
  if (TQueryFunction_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TQueryFunction_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&TQueryFunction_TestsInstance);
  return;
}

