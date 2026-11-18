// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 182

// NameTokenStoreName'' @ 140f82ae0

void __cdecl `dynamic_initializer_for_'UE::Net::FNameTokenStore::NameTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FNameTokenStore::NameTokenStoreName,L"NameTokenStore");
  return;
}

// StringTokenStoreName'' @ 140f82b00

void __cdecl `dynamic_initializer_for_'UE::Net::FStringTokenStore::StringTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FStringTokenStore::StringTokenStoreName,L"StringTokenStore");
  return;
}

// `dynamic_initializer_for_'CVarAllowRPCsOnDormantObjects'' @ 140f82b20

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarAllowRPCsOnDormantObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowRPCsOnDormantObjects,L"net.Iris.RPC.AllowOnDormantObjects",
             &bAllowRPCsOnDormantObjects,
             L"When true allow RPCs to be sent on dormant objects. When false block all RPCs from the moment the dormant change is requested."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowRPCsOnDormantObjects__);
  return;
}

// `dynamic_initializer_for_'CVarAutoNetFlushOnDormantRPC'' @ 140f82b70

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarAutoNetFlushOnDormantRPC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutoNetFlushOnDormantRPC,L"net.Iris.RPC.AutoNetFlushOnDormantObjects",
             &bAutoNetFlushOnDormantRPC,
             L"When true we will make an implicit NetFlush request when an RPC is sent on a dormant object. When false no replicated properties would be sent along with the RPC."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAutoNetFlushOnDormantRPC__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDeltaCompression'' @ 140f82bc0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarEnableDeltaCompression__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableDeltaCompression,L"net.Iris.EnableDeltaCompression",
             &bIsDeltaCompressionEnabled,
             L"Enable delta compression for replicated objects. Default is true.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDeltaCompression__);
  return;
}

// `dynamic_initializer_for_'CVarEnableIrisRPCs'' @ 140f82c10

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarEnableIrisRPCs__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableIrisRPCs,L"net.Iris.EnableRPCs",local_res8,
             L"If > 0 let Iris replicate and execute RPCs.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableIrisRPCs__);
  return;
}

// `dynamic_initializer_for_'CVarEnableUpdateObjectsWithDirtyConditionals'' @ 140f82c60

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarEnableUpdateObjectsWithDirtyConditionals__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableUpdateObjectsWithDirtyConditionals,
             L"net.Iris.EnableUpdateObjectsWithDirtyConditionals",
             &bEnableUpdateObjectsWithDirtyConditionals,
             L"Enable the updating subobjects with conditionals.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableUpdateObjectsWithDirtyConditionals__);
  return;
}

// `dynamic_initializer_for_'CVarEnsureIfNumGroupMembershipsExceeds'' @ 140f82cb0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarEnsureIfNumGroupMembershipsExceeds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnsureIfNumGroupMembershipsExceeds,L"net.Iris.EnsureIfNumGroupMembershipsExceeds",
             &CVarEnsureIfNumGroupMembershipsExceedsNum,
             L"If set to a positive number we will warn and ensure if an object is added to a high number of groups."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnsureIfNumGroupMembershipsExceeds__);
  return;
}

// `dynamic_initializer_for_'CVarForceFullDequantizeAndApply'' @ 140f82d00

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarForceFullDequantizeAndApply__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceFullDequantizeAndApply,L"net.iris.ForceFullDequantizeAndApply",
             &bCVarForceFullDequantizeAndApply,
             L"When enabled a full dequantize of dirty states will be used when applying received statedata regardless of traits set in the fragments."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceFullDequantizeAndApply__);
  return;
}

// `dynamic_initializer_for_'CVarMinimumNumberOfFramesBetweenBaselines'' @ 140f82d50

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarMinimumNumberOfFramesBetweenBaselines__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinimumNumberOfFramesBetweenBaselines,
             L"net.Iris.MinimumNumberOfFramesBetweenBaselines",
             &MinimumNumberOfFramesBetweenBaselines,
             L"Minimum number of frames between creation of new delta compression baselines for an object. Default is 60."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinimumNumberOfFramesBetweenBaselines__);
  return;
}

// `dynamic_initializer_for_'CVarRepFilterCullNonRelevant'' @ 140f82da0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarRepFilterCullNonRelevant__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRepFilterCullNonRelevant,L"Net.Iris.CullNonRelevant",
             &bCVarRepFilterCullNonRelevant,
             L"When enabled will cull replicated actors that are not relevant to any client.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRepFilterCullNonRelevant__);
  return;
}

// `dynamic_initializer_for_'CVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject'' @ 140f82df0

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__CVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject,
             L"Net.Iris.Filtering.ValidateNobSubObjectInScopeWithFilteredOutRootObject",
             &bCVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject,
             L"Validate there are no subobjects in scope with a filtered out root object.",0);
  atexit(
        _dynamic_atexit_destructor_for__CVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject__
        );
  return;
}

// `dynamic_initializer_for_'CVarThrottleRPCWarnings'' @ 140f82e40

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarThrottleRPCWarnings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarThrottleRPCWarnings,L"net.Iris.ThrottleRPCWarnings",&bThrottleRPCWarnings,
             L"Only log send failure warnings once per RPC type.",0);
  atexit(_dynamic_atexit_destructor_for__CVarThrottleRPCWarnings__);
  return;
}

// `dynamic_initializer_for_'GNetError_UnsupportedNetBlob'' @ 140f82e90

void __cdecl UE::Net::_dynamic_initializer_for__GNetError_UnsupportedNetBlob__(void)

{
  ::FName::FName(&GNetError_UnsupportedNetBlob,"Unsupported NetBlob type");
  return;
}

// `dynamic_initializer_for_'LogIrisChunkedDataStream'' @ 140f82eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisChunkedDataStream__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIrisChunkedDataStream,L"LogIrisChunkedDataStream",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisChunkedDataStream__);
  return;
}

// `dynamic_initializer_for_'LogIrisConditionals'' @ 140f82ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisConditionals__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIrisConditionals,L"LogIrisConditionals",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisConditionals__);
  return;
}

// `dynamic_initializer_for_'LogIrisDirtyTracker'' @ 140f82f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisDirtyTracker__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIrisDirtyTracker,L"LogIrisDirtyTracker",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisDirtyTracker__);
  return;
}

// `dynamic_initializer_for_'LogIrisGroup'' @ 140f82f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIrisGroup__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIrisGroup,L"LogIrisGroup",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIrisGroup__);
  return;
}

// `dynamic_initializer_for_'NetError_PartialNetBlobSequenceError'' @ 140f82fb0

void __cdecl UE::Net::_dynamic_initializer_for__NetError_PartialNetBlobSequenceError__(void)

{
  ::FName::FName(&NetError_PartialNetBlobSequenceError,"Out of order PartialNetBlob.");
  return;
}

// `dynamic_initializer_for_'ReplicationFiltering_MootDependentObjectTracker'' @ 140f82fd0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__ReplicationFiltering_MootDependentObjectTracker__(void)

{
  atexit(_dynamic_atexit_destructor_for__ReplicationFiltering_MootDependentObjectTracker__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h__Script_IrisCore_1678460564'' @ 140f82ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h__Script_IrisCore_1678460564__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h__Script_IrisCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h__Script_IrisCore_3092710639'' @ 140f83040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h__Script_IrisCore_3092710639__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ChunkedDataStream_ChunkedDataStream_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_AlwaysRelevantNetObjectFilter_h__Script_IrisCore_3208019822'' @ 140f83080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_AlwaysRelevantNetObjectFilter_h__Script_IrisCore_3208019822__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_AlwaysRelevantNetObjectFilter_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_FilterOutNetObjectFilter_h__Script_IrisCore_3792500946'' @ 140f830c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_FilterOutNetObjectFilter_h__Script_IrisCore_3792500946__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_FilterOutNetObjectFilter_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h__Script_IrisCore_1181930074'' @ 140f83100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h__Script_IrisCore_1181930074__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h__Script_IrisCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h__Script_IrisCore_806992105'' @ 140f83150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h__Script_IrisCore_806992105__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h__Script_IrisCore_1842368452'' @ 140f83190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h__Script_IrisCore_1842368452__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h__Script_IrisCore_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h__Script_IrisCore_493351341'' @ 140f831e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h__Script_IrisCore_493351341__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UAlwaysRelevantNetObjectFilter @ 14421ed80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAlwaysRelevantNetObjectFilter(void)

{
  if (Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.OuterSingleton,
               &Z_Construct_UClass_UAlwaysRelevantNetObjectFilter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.OuterSingleton;
}

// Z_Construct_UClass_UAlwaysRelevantNetObjectFilterConfig @ 14421edc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAlwaysRelevantNetObjectFilterConfig(void)

{
  if (Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.OuterSingleton,
               &Z_Construct_UClass_UAlwaysRelevantNetObjectFilterConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectFilter @ 14421ee00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectFilter(void)

{
  if (Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton,
               &Z_Construct_UClass_UNetObjectFilter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectFilterConfig @ 14421ee40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectFilterConfig(void)

{
  if (Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton,
               &Z_Construct_UClass_UNetObjectFilterConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton;
}

// Z_Construct_UClass_UFilterOutNetObjectFilter @ 14421f0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFilterOutNetObjectFilter(void)

{
  if (Z_Registration_Info_UClass_UFilterOutNetObjectFilter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFilterOutNetObjectFilter.OuterSingleton,
               &Z_Construct_UClass_UFilterOutNetObjectFilter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFilterOutNetObjectFilter.OuterSingleton;
}

// Z_Construct_UClass_UFilterOutNetObjectFilterConfig @ 14421f0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFilterOutNetObjectFilterConfig(void)

{
  if (Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.OuterSingleton,
               &Z_Construct_UClass_UFilterOutNetObjectFilterConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectGridFilter @ 14421f1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectGridFilter(void)

{
  if (Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton,
               &Z_Construct_UClass_UNetObjectGridFilter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectGridFilterConfig @ 14421f230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectGridFilterConfig(void)

{
  if (Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton,
               &Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectGridWorldLocFilter @ 14421f270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectGridWorldLocFilter(void)

{
  if (Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.OuterSingleton,
               &Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetObjectGridFilterProfile @ 14421f2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetObjectGridFilterProfile(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetObjectGridFilterProfile.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetObjectGridFilterProfile.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetObjectGridFilterProfile.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetObjectGridFilterProfile.InnerSingleton;
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

// NewStructOps @ 14421f330

void * __cdecl Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetObjectGridFilterProfile,&UE::CoreUObject::Private::Construct<FNetObjectGridFilterProfile>,&UE::CoreUObject::Private::ConstructForTests<FNetObjectGridFilterProfile>,&UE::CoreUObject::Private::Destruct<FNetObjectGridFilterProfile>,&UE::CoreUObject::Private::Copy<FNetObjectGridFilterProfile>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseExactCullDistance_SetBit @ 14421f460

void __cdecl
Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_bUseExactCullDistance_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// Z_Construct_UClass_UNetObjectFilterDefinitions @ 14421f470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectFilterDefinitions(void)

{
  if (Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton,
               &Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetObjectFilterDefinition @ 14421f4b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetObjectFilterDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetObjectFilterDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetObjectFilterDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetObjectFilterDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetObjectFilterDefinition.InnerSingleton;
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

// NewStructOps @ 14421f530

void * __cdecl Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetObjectFilterDefinition,&UE::CoreUObject::Private::Construct<FNetObjectFilterDefinition>,&UE::CoreUObject::Private::ConstructForTests<FNetObjectFilterDefinition>,&UE::CoreUObject::Private::Destruct<FNetObjectFilterDefinition>,&UE::CoreUObject::Private::Copy<FNetObjectFilterDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UChunkedDataStream @ 14421f570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UChunkedDataStream(void)

{
  if (Z_Registration_Info_UClass_UChunkedDataStream.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UChunkedDataStream.OuterSingleton,
               &Z_Construct_UClass_UChunkedDataStream_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UChunkedDataStream.OuterSingleton;
}

// Z_Construct_UClass_UNetBlobHandler @ 14421f5b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetBlobHandler(void)

{
  if (Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton,
               &Z_Construct_UClass_UNetBlobHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton;
}

// Z_Construct_UClass_UNetBlobHandlerDefinitions @ 14421f8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetBlobHandlerDefinitions(void)

{
  if (Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton,
               &Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetBlobHandlerDefinition @ 14421f8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetBlobHandlerDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetBlobHandlerDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetBlobHandlerDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetBlobHandlerDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetBlobHandlerDefinition.InnerSingleton;
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

// NewStructOps @ 14421f960

void * __cdecl Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetBlobHandlerDefinition,&UE::CoreUObject::Private::Construct<FNetBlobHandlerDefinition>,&UE::CoreUObject::Private::ConstructForTests<FNetBlobHandlerDefinition>,&UE::CoreUObject::Private::Destruct<FNetBlobHandlerDefinition>,&UE::CoreUObject::Private::Copy<FNetBlobHandlerDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// CallLegacyFunctionForEachOwner<`UE::Net::Private::FDequantizeAndApplyHelper::ApplyAndCallLegacyPreApplyFunction'::__l2::<lambda_1>_> @ 144220350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::
CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::ApplyAndCallLegacyPreApplyFunction_::__l2::<lambda_1>_>
          (FContext *param_1,<lambda_1> *param_2)

{
  UObject **ppUVar1;
  uint uVar2;
  FReplicationStateOwnerCollector *pFVar3;
  longlong lVar4;
  UObjectBaseUtility *this;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  TEventRef<unsigned_int> TVar10;
  UPackage *pUVar11;
  FWriteBuffer *pFVar12;
  UObject **ppUVar13;
  undefined1 auStackY_c8 [32];
  FLLMScope local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  longlong local_6c;
  FMemScope local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  undefined4 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar3 = param_1->OwnerCollector;
  if (pFVar3 != (FReplicationStateOwnerCollector *)0x0) {
    uVar2 = pFVar3->OwnerCount;
    ppUVar13 = pFVar3->Owners;
    if (((int)uVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    ppUVar1 = ppUVar13 + (int)uVar2;
    if (ppUVar13 != ppUVar1) {
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        this = (UObjectBaseUtility *)*ppUVar13;
        if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1))
        {
          ::FName::FName(&LLMScope_Name57,L"UObject/NetworkReceive");
          _Init_thread_footer(&::_TSS1);
        }
        FLLMScope::FLLMScope(&local_98,LLMScope_Name57,false,None,Default,true);
        FMemScope::FMemScope(&local_60,&LLMScope_Name57,true);
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_94 = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_94;
        }
        else {
          local_7c = *(undefined8 *)&this->field_0x18;
          TVar10 = FStringTrace::GetNameRef(&local_58);
        }
        uVar5 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_8c = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_8c;
        }
        else {
          local_74 = *(undefined8 *)(*(longlong *)&this->field_0x10 + 0x18);
          TVar10 = FStringTrace::GetNameRef(&local_50);
        }
        uVar6 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_84 = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_84;
        }
        else {
          pUVar11 = UObjectBaseUtility::GetPackage(this);
          local_6c = pUVar11->_padding_;
          TVar10 = FStringTrace::GetNameRef(&local_48);
        }
        uVar7 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          (**(code **)(*(longlong *)this + 0x220))(this);
        }
        else {
          Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_40);
          *local_40 = (int)uVar5;
          local_40[1] = (int)uVar6;
          local_40[2] = (int)uVar7;
          *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
          (**(code **)(*(longlong *)this + 0x220))(this);
          if (*(char *)(lVar4 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar12 = *(FWriteBuffer **)(lVar4 + 0x20);
          if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
            pFVar12 = Trace::Private::Writer_NextBuffer();
          }
          *pFVar12->Cursor = '\n';
          pFVar12->Cursor = pFVar12->Cursor + 1;
          pFVar12->Committed = pFVar12->Cursor;
        }
        FMemScope::~FMemScope(&local_60);
        FLLMScope::~FLLMScope(&local_98);
        ppUVar13 = ppUVar13 + 1;
      } while (ppUVar13 != ppUVar1);
    }
  }
  return;
}

// CallLegacyFunctionForEachOwner<`UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions'::__l2::<lambda_1>_> @ 144220680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::
CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions_::__l2::<lambda_1>_>
          (FContext *param_1,<lambda_1> *param_2)

{
  UObject **ppUVar1;
  uint uVar2;
  FReplicationStateOwnerCollector *pFVar3;
  longlong lVar4;
  UObjectBaseUtility *this;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  TEventRef<unsigned_int> TVar10;
  UPackage *pUVar11;
  FWriteBuffer *pFVar12;
  UObject **ppUVar13;
  undefined1 auStackY_c8 [32];
  FLLMScope local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  longlong local_6c;
  FMemScope local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  undefined4 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar3 = param_1->OwnerCollector;
  if (pFVar3 != (FReplicationStateOwnerCollector *)0x0) {
    uVar2 = pFVar3->OwnerCount;
    ppUVar13 = pFVar3->Owners;
    if (((int)uVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    ppUVar1 = ppUVar13 + (int)uVar2;
    if (ppUVar13 != ppUVar1) {
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        this = (UObjectBaseUtility *)*ppUVar13;
        if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1))
        {
          ::FName::FName(&LLMScope_Name57,L"UObject/NetworkReceive");
          _Init_thread_footer(&::_TSS1);
        }
        FLLMScope::FLLMScope(&local_98,LLMScope_Name57,false,None,Default,true);
        FMemScope::FMemScope(&local_60,&LLMScope_Name57,true);
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_94 = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_94;
        }
        else {
          local_7c = *(undefined8 *)&this->field_0x18;
          TVar10 = FStringTrace::GetNameRef(&local_58);
        }
        uVar5 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_8c = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_8c;
        }
        else {
          local_74 = *(undefined8 *)(*(longlong *)&this->field_0x10 + 0x18);
          TVar10 = FStringTrace::GetNameRef(&local_50);
        }
        uVar6 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_84 = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_84;
        }
        else {
          pUVar11 = UObjectBaseUtility::GetPackage(this);
          local_6c = pUVar11->_padding_;
          TVar10 = FStringTrace::GetNameRef(&local_48);
        }
        uVar7 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          (**(code **)(*(longlong *)this + 0x228))(this);
        }
        else {
          Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_40);
          *local_40 = (int)uVar5;
          local_40[1] = (int)uVar6;
          local_40[2] = (int)uVar7;
          *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
          (**(code **)(*(longlong *)this + 0x228))(this);
          if (*(char *)(lVar4 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar12 = *(FWriteBuffer **)(lVar4 + 0x20);
          if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
            pFVar12 = Trace::Private::Writer_NextBuffer();
          }
          *pFVar12->Cursor = '\n';
          pFVar12->Cursor = pFVar12->Cursor + 1;
          pFVar12->Committed = pFVar12->Cursor;
        }
        FMemScope::~FMemScope(&local_60);
        FLLMScope::~FLLMScope(&local_98);
        ppUVar13 = ppUVar13 + 1;
      } while (ppUVar13 != ppUVar1);
    }
  }
  return;
}

// CallLegacyFunctionForEachOwner<`UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions'::__l2::<lambda_2>_> @ 1442209b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::
CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions_::__l2::<lambda_2>_>
          (FContext *param_1,<lambda_2> *param_2)

{
  UObject **ppUVar1;
  uint uVar2;
  FReplicationStateOwnerCollector *pFVar3;
  longlong lVar4;
  UObjectBaseUtility *this;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  TEventRef<unsigned_int> TVar10;
  UPackage *pUVar11;
  FWriteBuffer *pFVar12;
  UObject **ppUVar13;
  undefined1 auStackY_c8 [32];
  FLLMScope local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  longlong local_6c;
  FMemScope local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  undefined4 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar3 = param_1->OwnerCollector;
  if (pFVar3 != (FReplicationStateOwnerCollector *)0x0) {
    uVar2 = pFVar3->OwnerCount;
    ppUVar13 = pFVar3->Owners;
    if (((int)uVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    ppUVar1 = ppUVar13 + (int)uVar2;
    if (ppUVar13 != ppUVar1) {
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        this = (UObjectBaseUtility *)*ppUVar13;
        if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1))
        {
          ::FName::FName(&LLMScope_Name57,L"UObject/NetworkReceive");
          _Init_thread_footer(&::_TSS1);
        }
        FLLMScope::FLLMScope(&local_98,LLMScope_Name57,false,None,Default,true);
        FMemScope::FMemScope(&local_60,&LLMScope_Name57,true);
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_94 = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_94;
        }
        else {
          local_7c = *(undefined8 *)&this->field_0x18;
          TVar10 = FStringTrace::GetNameRef(&local_58);
        }
        uVar5 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_8c = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_8c;
        }
        else {
          local_74 = *(undefined8 *)(*(longlong *)&this->field_0x10 + 0x18);
          TVar10 = FStringTrace::GetNameRef(&local_50);
        }
        uVar6 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          local_84 = 0;
          TVar10 = (TEventRef<unsigned_int>)&local_84;
        }
        else {
          pUVar11 = UObjectBaseUtility::GetPackage(this);
          local_6c = pUVar11->_padding_;
          TVar10 = FStringTrace::GetNameRef(&local_48);
        }
        uVar7 = *(undefined8 *)TVar10;
        if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
          (**(code **)(*(longlong *)this + 0x230))(this);
        }
        else {
          Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_40);
          *local_40 = (int)uVar5;
          local_40[1] = (int)uVar6;
          local_40[2] = (int)uVar7;
          *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
          (**(code **)(*(longlong *)this + 0x230))(this);
          if (*(char *)(lVar4 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar12 = *(FWriteBuffer **)(lVar4 + 0x20);
          if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
            pFVar12 = Trace::Private::Writer_NextBuffer();
          }
          *pFVar12->Cursor = '\n';
          pFVar12->Cursor = pFVar12->Cursor + 1;
          pFVar12->Committed = pFVar12->Cursor;
        }
        FMemScope::~FMemScope(&local_60);
        FLLMScope::~FLLMScope(&local_98);
        ppUVar13 = ppUVar13 + 1;
      } while (ppUVar13 != ppUVar1);
    }
  }
  return;
}

// CastChecked<UNetObjectGridFilterConfig,UNetObjectFilterConfig> @ 144220ce0

UNetObjectGridFilterConfig * __cdecl
CastChecked<UNetObjectGridFilterConfig,UNetObjectFilterConfig>(UNetObjectFilterConfig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetObjectFilterConfig *)0x0) {
    pFVar3 = GetTypeName<UNetObjectGridFilterConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNetObjectGridFilterConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNetObjectGridFilterConfig *)param_1;
  }
  pFVar3 = GetTypeName<UNetObjectGridFilterConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNetObjectFilterConfig>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int> @ 144220e40

void __cdecl
ConstructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
          (void *param_1,FNetObjectAttachmentQueueEntry *param_2,int param_3)

{
  FNetObjectAttachment *pFVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_3 != 0) {
    puVar2 = &param_2->SubObjectIndex;
    puVar3 = (uint *)((longlong)param_1 + 8);
    do {
      *(uint *)((longlong)puVar2 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           ((FNetObjectAttachmentQueueEntry *)(puVar2 + -2))->ConnectionId;
      puVar3[-1] = puVar2[-1];
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = 0;
      puVar3[3] = 0;
      pFVar1 = ((TRefCountPtr<UE::Net::FNetObjectAttachment> *)(puVar2 + 2))->Reference;
      *(FNetObjectAttachment **)(puVar3 + 2) = pFVar1;
      if (pFVar1 != (FNetObjectAttachment *)0x0) {
        *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
      }
      UE::Net::FNetBitArray::FNetBitArray((FNetBitArray *)(puVar3 + 4),(FNetBitArray *)(puVar2 + 4))
      ;
      puVar3 = puVar3 + 0xc;
      puVar2 = puVar2 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Net::FReplicationView::FView,UE::Net::FReplicationView::FView,int> @ 144220ef0

void __cdecl
ConstructItems<UE::Net::FReplicationView::FView,UE::Net::FReplicationView::FView,int>
          (void *param_1,FView *param_2,int param_3)

{
  double dVar1;
  double *pdVar2;
  TVector<double> *pTVar3;
  
  if (param_3 != 0) {
    pdVar2 = (double *)((longlong)param_1 + 0x10);
    pTVar3 = &param_2->Pos;
    do {
      pdVar2[-2] = *(double *)((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pdVar2);
      pdVar2[-1] = *(double *)((longlong)(pTVar3 + -1) + 0x10);
      dVar1 = (pTVar3->field0_0x0)._s_0.Y;
      *pdVar2 = (pTVar3->field0_0x0)._s_0.X;
      pdVar2[1] = dVar1;
      pdVar2[2] = (pTVar3->field0_0x0)._s_0.Z;
      dVar1 = pTVar3[1].field0_0x0._s_0.Y;
      pdVar2[3] = pTVar3[1].field0_0x0._s_0.X;
      pdVar2[4] = dVar1;
      pdVar2[5] = pTVar3[1].field0_0x0._s_0.Z;
      *(float *)(pdVar2 + 6) = *(float *)(pTVar3 + 2);
      param_3 = param_3 + -1;
      pdVar2 = pdVar2 + 9;
      pTVar3 = pTVar3 + 3;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<UE::Net::FNetRefHandle,UObject_*>,int> @ 144220f60

void __cdecl
DefaultConstructItems<TTuple<UE::Net::FNetRefHandle,UObject_*>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int> @ 144220f90

void __cdecl
DefaultConstructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,int> @ 144220fc0

void __cdecl
DefaultConstructItems<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 2;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,int> @ 144220ff0

void __cdecl
DefaultConstructItems<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,int> @ 144221020

void __cdecl
DefaultConstructItems<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined4 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined4 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined4 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      *(undefined8 *)(lVar1 + 0x74) = 0;
      *(undefined4 *)(lVar1 + 0x7c) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined8 *)(lVar1 + 0x8c) = 0;
      *(undefined4 *)(lVar1 + 0x94) = 0;
      *(undefined8 *)(lVar1 + 0x9c) = 0;
      *(undefined8 *)(lVar1 + 0xa4) = 0;
      *(undefined4 *)(lVar1 + 0xac) = 0;
      *(undefined8 *)(lVar1 + 0xb4) = 0;
      *(undefined8 *)(lVar1 + 0xbc) = 0;
      *(undefined8 *)(lVar1 + 0xc4) = 0;
      *(undefined8 *)(lVar1 + 0xcc) = 0;
      *(undefined8 *)(lVar1 + 0xd4) = 0;
      *(undefined8 *)(lVar1 + 0xdc) = 0;
      *(undefined8 *)(lVar1 + 0xf4) = 0;
      *(undefined4 *)(lVar1 + 0xfc) = 0;
      *(undefined4 *)(lVar1 + 0x100) = 0x80;
      *(undefined4 *)(lVar1 + 0x104) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x108) = 0;
      *(undefined8 *)(lVar1 + 0x114) = 0;
      *(undefined4 *)(lVar1 + 0x11c) = 0;
      *(undefined8 *)(lVar1 + 0x124) = 0;
      *(undefined8 *)(lVar1 + 300) = 0;
      *(undefined4 *)(lVar1 + 0x134) = 0;
      *(undefined8 *)(lVar1 + 0x13c) = 0;
      *(undefined8 *)(lVar1 + 0x144) = 0;
      *(undefined4 *)(lVar1 + 0x14c) = 0;
      lVar1 = lVar1 + 0x160;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UNetObjectGridFilter::FPerConnectionInfo,int> @ 144221140

void __cdecl
DefaultConstructItems<UNetObjectGridFilter::FPerConnectionInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x188);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x20;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0x80;
      puVar1[0xe] = 0xffffffff;
      puVar1[0xf] = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1[0x14] = 0;
      puVar1 = puVar1 + 0x78;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo,int> @ 1442211a0

void __cdecl
DefaultConstructItems<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DestructItems<UE::Net::Private::FChunkedDataReader::FDataChunk,unsigned_int> @ 1442211f0

void __cdecl
DestructItems<UE::Net::Private::FChunkedDataReader::FDataChunk,unsigned_int>
          (FDataChunk *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pFVar1 = (param_1->PartPayload).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Net::Private::FChunkedDataWriter::FDataChunk,unsigned_int> @ 144221230

void __cdecl
DestructItems<UE::Net::Private::FChunkedDataWriter::FDataChunk,unsigned_int>
          (FDataChunk *param_1,uint param_2)

{
  int *piVar1;
  FSendQueueEntry *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pFVar2 = (param_1->SrcEntry).Reference;
    if (pFVar2 != (FSendQueueEntry *)0x0) {
      piVar1 = &pFVar2->RefCount;
      *piVar1 = *piVar1 + -1;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int> @ 144221250

void __cdecl
DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
          (FNetObjectAttachmentQueueEntry *param_1,int param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FNetObjectAttachment *pFVar3;
  TRefCountPtr<UE::Net::FNetObjectAttachment> *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->Attachment;
    do {
      pFVar2 = (((FNetBitArray *)(pTVar4 + 1))->Storage).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = pTVar4->Reference;
      if (pFVar3 != (FNetObjectAttachment *)0x0) {
        plVar1 = &pFVar3->_padding_;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,1);
        }
      }
      pTVar4 = pTVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,int> @ 1442212b0

void __cdecl
DestructItems<UE::Net::Private::FNetObjectGroups::FNetObjectGroupMembership,int>
          (FNetObjectGroupMembership *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->GroupIndexes).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,int> @ 1442212f0

void __cdecl
DestructItems<UE::Net::Private::FReplicationConditionals::FPerConnectionInfo,int>
          (FPerConnectionInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ObjectConditionals).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,int> @ 144221330

void __cdecl
DestructItems<UE::Net::Private::FReplicationFiltering::FPerConnectionInfo,int>
          (FPerConnectionInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FNetBitArray *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->DynamicFilteredOutObjectsHysteresisAdjusted;
    do {
      UE::Net::Private::FObjectScopeHysteresisUpdater::~FObjectScopeHysteresisUpdater
                ((FObjectScopeHysteresisUpdater *)(pFVar2 + 1));
      pFVar1 = (pFVar2->Storage).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Storage.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-2].Storage.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-3].Storage.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-4].Storage.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-5].Storage.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-6].Storage.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FPerConnectionInfo *)(pFVar2 + -7))->ConnectionFilteredObjects).Storage.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FNetBitArray *)((longlong)(pFVar2 + 0xe) + 0x10);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UNetObjectGridFilter::FPerConnectionInfo,int> @ 1442213f0

void __cdecl
DestructItems<UNetObjectGridFilter::FPerConnectionInfo,int>(FPerConnectionInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->RecentObjectFrameCount).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      puVar1 = puVar1 + 0x3c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,unsigned_int> @ 144221460

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __cdecl
DestructItems<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,unsigned_int>
          (FRecvQueueEntry *param_1,uint param_2)

{
  FReferencesForImport *this;
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    this = (param_1->References).Ptr;
    if (this != (FReferencesForImport *)0x0) {
      UE::Net::FIrisPackageMapExportsUtil::FreeDynamicState(&this->QuantizedExports);
      pFVar1 = (this->MustBeMappedReferences).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      UE::Net::FIrisPackageMapExportsQuantizedType::~FIrisPackageMapExportsQuantizedType
                (&this->QuantizedExports);
      operator_delete(this,0x118);
    }
    pFVar1 = (param_1->Payload).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>,int> @ 1442214f0

void __cdecl
DestructItems<TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>,int>
          (TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>::operator()
              ((TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry> *)param_1,
               param_1->Ptr);
    param_1 = (TUniquePtr<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry,TDefaultDelete<UE::Net::Private::FChunkedDataWriter::FSendQueueEntry>_>
               *)((longlong)param_1 + 8);
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UE::Net::Private::FReplicationFiltering::ResetRemovedConnections'::__l2::<lambda_1>_&> @ 144222c50

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationFiltering::ResetRemovedConnections_::__l2::<lambda_1>_&>
          (uint *param_1,uint *param_2,uint param_3,uint param_4,
          _func___cdecl_uint_uint_uint *param_5,<lambda_1> *param_6)

{
  FScriptContainerElement *pFVar1;
  FReplicationFiltering *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint local_res20;
  uint local_58;
  
  local_58 = 0;
  local_res20 = 0;
  if (param_3 != 0) {
    lVar9 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar5 = (*param_5)(*(uint *)((longlong)param_2 + lVar9),*param_2);
      uVar10 = 0xffffffff;
      if (local_res20 == param_3 - 1) {
        uVar10 = 0xffffffff >> (-(char)param_4 & 0x1fU);
      }
      uVar5 = uVar5 & uVar10;
      uVar10 = local_58;
      for (; uVar5 != 0; uVar5 = uVar5 >> 1) {
        if ((uVar5 & 1) != 0) {
          pFVar2 = param_6->__this;
          uVar6 = 0;
          if ((int)uVar10 < (pFVar2->GroupInfos).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = 0;
          pFVar1 = (pFVar2->PerObjectInfoStorage).AllocatorInstance.Data +
                   (ulonglong)
                   (*(int *)((pFVar2->GroupInfos).AllocatorInstance.Data + (longlong)(int)uVar10 * 4
                            ) * pFVar2->PerObjectInfoStorageCountPerItem) * 4;
          uVar6 = (param_6->__this->ValidConnections).Storage.ArrayNum;
          pFVar7 = pFVar1;
          if (uVar6 != 0) {
            do {
              pFVar2 = param_6->__this;
              if (((uint)(pFVar2->ValidConnections).Storage.ArrayNum <= uVar8) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("WordIndex < (uint32)Storage.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0xa2,L"NetBitArray index out of bounds: %u / max %u"), bVar4))
              {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar8 = uVar8 + 1;
              *(uint *)pFVar7 =
                   *(uint *)pFVar7 &
                   *(uint *)(pFVar7 + ((longlong)
                                       (pFVar2->ValidConnections).Storage.AllocatorInstance.Data -
                                      (longlong)pFVar1));
              pFVar7 = pFVar7 + 4;
            } while (uVar8 < uVar6);
          }
        }
        uVar10 = uVar10 + 1;
      }
      local_res20 = local_res20 + 1;
      param_2 = param_2 + 1;
      local_58 = local_58 + 0x20;
    } while (local_res20 < param_3);
  }
  return;
}

// ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),`UE::Net::Private::FReplicationFiltering::UpdateSubObjectFilters'::__l2::<lambda_1>_&> @ 144222e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationFiltering::UpdateSubObjectFilters_::__l2::<lambda_1>_&>
          (uint *param_1,uint *param_2,uint param_3,uint param_4,
          _func___cdecl_uint_uint_uint *param_5,<lambda_1> *param_6)

{
  FReplicationFiltering *this;
  FNetObjectGroups *pFVar1;
  bool bVar2;
  uint uVar3;
  FNetObjectGroup *pFVar4;
  FPerSubObjectFilterGroupInfo *pFVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  FNetObjectGroupHandle_u_0 local_50;
  FString local_48;
  
  uVar9 = 0;
  uVar10 = 0;
  if (param_3 != 0) {
    lVar8 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar3 = (*param_5)(*(uint *)((longlong)param_2 + lVar8),*param_2);
      uVar7 = 0xffffffff;
      if (uVar10 == param_3 - 1) {
        uVar7 = 0xffffffff >> (-(char)param_4 & 0x1fU);
      }
      uVar3 = uVar3 & uVar7;
      uVar7 = uVar9;
      for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
        if ((((uVar3 & 1) != 0) &&
            (pFVar4 = Net::Private::FNetObjectGroups::GetGroupFromIndex
                                (param_6->__this->Groups,uVar7), pFVar4 != (FNetObjectGroup *)0x0))
           && ((pFVar4->Members).ArrayNum == 0)) {
          this = param_6->__this;
          pFVar5 = Net::Private::FReplicationFiltering::GetPerSubObjectFilterGroupInfo(this,uVar7);
          bVar2 = Net::Private::FReplicationFiltering::IsAnyConnectionFilterStatusAllowed
                            (this,(FPerObjectInfo *)
                                  ((this->PerObjectInfoStorage).AllocatorInstance.Data +
                                  (ulonglong)
                                  (pFVar5->ConnectionStateIndex *
                                  this->PerObjectInfoStorageCountPerItem) * 4));
          if (!bVar2) {
            if (5 < (byte)LogIrisFiltering._0_1_) {
              ::FName::ToString(&pFVar4->GroupName,&local_48);
              Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u_UpdateSubObject_150b81670,
                         (FLogCategoryBase *)&LogIrisFiltering);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            pFVar1 = param_6->__this->Groups;
            uVar6 = (uint)((longlong)pFVar4 - *(longlong *)&pFVar1->Groups >> 5);
            if (uVar6 == 0) {
              local_50.Value = 0;
            }
            else {
              local_50._s_1.UniqueId = pFVar4->GroupId;
              local_50.Value._0_4_ = pFVar1->CurrentEpoch << 0x18 | uVar6 & 0xffffff;
            }
            UReplicationSystem::DestroyGroup
                      ((param_6->__this->ReplicationSystem).field0_0x0.DebugPtr,
                       (FNetObjectGroupHandle)local_50);
          }
        }
        uVar7 = uVar7 + 1;
      }
      uVar10 = uVar10 + 1;
      param_2 = param_2 + 1;
      uVar9 = uVar9 + 0x20;
    } while (uVar10 < param_3);
  }
  return;
}

// ForAllSetBits<``UE::Net::Private::FReplicationFiltering::UpdateGroupInclusionFiltering'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_&> @ 144223040

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<__UE::Net::Private::FReplicationFiltering::UpdateGroupInclusionFiltering_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  FReplicationFiltering *pFVar5;
  FNetObjectGroup *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FNetRefHandleManager *pFVar9;
  undefined1 *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int *piVar16;
  undefined1 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_res18 [8];
  <lambda_1> *local_res20;
  uint local_70;
  uint local_6c;
  
  uVar15 = 0;
  local_70 = 0;
  local_6c = 0;
  uVar19 = uVar15;
  local_res20 = param_4;
  if (param_2 != 0) {
    do {
      uVar23 = (uint)uVar15;
      uVar20 = 0xffffffff;
      if ((uint)uVar19 == param_2 - 1) {
        uVar20 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar13 = (uint)uVar19;
      uVar22 = uVar23;
      for (uVar20 = uVar20 & *param_1; uVar20 != 0; uVar20 = uVar20 >> 1) {
        uVar22 = (uint)uVar15;
        uVar13 = uVar22;
        if (((uVar20 & 1) != 0) &&
           ((param_4->ConnectionStateInfo[uVar15 >> 5].ConnectionIds[0] >> (uVar22 & 0x1f) & 1) != 0
           )) {
          pFVar5 = param_4->__this;
          uVar13 = 0;
          if ((int)uVar22 < (pFVar5->ConnectionInfos).ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar6 = param_4->Group;
          uVar4 = (pFVar6->Members).ArrayNum;
          uVar15 = (ulonglong)(int)uVar4;
          pFVar21 = (pFVar6->Members).AllocatorInstance.Data;
          pFVar7 = (pFVar5->ConnectionInfos).AllocatorInstance.Data;
          pFVar1 = pFVar21 + uVar15 * 4;
          while( true ) {
            if ((pFVar6->Members).ArrayNum != (int)uVar15) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            uVar13 = uVar23;
            if (pFVar21 == pFVar1) break;
            uVar13 = *(uint *)pFVar21;
            puVar18 = param_4->SubObjectInternalIndices->Storage;
            if ((param_4->SubObjectInternalIndices->BitCount <= uVar13) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < BitCount",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                    ,0x2c1,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar3 = (ulonglong)(uVar13 >> 5) * 4;
            if ((puVar18[uVar13 >> 5] >> (uVar13 & 0x1f) & 1) == 0) {
              lVar8 = *(longlong *)(pFVar7 + (longlong)(int)uVar22 * 0x160 + 0x48);
              if ((*(uint *)(pFVar7 + (longlong)(int)uVar22 * 0x160 + 0x58) <= uVar13) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2a2,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              *(uint *)(lVar3 + lVar8) = *(uint *)(lVar3 + lVar8) | 1 << (uVar13 & 0x1f);
              pFVar9 = param_4->__this->NetRefHandleManager;
              if (*(int *)&(pFVar9->SubObjects).DependencyInfos.field_0x8 !=
                  *(int *)&(pFVar9->SubObjects).DependencyInfos.field_0x34) {
                puVar10 = *(undefined1 **)&(pFVar9->SubObjects).DependencyInfos.field_0x40;
                puVar17 = &(pFVar9->SubObjects).DependencyInfos.field_0x38;
                if (puVar10 != (undefined1 *)0x0) {
                  puVar17 = puVar10;
                }
                iVar14 = *(int *)(puVar17 +
                                 (ulonglong)
                                 (*(int *)&(pFVar9->SubObjects).DependencyInfos.field_0x48 - 1U &
                                 uVar13) * 4);
                if (iVar14 != -1) {
                  lVar3 = *(longlong *)&(pFVar9->SubObjects).DependencyInfos;
                  do {
                    lVar8 = lVar3 + (longlong)iVar14 * 0x28;
                    if (*(uint *)(lVar3 + (longlong)iVar14 * 0x28) == uVar13) {
                      piVar16 = (int *)(lVar8 + 4);
                      if (lVar8 == 0) {
                        piVar16 = (int *)0x0;
                      }
                      if ((piVar16 != (int *)0x0) && (*piVar16 != -1)) {
                        puVar18 = (uint *)((longlong)*piVar16 * 0x30 +
                                          *(longlong *)&(pFVar9->SubObjects).DependentObjectsStorage
                                          );
                        uVar13 = puVar18[10];
                        if (*(uint **)(puVar18 + 8) != (uint *)0x0) {
                          puVar18 = *(uint **)(puVar18 + 8);
                        }
                        if (((int)uVar13 < 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("InCount >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xeb,L""), bVar12)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        goto LAB_144223291;
                      }
                      break;
                    }
                    iVar14 = *(int *)(lVar8 + 0x20);
                  } while (iVar14 != -1);
                }
              }
              puVar18 = (uint *)0x0;
              uVar13 = 0;
LAB_144223291:
              puVar2 = puVar18 + (int)uVar13;
              param_4 = local_res20;
              for (; local_res20 = param_4, puVar18 != puVar2; puVar18 = puVar18 + 1) {
                uVar13 = *puVar18;
                lVar3 = *(longlong *)(pFVar7 + (longlong)(int)uVar22 * 0x160 + 0x48);
                if ((*(uint *)(pFVar7 + (longlong)(int)uVar22 * 0x160 + 0x58) <= uVar13) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2a2,L""), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                *(uint *)(lVar3 + (ulonglong)(uVar13 >> 5) * 4) =
                     *(uint *)(lVar3 + (ulonglong)(uVar13 >> 5) * 4) | 1 << (uVar13 & 0x1f);
                param_4 = local_res20;
              }
            }
            uVar15 = (ulonglong)uVar4;
            pFVar21 = pFVar21 + 4;
          }
        }
        uVar23 = uVar13 + 1;
        uVar15 = (ulonglong)uVar23;
        uVar13 = local_70;
        uVar22 = local_6c;
      }
      local_70 = uVar13 + 1;
      param_1 = param_1 + 1;
      local_6c = uVar22 + 0x20;
      uVar15 = (ulonglong)local_6c;
      uVar19 = (ulonglong)local_70;
    } while (local_70 < param_2);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FDeltaCompressionBaselineManager::DestructBaselineSharingContext'::__l2::<lambda_1>_&> @ 144223420

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FDeltaCompressionBaselineManager::DestructBaselineSharingContext_::__l2::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  uint *puVar1;
  FDeltaCompressionBaselineManager *this;
  FScriptContainerElement *pFVar2;
  FReplicationStateStorage *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FInternalBaselineStateInfo *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res18;
  
  local_res18 = 0;
  uVar9 = 0;
  if (param_2 != 0) {
    do {
      uVar8 = 0xffffffff;
      if (uVar9 == param_2 - 1) {
        uVar8 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar7 = local_res18;
      for (uVar8 = uVar8 & *param_1; uVar8 != 0; uVar8 = uVar8 >> 1) {
        if ((uVar8 & 1) != 0) {
          uVar5 = 0;
          if ((int)uVar7 < (param_4->SharingContext).ObjectInfoIndexToBaselineInfoIndex.ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this = param_4->__this;
          pFVar2 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data;
          uVar5 = *(uint *)((param_4->SharingContext).ObjectInfoIndexToBaselineInfoIndex.
                            AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
          if (((this->BaselineStorage).UsedBaselineStateInfos.BitCount <= uVar5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2c1,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(uint *)(pFVar2 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                                 ,0x89,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar6 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
                   ::operator[](&(this->BaselineStorage).BaselineStateInfos,uVar5);
          if ((pFVar6->RefCount == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InternalBaselineInfo->RefCount > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                                 ,0x8c,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar1 = &pFVar6->RefCount;
          *puVar1 = *puVar1 - 1;
          this_00 = (this->BaselineStorage).ReplicationStateStorage;
          if (*puVar1 == 0) {
            FReplicationStateStorage::CancelBaselineReservation
                      (this_00,pFVar6->ObjectIndex,pFVar6->StateBuffer);
            pFVar6->StateBuffer = (uchar *)0x0;
            Net::Private::FDeltaCompressionBaselineStorage::FreeBaselineStateInfo
                      (&this->BaselineStorage,uVar5);
          }
          else {
            FReplicationStateStorage::CommitBaselineReservation
                      (this_00,pFVar6->ObjectIndex,pFVar6->StateBuffer,CurrentSendState);
          }
        }
        uVar7 = uVar7 + 1;
      }
      local_res18 = local_res18 + 0x20;
      uVar9 = uVar9 + 1;
      param_1 = param_1 + 1;
    } while (uVar9 < param_2);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l2::<lambda_1>_&> @ 144223640

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  FReplicatedObjectData *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res18 [2];
  FReplicatedObjectData *local_60;
  uint *local_58;
  FReplicatedObjectData *local_50;
  uint *local_48;
  
  uVar9 = 0;
  uVar8 = 0;
  if (param_2 != 0) {
    do {
      uVar7 = 0xffffffff;
      if (uVar8 == param_2 - 1) {
        uVar7 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar6 = uVar9;
      for (uVar7 = uVar7 & *param_1; uVar7 != 0; uVar7 = uVar7 >> 1) {
        if ((uVar7 & 1) != 0) {
          local_res18[0] = uVar6;
          pFVar5 = Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                             (param_4->__this->NetRefHandleManager,uVar6);
          uVar1 = pFVar5->SubObjectRootIndex;
          if (uVar1 != 0) {
            puVar2 = param_4->Objects->Storage;
            if ((param_4->Objects->BitCount <= uVar1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((puVar2[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
              *param_4->bReturnValue = true;
              bVar4 = FNetBitArrayView::GetBit(param_4->Objects,pFVar5->SubObjectRootIndex);
              if (!bVar4) {
                local_58 = local_res18;
                local_60 = pFVar5;
                ``UE::Net::Private::FReplicationFiltering::
                HasSubObjectInScopeWithFilteredOutRootObject'::__l2::<lambda_1>::operator()'::__l8::
                <lambda_1>::operator()(&local_60);
              }
            }
          }
          uVar1 = pFVar5->SubObjectParentIndex;
          if (uVar1 != 0) {
            puVar2 = param_4->Objects->Storage;
            if ((param_4->Objects->BitCount <= uVar1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((puVar2[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
              *param_4->bReturnValue = true;
              bVar4 = FNetBitArrayView::GetBit(param_4->Objects,pFVar5->SubObjectParentIndex);
              if (!bVar4) {
                local_48 = local_res18;
                local_50 = pFVar5;
                ``UE::Net::Private::FReplicationFiltering::
                HasSubObjectInScopeWithFilteredOutRootObject'::__l2::<lambda_1>::operator()'::__l14
                ::<lambda_2>::operator()(&local_50);
              }
            }
          }
        }
        uVar6 = uVar6 + 1;
      }
      param_1 = param_1 + 1;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 0x20;
    } while (uVar8 < param_2);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FDirtyNetObjectTracker::MarkPushbasedPropertiesDirty'::__l2::<lambda_1>_&> @ 144223850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FDirtyNetObjectTracker::MarkPushbasedPropertiesDirty_::__l2::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  ushort uVar1;
  ushort uVar2;
  FReplicationStateDescriptor *pFVar3;
  FReplicationStateMemberRepIndexToMemberIndexDescriptor *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRepIndexToFragmentIndexTable *pFVar8;
  uint uVar9;
  uint *puVar10;
  FFragmentData *pFVar11;
  uint uVar12;
  uint local_res18;
  uint local_88;
  uint local_6c;
  uint *local_68;
  uint local_60;
  uint local_5c;
  FString local_58;
  FString local_48;
  
  local_res18 = 0;
  local_88 = 0;
  if (param_2 != 0) {
    do {
      uVar12 = 0xffffffff;
      if (local_res18 == param_2 - 1) {
        uVar12 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar9 = local_88;
      for (uVar12 = uVar12 & *param_1; uVar12 != 0; uVar12 = uVar12 >> 1) {
        if ((uVar12 & 1) != 0) {
          pFVar8 = (*param_4->Protocol)->PushModelOwnerRepIndexToFragmentIndexTable +
                   param_4->OwnerIndex;
          if (uVar9 < pFVar8->NumEntries) {
            uVar1 = pFVar8->RepIndexToFragmentIndex[uVar9].FragmentIndex;
            if (uVar1 != 0xffff) {
              pFVar11 = (*param_4->InstanceProtocol)->FragmentData + (uint)uVar1;
              pFVar3 = (*param_4->Protocol)->ReplicationStateDescriptors[(uint)uVar1];
              pFVar4 = pFVar3->MemberRepIndexToMemberIndexDescriptors;
              uVar1 = pFVar4[uVar9].MemberIndex;
              if (uVar1 == 0xffff) {
                if (5 < (byte)LogIris._0_1_) {
                  Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                            (param_4->LocalNetRefHandleManager,&local_48,param_4->ObjectIndex);
                  Logging::Private::BasicLog<6>
                            ((FStaticBasicLogRecord *)&PTR_u_Trying_to_mark__150b7ca18,
                             (FLogCategoryBase *)&LogIris);
                  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_48.Data.AllocatorInstance.Data);
                  }
                }
              }
              else {
                if (((pFVar3->Traits & HasLifetimeConditionals) != None) &&
                   (pFVar3->MemberChangeMaskDescriptors[uVar1].BitCount != 0)) {
                  uVar2 = pFVar3->ChangeMaskBitCount;
                  uVar1 = pFVar3->MemberChangeMaskDescriptors[uVar1].BitOffset;
                  local_6c = (uint)uVar2;
                  puVar10 = &local_6c;
                  if (uVar2 != 0) {
                    puVar10 = (uint *)(pFVar11->ExternalSrcBuffer +
                                      (pFVar3->ChangeMasksExternalOffset + (uVar2 + 0x1f >> 5) * 4))
                    ;
                  }
                  if (((uint)uVar2 <= (uint)uVar1) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < BitCount",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                         ,0x2c1,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if ((puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) goto LAB_144223b64;
                }
                uVar1 = pFVar3->MemberCount;
                if ((pFVar3->Traits & HasLifetimeConditionals) == None) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = (pFVar3->ChangeMaskBitCount + 0x1f >> 5) << 2;
                }
                local_60 = uVar1 + 0x1f >> 5;
                local_5c = (uint)uVar1;
                puVar10 = &local_5c;
                if (uVar1 != 0) {
                  puVar10 = (uint *)(pFVar11->ExternalSrcBuffer +
                                    (pFVar3->ChangeMasksExternalOffset +
                                     (pFVar3->ChangeMaskBitCount + 0x1f >> 5) * 4 + iVar7));
                }
                local_68 = puVar10;
                uVar2 = pFVar4[uVar9].MemberIndex;
                if (((uint)uVar1 <= (uint)uVar2) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index < BitCount",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                       ,0x2a2,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                puVar10[uVar2 >> 5] = puVar10[uVar2 >> 5] | 1 << (uVar2 & 0x1f);
                *param_4->bShouldMarkObjectDirty = (bool)(*param_4->bShouldMarkObjectDirty | 1);
              }
            }
          }
          else if (5 < (byte)LogIris._0_1_) {
            Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                      (param_4->LocalNetRefHandleManager,&local_58,param_4->ObjectIndex);
            Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Trying_to_mark__150b7c908,
                       (FLogCategoryBase *)&LogIris);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
LAB_144223b64:
        uVar9 = uVar9 + 1;
      }
      local_res18 = local_res18 + 1;
      param_1 = param_1 + 1;
      local_88 = local_88 + 0x20;
    } while (local_res18 < param_2);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationFiltering::RemoveConnection'::__l2::<lambda_1>_&> @ 144223c10

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FReplicationFiltering::RemoveConnection_::__l2::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPerSubObjectFilterGroupInfo *this;
  FSharedConnectionFilterStatus *this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_res18;
  FConnectionHandle local_48;
  uint local_40;
  uint local_3c;
  
  local_res18 = 0;
  uVar5 = 0xffffffff >> (-(char)param_3 & 0x1fU);
  uVar6 = 0;
  uVar3 = param_2 - 1;
  local_40 = uVar5;
  local_3c = uVar3;
  if (param_2 != 0) {
    do {
      uVar4 = 0xffffffff;
      if (uVar6 == uVar3) {
        uVar4 = uVar5;
      }
      uVar7 = local_res18;
      for (uVar4 = uVar4 & *param_1; uVar4 != 0; uVar4 = uVar4 >> 1) {
        if ((((uVar4 & 1) != 0) && (2 < uVar7 - 1)) &&
           (this = Net::Private::FReplicationFiltering::GetPerSubObjectFilterGroupInfo
                             (param_4->__this,uVar7), this != (FPerSubObjectFilterGroupInfo *)0x0))
        {
          local_48 = param_4->ConnectionHandle;
          uVar5 = local_48.ParentConnectionId;
          if (uVar5 != 0) {
            uVar3 = local_48.ChildConnectionId;
            if (uVar3 == 0) {
              if (*(int *)&(this->ConnectionFilterStatus).ParentToFilterStatus.field_0x8 !=
                  *(int *)&(this->ConnectionFilterStatus).ParentToFilterStatus.field_0x34) {
                TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_int>
                          ((TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
                            *)this,uVar5,&local_48.ParentConnectionId);
              }
            }
            else {
              this_00 = FSharedConnectionFilterStatusCollection::FindSharedConnectionFilterStatus
                                  (&this->ConnectionFilterStatus,uVar5);
              if ((this_00 != (FSharedConnectionFilterStatus *)0x0) &&
                 (uVar5 == this_00->ParentConnectionId)) {
                if ((uVar5 == 0) || (uVar3 != 0)) {
                  local_48.ParentConnectionId = 0;
                  if (uVar5 != 0) {
                    local_48.ParentConnectionId = local_48.ChildConnectionId;
                  }
                  if (*(int *)&(this_00->AllowConnections).Elements.field_0x38 !=
                      *(int *)&(this_00->AllowConnections).Elements.field_0x5c) {
                    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    ::RemoveImpl<unsigned_int>
                              (&this_00->AllowConnections,local_48.ParentConnectionId,
                               &local_48.ParentConnectionId);
                  }
                }
                else if (*(int *)&(this_00->AllowConnections).Elements.field_0x38 ==
                         *(int *)&(this_00->AllowConnections).Elements.field_0x5c) {
                  this_00->ParentConnectionId = 0;
                }
                else {
                  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                  ::UnhashElements(&this_00->AllowConnections);
                  iVar2 = *(int *)&(this_00->AllowConnections).Elements.field_0x3c;
                  *(undefined4 *)&(this_00->AllowConnections).Elements.field_0x38 = 0;
                  if (iVar2 < 0) {
                    Core::Private::
                    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                              (0xc,4,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>
                                        *)this_00,0,
                               (int *)&(this_00->AllowConnections).Elements.field_0x3c);
                  }
                  *(undefined4 *)&(this_00->AllowConnections).Elements.field_0x58 = 0xffffffff;
                  *(undefined4 *)&(this_00->AllowConnections).Elements.field_0x5c = 0;
                  *(undefined4 *)&(this_00->AllowConnections).Elements.field_0x50 = 0;
                  this_00->ParentConnectionId = 0;
                }
              }
            }
          }
          pFVar1 = (param_4->__this->PerObjectInfoStorage).AllocatorInstance.Data +
                   ((ulonglong)
                    (param_4->__this->PerObjectInfoStorageCountPerItem * this->ConnectionStateIndex)
                   + (ulonglong)(param_4->ConnectionId >> 5)) * 4;
          *(uint *)pFVar1 = *(uint *)pFVar1 & ~(1 << ((byte)param_4->ConnectionId & 0x1f));
          FNetBitArray::SetBit(&param_4->__this->DirtySubObjectFilterGroups,uVar7);
        }
        uVar7 = uVar7 + 1;
        uVar5 = local_40;
        uVar3 = local_3c;
      }
      local_res18 = local_res18 + 0x20;
      uVar6 = uVar6 + 1;
      param_1 = param_1 + 1;
    } while (uVar6 < param_2);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering'::__l2::<lambda_1>_&> @ 144223e50

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering_::__l2::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FReplicationFiltering *pFVar3;
  FNetRefHandleManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FNetObjectGroup *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  bool bVar16;
  uint local_94;
  uint local_90;
  FNetBitArrayView local_80;
  FReplicationFiltering *local_70;
  FScriptContainerElement *local_68;
  FNetObjectGroup *local_60;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  
  local_94 = 0;
  local_90 = 0;
  if (param_2 != 0) {
    do {
      uVar7 = 0xffffffff;
      if (local_94 == param_2 - 1) {
        uVar7 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar11 = local_90;
      for (uVar7 = uVar7 & *param_1; uVar7 != 0; uVar7 = uVar7 >> 1) {
        if ((uVar7 & 1) != 0) {
          bVar16 = -1 < CpuChannel->Enabled;
          if (bVar16) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1176,
                       "FReplicationFiltering_UpdateGroupExclusionFiltering",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                       ,0x498);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1176);
          }
          pFVar3 = param_4->__this;
          uVar8 = 0;
          if ((int)uVar11 < (pFVar3->GroupInfos).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar1 = (pFVar3->PerObjectInfoStorage).AllocatorInstance.Data +
                   (ulonglong)
                   (*(int *)((pFVar3->GroupInfos).AllocatorInstance.Data + (longlong)(int)uVar11 * 4
                            ) * pFVar3->PerObjectInfoStorageCountPerItem) * 4;
          pFVar9 = Net::Private::FNetObjectGroups::GetGroupFromIndex(param_4->__this->Groups,uVar11)
          ;
          pFVar4 = param_4->__this->NetRefHandleManager;
          if (((pFVar4->ScopeFrameData).bIsValid == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ScopeFrameData.bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                 ,0xef,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FNetBitArrayView::FNetBitArrayView
                    (&local_80,
                     (uint *)(pFVar4->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                             AllocatorInstance.Data,
                     (pFVar4->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
          local_70 = param_4->__this;
          uVar15 = 0;
          uVar10 = 0;
          uVar8 = (local_70->ValidConnections).Storage.ArrayNum;
          pFVar14 = (local_70->ValidConnections).Storage.AllocatorInstance.Data;
          uVar2 = (local_70->ValidConnections).BitCount;
          local_58 = local_80.Storage;
          uStack_50 = local_80.WordCount;
          uStack_4c = local_80.BitCount;
          local_68 = pFVar1;
          local_60 = pFVar9;
          if (uVar8 != 0) {
            do {
              uVar13 = 0xffffffff;
              if (uVar10 == uVar8 - 1) {
                uVar13 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
              }
              uVar12 = uVar15;
              for (uVar13 = uVar13 & *(uint *)pFVar14; uVar13 != 0; uVar13 = uVar13 >> 1) {
                if ((uVar13 & 1) != 0) {
                  ``UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering'::__l2::
                  <lambda_1>::operator()'::__l2::<lambda_1>::operator()(&local_70,uVar12);
                }
                uVar12 = uVar12 + 1;
              }
              uVar10 = uVar10 + 1;
              pFVar14 = pFVar14 + 4;
              uVar15 = uVar15 + 0x20;
            } while (uVar10 < uVar8);
          }
          if (bVar16) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        uVar11 = uVar11 + 1;
      }
      local_94 = local_94 + 1;
      param_1 = param_1 + 1;
      local_90 = local_90 + 0x20;
    } while (local_94 < param_2);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationFiltering::UpdateGroupInclusionFiltering'::__l2::<lambda_1>_&> @ 144224150

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FReplicationFiltering::UpdateGroupInclusionFiltering_::__l2::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  int iVar1;
  FReplicationFiltering *pFVar2;
  FScriptContainerElement *pFVar3;
  FNetRefHandleManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FNetObjectGroup *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_res18;
  FNetBitArrayView local_80;
  FNetBitArrayView local_70;
  <lambda_1> local_60;
  
  uVar11 = 0;
  local_res18 = 0;
  if (param_2 != 0) {
    do {
      uVar10 = 0xffffffff;
      if (uVar11 == param_2 - 1) {
        uVar10 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar9 = local_res18;
      for (uVar10 = uVar10 & *param_1; uVar10 != 0; uVar10 = uVar10 >> 1) {
        if ((uVar10 & 1) != 0) {
          bVar12 = -1 < CpuChannel->Enabled;
          if (bVar12) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1227,
                       "FReplicationFiltering_UpdateGroupInclusionFiltering",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\ReplicationFiltering.cpp"
                       ,0x4cb);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1227);
          }
          pFVar2 = param_4->__this;
          uVar7 = 0;
          if ((int)uVar9 < (pFVar2->GroupInfos).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar1 = *(int *)((pFVar2->GroupInfos).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
          uVar7 = pFVar2->PerObjectInfoStorageCountPerItem;
          pFVar3 = (pFVar2->PerObjectInfoStorage).AllocatorInstance.Data;
          pFVar8 = Net::Private::FNetObjectGroups::GetGroupFromIndex(param_4->__this->Groups,uVar9);
          pFVar4 = param_4->__this->NetRefHandleManager;
          if (((pFVar4->ScopeFrameData).bIsValid == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ScopeFrameData.bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                                 ,0xef,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FNetBitArrayView::FNetBitArrayView
                    (&local_80,
                     (uint *)(pFVar4->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                             AllocatorInstance.Data,
                     (pFVar4->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
          pFVar4 = param_4->__this->NetRefHandleManager;
          FNetBitArrayView::FNetBitArrayView
                    (&local_70,
                     (uint *)(pFVar4->SubObjectInternalIndices).Storage.AllocatorInstance.Data,
                     (pFVar4->SubObjectInternalIndices).BitCount);
          local_60.__this = param_4->__this;
          local_60.CurrentFrameScopableObjects = &local_80;
          local_60.SubObjectInternalIndices = &local_70;
          local_60.ConnectionStateInfo = (FPerObjectInfo *)(pFVar3 + (ulonglong)(iVar1 * uVar7) * 4)
          ;
          local_60.Group = pFVar8;
          ForAllSetBits<__UE::Net::Private::FReplicationFiltering::UpdateGroupInclusionFiltering_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_&>
                    ((uint *)((local_60.__this)->ValidConnections).Storage.AllocatorInstance.Data,
                     ((local_60.__this)->ValidConnections).Storage.ArrayNum,
                     ((local_60.__this)->ValidConnections).BitCount,&local_60);
          if (bVar12) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        uVar9 = uVar9 + 1;
      }
      param_1 = param_1 + 1;
      local_res18 = local_res18 + 0x20;
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return;
}

// ForAllSetBits<``UE::Net::Private::FReplicationFiltering::InitNewConnections'::__l2::<lambda_1>::operator()'::__l3::<lambda_1>_&> @ 1442243f0

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<__UE::Net::Private::FReplicationFiltering::InitNewConnections_::__l2::<lambda_1>::operator()_::__l3::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  FReplicationFiltering *pFVar4;
  FPerConnectionInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  FNetRefHandleManager *pFVar7;
  undefined1 *puVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FNetObjectGroup *pFVar14;
  uint *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res18 [8];
  <lambda_1> *local_res20;
  uint local_60;
  uint local_5c;
  
  local_60 = 0;
  local_5c = 0;
  local_res20 = param_4;
  if (param_2 != 0) {
    do {
      uVar18 = 0xffffffff;
      if (local_60 == param_2 - 1) {
        uVar18 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar19 = local_5c;
      for (uVar18 = uVar18 & *param_1; uVar18 != 0; uVar18 = uVar18 >> 1) {
        if ((uVar18 & 1) != 0) {
          pFVar4 = param_4->__this;
          uVar12 = 0;
          if ((int)uVar19 < (pFVar4->GroupInfos).ArrayNum) {
            uVar12 = ~uVar19 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((*(uint *)((pFVar4->PerObjectInfoStorage).AllocatorInstance.Data +
                        ((ulonglong)
                         (*(int *)((pFVar4->GroupInfos).AllocatorInstance.Data +
                                  (longlong)(int)uVar19 * 4) *
                         pFVar4->PerObjectInfoStorageCountPerItem) +
                        (ulonglong)(param_4->ConnectionId >> 5)) * 4) >>
               (param_4->ConnectionId & 0x1f) & 1) == 0) {
            pFVar14 = Net::Private::FNetObjectGroups::GetGroupFromIndex
                                (param_4->__this->Groups,uVar19);
            pFVar5 = param_4->ConnectionInfo;
            pFVar20 = (pFVar14->Members).AllocatorInstance.Data;
            iVar3 = (pFVar14->Members).ArrayNum;
            pFVar1 = pFVar20 + (longlong)iVar3 * 4;
            while( true ) {
              puVar17 = (uint *)0x0;
              if ((pFVar14->Members).ArrayNum != iVar3) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              if (pFVar20 == pFVar1) break;
              uVar12 = *(uint *)pFVar20;
              pFVar6 = (pFVar5->GroupExcludedObjects).Storage.AllocatorInstance.Data;
              if (((pFVar5->GroupExcludedObjects).BitCount <= uVar12) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2a2,L""), bVar11)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)(pFVar6 + (ulonglong)(uVar12 >> 5) * 4) =
                   *(uint *)(pFVar6 + (ulonglong)(uVar12 >> 5) * 4) | 1 << (uVar12 & 0x1f);
              pFVar7 = param_4->__this->NetRefHandleManager;
              if (*(int *)&(pFVar7->SubObjects).DependencyInfos.field_0x8 !=
                  *(int *)&(pFVar7->SubObjects).DependencyInfos.field_0x34) {
                puVar8 = *(undefined1 **)&(pFVar7->SubObjects).DependencyInfos.field_0x40;
                puVar16 = &(pFVar7->SubObjects).DependencyInfos.field_0x38;
                if (puVar8 != (undefined1 *)0x0) {
                  puVar16 = puVar8;
                }
                iVar13 = *(int *)(puVar16 +
                                 (ulonglong)
                                 (*(int *)&(pFVar7->SubObjects).DependencyInfos.field_0x48 - 1U &
                                 uVar12) * 4);
                if (iVar13 != -1) {
                  lVar9 = *(longlong *)&(pFVar7->SubObjects).DependencyInfos;
                  do {
                    lVar2 = lVar9 + (longlong)iVar13 * 0x28;
                    if (*(uint *)(lVar9 + (longlong)iVar13 * 0x28) == uVar12) {
                      puVar15 = (uint *)(lVar2 + 4);
                      if (lVar2 == 0) {
                        puVar15 = puVar17;
                      }
                      if ((puVar15 != (uint *)0x0) && (*puVar15 != 0xffffffff)) {
                        puVar17 = (uint *)((longlong)(int)*puVar15 * 0x30 +
                                          *(longlong *)&(pFVar7->SubObjects).DependentObjectsStorage
                                          );
                        uVar12 = puVar17[10];
                        if (*(uint **)(puVar17 + 8) != (uint *)0x0) {
                          puVar17 = *(uint **)(puVar17 + 8);
                        }
                        if (((int)uVar12 < 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("InCount >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xeb,L""), bVar11)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        goto LAB_144224620;
                      }
                      break;
                    }
                    iVar13 = *(int *)(lVar2 + 0x20);
                  } while (iVar13 != -1);
                }
              }
              uVar12 = 0;
LAB_144224620:
              puVar15 = puVar17 + (int)uVar12;
              for (; puVar17 != puVar15; puVar17 = puVar17 + 1) {
                uVar12 = *puVar17;
                pFVar6 = (pFVar5->GroupExcludedObjects).Storage.AllocatorInstance.Data;
                if (((pFVar5->GroupExcludedObjects).BitCount <= uVar12) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2a2,L""), bVar11)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(uint *)(pFVar6 + (ulonglong)(uVar12 >> 5) * 4) =
                     *(uint *)(pFVar6 + (ulonglong)(uVar12 >> 5) * 4) | 1 << (uVar12 & 0x1f);
                param_4 = local_res20;
              }
              pFVar20 = pFVar20 + 4;
            }
          }
        }
        uVar19 = uVar19 + 1;
      }
      local_60 = local_60 + 1;
      param_1 = param_1 + 1;
      local_5c = local_5c + 0x20;
    } while (local_60 < param_2);
  }
  return;
}

// ForAllSetBits<``UE::Net::Private::FReplicationFiltering::UpdateOwnerFiltering'::__l11::<lambda_2>::operator()'::__l3::<lambda_1>_&> @ 1442247b0

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<__UE::Net::Private::FReplicationFiltering::UpdateOwnerFiltering_::__l11::<lambda_2>::operator()_::__l3::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FReplicationFiltering *pFVar3;
  uint *puVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_64;
  uint local_60;
  TArrayView<unsigned_int_const_,int> local_48;
  
  local_60 = 0;
  local_64 = 0;
  if (param_2 != 0) {
    do {
      uVar14 = 0xffffffff;
      if (local_64 == param_2 - 1) {
        uVar14 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      if ((uVar14 & *param_1) != 0) {
        uVar12 = 1;
        uVar10 = uVar14 & *param_1;
        uVar14 = local_60;
        do {
          if ((uVar10 & 1) != 0) {
            bVar8 = true;
            pFVar2 = (param_4->__this->ObjectsWithOwnerFilter).Storage.AllocatorInstance.Data;
            if (((param_4->__this->ObjectsWithOwnerFilter).BitCount <= uVar14) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((*(uint *)(pFVar2 + (ulonglong)(uVar14 >> 5) * 4) & uVar12) != 0) {
              pFVar3 = param_4->__this;
              uVar11 = 0;
              if ((int)uVar14 < (pFVar3->ObjectIndexToOwningConnection).ArrayNum) {
                uVar11 = ~uVar14 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar8 = param_4->ConnectionId ==
                      (uint)*(ushort *)
                             ((pFVar3->ObjectIndexToOwningConnection).AllocatorInstance.Data +
                             (longlong)(int)uVar14 * 2);
            }
            puVar4 = param_4->GroupExcludedObjects->Storage;
            if ((param_4->GroupExcludedObjects->BitCount <= uVar14) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar11 = puVar4[uVar14 >> 5];
            SetBitValue(param_4->ConnectionScope->Storage,param_4->ConnectionScope->BitCount,uVar14,
                        bVar8);
            bVar7 = false;
            if ((uVar12 & uVar11) == 0) {
              bVar7 = bVar8;
            }
            SetBitValue(param_4->ObjectsInScopeBeforeDynamicFiltering->Storage,
                        param_4->ObjectsInScopeBeforeDynamicFiltering->BitCount,uVar14,bVar7);
            Net::Private::FNetRefHandleManager::GetSubObjects
                      (param_4->__this->NetRefHandleManager,&local_48,uVar14);
            puVar4 = local_48.DataPtr + local_48.ArrayNum;
            for (puVar13 = local_48.DataPtr; puVar13 != puVar4; puVar13 = puVar13 + 1) {
              uVar11 = *puVar13;
              if (bVar8 == false) {
LAB_144224a04:
                bVar7 = false;
              }
              else {
                puVar5 = param_4->CurrentFrameObjectsInScope->Storage;
                if ((param_4->CurrentFrameObjectsInScope->BitCount <= uVar11) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index < BitCount",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                       ,0x2c1,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((puVar5[uVar11 >> 5] >> (uVar11 & 0x1f) & 1) == 0) goto LAB_144224a04;
                bVar7 = true;
              }
              puVar5 = param_4->GroupExcludedObjects->Storage;
              if ((param_4->GroupExcludedObjects->BitCount <= uVar11) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2c1,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar1 = puVar5[uVar11 >> 5];
              SetBitValue(param_4->ConnectionScope->Storage,param_4->ConnectionScope->BitCount,
                          uVar11,bVar7);
              bVar9 = false;
              if ((1 << ((byte)uVar11 & 0x1f) & uVar1) == 0) {
                bVar9 = bVar7;
              }
              SetBitValue(param_4->ObjectsInScopeBeforeDynamicFiltering->Storage,
                          param_4->ObjectsInScopeBeforeDynamicFiltering->BitCount,uVar11,bVar9);
            }
          }
          uVar14 = uVar14 + 1;
          uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
          uVar11 = uVar10 >> 1;
          uVar10 = uVar10 >> 1;
        } while (uVar11 != 0);
      }
      local_64 = local_64 + 1;
      param_1 = param_1 + 1;
      local_60 = local_60 + 0x20;
    } while (local_64 < param_2);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationFiltering::UpdateOwnerFiltering'::__l8::<lambda_1>_&> @ 144224b40

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FReplicationFiltering::UpdateOwnerFiltering_::__l8::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  FReplicationFiltering *pFVar3;
  FNetRefHandleManager *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_64;
  uint local_60;
  TArrayView<unsigned_int_const_,int> local_50;
  
  local_64 = 0;
  local_60 = 0;
  if (param_2 != 0) {
    do {
      uVar13 = 0xffffffff;
      if (local_64 == param_2 - 1) {
        uVar13 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar14 = local_60;
      for (uVar13 = uVar13 & *param_1; uVar13 != 0; uVar13 = uVar13 >> 1) {
        if ((uVar13 & 1) != 0) {
          pFVar3 = param_4->__this;
          uVar8 = 0;
          if ((int)uVar14 < (pFVar3->ObjectIndexToOwningConnection).ArrayNum) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar2 = *(undefined2 *)
                   ((pFVar3->ObjectIndexToOwningConnection).AllocatorInstance.Data +
                   (longlong)(int)uVar14 * 2);
          Net::Private::FNetRefHandleManager::GetSubObjects
                    (param_4->__this->NetRefHandleManager,&local_50,uVar14);
          puVar1 = local_50.DataPtr + local_50.ArrayNum;
          for (puVar12 = local_50.DataPtr; puVar12 != puVar1; puVar12 = puVar12 + 1) {
            uVar8 = *puVar12;
            uVar10 = (int)uVar8 / 100;
            pFVar4 = param_4->__this->NetRefHandleManager;
            uVar9 = 0;
            if ((int)uVar10 < (int)(pFVar4->ReplicatedObjectData)._padding_) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar11 = (longlong)((int)uVar8 % 100) * 0x38;
            lVar5 = *(longlong *)
                     ((pFVar4->ReplicatedObjectData)._padding_ + (longlong)(int)uVar10 * 8);
            if ((*(int *)(lVar11 + 0x28 + lVar5) != 0) &&
               ((*(byte *)(lVar11 + 0x32 + lVar5) & 4) != 0)) {
              pFVar3 = param_4->__this;
              uVar10 = 0;
              if ((int)uVar8 < (pFVar3->ObjectIndexToOwningConnection).ArrayNum) {
                uVar10 = ~uVar8 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(undefined2 *)
               ((pFVar3->ObjectIndexToOwningConnection).AllocatorInstance.Data +
               (longlong)(int)uVar8 * 2) = uVar2;
            }
          }
        }
        uVar14 = uVar14 + 1;
      }
      local_64 = local_64 + 1;
      param_1 = param_1 + 1;
      local_60 = local_60 + 0x20;
    } while (local_64 < param_2);
  }
  return;
}

// ForAllSetBits<``UE::Net::Private::FReplicationFiltering::InitNewConnections'::__l2::<lambda_1>::operator()'::__l4::<lambda_2>_&> @ 144224e20

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<__UE::Net::Private::FReplicationFiltering::InitNewConnections_::__l2::<lambda_1>::operator()_::__l4::<lambda_2>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_2> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  FReplicationFiltering *pFVar5;
  FNetRefHandleManager *pFVar6;
  FPerConnectionInfo *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FNetObjectGroup *pFVar14;
  ulonglong uVar15;
  int *piVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 local_res18 [8];
  <lambda_2> *local_res20;
  uint local_80;
  uint local_7c;
  FNetBitArrayView local_60 [2];
  
  local_7c = 0;
  local_80 = 0;
  local_res20 = param_4;
  if (param_2 != 0) {
    do {
      uVar20 = 0xffffffff;
      if (local_80 == param_2 - 1) {
        uVar20 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar22 = local_7c;
      for (uVar20 = uVar20 & *param_1; uVar20 != 0; uVar20 = uVar20 >> 1) {
        if ((uVar20 & 1) != 0) {
          pFVar5 = param_4->__this;
          uVar12 = 0;
          if ((int)uVar22 < (pFVar5->GroupInfos).ArrayNum) {
            uVar12 = ~uVar22 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((*(uint *)((pFVar5->PerObjectInfoStorage).AllocatorInstance.Data +
                        ((ulonglong)
                         (*(int *)((pFVar5->GroupInfos).AllocatorInstance.Data +
                                  (longlong)(int)uVar22 * 4) *
                         pFVar5->PerObjectInfoStorageCountPerItem) +
                        (ulonglong)(param_4->ConnectionId >> 5)) * 4) >>
               (param_4->ConnectionId & 0x1f) & 1) != 0) {
            pFVar6 = param_4->__this->NetRefHandleManager;
            FNetBitArrayView::FNetBitArrayView
                      (local_60,(uint *)(pFVar6->SubObjectInternalIndices).Storage.AllocatorInstance
                                        .Data,(pFVar6->SubObjectInternalIndices).BitCount);
            pFVar14 = Net::Private::FNetObjectGroups::GetGroupFromIndex
                                (param_4->__this->Groups,uVar22);
            pFVar7 = param_4->ConnectionInfo;
            pFVar21 = (pFVar14->Members).AllocatorInstance.Data;
            uVar12 = (pFVar14->Members).ArrayNum;
            uVar15 = (ulonglong)(int)uVar12;
            pFVar1 = pFVar21 + uVar15 * 4;
            while( true ) {
              if ((pFVar14->Members).ArrayNum != (int)uVar15) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              puVar18 = local_60[0].Storage;
              if (pFVar21 == pFVar1) break;
              uVar19 = *(uint *)pFVar21;
              if ((local_60[0].BitCount <= uVar19) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2c1,L""), bVar11)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar4 = (ulonglong)(uVar19 >> 5) * 4;
              if ((puVar18[uVar19 >> 5] >> (uVar19 & 0x1f) & 1) == 0) {
                pFVar8 = (pFVar7->GroupIncludedObjects).Storage.AllocatorInstance.Data;
                if (((pFVar7->GroupIncludedObjects).BitCount <= uVar19) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < BitCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                        ,0x2a2,L""), bVar11)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(uint *)(pFVar8 + lVar4) = *(uint *)(pFVar8 + lVar4) | 1 << (uVar19 & 0x1f);
                pFVar6 = param_4->__this->NetRefHandleManager;
                if (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x8 !=
                    *(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x34) {
                  puVar9 = *(undefined1 **)&(pFVar6->SubObjects).DependencyInfos.field_0x40;
                  puVar17 = &(pFVar6->SubObjects).DependencyInfos.field_0x38;
                  if (puVar9 != (undefined1 *)0x0) {
                    puVar17 = puVar9;
                  }
                  iVar13 = *(int *)(puVar17 +
                                   (ulonglong)
                                   (*(int *)&(pFVar6->SubObjects).DependencyInfos.field_0x48 - 1U &
                                   uVar19) * 4);
                  if (iVar13 != -1) {
                    lVar4 = *(longlong *)&(pFVar6->SubObjects).DependencyInfos;
                    do {
                      lVar2 = lVar4 + (longlong)iVar13 * 0x28;
                      if (*(uint *)(lVar4 + (longlong)iVar13 * 0x28) == uVar19) {
                        piVar16 = (int *)(lVar2 + 4);
                        if (lVar2 == 0) {
                          piVar16 = (int *)0x0;
                        }
                        if ((piVar16 != (int *)0x0) && (*piVar16 != -1)) {
                          puVar18 = (uint *)((longlong)*piVar16 * 0x30 +
                                            *(longlong *)
                                             &(pFVar6->SubObjects).DependentObjectsStorage);
                          uVar19 = puVar18[10];
                          if (*(uint **)(puVar18 + 8) != (uint *)0x0) {
                            puVar18 = *(uint **)(puVar18 + 8);
                          }
                          if (((int)uVar19 < 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("InCount >= 0",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0xeb,L""), bVar11)) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          goto LAB_1442250b1;
                        }
                        break;
                      }
                      iVar13 = *(int *)(lVar2 + 0x20);
                    } while (iVar13 != -1);
                  }
                }
                puVar18 = (uint *)0x0;
                uVar19 = 0;
LAB_1442250b1:
                puVar3 = puVar18 + (int)uVar19;
                param_4 = local_res20;
                for (; local_res20 = param_4, puVar18 != puVar3; puVar18 = puVar18 + 1) {
                  uVar19 = *puVar18;
                  pFVar8 = (pFVar7->GroupIncludedObjects).Storage.AllocatorInstance.Data;
                  if (((pFVar7->GroupIncludedObjects).BitCount <= uVar19) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index < BitCount",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                          ,0x2a2,L""), bVar11)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  *(uint *)(pFVar8 + (ulonglong)(uVar19 >> 5) * 4) =
                       *(uint *)(pFVar8 + (ulonglong)(uVar19 >> 5) * 4) | 1 << (uVar19 & 0x1f);
                  param_4 = local_res20;
                }
              }
              uVar15 = (ulonglong)uVar12;
              pFVar21 = pFVar21 + 4;
            }
          }
        }
        uVar22 = uVar22 + 1;
      }
      local_80 = local_80 + 1;
      param_1 = param_1 + 1;
      local_7c = local_7c + 0x20;
    } while (local_80 < param_2);
  }
  return;
}

// ForAllSetBits<``UE::Net::Private::FReplicationFiltering::InitNewConnections'::__l2::<lambda_1>::operator()'::__l6::<lambda_4>_&> @ 144225250

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<__UE::Net::Private::FReplicationFiltering::InitNewConnections_::__l2::<lambda_1>::operator()_::__l6::<lambda_4>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_4> *param_4)

{
  uint *puVar1;
  FReplicationFiltering *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res18;
  TArrayView<unsigned_int_const_,int> local_50;
  
  local_res18 = 0;
  uVar9 = 0;
  if (param_2 != 0) {
    do {
      uVar8 = 0xffffffff;
      if (uVar9 == param_2 - 1) {
        uVar8 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar7 = local_res18;
      for (uVar8 = uVar8 & *param_1; uVar8 != 0; uVar8 = uVar8 >> 1) {
        if ((uVar8 & 1) != 0) {
          pFVar2 = param_4->__this;
          uVar5 = 0;
          if ((int)uVar7 < (pFVar2->ObjectIndexToPerObjectInfoIndex).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar4 = (*(uint *)((param_4->__this->PerObjectInfoStorage).AllocatorInstance.Data +
                            ((ulonglong)
                             (*(int *)((pFVar2->ObjectIndexToPerObjectInfoIndex).AllocatorInstance.
                                       Data + (longlong)(int)uVar7 * 4) *
                             param_4->__this->PerObjectInfoStorageCountPerItem) +
                            (ulonglong)(param_4->ConnectionId >> 5)) * 4) >>
                   (param_4->ConnectionId & 0x1f) & 1) != 0;
          SetBitValue((uint *)(param_4->ConnectionInfo->ConnectionFilteredObjects).Storage.
                              AllocatorInstance.Data,
                      (param_4->ConnectionInfo->ConnectionFilteredObjects).BitCount,uVar7,bVar4);
          Net::Private::FNetRefHandleManager::GetSubObjects
                    (param_4->__this->NetRefHandleManager,&local_50,uVar7);
          puVar1 = local_50.DataPtr + local_50.ArrayNum;
          for (puVar6 = local_50.DataPtr; puVar6 != puVar1; puVar6 = puVar6 + 1) {
            SetBitValue((uint *)(param_4->ConnectionInfo->ConnectionFilteredObjects).Storage.
                                AllocatorInstance.Data,
                        (param_4->ConnectionInfo->ConnectionFilteredObjects).BitCount,*puVar6,bVar4)
            ;
          }
        }
        uVar7 = uVar7 + 1;
      }
      local_res18 = local_res18 + 0x20;
      uVar9 = uVar9 + 1;
      param_1 = param_1 + 1;
    } while (uVar9 < param_2);
  }
  return;
}

// GetFullNameForCastLogError<UNetObjectFilterConfig> @ 144225440

FString * __cdecl
GetFullNameForCastLogError<UNetObjectFilterConfig>
          (FString *__return_storage_ptr__,UNetObjectFilterConfig *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UNetObjectGridFilterConfig> @ 144225480

FString * __cdecl GetTypeName<UNetObjectGridFilterConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNetObjectGridFilterConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UAlwaysRelevantNetObjectFilter> @ 1442254c0

void __cdecl InternalConstructor<UAlwaysRelevantNetObjectFilter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined ***)this = &___7UAlwaysRelevantNetObjectFilter__6B_;
  }
  return;
}

// InternalConstructor<UAlwaysRelevantNetObjectFilterConfig> @ 144225510

void __cdecl InternalConstructor<UAlwaysRelevantNetObjectFilterConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAlwaysRelevantNetObjectFilterConfig__6B_;
  }
  return;
}

// InternalConstructor<UChunkedDataStream> @ 144225540

void __cdecl InternalConstructor<UChunkedDataStream>(FObjectInitializer *param_1)

{
  UDataStream *this;
  
  this = (UDataStream *)param_1->Obj;
  if (this != (UDataStream *)0x0) {
    UDataStream::UDataStream(this,param_1);
    this->_padding_ = (longlong)&___7UChunkedDataStream__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UFilterOutNetObjectFilter> @ 144225580

void __cdecl InternalConstructor<UFilterOutNetObjectFilter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined ***)this = &___7UFilterOutNetObjectFilter__6B_;
  }
  return;
}

// InternalConstructor<UFilterOutNetObjectFilterConfig> @ 1442255d0

void __cdecl InternalConstructor<UFilterOutNetObjectFilterConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UFilterOutNetObjectFilterConfig__6B_;
  }
  return;
}

// InternalConstructor<UNetBlobHandler> @ 144225600

void __cdecl InternalConstructor<UNetBlobHandler>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined4 *)&this[1].field_0x8 = 0xffffffff;
    *(undefined ***)this = &UNetBlobHandler::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UNetBlobHandler::_vftable__for__INetBlobReceiver__;
  }
  return;
}

// InternalConstructor<UNetBlobHandlerDefinitions> @ 144225640

void __cdecl InternalConstructor<UNetBlobHandlerDefinitions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UNetBlobHandlerDefinitions__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNetObjectFilter> @ 144225680

void __cdecl InternalConstructor<UNetObjectFilter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UNetObjectFilter__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNetObjectFilterConfig> @ 1442256d0

void __cdecl InternalConstructor<UNetObjectFilterConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
  }
  return;
}

// InternalConstructor<UNetObjectFilterDefinitions> @ 144225700

void __cdecl InternalConstructor<UNetObjectFilterDefinitions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNetObjectFilterDefinitions__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNetObjectGridFilter> @ 144225740

void __cdecl InternalConstructor<UNetObjectGridFilter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UNetObjectGridFilter__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined4 *)&this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  this[1].field_0x20 = 0;
  *(undefined8 *)(this + 2) = 0;
  *(undefined4 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined8 *)&this[2].field_0x20 = 0;
  TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
              *)(this + 3),0);
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined4 *)&this[4].field_0x10 = 0;
  *(undefined8 *)&this[4].field_0x18 = 0;
  *(undefined8 *)&this[4].field_0x20 = 0;
  *(undefined8 *)&this[5].field_0x10 = 0;
  *(undefined4 *)&this[5].field_0x18 = 0;
  *(undefined4 *)&this[5].field_0x1c = 0x80;
  *(undefined4 *)&this[5].field_0x20 = 0xffffffff;
  *(undefined4 *)&this[5].field_0x24 = 0;
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined4 *)&this[6].field_0x10 = 0;
  *(undefined4 *)&this[6].field_0x18 = 0;
  *(undefined4 *)(this + 7) = 0;
  *(undefined4 *)&this[7].field_0x4 = 0xffffffff;
  *(undefined4 *)&this[7].field_0x8 = 0;
  *(undefined4 *)&this[7].field_0xc = 0xffffffff;
  *(undefined4 *)&this[7].field_0x10 = 0;
  *(undefined4 *)&this[7].field_0x14 = 0xffffffff;
  *(undefined4 *)&this[7].field_0x18 = 0;
  *(undefined4 *)&this[7].field_0x1c = 0xffffffff;
  *(undefined4 *)(this + 10) = 0;
  return;
}

// InternalConstructor<UNetObjectGridFilterConfig> @ 144225760

void __cdecl InternalConstructor<UNetObjectGridFilterConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 2;
    *(undefined ***)this = &___7UNetObjectGridFilterConfig__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[1].field_0x4 = 4;
    *(undefined4 *)&this[1].field_0x8 = 0x469c4000;
    *(undefined4 *)&this[1].field_0xc = 0x469c4000;
    *(undefined4 *)&this[1].field_0x10 = 0x466a6000;
    this[1].field_0x14 = 1;
  }
  return;
}

// InternalConstructor<UNetObjectGridWorldLocFilter> @ 1442257c0

void __cdecl InternalConstructor<UNetObjectGridWorldLocFilter>(FObjectInitializer *param_1)

{
  UNetObjectGridFilter *this;
  
  this = (UNetObjectGridFilter *)param_1->Obj;
  if (this != (UNetObjectGridFilter *)0x0) {
    UNetObjectGridFilter::UNetObjectGridFilter(this);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNetObjectGridWorldLocFilter__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilter> @ 144225800

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAlwaysRelevantNetObjectFilter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UAlwaysRelevantNetObjectFilter__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilterConfig> @ 1442258d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilterConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAlwaysRelevantNetObjectFilterConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAlwaysRelevantNetObjectFilterConfig__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UChunkedDataStream> @ 144225980

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UChunkedDataStream>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataStream *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UChunkedDataStream::GetPrivateStaticClass();
  this = (UDataStream *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataStream *)0x0) {
    UDataStream::UDataStream(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UChunkedDataStream__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFilterOutNetObjectFilter> @ 144225a40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFilterOutNetObjectFilter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFilterOutNetObjectFilter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UFilterOutNetObjectFilter__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFilterOutNetObjectFilterConfig> @ 144225b10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFilterOutNetObjectFilterConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFilterOutNetObjectFilterConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFilterOutNetObjectFilterConfig__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetBlobHandler> @ 144225bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetBlobHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetBlobHandler::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UNetBlobHandler::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNetBlobHandler::_vftable__for__INetBlobReceiver__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetBlobHandlerDefinitions> @ 144225c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetBlobHandlerDefinitions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetBlobHandlerDefinitions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetBlobHandlerDefinitions__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectFilter> @ 144225d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectFilter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectFilter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UNetObjectFilter__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectFilterConfig> @ 144225e10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectFilterConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectFilterConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetObjectFilterConfig__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectFilterDefinitions> @ 144225ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetObjectFilterDefinitions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectFilterDefinitions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetObjectFilterDefinitions__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectGridFilter> @ 144225f80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectGridFilter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetObjectGridFilter *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectGridFilter::GetPrivateStaticClass();
  pUVar3 = (UNetObjectGridFilter *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNetObjectGridFilter *)0x0) {
    pUVar3 = UNetObjectGridFilter::UNetObjectGridFilter(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectGridFilterConfig> @ 144226020

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectGridFilterConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectGridFilterConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 2;
    *(undefined ***)pUVar1 = &___7UNetObjectGridFilterConfig__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[1].field_0x4 = 4;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x469c4000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x469c4000;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x466a6000;
    pUVar1[1].field_0x14 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectGridWorldLocFilter> @ 144226100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetObjectGridWorldLocFilter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetObjectGridFilter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectGridWorldLocFilter::GetPrivateStaticClass();
  this = (UNetObjectGridFilter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetObjectGridFilter *)0x0) {
    UNetObjectGridFilter::UNetObjectGridFilter(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNetObjectGridWorldLocFilter__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 1442261c0

TArrayView<unsigned_int_const_,int> * __cdecl
MakeArrayView<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<unsigned_int_const_,int> *pTVar5;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  iVar1 = param_1->ArrayNum;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2
    ;
  }
  __return_storage_ptr__->DataPtr = (uint *)param_1;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_int_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// NewObject<UNetObjectBlobHandler> @ 144226240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetObjectBlobHandler * __cdecl NewObject<UNetObjectBlobHandler>(UObject *param_1)

{
  UClass *pUVar1;
  UNetObjectBlobHandler *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNetObjectBlobHandler_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNetObjectBlobHandler *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNetObjectFilter> @ 1442262e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetObjectFilter * __cdecl
NewObject<UNetObjectFilter>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UNetObjectFilter *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UNetObjectFilter::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UNetObjectFilter *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNetObjectFilterConfig> @ 1442263e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetObjectFilterConfig * __cdecl
NewObject<UNetObjectFilterConfig>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UNetObjectFilterConfig::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UNetObjectFilterConfig *)pUVar2;
}

// NewObject<UNetRPCHandler> @ 1442264e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetRPCHandler * __cdecl NewObject<UNetRPCHandler>(UObject *param_1)

{
  UClass *pUVar1;
  UNetRPCHandler *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNetRPCHandler_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNetRPCHandler *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPartialNetObjectAttachmentHandler> @ 144226580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPartialNetObjectAttachmentHandler * __cdecl
NewObject<UPartialNetObjectAttachmentHandler>(UObject *param_1)

{
  UClass *pUVar1;
  UPartialNetObjectAttachmentHandler *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPartialNetObjectAttachmentHandler *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// operator() @ 14422bbc0

void __thiscall
``UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  undefined8 *puVar1;
  FReplicationFiltering *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  uint uVar17;
  longlong *plVar18;
  bool local_res8 [8];
  uint local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  <lambda_1> local_80;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  
  uVar17 = ~param_1 >> 0x1f;
  local_res10 = param_1;
  if ((*(uint *)(*(longlong *)((longlong)this + 8) + (ulonglong)(param_1 >> 5) * 4) >>
       (param_1 & 0x1f) & 1) == 0) {
    lVar9 = *(longlong *)this;
    uVar6 = 0;
    if ((int)param_1 < *(int *)(lVar9 + 0x38)) {
      uVar6 = uVar17;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar15 = (longlong)(int)param_1 * 0x160;
    plVar13 = (longlong *)(lVar15 + 0x18 + *(longlong *)(lVar9 + 0x30));
    lVar9 = *(longlong *)this;
    uVar6 = 0;
    if ((int)param_1 < *(int *)(lVar9 + 0x38)) {
      uVar6 = uVar17;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar1 = *(undefined8 **)((longlong)this + 0x10);
    plVar18 = (longlong *)(*(longlong *)(lVar9 + 0x30) + 0x30 + lVar15);
    uVar6 = *(uint *)(puVar1 + 1);
    uVar10 = (ulonglong)(int)uVar6;
    puVar16 = (uint *)*puVar1;
    puVar12 = puVar16 + uVar10;
    while( true ) {
      puVar11 = (uint *)0x0;
      if (*(int *)(puVar1 + 1) != (int)uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar16 == puVar12) break;
      uVar14 = *puVar16;
      lVar9 = *plVar13;
      if ((*(uint *)(plVar13 + 2) <= uVar14) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2a2,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = (ulonglong)(uVar14 >> 5);
      *(uint *)(lVar9 + uVar10 * 4) = *(uint *)(lVar9 + uVar10 * 4) | 1 << (uVar14 & 0x1f);
      lVar9 = *plVar18;
      if ((*(uint *)(plVar18 + 2) <= uVar14) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2b7,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)(lVar9 + uVar10 * 4) = *(uint *)(lVar9 + uVar10 * 4) & ~(1 << (uVar14 & 0x1f));
      lVar9 = *(longlong *)(*(longlong *)this + 0x10);
      if (*(int *)(lVar9 + 0x338) != *(int *)(lVar9 + 0x364)) {
        lVar15 = lVar9 + 0x368;
        if (*(longlong *)(lVar9 + 0x370) != 0) {
          lVar15 = *(longlong *)(lVar9 + 0x370);
        }
        iVar7 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar9 + 0x378) - 1U & uVar14) * 4);
        if (iVar7 != -1) {
          do {
            lVar15 = *(longlong *)(lVar9 + 0x330) + (longlong)iVar7 * 0x28;
            if (*(uint *)(*(longlong *)(lVar9 + 0x330) + (longlong)iVar7 * 0x28) == uVar14) {
              puVar8 = (uint *)(lVar15 + 4);
              if (lVar15 == 0) {
                puVar8 = puVar11;
              }
              if ((puVar8 != (uint *)0x0) && (*puVar8 != 0xffffffff)) {
                puVar11 = (uint *)((longlong)(int)*puVar8 * 0x30 + *(longlong *)(lVar9 + 0x380));
                uVar14 = puVar11[10];
                if (*(uint **)(puVar11 + 8) != (uint *)0x0) {
                  puVar11 = *(uint **)(puVar11 + 8);
                }
                if (((int)uVar14 < 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                goto LAB_14422be00;
              }
              break;
            }
            iVar7 = *(int *)(lVar15 + 0x20);
          } while (iVar7 != -1);
        }
      }
      uVar14 = 0;
LAB_14422be00:
      puVar8 = puVar11 + (int)uVar14;
      for (; puVar11 != puVar8; puVar11 = puVar11 + 1) {
        uVar14 = *puVar11;
        lVar9 = *(longlong *)((longlong)this + 0x18);
        if ((*(uint *)((longlong)this + 0x24) <= uVar14) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar15 = (ulonglong)(uVar14 >> 5) * 4;
        UE::Net::FNetBitArrayHelper::SetBitValue
                  ((uint *)*plVar13,*(uint *)(plVar13 + 2),uVar14,
                   (*(uint *)(lVar15 + lVar9) >> (uVar14 & 0x1f) & 1) != 0);
        lVar9 = *plVar18;
        if ((*(uint *)(plVar18 + 2) <= uVar14) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2b7,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)(lVar15 + lVar9) = *(uint *)(lVar15 + lVar9) & ~(1 << (uVar14 & 0x1f));
      }
      puVar16 = puVar16 + 1;
      uVar10 = (ulonglong)uVar6;
    }
  }
  if (UE::Net::Private::bCVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject != false)
  {
    pFVar2 = *(FReplicationFiltering **)this;
    uVar6 = 0;
    if ((int)local_res10 < (pFVar2->ConnectionInfos).ArrayNum) {
      uVar6 = uVar17;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pFVar2->ConnectionInfos).AllocatorInstance.Data;
    lVar9 = (longlong)(int)param_1 * 0x160;
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_68,*(uint **)(pFVar3 + lVar9 + 0x18),*(uint *)(pFVar3 + lVar9 + 0x28));
    local_80.Objects = &local_58;
    local_80.bReturnValue = local_res8;
    local_58 = local_68;
    local_res8[0] = false;
    local_80.__this = pFVar2;
    UE::Net::FNetBitArrayHelper::
    ForAllSetBits<_UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject_::__l2::<lambda_1>_&>
              (local_68.Storage,local_68.WordCount,local_68.BitCount,&local_80);
    if (local_res8[0] != false) {
      ```UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering'::__l2::<lambda_1>::
      operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(local_res20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14422cf50

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422cf80

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422cfb0

void * __thiscall
UE::Net::Private::FFastArrayReplicationFragmentBase::_scalar_deleting_destructor_
          (FFastArrayReplicationFragmentBase *this,uint param_1)

{
  FPropertyReplicationState *this_00;
  FReplicationStateDescriptor *this_01;
  
  this->_padding_ = (longlong)&___7FFastArrayReplicationFragmentBase_Private_Net_UE__6B_;
  this_00 = (this->ReplicationState).Ptr;
  if (this_00 != (FPropertyReplicationState *)0x0) {
    FPropertyReplicationState::~FPropertyReplicationState(this_00);
    ::operator_delete(this_00,0x18);
  }
  this_01 = (this->ReplicationStateDescriptor).Reference;
  if (this_01 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(this_01);
  }
  this->_padding_ = (longlong)&___7FReplicationFragment_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d030

void * __thiscall
UE::Net::FNameTokenStore::_scalar_deleting_destructor_(FNameTokenStore *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->StoredFNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FNameToKey).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FNameToKey).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FNameToKey);
  FNetTokenDataStore::~FNetTokenDataStore((FNetTokenDataStore *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d0b0

void * __thiscall
UE::Net::Private::FNativeFastArrayReplicationFragmentBase::_scalar_deleting_destructor_
          (FNativeFastArrayReplicationFragmentBase *this,uint param_1)

{
  FReplicationStateDescriptor *this_00;
  
  this_00 = (this->ReplicationStateDescriptor).Reference;
  if (this_00 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(this_00);
  }
  this->_padding_ = (longlong)&___7FReplicationFragment_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d100

void * __thiscall UE::Net::FNetBlob::_scalar_deleting_destructor_(FNetBlob *this,uint param_1)

{
  ~FNetBlob(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d140

void * __thiscall
UE::Net::FNetObjectAttachment::_scalar_deleting_destructor_(FNetObjectAttachment *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNetObjectAttachment_Net_UE__6B_;
  FNetBlob::~FNetBlob((FNetBlob *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d190

void * __thiscall
UE::Net::FReplicationFragment::_scalar_deleting_destructor_(FReplicationFragment *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FReplicationFragment_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d1d0

void * __thiscall
UAlwaysRelevantNetObjectFilter::_scalar_deleting_destructor_
          (UAlwaysRelevantNetObjectFilter *this,uint param_1)

{
  *(undefined ***)this = &___7UNetObjectFilter__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d240

void * __thiscall
UAlwaysRelevantNetObjectFilterConfig::_scalar_deleting_destructor_
          (UAlwaysRelevantNetObjectFilterConfig *this,uint param_1)

{
  *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
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

// `scalar_deleting_destructor' @ 14422d2a0

void * __thiscall
UChunkedDataStream::_scalar_deleting_destructor_(UChunkedDataStream *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UChunkedDataStream__6B_;
  UDataStream::~UDataStream((UDataStream *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d300

void * __thiscall
UFilterOutNetObjectFilter::_scalar_deleting_destructor_
          (UFilterOutNetObjectFilter *this,uint param_1)

{
  *(undefined ***)this = &___7UNetObjectFilter__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d370

void * __thiscall
UFilterOutNetObjectFilterConfig::_scalar_deleting_destructor_
          (UFilterOutNetObjectFilterConfig *this,uint param_1)

{
  *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
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

// `scalar_deleting_destructor' @ 14422d3d0

void * __thiscall UNetBlobHandler::_scalar_deleting_destructor_(UNetBlobHandler *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d440

void * __thiscall
UNetBlobHandlerDefinitions::_scalar_deleting_destructor_
          (UNetBlobHandlerDefinitions *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetBlobHandlerDefinitions__6B_;
  pFVar1 = (this->NetBlobHandlerDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d4b0

void * __thiscall
UNetObjectFilter::_scalar_deleting_destructor_(UNetObjectFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetObjectFilter__6B_;
  pFVar1 = (this->FilteredObjects).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d520

void * __thiscall
UNetObjectFilterConfig::_scalar_deleting_destructor_(UNetObjectFilterConfig *this,uint param_1)

{
  *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
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

// `scalar_deleting_destructor' @ 14422d580

void * __thiscall
UNetObjectFilterDefinitions::_scalar_deleting_destructor_
          (UNetObjectFilterDefinitions *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetObjectFilterDefinitions__6B_;
  pFVar1 = (this->NetObjectFilterDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d5f0

void * __thiscall
UNetObjectGridFilter::_scalar_deleting_destructor_(UNetObjectGridFilter *this,uint param_1)

{
  ~UNetObjectGridFilter(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d650

void * __thiscall
UNetObjectGridFilterConfig::_scalar_deleting_destructor_
          (UNetObjectGridFilterConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetObjectGridFilterConfig__6B_;
  pFVar1 = (this->FilterProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNetObjectFilterConfig__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14422d6d0

void * __thiscall
UNetObjectGridWorldLocFilter::_scalar_deleting_destructor_
          (UNetObjectGridWorldLocFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetObjectGridWorldLocFilter__6B_;
  UNetObjectGridFilter::~UNetObjectGridFilter((UNetObjectGridFilter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAlwaysRelevantNetObjectFilter @ 144237d00

void __cdecl EmptyLinkFunctionForGeneratedCodeAlwaysRelevantNetObjectFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChunkedDataStream @ 144237d10

void __cdecl EmptyLinkFunctionForGeneratedCodeChunkedDataStream(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFilterOutNetObjectFilter @ 144237d20

void __cdecl EmptyLinkFunctionForGeneratedCodeFilterOutNetObjectFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetBlobHandler @ 144237d30

void __cdecl EmptyLinkFunctionForGeneratedCodeNetBlobHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetBlobHandlerDefinitions @ 144237d40

void __cdecl EmptyLinkFunctionForGeneratedCodeNetBlobHandlerDefinitions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectFilter @ 144237d50

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectFilterDefinitions @ 144237d60

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectFilterDefinitions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectGridFilter @ 144237d70

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectGridFilter(void)

{
  return;
}

// GetBitStreamPositionForNetTrace @ 14423b470

uint __cdecl GetBitStreamPositionForNetTrace(FBitWriter *param_1)

{
  return (uint)param_1->Num;
}

// Z_Construct_UClass_UAlwaysRelevantNetObjectFilterConfig_NoRegister @ 14425ce00

UClass * __cdecl Z_Construct_UClass_UAlwaysRelevantNetObjectFilterConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"AlwaysRelevantNetObjectFilterConfig",
               &Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton,
               UAlwaysRelevantNetObjectFilterConfig::
               StaticRegisterNativesUAlwaysRelevantNetObjectFilterConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAlwaysRelevantNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton;
}

// Z_Construct_UClass_UAlwaysRelevantNetObjectFilter_NoRegister @ 14425cec0

UClass * __cdecl Z_Construct_UClass_UAlwaysRelevantNetObjectFilter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"AlwaysRelevantNetObjectFilter",
               &Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton,
               UAlwaysRelevantNetObjectFilter::StaticRegisterNativesUAlwaysRelevantNetObjectFilter,
               0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAlwaysRelevantNetObjectFilter>,
               InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton;
}

// Z_Construct_UClass_UChunkedDataStream_NoRegister @ 14425cf80

UClass * __cdecl Z_Construct_UClass_UChunkedDataStream_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ChunkedDataStream",
               &Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton,
               UChunkedDataStream::StaticRegisterNativesUChunkedDataStream,0x68,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UChunkedDataStream>,
               InternalVTableHelperCtorCaller<UChunkedDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChunkedDataStream.InnerSingleton;
}

// Z_Construct_UClass_UFilterOutNetObjectFilterConfig_NoRegister @ 14425d040

UClass * __cdecl Z_Construct_UClass_UFilterOutNetObjectFilterConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FilterOutNetObjectFilterConfig",
               &Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton,
               UFilterOutNetObjectFilterConfig::StaticRegisterNativesUFilterOutNetObjectFilterConfig
               ,0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFilterOutNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UFilterOutNetObjectFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton;
}

// Z_Construct_UClass_UFilterOutNetObjectFilter_NoRegister @ 14425d100

UClass * __cdecl Z_Construct_UClass_UFilterOutNetObjectFilter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FilterOutNetObjectFilter",
               &Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton,
               UFilterOutNetObjectFilter::StaticRegisterNativesUFilterOutNetObjectFilter,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFilterOutNetObjectFilter>,
               InternalVTableHelperCtorCaller<UFilterOutNetObjectFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton;
}

// Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister @ 14425d1c0

UClass * __cdecl Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetBlobHandlerDefinitions",
               &Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton,
               UNetBlobHandlerDefinitions::StaticRegisterNativesUNetBlobHandlerDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetBlobHandlerDefinitions>,
               InternalVTableHelperCtorCaller<UNetBlobHandlerDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton;
}

// Z_Construct_UClass_UNetBlobHandler_NoRegister @ 14425d270

UClass * __cdecl Z_Construct_UClass_UNetBlobHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetBlobHandler",
               &Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton,
               UNetBlobHandler::StaticRegisterNativesUNetBlobHandler,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetBlobHandler>,InternalVTableHelperCtorCaller<UNetBlobHandler>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectFilterConfig_NoRegister @ 14425d320

UClass * __cdecl Z_Construct_UClass_UNetObjectFilterConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton,
               UNetObjectFilterConfig::StaticRegisterNativesUNetObjectFilterConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectFilterConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister @ 14425d3d0

UClass * __cdecl Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilterDefinitions",
               &Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton,
               UNetObjectFilterDefinitions::StaticRegisterNativesUNetObjectFilterDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectFilterDefinitions>,
               InternalVTableHelperCtorCaller<UNetObjectFilterDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilterDefinitions.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectFilter_NoRegister @ 14425d480

UClass * __cdecl Z_Construct_UClass_UNetObjectFilter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilter",
               &Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton,
               UNetObjectFilter::StaticRegisterNativesUNetObjectFilter,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectFilter>,
               InternalVTableHelperCtorCaller<UNetObjectFilter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister @ 14425d530

UClass * __cdecl Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton,
               UNetObjectGridFilterConfig::StaticRegisterNativesUNetObjectGridFilterConfig,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectGridFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectGridFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectGridFilter_NoRegister @ 14425d5f0

UClass * __cdecl Z_Construct_UClass_UNetObjectGridFilter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridFilter",
               &Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton,
               UNetObjectGridFilter::StaticRegisterNativesUNetObjectGridFilter,0x198,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectGridFilter>,
               InternalVTableHelperCtorCaller<UNetObjectGridFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectGridWorldLocFilter_NoRegister @ 14425d6b0

UClass * __cdecl Z_Construct_UClass_UNetObjectGridWorldLocFilter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridWorldLocFilter",
               &Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton,
               UNetObjectGridWorldLocFilter::StaticRegisterNativesUNetObjectGridWorldLocFilter,0x1a0
               ,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectGridWorldLocFilter>,
               InternalVTableHelperCtorCaller<UNetObjectGridWorldLocFilter>,local_res8,
               UNetObjectGridFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'CVarAllowRPCsOnDormantObjects'' @ 150369f10

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarAllowRPCsOnDormantObjects__(void)

{
  CVarAllowRPCsOnDormantObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowRPCsOnDormantObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutoNetFlushOnDormantRPC'' @ 150369f30

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarAutoNetFlushOnDormantRPC__(void)

{
  CVarAutoNetFlushOnDormantRPC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutoNetFlushOnDormantRPC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableDeltaCompression'' @ 150369f50

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarEnableDeltaCompression__(void)

{
  CVarEnableDeltaCompression._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableDeltaCompression);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableIrisRPCs'' @ 150369f70

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarEnableIrisRPCs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableIrisRPCs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableUpdateObjectsWithDirtyConditionals'' @ 150369f90

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarEnableUpdateObjectsWithDirtyConditionals__
          (void)

{
  CVarEnableUpdateObjectsWithDirtyConditionals._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableUpdateObjectsWithDirtyConditionals);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnsureIfNumGroupMembershipsExceeds'' @ 150369fb0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarEnsureIfNumGroupMembershipsExceeds__(void)

{
  CVarEnsureIfNumGroupMembershipsExceeds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnsureIfNumGroupMembershipsExceeds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceFullDequantizeAndApply'' @ 150369fd0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarForceFullDequantizeAndApply__(void)

{
  CVarForceFullDequantizeAndApply._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceFullDequantizeAndApply);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinimumNumberOfFramesBetweenBaselines'' @ 150369ff0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarMinimumNumberOfFramesBetweenBaselines__(void)

{
  CVarMinimumNumberOfFramesBetweenBaselines._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinimumNumberOfFramesBetweenBaselines);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRepFilterCullNonRelevant'' @ 15036a010

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarRepFilterCullNonRelevant__(void)

{
  CVarRepFilterCullNonRelevant._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRepFilterCullNonRelevant);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject'' @ 15036a030

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject__
          (void)

{
  CVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRepFilterValidateNoSubObjectInScopeWithFilteredOutRootObject
            );
  return;
}

// `dynamic_atexit_destructor_for_'CVarThrottleRPCWarnings'' @ 15036a050

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarThrottleRPCWarnings__(void)

{
  CVarThrottleRPCWarnings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarThrottleRPCWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisChunkedDataStream'' @ 15036a070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisChunkedDataStream__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisChunkedDataStream);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisConditionals'' @ 15036a090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisConditionals__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisConditionals);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisDirtyTracker'' @ 15036a0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisDirtyTracker__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisDirtyTracker);
  return;
}

// `dynamic_atexit_destructor_for_'LogIrisGroup'' @ 15036a0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIrisGroup__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIrisGroup);
  return;
}

// `dynamic_atexit_destructor_for_'ReplicationFiltering_MootDependentObjectTracker'' @ 15036a0f0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__ReplicationFiltering_MootDependentObjectTracker__
          (void)

{
  ReplicationFiltering_MootDependentObjectTracker.LoggedHashes.HashSize = 0;
  if (ReplicationFiltering_MootDependentObjectTracker.LoggedHashes.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)ReplicationFiltering_MootDependentObjectTracker.LoggedHashes.Hash.
                          SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ReplicationFiltering_MootDependentObjectTracker);
  return;
}

// operator() @ 1504b3310

bool __thiscall
```UE::Net::Private::FReplicationFiltering::UpdateGroupExclusionFiltering'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563243339>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563243339>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b3350

bool __thiscall
``UE::Net::Private::FReplicationFiltering::FilterNonRelevantObjects'::__l5::<lambda_1>::operator()'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563244164>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563244164>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b3990

bool __thiscall
``UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l2::
<lambda_1>::operator()'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241671>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241671>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b4140

bool __thiscall
``UE::Net::Private::FReplicationFiltering::HasSubObjectInScopeWithFilteredOutRootObject'::__l2::
<lambda_1>::operator()'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563241663>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563241663>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

