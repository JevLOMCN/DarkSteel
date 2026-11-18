// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 36

// FSaveContext @ 1421b35d0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSaveContext * __thiscall
FSaveContext::FSaveContext
          (FSaveContext *this,UPackage *param_1,UObject *param_2,wchar_t *param_3,
          FSavePackageArgs *param_4)

{
  FPackagePath *this_00;
  FObjectSaveContextData *this_01;
  ECookingDLC EVar1;
  FArchiveCookData *pFVar2;
  TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
  *pTVar3;
  IPackageWriter *pIVar4;
  code *pcVar5;
  long64 lVar6;
  FSavePackageContext *pFVar7;
  uint uVar8;
  undefined5 uVar9;
  undefined3 uVar10;
  bool bVar11;
  EPackageExtension EVar12;
  bool bVar13;
  EObjectMark EVar14;
  EObjectFlags EVar15;
  int iVar16;
  FArchiveCookContext *pFVar17;
  FSaveContext *pFVar18;
  UObject *pUVar19;
  size_t sVar20;
  FPackagePath *pFVar21;
  FString *pFVar22;
  FString *pFVar23;
  IConsoleManager *pIVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  int *piVar27;
  FArchiveCookContext *pFVar28;
  FPackagePath local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FString local_38;
  
  pFVar28 = (FArchiveCookContext *)0x0;
  this_00 = &this->TargetPackagePath;
  this->GatherableTextResultFlags = Empty;
  iVar16 = 0;
  (this->PackageSavedHash).Hash[0] = '\0';
  (this->PackageSavedHash).Hash[1] = '\0';
  (this->PackageSavedHash).Hash[2] = '\0';
  (this->PackageSavedHash).Hash[3] = '\0';
  (this->PackageSavedHash).Hash[4] = '\0';
  (this->PackageSavedHash).Hash[5] = '\0';
  (this->PackageSavedHash).Hash[6] = '\0';
  (this->PackageSavedHash).Hash[7] = '\0';
  (this->PackageSavedHash).Hash[8] = '\0';
  (this->PackageSavedHash).Hash[9] = '\0';
  (this->PackageSavedHash).Hash[10] = '\0';
  (this->PackageSavedHash).Hash[0xb] = '\0';
  (this->PackageSavedHash).Hash[0xc] = '\0';
  (this->PackageSavedHash).Hash[0xd] = '\0';
  (this->PackageSavedHash).Hash[0xe] = '\0';
  (this->PackageSavedHash).Hash[0xf] = '\0';
  (this->PackageSavedHash).Hash[0x10] = '\0';
  (this->PackageSavedHash).Hash[0x11] = '\0';
  (this->PackageSavedHash).Hash[0x12] = '\0';
  (this->PackageSavedHash).Hash[0x13] = '\0';
  (this->AdditionalFilesFromExports).AllocatorInstance.SecondaryData =
       (ForElementType<FLargeMemoryWriter>)0x0;
  this->PackageHeaderAndExportSize = 0;
  this->TotalPackageSizeUncompressed = 0;
  this->OffsetAfterPackageFileSummary = 0;
  this->OffsetAfterImportMap = 0;
  this->OffsetAfterExportMap = 0;
  this->OffsetAfterPayloadToc = 0;
  this->SerializedPackageFlags = 0;
  (this->AdditionalFilesFromExports).ArrayNum = 0;
  (this->AdditionalFilesFromExports).ArrayMax = 4;
  (this->AdditionalPackageFiles).AllocatorInstance.SecondaryData =
       (ForElementType<FSavePackageOutputFile>)0x0;
  (this->AdditionalPackageFiles).ArrayNum = 0;
  (this->AdditionalPackageFiles).ArrayMax = 4;
  this->Package = param_1;
  this->Asset = param_2;
  (this->TargetPackagePath).HeaderExtension = Unspecified;
  (this_00->PackageName).ComparisonIndex = 0;
  (this_00->PackageName).Number = 0;
  this->Filename = param_3;
  EVar15 = param_4->TopLevelFlags;
  uVar8 = param_4->SaveFlags;
  (this->SaveArgs).ArchiveCookData = param_4->ArchiveCookData;
  (this->SaveArgs).TopLevelFlags = EVar15;
  (this->SaveArgs).SaveFlags = uVar8;
  bVar11 = param_4->bWarnOfLongFilename;
  bVar13 = param_4->bSlowTask;
  uVar9 = *(undefined5 *)&param_4->field_0x13;
  lVar6 = (param_4->FinalTimeStamp).Ticks;
  (this->SaveArgs).bForceByteSwapping = param_4->bForceByteSwapping;
  (this->SaveArgs).bWarnOfLongFilename = bVar11;
  (this->SaveArgs).bSlowTask = bVar13;
  *(undefined5 *)&(this->SaveArgs).field_0x13 = uVar9;
  (this->SaveArgs).FinalTimeStamp.Ticks = lVar6;
  pFVar7 = param_4->SavePackageContext;
  (this->SaveArgs).Error = param_4->Error;
  (this->SaveArgs).SavePackageContext = pFVar7;
  (this->SaveArgs).InOutSaveOverrides = param_4->InOutSaveOverrides;
  pFVar17 = pFVar28;
  if (param_4->SavePackageContext != (FSavePackageContext *)0x0) {
    pFVar17 = (FArchiveCookContext *)param_4->SavePackageContext->PackageWriter;
  }
  this_01 = &this->ObjectSaveContext;
  this->PackageWriter = (IPackageWriter *)pFVar17;
  FObjectSaveContextData::FObjectSaveContextData(this_01);
  (this->ArchiveSavePackageData).TargetPlatform = (ITargetPlatform *)0x0;
  (this->ObjectSavePackageSerializeContext).Data = this_01;
  (this->ArchiveSavePackageData).SavePackageContext = &this->ObjectSavePackageSerializeContext;
  (this->ArchiveSavePackageData).CookContext = (FArchiveCookContext *)0x0;
  this->bCanUseUnversionedPropertySerialization = false;
  this->bTextFormat = false;
  this->bIsProcessingPrestreamPackages = false;
  this->bIsFixupStandaloneFlags = false;
  this->bPostSaveRootRequired = false;
  this->bNeedPreSaveCleanup = false;
  this->bGenerateFileStub = false;
  this->bIgnoreHeaderDiffs = false;
  this->bIsSaveAutoOptional = false;
  FCanSkipEditorReferencedPackagesWhenCooking::FCanSkipEditorReferencedPackagesWhenCooking
            (&this->SkipEditorRefCookingSetting);
  pFVar2 = (this->SaveArgs).ArchiveCookData;
  pFVar17 = pFVar28;
  if (pFVar2 != (FArchiveCookData *)0x0) {
    pFVar17 = (FArchiveCookContext *)pFVar2->TargetPlatform;
  }
  EVar14 = GetExcludedObjectMarksForGameRealm((ITargetPlatform *)pFVar17);
  this->GameRealmExcludedObjectMarks = EVar14;
  pwVar26 = L"";
  (this->CustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomVersions).Versions.ArrayNum = 0;
  (this->CustomVersions).Versions.ArrayMax = 0;
  this->CurrentHarvestingRealm = None;
  (this->HarvestedRealms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HarvestedRealms).ArrayNum = 0;
  (this->HarvestedRealms).ArrayMax = 0;
  (this->HarvestedIllegalReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HarvestedIllegalReferences).ArrayNum = 0;
  (this->HarvestedIllegalReferences).ArrayMax = 0;
  *(undefined8 *)&(this->PrestreamPackages).Elements = 0;
  *(undefined8 *)&(this->PrestreamPackages).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrestreamPackages).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PrestreamPackages).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrestreamPackages).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrestreamPackages).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrestreamPackages).Elements.field_0x34 = 0;
  (this->PrestreamPackages).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrestreamPackages).HashSize = 0;
  (this->SavedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedAssets).ArrayNum = 0;
  (this->SavedAssets).ArrayMax = 0;
  *(undefined8 *)&this->TransientPropertyOverrides = 0;
  *(undefined8 *)&(this->TransientPropertyOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->TransientPropertyOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->TransientPropertyOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x48 = 0;
  *(undefined8 *)&this->ObjectStatusCache = 0;
  *(undefined8 *)&(this->ObjectStatusCache).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectStatusCache).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectStatusCache).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectStatusCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectStatusCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectStatusCache).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectStatusCache).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectStatusCache).field_0x48 = 0;
  (this->PackageBuildDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageBuildDependencies).ArrayNum = 0;
  (this->PackageBuildDependencies).ArrayMax = 0;
  (this->EmptyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyList).ArrayNum = 0;
  (this->EmptyList).ArrayMax = 0;
  *(undefined8 *)&(this->PostSaveObjectsToSerialize).Elements = 0;
  *(undefined8 *)&(this->PostSaveObjectsToSerialize).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PostSaveObjectsToSerialize).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PostSaveObjectsToSerialize).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PostSaveObjectsToSerialize).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PostSaveObjectsToSerialize).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PostSaveObjectsToSerialize).Elements.field_0x34 = 0;
  (this->PostSaveObjectsToSerialize).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PostSaveObjectsToSerialize).HashSize = 0;
  if ((param_1 == (UPackage *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InPackage",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.h"
                          ,0x26d,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pFVar18 = (FSaveContext *)(*pcVar5)();
    return pFVar18;
  }
  if ((param_3 == (wchar_t *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFilename",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.h"
                          ,0x26e,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pFVar18 = (FSaveContext *)(*pcVar5)();
    return pFVar18;
  }
  if ((this->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsCooking() || 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.h"
                        ,0x270,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pFVar18 = (FSaveContext *)(*pcVar5)();
      return pFVar18;
    }
    if ((((this->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) &&
        (this->PackageWriter == (IPackageWriter *)0x0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsCooking() || PackageWriter",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.h"
                            ,0x271,L"Cook saves require an IPackageWriter"), bVar11)) {
      pcVar5 = (code *)swi(3);
      pFVar18 = (FSaveContext *)(*pcVar5)();
      return pFVar18;
    }
  }
  pFVar2 = (this->SaveArgs).ArchiveCookData;
  this->InitialPackageFlags = (uint)this->Package->PackageFlagsPrivate;
  EVar15 = UE::SavePackageUtilities::NormalizeTopLevelFlags
                     ((this->SaveArgs).TopLevelFlags,pFVar2 != (FArchiveCookData *)0x0);
  (this->SaveArgs).TopLevelFlags = EVar15;
  if (this->PackageWriter != (IPackageWriter *)0x0) {
    this->bIgnoreHeaderDiffs =
         (((this->SaveArgs).SavePackageContext)->PackageWriterCapabilities).bIgnoreHeaderDiffs;
  }
  if (this->Asset == (UObject *)0x0) {
    pUVar19 = UPackage::FindAssetInPackage(param_1,RF_NoFlags);
    this->Asset = pUVar19;
  }
  local_78 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar20 = wcslen(param_3);
    iVar16 = (int)sVar20;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iVar16;
  local_68.DataPtr = local_78;
  iStack_70 = iVar16;
  pFVar21 = FPackagePath::FromLocalPath(&local_98,&local_68);
  this_00->PackageName = pFVar21->PackageName;
  uVar10 = *(undefined3 *)&pFVar21->field_0x9;
  (this->TargetPackagePath).HeaderExtension = pFVar21->HeaderExtension;
  *(undefined3 *)&(this->TargetPackagePath).field_0x9 = uVar10;
  EVar12 = FPackagePath::GetHeaderExtension(this_00);
  if (EVar12 == Unspecified) {
    uStack_80 = 0;
    local_88 = 0;
    local_58.DataPtr = (wchar_t *)0x0;
    local_58.Size = 0;
    local_58._12_4_ = 0;
    FPackagePath::SetHeaderExtension(this_00,EmptyString,&local_58);
  }
  pFVar2 = (this->SaveArgs).ArchiveCookData;
  pFVar17 = pFVar28;
  if (pFVar2 != (FArchiveCookData *)0x0) {
    pFVar17 = (FArchiveCookContext *)pFVar2->TargetPlatform;
  }
  bVar11 = CanUseUnversionedPropertySerialization((ITargetPlatform *)pFVar17);
  this->bCanUseUnversionedPropertySerialization = bVar11;
  pFVar22 = ::FString::FString(&local_38,this->Filename);
  pFVar23 = FPackageName::GetTextAssetPackageExtension();
  iVar16 = (pFVar23->Data).ArrayNum;
  if (iVar16 == 0) {
    pwVar25 = L"";
    pFVar17 = pFVar28;
  }
  else {
    pwVar25 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
    pFVar17 = (FArchiveCookContext *)(ulonglong)(iVar16 - 1);
  }
  bVar11 = false;
  bVar13 = ::FString::EndsWith(pFVar22,pwVar25,(int)pFVar17,IgnoreCase);
  if (bVar13) {
LAB_1421b3ad3:
    this->bTextFormat = true;
    if (!bVar11) goto LAB_1421b3af2;
  }
  else {
    pFVar22 = ::FString::FString(&local_48,this->Filename);
    pFVar23 = FPackageName::GetTextMapPackageExtension();
    iVar16 = (pFVar23->Data).ArrayNum;
    pFVar17 = pFVar28;
    if (iVar16 != 0) {
      pwVar26 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      pFVar17 = (FArchiveCookContext *)(ulonglong)(iVar16 - 1);
    }
    bVar11 = true;
    bVar13 = ::FString::EndsWith(pFVar22,pwVar26,(int)pFVar17,IgnoreCase);
    if (bVar13) goto LAB_1421b3ad3;
    this->bTextFormat = false;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_1421b3af2:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  piVar27 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar27 <
       `public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar24 = IConsoleManager::Get();
    `public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
    ::__l2::ProcessPrestreamingRequests =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar24 + 0xc0))(pIVar24,L"s.ProcessPrestreamingRequests",1);
    _Init_thread_footer(&`public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
      ::__l2::ProcessPrestreamingRequests != (IConsoleVariable *)0x0) {
    iVar16 = (**(code **)(*(longlong *)
                           `public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
                           ::__l2::ProcessPrestreamingRequests + 200))();
    this->bIsProcessingPrestreamPackages = 0 < iVar16;
  }
  if ((*piVar27 <
       `public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pIVar24 = IConsoleManager::Get();
    `public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
    ::__l2::FixupStandaloneFlags =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar24 + 0xc0))(pIVar24,L"save.FixupStandaloneFlags",1);
    _Init_thread_footer(&`public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if (`public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
      ::__l2::FixupStandaloneFlags != (IConsoleVariable *)0x0) {
    iVar16 = (**(code **)(*(longlong *)
                           `public:___cdecl_FSaveContext::FSaveContext(UPackage*___ptr64,UObject*___ptr64,wchar_t_const*___ptr64,FSavePackageArgs_const&___ptr64)___ptr64'
                           ::__l2::FixupStandaloneFlags + 200))();
    this->bIsFixupStandaloneFlags = iVar16 != 0;
  }
  pFVar2 = (this->SaveArgs).ArchiveCookData;
  pFVar17 = pFVar28;
  if (pFVar2 != (FArchiveCookData *)0x0) {
    pFVar17 = (FArchiveCookContext *)pFVar2->TargetPlatform;
  }
  FObjectSaveContextData::Set
            (this_01,param_1,(ITargetPlatform *)pFVar17,this_00,(this->SaveArgs).SaveFlags);
  pFVar2 = (this->SaveArgs).ArchiveCookData;
  if (pFVar2 == (FArchiveCookData *)0x0) {
    (this->ArchiveSavePackageData).TargetPlatform = (this->ObjectSaveContext).TargetPlatform;
  }
  else {
    (this->ObjectSaveContext).CookType = pFVar2->CookContext->CookType;
    EVar1 = pFVar2->CookContext->CookingDLC;
    (this->ArchiveSavePackageData).TargetPlatform = (this->ObjectSaveContext).TargetPlatform;
    (this->ObjectSaveContext).CookingDLC = EVar1;
    pFVar28 = pFVar2->CookContext;
  }
  pTVar3 = (this->SaveArgs).InOutSaveOverrides;
  (this->ArchiveSavePackageData).CookContext = pFVar28;
  if (pTVar3 != (TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
                 *)0x0) {
    TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
    ::operator=(&(this->ObjectSaveContext).SaveOverrides,pTVar3);
  }
  pIVar4 = this->PackageWriter;
  (this->ObjectSaveContext).PackageWriter = pIVar4;
  if (pIVar4 != (IPackageWriter *)0x0) {
    (this->ObjectSaveContext).bDeterminismDebug =
         (((this->SaveArgs).SavePackageContext)->PackageWriterCapabilities).bDeterminismDebug;
  }
  SetupHarvestingRealms(this);
  return this;
}

// ~FSaveContext @ 1421b6b10

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FSaveContext::~FSaveContext(FSaveContext *this)

{
  TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
  *this_00;
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ForElementType<FSavePackageOutputFile> FVar4;
  ForElementType<FLargeMemoryWriter> FVar5;
  
  if ((this->bPostSaveRootRequired != false) && (this->Asset != (UObject *)0x0)) {
    UE::SavePackageUtilities::CallPostSaveRoot
              (this->Asset,&this->ObjectSaveContext,this->bNeedPreSaveCleanup);
  }
  this_00 = (this->SaveArgs).InOutSaveOverrides;
  if (this_00 !=
      (TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
       *)0x0) {
    TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
    ::operator=(this_00,&(this->ObjectSaveContext).SaveOverrides);
  }
  (this->PostSaveObjectsToSerialize).HashSize = 0;
  FVar1 = (this->PostSaveObjectsToSerialize).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PostSaveObjectsToSerialize).Elements);
  pFVar2 = (this->EmptyList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PackageBuildDependencies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ObjectStatusCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ObjectStatusCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStatusCache);
  *(undefined4 *)&(this->TransientPropertyOverrides).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TransientPropertyOverrides).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TransientPropertyOverrides);
  DestructItems<FAssetData,int>
            ((FAssetData *)(this->SavedAssets).AllocatorInstance.Data,(this->SavedAssets).ArrayNum);
  pFVar2 = (this->SavedAssets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->PrestreamPackages).HashSize = 0;
  FVar1 = (this->PrestreamPackages).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PrestreamPackages).Elements);
  DestructItems<FIllegalReference,int>
            ((FIllegalReference *)(this->HarvestedIllegalReferences).AllocatorInstance.Data,
             (this->HarvestedIllegalReferences).ArrayNum);
  pFVar2 = (this->HarvestedIllegalReferences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FHarvestedRealm,int>
            ((FHarvestedRealm *)(this->HarvestedRealms).AllocatorInstance.Data,
             (this->HarvestedRealms).ArrayNum);
  pFVar2 = (this->HarvestedRealms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CustomVersions).Versions.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FObjectSaveContextData::~FObjectSaveContextData(&this->ObjectSaveContext);
  FVar4 = (this->AdditionalPackageFiles).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FSavePackageOutputFile>)0x0) {
    FVar4 = (ForElementType<FSavePackageOutputFile>)&this->AdditionalPackageFiles;
  }
  DestructItems<FSavePackageOutputFile,int>
            ((FSavePackageOutputFile *)FVar4,(this->AdditionalPackageFiles).ArrayNum);
  FVar4 = (this->AdditionalPackageFiles).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FSavePackageOutputFile>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar5 = (this->AdditionalFilesFromExports).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FLargeMemoryWriter>)0x0) {
    FVar5 = (ForElementType<FLargeMemoryWriter>)&this->AdditionalFilesFromExports;
  }
  DestructItems<FLargeMemoryWriter,int>
            ((FLargeMemoryWriter *)FVar5,(this->AdditionalFilesFromExports).ArrayNum);
  FVar5 = (this->AdditionalFilesFromExports).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FLargeMemoryWriter>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  return;
}

// CloseLinkerArchives @ 1421c2060

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FSaveContext::CloseLinkerArchives(FSaveContext *this)

{
  ESaveRealm EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar5 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar5 = ~EVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = FHarvestedRealm::CloseLinkerArchives
                    ((FHarvestedRealm *)
                     ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0)
                    );
  return bVar3;
}

// GetCachedObjectStatus @ 1421cf3d0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FObjectStatus * __thiscall
FSaveContext::GetCachedObjectStatus(FSaveContext *this,TObjectPtr<UObject> param_1)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  FObjectStatus *pFVar3;
  TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
  *pTVar4;
  FObjectStatus *pFVar5;
  FObjectStatus *pFVar6;
  uint uVar7;
  TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>
  local_18 [2];
  
  pUVar2 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  uVar7 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  pTVar4 = TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
           ::FindOrAddImpl<TObjectPtr<UObject>_const_&>
                     ((TMapBase<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>,0>_>
                       *)&this->ObjectStatusCache,uVar7 >> 0x10 ^ uVar7,
                      (TObjectPtr<UObject> *)param_1.field0_0x0);
  if (pTVar4->Ptr != (FObjectStatus *)0x0) {
    return pTVar4->Ptr;
  }
  pFVar5 = ::operator_new(0x48);
  pFVar6 = pFVar5;
  if (pFVar5 != (FObjectStatus *)0x0) {
    pFVar5->RealmInstigator[0].Object = (UObject *)0x0;
    pFVar5->RealmInstigator[0].Property = (FProperty *)0x0;
    pFVar5->RealmInstigator[1].Object = (UObject *)0x0;
    pFVar5->RealmInstigator[1].Property = (FProperty *)0x0;
    pFVar5->RealmInstigator[2].Object = (UObject *)0x0;
    pFVar5->RealmInstigator[2].Property = (FProperty *)0x0;
    pFVar5->SaveableStatusCulprit = (UObject *)0x0;
    pFVar5->SaveableStatus = Success;
    pFVar5->SaveableStatusCulpritStatus = Success;
    puVar1 = &pFVar5->field_0x40;
    pFVar5->bSaveOverrideForcedTransient = false;
    pFVar5->bDeclaredSaveBuildDependency = false;
    pFVar5->bIsInSavePackage = false;
    pFVar5->bIsInSavePackageValid = false;
    pFVar5->bAttemptedExport = false;
    pFVar5->bEditorOnly = false;
    pFVar5->bEditorOnlyValid = false;
    pFVar5->bSaveableStatusValid = false;
    pFVar6 = (FObjectStatus *)0x0;
  }
  if (pTVar4 != local_18) {
    pFVar3 = pTVar4->Ptr;
    pTVar4->Ptr = pFVar5;
    ::operator_delete(pFVar3,0x48);
    pFVar5 = pFVar6;
  }
  ::operator_delete(pFVar5,0x48);
  return pTVar4->Ptr;
}

// GetExports @ 1421cf880

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> * __thiscall
FSaveContext::GetExports(FSaveContext *this)

{
  ESaveRealm EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *pTVar5;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar4 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  return (TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *)
         ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0 + 0xe0);
}

// GetHarvestedRealm @ 1421cf9a0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FHarvestedRealm * __thiscall FSaveContext::GetHarvestedRealm(FSaveContext *this,ESaveRealm param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHarvestedRealm *pFVar4;
  
  if (param_1 == None) {
    param_1 = this->CurrentHarvestingRealm;
  }
  uVar3 = 0;
  if ((int)param_1 < (this->HarvestedRealms).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHarvestedRealm *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FHarvestedRealm *)
         ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)param_1 * 0x5f0);
}

// GetHarvestedRealm @ 1421cfa30

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FHarvestedRealm * __thiscall FSaveContext::GetHarvestedRealm(FSaveContext *this,ESaveRealm param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHarvestedRealm *pFVar4;
  
  if (param_1 == None) {
    param_1 = this->CurrentHarvestingRealm;
  }
  uVar3 = 0;
  if ((int)param_1 < (this->HarvestedRealms).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHarvestedRealm *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FHarvestedRealm *)
         ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)param_1 * 0x5f0);
}

// GetImports @ 1421cfac0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> * __thiscall
FSaveContext::GetImports(FSaveContext *this)

{
  ESaveRealm EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar5;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar4 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *)
         ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0 + 0x130);
}

// GetLinker @ 1421cfb50

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FLinkerSave * __thiscall FSaveContext::GetLinker(FSaveContext *this)

{
  ESaveRealm EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FLinkerSave *pFVar5;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar4 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinkerSave *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FLinkerSave **)
          ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0);
}

// GetObjectDependencies @ 1421cfe10

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TMap<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
* __thiscall FSaveContext::GetObjectDependencies(FSaveContext *this)

{
  ESaveRealm EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TMap<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
  *pTVar5;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar4 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMap<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TMap<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
          *)((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0 + 0x460);
}

// GetSearchableNamesObjectMap @ 1421d0c00

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TMap<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall FSaveContext::GetSearchableNamesObjectMap(FSaveContext *this)

{
  ESaveRealm EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TMap<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar4 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMap<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TMap<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          *)((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0 + 0x410);
}

// GetTempFilename @ 1421d0df0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TOptional<FString> * __thiscall FSaveContext::GetTempFilename(FSaveContext *this)

{
  ESaveRealm EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TOptional<FString> *pTVar5;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar4 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TOptional<FString> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TOptional<FString> *)
         ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0 + 0x20);
}

// GetTextFormatTempFilename @ 1421d0e80

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TOptional<FString> * __thiscall FSaveContext::GetTextFormatTempFilename(FSaveContext *this)

{
  ESaveRealm EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TOptional<FString> *pTVar5;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar4 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TOptional<FString> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TOptional<FString> *)
         ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0 + 0x30);
}

// IsIncluded @ 1421d3680

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FSaveContext::IsIncluded(FSaveContext *this,TObjectPtr<UObject> param_1)

{
  ESaveRealm EVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  FHarvestedRealm *this_00;
  UObject *local_res8;
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar8 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar8 = ~EVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar2 = *(UObject **)param_1.field0_0x0;
  this_00 = (FHarvestedRealm *)
            ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  bVar5 = FHarvestedRealm::IsImport(this_00,(TObjectPtr<UObject>)&local_res8);
  if (bVar5) {
LAB_1421d3819:
    bVar5 = true;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
      }
    }
    uVar8 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (*(int *)&(this_00->Exports).Elements.field_0x8 !=
        *(int *)&(this_00->Exports).Elements.field_0x34) {
      FVar9 = (this_00->Exports).Hash.SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&(this_00->Exports).Hash;
      }
      iVar7 = *(int *)((longlong)FVar9 +
                      (ulonglong)((this_00->Exports).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar7 != -1) {
        lVar3 = *(longlong *)&(this_00->Exports).Elements;
        do {
          if (*(UObject **)(lVar3 + (longlong)iVar7 * 0x18) == pUVar2) goto LAB_1421d3819;
          iVar7 = *(int *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    bVar5 = false;
  }
  return bVar5;
}

// SetFormatter @ 1421e7a80

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FSaveContext::SetFormatter
          (FSaveContext *this,
          TUniquePtr<FBinaryArchiveFormatter,TDefaultDelete<FBinaryArchiveFormatter>_> param_1)

{
  ESaveRealm EVar1;
  FBinaryArchiveFormatter *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBinaryArchiveFormatter *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement local_18 [16];
  
  EVar1 = this->CurrentHarvestingRealm;
  uVar4 = 0;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar4 = ~EVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (FBinaryArchiveFormatter *)(param_1.Ptr)->_padding_;
  pFVar6 = (this->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar1 * 0x5f0 + 0x10;
  (param_1.Ptr)->_padding_ = 0;
  if (pFVar6 == local_18) {
    if (pFVar5 == (FBinaryArchiveFormatter *)0x0) goto LAB_1421e7b44;
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(pFVar5);
  }
  else {
    this_00 = *(FBinaryArchiveFormatter **)pFVar6;
    *(FBinaryArchiveFormatter **)pFVar6 = pFVar5;
    if (this_00 == (FBinaryArchiveFormatter *)0x0) goto LAB_1421e7b44;
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(this_00);
    pFVar5 = this_00;
  }
  ::operator_delete(pFVar5,0x10);
LAB_1421e7b44:
  pFVar5 = (FBinaryArchiveFormatter *)(param_1.Ptr)->_padding_;
  if (pFVar5 != (FBinaryArchiveFormatter *)0x0) {
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(pFVar5);
    ::operator_delete(pFVar5,0x10);
  }
  return;
}

// SetTempFilename @ 1421e8840

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FSaveContext::SetTempFilename(FSaveContext *this,TOptional<FString> *param_1)

{
  ESaveRealm EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined4 uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement local_28 [16];
  
  EVar1 = this->CurrentHarvestingRealm;
  pFVar11 = (FScriptContainerElement *)0x0;
  uVar10 = 0;
  uVar5 = uVar10;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar5 = ~EVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(uint *)((longlong)&param_1->field0_0x0 + 0xc);
  uVar9 = 0;
  pFVar2 = (this->HarvestedRealms).AllocatorInstance.Data;
  pFVar8 = pFVar11;
  uVar7 = 0xffffffff;
  if (uVar5 != 0xffffffff) {
    pFVar8 = (param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    (param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    *(int *)((longlong)&param_1->field0_0x0 + 8) = 0;
    *(int *)((longlong)&param_1->field0_0x0 + 0xc) = 0;
    uVar7 = uVar5;
  }
  pFVar6 = pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x20;
  if (local_28 != pFVar6) {
    if (uVar7 == 0xffffffff) {
      if (*(int *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x2c) != -1) {
        if (*(void **)pFVar6 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar6);
        }
        *(undefined8 *)pFVar6 = 0;
        *(undefined4 *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x28) = 0;
        *(undefined4 *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x2c) = 0xffffffff;
      }
    }
    else {
      if (*(void **)pFVar6 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar6);
      }
      *(FScriptContainerElement **)pFVar6 = pFVar8;
      *(uint *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x2c) = uVar7;
      *(undefined4 *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x28) = uVar9;
      bVar4 = uVar7 == 0xffffffff;
      pFVar8 = pFVar11;
      uVar7 = uVar10;
      if (bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  if ((uVar7 != 0xffffffff) && (pFVar8 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar8);
  }
  if ((*(int *)((longlong)&param_1->field0_0x0 + 0xc) != -1) &&
     (pFVar11 = (param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar11 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar11);
  }
  return;
}

// SetTextFormatTempFilename @ 1421e89b0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FSaveContext::SetTextFormatTempFilename(FSaveContext *this,TOptional<FString> *param_1)

{
  ESaveRealm EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined4 uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement local_28 [16];
  
  EVar1 = this->CurrentHarvestingRealm;
  pFVar11 = (FScriptContainerElement *)0x0;
  uVar10 = 0;
  uVar5 = uVar10;
  if ((int)EVar1 < (this->HarvestedRealms).ArrayNum) {
    uVar5 = ~EVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(uint *)((longlong)&param_1->field0_0x0 + 0xc);
  uVar9 = 0;
  pFVar2 = (this->HarvestedRealms).AllocatorInstance.Data;
  pFVar8 = pFVar11;
  uVar7 = 0xffffffff;
  if (uVar5 != 0xffffffff) {
    pFVar8 = (param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    (param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    *(int *)((longlong)&param_1->field0_0x0 + 8) = 0;
    *(int *)((longlong)&param_1->field0_0x0 + 0xc) = 0;
    uVar7 = uVar5;
  }
  pFVar6 = pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x30;
  if (local_28 != pFVar6) {
    if (uVar7 == 0xffffffff) {
      if (*(int *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x3c) != -1) {
        if (*(void **)pFVar6 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar6);
        }
        *(undefined8 *)pFVar6 = 0;
        *(undefined4 *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x38) = 0;
        *(undefined4 *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x3c) = 0xffffffff;
      }
    }
    else {
      if (*(void **)pFVar6 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar6);
      }
      *(FScriptContainerElement **)pFVar6 = pFVar8;
      *(uint *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x3c) = uVar7;
      *(undefined4 *)(pFVar2 + (longlong)(int)EVar1 * 0x5f0 + 0x38) = uVar9;
      bVar4 = uVar7 == 0xffffffff;
      pFVar8 = pFVar11;
      uVar7 = uVar10;
      if (bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  if ((uVar7 != 0xffffffff) && (pFVar8 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar8);
  }
  if ((*(int *)((longlong)&param_1->field0_0x0 + 0xc) != -1) &&
     (pFVar11 = (param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar11 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar11);
  }
  return;
}

// operator() @ 142202850

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FSaveContext::SetupHarvestingRealms'::__l2::<lambda_1>::operator()
          (void *this,TArray<TSoftClassPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  size_t _Size;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FSoftObjectPath local_78;
  undefined8 local_58;
  FName local_50;
  FName FStack_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"CookSettings",L"AutomaticOptionalInclusionAssetType",&local_a8,&GEditorIni);
  iVar3 = local_a8.ArrayNum;
  pFVar8 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 0x10;
  FVar7.Data = local_a8.AllocatorInstance.Data;
  while( true ) {
    if (local_a8.ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar7.Data == pFVar8) break;
    local_98 = *(wchar_t **)FVar7.Data;
    local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_78.AssetPath.PackageName.Number = 0;
    local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_78.AssetPath.AssetName.Number = 0;
    local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.SubPathString.Data.ArrayNum = 0;
    local_78.SubPathString.Data.ArrayMax = 0;
    iStack_90 = *(int *)(FVar7.Data + 8) + -1;
    if (*(int *)(FVar7.Data + 8) == 0) {
      iStack_90 = 0;
    }
    local_88._12_4_ = uStack_8c;
    local_88.Size = iStack_90;
    local_88.DataPtr = local_98;
    FSoftObjectPath::SetPath(&local_78,&local_88);
    _Src.Data = local_78.SubPathString.Data.AllocatorInstance.Data;
    _Size = (size_t)local_78.SubPathString.Data.ArrayNum;
    local_58 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = CONCAT44(local_38._4_4_,local_78.SubPathString.Data.ArrayNum);
    local_50 = local_78.AssetPath.PackageName;
    FStack_48 = local_78.AssetPath.AssetName;
    if (local_78.SubPathString.Data.ArrayNum == 0) {
      local_38 = local_78.SubPathString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_78.SubPathString.Data.ArrayNum,0,&local_40,
                 local_78.SubPathString.Data.ArrayNum,(int *)((longlong)&local_38 + 4));
      memcpy(local_40.Data,_Src.Data,_Size);
    }
    if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_50 == (FName)0x0) {
      if (2 < (byte)LogSavePackage._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
      }
    }
    else {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar1 + (longlong)param_1->ArrayMax * 0x28)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x28;
      *(undefined8 *)pFVar1 = local_58;
      *(FName *)(pFVar1 + 8) = local_50;
      *(FName *)(pFVar1 + 0x10) = FStack_48;
      *(undefined8 *)(pFVar1 + 0x18) = 0;
      *(FScriptContainerElement **)(pFVar1 + 0x18) = local_40.Data;
      local_40.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pFVar1 + 0x20) = (undefined4)local_38;
      *(undefined4 *)(pFVar1 + 0x24) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FVar7.Data = FVar7.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return true;
}

// AddExportedClassesToDependencies @ 1422035f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FSaveContext::AddExportedClassesToDependencies(FSaveContext *this)

{
  return;
}

// AddObjectToPostSaveSerialization @ 1422037c0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FSaveContext::AddObjectToPostSaveSerialization(FSaveContext *this,UObject *param_1)

{
  UObject *local_res8;
  UObject *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
            (&this->PostSaveObjectsToSerialize,&local_res8,(bool *)local_res10);
  return;
}

// ClearSaveableCache @ 142206b70

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FSaveContext::ClearSaveableCache(FSaveContext *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->ObjectStatusCache).field_0x10;
  iVar3 = *(int *)&(this->ObjectStatusCache).field_0x28;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = iVar13;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ObjectStatusCache).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142206c1d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142206c1d:
  uVar10 = *(uint *)&(this->ObjectStatusCache).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ObjectStatusCache).field_0x8 -
                       *(int *)&(this->ObjectStatusCache).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ObjectStatusCache).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ObjectStatusCache).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142206d20;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142206d20:
  while( true ) {
    if (*(int *)&(this->ObjectStatusCache).field_0x8 - *(int *)&(this->ObjectStatusCache).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)
             (*(longlong *)&this->ObjectStatusCache + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18
             );
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    *(byte *)(lVar8 + 0x40) = *(byte *)(lVar8 + 0x40) & 0xfd;
    *(undefined4 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetEditorOnlyObjectFlags @ 14220d330

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

EEditorOnlyObjectFlags __thiscall FSaveContext::GetEditorOnlyObjectFlags(FSaveContext *this)

{
  FArchiveCookData *pFVar1;
  EEditorOnlyObjectFlags EVar2;
  
  pFVar1 = (this->SaveArgs).ArchiveCookData;
  if (pFVar1 == (FArchiveCookData *)0x0) {
    return ApplyHasNonEditorOnlyReferences|CheckRecursive;
  }
  EVar2 = CheckRecursive;
  if (pFVar1->TargetPlatform == (ITargetPlatform *)0x0) {
    EVar2 = ApplyHasNonEditorOnlyReferences|CheckRecursive;
  }
  return EVar2;
}

// GetExcludedObjectMarks @ 14220d370

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

EObjectMark __thiscall FSaveContext::GetExcludedObjectMarks(FSaveContext *this,ESaveRealm param_1)

{
  code *pcVar1;
  bool bVar2;
  EObjectMark EVar3;
  
  if (param_1 == Game) {
    return this->GameRealmExcludedObjectMarks;
  }
  if (param_1 != Optional) {
    if (param_1 != Editor) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.h"
                         ,0x2f1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    return OBJECTMARK_NOMARKS;
  }
  return this->GameRealmExcludedObjectMarks & ~OBJECTMARK_INHERITEDMARKS;
}

// GetExcludedObjectMarksForGameRealm @ 14220d3d0

EObjectMark __cdecl FSaveContext::GetExcludedObjectMarksForGameRealm(ITargetPlatform *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  EObjectMark EVar4;
  
  if (param_1 == (ITargetPlatform *)0x0) {
    return OBJECTMARK_NotForTargetPlatform|OBJECTMARK_EditorOnly;
  }
  puVar1 = &param_1->field_0x8;
  cVar2 = (**(code **)(*(longlong *)&param_1->field_0x8 + 0x88))(puVar1);
  EVar4 = OBJECTMARK_NotForTargetPlatform|OBJECTMARK_EditorOnly;
  if (cVar2 != '\0') {
    EVar4 = OBJECTMARK_NotForTargetPlatform;
  }
  cVar2 = (**(code **)(*(longlong *)puVar1 + 0xb0))(puVar1);
  cVar3 = (**(code **)(*(longlong *)puVar1 + 0x98))(puVar1);
  if (cVar2 != '\0') {
    return EVar4 | OBJECTMARK_NotForServer;
  }
  if (cVar3 != '\0') {
    EVar4 = EVar4 | OBJECTMARK_NotForClient;
  }
  return EVar4;
}

// GetFinalResult @ 14220d4f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

FSavePackageResultStruct * __thiscall
FSaveContext::GetFinalResult(FSaveContext *this,FSavePackageResultStruct *__return_storage_ptr__)

{
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  ESaveRealm EVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  UClass *pUVar10;
  bool bVar11;
  FSavePackageResultStruct *pFVar12;
  FName FVar13;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res8 [8];
  undefined8 local_188;
  FObjectPtr_u_0 local_180;
  undefined8 local_178 [2];
  FSavePackageResultStruct local_168;
  FScriptContainerElement *local_f8;
  UClass *local_f0;
  FScriptContainerElement *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_80;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70 [2];
  undefined4 local_44;
  
  if (this->Result != Success) {
    FSavePackageResultStruct::FSavePackageResultStruct(__return_storage_ptr__,this->Result);
    return __return_storage_ptr__;
  }
  FSavePackageResultStruct::FSavePackageResultStruct
            (&local_168,-(uint)(this->bGenerateFileStub != false) & GenerateStub,
             this->TotalPackageSizeUncompressed,this->SerializedPackageFlags);
  pTVar1 = &this->SavedAssets;
  if (&local_168.SavedAssets != pTVar1) {
    DestructItems<FAssetData,int>
              ((FAssetData *)local_168.SavedAssets.AllocatorInstance.Data,
               local_168.SavedAssets.ArrayNum);
    if ((FAssetData *)local_168.SavedAssets.AllocatorInstance.Data != (FAssetData *)0x0) {
      FMemory::Free(local_168.SavedAssets.AllocatorInstance.Data);
    }
    local_168.SavedAssets.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_168.SavedAssets.ArrayNum = (this->SavedAssets).ArrayNum;
    local_168.SavedAssets.ArrayMax = (this->SavedAssets).ArrayMax;
    (this->SavedAssets).ArrayNum = 0;
    (this->SavedAssets).ArrayMax = 0;
  }
  local_f0 = Z_Construct_UClass_UPackage_NoRegister();
  EVar4 = this->CurrentHarvestingRealm;
  uStack_e0 = 0;
  uVar18 = uStack_e0;
  if ((int)EVar4 < (this->HarvestedRealms).ArrayNum) {
    uVar18 = ~EVar4 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSavePackageResultStruct *)(*pcVar8)();
    return pFVar12;
  }
  local_c8 = 0;
  pFVar7 = (this->HarvestedRealms).AllocatorInstance.Data;
  uStack_dc = 1;
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x140);
  iVar5 = *(int *)(pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x158);
  local_f8 = pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x130;
  iStack_cc = 0;
  if (iVar5 != 0) {
    pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)
               (pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x150);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x150) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = pTVar2;
    }
    uVar18 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    uStack_e0 = 0;
    while (uVar18 == 0) {
      lVar15 = (longlong)(int)uStack_e0;
      local_c8 = local_c8 + 0x20;
      uStack_e0 = uStack_e0 + 1;
      iStack_cc = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_e0)
      goto LAB_14220d6b0;
      uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uStack_dc = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_dc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_cc = (int)lVar15 + -1 + local_c8;
    if (iVar5 < iStack_cc) {
      iStack_cc = iVar5;
    }
  }
LAB_14220d6b0:
  uStack_c4 = local_44;
  iStack_c0 = *(int *)(pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x138) -
              *(int *)(pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x164);
  uVar18 = *(uint *)(pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x158);
  uStack_d0 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_dc,uStack_e0);
  uVar17 = uVar18 & 0xffffffe0;
  TStack_b0.CurrentBitIndex = iStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_b0._28_4_ = local_44;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = local_f8;
  local_d8 = pTVar2;
  local_b8 = local_f8;
  TStack_b0.Array = pTVar2;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSavePackageResultStruct *)(*pcVar8)();
    return pFVar12;
  }
  pUVar10 = local_f0;
  pFVar9 = local_f8;
  uVar6 = *(uint *)(pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x158);
  if (uVar18 != uVar6) {
    pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)
               (pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x150);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + (longlong)(int)EVar4 * 0x5f0 + 0x150) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = pTVar2;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) &
             *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14220d7c0;
      uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar18 = (int)lVar15 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14220d7c0:
  while( true ) {
    pFVar7 = local_b8;
    if (*(int *)(local_b8 + 8) - *(int *)(local_b8 + 0x34) != (int)uStack_90) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar18) && (TStack_b0.Array == pTVar2)) && (pFVar7 == pFVar9)
       ) break;
    local_180 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                (*(longlong *)pFVar7 + (longlong)TStack_b0.CurrentBitIndex * 0x10))->Handle;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_180.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(local_180.Handle);
    }
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_180,pUVar10);
    if (bVar11) {
      if (local_180.Handle == (UObject *)0x0) {
        local_178[0] = 0;
        FVar13 = (FName)local_178;
      }
      else {
        FVar13 = UE::CoreUObject::Private::GetFName((UObject *)local_88);
      }
      local_188 = *(undefined8 *)FVar13;
      if (((local_168.ImportPackages.AllocatorInstance.Data <= (FScriptContainerElement *)&local_188
           ) && ((FScriptContainerElement *)&local_188 <
                 local_168.ImportPackages.AllocatorInstance.Data +
                 (longlong)local_168.ImportPackages.ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FSavePackageResultStruct *)(*pcVar8)();
        return pFVar12;
      }
      if (local_168.ImportPackages.ArrayNum == local_168.ImportPackages.ArrayMax) {
        local_168.ImportPackages.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_168.ImportPackages.AllocatorInstance,
                        &local_168.ImportPackages.ArrayMax);
      }
      *(undefined8 *)
       (local_168.ImportPackages.AllocatorInstance.Data +
       (longlong)local_168.ImportPackages.ArrayNum * 8) = local_188;
      local_168.ImportPackages.ArrayNum = local_168.ImportPackages.ArrayNum + 1;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  EVar4 = this->CurrentHarvestingRealm;
  uVar18 = 0;
  if ((int)EVar4 < (this->HarvestedRealms).ArrayNum) {
    uVar18 = ~EVar4 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSavePackageResultStruct *)(*pcVar8)();
    return pFVar12;
  }
  pTVar14 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                       ((this->HarvestedRealms).AllocatorInstance.Data +
                       (longlong)(int)EVar4 * 0x5f0 + 0x370),&local_80);
  if (&local_168.SoftPackageReferences != pTVar14) {
    if (local_168.SoftPackageReferences.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.SoftPackageReferences.AllocatorInstance.Data);
    }
    local_168.SoftPackageReferences.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_168.SoftPackageReferences.ArrayNum = pTVar14->ArrayNum;
    local_168.SoftPackageReferences.ArrayMax = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  EVar4 = this->CurrentHarvestingRealm;
  uVar18 = 0;
  if ((int)EVar4 < (this->HarvestedRealms).ArrayNum) {
    uVar18 = ~EVar4 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSavePackageResultStruct *)(*pcVar8)();
    return pFVar12;
  }
  pTVar14 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                       ((this->HarvestedRealms).AllocatorInstance.Data +
                       (longlong)(int)EVar4 * 0x5f0 + 0x3c0),local_70);
  if (&local_168.UntrackedSoftPackageReferences != pTVar14) {
    if (local_168.UntrackedSoftPackageReferences.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.UntrackedSoftPackageReferences.AllocatorInstance.Data);
    }
    local_168.UntrackedSoftPackageReferences.AllocatorInstance.Data =
         (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_168.UntrackedSoftPackageReferences.ArrayNum = pTVar14->ArrayNum;
    local_168.UntrackedSoftPackageReferences.ArrayMax = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  FSavePackageResultStruct::FSavePackageResultStruct(__return_storage_ptr__,&local_168);
  FSavePackageResultStruct::~FSavePackageResultStruct(&local_168);
  return __return_storage_ptr__;
}

// GetHarvestedRealmsToSave @ 14220db80

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TArray<ESaveRealm,TSizedDefaultAllocator<32>_> * __thiscall
FSaveContext::GetHarvestedRealmsToSave
          (FSaveContext *this,TArray<ESaveRealm,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<ESaveRealm,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined4 local_18 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 4) = 2;
  }
  else {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 4) = 0;
    if (((this->SaveArgs).SaveFlags & 0x8000) != 0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_18[0] = 1;
      if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<ESaveRealm,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 4) =
           local_18[0];
    }
  }
  return __return_storage_ptr__;
}

// GetPostSaveObjectsToSerialize @ 14220de50

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> * __thiscall
FSaveContext::GetPostSaveObjectsToSerialize(FSaveContext *this)

{
  return &this->PostSaveObjectsToSerialize;
}

// GetSaveableStatusNoOuter @ 14220ee30

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESaveableStatus __thiscall
FSaveContext::GetSaveableStatusNoOuter
          (FSaveContext *this,TObjectPtr<UObject> param_1,FObjectStatus *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ESaveableStatus EVar4;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  UObject *local_res10 [3];
  
  local_res10[0] = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  pUVar5 = ResolveForSave(this,(TObjectPtr<UObject>)local_res10,param_2);
  if (pUVar5 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  if ((*(uint *)&pUVar5->field_0x8 >> 0x1e & 1) != 0) {
    return PendingKill;
  }
  pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar5->field_0xc);
  if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
    if ((*(uint *)&pUVar5->field_0x8 & 0x40) != 0) {
      return TransientFlag;
    }
    if (param_2->bSaveOverrideForcedTransient) {
      return TransientOverride;
    }
  }
  if (((*(uint *)(*(longlong *)&pUVar5->field_0x10 + 0xd4) & 0x82000001) != 0) &&
     ((*(uint *)&pUVar5->field_0x8 & 0x10) == 0)) {
    uVar1 = *(uint *)(*(longlong *)&pUVar5->field_0x10 + 0xd4);
    if ((uVar1 & 1) != 0) {
      return AbstractClass;
    }
    return NewerVersionExistsClass - ((uVar1 & 0x2000000) != 0);
  }
  return Success;
}

// IsTransient @ 1422126a0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall FSaveContext::IsTransient(FSaveContext *this,TObjectPtr<UObject> param_1)

{
  undefined1 *puVar1;
  FObjectStatus *pFVar2;
  UObject *pUVar3;
  UObject *local_res10;
  UObject *local_res18;
  
  local_res10 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pFVar2 = GetCachedObjectStatus(this,(TObjectPtr<UObject>)&local_res10);
  local_res18 = *(UObject **)param_1.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res18 == (UObject *)0x0) {
      return false;
    }
  }
  else {
    if (local_res18 == (UObject *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable(local_res18);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_res18);
  }
  pUVar3 = ResolveForSave(this,(TObjectPtr<UObject>)&local_res18,pFVar2);
  if ((((*(uint *)&pUVar3->field_0x8 & 0x40) == 0) && (!pFVar2->bSaveOverrideForcedTransient)) &&
     ((pFVar2->bSaveableStatusValid != true || pFVar2->bAttemptedExport != true ||
      (pFVar2->SaveableStatus == Success)))) {
    return false;
  }
  return true;
}

// IsTransient @ 142212770

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall
FSaveContext::IsTransient(FSaveContext *this,TObjectPtr<UObject> param_1,FObjectStatus *param_2)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  UObject *local_res10 [3];
  
  local_res10[0] = *(UObject **)param_1.field0_0x0;
  if (local_res10[0] != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    pUVar2 = ResolveForSave(this,(TObjectPtr<UObject>)local_res10,param_2);
    if (((*(uint *)&pUVar2->field_0x8 & 0x40) != 0) || (param_2->bSaveOverrideForcedTransient)) {
      return true;
    }
    if (param_2->bSaveableStatusValid == true && param_2->bAttemptedExport == true) {
      return param_2->SaveableStatus != Success;
    }
  }
  return false;
}

// IsUnsaveable @ 142212800

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSaveContext::IsUnsaveable
          (FSaveContext *this,TObjectPtr<UObject> param_1,FObjectStatus *param_2,bool param_3)

{
  UPackage *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPackage *pUVar5;
  UObject *local_res10;
  FString local_38;
  FString local_28;
  
  local_res10 = *(UObject **)param_1.field0_0x0;
  if (local_res10 == (UObject *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(local_res10);
  }
  UpdateSaveableStatus(this,(TObjectPtr<UObject>)&local_res10,param_2);
  if ((!param_2->bSaveableStatusValid) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectStatus.bSaveableStatusValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.cpp"
                         ,0x28,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((((!param_3) || (param_2->SaveableStatus == Success)) ||
      (param_2->SaveableStatus != OuterUnsaveable)) ||
     ((param_2->SaveableStatusCulpritStatus != AbstractClass &&
      (1 < param_2->SaveableStatusCulpritStatus - DeprecatedClass)))) goto LAB_1422129e0;
  pUVar1 = this->Package;
  if (*(UObject **)param_1.field0_0x0 == (UObject *)0x0) {
    pUVar5 = (UPackage *)0x0;
  }
  else {
    pUVar5 = UE::CoreUObject::Private::GetPackage(*(UObject **)param_1.field0_0x0);
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_142212979:
    if (pUVar5 != (UPackage *)0x0) goto LAB_14221290b;
LAB_14221297e:
    bVar3 = pUVar1 == (UPackage *)0x0;
  }
  else {
    if (pUVar5 != (UPackage *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142212979;
    if (pUVar5 == (UPackage *)0x0) goto LAB_14221297e;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14221290b:
    bVar3 = pUVar5 == pUVar1;
  }
  if (bVar3) {
    if ((param_2->SaveableStatusCulprit == (UObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectStatus.SaveableStatusCulprit",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.cpp"
                           ,0x39,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (2 < (byte)LogSavePackage._0_1_) {
      ::LexToString(param_2->SaveableStatusCulpritStatus);
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)param_2->SaveableStatusCulprit,&local_28,(UObject *)0x0,None)
      ;
      UE::CoreUObject::Private::GetFullName
                (&local_38,*(UObject **)param_1.field0_0x0,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1422129e0:
  return param_2->SaveableStatus != Success;
}

// RecordIllegalReference @ 142218a00

/* WARNING: Removing unreachable block (ram,0x000142218b23) */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FSaveContext::RecordIllegalReference
          (FSaveContext *this,UObject *param_1,UObject *param_2,EIllegalRefReason param_3,
          FString *param_4)

{
  int *piVar1;
  TArray<FIllegalReference,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *local_38;
  UObject *local_30;
  FScriptContainerElement local_28;
  FScriptContainerElement *local_20;
  undefined8 local_18;
  
  pTVar2 = &this->HarvestedIllegalReferences;
  local_20 = (param_4->Data).AllocatorInstance.Data;
  (param_4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18._0_4_ = (param_4->Data).ArrayNum;
  local_18._4_4_ = (param_4->Data).ArrayMax;
  (param_4->Data).ArrayNum = 0;
  (param_4->Data).ArrayMax = 0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = (FScriptContainerElement)param_3;
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar3 + (longlong)(this->HarvestedIllegalReferences).ArrayMax * 0x28)) &&
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
  iVar6 = (this->HarvestedIllegalReferences).ArrayNum;
  piVar1 = &(this->HarvestedIllegalReferences).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->HarvestedIllegalReferences).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28;
  *(UObject **)pFVar3 = local_38;
  *(UObject **)(pFVar3 + 8) = local_30;
  pFVar3[0x10] = local_28;
  *(undefined8 *)(pFVar3 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar3 + 0x18) = local_20;
  *(undefined4 *)(pFVar3 + 0x20) = (undefined4)local_18;
  *(undefined4 *)(pFVar3 + 0x24) = local_18._4_4_;
  return;
}

// ResolveForSave @ 14221bb00

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

UObject * __thiscall
FSaveContext::ResolveForSave(FSaveContext *this,TObjectPtr<UObject> param_1,FObjectStatus *param_2)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  UObject *local_res8;
  
  if ((this->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
    pUVar1 = this->Package;
    local_res8 = *(UObject **)param_1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    bVar3 = UE::SavePackageUtilities::FObjectStatus::IsInSavePackage
                      (param_2,(TObjectPtr<UObject>)&local_res8,pUVar1);
    if (!bVar3) {
      pUVar2 = *(UObject **)param_1.field0_0x0;
      if (param_2->bDeclaredSaveBuildDependency) {
        return pUVar2;
      }
      if (pUVar2 == (UObject *)0x0) {
        return (UObject *)0x0;
      }
      param_2->field_0x40 = param_2->field_0x40 | 0x80;
      return pUVar2;
    }
  }
  return *(UObject **)param_1.field0_0x0;
}

// SetupHarvestingRealms @ 14222bdb0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FSaveContext::SetupHarvestingRealms(FSaveContext *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ESaveRealm EVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar8;
  UObject *pUVar9;
  undefined1 local_res8 [8];
  
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x5f0,8,3,&(this->HarvestedRealms).AllocatorInstance,
                     &(this->HarvestedRealms).ArrayNum,&(this->HarvestedRealms).ArrayMax);
  DefaultConstructItems<FHarvestedRealm,int>
            ((this->HarvestedRealms).AllocatorInstance.Data + (longlong)iVar4 * 0x5f0,3);
  uVar7 = (ulonglong)_tls_index;
  EVar5 = Editor;
  if ((this->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
    EVar5 = Game;
  }
  this->CurrentHarvestingRealm = EVar5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    bAssetListGenerated =
         `FSaveContext::SetupHarvestingRealms'::__l2::<lambda_1>::operator()
                   (local_res8,&AutomaticOptionalInclusionAssetTypeList);
    _Init_thread_footer(&::_TSS0);
  }
  if ((bAssetListGenerated != false) && (pUVar9 = this->Asset, pUVar9 != (UObject *)0x0)) {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = AutomaticOptionalInclusionAssetTypeList.ArrayNum;
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) {
      pUVar9 = *(UObject **)&this->Asset->field_0x10;
    }
    uVar7 = (ulonglong)AutomaticOptionalInclusionAssetTypeList.ArrayNum;
    pFVar1 = AutomaticOptionalInclusionAssetTypeList.AllocatorInstance.Data + uVar7 * 0x28;
    this_00 = AutomaticOptionalInclusionAssetTypeList.AllocatorInstance;
    while( true ) {
      if ((int)uVar7 != iVar2) {
        `TCheckedPointerIterator<TSoftClassPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      pFVar8 = (FScriptContainerElement *)0x0;
      if (this_00.Data == pFVar1) break;
      pUVar6 = TSoftClassPtr<UObject>::Get((TSoftClassPtr<UObject> *)this_00.Data);
      if (pUVar6 != (UClass *)0x0) {
        iVar4 = (int)pUVar6->_padding_;
        if ((iVar4 <= *(int *)&pUVar9[1].field_0x10) &&
           (pFVar8 = this_00.Data,
           (longlong *)*(undefined1 **)(*(longlong *)&pUVar9[1].field_0x8 + (longlong)iVar4 * 8) ==
           &pUVar6->_padding_)) break;
      }
      uVar7 = (ulonglong)(uint)AutomaticOptionalInclusionAssetTypeList.ArrayNum;
      this_00.Data = this_00.Data + 0x28;
    }
    if (((this->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) ||
       ((((this->SaveArgs).SaveFlags >> 0xf & 1) == 0 || (pFVar8 == (FScriptContainerElement *)0x0))
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this->bIsSaveAutoOptional = bVar3;
  }
  return;
}

// UpdateEditorRealmPackageBuildDependencies @ 1422341f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall FSaveContext::UpdateEditorRealmPackageBuildDependencies(FSaveContext *this)

{
  int *piVar1;
  
  piVar1 = &(this->PackageBuildDependencies).ArrayMax;
  (this->PackageBuildDependencies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PackageBuildDependencies).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateSaveableStatus @ 142234230

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
FSaveContext::UpdateSaveableStatus
          (FSaveContext *this,TObjectPtr<UObject> param_1,FObjectStatus *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  FObjectStatus *pFVar6;
  UObject *local_res18;
  UObject *local_res20;
  UObject *local_28 [2];
  
  if (!param_2->bSaveableStatusValid) {
    param_2->SaveableStatus = Success;
    param_2->field_0x40 = param_2->field_0x40 | 2;
    pUVar4 = *(UObject **)param_1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_res18 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = ResolveForSave(this,(TObjectPtr<UObject>)&local_res18,param_2);
    if ((pUVar4 == (UObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) != 0) {
      param_2->SaveableStatus = PendingKill;
      return;
    }
    pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
    if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
      if ((*(uint *)&pUVar4->field_0x8 & 0x40) != 0) {
        param_2->SaveableStatus = TransientFlag;
        return;
      }
      if (param_2->bSaveOverrideForcedTransient) {
        param_2->SaveableStatus = TransientOverride;
        return;
      }
    }
    if (((*(uint *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 0x82000001) != 0) &&
       ((*(uint *)&pUVar4->field_0x8 & 0x10) == 0)) {
      uVar1 = *(uint *)(*(longlong *)&pUVar4->field_0x10 + 0xd4);
      if ((uVar1 & 1) != 0) {
        param_2->SaveableStatus = AbstractClass;
        return;
      }
      param_2->SaveableStatus = NewerVersionExistsClass - ((uVar1 & 0x2000000) != 0);
      return;
    }
    if (*(UObject **)param_1.field0_0x0 != (UObject *)0x0) {
      pUVar4 = UE::CoreUObject::Private::GetOuter(*(UObject **)param_1.field0_0x0);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 == (UObject *)0x0) {
          return;
        }
      }
      else {
        if (pUVar4 == (UObject *)0x0) {
          return;
        }
        UE::GC::MarkAsReachable(pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar4), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      local_res20 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pFVar6 = GetCachedObjectStatus(this,(TObjectPtr<UObject>)&local_res20);
      local_28[0] = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      UpdateSaveableStatus(this,(TObjectPtr<UObject>)local_28,pFVar6);
      param_2->bSaveableStatusValid = true;
      param_2->SaveableStatus = Success;
      if (pFVar6->SaveableStatus != Success) {
        param_2->SaveableStatus = OuterUnsaveable;
        if (pFVar6->SaveableStatus == OuterUnsaveable) {
          if ((pFVar6->SaveableStatusCulprit == (UObject *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("OuterStatus.SaveableStatusCulprit",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.cpp"
                                 ,99,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((pFVar6->SaveableStatusCulpritStatus == Success) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("OuterStatus.SaveableStatusCulpritStatus != ESaveableStatus::Success"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.cpp"
                                 ,100,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          param_2->SaveableStatusCulprit = pFVar6->SaveableStatusCulprit;
          param_2->SaveableStatusCulpritStatus = pFVar6->SaveableStatusCulpritStatus;
          return;
        }
        param_2->SaveableStatusCulprit = pUVar4;
        param_2->SaveableStatusCulpritStatus = pFVar6->SaveableStatus;
      }
    }
  }
  return;
}

