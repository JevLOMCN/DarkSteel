// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FHybridPackageStoreBackend @ 141f21930

FHybridPackageStoreBackend * __thiscall
FHybridPackageStoreBackend::FHybridPackageStoreBackend
          (FHybridPackageStoreBackend *this,TSharedPtr<IPackageStoreBackend,1> *param_1,
          TSharedPtr<IPackageStoreBackend,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FHybridPackageStoreBackend__6B_;
  (this->LoosePackageStore).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->LoosePackageStore).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->CookedPackageStore).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->CookedPackageStore).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// BeginRead @ 141f29670

void __thiscall FHybridPackageStoreBackend::BeginRead(FHybridPackageStoreBackend *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->LoosePackageStore).Object == (IPackageStoreBackend *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*(this->LoosePackageStore).Object + 0x18))();
  if ((this->CookedPackageStore).Object == (IPackageStoreBackend *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f296e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->CookedPackageStore).Object + 0x18))();
  return;
}

// EndRead @ 141f2e340

void __thiscall FHybridPackageStoreBackend::EndRead(FHybridPackageStoreBackend *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->LoosePackageStore).Object == (IPackageStoreBackend *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*(this->LoosePackageStore).Object + 0x20))();
  if ((this->CookedPackageStore).Object == (IPackageStoreBackend *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f2e3b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->CookedPackageStore).Object + 0x20))();
  return;
}

// ForceLoadPackageAsLoose @ 141f2fc80

void __cdecl FHybridPackageStoreBackend::ForceLoadPackageAsLoose(FPackageId param_1)

{
  ulong64 local_res8;
  FPackageId local_res10 [3];
  
  local_res8 = param_1.Id;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Emplace<FPackageId_const_&>
            (&ForcedLoosePackages,local_res10,(bool *)&local_res8);
  return;
}

// GetPackageRedirectInfo @ 141f35350

bool __thiscall
FHybridPackageStoreBackend::GetPackageRedirectInfo
          (FHybridPackageStoreBackend *this,FPackageId param_1,FName *param_2,FPackageId *param_3)

{
  IPackageStoreBackend *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->CookedPackageStore).Object == (IPackageStoreBackend *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->CookedPackageStore).Object;
                    /* WARNING: Could not recover jumptable at 0x000141f353c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1.Id,param_2,param_3);
  return (bool)uVar4;
}

// GetPackageStoreEntry @ 141f354c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

EPackageStoreEntryStatus __thiscall
FHybridPackageStoreBackend::GetPackageStoreEntry
          (FHybridPackageStoreBackend *this,FPackageId param_1,FName param_2,
          FPackageStoreEntry *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FLinkerLoadPackageStoreBackend *this_00;
  IPackageStoreBackend *pIVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  EPackageStoreEntryStatus EVar8;
  IAssetRegistryInterface *pIVar9;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar10;
  ForElementType<FSetElementId> FVar11;
  bool bVar12;
  FName local_res18 [2];
  undefined1 auStackY_1a8 [32];
  FPackagePath local_170;
  FHybridPackageStoreBackend *local_160;
  FPackageStoreEntry local_158;
  undefined2 local_130;
  undefined6 uStack_12e;
  undefined8 uStack_128;
  undefined4 local_120;
  uint uStack_11c;
  undefined8 uStack_118;
  undefined4 local_110;
  uint uStack_10c;
  FString local_108;
  FString local_f8;
  undefined1 local_e8;
  undefined1 local_d7;
  uint local_d4;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  undefined8 uStack_a0;
  void *local_90;
  undefined4 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar12 = -1 < CpuChannel->Enabled;
  local_res18[0] = param_2;
  local_160 = this;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId219,"HybridCookedEditor_GetPackageStoreEntry",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageStore.cpp"
               ,0xdb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId219);
  }
  EVar8 = Missing;
  bVar6 = true;
  if (ForcedLoosePackages.Elements._8_4_ != ForcedLoosePackages.Elements._52_4_) {
    FVar11 = (ForElementType<FSetElementId>)0x154b88548;
    if (ForcedLoosePackages.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar11 = ForcedLoosePackages.Hash.SecondaryData;
    }
    for (iVar7 = *(int *)((longlong)FVar11 +
                         ((ulonglong)(ForcedLoosePackages.HashSize - 1) & param_1.Id & 0xffffffff) *
                         4); iVar7 != -1;
        iVar7 = *(int *)(ForcedLoosePackages.Elements._0_8_ + 8 + (longlong)iVar7 * 0x10)) {
      if (*(ulong64 *)(ForcedLoosePackages.Elements._0_8_ + (longlong)iVar7 * 0x10) == param_1.Id)
      goto LAB_141f35891;
    }
  }
  local_c0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_c0.MaxBits = _UNK_150631d94;
  uStack_a0 = _UNK_150631d98;
  local_e8 = 0;
  local_d7 = 0;
  local_d4 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  pIVar9 = IAssetRegistryInterface::GetPtr();
  iVar7 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9);
  if (iVar7 == 1) {
    bVar6 = true;
    if ((local_d4 & 4) == 0) {
      bVar6 = false;
    }
    goto LAB_141f35754;
  }
  if (iVar7 != 2) goto LAB_141f35754;
  pTVar1 = (this->LoosePackageStore).SharedReferenceCount.ReferenceController;
  this_00 = (FLinkerLoadPackageStoreBackend *)(this->LoosePackageStore).Object;
  local_158.PackageExtension = Unspecified;
  local_158.LoaderType = Zen;
  local_158.ImportedPackageIds.DataPtr = (FPackageId *)0x0;
  local_158.ImportedPackageIds.ArrayNum = 0;
  local_158.ShaderMapHashes.DataPtr = (FSHAHash *)0x0;
  local_158.ShaderMapHashes.ArrayNum = 0;
  local_170.PackageName.ComparisonIndex.Value = 0;
  local_170.PackageName.Number = 0;
  local_170.HeaderExtension = Unspecified;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FLinkerLoadPackageStoreBackend *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    EVar8 = (*pcVar3)();
    return EVar8;
  }
  EVar8 = FLinkerLoadPackageStoreBackend::GetPackageStoreEntryEx
                    (this_00,param_1,local_res18[0],&local_158,&local_170);
  if (EVar8 == Ok) {
    this_01 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_01);
    pcVar3 = *(code **)((longlong)*pIVar10 + 0x98);
    FPackagePath::GetLocalFullPath(&local_170,&local_108);
    cVar5 = (*pcVar3)(pIVar10);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    this = local_160;
    if (cVar5 != '\0') goto LAB_141f35743;
    param_3->PackageExtension = local_158.PackageExtension;
    param_3->LoaderType = local_158.LoaderType;
    *(undefined6 *)&param_3->field_0x2 = local_158._2_6_;
    (param_3->ImportedPackageIds).DataPtr = local_158.ImportedPackageIds.DataPtr;
    *(ulonglong *)&(param_3->ImportedPackageIds).ArrayNum =
         CONCAT44(local_158.ImportedPackageIds._12_4_,local_158.ImportedPackageIds.ArrayNum);
    (param_3->ShaderMapHashes).DataPtr = local_158.ShaderMapHashes.DataPtr;
    *(ulonglong *)&(param_3->ShaderMapHashes).ArrayNum =
         CONCAT44(local_158.ShaderMapHashes._12_4_,local_158.ShaderMapHashes.ArrayNum);
    bVar6 = false;
    EVar8 = Ok;
  }
  else {
LAB_141f35743:
    bVar6 = true;
    EVar8 = Missing;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_141f35754:
  if (5 < (byte)LogPackageStore._0_1_) {
    ::FName::ToString(local_res18,&local_f8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPackageStore);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  uVar4 = local_c8 >> 0x20;
  local_c8 = local_c8 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,&local_d0,0,(int *)((longlong)&local_c8 + 4));
  }
  iVar7 = local_c0.MaxBits;
  uStack_a0 = 0xffffffff;
  local_c0._24_8_ = (ulonglong)(uint)local_c0.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_c0.NumBits = 0;
    local_c0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c0,0);
  }
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (bVar6) {
    if (((this->CookedPackageStore).Object == (IPackageStoreBackend *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    pIVar2 = (this->CookedPackageStore).Object;
    EVar8 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,param_1.Id,local_res18[0],param_3);
  }
  if (EVar8 == Missing) {
LAB_141f35891:
    local_130 = 0x200;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    param_3->PackageExtension = (char)0x200;
    param_3->LoaderType = (char)(0x200 >> 8);
    *(undefined6 *)&param_3->field_0x2 = uStack_12e;
    (param_3->ImportedPackageIds).DataPtr = (FPackageId *)0x0;
    *(ulonglong *)&(param_3->ImportedPackageIds).ArrayNum = (ulonglong)uStack_11c << 0x20;
    (param_3->ShaderMapHashes).DataPtr = (FSHAHash *)0x0;
    *(ulonglong *)&(param_3->ShaderMapHashes).ArrayNum = (ulonglong)uStack_10c << 0x20;
    if (((this->LoosePackageStore).Object == (IPackageStoreBackend *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    pIVar2 = (this->LoosePackageStore).Object;
    EVar8 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,param_1.Id,local_res18[0],param_3);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar8;
}

// GetSupportedLoaders @ 141f36dc0

EPackageLoader __thiscall
FHybridPackageStoreBackend::GetSupportedLoaders(FHybridPackageStoreBackend *this)

{
  return Zen|LinkerLoad;
}

// OnMounted @ 141f3f340

void __thiscall
FHybridPackageStoreBackend::OnMounted
          (FHybridPackageStoreBackend *this,
          TSharedRef<FPackageStoreBackendContext_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

