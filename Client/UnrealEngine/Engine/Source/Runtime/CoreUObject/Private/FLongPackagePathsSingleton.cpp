// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 13

// FLongPackagePathsSingleton @ 141e84740

/* WARNING: Enum "EMountFlags": Some values do not have unique names */

FLongPackagePathsSingleton * __thiscall
FLongPackagePathsSingleton::FLongPackagePathsSingleton(FLongPackagePathsSingleton *this)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FText *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  uint uVar14;
  wchar_t *pwVar15;
  bool bVar16;
  FLongPackagePathsSingleton *local_res8;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  FText local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_70;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  FScopedBootTiming local_40;
  
  pFVar1 = &this->GameScriptPathRebased;
  pFVar2 = &this->GameSavedPathRebased;
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  (this->MountLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->ConfigRootPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigRootPath).Data.ArrayNum = 0;
  (this->ConfigRootPath).Data.ArrayMax = 0;
  (this->EngineRootPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineRootPath).Data.ArrayNum = 0;
  (this->EngineRootPath).Data.ArrayMax = 0;
  (this->GameRootPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameRootPath).Data.ArrayNum = 0;
  (this->GameRootPath).Data.ArrayMax = 0;
  (this->ScriptRootPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptRootPath).Data.ArrayNum = 0;
  (this->ScriptRootPath).Data.ArrayMax = 0;
  (this->MemoryRootPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MemoryRootPath).Data.ArrayNum = 0;
  (this->MemoryRootPath).Data.ArrayMax = 0;
  (this->TempRootPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempRootPath).Data.ArrayNum = 0;
  (this->TempRootPath).Data.ArrayMax = 0;
  (this->VerseSubPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VerseSubPath).Data.ArrayNum = 0;
  (this->VerseSubPath).Data.ArrayMax = 0;
  (this->EngineContentPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineContentPath).Data.ArrayNum = 0;
  (this->EngineContentPath).Data.ArrayMax = 0;
  (this->ContentPathShort).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentPathShort).Data.ArrayNum = 0;
  (this->ContentPathShort).Data.ArrayMax = 0;
  (this->EngineShadersPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineShadersPath).Data.ArrayNum = 0;
  (this->EngineShadersPath).Data.ArrayMax = 0;
  (this->EngineShadersPathShort).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineShadersPathShort).Data.ArrayNum = 0;
  (this->EngineShadersPathShort).Data.ArrayMax = 0;
  (this->GameContentPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameContentPath).Data.ArrayNum = 0;
  (this->GameContentPath).Data.ArrayMax = 0;
  (this->GameConfigPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameConfigPath).Data.ArrayNum = 0;
  (this->GameConfigPath).Data.ArrayMax = 0;
  (this->GameScriptPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameScriptPath).Data.ArrayNum = 0;
  (this->GameScriptPath).Data.ArrayMax = 0;
  (this->GameSavedPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameSavedPath).Data.ArrayNum = 0;
  (this->GameSavedPath).Data.ArrayMax = 0;
  (this->GameContentPathRebased).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameContentPathRebased).Data.ArrayNum = 0;
  (this->GameContentPathRebased).Data.ArrayMax = 0;
  (this->GameConfigPathRebased).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameConfigPathRebased).Data.ArrayNum = 0;
  (this->GameConfigPathRebased).Data.ArrayMax = 0;
  (this->RootPathTree).Root.RelPaths.Ptr = (FString *)0x0;
  (this->RootPathTree).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (this->RootPathTree).Root.NumChildNodesAndFlags = 0;
  (this->RootPathTree).Root.CapacityChildNodes = 0;
  (this->RootPathTree).NumPaths = 0;
  (this->RootPathTree).PathSeparator = L'/';
  (this->RootPathTree).bPathSeparatorInitialized = false;
  (this->RootPathTree).bNeedDriveWithoutPathFixup = false;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameScriptPathRebased).Data.ArrayNum = 0;
  (this->GameScriptPathRebased).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameSavedPathRebased).Data.ArrayNum = 0;
  (this->GameSavedPathRebased).Data.ArrayMax = 0;
  (this->ContentPathTree).Root.RelPaths.Ptr = (FString *)0x0;
  (this->ContentPathTree).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (this->ContentPathTree).Root.NumChildNodesAndFlags = 0;
  (this->ContentPathTree).Root.CapacityChildNodes = 0;
  (this->ContentPathTree).NumPaths = 0;
  (this->ContentPathTree).PathSeparator = L'/';
  (this->ContentPathTree).bPathSeparatorInitialized = false;
  (this->ContentPathTree).bNeedDriveWithoutPathFixup = false;
  (this->MountPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountPoints).ArrayNum = 0;
  (this->MountPoints).ArrayMax = 0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_90);
  local_78 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    puVar7[4] = ExecDumpMountPoints;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFLongPackagePathsSingleton____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = this;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_e0,L"PackageNames",L"CommandText_DumpMountPoints",
                      L"Print registered LongPackagePath mount points");
  pFVar10 = FText::ToString(pFVar9);
  pwVar13 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->DumpMountPointsCommand,L"PackageName.DumpMountPoints",pwVar15,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_f8,0);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_90);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_90);
  local_78 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFLongPackagePathsSingleton____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = ExecInsertMountPoint;
    puVar7[3] = this;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_e0,L"PackageNames",L"CommandText_RegisterMountPoint",
                      L"<RootPath> <ContentPath> // Register a LongPackagePath mount point");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->RegisterMountPointCommand,L"PackageName.RegisterMountPoint",pwVar15,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_f8,0);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_90);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_90);
  local_78 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFLongPackagePathsSingleton____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = ExecRemoveMountPoint;
    puVar7[3] = this;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_e0,L"PackageNames",L"CommandText_UnregisterMountPoint",
                      L"<RootPath> <ContentPath> // Remove a LongPackagePath mount point");
  pFVar10 = FText::ToString(pFVar9);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->UnregisterMountPointCommand,L"PackageName.UnregisterMountPoint",pwVar13,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_f8,0);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_90);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:___cdecl_FLongPackagePathsSingleton::FLongPackagePathsSingleton(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId454,"FPackageName::FLongPackagePathsSingleton",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
               ,0x1c6);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:___cdecl_FLongPackagePathsSingleton::FLongPackagePathsSingleton(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId454);
  }
  FScopedBootTiming::FScopedBootTiming(&local_40,"FPackageName::FLongPackagePathsSingleton");
  ::FString::operator=(&this->ConfigRootPath,L"/Config/");
  ::FString::operator=(&this->EngineRootPath,L"/Engine/");
  ::FString::operator=(&this->GameRootPath,L"/Game/");
  ::FString::operator=(&this->ScriptRootPath,L"/Script/");
  ::FString::operator=(&this->MemoryRootPath,L"/Memory/");
  ::FString::operator=(&this->TempRootPath,L"/Temp/");
  ::FString::operator=(&this->VerseSubPath,L"/_Verse");
  pFVar11 = FPaths::EngineContentDir((FString *)&local_e0);
  pFVar10 = &this->EngineContentPath;
  if (pFVar10 != pFVar11) {
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar10->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->EngineContentPath).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (this->EngineContentPath).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_e0.TextData.Reference);
  }
  ::FString::operator=(&this->ContentPathShort,L"../../Content/");
  pTVar12 = &FPaths::EngineDir((FString *)&local_e0)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_70,pTVar12,10 - (uint)(pTVar12->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_70,L"Shaders/",8);
  pFVar10 = &this->EngineShadersPath;
  if (&pFVar10->Data != &local_70) {
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar10->Data).AllocatorInstance.Data = local_70.AllocatorInstance.Data;
    (this->EngineShadersPath).Data.ArrayNum = local_70.ArrayNum;
    (this->EngineShadersPath).Data.ArrayMax = local_70.ArrayMax;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_e0.TextData.Reference);
  }
  ::FString::operator=(&this->EngineShadersPathShort,L"../../Shaders/");
  pFVar11 = FPaths::ProjectContentDir((FString *)&local_e0);
  pFVar10 = &this->GameContentPath;
  if (pFVar10 != pFVar11) {
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar10->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GameContentPath).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (this->GameContentPath).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_e0.TextData.Reference);
  }
  pFVar11 = FPaths::ProjectConfigDir((FString *)&local_e0);
  pFVar10 = &this->GameConfigPath;
  if (pFVar10 != pFVar11) {
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar10->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GameConfigPath).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (this->GameConfigPath).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_e0.TextData.Reference);
  }
  pTVar12 = &FPaths::ProjectDir((FString *)&local_e0)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_60,pTVar12,9 - (uint)(pTVar12->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_60,L"Script/",7);
  pFVar10 = &this->GameScriptPath;
  if (&pFVar10->Data != &local_60) {
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar10->Data).AllocatorInstance.Data = local_60.AllocatorInstance.Data;
    (this->GameScriptPath).Data.ArrayNum = local_60.ArrayNum;
    (this->GameScriptPath).Data.ArrayMax = local_60.ArrayMax;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_e0.TextData.Reference);
  }
  pFVar10 = FPaths::ProjectSavedDir();
  ::FString::operator=(&this->GameSavedPath,pFVar10);
  ::FString::PrintfImpl(&local_50,L"../../../%s/");
  iVar5 = local_50.Data.ArrayNum;
  FVar4.Data = local_50.Data.AllocatorInstance.Data;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = local_50.Data.ArrayNum;
  uVar14 = (10 - (uint)(local_50.Data.ArrayNum != 0)) + local_50.Data.ArrayNum;
  if ((int)uVar14 < local_50.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar14,0,(ForAnyElementType *)&local_d0,local_50.Data.ArrayNum,
             &local_d0.Data.ArrayMax);
  if (iVar5 != 0) {
    memcpy(local_d0.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar5 * 2);
  }
  ::FString::PathAppend(&local_d0,L"Content/",8);
  pFVar10 = &this->GameContentPathRebased;
  if (pFVar10 != &local_d0) {
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar10->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
    (this->GameContentPathRebased).Data.ArrayNum = local_d0.Data.ArrayNum;
    (this->GameContentPathRebased).Data.ArrayMax = local_d0.Data.ArrayMax;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  iVar5 = local_50.Data.ArrayNum;
  FVar4.Data = local_50.Data.AllocatorInstance.Data;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = local_50.Data.ArrayNum;
  uVar14 = (9 - (uint)(local_50.Data.ArrayNum != 0)) + local_50.Data.ArrayNum;
  if ((int)uVar14 < local_50.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar14,0,(ForAnyElementType *)&local_c0,local_50.Data.ArrayNum,
             &local_c0.Data.ArrayMax);
  if (iVar5 != 0) {
    memcpy(local_c0.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar5 * 2);
  }
  ::FString::PathAppend(&local_c0,L"Config/",7);
  pFVar10 = &this->GameConfigPathRebased;
  if (pFVar10 != &local_c0) {
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar10->Data).AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    (this->GameConfigPathRebased).Data.ArrayNum = local_c0.Data.ArrayNum;
    (this->GameConfigPathRebased).Data.ArrayMax = local_c0.Data.ArrayMax;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  iVar5 = local_50.Data.ArrayNum;
  FVar4.Data = local_50.Data.AllocatorInstance.Data;
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = local_50.Data.ArrayNum;
  uVar14 = (9 - (uint)(local_50.Data.ArrayNum != 0)) + local_50.Data.ArrayNum;
  if ((int)uVar14 < local_50.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar14,0,(ForAnyElementType *)&local_b0,local_50.Data.ArrayNum,
             &local_b0.Data.ArrayMax);
  if (iVar5 != 0) {
    memcpy(local_b0.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar5 * 2);
  }
  ::FString::PathAppend(&local_b0,L"Script/",7);
  if (pFVar1 != &local_b0) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
    (this->GameScriptPathRebased).Data.ArrayNum = local_b0.Data.ArrayNum;
    (this->GameScriptPathRebased).Data.ArrayMax = local_b0.Data.ArrayMax;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  FVar4.Data = local_50.Data.AllocatorInstance.Data;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = local_50.Data.ArrayNum;
  uVar14 = (8 - (uint)(local_50.Data.ArrayNum != 0)) + local_50.Data.ArrayNum;
  if ((int)uVar14 < local_50.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar14,0,(ForAnyElementType *)&local_a0,local_50.Data.ArrayNum,
             &local_a0.Data.ArrayMax);
  if (local_50.Data.ArrayNum != 0) {
    memcpy(local_a0.Data.AllocatorInstance.Data,FVar4.Data,(longlong)local_50.Data.ArrayNum * 2);
  }
  ::FString::PathAppend(&local_a0,L"Saved/",6);
  if (pFVar2 != &local_a0) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
    (this->GameSavedPathRebased).Data.ArrayNum = local_a0.Data.ArrayNum;
    (this->GameSavedPathRebased).Data.ArrayMax = local_a0.Data.ArrayMax;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  local_res8 = this;
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->EngineRootPath,&this->EngineContentPath,NotAlias);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->EngineRootPath,&this->EngineShadersPath,Alias);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->GameRootPath,&this->GameContentPath,NotAlias);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->ScriptRootPath,&this->GameScriptPath,ReadOnly);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->TempRootPath,&this->GameSavedPath,ReadOnly);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->ConfigRootPath,&this->GameConfigPath,ReadOnly);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->EngineRootPath,&this->EngineShadersPathShort,Alias);
  bVar6 = FPaths::IsSamePath(&this->GameContentPath,&this->ContentPathShort);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->EngineRootPath + bVar6,&this->ContentPathShort,Alias);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->GameRootPath,&this->GameContentPathRebased,Alias);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->ScriptRootPath,pFVar1,Alias|ReadOnly);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->TempRootPath,pFVar2,Alias|ReadOnly);
  `FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
            (&local_res8,&this->ConfigRootPath,&this->GameConfigPathRebased,Alias|ReadOnly);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_40);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

// ~FLongPackagePathsSingleton @ 141e87ab0

void __thiscall
FLongPackagePathsSingleton::~FLongPackagePathsSingleton(FLongPackagePathsSingleton *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->UnregisterMountPointCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->RegisterMountPointCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DumpMountPointsCommand);
  DestructItems<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>,int>
            ((TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_> *)
             (this->MountPoints).AllocatorInstance.Data,(this->MountPoints).ArrayNum);
  pFVar1 = (this->MountPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDirectoryTree<FMountPoint_*>::FTreeNode::~FTreeNode(&(this->ContentPathTree).Root);
  TDirectoryTree<FMountPoint_*>::FTreeNode::~FTreeNode(&(this->RootPathTree).Root);
  pFVar1 = (this->GameSavedPathRebased).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameScriptPathRebased).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameConfigPathRebased).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameContentPathRebased).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameSavedPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameScriptPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameConfigPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameContentPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineShadersPathShort).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineShadersPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContentPathShort).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineContentPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VerseSubPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TempRootPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MemoryRootPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScriptRootPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameRootPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineRootPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfigRootPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141e87c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// operator() @ 141e8ad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMountFlags": Some values do not have unique names */

void __thiscall
`FLongPackagePathsSingleton::FLongPackagePathsSingleton'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2,EMountFlags param_3)

{
  longlong lVar1;
  FMountPoint *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  FMountPoint **ppFVar8;
  int iVar9;
  ForAnyElementType *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_388 [32];
  ForAnyElementType local_338;
  undefined8 local_330;
  ForAnyElementType local_328;
  undefined8 local_320;
  int local_318;
  int local_314;
  FScriptContainerElement *local_310;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  TStringView<wchar_t> local_2c8;
  FString local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.Base = local_248;
  pFVar11 = (FScriptContainerElement *)0x0;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_308 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = (param_2->Data).ArrayNum;
  iStack_300 = iVar5 + -1;
  if (iVar5 == 0) {
    iStack_300 = 0;
  }
  local_2c8._12_4_ = uStack_2fc;
  local_2c8.Size = iStack_300;
  local_2c8.DataPtr = (wchar_t *)local_308;
  FPathViews::ToAbsolutePath(&local_2c8,&local_268);
  lVar1 = *(longlong *)this;
  pFVar10 = (ForAnyElementType *)(lVar1 + 0x188);
  local_318 = 0;
  local_314 = 0;
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_2b8,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  if (&local_278 != pFVar6) {
    pFVar11 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318 = (pFVar6->Data).ArrayNum;
    local_314 = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  local_328.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_2->Data).ArrayNum;
  pFVar7 = (param_2->Data).AllocatorInstance.Data;
  local_320 = CONCAT44(local_320._4_4_,iVar5);
  if (iVar5 == 0) {
    local_320 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_328,iVar5,(int *)((longlong)&local_320 + 4));
    memcpy(local_328.Data,pFVar7,(longlong)iVar5 * 2);
  }
  iVar5 = (param_1->Data).ArrayNum;
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = CONCAT44(local_330._4_4_,iVar5);
  if (iVar5 == 0) {
    local_330 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_338,iVar5,(int *)((longlong)&local_330 + 4));
    memcpy(local_338.Data,pFVar7,(longlong)iVar5 * 2);
  }
  pFVar7 = ::operator_new(0x38);
  local_310 = (FScriptContainerElement *)0x0;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    *(FScriptContainerElement **)pFVar7 = local_338.Data;
    local_338.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar7 + 8) = (undefined4)local_330;
    *(undefined4 *)(pFVar7 + 0xc) = local_330._4_4_;
    local_330 = 0;
    *(FScriptContainerElement **)(pFVar7 + 0x10) = local_328.Data;
    local_328.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar7 + 0x18) = (undefined4)local_320;
    *(undefined4 *)(pFVar7 + 0x1c) = local_320._4_4_;
    local_320 = 0;
    *(FScriptContainerElement **)(pFVar7 + 0x20) = pFVar11;
    *(int *)(pFVar7 + 0x28) = local_318;
    *(int *)(pFVar7 + 0x2c) = local_314;
    pFVar7[0x30] = (FScriptContainerElement)((byte)pFVar7[0x30] & 0xf8);
    pFVar7[0x30] = (FScriptContainerElement)((byte)pFVar7[0x30] | (byte)param_3 & 7);
    local_310 = pFVar7;
    pFVar11 = (FScriptContainerElement *)0x0;
  }
  if (((pFVar10->Data <= (FScriptContainerElement *)&local_310) &&
      ((FScriptContainerElement *)&local_310 < pFVar10->Data + (longlong)*(int *)(lVar1 + 0x194) * 8
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)(lVar1 + 400);
  if (iVar5 == *(int *)(lVar1 + 0x194)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar10,(int *)(lVar1 + 0x194));
  }
  *(int *)(lVar1 + 400) = iVar5 + 1;
  pFVar7 = pFVar10->Data;
  *(FScriptContainerElement **)(pFVar7 + (longlong)iVar5 * 8) = local_310;
  local_310 = (FScriptContainerElement *)0x0;
  pFVar2 = *(FMountPoint **)(pFVar7 + (longlong)iVar5 * 8);
  if (local_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data);
  }
  if (local_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data);
  }
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  local_2f8 = (pFVar2->RootPath).Data.AllocatorInstance.Data;
  iVar5 = (pFVar2->RootPath).Data.ArrayNum;
  iVar9 = 0;
  iStack_2f0 = iVar5 + -1;
  if (iVar5 == 0) {
    iStack_2f0 = iVar9;
  }
  local_2a8._12_4_ = uStack_2ec;
  local_2a8.Size = iStack_2f0;
  local_2a8.DataPtr = (wchar_t *)local_2f8;
  ppFVar8 = TDirectoryTree<FMountPoint_*>::FindOrAdd
                      ((TDirectoryTree<FMountPoint_*> *)(*(longlong *)this + 0x138),&local_2a8,
                       (bool *)0x0);
  if (*ppFVar8 == (FMountPoint *)0x0) {
    *ppFVar8 = pFVar2;
  }
  local_2e8 = (pFVar2->ContentPathRelative).Data.AllocatorInstance.Data;
  iVar5 = (pFVar2->ContentPathRelative).Data.ArrayNum;
  iStack_2e0 = iVar5 + -1;
  if (iVar5 == 0) {
    iStack_2e0 = iVar9;
  }
  local_298._12_4_ = uStack_2dc;
  local_298.Size = iStack_2e0;
  local_298.DataPtr = (wchar_t *)local_2e8;
  ppFVar8 = TDirectoryTree<FMountPoint_*>::FindOrAdd
                      ((TDirectoryTree<FMountPoint_*> *)(*(longlong *)this + 0x160),&local_298,
                       (bool *)0x0);
  if (*ppFVar8 == (FMountPoint *)0x0) {
    *ppFVar8 = pFVar2;
  }
  local_2d8 = (pFVar2->ContentPathAbsolute).Data.AllocatorInstance.Data;
  iVar5 = (pFVar2->ContentPathAbsolute).Data.ArrayNum;
  iStack_2d0 = iVar5 + -1;
  if (iVar5 == 0) {
    iStack_2d0 = iVar9;
  }
  local_288._12_4_ = uStack_2cc;
  local_288.Size = iStack_2d0;
  local_288.DataPtr = (wchar_t *)local_2d8;
  ppFVar8 = TDirectoryTree<FMountPoint_*>::FindOrAdd
                      ((TDirectoryTree<FMountPoint_*> *)(*(longlong *)this + 0x160),&local_288,
                       (bool *)0x0);
  if (*ppFVar8 == (FMountPoint *)0x0) {
    *ppFVar8 = pFVar2;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return;
}

// ConstructMountPoint @ 141e93060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMountFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMountPoint * __cdecl
FLongPackagePathsSingleton::ConstructMountPoint
          (FMountPoint *__return_storage_ptr__,FString *param_1,FString *param_2,EMountFlags param_3
          )

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  FString *pFVar4;
  IFileManager *pIVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_2f8 [32];
  FString local_2b8;
  TStringView<wchar_t> local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2b8.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar7 = (longlong)local_2b8.Data.ArrayNum;
  pFVar8 = (param_2->Data).AllocatorInstance.Data;
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2b8.Data.ArrayNum == 0) {
    local_2b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2b8.Data.ArrayNum,0,(ForAnyElementType *)&local_2b8,local_2b8.Data.ArrayNum
               ,&local_2b8.Data.ArrayMax);
    memcpy(local_2b8.Data.AllocatorInstance.Data,pFVar8,lVar7 * 2);
  }
  bVar3 = FPaths::IsRelative(&local_2b8);
  if (bVar3) {
    pFVar4 = FPaths::ConvertRelativePathToFull((FString *)&local_2a8,param_2);
    if (&local_2b8 != pFVar4) {
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      local_2b8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_2b8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_2a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_2a8.DataPtr);
    }
    iVar6 = local_2b8.Data.ArrayNum + -1;
    if (local_2b8.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (iVar6 < 2) {
      if (&local_2b8 != param_2) {
        iVar6 = (param_2->Data).ArrayNum;
        pFVar8 = (param_2->Data).AllocatorInstance.Data;
        local_2b8.Data.ArrayNum = iVar6;
        if ((iVar6 == 0) && (local_2b8.Data.ArrayMax == 0)) {
          local_2b8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,local_2b8.Data.ArrayMax,(ForAnyElementType *)&local_2b8,iVar6,
                     &local_2b8.Data.ArrayMax);
          if (iVar6 != 0) {
            memcpy(local_2b8.Data.AllocatorInstance.Data,pFVar8,(longlong)iVar6 * 2);
          }
        }
      }
      if (2 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_static_struct_FMountPoint___cdecl_FLongPackagePathsSingleton::ConstructMountPoint(FString_const&___ptr64,FString_const&___ptr64,FMountPoint::EMountFlags)'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogPackageName);
      }
    }
  }
  pFVar8 = (FScriptContainerElement *)0x0;
  pIVar5 = IFileManager::Get();
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_2b8.Data.ArrayNum != 0) {
    FVar9.Data = local_2b8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0xf8))(pIVar5,&local_298,FVar9.Data);
  bVar3 = ::FString::EndsWith(&local_298,L"/",1,CaseSensitive);
  if (!bVar3) {
    ::FString::AppendChars(&local_298,L"/",1);
  }
  local_268.Base = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  iVar6 = 0;
  local_2a8.Size = local_298.Data.ArrayNum + -1;
  if (local_298.Data.ArrayNum == 0) {
    local_2a8.Size = iVar6;
  }
  local_2a8.DataPtr = (wchar_t *)local_298.Data.AllocatorInstance.Data;
  FPathViews::ToAbsolutePath(&local_2a8,&local_268);
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_288,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  pFVar10 = pFVar8;
  if (&local_278 != pFVar4) {
    pFVar8 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar4->Data).ArrayNum;
    pFVar10 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  iVar2 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_2a8.DataPtr = (wchar_t *)0x0;
  local_2a8.Size = iVar2;
  if (iVar2 == 0) {
    local_2a8._12_4_ = 0;
    local_2a8.DataPtr = (wchar_t *)(FScriptContainerElement *)0x0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)&local_2a8,iVar2,(int *)&local_2a8.field_0xc);
    memcpy(local_2a8.DataPtr,_Src,(longlong)iVar2 * 2);
  }
  (__return_storage_ptr__->RootPath).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)local_2a8.DataPtr;
  (__return_storage_ptr__->RootPath).Data.ArrayMax = local_2a8._12_4_;
  (__return_storage_ptr__->RootPath).Data.ArrayNum = local_2a8.Size;
  (__return_storage_ptr__->ContentPathRelative).Data.AllocatorInstance.Data =
       local_298.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->ContentPathRelative).Data.ArrayNum = local_298.Data.ArrayNum;
  (__return_storage_ptr__->ContentPathRelative).Data.ArrayMax = local_298.Data.ArrayMax;
  (__return_storage_ptr__->ContentPathAbsolute).Data.AllocatorInstance.Data = pFVar8;
  (__return_storage_ptr__->ContentPathAbsolute).Data.ArrayNum = iVar6;
  (__return_storage_ptr__->ContentPathAbsolute).Data.ArrayMax = (int)pFVar10;
  __return_storage_ptr__->bRemovable = false;
  __return_storage_ptr__->bAlias = false;
  __return_storage_ptr__->bReadOnly = false;
  __return_storage_ptr__->field_0x30 = __return_storage_ptr__->field_0x30 | (byte)param_3 & 7;
  local_2a8.DataPtr = (wchar_t *)0x0;
  local_2a8.Size = 0;
  local_2a8._12_4_ = 0;
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecDumpMountPoints @ 141e98710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLongPackagePathsSingleton::ExecDumpMountPoints
          (FLongPackagePathsSingleton *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if (4 < (byte)LogPackageName._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecDumpMountPoints(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  if ((this == (FLongPackagePathsSingleton *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  pFVar5 = (this->MountPoints).AllocatorInstance.Data;
  iVar2 = (this->MountPoints).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MountPoints).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (4 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecDumpMountPoints(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l25::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (4 < (byte)LogPackageName._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecDumpMountPoints(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l43::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  pFVar5 = (this->MountPoints).AllocatorInstance.Data;
  iVar2 = (this->MountPoints).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MountPoints).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar5 == pFVar1) break;
    if (((*(byte *)(*(longlong *)pFVar5 + 0x30) & 1) != 0) && (4 < (byte)LogPackageName._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecDumpMountPoints(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l68::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (this != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return;
}

// ExecInsertMountPoint @ 141e98890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLongPackagePathsSingleton::ExecInsertMountPoint
          (FLongPackagePathsSingleton *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FLongPackagePathsSingleton *this_00;
  int iVar4;
  
  if (param_1->ArrayNum < 2) {
    if (((4 < (byte)LogPackageName._0_1_) &&
        (UE::Logging::Private::BasicLog<5>
                   (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecInsertMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                     ::__l6::LOG_Static,(FLogCategoryBase *)&LogPackageName),
        4 < (byte)LogPackageName._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>
                  (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecInsertMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l24::LOG_Static,(FLogCategoryBase *)&LogPackageName),
       4 < (byte)LogPackageName._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecInsertMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l42::LOG_Static,(FLogCategoryBase *)&LogPackageName);
      return;
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    iVar4 = *(int *)&pFVar1[0x18].field_0x0 + -1;
    if (*(int *)&pFVar1[0x18].field_0x0 == 0) {
      iVar4 = 0;
    }
    if ((iVar4 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(short *)(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1[0x10].field_0x0)->
                  AllocatorInstance).Data == 0x2f) {
      if (1 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecInsertMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l63::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        return;
      }
    }
    else {
      iVar4 = *(int *)&pFVar1[8].field_0x0 + -1;
      if (*(int *)&pFVar1[8].field_0x0 == 0) {
        iVar4 = 0;
      }
      if ((iVar4 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(short *)(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                    AllocatorInstance).Data == 0x2f) {
        this_00 = Get();
        InsertMountPoint(this_00,(FString *)pFVar1,(FString *)(pFVar1 + 0x10));
      }
      else if (1 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecInsertMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l84::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        return;
      }
    }
  }
  return;
}

// ExecRemoveMountPoint @ 141e98a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMountFlags": Some values do not have unique names */

void __thiscall
FLongPackagePathsSingleton::ExecRemoveMountPoint
          (FLongPackagePathsSingleton *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FLongPackagePathsSingleton *pFVar5;
  ulonglong uVar6;
  FMountPoint *pFVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  FString local_90;
  FMountPoint local_80;
  
  iVar4 = param_1->ArrayNum;
  if (1 < iVar4 - 1U) {
    if ((byte)LogPackageName._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    if ((byte)LogPackageName._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l24::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    if ((byte)LogPackageName._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l42::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    if ((byte)LogPackageName._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l60::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    if ((byte)LogPackageName._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l78::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    if ((byte)LogPackageName._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l96::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    return;
  }
  if (iVar4 != 1) {
    if ((iVar4 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar12 = (param_1->AllocatorInstance).Data;
    if ((param_1->ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    iVar4 = *(int *)(pFVar10 + 0x18) + -1;
    if (*(int *)(pFVar10 + 0x18) == 0) {
      iVar4 = 0;
    }
    if ((iVar4 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (**(short **)(pFVar10 + 0x10) == 0x2f) {
      if ((byte)LogPackageName._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>
                (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l269::LOG_Static,(FLogCategoryBase *)&LogPackageName);
      return;
    }
    pwVar8 = ::FString::operator[]((FString *)pFVar12,0);
    if (*pwVar8 == L'/') {
      pFVar5 = Get();
      RemoveMountPoint(pFVar5,(FString *)pFVar12,(FString *)(pFVar10 + 0x10));
      return;
    }
    if ((byte)LogPackageName._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>
              (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l290::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    return;
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar4 = *(int *)&pFVar12[8].field_0x0 + -1;
  if (*(int *)&pFVar12[8].field_0x0 == 0) {
    iVar4 = 0;
  }
  if ((iVar4 < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  if (*(short *)(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
                AllocatorInstance).Data == 0x2f) {
    if ((this == (FLongPackagePathsSingleton *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)this);
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    pFVar5 = Get();
    pFVar10 = (pFVar5->MountPoints).AllocatorInstance.Data;
    iVar4 = (pFVar5->MountPoints).ArrayNum;
    pFVar12 = pFVar10 + (longlong)iVar4 * 8;
    while( true ) {
      if ((pFVar5->MountPoints).ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar12) break;
      iVar3 = *(int *)(*(undefined8 **)pFVar10 + 1);
      if (iVar3 == local_90.Data.ArrayNum) {
        if (1 < iVar3) {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)**(undefined8 **)pFVar10,
                             (wchar_t *)local_90.Data.AllocatorInstance.Data);
          bVar2 = iVar3 == 0;
          goto LAB_141e98b9d;
        }
LAB_141e98ba8:
        pFVar11 = (FScriptContainerElement *)(*(longlong *)pFVar10 + 0x10);
        if (((local_c8.Data <= pFVar11) &&
            (pFVar11 < local_c8.Data + (longlong)local_c0._4_4_ * 0x10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = (int)local_c0;
        if ((int)local_c0 == local_c0._4_4_) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
        }
        local_c0 = CONCAT44(local_c0._4_4_,iVar3 + 1);
        ::FString::FString((FString *)(local_c8.Data + (longlong)iVar3 * 0x10),(FString *)pFVar11);
      }
      else {
        bVar2 = iVar3 + local_90.Data.ArrayNum == 1;
LAB_141e98b9d:
        if (bVar2) goto LAB_141e98ba8;
      }
      pFVar10 = pFVar10 + 8;
    }
    uVar6 = (ulonglong)(int)local_c0;
    if ((int)local_c0 == 0) {
      iVar4 = 0;
      if (1 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)
                   &`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::C::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        iVar4 = (int)local_c0;
      }
    }
    else {
      if ((int)local_c0 < 2) {
        if (((int)local_c0 < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = *(int *)(local_c8.Data + 8) + -1;
        if (*(int *)(local_c8.Data + 8) == 0) {
          iVar4 = 0;
        }
        ::FString::AssignRange(&local_a0,*(wchar_t **)local_c8.Data,iVar4);
        DestructItems<FString,int>((FString *)local_c8.Data,(int)local_c0);
        FVar9.Data = local_c8.Data;
LAB_141e99043:
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
        if (this != (FLongPackagePathsSingleton *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)this);
        }
        pFVar5 = Get();
        pFVar7 = ConstructMountPoint(&local_80,&local_90,&local_a0,Removable);
        RemoveMountPoint(pFVar5,pFVar7);
        if (local_80.ContentPathAbsolute.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.ContentPathAbsolute.Data.AllocatorInstance.Data);
        }
        if (local_80.ContentPathRelative.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.ContentPathRelative.Data.AllocatorInstance.Data);
        }
        if (local_80.RootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.RootPath.Data.AllocatorInstance.Data);
        }
        goto LAB_141e990b3;
      }
      if (1 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l151::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        uVar6 = local_c0 & 0xffffffff;
      }
      iVar3 = (int)uVar6;
      pFVar12 = local_c8.Data + (longlong)iVar3 * 0x10;
      FVar9.Data = local_c8.Data;
      while( true ) {
        if ((int)uVar6 != iVar3) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
          uVar6 = local_c0 & 0xffffffff;
        }
        iVar4 = (int)uVar6;
        if (FVar9.Data == pFVar12) break;
        if (1 < (byte)LogPackageName._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                      ::__l173::LOG_Static,(FLogCategoryBase *)&LogPackageName);
          uVar6 = local_c0 & 0xffffffff;
        }
        FVar9.Data = FVar9.Data + 0x10;
      }
    }
    DestructItems<FString,int>((FString *)local_c8.Data,iVar4);
    FVar9.Data = local_c8.Data;
  }
  else {
    if ((this == (FLongPackagePathsSingleton *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)this);
    ::FString::operator=(&local_a0,(FString *)pFVar12);
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    pFVar5 = Get();
    pFVar10 = (pFVar5->MountPoints).AllocatorInstance.Data;
    iVar4 = (pFVar5->MountPoints).ArrayNum;
    pFVar12 = pFVar10 + (longlong)iVar4 * 8;
    while( true ) {
      if ((pFVar5->MountPoints).ArrayNum != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar12) break;
      iVar3 = *(int *)(*(longlong *)pFVar10 + 0x18);
      if (iVar3 == local_a0.Data.ArrayNum) {
        if (1 < iVar3) {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)pFVar10 + 0x10),
                             (wchar_t *)local_a0.Data.AllocatorInstance.Data);
          bVar2 = iVar3 == 0;
          goto LAB_141e98e38;
        }
LAB_141e98e43:
        pFVar11 = *(FScriptContainerElement **)pFVar10;
        if (((local_b8.Data <= pFVar11) &&
            (pFVar11 < local_b8.Data + (longlong)local_b0._4_4_ * 0x10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = (int)local_b0;
        if ((int)local_b0 == local_b0._4_4_) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
        }
        local_b0 = CONCAT44(local_b0._4_4_,iVar3 + 1);
        ::FString::FString((FString *)(local_b8.Data + (longlong)iVar3 * 0x10),(FString *)pFVar11);
      }
      else {
        bVar2 = iVar3 + local_a0.Data.ArrayNum == 1;
LAB_141e98e38:
        if (bVar2) goto LAB_141e98e43;
      }
      pFVar10 = pFVar10 + 8;
    }
    uVar6 = (ulonglong)(int)local_b0;
    if ((int)local_b0 == 0) {
      iVar3 = 0;
      if (1 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l203::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        iVar3 = (int)local_b0;
      }
    }
    else {
      if ((int)local_b0 < 2) {
        if (((int)local_b0 < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = *(int *)(local_b8.Data + 8) + -1;
        if (*(int *)(local_b8.Data + 8) == 0) {
          iVar4 = 0;
        }
        ::FString::AssignRange(&local_90,*(wchar_t **)local_b8.Data,iVar4);
        DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
        FVar9.Data = local_b8.Data;
        goto LAB_141e99043;
      }
      if (1 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l224::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        uVar6 = local_b0 & 0xffffffff;
      }
      iVar4 = (int)uVar6;
      pFVar12 = local_b8.Data + (longlong)iVar4 * 0x10;
      FVar9.Data = local_b8.Data;
      while( true ) {
        if ((int)uVar6 != iVar4) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_a8);
          uVar6 = local_b0 & 0xffffffff;
        }
        iVar3 = (int)uVar6;
        if (FVar9.Data == pFVar12) break;
        if (1 < (byte)LogPackageName._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_void___cdecl_FLongPackagePathsSingleton::ExecRemoveMountPoint(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                      ::__l246::LOG_Static,(FLogCategoryBase *)&LogPackageName);
          uVar6 = local_b0 & 0xffffffff;
        }
        FVar9.Data = FVar9.Data + 0x10;
      }
    }
    DestructItems<FString,int>((FString *)local_b8.Data,iVar3);
    FVar9.Data = local_b8.Data;
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (this != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
LAB_141e990b3:
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

// Get @ 141e9f0a0

FLongPackagePathsSingleton * __cdecl FLongPackagePathsSingleton::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FLongPackagePathsSingleton&___ptr64___cdecl_FLongPackagePathsSingleton::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FLongPackagePathsSingleton&___ptr64___cdecl_FLongPackagePathsSingleton::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FLongPackagePathsSingleton&___ptr64___cdecl_FLongPackagePathsSingleton::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FLongPackagePathsSingleton
                (&`public:_static_struct_FLongPackagePathsSingleton&___ptr64___cdecl_FLongPackagePathsSingleton::Get(void)'
                  ::__l2::Singleton);
      atexit(`FLongPackagePathsSingleton::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`public:_static_struct_FLongPackagePathsSingleton&___ptr64___cdecl_FLongPackagePathsSingleton::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FLongPackagePathsSingleton&___ptr64___cdecl_FLongPackagePathsSingleton::Get(void)'
              ::__l2::Singleton;
    }
  }
  return &`public:_static_struct_FLongPackagePathsSingleton&___ptr64___cdecl_FLongPackagePathsSingleton::Get(void)'
          ::__l2::Singleton;
}

// InsertMountPoint @ 141ea6740

/* WARNING: Enum "EMountFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLongPackagePathsSingleton::InsertMountPoint
          (FLongPackagePathsSingleton *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  TArray<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMountPoint *pFVar7;
  FMountPoint *this_00;
  FMountPoint **ppFVar8;
  FMountPoint *local_e8;
  FString local_e0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FMountPoint local_68;
  
  pFVar7 = ConstructMountPoint(&local_68,param_1,param_2,Removable);
  this_00 = ::operator_new(0x38);
  local_e8 = (FMountPoint *)0x0;
  if (this_00 != (FMountPoint *)0x0) {
    local_e8 = FMountPoint::FMountPoint(this_00,pFVar7);
  }
  if (local_68.ContentPathAbsolute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ContentPathAbsolute.Data.AllocatorInstance.Data);
  }
  if (local_68.ContentPathRelative.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ContentPathRelative.Data.AllocatorInstance.Data);
  }
  if (local_68.RootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.RootPath.Data.AllocatorInstance.Data);
  }
  pFVar7 = local_e8;
  if ((this == (FLongPackagePathsSingleton *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  pTVar2 = &this->MountPoints;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 < pFVar3 + (longlong)(this->MountPoints).ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->MountPoints).ArrayNum;
  piVar1 = &(this->MountPoints).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->MountPoints).ArrayNum = iVar6 + 1;
  memmove(pFVar3 + 8,pFVar3,(longlong)iVar6 << 3);
  *(FMountPoint **)(pTVar2->AllocatorInstance).Data = local_e8;
  local_e8 = (FMountPoint *)0x0;
  local_c8 = (pFVar7->RootPath).Data.AllocatorInstance.Data;
  iVar6 = (pFVar7->RootPath).Data.ArrayNum;
  iStack_c0 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_c0 = 0;
  }
  local_98._12_4_ = uStack_bc;
  local_98.Size = iStack_c0;
  local_98.DataPtr = (wchar_t *)local_c8;
  ppFVar8 = TDirectoryTree<FMountPoint_*>::FindOrAdd(&this->RootPathTree,&local_98,(bool *)0x0);
  *ppFVar8 = pFVar7;
  local_b8 = (pFVar7->ContentPathRelative).Data.AllocatorInstance.Data;
  iVar6 = (pFVar7->ContentPathRelative).Data.ArrayNum;
  iStack_b0 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_b0 = 0;
  }
  local_88._12_4_ = uStack_ac;
  local_88.Size = iStack_b0;
  local_88.DataPtr = (wchar_t *)local_b8;
  ppFVar8 = TDirectoryTree<FMountPoint_*>::FindOrAdd(&this->ContentPathTree,&local_88,(bool *)0x0);
  *ppFVar8 = pFVar7;
  local_a8 = (pFVar7->ContentPathAbsolute).Data.AllocatorInstance.Data;
  iVar6 = (pFVar7->ContentPathAbsolute).Data.ArrayNum;
  iStack_a0 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_a0 = 0;
  }
  local_78._12_4_ = uStack_9c;
  local_78.Size = iStack_a0;
  local_78.DataPtr = (wchar_t *)local_a8;
  ppFVar8 = TDirectoryTree<FMountPoint_*>::FindOrAdd(&this->ContentPathTree,&local_78,(bool *)0x0);
  *ppFVar8 = pFVar7;
  if (this != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  ::FString::PrintfImpl(&local_e0,L"FPackageName: Mount point added: \'%s\' mounted to \'%s\'");
  bVar5 = IsEngineStartupModuleLoadingComplete();
  if (bVar5) {
    if (4 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FLongPackagePathsSingleton::InsertMountPoint(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
  }
  else if (5 < (byte)LogPackageName._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_FLongPackagePathsSingleton::InsertMountPoint(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
                ::__l27::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  TMulticastDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>::
  Broadcast(&FPackageName::OnContentPathMountedEvent,param_1,&pFVar7->ContentPathRelative);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar7 = local_e8;
  if (local_e8 != (FMountPoint *)0x0) {
    if (*(void **)((longlong)local_e8 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_e8 + 0x20));
    }
    if (*(void **)((longlong)pFVar7 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pFVar7 + 0x10));
    }
    if (*(void **)pFVar7 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar7);
    }
    ::operator_delete(pFVar7,0x38);
  }
  return;
}

// MountPointExists @ 141eadb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FLongPackagePathsSingleton::MountPointExists
          (FLongPackagePathsSingleton *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TDirectoryTree<FMountPoint_*> *this_00;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringBuilderBase<wchar_t> local_68;
  wchar_t local_48 [16];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((this == (FLongPackagePathsSingleton *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  local_88.DataPtr = param_1->DataPtr;
  local_88.Size = param_1->Size;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = &this->RootPathTree;
  if (param_1->Size == 0) {
    if (-1 < (int)(this->RootPathTree).Root.NumChildNodesAndFlags) {
      this_00 = (TDirectoryTree<FMountPoint_*> *)0x0;
    }
  }
  else {
    local_68.Base = local_48;
    local_68.bIsDynamic = false;
    local_68.bIsExternal = false;
    local_68.CurPos = local_48;
    local_68.End = (wchar_t *)local_28;
    TDirectoryTree<FMountPoint_*>::NormalizePathForReading(this_00,&local_88,&local_68);
    local_78.DataPtr = local_88.DataPtr;
    local_78.Size = local_88.Size;
    local_78._12_4_ = local_88._12_4_;
    this_00 = (TDirectoryTree<FMountPoint_*> *)
              TDirectoryTree<FMountPoint_*>::FTreeNode::Find(&this_00->Root,&local_78);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  }
  if (this_00 == (TDirectoryTree<FMountPoint_*> *)0x0) {
    iVar5 = (this->MemoryRootPath).Data.ArrayNum;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    iVar5 = (int)*(undefined8 *)&param_1->Size;
    if (iVar5 == iVar6) {
      if ((iVar5 != 0) && (iVar6 != 0)) {
        iVar4 = iVar6;
        if (iVar5 < iVar6) {
          iVar4 = iVar5;
        }
        iVar4 = FGenericPlatformStricmp::Strnicmp
                          (param_1->DataPtr,
                           (wchar_t *)(this->MemoryRootPath).Data.AllocatorInstance.Data,
                           (longlong)iVar4);
        if (iVar4 != 0) goto LAB_141eadc54;
      }
      if (iVar5 == iVar6) goto LAB_141eadc58;
    }
LAB_141eadc54:
    bVar2 = false;
  }
  else {
LAB_141eadc58:
    bVar2 = true;
  }
  if (this != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return bVar2;
}

// OnCoreUObjectInitialized @ 141eaf4d0

void __thiscall
FLongPackagePathsSingleton::OnCoreUObjectInitialized(FLongPackagePathsSingleton *this)

{
  code *pcVar1;
  IPluginManager *pIVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pIVar2 = IPluginManager::Get();
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[3] = FPackageName::RegisterMountPoint;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  (*pcVar1)(pIVar2,&local_58);
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
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[3] = FPackageName::UnRegisterMountPoint;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  (*pcVar1)(pIVar2,&local_58);
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
  UE::PluginManager::Private::SetCoreUObjectPluginManager
            ((ICoreUObjectPluginManager *)&UE::CoreUObject::Private::GPluginHandler);
  return;
}

// RemoveMountPoint @ 141eb4ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLongPackagePathsSingleton::RemoveMountPoint(FLongPackagePathsSingleton *this,FMountPoint *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined8 *puVar5;
  FMountPoint *pFVar6;
  code *pcVar7;
  FLongPackagePathsSingleton *pFVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FMountPoint **ppFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  TDirectoryTree<FMountPoint_*> *pTVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStackY_1f8 [32];
  bool local_1c8;
  bool local_1c7;
  bool local_1c6 [2];
  uint local_1c4;
  FLongPackagePathsSingleton *local_1c0;
  uint local_1b8;
  uint local_1b4;
  ulonglong local_1b0;
  wchar_t *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TStringView<wchar_t> local_178;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TStringView<wchar_t> local_148;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [16];
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [16];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar10 = false;
  local_1c0 = this;
  if ((this == (FLongPackagePathsSingleton *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar17 = 0;
  local_1c4 = 0;
  if (0 < (this->MountPoints).ArrayNum) {
    pTVar2 = &this->MountPoints;
    local_1b0 = 0;
    uVar19 = uVar17;
    do {
      uVar18 = (uint)uVar19;
      local_1b4 = ~uVar18;
      local_1b8 = local_1b4 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar18 < (this->MountPoints).ArrayNum) {
        uVar11 = local_1b8;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = (param_1->RootPath).Data.ArrayNum;
      puVar5 = *(undefined8 **)((pTVar2->AllocatorInstance).Data + uVar17 * 8);
      iVar4 = *(int *)(puVar5 + 1);
      if (iVar4 == iVar14) {
        if (1 < iVar4) {
          iVar14 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)*puVar5,
                              (wchar_t *)(param_1->RootPath).Data.AllocatorInstance.Data);
          bVar9 = iVar14 == 0;
          goto LAB_141eb4c05;
        }
LAB_141eb4c10:
        iVar14 = *(int *)(puVar5 + 3);
        iVar4 = (param_1->ContentPathRelative).Data.ArrayNum;
        if (iVar14 == iVar4) {
          if (1 < iVar14) {
            iVar14 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)puVar5[2],
                                (wchar_t *)
                                (param_1->ContentPathRelative).Data.AllocatorInstance.Data);
            bVar9 = iVar14 == 0;
            goto LAB_141eb4c37;
          }
        }
        else {
          bVar9 = iVar14 + iVar4 == 1;
LAB_141eb4c37:
          if (!bVar9) goto LAB_141eb5273;
        }
        if ((*(byte *)(puVar5 + 6) & 1) == 0) goto LAB_141eb5273;
        local_1a8 = (wchar_t *)*puVar5;
        iStack_1a0 = *(int *)(puVar5 + 1) + -1;
        if (*(int *)(puVar5 + 1) == 0) {
          iStack_1a0 = 0;
        }
        local_128._12_4_ = uStack_19c;
        local_128.Size = iStack_1a0;
        local_128.DataPtr = local_1a8;
        TDirectoryTree<FMountPoint_*>::Remove(&local_1c0->RootPathTree,&local_128,local_1c6);
        if (local_1c6[0] != false) {
          iVar14 = (this->MountPoints).ArrayNum;
          pFVar15 = (pTVar2->AllocatorInstance).Data;
          if ((iVar14 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (iVar14 - uVar18) + -1;
          iVar4 = iVar14;
          if (iVar12 < iVar14) {
            iVar4 = iVar12;
          }
          iVar12 = 0;
          if (0 < iVar4) {
            iVar12 = iVar4;
          }
          pFVar15 = pFVar15 + ((longlong)iVar14 - (longlong)iVar12) * 8;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar3 = pFVar15 + (longlong)iVar12 * 8;
          for (; uVar18 = local_1c4, pFVar15 != pFVar3; pFVar15 = pFVar15 + 8) {
            iVar14 = (param_1->RootPath).Data.ArrayNum;
            iVar4 = *(int *)(*(undefined8 **)pFVar15 + 1);
            if (iVar4 == iVar14) {
              if (1 < iVar4) {
                iVar14 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)**(undefined8 **)pFVar15,
                                    (wchar_t *)(param_1->RootPath).Data.AllocatorInstance.Data);
                bVar10 = iVar14 == 0;
                goto LAB_141eb4d48;
              }
LAB_141eb4d5a:
              pFVar6 = *(FMountPoint **)pFVar15;
              local_198 = (pFVar6->RootPath).Data.AllocatorInstance.Data;
              iVar14 = (pFVar6->RootPath).Data.ArrayNum;
              iStack_190 = iVar14 + -1;
              if (iVar14 == 0) {
                iStack_190 = 0;
              }
              local_118._12_4_ = uStack_18c;
              local_118.Size = iStack_190;
              local_118.DataPtr = (wchar_t *)local_198;
              ppFVar13 = TDirectoryTree<FMountPoint_*>::FindOrAdd
                                   (&local_1c0->RootPathTree,&local_118,(bool *)0x0);
              *ppFVar13 = pFVar6;
              uVar18 = local_1c4;
              break;
            }
            bVar10 = iVar4 + iVar14 == 1;
LAB_141eb4d48:
            if (bVar10) goto LAB_141eb4d5a;
          }
        }
        pFVar8 = local_1c0;
        local_188 = (wchar_t *)puVar5[2];
        pTVar16 = &local_1c0->ContentPathTree;
        iStack_180 = *(int *)(puVar5 + 3) + -1;
        if (*(int *)(puVar5 + 3) == 0) {
          iStack_180 = 0;
        }
        local_178._12_4_ = uStack_17c;
        local_178.Size = iStack_180;
        local_178.DataPtr = local_188;
        if (iStack_180 == 0) {
          uVar11 = (local_1c0->ContentPathTree).Root.NumChildNodesAndFlags;
          local_1c8 = (bool)-(char)((int)uVar11 >> 0x1f);
          if (local_1c8 != false) {
            (local_1c0->ContentPathTree).Root.NumChildNodesAndFlags = uVar11 & 0x7fffffff;
          }
        }
        else {
          local_c8.Base = local_a8;
          local_c8.bIsDynamic = false;
          local_c8.bIsExternal = false;
          local_c8.CurPos = local_a8;
          local_c8.End = (wchar_t *)&local_88;
          TDirectoryTree<FMountPoint_*>::NormalizePathForReading(pTVar16,&local_178,&local_c8);
          local_108.DataPtr = local_178.DataPtr;
          local_108.Size = local_178.Size;
          local_108._12_4_ = local_178._12_4_;
          TDirectoryTree<FMountPoint_*>::FTreeNode::Remove(&pTVar16->Root,&local_108,&local_1c8);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
        }
        if (local_1c8 != false) {
          if (((pFVar8->ContentPathTree).NumPaths < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumPaths > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                  ,0x205,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          piVar1 = &(pFVar8->ContentPathTree).NumPaths;
          *piVar1 = *piVar1 + -1;
          if (local_1c8 != false) {
            iVar14 = (this->MountPoints).ArrayNum;
            pFVar15 = (pTVar2->AllocatorInstance).Data;
            if ((iVar14 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar12 = (iVar14 - uVar18) + -1;
            iVar4 = iVar14;
            if (iVar12 < iVar14) {
              iVar4 = iVar12;
            }
            iVar12 = 0;
            if (0 < iVar4) {
              iVar12 = iVar4;
            }
            pFVar15 = pFVar15 + ((longlong)iVar14 - (longlong)iVar12) * 8;
            if ((iVar12 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar3 = pFVar15 + (longlong)iVar12 * 8;
            for (; pFVar15 != pFVar3; pFVar15 = pFVar15 + 8) {
              iVar14 = (param_1->ContentPathRelative).Data.ArrayNum;
              iVar4 = *(int *)(*(longlong *)pFVar15 + 0x18);
              if (iVar4 == iVar14) {
                if (1 < iVar4) {
                  iVar14 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)(*(longlong *)pFVar15 + 0x10),
                                      (wchar_t *)
                                      (param_1->ContentPathRelative).Data.AllocatorInstance.Data);
                  bVar10 = iVar14 == 0;
                  goto LAB_141eb4f3a;
                }
LAB_141eb4f4c:
                pFVar6 = *(FMountPoint **)pFVar15;
                local_168 = (pFVar6->ContentPathRelative).Data.AllocatorInstance.Data;
                iVar14 = (pFVar6->ContentPathRelative).Data.ArrayNum;
                iStack_160 = iVar14 + -1;
                if (iVar14 == 0) {
                  iStack_160 = 0;
                }
                local_f8._12_4_ = uStack_15c;
                local_f8.Size = iStack_160;
                local_f8.DataPtr = (wchar_t *)local_168;
                ppFVar13 = TDirectoryTree<FMountPoint_*>::FindOrAdd
                                     (&local_1c0->ContentPathTree,&local_f8,(bool *)0x0);
                *ppFVar13 = pFVar6;
                break;
              }
              bVar10 = iVar4 + iVar14 == 1;
LAB_141eb4f3a:
              if (bVar10) goto LAB_141eb4f4c;
            }
          }
        }
        pFVar8 = local_1c0;
        local_158 = (wchar_t *)puVar5[4];
        pTVar16 = &local_1c0->ContentPathTree;
        iStack_150 = *(int *)(puVar5 + 5) + -1;
        if (*(int *)(puVar5 + 5) == 0) {
          iStack_150 = 0;
        }
        local_148._12_4_ = uStack_14c;
        local_148.Size = iStack_150;
        local_148.DataPtr = local_158;
        if (iStack_150 == 0) {
          uVar11 = (local_1c0->ContentPathTree).Root.NumChildNodesAndFlags;
          local_1c7 = (bool)-(char)((int)uVar11 >> 0x1f);
          if (local_1c7 != false) {
            (local_1c0->ContentPathTree).Root.NumChildNodesAndFlags = uVar11 & 0x7fffffff;
          }
        }
        else {
          local_88.Base = local_68;
          local_88.bIsDynamic = false;
          local_88.bIsExternal = false;
          local_88.CurPos = local_68;
          local_88.End = (wchar_t *)local_48;
          TDirectoryTree<FMountPoint_*>::NormalizePathForReading(pTVar16,&local_148,&local_88);
          local_e8.DataPtr = local_148.DataPtr;
          local_e8.Size = local_148.Size;
          local_e8._12_4_ = local_148._12_4_;
          TDirectoryTree<FMountPoint_*>::FTreeNode::Remove(&pTVar16->Root,&local_e8,&local_1c7);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_88);
        }
        uVar11 = local_1c4;
        if (local_1c7 != false) {
          if (((pFVar8->ContentPathTree).NumPaths < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumPaths > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                  ,0x205,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          piVar1 = &(pFVar8->ContentPathTree).NumPaths;
          *piVar1 = *piVar1 + -1;
          uVar11 = local_1c4;
          if (local_1c7 != false) {
            iVar14 = (this->MountPoints).ArrayNum;
            pFVar15 = (pTVar2->AllocatorInstance).Data;
            if ((iVar14 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar11 = local_1c4;
            iVar12 = (iVar14 - local_1c4) + -1;
            iVar4 = iVar14;
            if (iVar12 < iVar14) {
              iVar4 = iVar12;
            }
            iVar12 = 0;
            if (0 < iVar4) {
              iVar12 = iVar4;
            }
            pFVar15 = pFVar15 + ((longlong)iVar14 - (longlong)iVar12) * 8;
            if ((iVar12 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar3 = pFVar15 + (longlong)iVar12 * 8;
            for (; pFVar15 != pFVar3; pFVar15 = pFVar15 + 8) {
              iVar14 = (param_1->ContentPathAbsolute).Data.ArrayNum;
              iVar4 = *(int *)(*(longlong *)pFVar15 + 0x28);
              if (iVar4 == iVar14) {
                if (1 < iVar4) {
                  iVar14 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)(*(longlong *)pFVar15 + 0x20),
                                      (wchar_t *)
                                      (param_1->ContentPathAbsolute).Data.AllocatorInstance.Data);
                  bVar10 = iVar14 == 0;
                  goto LAB_141eb513a;
                }
LAB_141eb514c:
                pFVar6 = *(FMountPoint **)pFVar15;
                local_138 = (pFVar6->ContentPathAbsolute).Data.AllocatorInstance.Data;
                iVar14 = (pFVar6->ContentPathAbsolute).Data.ArrayNum;
                iStack_130 = iVar14 + -1;
                if (iVar14 == 0) {
                  iStack_130 = 0;
                }
                local_d8._12_4_ = uStack_12c;
                local_d8.Size = iStack_130;
                local_d8.DataPtr = (wchar_t *)local_138;
                ppFVar13 = TDirectoryTree<FMountPoint_*>::FindOrAdd
                                     (&local_1c0->ContentPathTree,&local_d8,(bool *)0x0);
                *ppFVar13 = pFVar6;
                break;
              }
              bVar10 = iVar4 + iVar14 == 1;
LAB_141eb513a:
              if (bVar10) goto LAB_141eb514c;
            }
          }
        }
        uVar18 = 0;
        if ((int)uVar11 < (this->MountPoints).ArrayNum) {
          uVar18 = local_1b8;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar17 = local_1b0;
        pFVar15 = (pTVar2->AllocatorInstance).Data;
        puVar5 = *(undefined8 **)(pFVar15 + local_1b0 * 8);
        pFVar15 = pFVar15 + local_1b0 * 8;
        if (puVar5 != (undefined8 *)0x0) {
          if ((void *)puVar5[4] != (void *)0x0) {
            FMemory::Free((void *)puVar5[4]);
          }
          if ((void *)puVar5[2] != (void *)0x0) {
            FMemory::Free((void *)puVar5[2]);
          }
          if ((void *)*puVar5 != (void *)0x0) {
            FMemory::Free((void *)*puVar5);
          }
          ::operator_delete(puVar5,0x38);
        }
        iVar14 = (this->MountPoints).ArrayNum + local_1b4;
        if (iVar14 != 0) {
          memmove(pFVar15,pFVar15 + 8,(longlong)iVar14 << 3);
        }
        piVar1 = &(this->MountPoints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->MountPoints).ArrayNum,
                   &(this->MountPoints).ArrayMax);
        bVar10 = true;
      }
      else {
        bVar9 = iVar4 + iVar14 == 1;
LAB_141eb4c05:
        if (bVar9) goto LAB_141eb4c10;
LAB_141eb5273:
        local_1c4 = uVar18 + 1;
        uVar17 = uVar17 + 1;
        local_1b0 = uVar17;
      }
      pFVar8 = local_1c0;
      uVar19 = (ulonglong)local_1c4;
    } while ((int)local_1c4 < (local_1c0->MountPoints).ArrayNum);
    this = local_1c0;
    if (bVar10) {
      if (3 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FLongPackagePathsSingleton::RemoveMountPoint(FMountPoint_const&___ptr64)___ptr64'
                    ::__l44::LOG_Static,(FLogCategoryBase *)&LogPackageName);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar8);
      TMulticastDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&FPackageName::OnContentPathDismountedEvent,&param_1->RootPath,
                &param_1->ContentPathRelative);
      return;
    }
  }
  if (3 < (byte)LogPackageName._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FLongPackagePathsSingleton::RemoveMountPoint(FMountPoint_const&___ptr64)___ptr64'
                ::__l64::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// RemoveMountPoint @ 141eb5370

/* WARNING: Enum "EMountFlags": Some values do not have unique names */

void __thiscall
FLongPackagePathsSingleton::RemoveMountPoint
          (FLongPackagePathsSingleton *this,FString *param_1,FString *param_2)

{
  FMountPoint *pFVar1;
  FMountPoint local_48;
  
  pFVar1 = ConstructMountPoint(&local_48,param_1,param_2,Removable);
  RemoveMountPoint(this,pFVar1);
  if (local_48.ContentPathAbsolute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathAbsolute.Data.AllocatorInstance.Data);
  }
  if (local_48.ContentPathRelative.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathRelative.Data.AllocatorInstance.Data);
  }
  if (local_48.RootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.RootPath.Data.AllocatorInstance.Data);
  }
  return;
}

