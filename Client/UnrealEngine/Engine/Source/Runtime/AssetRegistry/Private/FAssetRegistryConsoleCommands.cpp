// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 11

// FAssetRegistryConsoleCommands @ 142b791e0

FAssetRegistryConsoleCommands * __thiscall
FAssetRegistryConsoleCommands::FAssetRegistryConsoleCommands(FAssetRegistryConsoleCommands *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FAssetRegistryConsoleCommands *pFVar5;
  FText *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 local_3d8 [8];
  FDelegateAllocation local_3d0;
  undefined1 local_3c0 [8];
  FDelegateAllocation local_3b8;
  undefined1 local_3a8 [8];
  FDelegateAllocation local_3a0;
  undefined1 local_390 [8];
  FDelegateAllocation local_388;
  undefined1 local_378 [8];
  FDelegateAllocation local_370;
  undefined1 local_360 [8];
  FDelegateAllocation local_358;
  undefined1 local_348 [8];
  FDelegateAllocation local_340;
  undefined1 local_330 [8];
  FDelegateAllocation local_328;
  undefined1 local_318 [8];
  FDelegateAllocation local_310;
  undefined1 local_300 [8];
  FDelegateAllocation local_2f8;
  FDestructionSentinel local_2e8;
  FDestructionSentinel local_2d0;
  FDestructionSentinel local_2b8;
  FDestructionSentinel local_2a0;
  FDestructionSentinel local_288;
  FDestructionSentinel local_270;
  FDestructionSentinel local_258;
  FDestructionSentinel local_240;
  FDestructionSentinel local_228;
  FDestructionSentinel local_210;
  FDestructionSentinel local_1f8;
  FDelegateAllocation *local_1e0;
  FDestructionSentinel local_1d8;
  FDelegateAllocation *local_1c0;
  FDestructionSentinel local_1b8;
  FDelegateAllocation *local_1a0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_3d8 = (undefined1  [8])0x0;
  local_3d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d8,
             (FWriteAccessScope *)&local_1d8);
  local_1c0 = &local_3d0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_3d0);
  pwVar8 = L"";
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = GetByName;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_1d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"AssetRegistry",L"CommandText_GetByName",
                      L"<PackageName> //Query the asset registry for assets matching the supplied package name"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->GetByNameCommand,L"AssetRegistry.GetByName",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_3d8,0);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d8,
             (FWriteAccessScope *)&local_2e8);
  if ((local_3d0.DelegateSize != 0) &&
     (local_3d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3d0,0,0,0x10);
    local_3d0.DelegateSize = 0;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (local_3d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d8);
  local_3c0 = (undefined1  [8])0x0;
  local_3b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c0,
             (FWriteAccessScope *)&local_1b8);
  local_1a0 = &local_3b8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_3b8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = GetByPath;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_1b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"AssetRegistry",L"CommandText_GetByPath",
                      L"<Path> //Query the asset registry for assets matching the supplied package path"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->GetByPathCommand,L"AssetRegistry.GetByPath",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_3c0,0);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c0,
             (FWriteAccessScope *)&local_210);
  if ((local_3b8.DelegateSize != 0) &&
     (local_3b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3b8,0,0,0x10);
    local_3b8.DelegateSize = 0;
  }
  if (local_210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
  }
  if (local_3b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c0);
  local_3a8 = (undefined1  [8])0x0;
  local_3a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
             (FWriteAccessScope *)&local_198);
  local_180 = &local_3a0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_3a0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = GetByClass;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"AssetRegistry",L"CommandText_GetByClass",
                      L"<ClassName> //Query the asset registry for assets matching the supplied class"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->GetByClassCommand,L"AssetRegistry.GetByClass",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_3a8,0);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
             (FWriteAccessScope *)&local_228);
  if ((local_3a0.DelegateSize != 0) &&
     (local_3a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3a0,0,0,0x10);
    local_3a0.DelegateSize = 0;
  }
  if (local_228.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
  }
  if (local_3a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a8);
  local_390 = (undefined1  [8])0x0;
  local_388.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_388.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
             (FWriteAccessScope *)&local_178);
  local_160 = &local_388;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_388);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = GetByTag;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_178.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"AssetRegistry",L"CommandText_GetByTag",
                      L"<TagName> <TagValue> //Query the asset registry for assets matching the supplied tag and value"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->GetByTagCommand,L"AssetRegistry.GetByTag",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_390,0);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
             (FWriteAccessScope *)&local_240);
  if ((local_388.DelegateSize != 0) &&
     (local_388.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_388.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_388,0,0,0x10);
    local_388.DelegateSize = 0;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  if (local_388.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_388.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_390);
  local_378 = (undefined1  [8])0x0;
  local_370.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_370.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_378,
             (FWriteAccessScope *)&local_158);
  local_140 = &local_370;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_370);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = GetDependencies;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"AssetRegistry",L"CommandText_GetDependencies",
                      L"<PackageName> //Query the asset registry for dependencies for the specified package"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->GetDependenciesCommand,L"AssetRegistry.GetDependencies",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_378,0);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_378,
             (FWriteAccessScope *)&local_258);
  if ((local_370.DelegateSize != 0) &&
     (local_370.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_370.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_370,0,0,0x10);
    local_370.DelegateSize = 0;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (local_370.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_370.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_378);
  local_360 = (undefined1  [8])0x0;
  local_358.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_358.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
             (FWriteAccessScope *)&local_138);
  local_120 = &local_358;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_358);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = GetReferencers;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"AssetRegistry",L"CommandText_GetReferencers",
                      L"<ObjectPath> //Query the asset registry for referencers for the specified package"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->GetReferencersCommand,L"AssetRegistry.GetReferencers",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_360,0);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
             (FWriteAccessScope *)&local_270);
  if ((local_358.DelegateSize != 0) &&
     (local_358.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_358.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_358,0,0,0x10);
    local_358.DelegateSize = 0;
  }
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  if (local_358.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_358.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_360);
  local_348 = (undefined1  [8])0x0;
  local_340.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_340.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
             (FWriteAccessScope *)&local_118);
  local_100 = &local_340;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_340);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = FindInvalidUAssets;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_88,L"AssetRegistry",L"CommandText_FindInvalidUAssets",
                      L"Finds a list of all assets which are in UAsset files but do not share the name of the package"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->FindInvalidUAssetsCommand,L"AssetRegistry.Debug.FindInvalidUAssets",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_348,0);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
             (FWriteAccessScope *)&local_288);
  if ((local_340.DelegateSize != 0) &&
     (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_340.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_340,0,0,0x10);
    local_340.DelegateSize = 0;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_340.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_348);
  local_330 = (undefined1  [8])0x0;
  local_328.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_328.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_330,
             (FWriteAccessScope *)&local_f8);
  local_e0 = &local_328;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_328);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = ScanPath;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_98,L"AssetRegistry",L"CommandText_ScanPath",
                      L"<PathToScan> //Scan the given filename or directoryname for package files and load them into the assetregistry. Extra string parameters: -forcerescan, -ignoreDenyLists, -asfile, -asdir"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ScanPathCommand,L"AssetRegistry.ScanPath",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_330,0);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_330,
             (FWriteAccessScope *)&local_2a0);
  if ((local_328.DelegateSize != 0) &&
     (local_328.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_328.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_328,0,0,0x10);
    local_328.DelegateSize = 0;
  }
  if (local_2a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
  }
  if (local_328.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_328.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_330);
  local_318 = (undefined1  [8])0x0;
  local_310.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_310.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_318,
             (FWriteAccessScope *)&local_d8);
  local_c0 = &local_310;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_310);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = DumpAllocatedSize;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"AssetRegistry",L"CommandText_DumpAllocatedSize",
                      L"Dump the allocations of the asset registry state to the log");
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->DumpAllocatedSizeCommand,L"AssetRegistry.DumpAllocatedSize",pwVar9,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_318,0);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_318,
             (FWriteAccessScope *)&local_2b8);
  if ((local_310.DelegateSize != 0) &&
     (local_310.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_310.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_310,0,0,0x10);
    local_310.DelegateSize = 0;
  }
  if (local_2b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
  }
  if (local_310.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_310.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_318);
  local_300 = (undefined1  [8])0x0;
  local_2f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_300,
             (FWriteAccessScope *)&local_1f8);
  local_1e0 = &local_2f8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_2f8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = DumpState;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAssetRegistryConsoleCommands____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FAssetRegistryConsoleCommands *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAssetRegistryConsoleCommands *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"AssetRegistry",L"CommandText_DumpState",
                      L"Dump the state of the asset registry to a file. Pass -log to dump to the log as well. Extra string parameters: All, ObjectPath, PackageName, Path, Class, Tag, Dependencies, DependencyDetails, PackageData, AssetBundles, AssetTags"
                     );
  pFVar7 = FText::ToString(pFVar6);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->DumpStateCommand,L"AssetRegistry.DumpState",pwVar8,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_300,0);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_300,
             (FWriteAccessScope *)&local_2d0);
  if ((local_2f8.DelegateSize != 0) &&
     (local_2f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2f8,0,0,0x10);
    local_2f8.DelegateSize = 0;
  }
  if (local_2d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
  }
  if (local_2f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_300);
  return this;
}

// DumpAllocatedSize @ 142b8e4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::DumpAllocatedSize
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  IAssetRegistry *pIVar2;
  bool bVar3;
  
  pIVar2 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                         ,0x111,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*pIVar2 + 0x3c8))(pIVar2,1);
  if (4 < (byte)LogAssetRegistry._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAssetRegistryConsoleCommands::DumpAllocatedSize(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    return;
  }
  return;
}

// DumpState @ 142b8e560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::DumpState
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  IAssetRegistry *pIVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FDateTime this_00;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  IFileManager *pIVar7;
  FArchive *this_01;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FString *pFVar12;
  bool bVar13;
  FString *pFVar14;
  undefined1 local_res10 [16];
  FString *local_78;
  undefined8 local_70;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)param_1->ArrayNum * 0x10;
  for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 0x10) {
    if (*(int *)(pFVar10 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar10;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"log");
    if (iVar4 == 0) {
      iVar4 = 1;
      goto LAB_142b8e5ba;
    }
  }
  iVar4 = 0;
LAB_142b8e5ba:
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)param_1->ArrayNum * 0x10;
  do {
    if (pFVar10 == pFVar11) {
      iVar5 = 0;
LAB_142b8e5fe:
      if (param_1->ArrayNum == iVar4 + iVar5) {
        if (1 < (byte)LogAssetRegistry._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_void___cdecl_FAssetRegistryConsoleCommands::DumpState(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
      }
      else {
        if (((char)iVar4 != '\0') || (bVar13 = false, (char)iVar5 != '\0')) {
          bVar13 = true;
        }
        this_00 = FDateTime::Now();
        FDateTime::ToString((FDateTime *)this_00.Ticks,&local_38);
        ::FString::PrintfImpl(&local_58,L"AssetRegistryState_%s.txt");
        pTVar6 = &FPaths::ProfilingDir(&local_48)->Data;
        iVar4 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        if ((pTVar6->ArrayNum != 0) || (iVar5 = 2, iVar4 == -1)) {
          iVar5 = 1;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_68,pTVar6,iVar4 + iVar5);
        ::FString::PathAppend
                  ((FString *)&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        pIVar7 = IFileManager::Get();
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_68.ArrayNum != 0) {
          FVar9.Data = local_68.AllocatorInstance.Data;
        }
        this_01 = (FArchive *)(**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,FVar9.Data,0);
        pIVar2 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
        local_78 = (FString *)0x0;
        local_70 = 0;
        if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0
            ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Singleton",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                                     ,0x111,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)((longlong)*pIVar2 + 0x3d8))(pIVar2,param_1,&local_78,1000);
        iVar4 = (int)local_70;
        pFVar14 = local_78 + (int)local_70;
        pFVar12 = local_78;
        while( true ) {
          if ((int)local_70 != iVar4) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (pFVar12 == pFVar14) break;
          if ((bVar13) && (4 < (byte)LogAssetRegistry._0_1_)) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FAssetRegistryConsoleCommands::DumpState(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                        ::__l31::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          }
          FArchive::LogfImpl(this_01,L"%s");
          pFVar12 = pFVar12 + 1;
        }
        if (3 < (byte)LogAssetRegistry._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_FAssetRegistryConsoleCommands::DumpState(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        DestructItems<FString,int>(local_78,(int)local_70);
        if (local_78 != (FString *)0x0) {
          FMemory::Free(local_78);
        }
        if (this_01 != (FArchive *)0x0) {
          (*(code *)**(undefined8 **)this_01)(this_01,1);
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
      }
      return;
    }
    if (*(int *)(pFVar10 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar10;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"-log");
    if (iVar5 == 0) {
      iVar5 = 1;
      goto LAB_142b8e5fe;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// FindInvalidUAssets @ 142b91760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::FindInvalidUAssets
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  IAssetRegistry *pIVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  EPackageLocationFilter EVar6;
  EPackageExtension EVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  FAssetData *this_00;
  longlong lVar17;
  undefined1 auStack_1148 [32];
  longlong local_1128;
  longlong local_1120;
  FAssetData *local_1118;
  undefined8 local_1110;
  FPackagePath local_1108;
  wchar_t *local_10f8;
  int iStack_10f0;
  undefined4 uStack_10ec;
  FString local_10e8;
  TStringView<wchar_t> local_10d8;
  FString local_10c8;
  TStringBuilderBase<wchar_t> local_10b8;
  wchar_t local_1098 [1035];
  wchar_t local_882 [5];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  pIVar2 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1148;
  uVar14 = 0;
  local_1118 = (FAssetData *)0x0;
  local_1110 = 0;
  if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                         ,0x111,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2,&local_1118);
  if (4 < (byte)LogAssetRegistry._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAssetRegistryConsoleCommands::FindInvalidUAssets(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  uVar16 = uVar14;
  if (0 < (int)local_1110) {
    do {
      uVar13 = (uint)uVar14;
      uVar8 = 0;
      if ((int)uVar13 < (int)local_1110) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_1120 = (longlong)(int)local_1110;
        local_1128 = (longlong)(int)uVar13;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = (FAssetData *)((longlong)(&(local_1118->ChunkIDs).AllocatorInstance + -5) + uVar16);
      local_1108.PackageName.ComparisonIndex.Value = 0;
      local_1108.PackageName.Number = 0;
      local_1108.HeaderExtension = Unspecified;
      pFVar11 = ::FName::ToString((FName *)this_00,&local_10e8);
      EVar6 = FPackageName::InternalDoesPackageExistEx(pFVar11,Any,false,&local_1108);
      if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
      }
      if ((EVar6 != None) && (EVar7 = FPackagePath::GetHeaderExtension(&local_1108), EVar7 == Asset)
         ) {
        if ((this_00->PackageName != (FName)0x0) && (this_00->AssetName != (FName)0x0)) {
          local_878.Base = local_858;
          local_878.bIsDynamic = false;
          local_878.bIsExternal = false;
          local_878.CurPos = local_858;
          local_878.End = local_42;
          ::FName::ToString(&this_00->AssetName,&local_878);
          local_10b8.Base = local_1098;
          local_10b8.bIsDynamic = false;
          local_10b8.bIsExternal = false;
          local_10b8.CurPos = local_1098;
          local_10b8.End = local_882;
          ::FName::ToString((FName *)this_00,&local_10b8);
          pwVar4 = local_878.Base;
          pwVar3 = local_10b8.Base;
          lVar17 = (longlong)local_878.CurPos - (longlong)local_878.Base;
          iVar15 = (int)((longlong)local_10b8.CurPos - (longlong)local_10b8.Base >> 1);
          local_10f8 = local_10b8.Base;
          local_10d8._12_4_ = uStack_10ec;
          local_10d8.Size = iVar15;
          local_10d8.DataPtr = local_10b8.Base;
          iStack_10f0 = iVar15;
          iVar9 = UE::String::FindLastChar(&local_10d8,L'/',CaseSensitive);
          iVar10 = iVar9 + 1;
          iVar12 = 0x7fffffff;
          if (iVar10 < 0) {
            iVar10 = 0;
            iVar12 = iVar9 + -0x80000000;
          }
          if (iVar15 < iVar10) {
            iVar10 = iVar15;
          }
          iVar9 = iVar15 - iVar10;
          if (iVar12 < iVar15 - iVar10) {
            iVar9 = iVar12;
          }
          iVar12 = 0;
          if (0 < iVar9) {
            iVar12 = iVar9;
          }
          iVar9 = (int)(lVar17 >> 1);
          if (((iVar12 == iVar9) &&
              (((iVar12 == 0 || (iVar9 == 0)) ||
               (iVar10 = FGenericPlatformStricmp::Strnicmp(pwVar3 + iVar10,pwVar4,(longlong)iVar9),
               iVar10 == 0)))) && (iVar12 == iVar9)) {
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
            goto LAB_142b91a85;
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
        }
        if (4 < (byte)LogAssetRegistry._0_1_) {
          FAssetData::GetObjectPathString(this_00,&local_10c8);
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FAssetRegistryConsoleCommands::FindInvalidUAssets(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                      ::__l29::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (local_10c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_10c8.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_142b91a85:
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x68;
    } while ((int)(uVar13 + 1) < (int)local_1110);
  }
  DestructItems<FAssetData,int>(local_1118,(int)local_1110);
  if (local_1118 != (FAssetData *)0x0) {
    FMemory::Free(local_1118);
  }
  return;
}

// GetByClass @ 142b95f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::GetByClass
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  IAssetRegistry *pIVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FAssetData *local_68;
  undefined8 local_60;
  FTopLevelAssetPath local_58;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  FString local_18;
  
  if (param_1->ArrayNum < 1) {
    if (4 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByClass(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      return;
    }
  }
  else {
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar7 = 0;
    local_68 = (FAssetData *)0x0;
    local_60 = 0;
    local_58.PackageName.ComparisonIndex.Value = 0;
    local_58.PackageName.Number = 0;
    local_58.AssetName.ComparisonIndex.Value = 0;
    local_58.AssetName.Number = 0;
    local_48 = *(wchar_t **)pFVar2;
    iVar1 = *(int *)(pFVar2 + 8);
    iStack_40 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_40 = 0;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iStack_40;
    local_38.DataPtr = local_48;
    FTopLevelAssetPath::TrySetPath(&local_58,&local_38);
    pIVar4 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    if (local_58.PackageName == (FName)0x0) {
      if (1 < (byte)LogAssetRegistry._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByClass(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l49::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
    else {
      if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0)
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                                ,0x111,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_28 = local_58.PackageName.ComparisonIndex.Value;
      uStack_24 = local_58.PackageName.Number;
      uStack_20 = local_58.AssetName.ComparisonIndex.Value;
      uStack_1c = local_58.AssetName.Number;
      (**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,&local_28,&local_68,0);
      if (4 < (byte)LogAssetRegistry._0_1_) {
        FTopLevelAssetPath::ToString(&local_58,&local_18);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByClass(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l27::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      if (0 < (int)local_60) {
        do {
          uVar6 = 0;
          if ((int)uVar7 < (int)local_60) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FAssetData::PrintAssetData(local_68 + (int)uVar7);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)local_60);
      }
    }
    DestructItems<FAssetData,int>(local_68,(int)local_60);
    if (local_68 != (FAssetData *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return;
}

// GetByName @ 142b96110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::GetByName
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IAssetRegistry *pIVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  FName local_res10 [3];
  FAssetData *local_28;
  undefined8 local_20;
  FString local_18;
  
  if (param_1->ArrayNum < 1) {
    if (4 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByName(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      return;
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_28 = (FAssetData *)0x0;
    local_20 = 0;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar1;
    }
    ::FName::FName(local_res10,pwVar6);
    pIVar3 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,local_res10[0],&local_28,0,1);
    if (4 < (byte)LogAssetRegistry._0_1_) {
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByName(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    uVar7 = 0;
    if (0 < (int)local_20) {
      do {
        uVar5 = 0;
        if ((int)uVar7 < (int)local_20) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FAssetData::PrintAssetData(local_28 + (int)uVar7);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)local_20);
    }
    DestructItems<FAssetData,int>(local_28,(int)local_20);
    if (local_28 != (FAssetData *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}

// GetByPath @ 142b962b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::GetByPath
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IAssetRegistry *pIVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  FName local_res10 [3];
  ulonglong in_stack_ffffffffffffffc8;
  FAssetData *local_28;
  undefined8 local_20;
  FString local_18;
  
  if (param_1->ArrayNum < 1) {
    if (4 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByPath(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      return;
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_28 = (FAssetData *)0x0;
    local_20 = 0;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar1;
    }
    ::FName::FName(local_res10,pwVar6);
    pIVar3 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((longlong)*pIVar3 + 0x20))
              (pIVar3,local_res10[0],&local_28,0,in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
    if (4 < (byte)LogAssetRegistry._0_1_) {
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByPath(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    uVar7 = 0;
    if (0 < (int)local_20) {
      do {
        uVar5 = 0;
        if ((int)uVar7 < (int)local_20) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FAssetData::PrintAssetData(local_28 + (int)uVar7);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)local_20);
    }
    DestructItems<FAssetData,int>(local_28,(int)local_20);
    if (local_28 != (FAssetData *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}

// GetByTag @ 142b96450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::GetByTag
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FName FVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  IAssetRegistry *pIVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FName *pFVar15;
  uint uVar16;
  wchar_t *pwVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FName *pFVar20;
  int iVar21;
  FName *pFVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  undefined1 auStackY_138 [32];
  FAssetData *local_100;
  undefined8 local_f8;
  uint local_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FSparseArrayAllocationInfo local_a0;
  FName local_90;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_1->ArrayNum < 2) {
    if ((byte)LogAssetRegistry._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByTag(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    return;
  }
  pFVar23 = (param_1->AllocatorInstance).Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  if (*(int *)(pFVar23 + 8) == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = *(wchar_t **)pFVar23;
  }
  local_d0 = ::FName::FName(&local_90,pwVar17);
  if (local_88.NumFreeIndices == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)&local_88,&local_88.Data.ArrayNum,
                       &local_88.Data.ArrayMax);
    if (local_88.AllocationFlags.NumBits == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = (int)(((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU) +
                    (local_88.AllocationFlags.NumBits - 1U)) >> 5;
    }
    uVar11 = local_88.AllocationFlags.NumBits >> 0x1f & 0x1f;
    iVar9 = local_88.AllocationFlags.NumBits + uVar11;
    iVar21 = iVar9 >> 5;
    if (iVar21 == iVar10) {
      local_88.AllocationFlags.NumBits = local_88.AllocationFlags.NumBits + 1U;
    }
    else {
      if (local_88.AllocationFlags.MaxBits < (int)(local_88.AllocationFlags.NumBits + 1U)) {
        uVar16 = local_88.AllocationFlags.MaxBits + 0x1fU >> 5;
        uVar19 = local_88.AllocationFlags.NumBits + 0x20U >> 5;
        if (uVar19 < 5) {
          local_88.AllocationFlags.MaxBits = 4;
        }
        else {
          uVar24 = (ulonglong)uVar19;
          if (uVar16 < 5) {
            uVar16 = 0;
          }
          if (uVar16 == 0) {
            uVar13 = 4;
            if (4 < uVar24) {
              uVar13 = uVar24;
            }
          }
          else {
            uVar13 = ((ulonglong)uVar19 * 3 >> 3) + 0x10 + uVar24;
          }
          uVar12 = FMemory::QuantizeSize(uVar13 * 4,0);
          local_88.AllocationFlags.MaxBits = (int)(uVar12 >> 2);
          if (local_88.AllocationFlags.MaxBits < (int)uVar19) {
            local_88.AllocationFlags.MaxBits = 0x7fffffff;
          }
        }
        local_88.AllocationFlags.MaxBits = local_88.AllocationFlags.MaxBits << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  (&local_88.AllocationFlags,local_88.AllocationFlags.NumBits);
      }
      local_88.AllocationFlags.NumBits = local_88.AllocationFlags.NumBits + 1;
      uVar19 = local_88.AllocationFlags.NumBits >> 0x1f & 0x1f;
      uVar16 = local_88.AllocationFlags.NumBits + uVar19;
      iVar10 = (uVar16 & 0x1f) - uVar19;
      if (iVar10 != 0) {
        FVar18 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
        if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uint *)((longlong)FVar18 + (longlong)((int)uVar16 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
      }
    }
    FVar18 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
    if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    puVar1 = (uint *)((longlong)FVar18 + (longlong)iVar21 * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar11 & 0x1f));
    iVar10 = local_88.FirstFreeIndex;
  }
  else {
    local_88.NumFreeIndices = local_88.NumFreeIndices + -1;
    iVar10 = *(int *)(local_88.Data.AllocatorInstance.Data +
                     (longlong)local_88.FirstFreeIndex * 0x20 + 4);
    iVar8 = local_88.FirstFreeIndex;
    if (local_88.NumFreeIndices != 0) {
      *(undefined4 *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x20) = 0xffffffff;
    }
  }
  local_88.FirstFreeIndex = iVar10;
  pFVar15 = local_d0;
  pFVar20 = (FName *)0x0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_88,&local_a0,iVar8);
  pFVar22 = pFVar20;
  if (local_a0.Pointer != (FName *)0x0) {
    *(FName *)local_a0.Pointer = *pFVar15;
    ::FString::FString((FString *)((longlong)local_a0.Pointer + 8),(FString *)(pFVar23 + 0x10));
    (((FName *)((longlong)local_a0.Pointer + 0x18))->ComparisonIndex).Value = 0xffffffff;
    pFVar22 = local_a0.Pointer;
  }
  FVar2 = *pFVar22;
  uVar11 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar16 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
  uVar19 = 1;
  if (3 < uVar16) {
    uVar24 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar16 < 1) || ((int)uVar19 <= (int)local_40)) {
    uVar11 = local_40 - 1 & FVar2.Number + uVar11;
    pFVar22[3].Number = uVar11;
    FVar14.Data = local_50;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FVar14.Data = local_48.Data;
    }
    uVar24 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
    pFVar22[3].ComparisonIndex.Value = *(uint *)(FVar14.Data + uVar24 * 4);
    *(int *)(FVar14.Data + uVar24 * 4) = local_a0.Index;
    goto LAB_142b96976;
  }
  local_40 = uVar19;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar19 != 0) {
    uVar11 = uVar19;
    if (uVar19 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_142b96797;
      }
    }
    else {
LAB_142b96797:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar11,4);
    }
    if (0 < (int)uVar19) {
      uVar24 = (ulonglong)uVar19;
      pFVar15 = pFVar20;
      do {
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar13 = (ulonglong)pFVar15 & (longlong)(int)uVar19 - 1U;
        pFVar15 = (FName *)((longlong)&(pFVar15->ComparisonIndex).Value + 1);
        *(undefined4 *)(FVar14.Data + uVar13 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_e8 = &local_88.AllocationFlags;
    local_f0 = 0;
    uStack_ec = 1;
    uStack_dc = 0;
    uStack_d8 = 0;
    pFVar15 = pFVar20;
    if (local_88.AllocationFlags.NumBits != 0) {
      FVar18 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar11 = *(uint *)FVar18;
      pFVar22 = pFVar20;
      while (uVar11 == 0) {
        uStack_d8 = (int)pFVar22 + 0x20;
        pFVar22 = (FName *)(ulonglong)uStack_d8;
        iVar8 = (int)pFVar15;
        local_f0 = iVar8 + 1;
        pFVar15 = (FName *)(ulonglong)local_f0;
        if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                 ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_f0) goto LAB_142b968a1;
        uVar11 = *(uint *)((uchar *)((longlong)FVar18 + 4) + (longlong)iVar8 * 4);
      }
      uStack_ec = -uVar11 & uVar11;
      uVar24 = (ulonglong)uStack_ec * 2 + 1;
      lVar4 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_d0 = (FName *)CONCAT44(local_d0._4_4_,(int)lVar4);
      uStack_dc = (int)lVar4 + -1 + uStack_d8;
      pFVar15 = (FName *)(ulonglong)uStack_dc;
      if (local_88.AllocationFlags.NumBits < (int)uStack_dc) {
LAB_142b968a1:
        pFVar15 = (FName *)(ulonglong)(uint)local_88.AllocationFlags.NumBits;
        uStack_dc = local_88.AllocationFlags.NumBits;
      }
    }
    local_e0 = 0xffffffff;
    local_c8 = &local_88;
    local_c0._padding_ = CONCAT44(uStack_ec,local_f0);
    local_c0.CurrentBitIndex = uStack_dc;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_d4;
    local_c0.BaseBitIndex = uStack_d8;
    local_c0.Array = pTStack_e8;
    if ((int)pFVar15 < local_88.AllocationFlags.NumBits) {
      do {
        pFVar23 = (local_c8->Data).AllocatorInstance.Data + (longlong)(int)pFVar15 * 0x20;
        uVar3 = *(undefined8 *)pFVar23;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar11 = local_40 - 1 & uVar11 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(pFVar23 + 0x1c) = uVar11;
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar24 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(pFVar23 + 0x18) = *(undefined4 *)(FVar14.Data + uVar24 * 4);
        *(int *)(FVar14.Data + uVar24 * 4) = (int)pFVar15;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        pFVar15 = (FName *)(ulonglong)(uint)local_c0.CurrentBitIndex;
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
LAB_142b96976:
  pIVar6 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  local_100 = (FAssetData *)0x0;
  local_f8 = 0;
  if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                         ,0x111,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,&local_88,&local_100);
  if (4 < (byte)LogAssetRegistry._0_1_) {
    if ((param_1->ArrayNum < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetByTag(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l24::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  if (0 < (int)local_f8) {
    do {
      uVar16 = (uint)pFVar20;
      uVar11 = 0;
      if ((int)uVar16 < (int)local_f8) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FAssetData::PrintAssetData(local_100 + (int)uVar16);
      pFVar20 = (FName *)(ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < (int)local_f8);
  }
  DestructItems<FAssetData,int>(local_100,(int)local_f8);
  if (local_100 != (FAssetData *)0x0) {
    FMemory::Free(local_100);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_88);
  return;
}

// GetDependencies @ 142b96cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::GetDependencies
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IAssetRegistry *pIVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  longlong local_80;
  void *local_78;
  undefined8 local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  undefined2 local_30 [8];
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->ArrayNum < 1) {
    if (4 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetDependencies(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar1;
    }
    ::FName::FName(&local_68,pwVar8);
    pIVar3 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    uVar9 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_88 = local_30;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_14 = 1;
    local_30[0] = 0;
    cVar5 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3,local_68,&local_78,1);
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    if (cVar5 == '\0') {
      if (4 < (byte)LogAssetRegistry._0_1_) {
        ::FName::ToString(&local_68,&local_40);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetDependencies(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l67::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (4 < (byte)LogAssetRegistry._0_1_) {
        ::FName::ToString(&local_68,&local_60);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetDependencies(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l27::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      iVar7 = (int)local_70;
      for (; (-1 < (int)uVar9 && ((int)uVar9 < iVar7)); uVar9 = uVar9 + 1) {
        if (4 < (byte)LogAssetRegistry._0_1_) {
          uVar6 = 0;
          if ((int)uVar9 < iVar7) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_80 = (longlong)iVar7;
            local_88 = (undefined2 *)(longlong)(int)uVar9;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          ::FName::ToString((FName *)((longlong)local_78 + (longlong)(int)uVar9 * 8),&local_50);
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetDependencies(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                      ::__l47::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          iVar7 = (int)local_70;
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  return;
}

// GetReferencers @ 142b98910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::GetReferencers
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IAssetRegistry *pIVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  longlong local_80;
  void *local_78;
  undefined8 local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  undefined2 local_30 [8];
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->ArrayNum < 1) {
    if (4 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetReferencers(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar1;
    }
    ::FName::FName(&local_68,pwVar8);
    pIVar3 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    uVar9 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_88 = local_30;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_14 = 1;
    local_30[0] = 0;
    cVar5 = (**(code **)((longlong)*pIVar3 + 0xf0))(pIVar3,local_68,&local_78,1);
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    if (cVar5 == '\0') {
      if (4 < (byte)LogAssetRegistry._0_1_) {
        ::FName::ToString(&local_68,&local_40);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetReferencers(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l67::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (4 < (byte)LogAssetRegistry._0_1_) {
        ::FName::ToString(&local_68,&local_60);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetReferencers(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l27::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      iVar7 = (int)local_70;
      for (; (-1 < (int)uVar9 && ((int)uVar9 < iVar7)); uVar9 = uVar9 + 1) {
        if (4 < (byte)LogAssetRegistry._0_1_) {
          uVar6 = 0;
          if ((int)uVar9 < iVar7) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_80 = (longlong)iVar7;
            local_88 = (undefined2 *)(longlong)(int)uVar9;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          ::FName::ToString((FName *)((longlong)local_78 + (longlong)(int)uVar9 * 8),&local_50);
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FAssetRegistryConsoleCommands::GetReferencers(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                      ::__l47::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          iVar7 = (int)local_70;
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  return;
}

// ScanPath @ 142ba8ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

void __thiscall
FAssetRegistryConsoleCommands::ScanPath
          (FAssetRegistryConsoleCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  IAssetRegistry *pIVar4;
  bool bVar5;
  bool bVar6;
  EPackageLocationFilter EVar7;
  bool bVar8;
  int iVar9;
  IFileManager *pIVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FName this_00;
  char cVar13;
  longlong lVar14;
  char cVar15;
  FName FVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char local_res18;
  undefined1 local_res20 [8];
  FString local_148;
  FPackagePath local_138;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  uint local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  this_00 = (FName)(param_1->AllocatorInstance).Data;
  bVar3 = false;
  bVar2 = false;
  bVar6 = false;
  bVar8 = false;
  cVar13 = '\0';
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  cVar15 = '\0';
  local_108 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_108;
  bVar19 = false;
  local_res18 = '\0';
  bVar18 = false;
  FVar16 = (FName)(uVar11 * 0x10 + (longlong)this_00);
  local_138.PackageName = FVar16;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (this_00 == FVar16) break;
    bVar5 = ::FString::StartsWith((FString *)this_00,L"-",1,IgnoreCase);
    if (bVar5) {
      if (cVar13 == '\0') {
        ::FString::FString(&local_d0,L"-forcerescan");
        bVar8 = true;
        iVar9 = *(int *)((longlong)this_00 + 8);
        if (iVar9 == local_d0.Data.ArrayNum) {
          if (iVar9 < 2) goto LAB_142ba8fbe;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)this_00,(wchar_t *)local_d0.Data.AllocatorInstance.Data);
          bVar5 = iVar9 == 0;
        }
        else {
          bVar5 = iVar9 + local_d0.Data.ArrayNum == 1;
        }
        if (bVar5) goto LAB_142ba8fbe;
        cVar13 = '\0';
      }
      else {
LAB_142ba8fbe:
        cVar13 = '\x01';
      }
      if ((bVar8) &&
         (bVar8 = false, local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      bVar5 = bVar6;
      if (cVar15 == '\0') {
        ::FString::FString(&local_c0,L"-ignoreDenyLists");
        bVar6 = true;
        iVar9 = *(int *)((longlong)this_00 + 8);
        bVar5 = true;
        if (iVar9 == local_c0.Data.ArrayNum) {
          if (iVar9 < 2) goto LAB_142ba9027;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)this_00,(wchar_t *)local_c0.Data.AllocatorInstance.Data);
          bVar17 = iVar9 == 0;
        }
        else {
          bVar17 = iVar9 + local_c0.Data.ArrayNum == 1;
        }
        if (bVar17) goto LAB_142ba9027;
        cVar15 = '\0';
      }
      else {
LAB_142ba9027:
        bVar6 = bVar5;
        cVar15 = '\x01';
      }
      if ((bVar6) &&
         (bVar6 = false, local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = bVar2;
      if (bVar18) {
LAB_142ba9089:
        bVar2 = bVar5;
        bVar18 = true;
      }
      else {
        ::FString::FString(&local_b0,L"-asdir");
        bVar2 = true;
        iVar9 = *(int *)((longlong)this_00 + 8);
        bVar5 = true;
        if (iVar9 == local_b0.Data.ArrayNum) {
          if (iVar9 < 2) goto LAB_142ba9089;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)this_00,(wchar_t *)local_b0.Data.AllocatorInstance.Data);
          bVar18 = iVar9 == 0;
        }
        else {
          bVar18 = iVar9 + local_b0.Data.ArrayNum == 1;
        }
        if (bVar18) goto LAB_142ba9089;
        bVar18 = false;
      }
      if ((bVar2) &&
         (bVar2 = false, local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      bVar5 = bVar3;
      if (bVar19) {
LAB_142ba90eb:
        bVar3 = bVar5;
        bVar19 = true;
      }
      else {
        ::FString::FString(&local_a0,L"-asfile");
        bVar3 = true;
        iVar9 = *(int *)((longlong)this_00 + 8);
        bVar5 = true;
        if (iVar9 == local_a0.Data.ArrayNum) {
          if (iVar9 < 2) goto LAB_142ba90eb;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)this_00,(wchar_t *)local_a0.Data.AllocatorInstance.Data);
          bVar19 = iVar9 == 0;
        }
        else {
          bVar19 = iVar9 + local_a0.Data.ArrayNum == 1;
        }
        if (bVar19) goto LAB_142ba90eb;
        bVar19 = false;
      }
      local_res18 = cVar13;
      if ((!bVar3) ||
         (bVar3 = false, local_a0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0))
      goto LAB_142ba9193;
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      this_00 = (FName)((longlong)this_00 + 0x10);
      uVar11 = (ulonglong)local_108;
    }
    else {
      if ((FName)&local_148 != this_00) {
        iVar9 = *(int *)((longlong)this_00 + 8);
        _Src = *(void **)this_00;
        local_148.Data.ArrayNum = iVar9;
        cVar13 = local_res18;
        if ((iVar9 == 0) && (local_148.Data.ArrayMax == 0)) {
          local_148.Data.ArrayNum = 0;
          local_148.Data.ArrayMax = 0;
          FVar16 = local_138.PackageName;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,local_148.Data.ArrayMax,(ForAnyElementType *)&local_148,iVar9,
                     &local_148.Data.ArrayMax);
          FVar16 = local_138.PackageName;
          if (iVar9 != 0) {
            memcpy(local_148.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
            FVar16 = local_138.PackageName;
          }
        }
      }
LAB_142ba9193:
      this_00 = (FName)((longlong)this_00 + 0x10);
      uVar11 = (ulonglong)local_108;
    }
  }
  if (local_148.Data.ArrayNum < 2) {
    if (4 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAssetRegistryConsoleCommands::ScanPath(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    goto LAB_142ba954e;
  }
  if (bVar18) goto LAB_142ba941c;
  if (bVar19) {
LAB_142ba92e8:
    pIVar4 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12.Data = local_148.Data.AllocatorInstance.Data;
    lVar14 = (longlong)local_148.Data.ArrayNum;
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pcVar1 = *(code **)((longlong)*pIVar4 + 0x220);
    local_100.Data.ArrayNum = local_148.Data.ArrayNum;
    if (local_148.Data.ArrayNum == 0) {
      local_100.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                 local_148.Data.ArrayNum,&local_100.Data.ArrayMax);
      memcpy(local_100.Data.AllocatorInstance.Data,FVar12.Data,lVar14 * 2);
    }
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_128,1,&local_11c);
    ConstructItems<FString,FString,int>(local_128.Data,&local_100,1);
    (*pcVar1)(pIVar4,&local_128,local_res18);
    DestructItems<FString,int>((FString *)local_128.Data,local_120);
    FVar12.Data = local_100.Data.AllocatorInstance.Data;
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
      FVar12.Data = local_100.Data.AllocatorInstance.Data;
    }
  }
  else {
    local_88 = local_148.Data.AllocatorInstance.Data;
    iStack_80 = local_148.Data.ArrayNum + -1;
    bVar8 = true;
    local_58._12_4_ = uStack_7c;
    local_58.Size = iStack_80;
    local_58.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
    bVar6 = FPackageName::IsValidLongPackageName(&local_58,false,(EErrorCode *)0x0);
    if (!bVar6) {
      pIVar10 = IFileManager::Get();
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_148.Data.ArrayNum != 0) {
        FVar12.Data = local_148.Data.AllocatorInstance.Data;
      }
      cVar13 = (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,FVar12.Data);
      if (cVar13 == '\0') goto LAB_142ba941c;
      goto LAB_142ba92e8;
    }
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    ::FString::FString(&local_78,L"");
    bVar6 = FPackageName::TryConvertLongPackageNameToFilename(&local_148,&local_e0,&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      local_68 = local_e0.Data.AllocatorInstance.Data;
      iStack_60 = local_e0.Data.ArrayNum + -1;
      if (local_e0.Data.ArrayNum == 0) {
        iStack_60 = 0;
      }
      local_48._12_4_ = uStack_5c;
      local_48.Size = iStack_60;
      local_48.DataPtr = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
      FPackagePath::FromLocalPath(&local_138,&local_48);
      EVar7 = FPackageName::InternalDoesPackageExistEx(&local_138,Any,false,&local_138);
      bVar8 = true;
      if (EVar7 != None) {
        bVar8 = false;
      }
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (!bVar8) goto LAB_142ba92e8;
LAB_142ba941c:
    pIVar4 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12.Data = local_148.Data.AllocatorInstance.Data;
    lVar14 = (longlong)local_148.Data.ArrayNum;
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pcVar1 = *(code **)((longlong)*pIVar4 + 0x218);
    local_f0.Data.ArrayNum = local_148.Data.ArrayNum;
    if (local_148.Data.ArrayNum == 0) {
      local_f0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,
                 local_148.Data.ArrayNum,&local_f0.Data.ArrayMax);
      memcpy(local_f0.Data.AllocatorInstance.Data,FVar12.Data,lVar14 * 2);
    }
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_118,1,&local_10c);
    ConstructItems<FString,FString,int>(local_118.Data,&local_f0,1);
    (*pcVar1)(pIVar4,&local_118,local_res18,cVar15);
    DestructItems<FString,int>((FString *)local_118.Data,local_110);
    FVar12.Data = local_f0.Data.AllocatorInstance.Data;
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
      FVar12.Data = local_f0.Data.AllocatorInstance.Data;
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
LAB_142ba954e:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

