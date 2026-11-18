// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 341

// NetSerializeScriptStructDelegate'' @ 140f20ee0

void __cdecl `dynamic_initializer_for_'FInstancedStruct::NetSerializeScriptStructDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FInstancedStruct::NetSerializeScriptStructDelegate__);
  return;
}

// RootNodeID'' @ 140f20f00

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'BitMappings'' @ 140f20f30

void __cdecl FBitSetSerializationDictionary::_dynamic_initializer_for__BitMappings__(void)

{
  atexit(_dynamic_atexit_destructor_for__BitMappings__);
  return;
}

// `dynamic_initializer_for_'CVarEnforceValidName'' @ 140f20f50

void __cdecl _dynamic_initializer_for__CVarEnforceValidName__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnforceValidName,L"StructUtils.EnforceValidPropertyName",local_res8,
             L"Enforce valid naming on new and renamed property bag properties.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnforceValidName__);
  return;
}

// `dynamic_initializer_for_'CVarOSUseForCooking'' @ 140f20fa0

void __cdecl UE::OS::_dynamic_initializer_for__CVarOSUseForCooking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOSUseForCooking,L"OS.UseForCooking",&GUseForCooking,
             L"Use overridable serialization for cooking else fall back on delta serialization",0);
  atexit(_dynamic_atexit_destructor_for__CVarOSUseForCooking__);
  return;
}

// `dynamic_initializer_for_'CVarValidateReplicatedPropertyRegistration'' @ 140f20ff0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarValidateReplicatedPropertyRegistration__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarValidateReplicatedPropertyRegistration,
             L"net.ValidateReplicatedPropertyRegistration",GValidateReplicatedProperties,
             L"Warns if NetDeltaSerialize properties are not top-level",0);
  atexit(_dynamic_atexit_destructor_for__CVarValidateReplicatedPropertyRegistration__);
  return;
}

// `dynamic_initializer_for_'FAutomationTestAttemptToFindUninitializedScriptStructMembersAutomationTestInstance'' @ 140f21040

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAutomationTestAttemptToFindUninitializedScriptStructMembersAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAutomationTestAttemptToFindUninitializedScriptStructMembers");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FAutomationTestAttemptToFindUninitializedScriptStructMembersAutomationTestInstance,
             &local_18,false);
  FAutomationTestAttemptToFindUninitializedScriptStructMembersAutomationTestInstance._0_8_ =
       &___7FAutomationTestAttemptToFindUninitializedScriptStructMembers__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FAutomationTestAttemptToFindUninitializedScriptStructMembersAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FAutomationTestFindInexactObjectReferencesInStructSerializersAutomationTestInstance'' @ 140f210a0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAutomationTestFindInexactObjectReferencesInStructSerializersAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAutomationTestFindInexactObjectReferencesInStructSerializers");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FAutomationTestFindInexactObjectReferencesInStructSerializersAutomationTestInstance,
             &local_18,false);
  FAutomationTestFindInexactObjectReferencesInStructSerializersAutomationTestInstance._0_8_ =
       &___7FAutomationTestFindInexactObjectReferencesInStructSerializers__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FAutomationTestFindInexactObjectReferencesInStructSerializersAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FAutomationTestFindUndeclaredObjectReferencesInStructSerializersAutomationTestInstance'' @ 140f21100

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAutomationTestFindUndeclaredObjectReferencesInStructSerializersAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAutomationTestFindUndeclaredObjectReferencesInStructSerializers");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FAutomationTestFindUndeclaredObjectReferencesInStructSerializersAutomationTestInstance
             ,&local_18,false);
  FAutomationTestFindUndeclaredObjectReferencesInStructSerializersAutomationTestInstance._0_8_ =
       &___7FAutomationTestFindUndeclaredObjectReferencesInStructSerializers__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FAutomationTestFindUndeclaredObjectReferencesInStructSerializersAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FTestUninitializedStructMemberTestInstance'' @ 140f21160

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTestUninitializedStructMemberTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTestUninitializedStructMemberTest");
  FTestUninitializedStructMemberTest::FTestUninitializedStructMemberTest
            (&FTestUninitializedStructMemberTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTestUninitializedStructMemberTestInstance__);
  return;
}

// `dynamic_initializer_for_'GCmdListBadScriptStructs'' @ 140f211b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GCmdListBadScriptStructs__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_7>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,
                      L"CoreUObject.AttemptToFindUninitializedScriptStructMembers",
                      L"Finds USTRUCT() structs that fail to initialize reflected member variables",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GCmdListBadScriptStructs,pIVar5);
  GCmdListBadScriptStructs._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GCmdListBadScriptStructs__);
  return;
}

// `dynamic_initializer_for_'GInstancedStructCustomVersion'' @ 140f21350

void __cdecl _dynamic_initializer_for__GInstancedStructCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = GInstancedStructCustomVersion.GUID;
  GInstancedStructCustomVersion.Registration.Key = GInstancedStructCustomVersion.GUID;
  FCurrentCustomVersions::Register
            (&local_18,0,L"InstancedStructCustomVersion",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GInstancedStructCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GPropertyBagCustomVersion'' @ 140f213a0

void __cdecl _dynamic_initializer_for__GPropertyBagCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FPropertyBagCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,3,L"PropertyBagCustomVersion",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GPropertyBagCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GPropertyBagLock'' @ 140f213e0

void __cdecl UE::StructUtils::Private::_dynamic_initializer_for__GPropertyBagLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GPropertyBagLock,4000);
  atexit(_dynamic_atexit_destructor_for__GPropertyBagLock__);
  return;
}

// `dynamic_initializer_for_'GUPSIniValueCache'' @ 140f21410

void __cdecl _dynamic_initializer_for__GUPSIniValueCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GUPSIniValueCache__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UObject_UClass'' @ 140f21430

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UObject_UClass__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UObject_UClass,L"UObject_UClass",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogCasts'' @ 140f21480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCasts__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCasts,L"LogCasts",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCasts__);
  return;
}

// `dynamic_initializer_for_'LogClass'' @ 140f214c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogClass__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogClass,L"LogClass",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogClass__);
  return;
}

// `dynamic_initializer_for_'LogScriptSerialization'' @ 140f21500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogScriptSerialization__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogScriptSerialization,L"LogScriptSerialization",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogScriptSerialization__);
  return;
}

// `dynamic_initializer_for_'LogStructUtils'' @ 140f21540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStructUtils__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStructUtils,L"LogStructUtils",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogStructUtils__);
  return;
}

// `dynamic_initializer_for_'RemoteObjectId_Ops'' @ 140f21580

void __cdecl _dynamic_initializer_for__RemoteObjectId_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"RemoteObjectId");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  RemoteObjectId_Ops.Name.AssetName = local_28.AssetName;
  RemoteObjectId_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FRemoteObjectId,&UE::CoreUObject::Private::Construct<FRemoteObjectId>,&UE::CoreUObject::Private::ConstructForTests<FRemoteObjectId>,&UE::CoreUObject::Private::Destruct<FRemoteObjectId>,&UE::CoreUObject::Private::SerializeArchive<FRemoteObjectId>,&UE::CoreUObject::Private::NetSerialize<FRemoteObjectId>,&UE::CoreUObject::Private::Copy<FRemoteObjectId>,&UE::CoreUObject::Private::GetStructTypeHash<FRemoteObjectId>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = RemoteObjectId_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__RemoteObjectId_Ops__);
  return;
}

// `dynamic_initializer_for_'RemoteObjectReference_Ops'' @ 140f21640

void __cdecl _dynamic_initializer_for__RemoteObjectReference_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"RemoteObjectReference");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  RemoteObjectReference_Ops.Name.AssetName = local_28.AssetName;
  RemoteObjectReference_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FRemoteObjectReference,&UE::CoreUObject::Private::Construct<FRemoteObjectReference>,&UE::CoreUObject::Private::ConstructForTests<FRemoteObjectReference>,&UE::CoreUObject::Private::Destruct<FRemoteObjectReference>,&UE::CoreUObject::Private::SerializeArchive<FRemoteObjectReference>,&UE::CoreUObject::Private::NetSerialize<FRemoteObjectReference>,&UE::CoreUObject::Private::Copy<FRemoteObjectReference>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = RemoteObjectReference_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__RemoteObjectReference_Ops__);
  return;
}

// `dynamic_initializer_for_'RemoteServerId_Ops'' @ 140f21700

void __cdecl _dynamic_initializer_for__RemoteServerId_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"RemoteServerId");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  RemoteServerId_Ops.Name.AssetName = local_28.AssetName;
  RemoteServerId_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 4;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FRemoteServerId,&UE::CoreUObject::Private::Construct<FRemoteServerId>,&UE::CoreUObject::Private::ConstructForTests<FRemoteServerId>,&UE::CoreUObject::Private::Destruct<FRemoteServerId>,&UE::CoreUObject::Private::SerializeArchive<FRemoteServerId>,&UE::CoreUObject::Private::NetSerialize<FRemoteServerId>,&UE::CoreUObject::Private::Copy<FRemoteServerId>,&UE::CoreUObject::Private::GetStructTypeHash<FRemoteServerId>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = RemoteServerId_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__RemoteServerId_Ops__);
  return;
}

// `dynamic_initializer_for_'ThreadSafeOnce18'' @ 140f217c0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__ThreadSafeOnce18__(void)

{
  UE::GC::RegisterSlowImplementation(UClass::AddReferencedObjects,Unbalanced);
  ThreadSafeOnce18 = 1;
  return;
}

// `dynamic_initializer_for_'TrackerMap'' @ 140f217f0

void __cdecl FBitSetSerializationDictionary::_dynamic_initializer_for__TrackerMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__TrackerMap__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStructContainer_h__Script_CoreUObject_3000123681'' @ 140f21810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStructContainer_h__Script_CoreUObject_3000123681__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStructContainer_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStruct_h__Script_CoreUObject_1478035662'' @ 140f21850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStruct_h__Script_CoreUObject_1478035662__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStruct_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h__Script_CoreUObject_2241785157'' @ 140f21890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h__Script_CoreUObject_2241785157__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h__Script_CoreUObject_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h__Script_CoreUObject_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_SharedStruct_h__Script_CoreUObject_2320279041'' @ 140f218e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_SharedStruct_h__Script_CoreUObject_2320279041__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_SharedStruct_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h__Script_CoreUObject_3988367362'' @ 140f21920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h__Script_CoreUObject_3988367362__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStructEditorUtils_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h__Script_CoreUObject_931175414'' @ 140f21960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h__Script_CoreUObject_931175414__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h__Script_CoreUObject_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h__Script_CoreUObject_2267566971'' @ 140f219b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h__Script_CoreUObject_2267566971__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Class_h__Script_CoreUObject_Statics
             ::ClassInfo,8,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// NewStructOps @ 141f516d0

void * __cdecl Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInstancedStructContainer,&UE::CoreUObject::Private::Construct<FInstancedStructContainer>,&UE::CoreUObject::Private::ConstructForTests<FInstancedStructContainer>,&UE::CoreUObject::Private::Destruct<FInstancedStructContainer>,&UE::CoreUObject::Private::SerializeArchive<FInstancedStructContainer>,&UE::CoreUObject::Private::GetPreloadDependencies<FInstancedStructContainer>,&UE::CoreUObject::Private::Copy<FInstancedStructContainer>,&UE::CoreUObject::Private::Identical<FInstancedStructContainer>,&UE::CoreUObject::Private::ExportTextItem<FInstancedStructContainer>,&UE::CoreUObject::Private::ImportTextItem<FInstancedStructContainer>,&UE::CoreUObject::Private::AddStructReferencedObjects<FInstancedStructContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 141f518c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f51970

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f51bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UUserDefinedStruct @ 141f51d80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserDefinedStruct(void)

{
  if (Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton,
               &Z_Construct_UClass_UUserDefinedStruct_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserDefinedStruct.OuterSingleton;
}

// Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus @ 141f51dc0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus(void)

{
  if (Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUserDefinedStructureStatus.InnerSingleton;
}

// EUserDefinedStructureStatus_StaticEnum @ 141f51e00

UEnum * __cdecl EUserDefinedStructureStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus,(UObject *)pUVar1,
                       L"EUserDefinedStructureStatus");
  }
  return Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton;
}

// Z_Construct_UClass_UUserDefinedStructEditorDataBase @ 141f52190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserDefinedStructEditorDataBase(void)

{
  if (Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.OuterSingleton,
               &Z_Construct_UClass_UUserDefinedStructEditorDataBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.OuterSingleton;
}

// `scalar_deleting_destructor' @ 141f524e0

void * __thiscall
FAutoConsoleCommandWithWorldAndArgs::_scalar_deleting_destructor_
          (FAutoConsoleCommandWithWorldAndArgs *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UClass_UPropertyBag @ 141f52520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyBag(void)

{
  if (Z_Registration_Info_UClass_UPropertyBag.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyBag.OuterSingleton,
               &Z_Construct_UClass_UPropertyBag_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyBag.OuterSingleton;
}

// Z_Construct_UClass_UPropertyBagMissingObject @ 141f52560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyBagMissingObject(void)

{
  if (Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton,
               &Z_Construct_UClass_UPropertyBagMissingObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton;
}

// Z_Construct_UClass_UScriptStruct @ 141f525a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScriptStruct(void)

{
  if (Z_Registration_Info_UClass_UScriptStruct.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScriptStruct.OuterSingleton,
               &Z_Construct_UClass_UScriptStruct_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScriptStruct.OuterSingleton;
}

// Z_Construct_UEnum_CoreUObject_EPropertyBagPropertyType @ 141f525e0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EPropertyBagPropertyType(void)

{
  if (Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EPropertyBagPropertyType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPropertyBagContainerTypes @ 141f52620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPropertyBagContainerTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBagContainerTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPropertyBagContainerTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyBagContainerTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPropertyBagContainerTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPropertyBagPropertyDesc @ 141f526a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPropertyBagPropertyDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDesc.InnerSingleton;
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

// EPropertyBagPropertyType_StaticEnum @ 141f52760

UEnum * __cdecl EPropertyBagPropertyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagPropertyType,(UObject *)pUVar1,
                       L"EPropertyBagPropertyType");
  }
  return Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton;
}

// EPropertyBagContainerType_StaticEnum @ 141f528b0

UEnum * __cdecl EPropertyBagContainerType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagContainerType,(UObject *)pUVar1,
                       L"EPropertyBagContainerType");
  }
  return Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton;
}

// NewStructOps @ 141f528f0

void * __cdecl Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPropertyBagContainerTypes,&UE::CoreUObject::Private::Construct<FPropertyBagContainerTypes>,&UE::CoreUObject::Private::ConstructForTests<FPropertyBagContainerTypes>,&UE::CoreUObject::Private::Destruct<FPropertyBagContainerTypes>,&UE::CoreUObject::Private::Copy<FPropertyBagContainerTypes>,&UE::CoreUObject::Private::GetStructTypeHash<FPropertyBagContainerTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// EPropertyBagResult_StaticEnum @ 141f52930

UEnum * __cdecl EPropertyBagResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagResult,(UObject *)pUVar1,
                       L"EPropertyBagResult");
  }
  return Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton;
}

// EPropertyBagAlterationResult_StaticEnum @ 141f52970

UEnum * __cdecl EPropertyBagAlterationResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagAlterationResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagAlterationResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagAlterationResult,(UObject *)pUVar1,
                       L"EPropertyBagAlterationResult");
  }
  return Z_Registration_Info_UEnum_EPropertyBagAlterationResult.OuterSingleton;
}

// NewStructOps @ 141f529b0

void * __cdecl
Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPropertyBagPropertyDescMetaData,&UE::CoreUObject::Private::Construct<FPropertyBagPropertyDescMetaData>,&UE::CoreUObject::Private::ConstructForTests<FPropertyBagPropertyDescMetaData>,&UE::CoreUObject::Private::Destruct<FPropertyBagPropertyDescMetaData>,&UE::CoreUObject::Private::Copy<FPropertyBagPropertyDescMetaData>,&UE::CoreUObject::Private::GetStructTypeHash<FPropertyBagPropertyDescMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141f529f0

void * __cdecl Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPropertyBagPropertyDesc,&UE::CoreUObject::Private::Construct<FPropertyBagPropertyDesc>,&UE::CoreUObject::Private::ConstructForTests<FPropertyBagPropertyDesc>,&UE::CoreUObject::Private::Destruct<FPropertyBagPropertyDesc>,&UE::CoreUObject::Private::Copy<FPropertyBagPropertyDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141f52a30

void * __cdecl Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInstancedPropertyBag,&UE::CoreUObject::Private::Construct<FInstancedPropertyBag>,&UE::CoreUObject::Private::ConstructForTests<FInstancedPropertyBag>,&UE::CoreUObject::Private::Destruct<FInstancedPropertyBag>,&UE::CoreUObject::Private::SerializeArchive<FInstancedPropertyBag>,&UE::CoreUObject::Private::GetPreloadDependencies<FInstancedPropertyBag>,&UE::CoreUObject::Private::Copy<FInstancedPropertyBag>,&UE::CoreUObject::Private::Identical<FInstancedPropertyBag>,&UE::CoreUObject::Private::AddStructReferencedObjects<FInstancedPropertyBag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141f52a70

void * __cdecl Z_Construct_UScriptStruct_FSharedStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSharedStruct,&UE::CoreUObject::Private::Construct<FSharedStruct>,&UE::CoreUObject::Private::ConstructForTests<FSharedStruct>,&UE::CoreUObject::Private::Destruct<FSharedStruct>,&UE::CoreUObject::Private::Copy<FSharedStruct>,&UE::CoreUObject::Private::Identical<FSharedStruct>,&UE::CoreUObject::Private::AddStructReferencedObjects<FSharedStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EPropertyBagMissingEnum_StaticEnum @ 141f52ab0

UEnum * __cdecl EPropertyBagMissingEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagMissingEnum,(UObject *)pUVar1,
                       L"EPropertyBagMissingEnum");
  }
  return Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton;
}

// NewStructOps @ 141f52af0

void * __cdecl Z_Construct_UScriptStruct_FConstSharedStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstSharedStruct,&UE::CoreUObject::Private::Construct<FConstSharedStruct>,&UE::CoreUObject::Private::ConstructForTests<FConstSharedStruct>,&UE::CoreUObject::Private::Destruct<FConstSharedStruct>,&UE::CoreUObject::Private::Copy<FConstSharedStruct>,&UE::CoreUObject::Private::Identical<FConstSharedStruct>,&UE::CoreUObject::Private::AddStructReferencedObjects<FConstSharedStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141f52b70

void * __cdecl Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPropertyBagMissingStruct,&UE::CoreUObject::Private::Construct<FPropertyBagMissingStruct>,&UE::CoreUObject::Private::ConstructForTests<FPropertyBagMissingStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 141f52ec0

void * __thiscall
FAutomationTestUObjectClassBase::_scalar_deleting_destructor_
          (FAutomationTestUObjectClassBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UClass @ 141f52f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClass(void)

{
  if (Z_Registration_Info_UClass_UClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClass.OuterSingleton,
               &Z_Construct_UClass_UClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClass.OuterSingleton;
}

// Z_Construct_UClass_UDelegateFunction @ 141f52fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDelegateFunction(void)

{
  if (Z_Registration_Info_UClass_UDelegateFunction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDelegateFunction.OuterSingleton,
               &Z_Construct_UClass_UDelegateFunction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDelegateFunction.OuterSingleton;
}

// Z_Construct_UClass_UEnum @ 141f52ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnum(void)

{
  if (Z_Registration_Info_UClass_UEnum.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnum.OuterSingleton,
               &Z_Construct_UClass_UEnum_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnum.OuterSingleton;
}

// Z_Construct_UClass_UField @ 141f53030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UField(void)

{
  if (Z_Registration_Info_UClass_UField.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UField.OuterSingleton,
               &Z_Construct_UClass_UField_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UField.OuterSingleton;
}

// Z_Construct_UClass_UFunction @ 141f53070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFunction(void)

{
  if (Z_Registration_Info_UClass_UFunction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFunction.OuterSingleton,
               &Z_Construct_UClass_UFunction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFunction.OuterSingleton;
}

// Z_Construct_UClass_USparseDelegateFunction @ 141f530f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USparseDelegateFunction(void)

{
  if (Z_Registration_Info_UClass_USparseDelegateFunction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USparseDelegateFunction.OuterSingleton,
               &Z_Construct_UClass_USparseDelegateFunction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USparseDelegateFunction.OuterSingleton;
}

// Z_Construct_UClass_UStruct @ 141f53130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStruct(void)

{
  if (Z_Registration_Info_UClass_UStruct.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStruct.OuterSingleton,
               &Z_Construct_UClass_UStruct_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStruct.OuterSingleton;
}

// `scalar_deleting_destructor' @ 141f53430

void * __thiscall
FAutomationTestAttemptToFindUninitializedScriptStructMembers::_scalar_deleting_destructor_
          (FAutomationTestAttemptToFindUninitializedScriptStructMembers *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UField_NoRegister @ 141f53470

UClass * __cdecl Z_Construct_UClass_UField_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UField.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Field",&Z_Registration_Info_UClass_UField.InnerSingleton,
               UField::StaticRegisterNativesUField,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_UField,L"Engine",InternalConstructor<UField>,
               InternalVTableHelperCtorCaller<UField>,local_res10,UObject::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UField.InnerSingleton;
}

// Z_Construct_UClass_UStruct_NoRegister @ 141f53530

UClass * __cdecl Z_Construct_UClass_UStruct_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Struct",&Z_Registration_Info_UClass_UStruct.InnerSingleton,
               UStruct::StaticRegisterNativesUStruct,0xb0,8,CLASS_Intrinsic,CASTCLASS_UStruct,
               L"Engine",InternalConstructor<UStruct>,InternalVTableHelperCtorCaller<UStruct>,
               local_res10,UField::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UStruct.InnerSingleton;
}

// Z_Construct_UClass_UClass_NoRegister @ 141f53600

UClass * __cdecl Z_Construct_UClass_UClass_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UClass.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UClass::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Class",&Z_Registration_Info_UClass_UClass.InnerSingleton,
               UClass::StaticRegisterNativesUClass,0x208,8,CLASS_Intrinsic,CASTCLASS_UClass,
               L"Engine",InternalConstructor<UClass>,InternalVTableHelperCtorCaller<UClass>,
               local_res10,UStruct::StaticClass,UPackage::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UClass.InnerSingleton;
}

// Z_Construct_UScriptStruct_FInstancedStruct @ 141f537a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInstancedStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStruct.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInstancedStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FInstancedStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInstancedStruct.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInstancedStruct.InnerSingleton;
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

// NewStructOps @ 141f53820

void * __cdecl Z_Construct_UScriptStruct_FInstancedStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInstancedStruct,&UE::CoreUObject::Private::Construct<FInstancedStruct>,&UE::CoreUObject::Private::ConstructForTests<FInstancedStruct>,&UE::CoreUObject::Private::Destruct<FInstancedStruct>,&UE::CoreUObject::Private::SerializeArchive<FInstancedStruct>,&UE::CoreUObject::Private::NetSerialize<FInstancedStruct>,&UE::CoreUObject::Private::GetPreloadDependencies<FInstancedStruct>,&UE::CoreUObject::Private::Copy<FInstancedStruct>,&UE::CoreUObject::Private::Identical<FInstancedStruct>,&UE::CoreUObject::Private::ExportTextItem<FInstancedStruct>,&UE::CoreUObject::Private::ImportTextItem<FInstancedStruct>,&UE::CoreUObject::Private::FindInnerPropertyInstance<FInstancedStruct>,&UE::CoreUObject::Private::AddStructReferencedObjects<FInstancedStruct>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FInstancedStruct>,&UE::CoreUObject::Private::Visit<FInstancedStruct>,&UE::CoreUObject::Private::ResolveVisitedPathInfo<FInstancedStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 141f53d20

void * __thiscall
FTestUninitializedStructMemberTest::_scalar_deleting_destructor_
          (FTestUninitializedStructMemberTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141f54040

void * __thiscall
FAutomationTestFindUndeclaredObjectReferencesInStructSerializers::_scalar_deleting_destructor_
          (FAutomationTestFindUndeclaredObjectReferencesInStructSerializers *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f54310

void * __thiscall
FAutomationTestFindInexactObjectReferencesInStructSerializers::_scalar_deleting_destructor_
          (FAutomationTestFindInexactObjectReferencesInStructSerializers *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 141f54ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
<lambda_7>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uchar *puVar6;
  bool bVar7;
  EInternalObjectFlags EVar8;
  uint uVar9;
  uint uVar10;
  UScriptStruct *pUVar11;
  FName *pFVar12;
  FProperty *pFVar13;
  FProperty *this;
  UClass *pUVar14;
  FUObjectItem *pFVar15;
  ICppStructOps *pIVar16;
  UPackage *pUVar17;
  FModuleManager *this_00;
  FString *pFVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined ***pppuVar21;
  uint *puVar22;
  longlong *plVar23;
  wchar_t *pwVar24;
  ForElementType<FSetElementId> FVar25;
  longlong lVar26;
  uint uVar27;
  UScriptStruct *this_01;
  uint uVar28;
  int iVar29;
  Type TVar30;
  FProperty *pFVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  undefined1 auStackY_5e8 [32];
  undefined1 uStack_588;
  undefined1 auStack_587 [3];
  int iStack_584;
  uint uStack_580;
  uint uStack_57c;
  uint uStack_578;
  UScriptStruct *pUStack_570;
  TObjectIterator<UScriptStruct> TStack_568;
  int iStack_550;
  uint uStack_54c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_548;
  undefined4 uStack_540;
  uint uStack_53c;
  int iStack_538;
  undefined4 uStack_534;
  FScriptStructTestWrapper FStack_530;
  longlong *plStack_510;
  undefined8 uStack_508;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_500;
  uint uStack_4f8;
  uint uStack_4f4;
  int iStack_4f0;
  undefined4 uStack_4ec;
  int iStack_4e8;
  undefined4 uStack_4e4;
  UScriptStruct *pUStack_4e0;
  FModuleStatus FStack_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b0;
  FName FStack_490;
  FName FStack_488;
  LARGE_INTEGER LStack_480;
  LARGE_INTEGER LStack_478;
  FName FStack_470;
  undefined1 auStack_468 [8];
  FName FStack_460;
  FName FStack_458;
  FName FStack_450;
  FName FStack_448;
  LARGE_INTEGER LStack_440;
  double dStack_438;
  LARGE_INTEGER LStack_430;
  double dStack_428;
  LARGE_INTEGER LStack_420;
  double dStack_418;
  FString FStack_410;
  FString FStack_400;
  FString FStack_3f0;
  FString FStack_3e0;
  FString FStack_3d0;
  FString FStack_3c0;
  FString FStack_3b0;
  FString FStack_3a0;
  FString FStack_390;
  FString FStack_380;
  FString FStack_370;
  int iStack_360;
  int iStack_35c;
  int iStack_358;
  LARGE_INTEGER LStack_350;
  longlong *plStack_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_340;
  undefined8 uStack_320;
  longlong *plStack_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_310;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined **ppuStack_2d8;
  code *pcStack_2d0;
  undefined ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined **ppuStack_2a8;
  UScriptStruct *pUStack_2a0;
  undefined ***pppuStack_290;
  FScriptContainerElement *pFStack_288;
  uint uStack_280;
  undefined4 uStack_27c;
  FScriptContainerElement *pFStack_278;
  int iStack_270;
  undefined4 uStack_26c;
  FScriptContainerElement *pFStack_268;
  int iStack_260;
  undefined4 uStack_25c;
  FString FStack_258;
  FScriptContainerElement *pFStack_248;
  undefined8 uStack_240;
  FString FStack_238;
  FString FStack_228;
  TStringView<wchar_t> TStack_218;
  FString FStack_208;
  FString FStack_1f8;
  TStringView<wchar_t> TStack_1e8;
  FName FStack_1d8;
  FString FStack_1d0;
  FName FStack_1c0;
  FString FStack_1b8;
  FString aFStack_1a8 [2];
  undefined4 uStack_17c;
  undefined1 auStack_178 [32];
  uint *puStack_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  undefined1 auStack_140 [8];
  ForElementType<FSetElementId> FStack_138;
  int iStack_130;
  undefined1 auStack_128 [32];
  uint *puStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  ForElementType<FSetElementId> FStack_e8;
  int iStack_e0;
  double dStack_d8;
  double dStack_d0;
  code *pcStack_c8;
  longlong alStack_b8 [3];
  longlong *plStack_a0;
  double dStack_98;
  double dStack_90;
  code *pcStack_88;
  longlong alStack_78 [3];
  longlong *plStack_60;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  pFVar31 = (FProperty *)0x0;
  ppuStack_2d8 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  pppuStack_2c0 = (undefined ***)0x0;
  pcStack_2d0 = `FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
  pcStack_2e8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>
                ::Call;
  QueryPerformanceCounter(&LStack_350);
  dVar4 = __real_4170000000000000;
  pcStack_88 = pcStack_2e8;
  plStack_60 = (longlong *)0x0;
  dStack_98 = (double)LStack_350.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
  dStack_90 = __real_4000000000000000;
  if (pcStack_2e8 != (code *)0x0) {
    pppuVar21 = &ppuStack_2d8;
    if (pppuStack_2c0 != (undefined ***)0x0) {
      pppuVar21 = pppuStack_2c0;
    }
    (*(code *)**pppuVar21)(SUB84(__real_4000000000000000,0),alStack_78);
    if (pcStack_2e8 != (code *)0x0) {
      pppuVar21 = &ppuStack_2d8;
      if (pppuStack_2c0 != (undefined ***)0x0) {
        pppuVar21 = pppuStack_2c0;
      }
      (*(code *)(*pppuVar21)[2])();
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    `FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::FScriptStructSettings::
    FScriptStructSettings(&Settings);
    _Init_thread_footer(&::_TSS0);
  }
  iStack_584 = 0;
  pUVar11 = FTestUninitializedScriptStructMembersTest::StaticStruct();
  pUStack_4e0 = pUVar11;
  if ((pUVar11 == (UScriptStruct *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestUninitializedScriptStructMembersTestStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x10e5,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FStack_530.TempBuffer = (uchar *)0x0;
  FStack_530.InitValue = 0xfe;
  FStack_530.ConstrutorSyntax = NoInit;
  FStack_530.bTempBufferAttemptedCreate = false;
  FStack_530.ScriptStruct = pUVar11;
  pFVar12 = ::FName::FName(&FStack_1c0,L"UninitializedObjectReference");
  pFVar13 = UStruct::FindPropertyByName((UStruct *)pUVar11,*pFVar12);
  if (((pFVar13 == (FProperty *)0x0) || ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x10 & 1) == 0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar31,
        bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar12 = ::FName::FName(&FStack_1d8,L"InitializedObjectReference");
  this = UStruct::FindPropertyByName((UStruct *)pUVar11,*pFVar12);
  if (((this == (FProperty *)0x0) || ((*(uint *)(this->_padding_ + 0x18) >> 0x10 & 1) == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"), this = pFVar31, bVar7))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (FStack_530.bTempBufferAttemptedCreate == false) {
    FScriptStructTestWrapper::AttemptCreateTempBuffer(&FStack_530);
  }
  puVar6 = FStack_530.TempBuffer;
  if ((pFVar13->ArrayDim < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((puVar6 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)(puVar6 + pFVar13->Offset_Internal) != -0x101010101010102) &&
     (1 < (byte)LogClass._0_1_)) {
    FProperty::GetNameCPP(pFVar13,&FStack_1b8);
    FStack_490 = (FName)pUVar11->_padding_;
    ::FName::ToString(&FStack_490,&FStack_410);
    (**(code **)(pUVar11->_padding_ + 0x318))(pUVar11);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (FStack_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_410.Data.AllocatorInstance.Data);
    }
    if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_530.bTempBufferAttemptedCreate == false) {
    FScriptStructTestWrapper::AttemptCreateTempBuffer(&FStack_530);
  }
  puVar6 = FStack_530.TempBuffer;
  if ((this->ArrayDim < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((puVar6 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)(puVar6 + this->Offset_Internal) != 0) && (1 < (byte)LogClass._0_1_)) {
    FProperty::GetNameCPP(this,&FStack_258);
    FStack_488 = (FName)pUVar11->_padding_;
    ::FName::ToString(&FStack_488,&FStack_400);
    (**(code **)(pUVar11->_padding_ + 0x318))(pUVar11);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (FStack_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_400.Data.AllocatorInstance.Data);
    }
    if (FStack_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_258.Data.AllocatorInstance.Data);
    }
  }
  puVar6 = FStack_530.TempBuffer;
  if (FStack_530.TempBuffer != (uchar *)0x0) {
    (**(code **)((FStack_530.ScriptStruct)->_padding_ + 0x300))
              (FStack_530.ScriptStruct,FStack_530.TempBuffer,1);
    FMemory::Free(puVar6);
  }
  QueryPerformanceCounter(&LStack_480);
  if ((__real_3fa999999999999a <
       ((double)LStack_480.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) - dStack_98) &&
     (3 < (byte)LogClass._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
  }
  auStack_128._0_8_ = (FScriptContainerElement *)0x0;
  auStack_128._8_8_ = 0;
  puStack_108 = (uint *)0x0;
  uStack_100 = 0;
  uStack_fc = 0x80;
  uStack_f8 = 0xffffffff;
  iStack_f4 = 0;
  FStack_e8 = (ForElementType<FSetElementId>)0x0;
  iStack_e0 = 0;
  auStack_178._0_8_ = (FScriptContainerElement *)0x0;
  auStack_178._8_8_ = 0;
  puStack_158 = (uint *)0x0;
  uStack_150 = 0;
  uStack_14c = 0x80;
  uStack_148 = 0xffffffff;
  iStack_144 = 0;
  FStack_138 = (ForElementType<FSetElementId>)0x0;
  iStack_130 = 0;
  TStack_568.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_568.ObjectArray.ArrayNum = 0;
  TStack_568.ObjectArray.ArrayMax = 0;
  TStack_568.Index = 0xffffffff;
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar14 = UScriptStruct::StaticClass();
  GetObjectsOfClass(pUVar14,&TStack_568.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UScriptStruct>::Advance(&TStack_568);
  dVar5 = __real_3f50624dd2f1a9fc;
  do {
    while( true ) {
      lVar26 = (longlong)TStack_568.Index;
      uVar28 = 0;
      if ((TStack_568.Index < 0) || (TStack_568.ObjectArray.ArrayNum <= TStack_568.Index)) {
        if (TStack_568.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_568.ObjectArray.AllocatorInstance.Data);
        }
        if ((0 < iStack_584) && (3 < (byte)LogClass._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        }
        iStack_130 = 0;
        if (FStack_138 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FStack_138);
        }
        TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)auStack_178);
        iStack_e0 = 0;
        if (FStack_e8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FStack_e8);
        }
        TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)auStack_128);
        QueryPerformanceCounter(&LStack_420);
        dVar4 = ((double)LStack_420.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
                dStack_98;
        if (dStack_90 < dVar4) {
          dStack_418 = dVar4;
          UE::Core::Private::Function::CheckCallable(pcStack_88);
          pcVar2 = pcStack_88;
          plVar23 = alStack_78;
          if (plStack_60 != (longlong *)0x0) {
            plVar23 = plStack_60;
          }
          uVar19 = (**(code **)(*plVar23 + 8))();
          (*pcVar2)(uVar19,&dStack_418);
        }
        if (pcStack_88 != (code *)0x0) {
          plVar23 = alStack_78;
          if (plStack_60 != (longlong *)0x0) {
            plVar23 = plStack_60;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        return;
      }
      uVar9 = uVar28;
      if (TStack_568.Index < TStack_568.ObjectArray.ArrayNum) {
        uVar9 = (uint)~TStack_568.Index >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pppuStack_290 = (undefined ***)0x0;
      ppuStack_2a8 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::`75'::<lambda_3>,0,0>
                      ::_vftable_;
      pcStack_2b8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,void,double>
                    ::Call;
      this_01 = *(UScriptStruct **)(TStack_568.ObjectArray.AllocatorInstance.Data + lVar26 * 8);
      pUStack_570 = this_01;
      pUStack_2a0 = this_01;
      QueryPerformanceCounter(&LStack_478);
      dStack_d0 = dVar5;
      pcStack_c8 = pcStack_2b8;
      plStack_a0 = (longlong *)0x0;
      dStack_d8 = (double)LStack_478.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
      if (pcStack_2b8 != (code *)0x0) {
        pppuVar21 = &ppuStack_2a8;
        if (pppuStack_290 != (undefined ***)0x0) {
          pppuVar21 = pppuStack_290;
        }
        (*(code *)**pppuVar21)(SUB84(dStack_d8,0),alStack_b8);
        if (pcStack_2b8 != (code *)0x0) {
          pppuVar21 = &ppuStack_2a8;
          if (pppuStack_290 != (undefined ***)0x0) {
            pppuVar21 = pppuStack_290;
          }
          (*(code *)(*pppuVar21)[2])();
        }
      }
      if ((((this_01 == (UScriptStruct *)0x0) ||
           (pFVar15 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4)),
           ((uint)((ulonglong)(pFVar15->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) ||
          ((pIVar16 = UScriptStruct::GetCppStructOps(this_01), pIVar16 != (ICppStructOps *)0x0 &&
           (pIVar16 = UScriptStruct::GetCppStructOps(this_01),
           (pIVar16->FakeVPtr->Capabilities).HasZeroConstructor)))) || (this_01 == pUVar11)) break;
      if (auStack_128._8_4_ != iStack_f4) {
        TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                        *)auStack_128);
        bVar7 = (longlong)auStack_128._8_8_ < 0;
        auStack_128._8_8_ = auStack_128._8_8_ & 0xffffffff00000000;
        if (bVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)auStack_128,0,(int *)(auStack_128 + 0xc));
        }
        uStack_f8 = 0xffffffff;
        iStack_f4 = 0;
        uStack_100 = 0;
      }
      if (auStack_178._8_4_ != iStack_144) {
        TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                        *)auStack_178);
        bVar7 = (longlong)auStack_178._8_8_ < 0;
        auStack_178._8_8_ = auStack_178._8_8_ & 0xffffffff00000000;
        if (bVar7) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)auStack_178,0,(int *)(auStack_178 + 0xc));
        }
        uStack_148 = 0xffffffff;
        iStack_144 = 0;
        uStack_150 = 0;
      }
      FindUninitializedScriptStructMembers
                (this_01,CompilerZeroed,
                 (TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                  *)auStack_178);
      FindUninitializedScriptStructMembers
                (this_01,NoInit,
                 (TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                  *)auStack_128);
      if ((auStack_128._8_4_ == iStack_f4) && (auStack_178._8_4_ == iStack_144)) {
        `FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::
        FExecuteIfExceedsTimeLimit::~FExecuteIfExceedsTimeLimit(&dStack_d8);
        TObjectIterator<UScriptStruct>::Advance(&TStack_568);
      }
      else {
        pUVar17 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
        FStack_470 = (FName)pUVar17->_padding_;
        ::FName::ToString(&FStack_470,&FStack_3f0);
        pFStack_288 = FStack_3f0.Data.AllocatorInstance.Data;
        uStack_280 = FStack_3f0.Data.ArrayNum - 1;
        if (FStack_3f0.Data.ArrayNum == 0) {
          uStack_280 = uVar28;
        }
        uStack_240 = CONCAT44(uStack_27c,uStack_280);
        pFStack_248 = FStack_3f0.Data.AllocatorInstance.Data;
        FPackageName::GetShortFName((TStringView<wchar_t> *)auStack_468);
        if (FStack_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_3f0.Data.AllocatorInstance.Data);
        }
        FStack_4d8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_4d8.Name.Data.ArrayNum = 0;
        FStack_4d8.Name.Data.ArrayMax = 0;
        FStack_4d8.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_4d8.FilePath.Data.ArrayNum = 0;
        FStack_4d8.FilePath.Data.ArrayMax = 0;
        FStack_4d8.bIsLoaded = false;
        FStack_4d8.bIsGameModule = false;
        this_00 = FModuleManager::Get();
        bVar7 = FModuleManager::QueryModule(this_00,(FName)auStack_468,&FStack_4d8);
        if (bVar7) {
          pFVar18 = FPaths::ProjectDir(&FStack_228);
          pFVar18 = FPaths::ConvertRelativePathToFull(&FStack_238,pFVar18);
          iVar29 = (pFVar18->Data).ArrayNum;
          if (iVar29 == 0) {
            pwVar24 = L"";
          }
          else {
            pwVar24 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
            uVar28 = iVar29 - 1;
          }
          bVar7 = ::FString::StartsWith(&FStack_4d8.FilePath,pwVar24,uVar28,IgnoreCase);
          if (FStack_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_238.Data.AllocatorInstance.Data);
          }
          if (FStack_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_228.Data.AllocatorInstance.Data);
          }
          bVar7 = !bVar7;
          if (FStack_4d8.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_4d8.FilePath.Data.AllocatorInstance.Data);
          }
          if (FStack_4d8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_4d8.Name.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (FStack_4d8.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_4d8.FilePath.Data.AllocatorInstance.Data);
          }
          if (FStack_4d8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_4d8.Name.Data.AllocatorInstance.Data);
          }
          bVar7 = false;
        }
        uVar28 = uStack_150;
        TVar30 = Settings.ProjectVerbosity;
        if (bVar7) {
          TVar30 = Settings.EngineVerbosity;
        }
        uVar9 = (uint)TVar30;
        uVar10 = (uint)Settings.PointerVerbosity;
        if (TVar30 < Settings.PointerVerbosity) {
          uVar10 = uVar9;
        }
        iStack_550 = 0;
        pTStack_548 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_178 + 0x10);
        uStack_54c = 1;
        uStack_53c = 0;
        iStack_538 = 0;
        if (uStack_150 != 0) {
          puVar22 = (uint *)(auStack_178 + 0x10);
          if (puStack_158 != (uint *)0x0) {
            puVar22 = puStack_158;
          }
          uVar27 = *puVar22;
          while (uVar27 == 0) {
            iStack_538 = iStack_538 + 0x20;
            lVar26 = (longlong)iStack_550;
            iStack_550 = iStack_550 + 1;
            if ((int)(((int)(uStack_150 - 1) >> 0x1f & 0x1fU) + (uStack_150 - 1)) >> 5 < iStack_550)
            {
              uStack_53c = uStack_150;
              goto LAB_141f70673;
            }
            uVar27 = puVar22[lVar26 + 1];
          }
          uStack_54c = -uVar27 & uVar27;
          uVar1 = (ulonglong)uStack_54c * 2 + 1;
          lVar26 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iStack_360 = (int)lVar26;
          uStack_53c = iStack_538 + -1 + iStack_360;
          if ((int)uStack_150 < (int)uStack_53c) {
            uStack_53c = uStack_150;
          }
        }
LAB_141f70673:
        uStack_540 = 0xffffffff;
        uStack_508 = CONCAT44(uStack_54c,iStack_550);
        plStack_510 = (longlong *)auStack_178;
        uStack_4f4 = uStack_53c;
        uStack_4f8 = 0xffffffff;
        uStack_4ec = uStack_534;
        iStack_4f0 = iStack_538;
        pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_178 + 0x10);
        bVar20 = (byte)uStack_150 & 0x1f;
        iStack_4e8 = auStack_178._8_4_ - iStack_144;
        TStack_4b0._padding_._0_4_ = (int)uStack_150 >> 5;
        TStack_4b0._padding_._4_4_ = 1 << bVar20;
        TStack_4b0.UnvisitedBitMask = -1 << bVar20;
        TStack_4b0.BaseBitIndex = uStack_150 & 0xffffffe0;
        TStack_4b0.CurrentBitIndex = uStack_150;
        uStack_320 = CONCAT44(uStack_4e4,iStack_4e8);
        uStack_57c = uVar9;
        uStack_578 = uVar10;
        pTStack_500 = pTStack_548;
        TStack_4b0.Array = pTVar32;
        plStack_348 = plStack_510;
        TStack_340._padding_ = uStack_508;
        TStack_340.Array = pTStack_548;
        TStack_340._16_8_ = _uStack_4f8;
        TStack_340._24_8_ = _iStack_4f0;
        if (((int)uStack_150 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar28 != uStack_150) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b0);
          pTVar32 = TStack_4b0.Array;
        }
        while( true ) {
          plVar23 = plStack_348;
          TVar30 = (Type)uVar9;
          if ((int)plStack_348[1] - *(int *)((longlong)plStack_348 + 0x34) != (int)uStack_320) {
            uStack_588 = 0;
            `TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_588);
          }
          uVar28 = uStack_100;
          if (((TStack_340.CurrentBitIndex == TStack_4b0.CurrentBitIndex) &&
              (TStack_340.Array == pTVar32)) && (plVar23 == (longlong *)auStack_178)) break;
          iStack_584 = iStack_584 + 1;
          pFVar13 = *(FProperty **)(*plVar23 + (longlong)TStack_340.CurrentBitIndex * 0x10);
          uVar1 = *(ulonglong *)(pFVar13->_padding_ + 0x18);
          if ((uVar1 & 0x4000000) != 0) {
            TVar30 = (Type)uVar10;
          }
          uStack_580 = (uint)pFVar31 + 1;
          if ((uVar1 & 0x4000000) == 0) {
            uStack_580 = (uint)pFVar31;
          }
          pUVar17 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
          FStack_460 = (FName)pUVar17->_padding_;
          ::FName::ToString(&FStack_460,&FStack_3e0);
          pFStack_278 = FStack_3e0.Data.AllocatorInstance.Data;
          iStack_270 = FStack_3e0.Data.ArrayNum + -1;
          if (FStack_3e0.Data.ArrayNum == 0) {
            iStack_270 = 0;
          }
          TStack_218._12_4_ = uStack_26c;
          TStack_218.Size = iStack_270;
          TStack_218.DataPtr = (wchar_t *)FStack_3e0.Data.AllocatorInstance.Data;
          FPackageName::GetShortName(&FStack_208,&TStack_218);
          ::FString::PrintfImpl(&FStack_3b0,L" Module:%s");
          if (FStack_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_208.Data.AllocatorInstance.Data);
          }
          if (FStack_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3e0.Data.AllocatorInstance.Data);
          }
          FProperty::GetNameCPP(pFVar13,&FStack_1f8);
          pUVar11 = pUStack_570;
          FStack_458 = (FName)pUStack_570->_padding_;
          ::FName::ToString(&FStack_458,&FStack_3c0);
          (**(code **)(pUVar11->_padding_ + 0x318))(pUVar11);
          ::FName::ToString((FName *)pFVar13->_padding_,&FStack_3d0);
          FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x1131,(FName *)&LogClass.field_0x4,TVar30,L"%s %s%s::%s %s.%s");
          if (FStack_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3d0.Data.AllocatorInstance.Data);
          }
          if (FStack_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3c0.Data.AllocatorInstance.Data);
          }
          if (FStack_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_1f8.Data.AllocatorInstance.Data);
          }
          if (FStack_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3b0.Data.AllocatorInstance.Data);
          }
          TStack_340.UnvisitedBitMask = TStack_340.UnvisitedBitMask & ~TStack_340._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_340);
          pFVar31 = (FProperty *)(ulonglong)uStack_580;
          this_01 = pUStack_570;
          uVar9 = uStack_57c;
          uVar10 = uStack_578;
        }
        iVar29 = 0;
        uVar10 = 1;
        iStack_4f0 = 0;
        uStack_4f4 = 0;
        if (uStack_100 != 0) {
          puVar22 = (uint *)(auStack_128 + 0x10);
          if (puStack_108 != (uint *)0x0) {
            puVar22 = puStack_108;
          }
          uVar27 = *puVar22;
          iStack_4f0 = 0;
          while (uVar27 == 0) {
            lVar26 = (longlong)iVar29;
            iStack_4f0 = iStack_4f0 + 0x20;
            iVar29 = iVar29 + 1;
            uStack_4f4 = uStack_100;
            if ((int)(((int)(uStack_100 - 1) >> 0x1f & 0x1fU) + (uStack_100 - 1)) >> 5 < iVar29)
            goto LAB_141f70a73;
            uVar27 = puVar22[lVar26 + 1];
          }
          uVar10 = -uVar27 & uVar27;
          uVar1 = (ulonglong)uVar10 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iStack_35c = (int)lVar26;
          uStack_4f4 = iStack_4f0 + -1 + iStack_35c;
          if ((int)uStack_100 < (int)uStack_4f4) {
            uStack_4f4 = uStack_100;
          }
        }
LAB_141f70a73:
        plStack_510 = (longlong *)auStack_128;
        pTStack_500 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_128 + 0x10);
        uVar27 = uStack_100 & 0xffffffe0;
        iStack_4e8 = auStack_128._8_4_ - iStack_f4;
        uStack_508 = CONCAT44(uVar10,iVar29);
        uStack_4f8 = 0xffffffff;
        uStack_4ec = uStack_17c;
        TStack_310._padding_ = uStack_508;
        iVar29 = (int)uStack_100 >> 5;
        uStack_2f0 = CONCAT44(uStack_4e4,iStack_4e8);
        bVar20 = (byte)uStack_100;
        TStack_310.UnvisitedBitMask = 0xffffffff;
        TStack_310.CurrentBitIndex = uStack_4f4;
        TStack_310.BaseBitIndex = iStack_4f0;
        TStack_310._28_4_ = uStack_17c;
        plStack_318 = plStack_510;
        TStack_310.Array = pTStack_500;
        if (((int)uStack_100 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar28 != uStack_100) {
          puVar22 = (uint *)(auStack_128 + 0x10);
          if (puStack_108 != (uint *)0x0) {
            puVar22 = puStack_108;
          }
          uVar28 = -1 << (bVar20 & 0x1f) & puVar22[iVar29];
          while (uVar28 == 0) {
            lVar26 = (longlong)iVar29;
            uVar27 = uVar27 + 0x20;
            iVar29 = iVar29 + 1;
            uVar28 = uStack_100;
            if ((int)(((int)(uStack_100 - 1) >> 0x1f & 0x1fU) + (uStack_100 - 1)) >> 5 < iVar29)
            goto LAB_141f70b93;
            uVar28 = puVar22[lVar26 + 1];
          }
          uVar1 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar26 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iStack_358 = (int)lVar26;
          uVar28 = (uVar27 - 1) + iStack_358;
          if ((int)uStack_100 < (int)uVar28) {
            uVar28 = uStack_100;
          }
        }
LAB_141f70b93:
        while( true ) {
          plVar23 = plStack_318;
          if ((int)plStack_318[1] - *(int *)((longlong)plStack_318 + 0x34) != (int)uStack_2f0) {
            auStack_587[0] = 0;
            `TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_587);
          }
          pUVar11 = pUStack_570;
          if (((TStack_310.CurrentBitIndex == uVar28) &&
              (TStack_310.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_128 + 0x10))) &&
             (plVar23 == (longlong *)auStack_128)) break;
          pFVar13 = *(FProperty **)(*plVar23 + (longlong)TStack_310.CurrentBitIndex * 0x10);
          uVar10 = ((uint)((ulonglong)pFVar13 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar13 >> 4)) *
                   -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          if (auStack_178._8_4_ != iStack_144) {
            FVar25 = (ForElementType<FSetElementId>)auStack_140;
            if (FStack_138 != (ForElementType<FSetElementId>)0x0) {
              FVar25 = FStack_138;
            }
            for (iVar29 = *(int *)((longlong)FVar25 +
                                  (ulonglong)(iStack_130 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
                iVar29 != -1; iVar29 = *(int *)(auStack_178._0_8_ + (longlong)iVar29 * 0x10 + 8)) {
              if (*(FProperty **)(auStack_178._0_8_ + (longlong)iVar29 * 0x10) == pFVar13)
              goto LAB_141f70ea9;
            }
          }
          iStack_584 = iStack_584 + 1;
          uVar1 = *(ulonglong *)(pFVar13->_padding_ + 0x18);
          TVar30 = (Type)uVar9;
          if ((uVar1 & 0x4000000) != 0) {
            TVar30 = (Type)uStack_578;
          }
          uStack_580 = (uint)pFVar31 + 1;
          if ((uVar1 & 0x4000000) == 0) {
            uStack_580 = (uint)pFVar31;
          }
          pUVar17 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUStack_570);
          FStack_450 = (FName)pUVar17->_padding_;
          ::FName::ToString(&FStack_450,&FStack_3a0);
          pFStack_268 = FStack_3a0.Data.AllocatorInstance.Data;
          iStack_260 = FStack_3a0.Data.ArrayNum + -1;
          if (FStack_3a0.Data.ArrayNum == 0) {
            iStack_260 = 0;
          }
          TStack_1e8._12_4_ = uStack_25c;
          TStack_1e8.Size = iStack_260;
          TStack_1e8.DataPtr = (wchar_t *)FStack_3a0.Data.AllocatorInstance.Data;
          FPackageName::GetShortName(aFStack_1a8,&TStack_1e8);
          ::FString::PrintfImpl(&FStack_370,L" Module:%s");
          if (aFStack_1a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(aFStack_1a8[0].Data.AllocatorInstance.Data);
          }
          if (FStack_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3a0.Data.AllocatorInstance.Data);
          }
          FProperty::GetNameCPP(pFVar13,&FStack_1d0);
          FStack_448 = (FName)pUVar11->_padding_;
          ::FName::ToString(&FStack_448,&FStack_380);
          (**(code **)(pUVar11->_padding_ + 0x318))(pUVar11);
          ::FName::ToString((FName *)pFVar13->_padding_,&FStack_390);
          FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x1131,(FName *)&LogClass.field_0x4,TVar30,L"%s %s%s::%s %s.%s");
          if (FStack_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_390.Data.AllocatorInstance.Data);
          }
          if (FStack_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_380.Data.AllocatorInstance.Data);
          }
          if (FStack_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_1d0.Data.AllocatorInstance.Data);
          }
          if (FStack_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_370.Data.AllocatorInstance.Data);
          }
          pFVar31 = (FProperty *)(ulonglong)uStack_580;
          uVar9 = uStack_57c;
LAB_141f70ea9:
          TStack_310.UnvisitedBitMask = TStack_310.UnvisitedBitMask & ~TStack_310._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_310);
        }
        QueryPerformanceCounter(&LStack_440);
        dVar3 = ((double)LStack_440.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
                dStack_d8;
        if (dStack_d0 < dVar3) {
          dStack_438 = dVar3;
          UE::Core::Private::Function::CheckCallable(pcStack_c8);
          pcVar2 = pcStack_c8;
          plVar23 = alStack_b8;
          if (plStack_a0 != (longlong *)0x0) {
            plVar23 = plStack_a0;
          }
          uVar19 = (**(code **)(*plVar23 + 8))();
          (*pcVar2)(uVar19,&dStack_438);
        }
        pUVar11 = pUStack_4e0;
        if (pcStack_c8 != (code *)0x0) {
          plVar23 = alStack_b8;
          if (plStack_a0 != (longlong *)0x0) {
            plVar23 = plStack_a0;
          }
          (**(code **)(*plVar23 + 0x10))();
          pUVar11 = pUStack_4e0;
        }
LAB_141f70f7b:
        TObjectIterator<UScriptStruct>::Advance(&TStack_568);
      }
    }
    QueryPerformanceCounter(&LStack_430);
    dVar3 = ((double)LStack_430.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
            dStack_d8;
    if (dStack_d0 < dVar3) {
      dStack_428 = dVar3;
      UE::Core::Private::Function::CheckCallable(pcStack_c8);
      pcVar2 = pcStack_c8;
      plVar23 = alStack_b8;
      if (plStack_a0 != (longlong *)0x0) {
        plVar23 = plStack_a0;
      }
      uVar19 = (**(code **)(*plVar23 + 8))();
      (*pcVar2)(uVar19,&dStack_428);
    }
    if (pcStack_c8 == (code *)0x0) goto LAB_141f70f7b;
    plVar23 = alStack_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar23 = plStack_a0;
    }
    (**(code **)(*plVar23 + 0x10))();
    TObjectIterator<UScriptStruct>::Advance(&TStack_568);
  } while( true );
}

// operator<<<UField_*,TSizedDefaultAllocator<32>_> @ 141f54b50

FArchive * __cdecl
operator<<<UField_*,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UField_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            (**(code **)(*(longlong *)param_1 + 0x168))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<UField_*,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x168))(param_1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> @ 141f54b60

FArchive * __cdecl
operator<<<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            (**(code **)(*(longlong *)param_1 + 0x150))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator> @ 141f54b70

FArchive * __cdecl
operator<<<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_141f5b02e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_141f5b02e:
  uVar12 = (ulonglong)uVar11;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar13;
      uVar9 = uVar7;
      while (uVar11 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_141f5b10b;
        uVar11 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_141f5b10b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar8 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FImplementedInterface,TSizedDefaultAllocator<32>_> @ 141f54b80

FArchive * __cdecl
operator<<<FImplementedInterface,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FImplementedInterface,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FImplementedInterface *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FImplementedInterface *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FImplementedInterface,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FImplementedInterface *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FImplementedInterface,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> @ 141f54b90

FArchive * __cdecl
operator<<<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FPropertyBagPropertyDesc *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FPropertyBagPropertyDesc *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
          ;
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FPropertyBagPropertyDesc *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<FPropertyBagPropertyDesc,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FPropertyBagPropertyDescMetaData,TSizedDefaultAllocator<32>_> @ 141f54ba0

FArchive * __cdecl
operator<<<FPropertyBagPropertyDescMetaData,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FPropertyBagPropertyDescMetaData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FPropertyBagPropertyDescMetaData,int>
                ((FPropertyBagPropertyDescMetaData *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18;
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              operator<<(param_1,(FString *)(pFVar2 + 8));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FPropertyBagPropertyDescMetaData,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
              DefaultConstructItems<FPropertyBagPropertyDescMetaData,int>(pFVar2,1);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              operator<<(param_1,(FString *)(pFVar2 + 8));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 141f54bb0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x18,(longlong)*(int *)&param_2->field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_141f54ebc;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_141f54ebc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar8 = *(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x18;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar8);
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,lVar8 + 8);
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar10 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar7 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x18);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar11 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          puVar11 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar11);
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,puVar11 + 1);
        uVar10 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FAnsiString,0> @ 141f54f50

void __cdecl operator<<<FAnsiString,0>(FStructuredArchiveSlot param_1,FAnsiString *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  operator<<(pFVar1,param_2);
  return;
}

// operator<<<FUtf8String,0> @ 141f54f80

void __cdecl operator<<<FUtf8String,0>(FStructuredArchiveSlot param_1,FUtf8String *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  operator<<(pFVar1,param_2);
  return;
}

// operator<<<UObject> @ 141f54fb0

FArchive * __cdecl operator<<<UObject>(FArchive *param_1,TSoftObjectPtr<UObject> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x148))();
  return param_1;
}

// operator<<<UObject,FWeakObjectPtr> @ 141f54fe0

FArchive * __cdecl
operator<<<UObject,FWeakObjectPtr>
          (FArchive *param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x138))();
  return param_1;
}

// operator()<`UE::Net::Private::ValidateNetDeltaSerializeProperties'::__l6::<lambda_1>_> @ 141f55010

void __thiscall
`UE::Net::Private::ValidateNetDeltaSerializeProperties'::__l6::<lambda_1>::
operator()<_UE::Net::Private::ValidateNetDeltaSerializeProperties_::__l6::<lambda_1>_>
          (void *this,<lambda_1> *param_1,FProperty *param_2,ECheckStructType param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ForElementType<UStruct_const_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UStruct_const_*> FVar7;
  undefined8 *puVar8;
  ForElementType<UStruct_const_*> FVar9;
  FStructProperty *pFVar10;
  FStructProperty *pFVar12;
  TObjectPtr<UScriptStruct> *pTVar13;
  bool bVar14;
  undefined8 local_res8;
  TObjectPtr<UScriptStruct>_u_0 local_58 [2];
  <lambda_1> local_48;
  TObjectPtr<UScriptStruct>_u_0 local_38;
  FStructProperty *local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  FStructProperty *pFVar11;
  
  local_res8 = *(undefined8 *)this;
  pFVar11 = (FStructProperty *)0x0;
  pFVar10 = (FStructProperty *)0x0;
  bVar5 = false;
  pFVar12 = pFVar11;
  if ((int)param_2->PropertyFlags < 0) {
LAB_141f550b1:
    bVar14 = false;
    if ((pFVar12 != (FStructProperty *)0x0) && (param_3 == Recursive)) {
      puVar2 = *(undefined8 **)((longlong)this + 8);
      pTVar13 = &pFVar12->Struct;
      puVar8 = (undefined8 *)puVar2[0x10];
      if ((undefined8 *)puVar2[0x10] == (undefined8 *)0x0) {
        puVar8 = puVar2;
      }
      puVar2 = puVar8 + *(int *)(puVar2 + 0x11);
      if (puVar8 != puVar2) {
        do {
          if ((pTVar13->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
            bVar14 = (UScriptStruct *)*puVar8 == (UScriptStruct *)0x0;
          }
          else {
            bVar14 = (pTVar13->field0_0x0).DebugPtr == (UScriptStruct *)*puVar8;
          }
          if (bVar14) {
            bVar14 = false;
            goto LAB_141f5513b;
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar2);
      }
      goto LAB_141f5514b;
    }
  }
  else {
    uVar1 = *(ulonglong *)(param_2->_padding_ + 0x18);
    if (((uVar1 >> 0x14 & 1) == 0) ||
       (pFVar12 = (FStructProperty *)param_2, param_2 == (FProperty *)0x0)) {
      pFVar12 = pFVar11;
      if (((uVar1 >> 0x15 & 1) != 0) &&
         (((param_2 != (FProperty *)0x0 &&
           (pFVar11 = (FStructProperty *)param_2[1]._padding_, pFVar12 = pFVar10,
           pFVar11 != (FStructProperty *)0x0)) &&
          ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x14 & 1) != 0)))) {
        if ((((pFVar11->Struct).field0_0x0.DebugPtr)->StructFlags >> 0x14 & 1) == 0) {
          bVar5 = true;
          pFVar12 = pFVar11;
          goto LAB_141f550ff;
        }
        ``UE::Net::Private::ValidateNetDeltaSerializeProperties'::__l6::<lambda_1>::
        operator()<`UE::Net::Private::ValidateNetDeltaSerializeProperties'::__l6::<lambda_1>_>'::
        __l2::<lambda_1>::operator()(&local_res8,pFVar11);
      }
      goto LAB_141f550b1;
    }
LAB_141f550ff:
    if ((param_3 != TopLevel) ||
       ((!bVar5 && ((((pFVar12->Struct).field0_0x0.DebugPtr)->StructFlags >> 0x14 & 1) != 0))))
    goto LAB_141f550b1;
    bVar14 = true;
  }
LAB_141f5513b:
  pTVar13 = &pFVar12->Struct;
  if ((!bVar14) && (!bVar5)) {
    return;
  }
LAB_141f5514b:
  FVar9 = *(ForElementType<UStruct_const_*> *)((longlong)this + 8);
  local_58[0].DebugPtr = *(UScriptStruct **)&pTVar13->field0_0x0;
  FVar3 = *(ForElementType<UStruct_const_*> *)((longlong)FVar9 + 0x80);
  FVar7 = FVar3;
  if (FVar3 == (ForElementType<UStruct_const_*>)0x0) {
    FVar7 = FVar9;
  }
  if ((ulonglong)FVar7 <= local_58) {
    FVar7 = FVar9;
    if (FVar3 != (ForElementType<UStruct_const_*>)0x0) {
      FVar7 = FVar3;
    }
    if ((local_58 <
         (TObjectPtr<UScriptStruct>_u_0 *)
         ((longlong)FVar7 + (longlong)*(int *)((longlong)FVar9 + 0x8c) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar9 + 0x88);
  if (iVar6 == *(int *)((longlong)FVar9 + 0x8c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UStruct_const_*>_>
                      (0x808,(ForElementType<UStruct_const_*> *)FVar9,
                       (int *)((longlong)FVar9 + 0x8c));
  }
  *(int *)((longlong)FVar9 + 0x88) = iVar6 + 1;
  if (*(ForElementType<UStruct_const_*> *)((longlong)FVar9 + 0x80) !=
      (ForElementType<UStruct_const_*>)0x0) {
    FVar9 = *(ForElementType<UStruct_const_*> *)((longlong)FVar9 + 0x80);
  }
  ((TObjectPtr<UScriptStruct>_u_0 *)((longlong)FVar9 + (longlong)iVar6 * 8))->DebugPtr =
       (UScriptStruct *)local_58[0];
  local_38.DebugPtr = (pTVar13->field0_0x0).DebugPtr;
  if (local_38.DebugPtr == (UScriptStruct *)0x0) {
    local_30 = (FStructProperty *)0x0;
  }
  else {
    local_30 = (FStructProperty *)(local_38.DebugPtr)->_padding_;
  }
  local_28 = 0xffffffff;
  local_24 = 0x101;
  local_22 = 0;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_38.ObjectPtr);
  pFVar12 = local_30;
  while (pFVar12 != (FStructProperty *)0x0) {
    if ((-1 < (int)pFVar12->_padding_) &&
       (((uVar1 = *(ulonglong *)(pFVar12->_padding_ + 0x18), (uVar1 >> 0x14 & 1) != 0 &&
         (pFVar10 = pFVar12, pFVar12 != (FStructProperty *)0x0)) ||
        (((uVar1 >> 0x15 & 1) != 0 &&
         (((pFVar12 != (FStructProperty *)0x0 &&
           (pFVar10 = (FStructProperty *)pFVar12[1]._padding_, pFVar10 != (FStructProperty *)0x0))
          && ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x14 & 1) != 0)))))))) {
      local_30 = pFVar12;
      if ((((pFVar10->Struct).field0_0x0.DebugPtr)->StructFlags >> 0x14 & 1) == 0) {
        local_48.BaseProp = param_1->BaseProp;
        local_48.RecursiveStructList = param_1->RecursiveStructList;
        operator()<_UE::Net::Private::ValidateNetDeltaSerializeProperties_::__l6::<lambda_1>_>
                  (param_1,&local_48,(FProperty *)pFVar10,Recursive);
      }
      else {
        ``UE::Net::Private::ValidateNetDeltaSerializeProperties'::__l6::<lambda_1>::
        operator()<`UE::Net::Private::ValidateNetDeltaSerializeProperties'::__l6::<lambda_1>_>'::
        __l2::<lambda_1>::operator()(&local_res8,pFVar10);
      }
    }
    local_30 = (FStructProperty *)pFVar12->_padding_;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_38.ObjectPtr);
    pFVar12 = local_30;
  }
  return;
}

// AddStructReferencedObjectsOrNot<FConstSharedStruct> @ 141f55370

void __cdecl
AddStructReferencedObjectsOrNot<FConstSharedStruct>(void *param_1,FReferenceCollector *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  longlong lVar2;
  
  pTVar1 = *(TObjectPtr<UScriptStruct_const_>_u_0 **)param_1;
  if ((pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) &&
     (pTVar1->DebugPtr != (UScriptStruct *)0x0)) {
    lVar2 = (longlong)*(short *)((longlong)pTVar1->DebugPtr + 0x5c);
    FReferenceCollector::AddReferencedObjects
              (param_2,(TObjectPtr<UScriptStruct_const_> *)&pTVar1->ObjectPtr,
               (void *)((longlong)pTVar1 + lVar2 + 7 & -lVar2),(UObject *)0x0,(FProperty *)0x0);
  }
  return;
}

// AddStructReferencedObjectsOrNot<FInstancedPropertyBag> @ 141f553c0

void __cdecl
AddStructReferencedObjectsOrNot<FInstancedPropertyBag>(void *param_1,FReferenceCollector *param_2)

{
  return;
}

// AddStructReferencedObjectsOrNot<FInstancedStruct> @ 141f553d0

void __cdecl
AddStructReferencedObjectsOrNot<FInstancedStruct>(void *param_1,FReferenceCollector *param_2)

{
  if (*(longlong *)param_1 != 0) {
    (**(code **)(param_2->_padding_ + 0x88))(param_2,param_1,0);
    FReferenceCollector::AddPropertyReferencesWithStructARO
              (param_2,*(UScriptStruct **)param_1,*(void **)((longlong)param_1 + 8),(UObject *)0x0);
  }
  return;
}

// AddStructReferencedObjectsOrNot<FInstancedStructContainer> @ 141f55420

void __cdecl
AddStructReferencedObjectsOrNot<FInstancedStructContainer>
          (void *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      if (((*(int *)((longlong)param_1 + 0xc) < 1) || (*(int *)((longlong)param_1 + 0xc) <= iVar4))
         && (bVar3 = FDebug::CheckVerifyFailedImpl2
                               ("NumItems > 0 && Index < NumItems",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                ,0x100,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = (longlong)(*(int *)((longlong)param_1 + 8) - iVar5) + *(longlong *)param_1;
      if (*(longlong *)(lVar6 + -0x10) != 0) {
        (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar6 + -0x10,0);
        FReferenceCollector::AddPropertyReferencesWithStructARO
                  (param_2,*(UScriptStruct **)(lVar6 + -0x10),
                   (void *)((longlong)*(int *)(lVar6 + -8) + *(longlong *)param_1),(UObject *)0x0);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < iVar1);
  }
  return;
}

// AddStructReferencedObjectsOrNot<FSharedStruct> @ 141f554f0

void __cdecl
AddStructReferencedObjectsOrNot<FSharedStruct>(void *param_1,FReferenceCollector *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  longlong lVar2;
  
  pTVar1 = *(TObjectPtr<UScriptStruct_const_>_u_0 **)param_1;
  if ((pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) &&
     (pTVar1->DebugPtr != (UScriptStruct *)0x0)) {
    lVar2 = (longlong)*(short *)((longlong)pTVar1->DebugPtr + 0x5c);
    FReferenceCollector::AddReferencedObjects
              (param_2,(TObjectPtr<UScriptStruct_const_> *)&pTVar1->ObjectPtr,
               (void *)((longlong)pTVar1 + lVar2 + 7 & -lVar2),(UObject *)0x0,(FProperty *)0x0);
  }
  return;
}

// Cast<UClass_const_,UObject_const_> @ 141f55540

UClass * __cdecl Cast<UClass_const_,UObject_const_>(TObjectPtr<UObject_const_> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((param_1->field0_0x0).DebugPtr != (UObject *)0x0) {
    pUVar2 = UClass::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if (bVar1) {
      return (UClass *)(param_1->field0_0x0).DebugPtr;
    }
  }
  return (UClass *)0x0;
}

// Cast<UClass,UObject_const_> @ 141f55580

UClass * __cdecl Cast<UClass,UObject_const_>(TObjectPtr<UObject_const_> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((param_1->field0_0x0).DebugPtr != (UObject *)0x0) {
    pUVar2 = UClass::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if (bVar1) {
      return (UClass *)(param_1->field0_0x0).DebugPtr;
    }
  }
  return (UClass *)0x0;
}

// CastChecked<UClass,UObject_const_> @ 141f555c0

UClass * __cdecl CastChecked<UClass,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UClass>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UClass::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UClass *)param_1;
  }
  pFVar3 = GetTypeName<UClass>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UScriptStruct,UStruct> @ 141f55680

UScriptStruct * __cdecl CastChecked<UScriptStruct,UStruct>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStruct *)0x0) {
    pFVar3 = GetTypeName<UScriptStruct>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UScriptStruct::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UScriptStruct *)param_1;
  }
  pFVar3 = GetTypeName<UScriptStruct>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStruct>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UStruct,UStruct> @ 141f55740

UStruct * __cdecl CastChecked<UStruct,UStruct>(UStruct *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (UStruct *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<UStruct>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CastChecked<UUserDefinedStruct,UObject> @ 141f55780

UUserDefinedStruct * __cdecl CastChecked<UUserDefinedStruct,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UUserDefinedStruct>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UUserDefinedStruct::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UUserDefinedStruct *)param_1;
  }
  pFVar3 = GetTypeName<UUserDefinedStruct>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FImplementedInterface,FImplementedInterface,int> @ 141f55840

void __cdecl
ConstructItems<FImplementedInterface,FImplementedInterface,int>
          (void *param_1,FImplementedInterface *param_2,int param_3)

{
  bool bVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  bool *pbVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined1 *)((longlong)param_1 + 0xc);
    pbVar4 = &param_2->bImplementedByK2;
    do {
      pUVar2 = *(UObject **)(puVar3 + (longlong)param_2 + (-0xc - (longlong)param_1));
      *(UObject **)(puVar3 + -0xc) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(int *)(puVar3 + -4) = *(int *)(pbVar4 + -4);
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 0x10;
      *puVar3 = bVar1;
      puVar3 = puVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int> @ 141f558c0

void __cdecl
ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
          (void *param_1,FPropertyBagPropertyDesc *param_2,int param_3)

{
  FName *pFVar1;
  FName FVar2;
  FName *pFVar3;
  FName *pFVar4;
  
  if (param_3 != 0) {
    pFVar3 = (FName *)((longlong)param_1 + 0x18);
    pFVar4 = &param_2->Name;
    do {
      FVar2 = *(FName *)((longlong)pFVar3 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      pFVar3[-3] = FVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar2);
      }
      FVar2 = pFVar4[-1];
      pFVar3[-2] = pFVar4[-2];
      pFVar3[-1] = FVar2;
      *pFVar3 = *pFVar4;
      *(char *)&pFVar3[1].ComparisonIndex.Value = (char)pFVar4[1].ComparisonIndex.Value;
      *(undefined2 *)((longlong)&pFVar3[1].ComparisonIndex.Value + 1) =
           *(undefined2 *)((longlong)&pFVar4[1].ComparisonIndex.Value + 1);
      *(undefined1 *)((longlong)&pFVar3[1].ComparisonIndex.Value + 3) =
           *(undefined1 *)((longlong)&pFVar4[1].ComparisonIndex.Value + 3);
      pFVar3[2] = pFVar4[2];
      pFVar3[3] = pFVar4[3];
      pFVar1 = pFVar4 + 4;
      pFVar4 = pFVar4 + 8;
      pFVar3[4].ComparisonIndex.Value = (pFVar1->ComparisonIndex).Value;
      pFVar3 = pFVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructUClassNoInitHelper<UClass,`GetPrivateStaticClassBody'::__l2::<lambda_1>_> @ 141f55970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UECodeGen_Private::
ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
          (wchar_t *param_1,wchar_t *param_2,UClass **param_3,_func___cdecl_void *param_4,
          uint param_5,uint param_6,EClassFlags param_7,EClassCastFlags param_8,wchar_t *param_9,
          _func___cdecl_void_FObjectInitializer_ptr *param_10,
          _func___cdecl_UObject_ptr_FVTableHelper_ptr *param_11,
          FUObjectCppClassStaticFunctions *param_12,_func___cdecl_UClass_ptr *param_13,
          _func___cdecl_UClass_ptr *param_14,<lambda_1> *param_15)

{
  code *pcVar1;
  bool bVar2;
  EActiveReloadType EVar3;
  UPackage *pUVar4;
  size_t sVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FStaticBasicLogRecord *pFVar9;
  int iVar10;
  TStringView<wchar_t> local_28;
  
  bVar2 = IsReloadActive();
  iVar10 = 0;
  if ((bVar2) && (EVar3 = GetActiveReloadType(), EVar3 != Reinstancing)) {
    pUVar4 = FindPackage((UObject *)0x0,param_1);
    if (pUVar4 == (UPackage *)0x0) {
      if (4 < (byte)LogClass._0_1_) {
        pFVar9 = &::LOG_Static;
LAB_141f55acf:
        UE::Logging::Private::BasicLog<5>(pFVar9,(FLogCategoryBase *)&LogClass);
      }
    }
    else {
      local_28.DataPtr = param_2;
      if (param_2 != (wchar_t *)0x0) {
        sVar5 = wcslen(param_2);
        iVar10 = (int)sVar5;
      }
      local_28.Size = iVar10;
      pUVar6 = UClass::GetPrivateStaticClass();
      pUVar6 = (UClass *)StaticFindObject(pUVar6,(UObject *)pUVar4,&local_28,None);
      *param_3 = pUVar6;
      if (pUVar6 != (UClass *)0x0) {
        pUVar7 = (*param_14)();
        pUVar8 = (*param_13)();
        local_28.DataPtr = (wchar_t *)param_12->AddReferencedObjects;
        bVar2 = UClass::HotReloadPrivateStaticClass
                          (pUVar6,param_5,param_7,param_8,param_9,param_10,param_11,
                           (FUObjectCppClassStaticFunctions *)&local_28,pUVar8,pUVar7);
        if (!bVar2) {
          return;
        }
        goto LAB_141f55d42;
      }
      if (4 < (byte)LogClass._0_1_) {
        pFVar9 = &::LOG_Static;
        goto LAB_141f55acf;
      }
    }
  }
  pUVar6 = (UClass *)FUObjectAllocator::AllocateUObject(&GUObjectAllocator,0x208,8,true);
  ::FName::FName((FName *)&local_28,param_2);
  UStruct::UStruct((UStruct *)pUVar6,EC_StaticConstructor,param_5,param_6,
                   RF_MarkAsRootSet|RF_Transient|RF_MarkAsNative|RF_Standalone|RF_Public);
  pUVar6->_padding_ = (longlong)&___7UClass__6B_;
  pUVar6->ClassConstructor = param_10;
  pUVar6->ClassVTableHelperCtorCaller = param_11;
  (pUVar6->CppClassStaticFunctions).AddReferencedObjects = param_12->AddReferencedObjects;
  pUVar6->ClassFlags = param_7 | CLASS_Native;
  pUVar6->ClassCastFlags = param_8;
  pUVar6->ClassUnique = 0;
  pUVar6->FirstOwnedClassRep = 0;
  pUVar6->bCooked = false;
  pUVar6->bLayoutChanging = false;
  (pUVar6->ClassWithin).field0_0x0.DebugPtr = (UClass *)0x0;
  ::FName::FName(&pUVar6->ClassConfigName,param_9);
  (pUVar6->ClassReps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pUVar6->ClassReps).ArrayNum = 0;
  (pUVar6->ClassReps).ArrayMax = 0;
  (pUVar6->NetFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pUVar6->NetFields).ArrayNum = 0;
  (pUVar6->NetFields).ArrayMax = 0;
  (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
  pUVar6->SparseClassData = (void *)0x0;
  (pUVar6->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  pUVar6->bNeedsDynamicSubobjectInstancing = false;
  *(undefined8 *)&pUVar6->FuncMap = 0;
  *(undefined8 *)&(pUVar6->FuncMap).field_0x8 = 0;
  *(undefined8 *)&(pUVar6->FuncMap).field_0x20 = 0;
  *(undefined4 *)&(pUVar6->FuncMap).field_0x28 = 0;
  *(undefined4 *)&(pUVar6->FuncMap).field_0x2c = 0x80;
  *(undefined4 *)&(pUVar6->FuncMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pUVar6->FuncMap).field_0x34 = 0;
  *(undefined8 *)&(pUVar6->FuncMap).field_0x40 = 0;
  *(undefined4 *)&(pUVar6->FuncMap).field_0x48 = 0;
  (pUVar6->FuncMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&pUVar6->AllFunctionsCache = 0;
  *(undefined8 *)&(pUVar6->AllFunctionsCache).field_0x8 = 0;
  *(undefined8 *)&(pUVar6->AllFunctionsCache).field_0x20 = 0;
  *(undefined4 *)&(pUVar6->AllFunctionsCache).field_0x28 = 0;
  *(undefined4 *)&(pUVar6->AllFunctionsCache).field_0x2c = 0x80;
  *(undefined4 *)&(pUVar6->AllFunctionsCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pUVar6->AllFunctionsCache).field_0x34 = 0;
  *(undefined8 *)&(pUVar6->AllFunctionsCache).field_0x40 = 0;
  *(undefined4 *)&(pUVar6->AllFunctionsCache).field_0x48 = 0;
  (pUVar6->AllFunctionsCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  (pUVar6->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pUVar6->Interfaces).ArrayNum = 0;
  (pUVar6->Interfaces).ArrayMax = 0;
  (pUVar6->ReferenceSchema).SchemaView = 0;
  (pUVar6->NativeFunctionLookupTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pUVar6->NativeFunctionLookupTable).ArrayNum = 0;
  (pUVar6->NativeFunctionLookupTable).ArrayMax = 0;
  *param_3 = pUVar6;
  pUVar7 = (*param_14)();
  pUVar8 = (*param_13)();
  FLoadTimeProfilerTracePrivate::OutputClassInfo(pUVar6,param_2);
  pcVar1 = *(code **)(pUVar6->_padding_ + 800);
  if (pUVar8 == pUVar6) {
    pUVar8 = (UClass *)0x0;
  }
  if (pcVar1 == UClass::SetSuperStruct) {
    UClass::SetSuperStruct(pUVar6,(UStruct *)pUVar8);
  }
  else {
    (*pcVar1)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (pUVar6->ClassWithin).field0_0x0.DebugPtr = pUVar7;
  pcVar1 = *(code **)(pUVar6->_padding_ + 8);
  if (pcVar1 == UStruct::RegisterDependencies) {
    UStruct::RegisterDependencies((UStruct *)pUVar6);
  }
  else {
    (*pcVar1)();
  }
  UObjectBase::Register((UObjectBase *)pUVar6,UClass::StaticClass,param_1,param_2);
LAB_141f55d42:
  (*param_4)();
  return;
}

// DefaultConstructItems<FUnversionedHeader::FFragment,int> @ 141f55dd0

void __cdecl DefaultConstructItems<FUnversionedHeader::FFragment,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 2;
    do {
      *(undefined4 *)(lVar1 + -2) = 0;
      lVar1 = lVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FImplementedInterface,int> @ 141f55e00

void __cdecl DefaultConstructItems<FImplementedInterface,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0xc);
    do {
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined4 *)(puVar1 + -4) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FInstancedStruct,int> @ 141f55e30

void __cdecl DefaultConstructItems<FInstancedStruct,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FPropertyBagPropertyDesc,int> @ 141f55e60

void __cdecl DefaultConstructItems<FPropertyBagPropertyDesc,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 1;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPropertyBagPropertyDescMetaData,int> @ 141f55eb0

void __cdecl DefaultConstructItems<FPropertyBagPropertyDescMetaData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<TFieldPath<FField>,int>,int> @ 141f55ee0

void __cdecl
DestructItems<TTuple<TFieldPath<FField>,int>,int>
          (TTuple<TFieldPath<FField>,int> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInstancedStruct,int> @ 141f55f20

void __cdecl DestructItems<FInstancedStruct,int>(FInstancedStruct *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FInstancedStruct::Reset(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPropertyBagPropertyDescMetaData,int> @ 141f55f60

void __cdecl
DestructItems<FPropertyBagPropertyDescMetaData,int>
          (FPropertyBagPropertyDescMetaData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Value;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`UPropertyBag::FindPropertyDescByPropertyName'::__l2::<lambda_1>_> @ 141f57910

FPropertyBagPropertyDesc * __thiscall
TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UPropertyBag::FindPropertyDescByPropertyName_::__l2::<lambda_1>_>
          (TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  FName FVar3;
  FPropertyBagPropertyDesc *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  
  pFVar5 = (FPropertyBagPropertyDesc *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar5 + this->ArrayNum;
  do {
    if (pFVar5 == pFVar4) {
      return (FPropertyBagPropertyDesc *)0x0;
    }
    pFVar1 = pFVar5->CachedProperty;
    if (pFVar1 != (FProperty *)0x0) {
      bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
      if (bVar2) {
        FVar3 = (FName)pFVar1->_padding_;
      }
      else {
        FVar3.ComparisonIndex.Value = 0;
        FVar3.Number = 0;
      }
      if (FVar3 == *param_1.PropertyName) {
        return pFVar5;
      }
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// GetFullNameForCastLogError<UFunction> @ 141f57a50

FString * __cdecl
GetFullNameForCastLogError<UFunction>(FString *__return_storage_ptr__,UFunction *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UStruct> @ 141f57a80

FString * __cdecl
GetFullNameForCastLogError<UStruct>(FString *__return_storage_ptr__,UStruct *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<USparseDelegateFunction> @ 141f57d50

FString * __cdecl GetTypeName<USparseDelegateFunction>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USparseDelegateFunction::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UUserDefinedStruct> @ 141f57d90

FString * __cdecl GetTypeName<UUserDefinedStruct>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UUserDefinedStruct::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FProperty_*,int,FIdentityFunctor,TReversePredicate<`UClass::SetUpRuntimeReplicationData'::__l36::FComparePropertyOffsets>_> @ 141f57dd0

void __cdecl
AlgoImpl::
HeapSiftDown<FProperty_*,int,FIdentityFunctor,TReversePredicate<_UClass::SetUpRuntimeReplicationData_::__l36::FComparePropertyOffsets>_>
          (FProperty **param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<_public:_void___cdecl_UClass::SetUpRuntimeReplicationData(void)_::_36_::FComparePropertyOffsets>
          *param_5)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar5 = param_2 * 2;
    iVar8 = iVar5 + 1;
    if (iVar5 + 2 < param_3) {
      pFVar1 = param_1[iVar8];
      pFVar2 = param_1[(longlong)iVar5 + 2];
      if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
        bVar3 = IsThisNotNull(pFVar1,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)&pFVar1->_padding_,&local_58);
        }
        else {
          ::FString::FString(&local_58,L"None");
        }
        bVar3 = IsThisNotNull(pFVar2,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)&pFVar2->_padding_,&local_68);
        }
        else {
          ::FString::FString(&local_68,L"None");
        }
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar7.Data = local_58.Data.AllocatorInstance.Data;
        }
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar6.Data = local_68.Data.AllocatorInstance.Data;
        }
        uVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
        uVar4 = uVar4 >> 0x1f;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar4 = (uint)(pFVar2->Offset_Internal < pFVar1->Offset_Internal);
      }
      if (uVar4 != 0) {
        iVar8 = iVar5;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1[iVar8];
    pFVar2 = param_1[param_2];
    if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
      bVar3 = IsThisNotNull(pFVar1,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&pFVar1->_padding_,&local_38);
      }
      else {
        ::FString::FString(&local_38,L"None");
      }
      bVar3 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_48);
      }
      else {
        ::FString::FString(&local_48,L"None");
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
      }
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
      bVar3 = SUB41((uint)iVar5 >> 0x1f,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar3 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
    }
    if (bVar3 == false) break;
    pFVar1 = param_1[param_2];
    param_1[param_2] = param_1[iVar8];
    param_1[iVar8] = pFVar1;
    param_2 = iVar8;
  }
  return;
}

// HeapSortInternal<TObjectPtr<UField>,int,UE::Core::Private::TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const_>,FNameLexicalLess> @ 141f58050

void __cdecl
AlgoImpl::
HeapSortInternal<TObjectPtr<UField>,int,UE::Core::Private::TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const_>,FNameLexicalLess>
          (TObjectPtr<UField> *param_1,int param_2,
          TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const> param_3,
          FNameLexicalLess param_4)

{
  TObjectPtr<UField>_u_0 TVar1;
  FObjectPtr_u_0 FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
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
  iVar7 = iVar5 * 2 + 1;
  iVar11 = iVar7;
  iVar8 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_141f581b2:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar11 = 0;
            FVar2 = *(FObjectPtr_u_0 *)&param_1->field0_0x0;
            param_1->field0_0x0 = param_1[lVar10].field0_0x0;
            param_1[lVar10].field0_0x0.ObjectPtr.field0_0x0 = FVar2;
            if (1 < iVar7) {
              do {
                iVar8 = iVar11 * 2;
                iVar5 = iVar8 + 1;
                if (iVar8 + 2 < iVar7) {
                  (*(code *)param_3.MemberFunctionPtr)
                            (param_1[(longlong)iVar8 + 2].field0_0x0.DebugPtr,&local_40);
                  (*(code *)param_3.MemberFunctionPtr)(param_1[iVar5].field0_0x0.DebugPtr,&local_48)
                  ;
                  iVar9 = ::FName::Compare(&local_40,&local_48);
                  if (iVar9 < 0) {
                    iVar5 = iVar8;
                  }
                  iVar5 = iVar5 + 1;
                }
                (*(code *)param_3.MemberFunctionPtr)(param_1[iVar11].field0_0x0.DebugPtr,&local_30);
                (*(code *)param_3.MemberFunctionPtr)(param_1[iVar5].field0_0x0.DebugPtr,&local_38);
                iVar8 = ::FName::Compare(&local_30,&local_38);
                if (-1 < iVar8) break;
                TVar1 = param_1[iVar11].field0_0x0;
                param_1[iVar11].field0_0x0 = param_1[iVar5].field0_0x0;
                param_1[iVar5].field0_0x0 = TVar1;
                iVar11 = iVar5;
              } while (iVar5 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar8 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar8 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      (*(code *)param_3.MemberFunctionPtr)
                (param_1[(longlong)iVar7 + 2].field0_0x0.DebugPtr,&local_60);
      (*(code *)param_3.MemberFunctionPtr)(param_1[iVar9].field0_0x0.DebugPtr,&local_68);
      iVar6 = ::FName::Compare(&local_60,&local_68);
      if (iVar6 < 0) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    (*(code *)param_3.MemberFunctionPtr)(param_1[iVar5].field0_0x0.DebugPtr,&local_50);
    (*(code *)param_3.MemberFunctionPtr)(param_1[iVar9].field0_0x0.DebugPtr,&local_58);
    iVar7 = ::FName::Compare(&local_50,&local_58);
    if (-1 < iVar7) goto LAB_141f581b2;
    TVar1 = param_1[iVar5].field0_0x0;
    param_1[iVar5].field0_0x0 = param_1[iVar9].field0_0x0;
    iVar7 = iVar9 * 2 + 1;
    param_1[iVar9].field0_0x0 = TVar1;
    iVar5 = iVar9;
  } while( true );
}

// HeapifyInternal<FProperty_*,int,FIdentityFunctor,TReversePredicate<`UClass::SetUpRuntimeReplicationData'::__l36::FComparePropertyOffsets>_> @ 141f582d0

void __cdecl
AlgoImpl::
HeapifyInternal<FProperty_*,int,FIdentityFunctor,TReversePredicate<_UClass::SetUpRuntimeReplicationData_::__l36::FComparePropertyOffsets>_>
          (FProperty **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_public:_void___cdecl_UClass::SetUpRuntimeReplicationData(void)_::_36_::FComparePropertyOffsets>
          param_4)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar9 = iVar6 * 2 + 1;
  iVar4 = iVar9;
  iVar7 = iVar6;
  do {
    while (param_2 <= iVar9) {
LAB_141f58570:
      if (iVar7 == 0) {
        return;
      }
      iVar6 = iVar7 + -1;
      iVar9 = iVar4 + -2;
      iVar4 = iVar9;
      iVar7 = iVar6;
    }
    iVar9 = iVar6 * 2;
    iVar12 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      pFVar1 = param_1[iVar12];
      pFVar2 = param_1[(longlong)iVar9 + 2];
      if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
        bVar5 = IsThisNotNull(pFVar1,"FField::GetName");
        if (bVar5) {
          ::FName::ToString((FName *)&pFVar1->_padding_,&local_60);
        }
        else {
          ::FString::FString(&local_60,L"None");
        }
        bVar5 = IsThisNotNull(pFVar2,"FField::GetName");
        if (bVar5) {
          ::FName::ToString((FName *)&pFVar2->_padding_,&local_70);
        }
        else {
          ::FString::FString(&local_70,L"None");
        }
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_60.Data.ArrayNum != 0) {
          FVar11.Data = local_60.Data.AllocatorInstance.Data;
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_70.Data.ArrayNum != 0) {
          FVar10.Data = local_70.Data.AllocatorInstance.Data;
        }
        uVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
        uVar8 = uVar8 >> 0x1f;
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar8 = (uint)(pFVar2->Offset_Internal < pFVar1->Offset_Internal);
      }
      if (uVar8 != 0) {
        iVar12 = iVar9;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar1 = param_1[iVar12];
    pFVar2 = param_1[iVar6];
    if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
      bVar5 = IsThisNotNull(pFVar1,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&pFVar1->_padding_,&local_40);
      }
      else {
        ::FString::FString(&local_40,L"None");
      }
      bVar5 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_50);
      }
      else {
        ::FString::FString(&local_50,L"None");
      }
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_40.Data.ArrayNum != 0) {
        FVar11.Data = local_40.Data.AllocatorInstance.Data;
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar10.Data = local_50.Data.AllocatorInstance.Data;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
      bVar5 = SUB41((uint)iVar9 >> 0x1f,0);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar5 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
    }
    if (bVar5 == false) goto LAB_141f58570;
    pFVar1 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar12];
    iVar9 = iVar12 * 2 + 1;
    param_1[iVar12] = pFVar1;
    iVar6 = iVar12;
  } while( true );
}

// IntCastChecked<short,int> @ 141f585c0

short __cdecl IntCastChecked<short,int>(int param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  
  if (param_1 != (short)param_1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
  }
  return (short)param_1;
}

// IntCastChecked<short,unsigned___int64> @ 141f58610

short __cdecl IntCastChecked<short,unsigned___int64>(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  
  sVar3 = (short)param_1;
  if ((param_1 != (longlong)sVar3) || (sVar3 < 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
  }
  return sVar3;
}

// IntCastChecked<unsigned_short,int> @ 141f58670

ushort __cdecl IntCastChecked<unsigned_short,int>(int param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if ((param_1 != (param_1 & 0xffffU)) || (param_1 < 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (ushort)param_1;
}

// InternalConstructor<UClass> @ 141f586c0

void __cdecl InternalConstructor<UClass>(FObjectInitializer *param_1)

{
  UClass *this;
  UClass *pUVar1;
  FName FStackX_8;
  
  this = (UClass *)param_1->Obj;
  if (this != (UClass *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
    this->_padding_ = 0;
    this->_padding_ = (longlong)&___7UClass__6B_;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    (this->CppClassStaticFunctions).AddReferencedObjects =
         (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
    this->ClassUnique = 0;
    this->FirstOwnedClassRep = 0;
    this->bCooked = false;
    this->bLayoutChanging = false;
    this->ClassFlags = CLASS_None;
    this->ClassCastFlags = CASTCLASS_None;
    pUVar1 = Z_Construct_UClass_UObject_NoRegister();
    (this->ClassWithin).field0_0x0.DebugPtr = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ClassConfigName).ComparisonIndex = 0;
    (this->ClassConfigName).Number = 0;
    (this->ClassReps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ClassReps).ArrayNum = 0;
    (this->ClassReps).ArrayMax = 0;
    (this->NetFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NetFields).ArrayNum = 0;
    (this->NetFields).ArrayMax = 0;
    (this->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (this->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *(undefined8 *)&this->FuncMap = 0;
    *(undefined8 *)&(this->FuncMap).field_0x8 = 0;
    *(undefined8 *)&(this->FuncMap).field_0x20 = 0;
    this->SparseClassData = (void *)0x0;
    this->bNeedsDynamicSubobjectInstancing = false;
    *(undefined4 *)&(this->FuncMap).field_0x28 = 0;
    *(undefined4 *)&(this->FuncMap).field_0x2c = 0x80;
    *(undefined4 *)&(this->FuncMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->FuncMap).field_0x34 = 0;
    *(undefined8 *)&(this->FuncMap).field_0x40 = 0;
    *(undefined4 *)&(this->FuncMap).field_0x48 = 0;
    (this->FuncMapLock).Mutex.Mutex.Ptr = (void *)0x0;
    *(undefined8 *)&this->AllFunctionsCache = 0;
    *(undefined8 *)&(this->AllFunctionsCache).field_0x8 = 0;
    *(undefined8 *)&(this->AllFunctionsCache).field_0x20 = 0;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x28 = 0;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x2c = 0x80;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x34 = 0;
    *(undefined8 *)&(this->AllFunctionsCache).field_0x40 = 0;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 0;
    (this->AllFunctionsCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
    (this->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Interfaces).ArrayNum = 0;
    (this->Interfaces).ArrayMax = 0;
    (this->ReferenceSchema).SchemaView = 0;
    (this->NativeFunctionLookupTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NativeFunctionLookupTable).ArrayNum = 0;
    (this->NativeFunctionLookupTable).ArrayMax = 0;
    FStackX_8 = (FName)this->_padding_;
    FLoadTimeProfilerTracePrivate::OutputClassInfo(this,&FStackX_8);
  }
  return;
}

// InternalConstructor<UDelegateFunction> @ 141f586d0

void __cdecl InternalConstructor<UDelegateFunction>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0xffffffff;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[2].field_0xe = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)this = &___7UDelegateFunction__6B_;
  }
  return;
}

// InternalConstructor<UEnum> @ 141f58740

void __cdecl InternalConstructor<UEnum>(FObjectInitializer *param_1)

{
  if ((UEnum *)param_1->Obj != (UEnum *)0x0) {
    UEnum::UEnum((UEnum *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UField> @ 141f58760

void __cdecl InternalConstructor<UField>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UField__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UFunction> @ 141f587a0

void __cdecl InternalConstructor<UFunction>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0xffffffff;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[2].field_0xe = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)this = &___7UFunction__6B_;
  }
  return;
}

// InternalConstructor<UPropertyBag> @ 141f58810

void __cdecl InternalConstructor<UPropertyBag>(FObjectInitializer *param_1)

{
  UScriptStruct *this;
  
  this = (UScriptStruct *)param_1->Obj;
  if (this != (UScriptStruct *)0x0) {
    UScriptStruct::UScriptStruct(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyBag__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPropertyBagMissingObject> @ 141f58860

void __cdecl InternalConstructor<UPropertyBagMissingObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPropertyBagMissingObject__6B_;
  }
  return;
}

// InternalConstructor<UScriptStruct> @ 141f58890

void __cdecl InternalConstructor<UScriptStruct>(FObjectInitializer *param_1)

{
  if ((UScriptStruct *)param_1->Obj != (UScriptStruct *)0x0) {
    UScriptStruct::UScriptStruct((UScriptStruct *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<USparseDelegateFunction> @ 141f588b0

void __cdecl InternalConstructor<USparseDelegateFunction>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0xffffffff;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[2].field_0xe = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)this = &___7USparseDelegateFunction__6B_;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
  }
  return;
}

// InternalConstructor<UStruct> @ 141f58930

void __cdecl InternalConstructor<UStruct>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0xffffffff;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UStruct__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[2].field_0xe = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UUserDefinedStruct> @ 141f589a0

void __cdecl InternalConstructor<UUserDefinedStruct>(FObjectInitializer *param_1)

{
  UScriptStruct *this;
  UPackage *pUVar1;
  
  this = (UScriptStruct *)param_1->Obj;
  if (this != (UScriptStruct *)0x0) {
    UScriptStruct::UScriptStruct(this,param_1);
    this->_padding_ = (longlong)&___7UUserDefinedStruct__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    FStructOnScope::FStructOnScope((FStructOnScope *)&this[1]._padding_);
    this[1]._padding_ = (longlong)&___7FUserStructOnScopeIgnoreDefaults__6B_;
    pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    FStructOnScope::SetPackage((FStructOnScope *)&this[1]._padding_,pUVar1);
  }
  return;
}

// InternalConstructor<UUserDefinedStructEditorDataBase> @ 141f58a20

void __cdecl InternalConstructor<UUserDefinedStructEditorDataBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UUserDefinedStructEditorDataBase__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UClass> @ 141f58a50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UClass__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[10].field_0x20 = 0;
    *(undefined4 *)&pUVar1[10].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)&pUVar1[0xb].field_0x4 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDelegateFunction> @ 141f58a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDelegateFunction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDelegateFunction::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDelegateFunction__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnum> @ 141f58b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnum>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnum::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UEnum__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UField> @ 141f58c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UField>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UField::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UField__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFunction> @ 141f58cd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFunction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFunction::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UFunction__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyBag> @ 141f58dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyBag>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyBag::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPropertyBag__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyBagMissingObject> @ 141f58ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyBagMissingObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyBagMissingObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyBagMissingObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UScriptStruct> @ 141f58f70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UScriptStruct>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UScriptStruct::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UScriptStruct__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USparseDelegateFunction> @ 141f59060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USparseDelegateFunction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USparseDelegateFunction::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USparseDelegateFunction__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStruct> @ 141f59150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStruct>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStruct::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UStruct__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserDefinedStruct> @ 141f59240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUserDefinedStruct>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserDefinedStruct::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UUserDefinedStruct__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x24 = 0;
    *(undefined8 *)&pUVar1[5].field_0x4 = 0;
    FStructOnScope::FStructOnScope((FStructOnScope *)&pUVar1[5].field_0x10);
    *(undefined ***)&pUVar1[5].field_0x10 = &___7FUserStructOnScopeIgnoreDefaults__6B_;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UUserDefinedStructEditorDataBase> @ 141f59350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UUserDefinedStructEditorDataBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserDefinedStructEditorDataBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUserDefinedStructEditorDataBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FProperty_*,int,FIdentityFunctor,`UClass::SetUpRuntimeReplicationData'::__l36::FComparePropertyOffsets> @ 141f59400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FProperty_*,int,FIdentityFunctor,_UClass::SetUpRuntimeReplicationData_::__l36::FComparePropertyOffsets>
          (FProperty **param_1,int param_2,FIdentityFunctor param_3,FComparePropertyOffsets param_4)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FProperty **ppFVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  FProperty **ppFVar9;
  FProperty **ppFVar10;
  FProperty **ppFVar11;
  int iVar12;
  FProperty **ppFVar13;
  float fVar14;
  undefined1 auStackY_438 [32];
  FComparePropertyOffsets local_408 [8];
  FIdentityFunctor local_400 [8];
  FProperty ***local_3f8;
  FProperty **local_3f0;
  int local_3e8;
  FProperty **local_3e0;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  TReversePredicate<_public:_void___cdecl_UClass::SetUpRuntimeReplicationData(void)_::_36_::FComparePropertyOffsets>
  local_378 [3];
  FProperty **local_360;
  FProperty **local_358;
  FProperty **local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_438;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar14;
    memset(local_340,0,0x2e8);
    local_3f8 = &local_358;
    do {
      local_3f0 = local_3f8[1];
      ppFVar5 = *local_3f8;
      local_360 = local_3f8[2];
      iVar12 = (int)((longlong)local_3f0 - (longlong)ppFVar5 >> 3) + 1;
      local_3e8 = (int)local_360;
      ppFVar11 = ppFVar5;
      local_3e0 = ppFVar5;
      if ((int)local_360 != 0) {
LAB_141f594d0:
        if (8 < iVar12) {
          if (iVar12 < 0) {
            iVar12 = iVar12 + 1;
          }
          ppFVar10 = local_3f0 + 1;
          pFVar1 = ppFVar11[iVar12 >> 1];
          ppFVar11[iVar12 >> 1] = *ppFVar11;
          *ppFVar11 = pFVar1;
          ppFVar9 = local_3f0;
          ppFVar5 = ppFVar11;
LAB_141f59501:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x000141f5950e;
          goto LAB_141f595f0;
        }
        if (ppFVar11 < local_3f0) {
          do {
            ppFVar10 = local_3f0;
            ppFVar9 = local_3e0;
            ppFVar5 = local_3e0;
            ppFVar13 = ppFVar11 + 1;
            if (ppFVar11 + 1 <= local_3f0) {
              do {
                pFVar1 = *ppFVar13;
                pFVar2 = *ppFVar9;
                if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
                  bVar4 = IsThisNotNull(pFVar1,"FField::GetName");
                  if (bVar4) {
                    ::FName::ToString((FName *)&pFVar1->_padding_,&local_388);
                  }
                  else {
                    ::FString::FString(&local_388,L"None");
                  }
                  bVar4 = IsThisNotNull(pFVar2,"FField::GetName");
                  if (bVar4) {
                    ::FName::ToString((FName *)&pFVar2->_padding_,&local_398);
                  }
                  else {
                    ::FString::FString(&local_398,L"None");
                  }
                  FVar7.Data = (FScriptContainerElement *)L"";
                  if (local_388.Data.ArrayNum != 0) {
                    FVar7.Data = local_388.Data.AllocatorInstance.Data;
                  }
                  FVar6.Data = (FScriptContainerElement *)L"";
                  if (local_398.Data.ArrayNum != 0) {
                    FVar6.Data = local_398.Data.AllocatorInstance.Data;
                  }
                  iVar12 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
                  bVar4 = SUB41((uint)iVar12 >> 0x1f,0);
                  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_398.Data.AllocatorInstance.Data);
                  }
                  ppFVar10 = local_3f0;
                  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_388.Data.AllocatorInstance.Data);
                    ppFVar10 = local_3f0;
                  }
                }
                else {
                  bVar4 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
                }
                ppFVar5 = ppFVar13;
                if (bVar4 == false) {
                  ppFVar5 = ppFVar9;
                }
                ppFVar13 = ppFVar13 + 1;
                ppFVar9 = ppFVar5;
              } while (ppFVar13 <= ppFVar10);
            }
            pFVar1 = *ppFVar5;
            local_3f0 = ppFVar10 + -1;
            *ppFVar5 = *ppFVar10;
            *ppFVar10 = pFVar1;
          } while (local_3e0 < local_3f0);
        }
        goto LAB_141f5998c;
      }
LAB_141f59797:
      local_408[0] = param_4;
      local_400[0] = param_3;
      if (iVar12 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                           ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_141f5991d:
        local_378[0].Predicate = local_408;
        HeapifyInternal<FProperty_*,int,FIdentityFunctor,TReversePredicate<_UClass::SetUpRuntimeReplicationData_::__l36::FComparePropertyOffsets>_>
                  (ppFVar5,iVar12,param_3,local_408);
        iVar12 = iVar12 + -1;
        if (0 < iVar12) {
          lVar8 = (longlong)iVar12 * 8;
          do {
            pFVar1 = *ppFVar5;
            *ppFVar5 = *(FProperty **)(lVar8 + (longlong)ppFVar5);
            *(FProperty **)(lVar8 + (longlong)ppFVar5) = pFVar1;
            HeapSiftDown<FProperty_*,int,FIdentityFunctor,TReversePredicate<_UClass::SetUpRuntimeReplicationData_::__l36::FComparePropertyOffsets>_>
                      (ppFVar5,0,iVar12,local_400,local_378);
            iVar12 = iVar12 + -1;
            lVar8 = lVar8 + -8;
          } while (0 < iVar12);
        }
      }
      else if (iVar12 != 0) goto LAB_141f5991d;
LAB_141f5998c:
      local_3f8 = local_3f8 + -3;
    } while (&local_358 <= local_3f8);
  }
  return;
code_r0x000141f5950e:
  pFVar1 = *ppFVar5;
  pFVar2 = *ppFVar11;
  if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
    bVar4 = IsThisNotNull(pFVar1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&pFVar1->_padding_,&local_3c8);
    }
    else {
      ::FString::FString(&local_3c8,L"None");
    }
    bVar4 = IsThisNotNull(pFVar2,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&pFVar2->_padding_,&local_3d8);
    }
    else {
      ::FString::FString(&local_3d8,L"None");
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_3c8.Data.ArrayNum != 0) {
      FVar7.Data = local_3c8.Data.AllocatorInstance.Data;
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_3d8.Data.ArrayNum != 0) {
      FVar6.Data = local_3d8.Data.AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
    bVar4 = SUB41((uint)iVar12 >> 0x1f,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    ppFVar9 = local_3f0;
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      ppFVar9 = local_3f0;
    }
  }
  else {
    bVar4 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
  }
  if (bVar4 == false) goto LAB_141f59501;
LAB_141f595f0:
  do {
    ppFVar9 = ppFVar10;
    ppFVar10 = ppFVar9 + -1;
    if (ppFVar10 <= ppFVar11) break;
    pFVar1 = *ppFVar11;
    pFVar2 = *ppFVar10;
    if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
      bVar4 = IsThisNotNull(pFVar1,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&pFVar1->_padding_,&local_3a8);
      }
      else {
        ::FString::FString(&local_3a8,L"None");
      }
      bVar4 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_3b8);
      }
      else {
        ::FString::FString(&local_3b8,L"None");
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_3a8.Data.ArrayNum != 0) {
        FVar7.Data = local_3a8.Data.AllocatorInstance.Data;
      }
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_3b8.Data.ArrayNum != 0) {
        FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
      bVar4 = SUB41((uint)iVar12 >> 0x1f,0);
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar4 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
    }
  } while (bVar4 == false);
  if (ppFVar5 <= ppFVar10) {
    pFVar1 = *ppFVar5;
    *ppFVar5 = *ppFVar10;
    *ppFVar10 = pFVar1;
    ppFVar9 = local_3f0;
    goto LAB_141f59501;
  }
  pFVar1 = *ppFVar11;
  local_3e8 = local_3e8 + -1;
  *ppFVar11 = *ppFVar10;
  *ppFVar10 = pFVar1;
  if ((longlong)((longlong)ppFVar10 + (-8 - (longlong)ppFVar11) & 0xfffffffffffffff8U) <
      (longlong)((longlong)local_3f0 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < local_3f0) {
      *local_3f8 = ppFVar5;
      local_3f8[1] = local_3f0;
      *(int *)(local_3f8 + 2) = local_3e8;
      local_3f8 = local_3f8 + 3;
    }
    if (ppFVar10 <= ppFVar11 + 1) goto LAB_141f5998c;
    local_3f0 = ppFVar9 + -2;
    ppFVar5 = ppFVar11;
  }
  else {
    if (ppFVar11 + 1 < ppFVar10) {
      *local_3f8 = ppFVar11;
      local_3f8[1] = ppFVar9 + -2;
      *(int *)(local_3f8 + 2) = local_3e8;
      local_3f8 = local_3f8 + 3;
    }
    local_3e0 = ppFVar5;
    if (local_3f0 <= ppFVar5) goto LAB_141f5998c;
  }
  iVar12 = (int)((longlong)local_3f0 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar11 = ppFVar5;
  if (local_3e8 == 0) goto LAB_141f59797;
  goto LAB_141f594d0;
}

// IntroSortInternal<TObjectPtr<UField>,int,UE::Core::Private::TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const_>,FNameLexicalLess> @ 141f599f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TObjectPtr<UField>,int,UE::Core::Private::TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const_>,FNameLexicalLess>
          (TObjectPtr<UField> *param_1,int param_2,
          TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const> param_3,
          FNameLexicalLess param_4)

{
  FObjectPtr_u_0 FVar1;
  int iVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  TObjectPtr<UField> **ppTVar5;
  int iVar6;
  FObjectPtr_u_0 *pFVar7;
  FObjectPtr_u_0 *pFVar8;
  FObjectPtr_u_0 *pFVar9;
  float fVar10;
  undefined1 auStack_3c8 [32];
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FName local_380 [3];
  TObjectPtr<UField> *local_368;
  TObjectPtr<UField> *local_358;
  TObjectPtr<UField> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3c8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar10;
    memset(local_340,0,0x2e8);
    ppTVar5 = &local_358;
    do {
      pFVar3 = (FObjectPtr_u_0 *)ppTVar5[1];
      pFVar4 = (FObjectPtr_u_0 *)*ppTVar5;
      local_368 = ppTVar5[2];
      iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar4 >> 3) + 1;
      pFVar9 = pFVar4;
      iVar6 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_141f59ab1:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          pFVar7 = pFVar3 + 1;
          FVar1 = pFVar9[iVar2 >> 1];
          pFVar9[iVar2 >> 1].Handle = (UObject *)*(UObject **)pFVar9;
          *pFVar9 = FVar1;
          pFVar4 = pFVar9;
LAB_141f59ae0:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar3) goto code_r0x000141f59ae9;
          goto LAB_141f59b13;
        }
        for (; pFVar7 = pFVar9, pFVar4 = pFVar9, pFVar9 < pFVar3; pFVar3 = pFVar3 + -1) {
          while (pFVar8 = pFVar7, pFVar4 = pFVar4 + 1, pFVar4 <= pFVar3) {
            (*(code *)param_3.MemberFunctionPtr)(pFVar4->Handle,&local_388);
            (*(code *)param_3.MemberFunctionPtr)(pFVar8->Handle,local_380);
            iVar6 = ::FName::Compare(local_380,&local_388);
            pFVar7 = pFVar4;
            if (-1 < iVar6) {
              pFVar7 = pFVar8;
            }
          }
          FVar1.Handle = *(UObject **)pFVar8;
          *pFVar8 = *(UObject **)pFVar3;
          pFVar3->Handle = (UObject *)FVar1;
        }
        goto LAB_141f59bf5;
      }
LAB_141f59be4:
      HeapSortInternal<TObjectPtr<UField>,int,UE::Core::Private::TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const_>,FNameLexicalLess>
                ((TObjectPtr<UField> *)pFVar4,iVar2,param_3,param_4);
LAB_141f59bf5:
      ppTVar5 = ppTVar5 + -3;
    } while (&local_358 <= ppTVar5);
  }
  return;
code_r0x000141f59ae9:
  (*(code *)param_3.MemberFunctionPtr)(pFVar4->Handle,&local_3a8);
  (*(code *)param_3.MemberFunctionPtr)(pFVar9->Handle,&local_3a0);
  iVar2 = ::FName::Compare(&local_3a0,&local_3a8);
  if (-1 < iVar2) goto LAB_141f59ae0;
LAB_141f59b13:
  do {
    pFVar8 = pFVar7;
    pFVar7 = pFVar8 + -1;
    if (pFVar7 <= pFVar9) break;
    (*(code *)param_3.MemberFunctionPtr)(pFVar9->Handle,&local_398);
    (*(code *)param_3.MemberFunctionPtr)(pFVar7->Handle,&local_390);
    iVar2 = ::FName::Compare(&local_390,&local_398);
  } while (-1 < iVar2);
  if (pFVar4 <= pFVar7) {
    FVar1.Handle = *(UObject **)pFVar4;
    pFVar4->Handle = (UObject *)*(UObject **)pFVar7;
    pFVar7->Handle = (UObject *)FVar1;
    goto LAB_141f59ae0;
  }
  FVar1.Handle = *(UObject **)pFVar9;
  iVar6 = iVar6 + -1;
  pFVar9->Handle = (UObject *)*(UObject **)pFVar7;
  pFVar7->Handle = (UObject *)FVar1;
  if ((longlong)((longlong)pFVar7 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar3 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar3) {
      *ppTVar5 = (TObjectPtr<UField> *)pFVar4;
      ppTVar5[1] = (TObjectPtr<UField> *)pFVar3;
      *(int *)(ppTVar5 + 2) = iVar6;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pFVar7 <= pFVar9 + 1) goto LAB_141f59bf5;
    pFVar3 = pFVar8 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar7) {
      *ppTVar5 = (TObjectPtr<UField> *)pFVar9;
      ppTVar5[1] = (TObjectPtr<UField> *)(pFVar8 + -2);
      *(int *)(ppTVar5 + 2) = iVar6;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pFVar3 <= pFVar4) goto LAB_141f59bf5;
  }
  iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if (iVar6 == 0) goto LAB_141f59be4;
  goto LAB_141f59ab1;
}

// IsObjectPtrEqual<UScriptStruct_const_,UScriptStruct_*,0> @ 141f59cd0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UScriptStruct_const_,UScriptStruct_*,0>
          (TObjectPtr<UScriptStruct_const_> *param_1,UScriptStruct **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return *param_2 == (UScriptStruct *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UScriptStruct_const_,UScriptStruct_const_*,0> @ 141f59cf0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UScriptStruct_const_,UScriptStruct_const_*,0>
          (TObjectPtr<UScriptStruct_const_> *param_1,UScriptStruct **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return *param_2 == (UScriptStruct *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UObject,UObject_*,0> @ 141f59d10

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject,UObject_*,0>
          (TObjectPtr<UObject> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UObject *)0x0) {
    return *param_2 == (UObject *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UScriptStruct,UStruct_*,0> @ 141f59d30

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UScriptStruct,UStruct_*,0>
          (TObjectPtr<UScriptStruct> *param_1,UStruct **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return (UScriptStruct *)*param_2 == (UScriptStruct *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UScriptStruct *)*param_2;
}

// IsObjectPtrEqual<UScriptStruct,UScriptStruct_const_*,0> @ 141f59d50

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UScriptStruct,UScriptStruct_const_*,0>
          (TObjectPtr<UScriptStruct> *param_1,UScriptStruct **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return *param_2 == (UScriptStruct *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UScriptStruct,UStruct_const_*,0> @ 141f59d70

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UScriptStruct,UStruct_const_*,0>
          (TObjectPtr<UScriptStruct> *param_1,UStruct **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return (UScriptStruct *)*param_2 == (UScriptStruct *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UScriptStruct *)*param_2;
}

// LexToString<FString,signed_char> @ 141f5a050

FString * __cdecl LexToString<FString,signed_char>(FString *__return_storage_ptr__,schar *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// LexToString<FString,unsigned_char> @ 141f5a080

FString * __cdecl LexToString<FString,unsigned_char>(FString *__return_storage_ptr__,uchar *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// LexToString<FString,short> @ 141f5a0b0

FString * __cdecl LexToString<FString,short>(FString *__return_storage_ptr__,short *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// LexToString<FString,unsigned_short> @ 141f5a0e0

FString * __cdecl
LexToString<FString,unsigned_short>(FString *__return_storage_ptr__,ushort *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// MutableView<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> @ 141f5a110

TMutableView<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> __cdecl
MutableView<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *in_RDX;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)in_RDX;
  iVar2 = *(int *)(in_RDX + 8);
  lVar1 = lVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)(in_RDX + 8) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 8;
  }
  (param_1->AllocatorInstance).Data = in_RDX;
  return (TMutableView<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>)
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// NewObject<UPropertyBag> @ 141f5a170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPropertyBag * __cdecl
NewObject<UPropertyBag>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPropertyBag *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UPropertyBag::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPropertyBag *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ObjectPtrDecay<TObjectPtr<UScriptStruct_const_>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UScriptStruct_const_>_>,UScriptStruct_const_*> @ 141f5a260

UScriptStruct ** __cdecl
ObjectPtrDecay<TObjectPtr<UScriptStruct_const_>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UScriptStruct_const_>_>,UScriptStruct_const_*>
          (TObjectPtr<UScriptStruct_const_> *param_1)

{
  return (UScriptStruct **)param_1;
}

// StaticEnum<enum_EPropertyBagAlterationResult> @ 141f5ba30

UEnum * __cdecl StaticEnum<enum_EPropertyBagAlterationResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagAlterationResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagAlterationResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagAlterationResult,(UObject *)pUVar1,
                       L"EPropertyBagAlterationResult");
  }
  return Z_Registration_Info_UEnum_EPropertyBagAlterationResult.OuterSingleton;
}

// StaticEnum<enum_EPropertyBagContainerType> @ 141f5ba70

UEnum * __cdecl StaticEnum<enum_EPropertyBagContainerType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagContainerType,(UObject *)pUVar1,
                       L"EPropertyBagContainerType");
  }
  return Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton;
}

// StaticEnum<enum_EPropertyBagMissingEnum> @ 141f5bab0

UEnum * __cdecl StaticEnum<enum_EPropertyBagMissingEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagMissingEnum,(UObject *)pUVar1,
                       L"EPropertyBagMissingEnum");
  }
  return Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton;
}

// StaticEnum<enum_EPropertyBagPropertyType> @ 141f5baf0

UEnum * __cdecl StaticEnum<enum_EPropertyBagPropertyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagPropertyType,(UObject *)pUVar1,
                       L"EPropertyBagPropertyType");
  }
  return Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton;
}

// StaticEnum<enum_EPropertyBagResult> @ 141f5bb30

UEnum * __cdecl StaticEnum<enum_EPropertyBagResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagResult,(UObject *)pUVar1,
                       L"EPropertyBagResult");
  }
  return Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton;
}

// StaticEnum<enum_EUserDefinedStructureStatus> @ 141f5bb70

UEnum * __cdecl StaticEnum<enum_EUserDefinedStructureStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EUserDefinedStructureStatus,(UObject *)pUVar1,
                       L"EUserDefinedStructureStatus");
  }
  return Z_Registration_Info_UEnum_EUserDefinedStructureStatus.OuterSingleton;
}

// WriteToString<32,FName_&> @ 141f5bc40

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,FName_&>
          (TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToString<32,FName_const_&> @ 141f5bc80

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,FName_const_&>
          (TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToString<32,FName> @ 141f5bcc0

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,FName>(TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToString<64,UE::FPropertyTypeName> @ 141f5bd00

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,UE::FPropertyTypeName>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,FPropertyTypeName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  UE::operator<<((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FZenaphoreWaiterNode_*>_> @ 141f5bd40

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FZenaphoreWaiterNode_*>_>
          (_Atomic_padded<FZenaphoreWaiterNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FZenaphoreWaiterNode_*>_> @ 141f5bd50

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FZenaphoreWaiterNode_*>_>
          (_Atomic_padded<FZenaphoreWaiterNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FUnversionedStructSchema_const_*>_> @ 141f5bd60

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FUnversionedStructSchema_const_*>_>
          (_Atomic_padded<FUnversionedStructSchema_const_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FUnversionedStructSchema_const_*>_> @ 141f5bd70

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FUnversionedStructSchema_const_*>_>
          (_Atomic_padded<FUnversionedStructSchema_const_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,FZenaphoreWaiterNode_*> @ 141f5bd80

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,FZenaphoreWaiterNode_*>(FZenaphoreWaiterNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FUnversionedStructSchema_const_*> @ 141f5bd90

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,FUnversionedStructSchema_const_*>
          (FUnversionedStructSchema **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,0,0> @ 141f68630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UScriptStruct::SerializeItem_::__l8::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UScriptStruct::SerializeItem'::`8'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,0,0> @ 141f68650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_FStructUtils::AttemptToFindUninitializedScriptStructMembers_::__l75::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::`75'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_5_>,0,0> @ 141f68670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_5_>,0,0>::
~TFunction_OwnedObject<_FStructTracker::FStructTracker_::__l1::<lambda_5_>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStructTracker::FStructTracker'::`1'::<lambda_5_>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,0,0> @ 141f68690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,0,0>::
~TFunction_OwnedObject<_FStructTracker::FStructTracker_::__l1::<lambda_6_>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStructTracker::FStructTracker'::`1'::<lambda_6_>,0,0>::_vftable_;
  return;
}

// operator<< @ 141f69ae0

FArchive * __cdecl operator<<(FArchive *param_1,schar *param_2)

{
  schar *psVar1;
  
  psVar1 = (schar *)**(undefined8 **)&param_1->field_0x8;
  if (psVar1 + 1 <= (schar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *psVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  return param_1;
}

// operator<< @ 141f69b30

FArchive * __cdecl operator<<(FArchive *param_1,FImplementedInterface *param_2)

{
  int *piVar1;
  int *piVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x150))();
  piVar1 = &param_2->PointerOffset;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->bImplementedByK2);
  return param_1;
}

// operator<< @ 141f69bb0

FArchive * __cdecl operator<<(FArchive *param_1,FPropertyBagPropertyDesc *param_2)

{
  uint *puVar1;
  byte bVar2;
  EPropertyBagPropertyType *pEVar3;
  longlong *plVar4;
  uchar *puVar5;
  EPropertyBagContainerType *pEVar6;
  ulonglong *puVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FArchive *pFVar11;
  EPropertyBagContainerType *pEVar12;
  uint uVar13;
  EPropertyBagContainerType local_res8 [8];
  uint local_res10 [2];
  undefined8 local_res18 [2];
  TArray<FPropertyBagPropertyDescMetaData,TSizedDefaultAllocator<32>_> local_38;
  ulonglong uVar14;
  
  (**(code **)(*(longlong *)param_1 + 0x150))();
  operator<<(param_1,&param_2->ID);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->Name);
  pEVar3 = (EPropertyBagPropertyType *)**(undefined8 **)&param_1->field_0x8;
  if ((EPropertyBagPropertyType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->ValueType,1);
  }
  else {
    param_2->ValueType = *pEVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPropertyBagCustomVersion::GUID);
  uVar14 = 0;
  if (0 < iVar10) {
    if (((param_1->field_0x28 & 1) == 0) ||
       (iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPropertyBagCustomVersion::GUID)
       , 1 < iVar10)) {
      puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
      if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,&(param_2->ContainerTypes).NumContainers,1);
      }
      else {
        (param_2->ContainerTypes).NumContainers = *puVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
      if ((param_2->ContainerTypes).NumContainers != '\0') {
        do {
          pEVar12 = (param_2->ContainerTypes).Types.Elements + uVar14;
          pEVar6 = (EPropertyBagContainerType *)**(undefined8 **)&param_1->field_0x8;
          if ((EPropertyBagContainerType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar6 + 1) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar12,1);
          }
          else {
            *pEVar12 = *pEVar6;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while ((int)uVar13 < (int)(uint)(param_2->ContainerTypes).NumContainers);
      }
    }
    else {
      plVar4 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = None;
      if ((EPropertyBagContainerType *)plVar4[1] < (EPropertyBagContainerType *)*plVar4 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        local_res8[0] = *(EPropertyBagContainerType *)*plVar4;
        *plVar4 = *plVar4 + 1;
      }
      if (local_res8[0] != None) {
        bVar2 = (param_2->ContainerTypes).NumContainers;
        if (bVar2 < 2) {
          (param_2->ContainerTypes).Types.Elements[bVar2] = local_res8[0];
          puVar5 = &(param_2->ContainerTypes).NumContainers;
          *puVar5 = *puVar5 + '\x01';
        }
        else {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6601604169788817495>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\PropertyBag.h"
                             ,0x57,"NumContainers < MaxNestedTypes");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            pFVar11 = (FArchive *)(*pcVar8)();
            return pFVar11;
          }
        }
      }
    }
  }
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    local_res10[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar13 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) {
      return param_1;
    }
  }
  else {
    uVar13 = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  if (uVar13 != 0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FPropertyBagPropertyDescMetaData,TSizedDefaultAllocator<32>_>
              (param_1,&local_38);
    iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPropertyBagCustomVersion::GUID);
    if (2 < iVar10) {
      local_res18[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x150))(param_1,local_res18);
    }
    DestructItems<FPropertyBagPropertyDescMetaData,int>
              ((FPropertyBagPropertyDescMetaData *)local_38.AllocatorInstance.Data,local_38.ArrayNum
              );
    if ((FPropertyBagPropertyDescMetaData *)local_38.AllocatorInstance.Data !=
        (FPropertyBagPropertyDescMetaData *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return param_1;
}

// operator() @ 141f6a630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::Net::Private::ValidateNetDeltaSerializeProperties'::__l6::<lambda_1>::
operator()<`UE::Net::Private::ValidateNetDeltaSerializeProperties'::__l6::<lambda_1>_>'::__l2::
<lambda_1>::operator()(void *this,FStructProperty *param_1)

{
  FString local_28;
  FString local_18;
  
  if (2 < (byte)LogClass._0_1_) {
    FField::GetPathName((FField *)param_1,&local_18,(UObject *)0x0);
    FField::GetPathName((FField *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 141f6ace0

void * __thiscall
TFObjectPropertyBase<TObjectPtr<UObject>_>::_scalar_deleting_destructor_
          (TFObjectPropertyBase<TObjectPtr<UObject>_> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6ad40

void * __thiscall
TFObjectPropertyBase<FSoftObjectPtr>::_scalar_deleting_destructor_
          (TFObjectPropertyBase<FSoftObjectPtr> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6ada0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UScriptStruct::SerializeItem'::`8'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6ade0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::`75'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6ae20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_5_>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStructTracker::FStructTracker'::`1'::<lambda_5_>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6ae60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStructTracker::FStructTracker'::`1'::<lambda_6_>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6aea0

void * __thiscall
TProperty<unsigned_char,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<unsigned_char,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6af00

void * __thiscall
TProperty<int,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<int,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6af60

void * __thiscall
TProperty<unsigned_int,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<unsigned_int,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6afc0

void * __thiscall
TProperty<float,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<float,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b020

void * __thiscall
TProperty<double,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<double,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b080

void * __thiscall
TProperty<TObjectPtr<UObject>,FObjectPropertyBase>::_scalar_deleting_destructor_
          (TProperty<TObjectPtr<UObject>,FObjectPropertyBase> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b0e0

void * __thiscall
TProperty<FSoftObjectPtr,FObjectPropertyBase>::_scalar_deleting_destructor_
          (TProperty<FSoftObjectPtr,FObjectPropertyBase> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b140

void * __thiscall
TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty>::_scalar_deleting_destructor_
          (TProperty<TScriptSparseSet<FDefaultSetAllocator>,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b1a0

void * __thiscall
TProperty<FAnsiString,FProperty>::_scalar_deleting_destructor_
          (TProperty<FAnsiString,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b200

void * __thiscall
TProperty<FName,FProperty>::_scalar_deleting_destructor_
          (TProperty<FName,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b260

void * __thiscall
TProperty<FScriptArray,FProperty>::_scalar_deleting_destructor_
          (TProperty<FScriptArray,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b2c0

void * __thiscall
TProperty<FString,FProperty>::_scalar_deleting_destructor_
          (TProperty<FString,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b320

void * __thiscall
TProperty<FText,FProperty>::_scalar_deleting_destructor_
          (TProperty<FText,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b380

void * __thiscall
TProperty<__int64,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<__int64,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b3e0

void * __thiscall
TProperty<unsigned___int64,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<unsigned___int64,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b440

void * __thiscall
TProperty_Numeric<unsigned_char>::_scalar_deleting_destructor_
          (TProperty_Numeric<unsigned_char> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b4a0

void * __thiscall
TProperty_Numeric<int>::_scalar_deleting_destructor_(TProperty_Numeric<int> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b500

void * __thiscall
TProperty_Numeric<unsigned_int>::_scalar_deleting_destructor_
          (TProperty_Numeric<unsigned_int> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b560

void * __thiscall
TProperty_Numeric<float>::_scalar_deleting_destructor_(TProperty_Numeric<float> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b5c0

void * __thiscall
TProperty_Numeric<double>::_scalar_deleting_destructor_
          (TProperty_Numeric<double> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b620

void * __thiscall
TProperty_Numeric<__int64>::_scalar_deleting_destructor_
          (TProperty_Numeric<__int64> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b680

void * __thiscall
TProperty_Numeric<unsigned___int64>::_scalar_deleting_destructor_
          (TProperty_Numeric<unsigned___int64> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b6e0

void * __thiscall
TProperty_WithEqualityAndSerializer<unsigned_char,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<unsigned_char,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b740

void * __thiscall
TProperty_WithEqualityAndSerializer<int,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<int,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b7a0

void * __thiscall
TProperty_WithEqualityAndSerializer<unsigned_int,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<unsigned_int,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b800

void * __thiscall
TProperty_WithEqualityAndSerializer<float,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<float,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b860

void * __thiscall
TProperty_WithEqualityAndSerializer<double,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<double,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b8c0

void * __thiscall
TProperty_WithEqualityAndSerializer<FAnsiString,FProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<FAnsiString,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b920

void * __thiscall
TProperty_WithEqualityAndSerializer<FName,FProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<FName,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b980

void * __thiscall
TProperty_WithEqualityAndSerializer<FString,FProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<FString,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6b9e0

void * __thiscall
TProperty_WithEqualityAndSerializer<__int64,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<__int64,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6ba40

void * __thiscall
TProperty_WithEqualityAndSerializer<unsigned___int64,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<unsigned___int64,FNumericProperty> *this,uint param_1
          )

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6baa0

void * __thiscall
FAnsiStrProperty::_scalar_deleting_destructor_(FAnsiStrProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bb00

void * __thiscall
UE::StructUtils::FArchiveCityHash64::_scalar_deleting_destructor_
          (FArchiveCityHash64 *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bb40

void * __thiscall
FArchiveScriptReferenceCollector::_scalar_deleting_destructor_
          (FArchiveScriptReferenceCollector *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bb80

void * __thiscall FArrayProperty::_scalar_deleting_destructor_(FArrayProperty *this,uint param_1)

{
  ~FArrayProperty(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bbe0

void * __thiscall FBoolProperty::_scalar_deleting_destructor_(FBoolProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bc40

void * __thiscall FByteProperty::_scalar_deleting_destructor_(FByteProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bca0

void * __thiscall FClassProperty::_scalar_deleting_destructor_(FClassProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bd00

void * __thiscall FDoubleProperty::_scalar_deleting_destructor_(FDoubleProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bd60

void * __thiscall FEnumProperty::_scalar_deleting_destructor_(FEnumProperty *this,uint param_1)

{
  ~FEnumProperty(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bdc0

void * __thiscall
FFeedbackContextImportDefaults::_scalar_deleting_destructor_
          (FFeedbackContextImportDefaults *this,uint param_1)

{
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6be00

void * __thiscall FFloatProperty::_scalar_deleting_destructor_(FFloatProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6be60

void * __thiscall
UE::StructUtils::FHashBuilder::_scalar_deleting_destructor_(FHashBuilder *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bea0

void * __thiscall FInt64Property::_scalar_deleting_destructor_(FInt64Property *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bf00

void * __thiscall FIntProperty::_scalar_deleting_destructor_(FIntProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bf60

void * __thiscall FNameProperty::_scalar_deleting_destructor_(FNameProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6bfc0

void * __thiscall
FNumericProperty::_scalar_deleting_destructor_(FNumericProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c020

void * __thiscall FObjectProperty::_scalar_deleting_destructor_(FObjectProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c080

void * __thiscall
FObjectPropertyBase::_scalar_deleting_destructor_(FObjectPropertyBase *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c0e0

void * __thiscall FProperty::_scalar_deleting_destructor_(FProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c140

void * __thiscall
FPropertyProxyArchive::_scalar_deleting_destructor_(FPropertyProxyArchive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<TFieldPath<FField>,int>,int>
            ((TTuple<TFieldPath<FField>,int> *)(this->UnresolvedProperties).AllocatorInstance.Data,
             (this->UnresolvedProperties).ArrayNum);
  pFVar1 = (this->UnresolvedProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c1b0

void * __thiscall
FPropertyReferenceCollector::_scalar_deleting_destructor_
          (FPropertyReferenceCollector *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c1f0

void * __thiscall
FRestoreClassInfo::_scalar_deleting_destructor_(FRestoreClassInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NativeFunctionLookupTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRestoreForUObjectOverwrite__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c240

void * __thiscall
FRestoreForUObjectOverwrite::_scalar_deleting_destructor_
          (FRestoreForUObjectOverwrite *this,uint param_1)

{
  *this = (FRestoreForUObjectOverwrite)&___7FRestoreForUObjectOverwrite__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c280

void * __thiscall FSetProperty::_scalar_deleting_destructor_(FSetProperty *this,uint param_1)

{
  ~FSetProperty(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c2e0

void * __thiscall
FSoftClassProperty::_scalar_deleting_destructor_(FSoftClassProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c340

void * __thiscall
FSoftObjectProperty::_scalar_deleting_destructor_(FSoftObjectProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c3a0

void * __thiscall FStrProperty::_scalar_deleting_destructor_(FStrProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c400

void * __thiscall FStructProperty::_scalar_deleting_destructor_(FStructProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c460

void * __thiscall
`FindUndeclaredObjectReferencesInStructSerializers'::__l2::FTestArchive::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FArchive::~FArchive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c4a0

void * __thiscall FTextProperty::_scalar_deleting_destructor_(FTextProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c500

void * __thiscall FUInt32Property::_scalar_deleting_destructor_(FUInt32Property *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c560

void * __thiscall FUInt64Property::_scalar_deleting_destructor_(FUInt64Property *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c5c0

void * __thiscall
FUserStructOnScopeIgnoreDefaults::_scalar_deleting_destructor_
          (FUserStructOnScopeIgnoreDefaults *this,uint param_1)

{
  FStructOnScope::~FStructOnScope((FStructOnScope *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c600

void * __thiscall UClass::_scalar_deleting_destructor_(UClass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7UClass__6B_;
  pFVar1 = (this->Interfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NativeFunctionLookupTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::GC::FSchemaOwner::Reset(&this->ReferenceSchema);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
  }
  *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 0;
  pvVar5 = *(void **)&(this->AllFunctionsCache).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UFunction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UFunction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UFunction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllFunctionsCache);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
  }
  *(undefined4 *)&(this->FuncMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->FuncMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FuncMap);
  pFVar1 = (this->NetFields).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClassReps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStruct::~UStruct((UStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c7a0

void * __thiscall
UDelegateFunction::_scalar_deleting_destructor_(UDelegateFunction *this,uint param_1)

{
  *(undefined ***)this = &___7UFunction__6B_;
  UStruct::~UStruct((UStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c800

void * __thiscall UEnum::_scalar_deleting_destructor_(UEnum *this,uint param_1)

{
  ~UEnum(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c860

void * __thiscall UField::_scalar_deleting_destructor_(UField *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c8c0

void * __thiscall UFunction::_scalar_deleting_destructor_(UFunction *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UFunction__6B_;
  UStruct::~UStruct((UStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c920

void * __thiscall UPropertyBag::_scalar_deleting_destructor_(UPropertyBag *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPropertyBag__6B_;
  pFVar1 = (this->PropertyDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  UStruct::~UStruct((UStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6c9a0

void * __thiscall
UPropertyBagMissingObject::_scalar_deleting_destructor_
          (UPropertyBagMissingObject *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyBagMissingObject__6B_;
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

// `scalar_deleting_destructor' @ 141f6ca00

void * __thiscall UScriptStruct::_scalar_deleting_destructor_(UScriptStruct *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  UStruct::~UStruct((UStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6ca60

void * __thiscall
USparseDelegateFunction::_scalar_deleting_destructor_(USparseDelegateFunction *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UFunction__6B_;
  UStruct::~UStruct((UStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6cac0

void * __thiscall UStruct::_scalar_deleting_destructor_(UStruct *this,uint param_1)

{
  ~UStruct(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6cb20

void * __thiscall
UUserDefinedStruct::_scalar_deleting_destructor_(UUserDefinedStruct *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UUserDefinedStruct__6B_;
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->DefaultStructInstance);
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  UStruct::~UStruct((UStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f6cba0

void * __thiscall
UUserDefinedStructEditorDataBase::_scalar_deleting_destructor_
          (UUserDefinedStructEditorDataBase *this,uint param_1)

{
  *(undefined ***)this = &___7UUserDefinedStructEditorDataBase__6B_;
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

// CanUseUnversionedPropertySerialization @ 141f71e30

bool __cdecl CanUseUnversionedPropertySerialization(ITargetPlatform *param_1)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  FName *pFVar7;
  FConfigCacheIni *this;
  FConfigFile *this_00;
  FConfigSection *pFVar8;
  uint *puVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  char cVar12;
  char local_res8 [8];
  uint local_res10 [2];
  FName local_res18;
  undefined1 local_38 [16];
  void *local_28 [2];
  
  if (param_1 == (ITargetPlatform *)0x0) {
    bVar2 = CanUseUnversionedPropertySerialization();
    return bVar2;
  }
  bVar3 = (**(code **)(*(longlong *)&param_1->field_0x8 + 0xb0))(&param_1->field_0x8);
  uVar4 = (**(code **)(*(longlong *)&param_1->field_0x8 + 0x1b0))(&param_1->field_0x8);
  uVar4 = uVar4 | (uint)bVar3 << 0x1f;
  AcquireSRWLockExclusive((PSRWLOCK)&GUPSIniValueCache);
  if (GUPSIniValueCache.PlatformValues._8_4_ != GUPSIniValueCache.PlatformValues._52_4_) {
    lVar10 = 0x154b88730;
    if (GUPSIniValueCache.PlatformValues._64_8_ != 0) {
      lVar10 = GUPSIniValueCache.PlatformValues._64_8_;
    }
    uVar1 = *(uint *)(lVar10 + (ulonglong)(GUPSIniValueCache.PlatformValues._72_4_ - 1 & uVar4) * 4)
    ;
    while (uVar1 != 0xffffffff) {
      puVar9 = (uint *)((longlong)(int)uVar1 * 0x10 + GUPSIniValueCache.PlatformValues._0_8_);
      if (*puVar9 == uVar4) {
        puVar6 = puVar9 + 1;
        if (puVar9 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        if (puVar6 != (uint *)0x0) {
          cVar12 = (char)*puVar6;
          goto LAB_141f7208c;
        }
        break;
      }
      uVar1 = puVar9[2];
    }
  }
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 8))(param_1,local_28);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)*puVar5;
  }
  pFVar7 = FName::FName(&local_res18,pwVar11);
  this = FConfigCacheIni::ForPlatform(*pFVar7);
  this_00 = FConfigCacheIni::FindConfigFile(this,&GEngineIni);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  FString::FString((FString *)local_38,L"Core.System");
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar8 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                   *)this_00,(FString *)local_38);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (((pFVar8 == (FConfigSection *)0x0) ||
      (bVar2 = FConfigSection::GetBool
                         (pFVar8,L"CanUseUnversionedPropertySerialization",(bool *)local_res10),
      !bVar2)) || (local_res10[0]._0_1_ == (FScriptContainerElement)0x0)) {
    local_res8[0] = '\0';
  }
  else {
    local_res8[0] = '\x01';
  }
  if (bVar3 != 0) {
    if (local_res8[0] != '\0') {
      FString::FString((FString *)local_38,L"Core.System");
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      pFVar8 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
               ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                       *)this_00,(FString *)local_38);
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_38._0_8_);
      }
      if (((pFVar8 != (FConfigSection *)0x0) &&
          (bVar2 = FConfigSection::GetBool
                             (pFVar8,L"CanUseUnversionedPropertySerializationForServerOnly",
                              (bool *)local_res10), bVar2)) &&
         (local_res10[0]._0_1_ != (FScriptContainerElement)0x0)) {
        local_res8[0] = '\x01';
        goto LAB_141f72051;
      }
    }
    local_res8[0] = '\0';
  }
LAB_141f72051:
  local_38._0_8_ = local_res10;
  local_38._8_8_ = local_res8;
  local_res10[0] = uVar4;
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,bool_const_&>_>
            ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
              *)&GUPSIniValueCache.PlatformValues,
             (TPairInitializer<unsigned_int_&&,bool_const_&> *)&local_res18,(bool *)local_38);
  cVar12 = local_res8[0];
LAB_141f7208c:
  ReleaseSRWLockExclusive((PSRWLOCK)&GUPSIniValueCache);
  return (bool)cVar12;
}

// CanUseUnversionedPropertySerialization @ 141f720c0

bool __cdecl CanUseUnversionedPropertySerialization(void)

{
  bool bVar1;
  bool local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      bVar1 = FConfigCacheIni::GetBool
                        (GConfig,L"Core.System",L"CanUseUnversionedPropertySerialization",local_res8
                         ,&GEngineIni);
      if ((bVar1) && (local_res8[0] != false)) {
        bAllow = true;
      }
      else {
        bAllow = false;
      }
      _Init_thread_footer(&_TSS0);
    }
  }
  return bAllow;
}

// CastLogError @ 141f72160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl CastLogError(wchar_t *param_1,wchar_t *param_2)

{
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogCasts);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

// DestroyUnversionedSchema @ 141f79110

void __cdecl DestroyUnversionedSchema(UStruct *param_1)

{
  if (param_1->UnversionedGameSchema != (atomic<FUnversionedStructSchema_const_*>)0x0) {
    FMemory::Free((void *)param_1->UnversionedGameSchema);
  }
  LOCK();
  param_1->UnversionedGameSchema = (atomic<FUnversionedStructSchema_const_*>)0x0;
  UNLOCK();
  return;
}

// EmptyLinkFunctionForGeneratedCodeClass @ 141f79b50

void __cdecl EmptyLinkFunctionForGeneratedCodeClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInstancedStruct @ 141f79b60

void __cdecl EmptyLinkFunctionForGeneratedCodeInstancedStruct(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInstancedStructContainer @ 141f79b70

void __cdecl EmptyLinkFunctionForGeneratedCodeInstancedStructContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyBag @ 141f79b80

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyBag(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSharedStruct @ 141f79b90

void __cdecl EmptyLinkFunctionForGeneratedCodeSharedStruct(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUserDefinedStruct @ 141f79ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeUserDefinedStruct(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUserDefinedStructEditorUtils @ 141f79bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeUserDefinedStructEditorUtils(void)

{
  return;
}

// FindConstructorUninitialized @ 141f7b080

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FindConstructorUninitialized(UStruct *param_1,uchar *param_2,uchar *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  FProperty *pFVar15;
  FString *pFVar16;
  FString *pFVar17;
  ForAnyElementType FVar18;
  FStaticBasicLogRecord *pFVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  FProperty *pFVar22;
  FProperty *pFVar23;
  FProperty *pFVar24;
  FProperty *pFVar25;
  int iVar26;
  ForElementType<FSetElementId> FVar27;
  ulonglong uVar28;
  FProperty *pFVar29;
  FProperty *this;
  int iVar30;
  FString local_158;
  FString local_148;
  undefined1 local_138 [12];
  FName local_12c;
  FName local_124;
  FName local_11c;
  FName local_114;
  FName local_10c;
  FName local_104;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar9 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`FindConstructorUninitialized'::__l2::_dynamic_atexit_destructor_for__PrintedWarnings__);
    _Init_thread_footer(&_TSS0);
  }
  this = param_1->PropertyLink;
  if (this == (FProperty *)0x0) {
    return false;
  }
  do {
    iVar30 = this->ElementSize * this->ArrayDim;
    if ((iVar30 == 0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                            ,0xba3,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      uVar11 = (*pcVar2)();
      return (bool)uVar11;
    }
    pFVar23 = (FProperty *)0x0;
    uVar28 = *(ulonglong *)(this->_padding_ + 0x18);
    pFVar22 = this;
    if ((uVar28 >> 0x11 & 1) == 0) {
      pFVar22 = pFVar23;
    }
    pFVar29 = this;
    if ((uVar28 >> 0x14 & 1) == 0) {
      pFVar29 = pFVar23;
    }
    pFVar25 = this;
    if ((uVar28 >> 0x15 & 1) == 0) {
      pFVar25 = pFVar23;
    }
    pFVar24 = this;
    if ((uVar28 & 0x100000000000000) == 0) {
      pFVar24 = pFVar23;
    }
    pFVar15 = this;
    if ((uVar28 >> 0xe & 1) == 0) {
      pFVar15 = pFVar23;
    }
    if (pFVar15 != (FProperty *)0x0) goto LAB_141f7bbb1;
    if (pFVar22 == (FProperty *)0x0) {
      if (pFVar29 == (FProperty *)0x0) {
        if (pFVar25 == (FProperty *)0x0) {
          if (pFVar24 == (FProperty *)0x0) {
            if ((this->ArrayDim < 1) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar10)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            if ((param_3 == (uchar *)0x0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar10)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            iVar14 = this->Offset_Internal;
            if ((this->ArrayDim < 1) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar10)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            if ((param_2 == (uchar *)0x0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar10)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            iVar30 = memcmp(param_2 + this->Offset_Internal,param_3 + iVar14,(longlong)iVar30);
            bVar10 = iVar30 == 0;
          }
          else {
            pcVar2 = *(code **)(pFVar24->_padding_ + 0xb8);
            if (param_3 != (uchar *)0x0) {
              if ((pFVar24->ArrayDim < 1) &&
                 (bVar10 = FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar10)) {
                pcVar2 = (code *)swi(3);
                uVar11 = (*pcVar2)();
                return (bool)uVar11;
              }
              pFVar23 = (FProperty *)(param_3 + pFVar24->Offset_Internal);
            }
            if ((pFVar24->ArrayDim < 1) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar10)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            if ((param_2 == (uchar *)0x0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar10)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            cVar12 = (*pcVar2)(pFVar24,param_2 + pFVar24->Offset_Internal,pFVar23,0);
            bVar10 = cVar12 != '\0';
          }
        }
        else {
          pcVar2 = *(code **)(pFVar25->_padding_ + 0xb8);
          if (((param_3 != (uchar *)0x0) && (pFVar25->ArrayDim < 1)) &&
             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if ((pFVar25->ArrayDim < 1) &&
             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          if ((param_2 == (uchar *)0x0) &&
             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          cVar12 = (*pcVar2)(pFVar25);
          bVar10 = cVar12 != '\0';
        }
      }
      else {
        local_138._4_8_ = *(undefined8 *)(pFVar29[1]._padding_ + 0x18);
        FName::ToString((FName *)(local_138 + 4),&local_98);
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar18.Data = local_98.Data.AllocatorInstance.Data;
        }
        iVar30 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"BitArray");
        if (iVar30 == 0) {
LAB_141f7b514:
          bVar10 = false;
        }
        else {
          bVar8 = true;
          local_12c = *(FName *)(pFVar29[1]._padding_ + 0x18);
          FName::ToString(&local_12c,&local_a8);
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar18.Data = local_a8.Data.AllocatorInstance.Data;
          }
          iVar30 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"SparseArray");
          if (iVar30 == 0) goto LAB_141f7b514;
          bVar8 = true;
          bVar7 = true;
          local_124 = *(FName *)(pFVar29[1]._padding_ + 0x18);
          FName::ToString(&local_124,&local_b8);
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_b8.Data.ArrayNum != 0) {
            FVar18.Data = local_b8.Data.AllocatorInstance.Data;
          }
          iVar30 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"Set");
          if (iVar30 == 0) goto LAB_141f7b514;
          bVar8 = true;
          bVar7 = true;
          bVar6 = true;
          local_11c = *(FName *)(pFVar29[1]._padding_ + 0x18);
          FName::ToString(&local_11c,&local_c8);
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_c8.Data.ArrayNum != 0) {
            FVar18.Data = local_c8.Data.AllocatorInstance.Data;
          }
          iVar30 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"Map");
          if (iVar30 == 0) goto LAB_141f7b514;
          bVar8 = true;
          bVar7 = true;
          bVar6 = true;
          bVar5 = true;
          local_114 = *(FName *)(pFVar29[1]._padding_ + 0x18);
          FName::ToString(&local_114,&local_d8);
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_d8.Data.ArrayNum != 0) {
            FVar18.Data = local_d8.Data.AllocatorInstance.Data;
          }
          iVar30 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"MultiMap");
          if (iVar30 == 0) goto LAB_141f7b514;
          bVar8 = true;
          bVar7 = true;
          bVar6 = true;
          bVar5 = true;
          bVar4 = true;
          local_10c = *(FName *)(pFVar29[1]._padding_ + 0x18);
          FName::ToString(&local_10c,&local_e8);
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_e8.Data.ArrayNum != 0) {
            FVar18.Data = local_e8.Data.AllocatorInstance.Data;
          }
          iVar30 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"ShowFlags_Mirror");
          if (iVar30 == 0) goto LAB_141f7b514;
          bVar8 = true;
          bVar7 = true;
          bVar6 = true;
          bVar5 = true;
          bVar4 = true;
          bVar3 = true;
          local_104 = *(FName *)(pFVar29[1]._padding_ + 0x18);
          FName::ToString(&local_104,&local_f8);
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_f8.Data.ArrayNum != 0) {
            FVar18.Data = local_f8.Data.AllocatorInstance.Data;
          }
          iVar30 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"Pointer");
          if (iVar30 == 0) goto LAB_141f7b514;
          bVar10 = true;
        }
        if ((bVar3) &&
           (bVar3 = false, local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if ((bVar4) &&
           (bVar4 = false, local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if ((bVar5) &&
           (bVar5 = false, local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if ((bVar6) &&
           (bVar6 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((bVar8) &&
           (bVar8 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (!bVar10) goto LAB_141f7bbb1;
        if ((this->ArrayDim < 1) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        if ((param_3 == (uchar *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        iVar30 = this->Offset_Internal;
        if ((this->ArrayDim < 1) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        if ((param_2 == (uchar *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        bVar10 = FindConstructorUninitialized
                           ((UStruct *)pFVar29[1]._padding_,param_2 + this->Offset_Internal,
                            param_3 + iVar30);
        bVar10 = !bVar10;
      }
      if (!bVar10) {
LAB_141f7b979:
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        iVar30 = 0;
        if (pFVar29 == (FProperty *)0x0) {
          pFVar16 = FField::GetFullName((FField *)this,&local_58);
          pFVar17 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)param_1,&local_68,(UObject *)0x0);
          FString::ConcatFC(&local_88,pFVar17,L",");
          FString::ConcatFF(&local_148,&local_88,pFVar16);
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          local_158.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
          local_158.Data.ArrayNum = local_148.Data.ArrayNum;
          local_158.Data.ArrayMax = local_148.Data.ArrayMax;
          local_148.Data.ArrayNum = 0;
          local_148.Data.ArrayMax = 0;
          local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          FVar18.Data = local_58.Data.AllocatorInstance.Data;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
            FVar18.Data = local_58.Data.AllocatorInstance.Data;
          }
        }
        else {
          FString::operator=(&local_158,L"     From ");
          pFVar16 = FField::GetFullName((FField *)this,&local_78);
          iVar14 = (pFVar16->Data).ArrayNum;
          iVar26 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar26 = iVar30;
          }
          FString::AppendChars(&local_158,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,iVar26);
          FVar18.Data = local_78.Data.AllocatorInstance.Data;
        }
        if (FVar18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar18.Data);
        }
        if (local_158.Data.ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          iVar30 = local_158.Data.ArrayNum + -1;
          pwVar20 = (wchar_t *)local_158.Data.AllocatorInstance.Data;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar30,pwVar20);
        if (PrintedWarnings.Elements._8_4_ != PrintedWarnings.Elements._52_4_) {
          FVar27 = (ForElementType<FSetElementId>)0x154b88648;
          if (PrintedWarnings.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar27 = PrintedWarnings.Hash.SecondaryData;
          }
          iVar30 = *(int *)((longlong)FVar27 +
                           (ulonglong)(PrintedWarnings.HashSize - 1U & uVar13) * 4);
          if (iVar30 != -1) {
            uVar28 = local_158.Data._8_8_ & 0xffffffff;
            lVar21 = PrintedWarnings.Elements._0_8_;
            do {
              lVar1 = (longlong)iVar30 * 0x18;
              iVar14 = *(int *)(lVar1 + 8 + lVar21);
              if (iVar14 == (int)uVar28) {
                if (1 < iVar14) {
                  iVar14 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)(lVar1 + lVar21),
                                      (wchar_t *)local_158.Data.AllocatorInstance.Data);
                  uVar28 = local_158.Data._8_8_ & 0xffffffff;
                  bVar10 = iVar14 == 0;
                  lVar21 = PrintedWarnings.Elements._0_8_;
                  goto LAB_141f7bb24;
                }
LAB_141f7bb36:
                if (iVar30 != -1) goto LAB_141f7bba0;
                break;
              }
              bVar10 = iVar14 + (int)uVar28 == 1;
LAB_141f7bb24:
              if (bVar10) goto LAB_141f7bb36;
              iVar30 = *(int *)(lVar1 + 0x10 + lVar21);
            } while (iVar30 != -1);
          }
        }
        bVar9 = true;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&PrintedWarnings,(FString *)local_138,(bool *)&local_158);
        if (pFVar29 == (FProperty *)0x0) {
          if (2 < (byte)LogClass._0_1_) {
            pFVar19 = &LOG_Static;
            goto LAB_141f7bb82;
          }
        }
        else if (2 < (byte)LogClass._0_1_) {
          pFVar19 = &LOG_Static;
LAB_141f7bb82:
          UE::Logging::Private::BasicLog<3>(pFVar19,(FLogCategoryBase *)&LogClass);
        }
LAB_141f7bba0:
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((iVar30 != pFVar22->ElementSize) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("Size == PB->GetElementSize()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                              ,0xbb0,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      if ((pFVar22->ArrayDim < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      if ((param_2 == (uchar *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      iVar30 = pFVar22->Offset_Internal;
      if (((char)pFVar22[1]._padding_ == '\0') &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("FieldSize != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0xa4b,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      if ((*(byte *)((longlong)&pFVar22[1]._padding_ + 3) &
          param_2[(ulonglong)*(byte *)((longlong)&pFVar22[1]._padding_ + 1) + (longlong)iVar30]) !=
          0) {
        if ((pFVar22->ArrayDim < 1) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        if ((param_3 == (uchar *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        iVar30 = pFVar22->Offset_Internal;
        if (((char)pFVar22[1]._padding_ == '\0') &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("FieldSize != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0xa4b,L""), bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        if ((*(byte *)((longlong)&pFVar22[1]._padding_ + 3) &
            param_3[(ulonglong)*(byte *)((longlong)&pFVar22[1]._padding_ + 1) + (longlong)iVar30])
            == 0) goto LAB_141f7b979;
      }
    }
LAB_141f7bbb1:
    this = this->PropertyLinkNext;
    if (this == (FProperty *)0x0) {
      return bVar9;
    }
  } while( true );
}

// FindUndeclaredObjectReferencesInStructSerializers @ 141f7d0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl
FindUndeclaredObjectReferencesInStructSerializers(FAutomationTestBase *param_1,bool param_2)

{
  EPropertyObjectReferenceType EVar1;
  UScriptStruct *this;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestBase *pFVar5;
  uchar *puVar6;
  EPropertyObjectReferenceType EVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  EInternalObjectFlags EVar11;
  uint uVar12;
  EPropertyObjectReferenceType EVar13;
  UClass *pUVar14;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar15;
  wchar_t *pwVar16;
  EPropertyObjectReferenceType EVar17;
  longlong lVar18;
  EPropertyObjectReferenceType *pEVar19;
  undefined1 auStackY_3c8 [32];
  FString local_390;
  TObjectIterator<UScriptStruct> local_380;
  FAutomationTestBase *local_368;
  void *local_360;
  undefined8 local_358;
  FName local_350;
  FName local_348;
  FName local_340;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d0;
  FStructOnScope local_2c0;
  FArchiveState local_298;
  EPropertyObjectReferenceType local_208;
  FStructuredArchiveFromArchive local_1f8;
  EPropertyObjectReferenceType local_68 [4];
  EPropertyObjectReferenceType local_58 [4];
  EPropertyObjectReferenceType local_48 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  bVar4 = false;
  local_380.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.ObjectArray.ArrayNum = 0;
  local_380.ObjectArray.ArrayMax = 0;
  local_380.Index = 0xffffffff;
  local_368 = param_1;
  EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar14 = UScriptStruct::StaticClass();
  GetObjectsOfClass(pUVar14,&local_380.ObjectArray,true,RF_ClassDefaultObject,
                    EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UScriptStruct>::Advance(&local_380);
    lVar18 = (longlong)local_380.Index;
    if ((local_380.Index < 0) || (local_380.ObjectArray.ArrayNum <= local_380.Index)) {
      if (local_380.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.ObjectArray.AllocatorInstance.Data);
      }
      return !bVar4;
    }
    uVar12 = 0;
    if (local_380.Index < local_380.ObjectArray.ArrayNum) {
      uVar12 = (uint)~local_380.Index >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    this = *(UScriptStruct **)(local_380.ObjectArray.AllocatorInstance.Data + lVar18 * 8);
    if ((this->StructFlags & STRUCT_SerializeNative) != STRUCT_NoFlags) {
      if (this->bPrepareCppStructOpsCompleted == false) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_2d0,(UObject *)0x0);
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("bPrepareCppStructOpsCompleted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x8f6,
                           L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                          );
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
      }
      pEVar19 = local_68;
      local_68[0] = Strong;
      local_68[1] = 2;
      local_68[2] = 4;
      EVar17 = (this->CppStructOps->FakeVPtr->Capabilities).HasSerializerObjectReferences;
      EVar13 = None;
      do {
        plVar2 = (longlong *)this->_padding_;
        EVar1 = *pEVar19;
        local_360 = (void *)0x0;
        local_358 = 0;
        EVar7 = EVar13;
        while ((EVar13 = EVar7, plVar2 != (longlong *)0x0 && ((EVar1 & EVar13) != EVar1))) {
          cVar10 = (**(code **)(*plVar2 + 0x170))(plVar2,&local_360,EVar1);
          plVar2 = (longlong *)plVar2[9];
          EVar7 = EVar1 | EVar13;
          if (cVar10 == '\0') {
            EVar7 = EVar13;
          }
        }
        if (local_360 != (void *)0x0) {
          FMemory::Free(local_360);
        }
        pEVar19 = pEVar19 + 1;
      } while (pEVar19 != local_68 + 3);
      FStructOnScope::FStructOnScope(&local_2c0,(UStruct *)this);
      FArchiveState::FArchiveState(&local_298);
      puVar6 = local_2c0.SampleStructMemory;
      local_298.ArIsObjectReferenceCollector = '\x01';
      local_298._padding_ =
           (longlong)
           &`FindUndeclaredObjectReferencesInStructSerializers'::`2'::FTestArchive::_vftable_;
      local_208 = None;
      this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                          (&local_1f8,(FArchive *)&local_298);
      FVar15 = FStructuredArchiveFromArchive::GetSlot(this_00);
      UScriptStruct::SerializeItem(this,*(FStructuredArchiveSlot *)FVar15,puVar6,(void *)0x0);
      FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1f8);
      if (param_2) {
        if ((EVar17 & Conservative) == None) {
          local_48[0] = Strong;
          pEVar19 = local_48;
          local_48[1] = 2;
          local_48[2] = 4;
          do {
            EVar13 = *pEVar19;
            if (((EVar13 & EVar17) == EVar13) && ((EVar13 & local_208) != EVar13)) {
              LexToString(EVar13);
              pcVar3 = *(code **)(param_1->_padding_ + 0x28);
              local_340 = (FName)this->_padding_;
              FName::ToString(&local_340,&local_318);
              (**(code **)(this->_padding_ + 0x318))(this);
              FString::PrintfImpl(&local_2e8,
                                  L"Struct %s%s declares an object reference of type EPropertyObjectReferenceType::%s but does not serialize it"
                                 );
              (*pcVar3)(param_1,&local_2e8);
              if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
              }
              if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_318.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            pEVar19 = pEVar19 + 1;
          } while (pEVar19 != local_48 + 3);
        }
        else {
          local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          EVar17 = Strong;
          local_390.Data.ArrayNum = 0;
          local_390.Data.ArrayMax = 0;
          do {
            if ((EVar17 & local_208) == EVar17) {
              if (local_390.Data.ArrayNum < 2) {
                pwVar16 = LexToString(EVar17);
                FString::operator=(&local_390,pwVar16);
              }
              else {
                LexToString(EVar17);
                FString::AppendfImpl(&local_390,L" | %s");
              }
            }
            EVar17 = EVar17 * 2;
          } while (EVar17 != MAX);
          if (local_390.Data.ArrayNum < 2) {
            pwVar16 = LexToString(None);
            FString::operator=(&local_390,pwVar16);
          }
          pcVar3 = *(code **)(param_1->_padding_ + 0x28);
          local_348 = (FName)this->_padding_;
          FName::ToString(&local_348,&local_328);
          (**(code **)(this->_padding_ + 0x318))(this);
          FString::PrintfImpl(&local_2f8,
                              L"Struct %s%s declares its object references as EPropertyObjectReferenceType::Conservative which is never exact. Actual types serialized: %s"
                             );
          (*pcVar3)(param_1,&local_2f8);
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_328.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
        }
      }
      else if ((EVar17 & Conservative) == None) {
        local_58[0] = Strong;
        pEVar19 = local_58;
        local_58[1] = 2;
        local_58[2] = 4;
        do {
          EVar1 = *pEVar19;
          if (((EVar1 & local_208) == EVar1) && (((EVar13 | EVar17) & EVar1) != EVar1)) {
            LexToString(EVar1);
            pFVar5 = local_368;
            pcVar3 = *(code **)(local_368->_padding_ + 0x28);
            local_350 = (FName)this->_padding_;
            FName::ToString(&local_350,&local_338);
            (**(code **)(this->_padding_ + 0x318))(this);
            FString::PrintfImpl(&local_308,
                                L"Struct %s%s serializes an object reference of type EPropertyObjectReferenceType::%s but does not declare it"
                               );
            (*pcVar3)(pFVar5,&local_308);
            if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Data.AllocatorInstance.Data);
            }
            if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_338.Data.AllocatorInstance.Data);
            }
            bVar4 = true;
          }
          pEVar19 = pEVar19 + 1;
          param_1 = local_368;
        } while (pEVar19 != local_58 + 3);
      }
      FArchive::~FArchive((FArchive *)&local_298);
      FStructOnScope::~FStructOnScope(&local_2c0);
    }
  }
  pcVar3 = (code *)swi(3);
  uVar9 = (*pcVar3)();
  return (bool)uVar9;
}

// FindUninitializedScriptStructMembers @ 141f7d720

void __cdecl
FindUninitializedScriptStructMembers
          (UScriptStruct *param_1,EScriptStructTestCtorSyntax param_2,
          TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator> *param_3
          )

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  FFieldClass *pFVar4;
  code *pcVar5;
  uchar *puVar6;
  FField *pFVar7;
  uchar *puVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  FFieldClass *pFVar12;
  FField *pFVar13;
  FProperty **ppFVar14;
  FField *pFVar15;
  FProperty *local_res8;
  FProperty *local_res10;
  FProperty *local_res20;
  FField *local_f8;
  FScriptStructTestWrapper local_f0;
  TFieldIterator<FProperty> local_d0;
  TFieldIterator<FProperty> local_b8;
  FScriptStructTestWrapper local_a0;
  FScriptStructTestWrapper local_80;
  FScriptStructTestWrapper local_60;
  FProperty *local_40;
  
  pFVar15 = (FField *)0x0;
  local_f0.TempBuffer = (uchar *)0x0;
  local_f0.InitValue = 0xfe;
  local_f0.bTempBufferAttemptedCreate = false;
  local_60.TempBuffer = (uchar *)0x0;
  local_60.InitValue = '\0';
  local_60.bTempBufferAttemptedCreate = false;
  local_80.TempBuffer = (uchar *)0x0;
  local_80.InitValue = 0xaa;
  local_80.bTempBufferAttemptedCreate = false;
  local_a0.TempBuffer = (uchar *)0x0;
  local_a0.InitValue = 'U';
  local_a0.bTempBufferAttemptedCreate = false;
  local_b8.Field = pFVar15;
  if (param_1 != (UScriptStruct *)0x0) {
    local_b8.Field = (FField *)param_1->_padding_;
  }
  local_b8.InterfaceIndex = -1;
  local_b8.bIncludeSuper = false;
  local_b8.bIncludeDeprecated = true;
  local_b8.bIncludeInterface = false;
  local_f0.ScriptStruct = param_1;
  local_f0.ConstrutorSyntax = param_2;
  local_b8.Struct = (UStruct *)param_1;
  local_a0.ScriptStruct = param_1;
  local_a0.ConstrutorSyntax = param_2;
  local_80.ScriptStruct = param_1;
  local_80.ConstrutorSyntax = param_2;
  local_60.ScriptStruct = param_1;
  local_60.ConstrutorSyntax = param_2;
  TFieldIterator<FProperty>::IterateToNext(&local_b8);
  local_d0.bIncludeSuper = local_b8.bIncludeSuper;
  local_d0.bIncludeDeprecated = local_b8.bIncludeDeprecated;
  local_d0.InterfaceIndex = local_b8.InterfaceIndex;
  local_d0.bIncludeInterface = local_b8.bIncludeInterface;
  local_d0._23_1_ = local_b8._23_1_;
  local_d0.Struct = local_b8.Struct;
  local_d0.Field = local_b8.Field;
  if (local_b8.Field != (FField *)0x0) {
    do {
      pFVar7 = local_d0.Field;
      local_f8 = local_d0.Field;
      if (((local_d0.Field == (FField *)0x0) ||
          (((uint)(int)(local_d0.Field)->ClassPrivate->CastFlags >> 0x10 & 1) == 0)) ||
         (local_d0.Field == (FField *)0x0)) {
        if (((local_d0.Field == (FField *)0x0) ||
            (((uint)(int)(local_d0.Field)->ClassPrivate->CastFlags >> 0x1a & 1) == 0)) ||
           (local_d0.Field == (FField *)0x0)) {
          if (((local_d0.Field == (FField *)0x0) ||
              (((uint)(int)(local_d0.Field)->ClassPrivate->CastFlags >> 0x11 & 1) == 0)) ||
             (local_d0.Field == (FField *)0x0)) {
            pFVar12 = FNameProperty::StaticClass();
            pFVar13 = local_d0.Field;
            if ((pFVar12 == (FFieldClass *)0x0) &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("FieldType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x2dd,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = pFVar13->ClassPrivate;
            if (pFVar12->Id == CASTCLASS_None) {
              for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
                if (pFVar4 == pFVar12) {
                  bVar9 = true;
                  goto LAB_141f7db70;
                }
              }
              bVar9 = false;
            }
            else {
              bVar9 = (pFVar4->CastFlags & pFVar12->Id) != CASTCLASS_None;
            }
LAB_141f7db70:
            if (!bVar9) {
              pFVar12 = FStructProperty::StaticClass();
              if ((pFVar12 == (FFieldClass *)0x0) &&
                 (bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("FieldType",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x2dd,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar7->ClassPrivate;
              if (pFVar12->Id == CASTCLASS_None) {
                for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
                  if (pFVar4 == pFVar12) {
                    bVar9 = true;
                    goto LAB_141f7dbe6;
                  }
                }
                bVar9 = false;
              }
              else {
                bVar9 = (pFVar4->CastFlags & pFVar12->Id) != CASTCLASS_None;
              }
LAB_141f7dbe6:
              if (bVar9) {
                if ((pFVar7 == (FField *)0x0) ||
                   (pFVar13 = pFVar7, ((uint)(int)pFVar7->ClassPrivate->CastFlags >> 0x14 & 1) == 0)
                   ) {
                  pFVar13 = pFVar15;
                }
                if ((*(uint *)(pFVar13[2].Owner.Container.Unknown + 0xb0) >> 3 & 1) == 0)
                goto LAB_141f7dd2f;
              }
              if (local_a0.bTempBufferAttemptedCreate == false) {
                FScriptStructTestWrapper::AttemptCreateTempBuffer(&local_a0);
              }
              puVar6 = local_a0.TempBuffer;
              if (local_80.bTempBufferAttemptedCreate == false) {
                FScriptStructTestWrapper::AttemptCreateTempBuffer(&local_80);
              }
              puVar8 = local_80.TempBuffer;
              pcVar5 = *(code **)(pFVar7->_padding_ + 0xb8);
              pFVar13 = pFVar15;
              if (puVar6 != (uchar *)0x0) {
                if (((int)pFVar7[1]._padding_ < 1) &&
                   (bVar9 = FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar13 = (FField *)(puVar6 + *(int *)((longlong)&pFVar7[1].Owner.Container + 4));
              }
              if (((int)pFVar7[1]._padding_ < 1) &&
                 (bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((puVar8 == (uchar *)0x0) &&
                 (bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              cVar10 = (*pcVar5)(pFVar7,puVar8 + *(int *)((longlong)&pFVar7[1].Owner.Container + 4),
                                 pFVar13,0);
              if (cVar10 == '\0') {
                ppFVar14 = &local_40;
                goto LAB_141f7dd15;
              }
            }
          }
          else {
            if (local_60.bTempBufferAttemptedCreate == false) {
              FScriptStructTestWrapper::AttemptCreateTempBuffer(&local_60);
            }
            puVar6 = local_60.TempBuffer;
            if (((int)pFVar7[1]._padding_ < 1) &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((puVar6 == (uchar *)0x0) &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar3 = *(int *)((longlong)&pFVar7[1].Owner.Container + 4);
            if ((*(char *)&pFVar7[2].Owner.Container == '\0') &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("FieldSize != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0xa4b,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar1 = puVar6[(ulonglong)*(byte *)((longlong)&pFVar7[2].Owner.Container + 1) +
                           (longlong)iVar3];
            bVar2 = *(byte *)((longlong)&pFVar7[2].Owner.Container + 3);
            if (local_f0.bTempBufferAttemptedCreate == false) {
              FScriptStructTestWrapper::AttemptCreateTempBuffer(&local_f0);
            }
            puVar6 = local_f0.TempBuffer;
            if (((int)pFVar7[1]._padding_ < 1) &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((puVar6 == (uchar *)0x0) &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar3 = *(int *)((longlong)&pFVar7[1].Owner.Container + 4);
            if ((*(char *)&pFVar7[2].Owner.Container == '\0') &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("FieldSize != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0xa4b,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((bVar2 & bVar1) != 0) !=
                ((*(byte *)((longlong)&pFVar7[2].Owner.Container + 3) &
                 puVar6[(ulonglong)*(byte *)((longlong)&pFVar7[2].Owner.Container + 1) +
                        (longlong)iVar3]) != 0)) {
              ppFVar14 = &local_res20;
LAB_141f7dd15:
              TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
              Emplace<FProperty_const_*_const_&>(param_3,ppFVar14,(bool *)&local_f8);
            }
          }
        }
        else {
          pcVar5 = *(code **)((local_d0.Field)->_padding_ + 0x208);
          if (local_f0.bTempBufferAttemptedCreate == false) {
            FScriptStructTestWrapper::AttemptCreateTempBuffer(&local_f0);
          }
          lVar11 = (*pcVar5)(pFVar7,local_f0.TempBuffer,0);
          if (lVar11 == -0x101010101010102) {
            TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
            Emplace<FProperty_const_*_const_&>(param_3,&local_res8,(bool *)&local_f8);
          }
        }
      }
      else {
        if (local_f0.bTempBufferAttemptedCreate == false) {
          FScriptStructTestWrapper::AttemptCreateTempBuffer(&local_f0);
        }
        puVar6 = local_f0.TempBuffer;
        if (((int)pFVar7[1]._padding_ < 1) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((puVar6 == (uchar *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(puVar6 + *(int *)((longlong)&pFVar7[1].Owner.Container + 4)) ==
            -0x101010101010102) {
          TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
          Emplace<FProperty_const_*_const_&>(param_3,&local_res10,(bool *)&local_f8);
        }
      }
LAB_141f7dd2f:
      local_d0.Field = (local_d0.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_d0);
      puVar6 = local_a0.TempBuffer;
    } while (local_d0.Field != (FField *)0x0);
    if (local_a0.TempBuffer != (uchar *)0x0) {
      (**(code **)((local_a0.ScriptStruct)->_padding_ + 0x300))
                (local_a0.ScriptStruct,local_a0.TempBuffer,1);
      FMemory::Free(puVar6);
    }
    puVar6 = local_80.TempBuffer;
    if (local_80.TempBuffer != (uchar *)0x0) {
      (**(code **)((local_80.ScriptStruct)->_padding_ + 0x300))
                (local_80.ScriptStruct,local_80.TempBuffer,1);
      FMemory::Free(puVar6);
    }
    puVar6 = local_60.TempBuffer;
    if (local_60.TempBuffer != (uchar *)0x0) {
      (**(code **)((local_60.ScriptStruct)->_padding_ + 0x300))
                (local_60.ScriptStruct,local_60.TempBuffer,1);
      FMemory::Free(puVar6);
    }
    puVar6 = local_f0.TempBuffer;
    if (local_f0.TempBuffer != (uchar *)0x0) {
      (**(code **)((local_f0.ScriptStruct)->_padding_ + 0x300))
                (local_f0.ScriptStruct,local_f0.TempBuffer,1);
      FMemory::Free(puVar6);
    }
  }
  return;
}

// GetDeferredCppStructOps @ 141f81ae0

TMap<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>_>
* __cdecl GetDeferredCppStructOps(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetDeferredCppStructOps'::__l2::_dynamic_atexit_destructor_for__DeferredCppStructOps__
            );
      _Init_thread_footer(&_TSS0);
    }
  }
  return (TMap<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*,0>_>
          *)&DeferredCppStructOps;
}

// GetOrCreateUnversionedSchema @ 141f83560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUnversionedStructSchema * __cdecl GetOrCreateUnversionedSchema(UStruct *param_1,bool param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  FProperty *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FUnversionedStructSchema *pFVar11;
  ForElementType<FUnversionedPropertySerializer> FVar12;
  atomic<FUnversionedStructSchema_const_*> aVar13;
  atomic<FUnversionedStructSchema_const_*> aVar14;
  atomic<FUnversionedStructSchema_const_*> aVar15;
  int iVar16;
  undefined1 auStack_10b8 [32];
  FScriptContainerElement *local_1098;
  ForElementType<FUnversionedPropertySerializer> local_1090;
  longlong local_1088;
  longlong local_1080;
  undefined8 local_1078;
  FProperty *local_1068;
  int iStack_1060;
  undefined1 uStack_105c;
  byte bStack_105b;
  byte bStack_105a;
  undefined1 uStack_1059;
  FString local_1058;
  UStruct *local_1048;
  ForElementType<FUnversionedPropertySerializer> local_1040;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_10b8;
  aVar15 = param_1->UnversionedGameSchema;
  if (param_1->UnversionedGameSchema == (atomic<FUnversionedStructSchema_const_*>)0x0) {
    pFVar4 = param_1->PropertyLink;
    local_38 = 0;
    local_34 = 0x100;
    local_1040.SecondaryData = (ForElementType<FUnversionedPropertySerializer>)0x0;
    for (; local_1048 = param_1, pFVar4 != (FProperty *)0x0; pFVar4 = pFVar4->PropertyLinkNext) {
      iVar3 = pFVar4->ArrayDim;
      iVar16 = 0;
      if (0 < iVar3) {
        do {
          iStack_1060 = iVar16 * pFVar4->ElementSize + pFVar4->Offset_Internal;
          uVar5 = *(ulonglong *)(pFVar4->_padding_ + 0x18);
          if ((uVar5 >> 0x11 & 1) == 0) {
            uStack_105c = (uVar5 & 0x1000001000000) != 0;
          }
          else {
            uStack_105c = *(char *)((longlong)&pFVar4[1]._padding_ + 3) == -1;
          }
          bStack_105b = *(byte *)(pFVar4->_padding_ + 0x1f) & 1 | bStack_105b & 0xfe;
          local_1068 = pFVar4;
          uVar10 = (**(code **)(pFVar4->_padding_ + 0x168))(pFVar4);
          if (uVar10 < 8) {
            bStack_105a = (char)(uVar10 >> 1) - (char)(uVar10 >> 3);
          }
          else {
            bStack_105a = 3;
          }
          uVar6 = (ulonglong)(uint)pFVar4->ElementSize /
                  (ulonglong)(uint)(1 << (bStack_105a & 0x1f));
          uVar5 = *(ulonglong *)(pFVar4->_padding_ + 0x18);
          uVar10 = (uint)uVar6;
          if ((uVar5 & 0x120000) == 0) {
            if ((0xf < uVar10) && ((uVar5 & 0x100000000000000) == 0)) {
              bVar9 = IsThisNotNull(pFVar4,"FField::GetName");
              if (bVar9) {
                FName::ToString((FName *)&pFVar4->_padding_,&local_1058);
              }
              else {
                FString::FString(&local_1058,L"None");
              }
              local_1098 = (FScriptContainerElement *)L"";
              if (local_1058.Data.ArrayNum != 0) {
                local_1098 = local_1058.Data.AllocatorInstance.Data;
              }
              bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("GetIntNum(Property, IntType) < MaxZeroComparisons || IsOptional(CastFlags)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                 ,0xd7,L"Unexpectedly large property type encountered %s");
              if (local_1058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1058.Data.AllocatorInstance.Data);
              }
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                pFVar11 = (FUnversionedStructSchema *)(*pcVar7)();
                return pFVar11;
              }
            }
            bVar9 = (pFVar4->PropertyFlags & (CPF_NoDestructor|CPF_ZeroConstructor)) ==
                    (CPF_NoDestructor|CPF_ZeroConstructor);
          }
          else if ((uVar5 >> 0x11 & 1) == 0) {
            if (((*(byte *)(pFVar4[1]._padding_ + 0xb0) & 0x10) == 0) || (0xf < uVar10)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
          }
          else {
            bVar9 = *(char *)((longlong)&pFVar4[1]._padding_ + 3) == -1;
          }
          bVar8 = false;
          if (uVar10 < 0x100) {
            bVar8 = bVar9;
          }
          uStack_1059 = 0;
          if (bVar8) {
            uStack_1059 = (char)uVar6;
          }
          FVar12 = (ForElementType<FUnversionedPropertySerializer>)&local_1040;
          if (local_1040.SecondaryData != (ForElementType<FUnversionedPropertySerializer>)0x0) {
            FVar12 = local_1040.SecondaryData;
          }
          if ((ulonglong)FVar12 <= &local_1068) {
            FVar12 = (ForElementType<FUnversionedPropertySerializer>)&local_1040;
            if (local_1040.SecondaryData != (ForElementType<FUnversionedPropertySerializer>)0x0) {
              FVar12 = local_1040.SecondaryData;
            }
            if (&local_1068 < (FProperty **)((longlong)local_34 * 0x10 + (longlong)FVar12)) {
              local_1080 = (longlong)local_38;
              local_1078 = 0x10;
              local_1098 = (FScriptContainerElement *)&local_1068;
              local_1090 = (ForElementType<FUnversionedPropertySerializer>)&local_1040;
              if (local_1040.SecondaryData != (ForElementType<FUnversionedPropertySerializer>)0x0) {
                local_1090 = local_1040.SecondaryData;
              }
              local_1088 = (longlong)local_34;
              bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                pFVar11 = (FUnversionedStructSchema *)(*pcVar7)();
                return pFVar11;
              }
            }
          }
          if (local_38 == local_34) {
            local_38 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FUnversionedPropertySerializer>_>
                                 (0x810,&local_1040,&local_34);
          }
          iVar1 = local_38 + 1;
          FVar12 = (ForElementType<FUnversionedPropertySerializer>)&local_1040;
          if (local_1040.SecondaryData != (ForElementType<FUnversionedPropertySerializer>)0x0) {
            FVar12 = local_1040.SecondaryData;
          }
          iVar16 = iVar16 + 1;
          puVar2 = (undefined8 *)((longlong)FVar12 + (longlong)local_38 * 0x10);
          *puVar2 = local_1068;
          puVar2[1] = CONCAT17(uStack_1059,
                               CONCAT16(bStack_105a,
                                        CONCAT15(bStack_105b,CONCAT14(uStack_105c,iStack_1060))));
          local_38 = iVar1;
        } while (iVar16 < iVar3);
      }
      param_1 = local_1048;
    }
    aVar13 = (atomic<FUnversionedStructSchema_const_*>)
             FMemory::Malloc((ulonglong)(local_38 * 0x10 + 8),8);
    *(int *)aVar13 = local_38;
    FVar12 = (ForElementType<FUnversionedPropertySerializer>)&local_1040;
    if (local_1040.SecondaryData != (ForElementType<FUnversionedPropertySerializer>)0x0) {
      FVar12 = local_1040.SecondaryData;
    }
    memcpy((FUnversionedStructSchema *)((longlong)aVar13 + 8),(void *)FVar12,(longlong)local_38 << 4
          );
    if (local_1040.SecondaryData != (ForElementType<FUnversionedPropertySerializer>)0x0) {
      FMemory::Free((void *)local_1040.SecondaryData);
    }
    LOCK();
    aVar14 = param_1->UnversionedGameSchema;
    bVar9 = aVar14 == (atomic<FUnversionedStructSchema_const_*>)0x0;
    if (bVar9) {
      param_1->UnversionedGameSchema = aVar13;
      aVar14 = (atomic<FUnversionedStructSchema_const_*>)0x0;
    }
    UNLOCK();
    aVar15 = aVar13;
    if ((!bVar9) && (aVar15 = aVar14, aVar13 != (atomic<FUnversionedStructSchema_const_*>)0x0)) {
      FMemory::Free((void *)aVar13);
    }
  }
  return (FUnversionedStructSchema *)aVar15;
}

// GetPathPostfix @ 141f83a60

FString * __cdecl GetPathPostfix(FString *__return_storage_ptr__,UObject *param_1)

{
  UPackage *this;
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FString local_28;
  FString local_18;
  
  this = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
  FPackageName::GetLongPackageAssetName(&local_18,&local_28);
  iVar1 = 0;
  iVar3 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  FString::RemoveFromEnd(&local_28,(wchar_t *)FVar2.Data,iVar3,IgnoreCase);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    iVar1 = local_28.Data.ArrayNum + -1;
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  FCrc::Strihash_DEPRECATED<wchar_t>(iVar1,(wchar_t *)FVar2.Data);
  FString::PrintfImpl(__return_storage_ptr__,L"%u");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClassBody @ 141f85440

void __cdecl
GetPrivateStaticClassBody
          (wchar_t *param_1,wchar_t *param_2,UClass **param_3,_func___cdecl_void *param_4,
          uint param_5,uint param_6,EClassFlags param_7,EClassCastFlags param_8,wchar_t *param_9,
          _func___cdecl_void_FObjectInitializer_ptr *param_10,
          _func___cdecl_UObject_ptr_FVTableHelper_ptr *param_11,
          FUObjectCppClassStaticFunctions *param_12,_func___cdecl_UClass_ptr *param_13,
          _func___cdecl_UClass_ptr *param_14)

{
  <lambda_1> local_18 [24];
  
  UECodeGen_Private::
  ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14,local_18);
  return;
}

// HandlePlaceholderScriptRef @ 141f8b390

void __cdecl HandlePlaceholderScriptRef(void *param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UClass **local_res8;
  UObject *local_res10;
  UObject **local_res18 [2];
  
  local_res10 = *(UObject **)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (local_res10 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar3 = local_res10;
  if (local_res10 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    pUVar4 = local_res10;
    lVar2 = *(longlong *)&pUVar3->field_0x10;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      local_res18[0] = &local_res10;
      TSet<UClass_*_*,DefaultKeyFuncs<UClass_*_*,0>,FDefaultSetAllocator>::
      Emplace<UClass_*_*_const_&>
                ((TSet<UClass_*_*,DefaultKeyFuncs<UClass_*_*,0>,FDefaultSetAllocator> *)
                 &pUVar3[0x14].field_0x8,&local_res8,(bool *)local_res18);
      return;
    }
    if (local_res10 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
      lVar2 = *(longlong *)&pUVar4->field_0x10;
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        local_res18[0] = &local_res10;
        TSet<UFunction_*_*,DefaultKeyFuncs<UFunction_*_*,0>,FDefaultSetAllocator>::
        Emplace<UFunction_*_*_const_&>
                  ((TSet<UFunction_*_*,DefaultKeyFuncs<UFunction_*_*,0>,FDefaultSetAllocator> *)
                   (pUVar4 + 0xd),(UFunction ***)&local_res8,(bool *)local_res18);
      }
    }
  }
  return;
}

// InitializePrivateStaticClass @ 141f8e070

void __cdecl
InitializePrivateStaticClass
          (_func___cdecl_UClass_ptr *param_1,UClass *param_2,UClass *param_3,UClass *param_4,
          wchar_t *param_5,wchar_t *param_6)

{
  FLoadTimeProfilerTracePrivate::OutputClassInfo(param_3,param_6);
  if (param_2 == param_3) {
    param_2 = (UClass *)0x0;
  }
  (**(code **)(param_3->_padding_ + 800))(param_3,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  (param_3->ClassWithin).field0_0x0.DebugPtr = param_4;
  (**(code **)(param_3->_padding_ + 8))(param_3);
  UObjectBase::Register((UObjectBase *)param_3,param_1,param_5,param_6);
  return;
}

// InitializePrivateStaticClass @ 141f8e110

void __cdecl
InitializePrivateStaticClass
          (UClass *param_1,UClass *param_2,UClass *param_3,wchar_t *param_4,wchar_t *param_5)

{
  FLoadTimeProfilerTracePrivate::OutputClassInfo(param_2,param_5);
  if (param_1 == param_2) {
    param_1 = (UClass *)0x0;
  }
  (**(code **)(param_2->_padding_ + 800))(param_2,param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (param_2->ClassWithin).field0_0x0.DebugPtr = param_3;
  (**(code **)(param_2->_padding_ + 8))(param_2);
  UObjectBase::Register((UObjectBase *)param_2,UClass::StaticClass,param_4,param_5);
  return;
}

// InternalSafeGetTokenStreamDirtyFlag @ 141f8fec0

FThreadSafeBool * __cdecl InternalSafeGetTokenStreamDirtyFlag(void)

{
  return &TokenStreamDirty;
}

// SerializeUnversionedProperties @ 141fa6d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SerializeUnversionedProperties
          (UStruct *param_1,FStructuredArchiveSlot param_2,uchar *param_3,UStruct *param_4,
          uchar *param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ushort *puVar6;
  FUnversionedStructSchema FVar7;
  code *pcVar8;
  FSlotBase FVar9;
  undefined8 uVar10;
  FUnversionedStructSchema FVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  uchar uVar15;
  uint uVar16;
  FArchive *pFVar17;
  FUnversionedStructSchema *pFVar18;
  UClass *pUVar19;
  FUnversionedStructSchema *pFVar20;
  longlong lVar21;
  ushort uVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  ForElementType<FUnversionedHeader::FFragment> FVar25;
  ForElementType<FUnversionedHeader::FFragment> FVar26;
  FUnversionedStructSchema *pFVar27;
  uint uVar28;
  uint uVar29;
  FArchive *pFVar30;
  uchar *puVar31;
  undefined1 auVar32 [16];
  FSlotBase local_res10 [2];
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined1 local_340 [4];
  ushort local_33c [2];
  uint local_338;
  uchar *local_330;
  FArchive *local_328;
  FSerializedPropertyScope local_320;
  FUnversionedStructSchema *local_310;
  FStructuredArchiveStream local_308;
  FUnversionedStructSchema *local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  FUnversionedStructSchema local_2d8;
  FUnversionedStructSchema FStack_2d0;
  FUnversionedStructSchema local_2c8;
  FUnversionedStructSchema FStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  FUnversionedHeader local_280;
  FUnversionedHeader local_180;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_2;
  local_330 = param_3;
  pFVar17 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  FVar9.StructuredArchive = local_res10[0].StructuredArchive;
  local_308 = (FStructuredArchiveStream)local_res10[0].StructuredArchive;
  local_328 = pFVar17;
  if ((pFVar17->field_0x28 & 1) != 0) {
    bVar12 = CanUseUnversionedPropertySerialization();
    if ((!bVar12) &&
       (bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("CanUseUnversionedPropertySerialization()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                            ,0x3d9,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar29 = 0;
    local_180.Fragments.ArrayMax = 0x20;
    local_180.Fragments.AllocatorInstance.SecondaryData =
         (ForElementType<FUnversionedHeader::FFragment>)0x0;
    local_180.Fragments.ArrayNum = 0;
    local_180.bHasNonZeroValues = false;
    local_180.ZeroMask.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_180.ZeroMask.NumBits = 0;
    local_180.ZeroMask.MaxBits = 0x100;
    FUnversionedHeader::Load(&local_180,(FStructuredArchiveStream)FVar9.StructuredArchive);
    if (0 < local_180.ZeroMask.NumBits || local_180.bHasNonZeroValues != false) {
      pFVar18 = GetOrCreateUnversionedSchema(param_1,true);
      pFVar17 = (FArchive *)(pFVar18 + 1);
      pFVar30 = (FArchive *)(pFVar18 + (ulonglong)pFVar18->Num * 2 + 1);
      local_328 = pFVar30;
      if (local_180.bHasNonZeroValues == false) {
        FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_180;
        if (local_180.Fragments.AllocatorInstance.SecondaryData !=
            (ForElementType<FUnversionedHeader::FFragment>)0x0) {
          FVar26 = local_180.Fragments.AllocatorInstance.SecondaryData;
        }
        bVar12 = 0 < local_180.ZeroMask.NumBits;
        uVar28 = uVar29;
        if (0 < local_180.ZeroMask.NumBits) {
          pFVar17 = (FArchive *)(&pFVar17->field_0x0 + (ulonglong)*(byte *)FVar26 * 0x10);
          bVar2 = *(uchar *)((longlong)FVar26 + 2);
          while (bVar2 == 0) {
            if ((*(uchar *)((longlong)FVar26 + 3) != 0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("!FragmentIt->bIsLast",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                    ,0x341,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar17 = (FArchive *)
                      (&pFVar17->field_0x0 + (ulonglong)*(uchar *)((longlong)FVar26 + 4) * 0x10);
            bVar2 = *(uchar *)((longlong)FVar26 + 6);
            FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar26 + 4);
          }
          uVar28 = (uint)*(uchar *)((longlong)FVar26 + 2);
        }
        if (bVar12) {
          do {
            do {
              if (*(uchar *)((longlong)FVar26 + 1) == 0) {
LAB_141fa72b5:
                bVar12 = FDebug::CheckVerifyFailedImpl2
                                   ("!It.IsNonZero()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                    ,0x40c,L"");
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else {
                if ((((int)uVar29 < 0) || (local_180.ZeroMask.NumBits <= (int)uVar29)) &&
                   (bVar12 = FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5c6,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FVar24 = (ForElementType<unsigned_int>)&local_180.ZeroMask;
                if (local_180.ZeroMask.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar24 = local_180.ZeroMask.AllocatorInstance.SecondaryData;
                }
                uVar16 = uVar29;
                if ((int)uVar29 < 0) {
                  uVar16 = uVar29 + 0x1f;
                }
                if ((*(uint *)((longlong)FVar24 + (longlong)((int)uVar16 >> 5) * 4) >>
                     (uVar29 & 0x1f) & 1) == 0) goto LAB_141fa72b5;
              }
              if ((pFVar17 == pFVar30) &&
                 (bVar12 = FDebug::CheckVerifyFailedImpl2
                                     ("SchemaIt != SchemaEnd",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                      ,0x326,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar23 = *(ulonglong *)&pFVar17->field_0x8;
              local_2e8 = *(undefined1 (*) [16])pFVar17;
              puVar31 = local_330 + (uVar23 & 0xffffffff);
              if ((char)(uVar23 >> 0x38) == '\0') {
                uVar10 = local_2e8._0_8_;
                if ((((uVar23 >> 0x28 & 1) == 0) || (*(int *)(local_2e8._0_8_ + 0x34) < 0x100)) &&
                   (bVar12 = FDebug::CheckVerifyFailedImpl2
                                       ("bIsOptional && Property->GetElementSize() >= 256",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                        ,0x8a,
                                        L"Only large unset optionals should hit this loading path"),
                   bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                memset(puVar31,0,(longlong)*(int *)(uVar10 + 0x34));
              }
              else {
                uVar22 = local_2e8._14_2_ & 0xff;
                bVar2 = local_2e8[0xf];
                uVar23 = (ulonglong)bVar2;
                if (local_2e8[0xe] == '\0') {
                  if (bVar2 != 0) {
                    memset(puVar31,0,uVar23);
                  }
                }
                else if (uVar22 == 1) {
                  if (bVar2 != 0) {
                    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
                      puVar31[0] = '\0';
                      puVar31[1] = '\0';
                      puVar31 = puVar31 + 2;
                    }
                  }
                }
                else if (uVar22 == 2) {
                  if (bVar2 != 0) {
                    memset(puVar31,0,(ulonglong)bVar2 << 2);
                  }
                }
                else if (bVar2 != 0) {
                  memset(puVar31,0,(ulonglong)bVar2 << 3);
                }
              }
              pFVar17 = (FArchive *)&pFVar17->field_0x10;
              uVar29 = uVar29 + *(uchar *)((longlong)FVar26 + 1);
              uVar28 = uVar28 - 1;
            } while (uVar28 != 0);
            if (*(uchar *)((longlong)FVar26 + 3) != 0) break;
            pFVar17 = (FArchive *)
                      ((longlong)pFVar17 + (ulonglong)*(uchar *)((longlong)FVar26 + 4) * 0x10);
            bVar2 = *(uchar *)((longlong)FVar26 + 6);
            FVar25 = FVar26;
            while (FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar25 + 4),
                  bVar2 == 0) {
              if ((*(uchar *)((longlong)FVar25 + 7) != 0) &&
                 (bVar12 = FDebug::CheckVerifyFailedImpl2
                                     ("!FragmentIt->bIsLast",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                      ,0x341,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar17 = (FArchive *)
                        (&pFVar17->field_0x0 + (ulonglong)*(uchar *)((longlong)FVar25 + 8) * 0x10);
              bVar2 = *(uchar *)((longlong)FVar25 + 10);
              FVar25 = FVar26;
            }
            uVar28 = (uint)*(uchar *)((longlong)FVar25 + 6);
          } while( true );
        }
      }
      else {
        if (param_5 == (uchar *)0x0) {
          local_338 = 0;
        }
        else {
          local_338 = param_4->PropertiesSize;
        }
        FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_180;
        if (local_180.Fragments.AllocatorInstance.SecondaryData !=
            (ForElementType<FUnversionedHeader::FFragment>)0x0) {
          FVar26 = local_180.Fragments.AllocatorInstance.SecondaryData;
        }
        if (0 < local_180.ZeroMask.NumBits || local_180.bHasNonZeroValues != false) {
          pFVar17 = (FArchive *)(&pFVar17->field_0x0 + (ulonglong)*(byte *)FVar26 * 0x10);
          bVar2 = *(uchar *)((longlong)FVar26 + 2);
          while (uVar29 = 0, bVar2 == 0) {
            if ((*(uchar *)((longlong)FVar26 + 3) != 0) &&
               (bVar12 = FDebug::CheckVerifyFailedImpl2
                                   ("!FragmentIt->bIsLast",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                    ,0x341,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar17 = (FArchive *)
                      (&pFVar17->field_0x0 + (ulonglong)*(uchar *)((longlong)FVar26 + 4) * 0x10);
            bVar2 = *(uchar *)((longlong)FVar26 + 6);
            FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar26 + 4);
          }
          do {
            uVar28 = (uint)*(uchar *)((longlong)FVar26 + 2);
            do {
              if (*(uchar *)((longlong)FVar26 + 1) == 0) {
LAB_141fa70a1:
                if ((pFVar17 == local_328) &&
                   (bVar12 = FDebug::CheckVerifyFailedImpl2
                                       ("SchemaIt != SchemaEnd",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                        ,0x326,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar23 = *(ulonglong *)&pFVar17->field_0x8;
                local_2b8 = *(undefined1 (*) [16])pFVar17;
                if ((char)(uVar23 >> 0x20) == '\0') {
                  if ((uint)uVar23 < local_338) {
                    puVar31 = param_5 + (uVar23 & 0xffffffff);
                  }
                  else {
                    puVar31 = (uchar *)0x0;
                  }
                  (**(code **)(*local_2b8._0_8_ + 0xc0))
                            (local_2b8._0_8_,FVar9.StructuredArchive,
                             local_330 + (uVar23 & 0xffffffff),puVar31);
                }
                else {
                  FUnversionedPropertySerializer::SerializeAsInteger
                            ((FStructuredArchiveSlot)FVar9.StructuredArchive,
                             local_330 + (uVar23 & 0xffffffff),(EIntegerType)(uVar23 >> 0x30));
                }
              }
              else {
                if ((((int)uVar29 < 0) || (local_180.ZeroMask.NumBits <= (int)uVar29)) &&
                   (bVar12 = FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5c6,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FVar24 = (ForElementType<unsigned_int>)&local_180.ZeroMask;
                if (local_180.ZeroMask.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar24 = local_180.ZeroMask.AllocatorInstance.SecondaryData;
                }
                uVar16 = uVar29;
                if ((int)uVar29 < 0) {
                  uVar16 = uVar29 + 0x1f;
                }
                if ((*(uint *)((longlong)FVar24 + (longlong)((int)uVar16 >> 5) * 4) >>
                     (uVar29 & 0x1f) & 1) == 0) goto LAB_141fa70a1;
                if ((pFVar17 == local_328) &&
                   (bVar12 = FDebug::CheckVerifyFailedImpl2
                                       ("SchemaIt != SchemaEnd",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                        ,0x326,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar23 = *(ulonglong *)&pFVar17->field_0x8;
                local_2f8 = *(undefined1 (*) [16])pFVar17;
                puVar31 = local_330 + (uVar23 & 0xffffffff);
                if ((char)(uVar23 >> 0x38) == '\0') {
                  uVar10 = local_2f8._0_8_;
                  if ((((uVar23 >> 0x28 & 1) == 0) || (*(int *)(local_2f8._0_8_ + 0x34) < 0x100)) &&
                     (bVar12 = FDebug::CheckVerifyFailedImpl2
                                         ("bIsOptional && Property->GetElementSize() >= 256",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                          ,0x8a,
                                          L"Only large unset optionals should hit this loading path"
                                         ), bVar12)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  memset(puVar31,0,(longlong)*(int *)(uVar10 + 0x34));
                }
                else {
                  uVar22 = local_2f8._14_2_ & 0xff;
                  bVar2 = local_2f8[0xf];
                  uVar23 = (ulonglong)bVar2;
                  if (local_2f8[0xe] == '\0') {
                    if (bVar2 != 0) {
                      memset(puVar31,0,uVar23);
                    }
                  }
                  else if (uVar22 == 1) {
                    if (bVar2 != 0) {
                      for (; uVar23 != 0; uVar23 = uVar23 - 1) {
                        puVar31[0] = '\0';
                        puVar31[1] = '\0';
                        puVar31 = puVar31 + 2;
                      }
                    }
                  }
                  else if (uVar22 == 2) {
                    if (bVar2 != 0) {
                      memset(puVar31,0,(ulonglong)bVar2 << 2);
                    }
                  }
                  else if (bVar2 != 0) {
                    memset(puVar31,0,(ulonglong)bVar2 << 3);
                  }
                }
              }
              pFVar17 = (FArchive *)&pFVar17->field_0x10;
              uVar29 = uVar29 + *(uchar *)((longlong)FVar26 + 1);
              uVar28 = uVar28 - 1;
            } while (uVar28 != 0);
            if (*(uchar *)((longlong)FVar26 + 3) != 0) break;
            pFVar17 = (FArchive *)
                      ((longlong)pFVar17 + (ulonglong)*(uchar *)((longlong)FVar26 + 4) * 0x10);
            bVar2 = *(uchar *)((longlong)FVar26 + 6);
            FVar25 = FVar26;
            while (FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar25 + 4),
                  bVar2 == 0) {
              if ((*(uchar *)((longlong)FVar25 + 7) != 0) &&
                 (bVar12 = FDebug::CheckVerifyFailedImpl2
                                     ("!FragmentIt->bIsLast",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                      ,0x341,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar17 = (FArchive *)
                        (&pFVar17->field_0x0 + (ulonglong)*(uchar *)((longlong)FVar25 + 8) * 0x10);
              bVar2 = *(uchar *)((longlong)FVar25 + 10);
              FVar25 = FVar26;
            }
          } while( true );
        }
      }
    }
    FVar26 = local_180.Fragments.AllocatorInstance.SecondaryData;
    if (local_180.ZeroMask.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_180.ZeroMask.AllocatorInstance.SecondaryData);
      FVar26 = local_180.Fragments.AllocatorInstance.SecondaryData;
    }
    goto joined_r0x000141fa7d8c;
  }
  if ((pFVar17->field_0x2a & 4) == 0) {
    if (param_5 == (uchar *)0x0) {
      if (param_1 != (UStruct *)0x0) {
        pUVar19 = UClass::StaticClass();
        iVar3 = (int)pUVar19->_padding_;
        if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar19->_padding_)) goto LAB_141fa74e4;
      }
      goto LAB_141fa74f1;
    }
LAB_141fa74e4:
    bVar12 = false;
  }
  else {
LAB_141fa74f1:
    bVar12 = true;
  }
  if (param_5 == (uchar *)0x0) {
    local_338 = 0;
  }
  else {
    local_338 = param_4->PropertiesSize;
  }
  pFVar20 = GetOrCreateUnversionedSchema(param_1,true);
  uVar29 = pFVar20->Num;
  pFVar18 = pFVar20 + 1;
  local_280.Fragments.AllocatorInstance.SecondaryData =
       (ForElementType<FUnversionedHeader::FFragment>)0x0;
  local_280.Fragments.ArrayMax = 0x20;
  local_280.bHasNonZeroValues = false;
  local_280.ZeroMask.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_280.ZeroMask.NumBits = 0;
  local_280.ZeroMask.MaxBits = 0x100;
  local_280.Fragments.ArrayNum = 1;
  local_310 = pFVar20 + (ulonglong)uVar29 * 2 + 1;
  local_300 = pFVar18;
  DefaultConstructItems<FUnversionedHeader::FFragment,int>(&local_280,1);
  pFVar27 = pFVar18;
  for (; pFVar18 != pFVar20 + (ulonglong)uVar29 * 2 + 1; pFVar18 = pFVar18 + 2) {
    FVar7 = *pFVar18;
    FStack_2d0 = pFVar18[1];
    local_2d8 = FVar7;
    bVar13 = FProperty::ShouldSerializeValue((FProperty *)FVar7,pFVar17);
    FVar11 = FStack_2d0;
    if (bVar13) {
      auVar32._8_8_ = FStack_2d0;
      auVar32._0_8_ = local_2d8;
      if (!bVar12) {
        if (FStack_2d0.Num < local_338) {
          puVar31 = param_5 + ((ulonglong)FStack_2d0 & 0xffffffff);
        }
        else {
          puVar31 = (uchar *)0x0;
        }
        cVar14 = (**(code **)(*(longlong *)FVar7 + 0xb8))
                           (FVar7,local_330 + ((ulonglong)FStack_2d0 & 0xffffffff),puVar31,
                            *(undefined4 *)&pFVar17->field_0x34);
        if (cVar14 != '\0') goto LAB_141fa774c;
        auVar32._8_8_ = FStack_2d0;
        auVar32._0_8_ = local_2d8;
      }
      cVar14 = auVar32[0xf];
      if ((auVar32._12_4_ >> 8 & 1) == 0) {
        if (cVar14 == '\x01') {
          bVar13 = (bool)(*(code *)(&`private:_static_bool___cdecl_FUnversionedPropertySerializer::IsIntZero(void_const*___ptr64,FUnversionedPropertySerializer::EIntegerType)'
                                     ::__l2::Functions)[auVar32[0xe]])
                                   (local_330 + ((ulonglong)FVar11 & 0xffffffff));
          FUnversionedHeaderBuilder::IncludeProperty((FUnversionedHeaderBuilder *)&local_280,bVar13)
          ;
          pFVar17 = local_328;
          goto LAB_141fa799d;
        }
        if ((cVar14 != '\0') &&
           (cVar14 = (*(code *)(&`private:_static_bool___cdecl_FUnversionedPropertySerializer::IsIntRangeZero(void_const*___ptr64,unsigned_int,FUnversionedPropertySerializer::EIntegerType)'
                                 ::__l2::Functions)[auVar32[0xe]])
                               (local_330 + ((ulonglong)FVar11 & 0xffffffff),cVar14), cVar14 != '\0'
           )) goto LAB_141fa7732;
      }
      else if (cVar14 != '\0') {
        puVar31 = local_330 + ((ulonglong)FVar11 & 0xffffffff);
        cVar14 = (**(code **)(*(longlong *)((FProperty *)((longlong)FVar7 + 0x70))->_padding_ +
                             0x1a8))();
        plVar5 = (longlong *)((FProperty *)((longlong)FVar7 + 0x70))->_padding_;
        lVar21 = *plVar5;
        if (cVar14 == '\0') {
          cVar14 = (**(code **)(lVar21 + 0x1a8))();
          if ((cVar14 != '\0') &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                  ,0xa0,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar21 = ((FProperty *)((longlong)FVar7 + 0x70))->_padding_;
          uVar15 = puVar31[*(int *)(lVar21 + 0x34) * *(int *)(lVar21 + 0x30)];
        }
        else {
          uVar15 = (**(code **)(lVar21 + 0x1b8))(plVar5,puVar31);
        }
        if (uVar15 == '\0') {
LAB_141fa7732:
          FUnversionedHeaderBuilder::IncludeProperty((FUnversionedHeaderBuilder *)&local_280,true);
          pFVar17 = local_328;
          goto LAB_141fa799d;
        }
      }
      FUnversionedHeaderBuilder::IncludeProperty((FUnversionedHeaderBuilder *)&local_280,false);
      pFVar17 = local_328;
    }
    else {
LAB_141fa774c:
      uVar16 = local_280.Fragments.ArrayNum - 1;
      uVar28 = 0;
      if ((int)uVar16 < local_280.Fragments.ArrayNum) {
        uVar28 = ~uVar16 >> 0x1f;
      }
      if (uVar28 == 0) {
        local_358 = (longlong)(int)uVar16;
        local_350 = (longlong)local_280.Fragments.ArrayNum;
        bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar28 = local_280.Fragments.ArrayNum - 1;
      FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_280;
      if (local_280.Fragments.AllocatorInstance.SecondaryData !=
          (ForElementType<FUnversionedHeader::FFragment>)0x0) {
        FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
      }
      if (((uchar *)((longlong)FVar26 + 2))[(longlong)(int)uVar28 * 4] == 0) {
        uVar16 = 0;
        if ((int)uVar28 < local_280.Fragments.ArrayNum) {
          uVar16 = ~uVar28 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_350 = (longlong)local_280.Fragments.ArrayNum;
          local_358 = (longlong)(int)uVar28;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_280;
        if (local_280.Fragments.AllocatorInstance.SecondaryData !=
            (ForElementType<FUnversionedHeader::FFragment>)0x0) {
          FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
        }
        if (*(byte *)((longlong)FVar26 + (longlong)(int)(local_280.Fragments.ArrayNum - 1) * 4) ==
            0x7f) goto LAB_141fa7835;
      }
      else {
LAB_141fa7835:
        uVar16 = local_280.Fragments.ArrayNum - 1;
        uVar28 = 0;
        if ((int)uVar16 < local_280.Fragments.ArrayNum) {
          uVar28 = ~uVar16 >> 0x1f;
        }
        if (uVar28 == 0) {
          local_358 = (longlong)(int)uVar16;
          local_350 = (longlong)local_280.Fragments.ArrayNum;
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_280;
        if (local_280.Fragments.AllocatorInstance.SecondaryData !=
            (ForElementType<FUnversionedHeader::FFragment>)0x0) {
          FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
        }
        if (((uchar *)((longlong)FVar26 + 1))[(longlong)(int)(local_280.Fragments.ArrayNum - 1) * 4]
            == 0) {
          TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
                    (&local_280.ZeroMask,
                     local_280.ZeroMask.NumBits -
                     (uint)((uchar *)((longlong)FVar26 + 2))
                           [(longlong)(int)(local_280.Fragments.ArrayNum - 1) * 4],
                     (uint)((uchar *)((longlong)FVar26 + 2))
                           [(longlong)(int)(local_280.Fragments.ArrayNum - 1) * 4]);
        }
        if (local_280.Fragments.ArrayNum == local_280.Fragments.ArrayMax) {
          local_280.Fragments.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FUnversionedHeader::FFragment>_>
                         (0x104,(ForElementType<FUnversionedHeader::FFragment> *)&local_280,
                          &local_280.Fragments.ArrayMax);
        }
        lVar21 = (longlong)local_280.Fragments.ArrayNum;
        FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_280;
        if (local_280.Fragments.AllocatorInstance.SecondaryData !=
            (ForElementType<FUnversionedHeader::FFragment>)0x0) {
          FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
        }
        local_280.Fragments.ArrayNum = local_280.Fragments.ArrayNum + 1;
        DefaultConstructItems<FUnversionedHeader::FFragment,int>
                  ((byte *)((longlong)FVar26 + lVar21 * 4),1);
      }
      uVar16 = local_280.Fragments.ArrayNum - 1;
      uVar28 = 0;
      if ((int)uVar16 < local_280.Fragments.ArrayNum) {
        uVar28 = ~uVar16 >> 0x1f;
      }
      if (uVar28 == 0) {
        local_358 = (longlong)(int)uVar16;
        local_350 = (longlong)local_280.Fragments.ArrayNum;
        bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_280;
      if (local_280.Fragments.AllocatorInstance.SecondaryData !=
          (ForElementType<FUnversionedHeader::FFragment>)0x0) {
        FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
      }
      pbVar1 = (byte *)((longlong)FVar26 + (longlong)(int)(local_280.Fragments.ArrayNum - 1) * 4);
      *pbVar1 = *pbVar1 + 1;
    }
LAB_141fa799d:
    pFVar27 = local_300;
    FVar9.StructuredArchive = (FStructuredArchive *)local_308;
  }
  FUnversionedHeaderBuilder::Finalize((FUnversionedHeaderBuilder *)&local_280);
  iVar3 = local_280.Fragments.ArrayNum;
  uVar23 = (ulonglong)local_280.Fragments.ArrayNum;
  FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_280;
  if (local_280.Fragments.AllocatorInstance.SecondaryData !=
      (ForElementType<FUnversionedHeader::FFragment>)0x0) {
    FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
  }
  FVar25 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar26 + uVar23 * 4);
  while( true ) {
    if ((uint)uVar23 != iVar3) {
      local_340[0] = 0;
      `TCheckedPointerIterator<FUnversionedHeader::FFragment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_340);
    }
    if (FVar26 == FVar25) break;
    uVar4 = *(undefined4 *)FVar26;
    local_33c[0] = -(ushort)((char)((uint)uVar4 >> 0x18) != '\0') & 0x100 |
                   -(ushort)((char)((uint)uVar4 >> 8) != '\0') & 0x80 |
                   (short)((uint)uVar4 >> 0x10) << 9 | (ushort)uVar4 & 0xff;
    pFVar17 = *(FArchive **)(*(longlong *)FVar9.StructuredArchive + 8);
    puVar6 = (ushort *)**(undefined8 **)&pFVar17->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar6 + 1) {
      if ((pFVar17->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,local_33c,2);
        uVar23 = (ulonglong)(uint)local_280.Fragments.ArrayNum;
        FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar26 + 4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar17,local_33c);
        uVar23 = (ulonglong)(uint)local_280.Fragments.ArrayNum;
        FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar26 + 4);
      }
    }
    else {
      local_33c[0] = *puVar6;
      **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 2;
      uVar23 = (ulonglong)(uint)local_280.Fragments.ArrayNum;
      FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar26 + 4);
    }
  }
  if (0 < local_280.ZeroMask.NumBits) {
    FVar24 = (ForElementType<unsigned_int>)&local_280.ZeroMask;
    if (local_280.ZeroMask.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_280.ZeroMask.AllocatorInstance.SecondaryData;
    }
    FUnversionedHeader::SaveZeroMaskData
              (&local_280,(FStructuredArchiveStream)FVar9.StructuredArchive,
               local_280.ZeroMask.NumBits,(uint *)FVar24);
  }
  if (local_280.bHasNonZeroValues != false) {
    FVar26 = (ForElementType<FUnversionedHeader::FFragment>)&local_280;
    if (local_280.Fragments.AllocatorInstance.SecondaryData !=
        (ForElementType<FUnversionedHeader::FFragment>)0x0) {
      FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
    }
    uVar29 = 0;
    if (0 < local_280.ZeroMask.NumBits || local_280.bHasNonZeroValues != false) {
      pFVar27 = pFVar27 + (ulonglong)*(byte *)FVar26 * 2;
      bVar2 = *(uchar *)((longlong)FVar26 + 2);
      pFVar17 = local_328;
      while (local_328 = pFVar17, bVar2 == 0) {
        if ((*(uchar *)((longlong)FVar26 + 3) != 0) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("!FragmentIt->bIsLast",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                ,0x341,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar27 = pFVar27 + (ulonglong)*(uchar *)((longlong)FVar26 + 4) * 2;
        bVar2 = *(uchar *)((longlong)FVar26 + 6);
        FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar26 + 4);
        pFVar17 = local_328;
      }
      do {
        uVar28 = (uint)*(uchar *)((longlong)FVar26 + 2);
        do {
          if (*(uchar *)((longlong)FVar26 + 1) == 0) {
LAB_141fa7bf2:
            pFVar18 = local_310;
            if ((pFVar27 == local_310) &&
               (bVar12 = FDebug::CheckVerifyFailedImpl2
                                   ("SchemaIt != SchemaEnd",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                    ,0x326,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_320.Property = *(FProperty **)pFVar27;
            FStack_2c0 = pFVar27[1];
            local_320.Ar = pFVar17;
            local_2c8 = (FUnversionedStructSchema)local_320.Property;
            FSerializedPropertyScope::PushProperty(&local_320);
            if ((pFVar27 == pFVar18) &&
               (bVar12 = FDebug::CheckVerifyFailedImpl2
                                   ("SchemaIt != SchemaEnd",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                    ,0x326,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar7 = pFVar27[1];
            local_2a8 = *(undefined1 (*) [16])pFVar27;
            if (FVar7._4_1_ == '\0') {
              if (FVar7.Num < local_338) {
                puVar31 = param_5 + ((ulonglong)FVar7 & 0xffffffff);
              }
              else {
                puVar31 = (uchar *)0x0;
              }
              (**(code **)(*local_2a8._0_8_ + 0xc0))
                        (local_2a8._0_8_,FVar9.StructuredArchive,
                         local_330 + ((ulonglong)FVar7 & 0xffffffff),puVar31);
            }
            else {
              FUnversionedPropertySerializer::SerializeAsInteger
                        ((FStructuredArchiveSlot)FVar9.StructuredArchive,
                         local_330 + ((ulonglong)FVar7 & 0xffffffff),FVar7._6_1_);
            }
            FSerializedPropertyScope::PopProperty(&local_320);
          }
          else {
            if ((((int)uVar29 < 0) || (local_280.ZeroMask.NumBits <= (int)uVar29)) &&
               (bVar12 = FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar24 = (ForElementType<unsigned_int>)&local_280.ZeroMask;
            if (local_280.ZeroMask.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar24 = local_280.ZeroMask.AllocatorInstance.SecondaryData;
            }
            uVar16 = uVar29;
            if ((int)uVar29 < 0) {
              uVar16 = uVar29 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar24 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar29 & 0x1f) &
                1) == 0) goto LAB_141fa7bf2;
          }
          pFVar27 = pFVar27 + 2;
          uVar29 = uVar29 + *(uchar *)((longlong)FVar26 + 1);
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
        if (*(uchar *)((longlong)FVar26 + 3) != 0) break;
        pFVar27 = pFVar27 + (ulonglong)*(uchar *)((longlong)FVar26 + 4) * 2;
        bVar2 = *(uchar *)((longlong)FVar26 + 6);
        FVar25 = FVar26;
        while (FVar26 = (ForElementType<FUnversionedHeader::FFragment>)((longlong)FVar25 + 4),
              bVar2 == 0) {
          if ((*(uchar *)((longlong)FVar25 + 7) != 0) &&
             (bVar12 = FDebug::CheckVerifyFailedImpl2
                                 ("!FragmentIt->bIsLast",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                                  ,0x341,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar27 = pFVar27 + (ulonglong)*(uchar *)((longlong)FVar25 + 8) * 2;
          bVar2 = *(uchar *)((longlong)FVar25 + 10);
          FVar25 = FVar26;
        }
      } while( true );
    }
  }
  FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
  if (local_280.ZeroMask.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_280.ZeroMask.AllocatorInstance.SecondaryData);
    FVar26 = local_280.Fragments.AllocatorInstance.SecondaryData;
  }
joined_r0x000141fa7d8c:
  if (FVar26 != (ForElementType<FUnversionedHeader::FFragment>)0x0) {
    FMemory::Free((void *)FVar26);
  }
  return;
}

// StaticGetBaseStructureInternal @ 141fadbe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScriptStruct * __cdecl StaticGetBaseStructureInternal(FName param_1)

{
  UPackage *pUVar1;
  FName FVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  FName local_res8;
  FName local_res10;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_res8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    local_28.Size = 0x13;
    local_28.DataPtr = L"/Script/CoreUObject";
    pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
    CoreUObjectPkg = (UPackage *)StaticFindObjectChecked(pUVar3,(UObject *)0x0,&local_28,None);
    _Init_thread_footer(&_TSS0);
  }
  FVar2 = local_res8;
  pUVar1 = CoreUObjectPkg;
  pUVar3 = UScriptStruct::StaticClass();
  pUVar4 = (UScriptStruct *)
           StaticFindObjectFastInternal(pUVar3,(UObject *)pUVar1,FVar2,None,RF_NoFlags,Borrowed);
  if (pUVar4 == (UScriptStruct *)0x0) {
    FName::ToString(&local_res8,&local_18);
    local_res10 = (FName)CoreUObjectPkg->_padding_;
    FName::ToString(&local_res10,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pUVar4;
}

// Z_Construct_UClass_UDelegateFunction_NoRegister @ 141fb0940

UClass * __cdecl Z_Construct_UClass_UDelegateFunction_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"DelegateFunction",
               &Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton,
               UDelegateFunction::StaticRegisterNativesUDelegateFunction,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_UDelegateFunction,L"Engine",InternalConstructor<UDelegateFunction>,
               InternalVTableHelperCtorCaller<UDelegateFunction>,local_res10,UFunction::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton;
}

// Z_Construct_UClass_UEnum_NoRegister @ 141fb0a10

UClass * __cdecl Z_Construct_UClass_UEnum_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UEnum.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Enum",&Z_Registration_Info_UClass_UEnum.InnerSingleton,
               UEnum::StaticRegisterNativesUEnum,0x70,8,CLASS_Intrinsic,CASTCLASS_UEnum,L"Engine",
               InternalConstructor<UEnum>,InternalVTableHelperCtorCaller<UEnum>,local_res10,
               UField::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UEnum.InnerSingleton;
}

// Z_Construct_UClass_UFunction_NoRegister @ 141fb0ae0

UClass * __cdecl Z_Construct_UClass_UFunction_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Function",
               &Z_Registration_Info_UClass_UFunction.InnerSingleton,
               UFunction::StaticRegisterNativesUFunction,0xe8,8,CLASS_Intrinsic,CASTCLASS_UFunction,
               L"Engine",InternalConstructor<UFunction>,InternalVTableHelperCtorCaller<UFunction>,
               local_res10,UStruct::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UFunction.InnerSingleton;
}

// Z_Construct_UClass_UPropertyBagMissingObject_NoRegister @ 141fb0bb0

UClass * __cdecl Z_Construct_UClass_UPropertyBagMissingObject_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"PropertyBagMissingObject",
               &Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton,
               UPropertyBagMissingObject::StaticRegisterNativesUPropertyBagMissingObject,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyBagMissingObject>,
               InternalVTableHelperCtorCaller<UPropertyBagMissingObject>,local_res10,
               UObject::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton;
}

// Z_Construct_UClass_UPropertyBag_NoRegister @ 141fb0c70

UClass * __cdecl Z_Construct_UClass_UPropertyBag_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UPropertyBag.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"PropertyBag",
               &Z_Registration_Info_UClass_UPropertyBag.InnerSingleton,
               UPropertyBag::StaticRegisterNativesUPropertyBag,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyBag>,InternalVTableHelperCtorCaller<UPropertyBag>,
               local_res10,UScriptStruct::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UPropertyBag.InnerSingleton;
}

// Z_Construct_UClass_UScriptStruct_NoRegister @ 141fb0d40

UClass * __cdecl Z_Construct_UClass_UScriptStruct_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UScriptStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"ScriptStruct",
               &Z_Registration_Info_UClass_UScriptStruct.InnerSingleton,
               UScriptStruct::StaticRegisterNativesUScriptStruct,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_UScriptStruct,L"Engine",InternalConstructor<UScriptStruct>,
               InternalVTableHelperCtorCaller<UScriptStruct>,local_res10,UStruct::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UScriptStruct.InnerSingleton;
}

// Z_Construct_UClass_USparseDelegateFunction_NoRegister @ 141fb0e10

UClass * __cdecl Z_Construct_UClass_USparseDelegateFunction_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"SparseDelegateFunction",
               &Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton,
               USparseDelegateFunction::StaticRegisterNativesUSparseDelegateFunction,0xf8,8,
               CLASS_Intrinsic,CASTCLASS_USparseDelegateFunction,L"Engine",
               InternalConstructor<USparseDelegateFunction>,
               InternalVTableHelperCtorCaller<USparseDelegateFunction>,local_res10,
               UDelegateFunction::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton;
}

// Z_Construct_UClass_UUserDefinedStructEditorDataBase_NoRegister @ 141fb0ee0

UClass * __cdecl Z_Construct_UClass_UUserDefinedStructEditorDataBase_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"UserDefinedStructEditorDataBase",
               &Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton,
               UUserDefinedStructEditorDataBase::
               StaticRegisterNativesUUserDefinedStructEditorDataBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserDefinedStructEditorDataBase>,
               InternalVTableHelperCtorCaller<UUserDefinedStructEditorDataBase>,local_res10,
               UObject::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton;
}

// Z_Construct_UClass_UUserDefinedStruct_NoRegister @ 141fb0fa0

UClass * __cdecl Z_Construct_UClass_UUserDefinedStruct_NoRegister(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UUserDefinedStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"UserDefinedStruct",
               &Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton,
               UUserDefinedStruct::StaticRegisterNativesUUserDefinedStruct,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUserDefinedStruct>,
               InternalVTableHelperCtorCaller<UUserDefinedStruct>,local_res10,
               UScriptStruct::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UUserDefinedStruct.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EPropertyBagAlterationResult @ 141fb1070

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EPropertyBagAlterationResult(void)

{
  if (Z_Registration_Info_UEnum_EPropertyBagAlterationResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPropertyBagAlterationResult.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EPropertyBagAlterationResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPropertyBagAlterationResult.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EPropertyBagContainerType @ 141fb10b0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EPropertyBagContainerType(void)

{
  if (Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EPropertyBagContainerType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EPropertyBagMissingEnum @ 141fb10f0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EPropertyBagMissingEnum(void)

{
  if (Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EPropertyBagMissingEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EPropertyBagResult @ 141fb1130

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EPropertyBagResult(void)

{
  if (Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EPropertyBagResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton;
}

// Z_Construct_UScriptStruct_FConstSharedStruct @ 141fb1170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstSharedStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstSharedStruct.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstSharedStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstSharedStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstSharedStruct.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstSharedStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInstancedPropertyBag @ 141fb11f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInstancedPropertyBag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInstancedPropertyBag.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInstancedPropertyBag.InnerSingleton,
               &Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInstancedPropertyBag.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FInstancedPropertyBag.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInstancedStructContainer @ 141fb1270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInstancedStructContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStructContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInstancedStructContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInstancedStructContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInstancedStructContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPropertyBagMissingStruct @ 141fb12f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPropertyBagMissingStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData @ 141fb1370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDescMetaData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDescMetaData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDescMetaData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDescMetaData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSharedStruct @ 141fb13f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSharedStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSharedStruct.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSharedStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FSharedStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSharedStruct.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSharedStruct.InnerSingleton;
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

// NetSerializeScriptStructDelegate'' @ 15034e9a0

void __cdecl
`dynamic_atexit_destructor_for_'FInstancedStruct::NetSerializeScriptStructDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FInstancedStruct::NetSerializeScriptStructDelegate,(FWriteAccessScope *)&local_28);
  if ((FInstancedStruct::NetSerializeScriptStructDelegate._16_4_ != 0) &&
     (FInstancedStruct::NetSerializeScriptStructDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FInstancedStruct::NetSerializeScriptStructDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FInstancedStruct::NetSerializeScriptStructDelegate.field_0x8,0,
               0,0x10);
    FInstancedStruct::NetSerializeScriptStructDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FInstancedStruct::NetSerializeScriptStructDelegate._8_8_ != 0) {
    FMemory::Free((void *)FInstancedStruct::NetSerializeScriptStructDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FInstancedStruct::NetSerializeScriptStructDelegate);
  return;
}

// RootNodeID'' @ 15034ea40

void __cdecl `dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data;
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BitMappings'' @ 15034ea60

void __cdecl FBitSetSerializationDictionary::_dynamic_atexit_destructor_for__BitMappings__(void)

{
  BitMappings._72_4_ = 0;
  if (BitMappings._64_8_ != 0) {
    FMemory::Free((void *)BitMappings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&BitMappings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnforceValidName'' @ 15034eaa0

void __cdecl _dynamic_atexit_destructor_for__CVarEnforceValidName__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnforceValidName);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOSUseForCooking'' @ 15034eac0

void __cdecl UE::OS::_dynamic_atexit_destructor_for__CVarOSUseForCooking__(void)

{
  CVarOSUseForCooking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOSUseForCooking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarValidateReplicatedPropertyRegistration'' @ 15034eae0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarValidateReplicatedPropertyRegistration__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarValidateReplicatedPropertyRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'DeferredCppStructOps'' @ 15034eb00

void __cdecl
`GetDeferredCppStructOps'::__l2::_dynamic_atexit_destructor_for__DeferredCppStructOps__(void)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMapWithAutoCleanup *local_40;
  int iStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iStack_38 = 0;
  local_20 = 0;
  uStack_34 = 1;
  iStack_24 = 0;
  if (DeferredCppStructOps._40_4_ != 0) {
    puVar4 = (uint *)&DeferredCppStructOps.field_0x10;
    if (DeferredCppStructOps._32_8_ != 0) {
      puVar4 = (uint *)DeferredCppStructOps._32_8_;
    }
    uVar2 = *puVar4;
    while (uVar2 == 0) {
      lVar3 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = DeferredCppStructOps._40_4_;
      if ((int)(DeferredCppStructOps._40_4_ + -1 +
               (DeferredCppStructOps._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38)
      goto LAB_15034eb9c;
      uVar2 = puVar4[lVar3 + 1];
    }
    uStack_34 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iStack_24 = (int)lVar3 + -1 + local_20;
    if ((int)DeferredCppStructOps._40_4_ < iStack_24) {
      iStack_24 = DeferredCppStructOps._40_4_;
    }
  }
LAB_15034eb9c:
  local_40 = &DeferredCppStructOps;
  local_30 = 0x154b885d0;
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&DeferredCppStructOps.field_0x10;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < (int)DeferredCppStructOps._40_4_) {
    do {
      ::operator_delete(*(void **)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                                  DeferredCppStructOps._0_8_),0x10);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  DeferredCppStructOps._72_4_ = 0;
  if (DeferredCppStructOps._64_8_ != 0) {
    FMemory::Free((void *)DeferredCppStructOps._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,UScriptStruct::ICppStructOps_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&DeferredCppStructOps);
  return;
}

// `dynamic_atexit_destructor_for_'ErrorResult'' @ 15034ec90

void __cdecl
`FAssetRegistryTagsContext::FindOrAddTagInternal'::__l5::
_dynamic_atexit_destructor_for__ErrorResult__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorResult.Value.Data.AllocatorInstance.Data;
  if (ErrorResult.Value.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorResult.Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FAutomationTestAttemptToFindUninitializedScriptStructMembersAutomationTestInstance'' @ 15034ecb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAutomationTestAttemptToFindUninitializedScriptStructMembersAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FAutomationTestAttemptToFindUninitializedScriptStructMembersAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FAutomationTestFindInexactObjectReferencesInStructSerializersAutomationTestInstance'' @ 15034ecd0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAutomationTestFindInexactObjectReferencesInStructSerializersAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FAutomationTestFindInexactObjectReferencesInStructSerializersAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FAutomationTestFindUndeclaredObjectReferencesInStructSerializersAutomationTestInstance'' @ 15034ecf0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAutomationTestFindUndeclaredObjectReferencesInStructSerializersAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FAutomationTestFindUndeclaredObjectReferencesInStructSerializersAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FTestUninitializedStructMemberTestInstance'' @ 15034ed10

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTestUninitializedStructMemberTestInstance__
          (void)

{
  if (FTestUninitializedStructMemberTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FTestUninitializedStructMemberTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTestUninitializedStructMemberTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FeedbackContextImportDefaults'' @ 15034ed40

void __cdecl
`UClass::GetDefaultPropertiesFeedbackContext'::__l2::
_dynamic_atexit_destructor_for__FeedbackContextImportDefaults__(void)

{
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)&FeedbackContextImportDefaults);
  return;
}

// `dynamic_atexit_destructor_for_'GCmdListBadScriptStructs'' @ 15034ed60

void __cdecl _dynamic_atexit_destructor_for__GCmdListBadScriptStructs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCmdListBadScriptStructs);
  return;
}

// `dynamic_atexit_destructor_for_'GInstancedStructCustomVersion'' @ 15034ed80

void __cdecl _dynamic_atexit_destructor_for__GInstancedStructCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GInstancedStructCustomVersion.Registration.Key);
  return;
}

// `dynamic_atexit_destructor_for_'GPropertyBagCustomVersion'' @ 15034eda0

void __cdecl _dynamic_atexit_destructor_for__GPropertyBagCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GPropertyBagCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'GPropertyBagLock'' @ 15034edc0

void __cdecl UE::StructUtils::Private::_dynamic_atexit_destructor_for__GPropertyBagLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015034edc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GPropertyBagLock);
  return;
}

// `dynamic_atexit_destructor_for_'GUPSIniValueCache'' @ 15034ede0

void __cdecl _dynamic_atexit_destructor_for__GUPSIniValueCache__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  GUPSIniValueCache.PlatformValues._72_4_ = 0;
  if (GUPSIniValueCache.PlatformValues._64_8_ != 0) {
    FMemory::Free((void *)GUPSIniValueCache.PlatformValues._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GUPSIniValueCache.PlatformValues);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&GUPSIniValueCache);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00015034ee27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&GUPSIniValueCache);
    return;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogCasts'' @ 15034ee60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCasts__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCasts);
  return;
}

// `dynamic_atexit_destructor_for_'LogClass'' @ 15034ee80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogClass__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogClass);
  return;
}

// `dynamic_atexit_destructor_for_'LogScriptSerialization'' @ 15034eea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogScriptSerialization__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogScriptSerialization);
  return;
}

// `dynamic_atexit_destructor_for_'LogStructUtils'' @ 15034eec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStructUtils__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStructUtils);
  return;
}

// `dynamic_atexit_destructor_for_'PlaceholderTag'' @ 15034eee0

void __cdecl
`FAssetRegistryTagsContext::FindOrAddCookTag'::__l5::
_dynamic_atexit_destructor_for__PlaceholderTag__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlaceholderTag.Value.Data.AllocatorInstance.Data;
  if (PlaceholderTag.Value.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlaceholderTag.Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PrintedWarnings'' @ 15034ef00

void __cdecl
`FindConstructorUninitialized'::__l2::_dynamic_atexit_destructor_for__PrintedWarnings__(void)

{
  PrintedWarnings.HashSize = 0;
  if (PrintedWarnings.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)PrintedWarnings.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&PrintedWarnings.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'RemoteObjectId_Ops'' @ 15034ef40

void __cdecl _dynamic_atexit_destructor_for__RemoteObjectId_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = RemoteObjectId_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'RemoteObjectReference_Ops'' @ 15034ef70

void __cdecl _dynamic_atexit_destructor_for__RemoteObjectReference_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = RemoteObjectReference_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'RemoteServerId_Ops'' @ 15034efa0

void __cdecl _dynamic_atexit_destructor_for__RemoteServerId_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = RemoteServerId_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 15034efd0

void __cdecl
`FAnsiStrProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructPackageMap'' @ 15034eff0

void __cdecl
`FStructUtils::FindStructureInPackageChecked'::__l5::
_dynamic_atexit_destructor_for__StaticStructPackageMap__(void)

{
  StaticStructPackageMap._72_4_ = 0;
  if (StaticStructPackageMap._64_8_ != 0) {
    FMemory::Free((void *)StaticStructPackageMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&StaticStructPackageMap);
  return;
}

// `dynamic_atexit_destructor_for_'TrackerMap'' @ 15034f030

void __cdecl FBitSetSerializationDictionary::_dynamic_atexit_destructor_for__TrackerMap__(void)

{
  TrackerMap._72_4_ = 0;
  if (TrackerMap._64_8_ != 0) {
    FMemory::Free((void *)TrackerMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructTracker_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructTracker_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FStructTracker_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TrackerMap);
  return;
}

