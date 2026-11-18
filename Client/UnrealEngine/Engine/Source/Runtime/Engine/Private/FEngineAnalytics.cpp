// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// AppendMachineStats @ 147b45880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
FEngineAnalytics::AppendMachineStats
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  EBuildConfiguration EVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UClass *this;
  FString *pFVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  FString *pFVar12;
  FInternationalization *pFVar13;
  FAnalyticsEventAttribute *pFVar14;
  longlong lVar15;
  TSharedRef<FCulture,1> local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FPlatformMemoryStats local_b8;
  
  this = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  FWindowsPlatformMemory::GetStats(&local_b8);
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&local_108,&local_118);
  local_f8 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_f0 = _UNK_15060db28;
  local_e8 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_e0 = _UNK_15060db28;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  (**(code **)(GDynamicRHI->_padding_ + 0x188))(GDynamicRHI,&local_f8);
  (**(code **)(GEngine->_padding_ + 0x540))(GEngine,param_1);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar9 = ::FString::FString((FString *)&local_138,L"ProjectName");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar9,
             (FString *)&pUVar2[4].field_0x8);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar9 = ::FString::FString((FString *)&local_138,L"ProjectID");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FGuid_const_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar9,
             (FGuid *)&pUVar2[3].field_0x20);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar9 = ::FString::FString((FString *)&local_138,L"ProjectDescription");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar9,
             (FString *)&pUVar2[2].field_0x8);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar9 = ::FString::FString((FString *)&local_138,L"ProjectVersion");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar9,
             (FString *)&pUVar2[4].field_0x18);
  pwVar10 = FCommandLine::Get();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString((FString *)&local_138,L"Application.Commandline");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = String;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  EVar5 = FApp::GetBuildConfiguration();
  pwVar10 = ::LexToString(EVar5);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString((FString *)&local_138,L"Build.Configuration");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = String;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  bVar6 = FEngineBuildSettings::IsInternalBuild();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString((FString *)&local_138,L"Build.IsInternalBuild");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar10 = L"true";
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (!bVar6) {
    pwVar10 = L"false";
  }
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  bVar6 = FEngineBuildSettings::IsPerforceBuild();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString((FString *)&local_138,L"Build.IsPerforceBuild");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar10 = L"true";
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (!bVar6) {
    pwVar10 = L"false";
  }
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar8 = FApp::GetEngineIsPromotedBuild();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString((FString *)&local_138,L"Build.IsPromotedBuild");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar10 = L"true";
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (iVar8 == 0) {
    pwVar10 = L"false";
  }
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar9 = FApp::GetBranchName((FString *)&local_138);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar11 = ::FString::FString(&local_128,L"Build.BranchName");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar11,pFVar9);
  if (local_138.Object != (FCulture *)0x0) {
    FMemory::Free(local_138.Object);
  }
  BuildSettings::GetCurrentChangelist();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"Build.Changelist");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&pFVar14->AttrValueString,L"%d");
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"Config.IsEditor");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::FString(&pFVar14->AttrValueString,L"false");
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  bVar6 = FApp::IsUnattended();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"Config.IsUnattended");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar10 = L"true";
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (!bVar6) {
    pwVar10 = L"false";
  }
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar9 = ::FString::FString(&local_128,L"Config.IsBuildMachine");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar9,&GIsBuildMachine);
  bVar6 = PRIVATE_GIsRunningCommandlet;
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"Config.IsRunningCommandlet");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar10 = L"true";
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (bVar6 == false) {
    pwVar10 = L"false";
  }
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  bVar6 = FWindowsPlatformMisc::IsRemoteSession();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"Platform.IsRemoteSession");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar10 = L"true";
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (!bVar6) {
    pwVar10 = L"false";
  }
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar11 = ::FString::FString(&local_128,L"OSMajor");
  pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar11);
  FVar4.Data = local_108.Data.AllocatorInstance.Data;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = &pFVar14->AttrValueString;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  piVar1 = &(pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar15 = (longlong)local_108.Data.ArrayNum;
  (pFVar14->AttrValueString).Data.ArrayNum = local_108.Data.ArrayNum;
  if (local_108.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,local_108.Data.ArrayNum,
               piVar1);
    memcpy((pFVar9->Data).AllocatorInstance.Data,FVar4.Data,lVar15 * 2);
  }
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = String;
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar11 = ::FString::FString(&local_128,L"OSMinor");
  pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar11);
  FVar4.Data = local_118.Data.AllocatorInstance.Data;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = &pFVar14->AttrValueString;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  piVar1 = &(pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar15 = (longlong)local_118.Data.ArrayNum;
  (pFVar14->AttrValueString).Data.ArrayNum = local_118.Data.ArrayNum;
  if (local_118.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,local_118.Data.ArrayNum,
               piVar1);
    memcpy((pFVar9->Data).AllocatorInstance.Data,FVar4.Data,lVar15 * 2);
  }
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = String;
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar9 = FWindowsPlatformMisc::GetOSVersion((FString *)&local_138);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar11 = ::FString::FString(&local_128,L"OSVersion");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar11,pFVar9);
  if (local_138.Object != (FCulture *)0x0) {
    FMemory::Free(local_138.Object);
  }
  bVar6 = FWindowsPlatformMisc::Is64bitOperatingSystem();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"Is64BitOS");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar10 = L"true";
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  if (!bVar6) {
    pwVar10 = L"false";
  }
  ::FString::FString(&pFVar14->AttrValueString,pwVar10);
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar9 = ::FString::FString(&local_128,L"GPUVendorID");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned_int_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar9,
             &GRHIGlobals.GpuInfo.VendorId);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar9 = ::FString::FString(&local_128,L"GPUDeviceID");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned_int_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar9,
             &GRHIGlobals.GpuInfo.DeviceId);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"GPUMemory");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&pFVar14->AttrValueString,L"%llu");
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar9 = ::FString::FString(&local_128,L"GRHIDeviceRevision");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned_int_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar9,
             &GRHIGlobals.GpuInfo.DeviceRevision);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar11 = ::FString::FString(&local_128,L"GRHIAdapterInternalDriverVersion");
  pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar11);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = &pFVar14->AttrValueString;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  piVar1 = &(pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.ArrayNum;
  FVar4 = GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.AllocatorInstance;
  lVar15 = (longlong)GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.ArrayNum;
  (pFVar14->AttrValueString).Data.ArrayNum =
       GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.ArrayNum;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)pFVar9,iVar7,piVar1);
    memcpy((pFVar9->Data).AllocatorInstance.Data,FVar4.Data,lVar15 * 2);
  }
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = String;
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar11 = ::FString::FString(&local_128,L"GRHIAdapterUserDriverVersion");
  pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar11);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = &pFVar14->AttrValueString;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  piVar1 = &(pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.ArrayNum;
  FVar4 = GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.AllocatorInstance;
  lVar15 = (longlong)GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.ArrayNum;
  (pFVar14->AttrValueString).Data.ArrayNum =
       GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.ArrayNum;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)pFVar9,iVar7,piVar1);
    memcpy((pFVar9->Data).AllocatorInstance.Data,FVar4.Data,lVar15 * 2);
  }
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = String;
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
  }
  pFVar9 = ::FString::FString((FString *)&local_138,pwVar10);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar11 = ::FString::FString(&local_128,L"GRHIName");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar11,pFVar9);
  if (local_138.Object != (FCulture *)0x0) {
    FMemory::Free(local_138.Object);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"TotalPhysicalRAM");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&pFVar14->AttrValueString,L"%llu");
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FWindowsPlatformMisc::NumberOfCores();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"CPUPhysicalCores");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&pFVar14->AttrValueString,L"%d");
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar9 = ::FString::FString(&local_128,L"CPULogicalCores");
  pFVar11 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar9);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&pFVar14->AttrValueString,L"%d");
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = JsonFragment;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar9 = FWindowsPlatformMisc::GetPrimaryGPUBrand((FString *)&local_138);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar11 = ::FString::FString(&local_128,L"DesktopGPUAdapter");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar11,pFVar9);
  if (local_138.Object != (FCulture *)0x0) {
    FMemory::Free(local_138.Object);
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar14 = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30)
  ;
  pFVar11 = ::FString::FString(&local_128,L"RenderingGPUAdapter");
  pFVar12 = FAnalyticsEventAttribute::CheckName(pFVar14,pFVar11);
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = &pFVar14->AttrValueString;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->AttrName).Data.ArrayNum = (pFVar12->Data).ArrayNum;
  (pFVar14->AttrName).Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  piVar1 = &(pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = GRHIGlobals.GpuInfo.AdapterName.Data.ArrayNum;
  FVar4 = GRHIGlobals.GpuInfo.AdapterName.Data.AllocatorInstance;
  lVar15 = (longlong)GRHIGlobals.GpuInfo.AdapterName.Data.ArrayNum;
  (pFVar14->AttrValueString).Data.ArrayNum = GRHIGlobals.GpuInfo.AdapterName.Data.ArrayNum;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)pFVar9,iVar7,piVar1);
    memcpy((pFVar9->Data).AllocatorInstance.Data,FVar4.Data,lVar15 * 2);
  }
  pFVar14->AttrValueNumber = 0.0;
  pFVar14->AttrValueBool = false;
  pFVar14->AttrType = String;
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar9 = FWindowsPlatformMisc::GetCPUVendor((FString *)&local_138);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar11 = ::FString::FString(&local_128,L"CPUVendor");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar11,pFVar9);
  if (local_138.Object != (FCulture *)0x0) {
    FMemory::Free(local_138.Object);
  }
  pFVar9 = FWindowsPlatformMisc::GetCPUBrand((FString *)&local_138);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar11 = ::FString::FString(&local_128,L"CPUBrand");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar11,pFVar9);
  if (local_138.Object != (FCulture *)0x0) {
    FMemory::Free(local_138.Object);
  }
  pFVar13 = FInternationalization::Get();
  TSharedPtr<FCulture,1>::ToSharedRef(&pFVar13->CurrentLanguage,&local_138);
  pFVar9 = FCulture::GetName(local_138.Object);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar11 = ::FString::FString(&local_128,L"Internationalization.Language");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar11,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  pFVar13 = FInternationalization::Get();
  TSharedPtr<FCulture,1>::ToSharedRef(&pFVar13->CurrentLocale,&local_138);
  pFVar9 = FCulture::GetName(local_138.Object);
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar11 = ::FString::FString(&local_128,L"Internationalization.Locale");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
            ((FAnalyticsEventAttribute *)(pFVar3 + (longlong)iVar7 * 0x30),pFVar11,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return;
}

// GetProvider @ 147b6cb90

IAnalyticsProviderET * __cdecl FEngineAnalytics::GetProvider(void)

{
  code *pcVar1;
  bool bVar2;
  IAnalyticsProviderET *pIVar3;
  
  if (((!bIsInitialized) || (Analytics.Object == (IAnalyticsProviderET *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized && IsAvailable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineAnalytics.cpp"
                         ,0x59,
                         L"FEngineAnalytics::GetProvider called outside of Initialize/Shutdown."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAnalyticsProviderET *)(*pcVar1)();
    return pIVar3;
  }
  return Analytics.Object;
}

// Initialize @ 147b77460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FEngineAnalytics::Initialize(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (bIsInitialized) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineAnalytics.cpp"
                       ,0x69,L"FEngineAnalytics::Initialize called more than once.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GEngine == (UEngine *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GEngine",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineAnalytics.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// LowDriveSpaceDetected @ 147b78ba0

void __cdecl FEngineAnalytics::LowDriveSpaceDetected(void)

{
  return;
}

// OnEpicAccountIdChanged @ 147b7b770

void __cdecl FEngineAnalytics::OnEpicAccountIdChanged(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (1 < (param_1->Data).ArrayNum) {
    CreateAnalyticsUserId(&local_18,param_1);
    if (Analytics.Object != (IAnalyticsProviderET *)0x0) {
      if ((Analytics.Object == (IAnalyticsProviderET *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)((Analytics.Object)->_padding_ + 0x28))(Analytics.Object,&local_18);
      SendMachineInfoForAccount(param_1);
    }
    FGenericCrashContext::SetEpicAccountId(param_1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SendMachineInfoForAccount @ 147b88190

void __cdecl FEngineAnalytics::SendMachineInfoForAccount(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  FString local_res10;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_18;
  
  if (Analytics.Object != (IAnalyticsProviderET *)0x0) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar6 = L"";
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&SessionEpicAccountIds,uVar4,param_1);
    if (iVar5 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&SessionEpicAccountIds,&local_res10,(bool *)param_1);
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      AppendMachineStats(&local_18);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&SZEventName,L"SessionMachineStats");
        atexit(`FEngineAnalytics::SendMachineInfoForAccount'::__l5::
               _dynamic_atexit_destructor_for__SZEventName__);
        _Init_thread_footer(&::_TSS0);
      }
      if ((Analytics.Object == (IAnalyticsProviderET *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((Analytics.Object)->_padding_ + 0x80))(Analytics.Object,&SZEventName,&local_18);
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      if ((FAnalyticsEventAttribute *)local_18.AllocatorInstance.Data !=
          (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Shutdown @ 147b8e460

void __cdecl FEngineAnalytics::Shutdown(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> local_10 [2];
  
  bIsInitialized = false;
  if ((Analytics.Object != (IAnalyticsProviderET *)0x0) &&
     ((Analytics.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0 ||
      ((Analytics.SharedReferenceCount.ReferenceController)->SharedReferenceCount !=
       (atomic<int>)0x1)))) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3007178428114796748>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineAnalytics.cpp"
                       ,0xcc,"!Analytics.IsValid() || Analytics.IsUnique()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  Analytics.Object = (IAnalyticsProviderET *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&Analytics.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

// Tick @ 147b8f050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FEngineAnalytics::Tick(float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FEngineAnalytics::Tick(float)_::_2_::FStat_STAT_FEngineAnalytics_Tick>
  FVar5;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FEngineAnalytics_Tick ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_FEngineAnalytics::Tick(float)_::_2_::FStat_STAT_FEngineAnalytics_Tick>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res10.s,"STAT_FEngineAnalytics_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FEngineAnalytics_Tick,*pFVar4,
                   L"STAT_FEngineAnalytics_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_FEngineAnalytics_Tick;
  if (StatPtr_STAT_FEngineAnalytics_Tick ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FEngineAnalytics::Tick(float)_::_2_::FStat_STAT_FEngineAnalytics_Tick>
       )0x0) {
    pFVar4 = ::FName::FName(local_res18,"STAT_FEngineAnalytics_Tick");
    FVar5 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FEngineAnalytics::Tick(float)_::_2_::FStat_STAT_FEngineAnalytics_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FEngineAnalytics_Tick,*pFVar4,
                         L"STAT_FEngineAnalytics_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar7.Value;
        local_res10.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineAnalytics.cpp"
                   ,0xd2);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar7.Value;
      local_res10.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      if (this->bWaitForExplicitFlush < this->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res10);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this,&local_28);
        piVar1 = &this->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
  }
  return;
}

