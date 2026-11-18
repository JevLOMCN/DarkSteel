// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 12

// <lambda_invoker_cdecl> @ 1431a8f70

void __cdecl
`FChunkBackingStore::CreateRequest'::__l2::<lambda_1>::<lambda_invoker_cdecl>(bool param_1)

{
  return;
}

// FChunkBackingStore @ 1431bbc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FChunkBackingStore * __thiscall
FChunkBackingStore::FChunkBackingStore
          (FChunkBackingStore *this,FBuildPatchFileConstructor *param_1,FString *param_2,
          FBackingStoreStats *param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  IFileHandle *pIVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  ulong64 uVar7;
  IFileManager *pIVar8;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar9;
  IFileHandle *pIVar10;
  FText *pFVar11;
  FString *pFVar12;
  ulonglong uVar13;
  int iVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool local_res8 [8];
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  int local_258;
  uint local_254;
  ForAnyElementType local_250;
  int local_248;
  int local_244;
  ForAnyElementType local_240;
  int local_238;
  int local_234;
  ForAnyElementType local_230;
  int local_228;
  int local_224;
  ForAnyElementType local_220;
  int local_218;
  int local_214;
  ForAnyElementType local_210;
  int local_208;
  int local_204;
  ForAnyElementType local_200;
  int local_1f8;
  int local_1f4;
  ForAnyElementType local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0 [2];
  long64 local_1d8;
  long64 local_1d0;
  TSharedPtr<FCulture,1> local_1c8;
  TSharedPtr<FCulture,1> local_1b8;
  TSharedPtr<FCulture,1> local_1a8;
  TSharedPtr<FCulture,1> local_198;
  TSharedPtr<FCulture,1> local_188;
  TSharedPtr<FCulture,1> local_178;
  TSharedPtr<FCulture,1> local_168;
  FString local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FPlatformMemoryStats local_d8;
  
  uVar17 = 0;
  this->ParentConstructor = param_1;
  this->Stats = param_3;
  pFVar1 = &this->BackingStoreFileName;
  *(undefined8 *)&this->StoredChunks = 0;
  *(undefined8 *)&(this->StoredChunks).field_0x8 = 0;
  pFVar12 = &(param_1->Configuration).BackingStoreDirectory;
  *(undefined8 *)&(this->StoredChunks).field_0x20 = 0;
  this->InstallDirectory = param_2;
  this->_padding_ = (longlong)&___7FChunkBackingStore__6B_;
  *(undefined4 *)&(this->StoredChunks).field_0x28 = 0;
  *(undefined4 *)&(this->StoredChunks).field_0x2c = 0x80;
  *(undefined4 *)&(this->StoredChunks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoredChunks).field_0x34 = 0;
  *(undefined8 *)&(this->StoredChunks).field_0x40 = 0;
  *(undefined4 *)&(this->StoredChunks).field_0x48 = 0;
  this->MaxMemoryBytes = 0x40000000;
  this->MaxDiskSpaceBytes = 0x40000000;
  this->AdditionalDiskSpaceHeadroomBytes = 0;
  *(undefined8 *)&this->UsedDiskSpans = 0;
  *(undefined8 *)&(this->UsedDiskSpans).field_0x8 = 0;
  *(undefined8 *)&(this->UsedDiskSpans).field_0x20 = 0;
  this->CurrentMemoryLoad = 0;
  this->PeakMemoryLoad = 0;
  this->ReadCount = 0;
  this->WriteCount = 0;
  this->InstallationFreeSpaceRequired = 0;
  this->BackingStoreMaxEntries = 0;
  this->BackingStoreEntryCount = 0;
  this->BackingStoreUsedSpace = 0;
  this->BackingStoreWastedSpace = 0;
  *(undefined4 *)&(this->UsedDiskSpans).field_0x28 = 0;
  *(undefined4 *)&(this->UsedDiskSpans).field_0x2c = 0x80;
  *(undefined4 *)&(this->UsedDiskSpans).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsedDiskSpans).field_0x34 = 0;
  *(undefined8 *)&(this->UsedDiskSpans).field_0x40 = 0;
  *(undefined4 *)&(this->UsedDiskSpans).field_0x48 = 0;
  (this->FreeDiskSpans).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeDiskSpans).ArrayNum = 0;
  (this->FreeDiskSpans).ArrayMax = 0;
  (this->BackingStoreFileHandle).Ptr = (IFileHandle *)0x0;
  local_254 = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackingStoreFileName).Data.ArrayNum = 0;
  (this->BackingStoreFileName).Data.ArrayMax = 0;
  pFVar6 = ::operator/(&local_158,pFVar12,L"backingstore");
  if (pFVar1 != pFVar6) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BackingStoreFileName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->BackingStoreFileName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  local_res8[0] = true;
  FConfigCacheIni::GetBool
            (GConfig,L"BuildPatchServices",L"bEnableDiskOverflowStore",local_res8,&GEngineIni);
  if ((this->ParentConstructor->Configuration).bInstallToMemory != false) {
    if (3 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    local_res8[0] = false;
  }
  local_1d8 = 0;
  FConfigCacheIni::GetInt64
            (GConfig,L"BuildPatchServices",L"DiskOverflowStoreLimitMB",&local_1d8,&GEngineIni);
  if (local_1d8 < 0) {
    uVar7 = 0x7fffffffffffffff;
  }
  else {
    uVar7 = local_1d8 << 0x14;
  }
  this->MaxDiskSpaceBytes = uVar7;
  local_1d0 = 0;
  FConfigCacheIni::GetInt64
            (GConfig,L"BuildPatchServices",L"DiskOverflowStoreAdditionalHeadroomMB",&local_1d0,
             &GEngineIni);
  if (-1 < local_1d0) {
    this->AdditionalDiskSpaceHeadroomBytes = local_1d0 << 0x14;
  }
  if (local_res8[0] != false) {
    pIVar8 = IFileManager::Get();
    if ((param_1->Configuration).BackingStoreDirectory.Data.ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar8 + 0x60))(pIVar8,pwVar15);
    this_00 = FPlatformFileManager::Get();
    pIVar9 = FPlatformFileManager::GetPlatformFile(this_00);
    if ((this->BackingStoreFileName).Data.ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    pIVar10 = (IFileHandle *)(**(code **)((longlong)*pIVar9 + 0x110))(pIVar9,pwVar15,0,1);
    pIVar3 = (this->BackingStoreFileHandle).Ptr;
    if ((pIVar3 != pIVar10) &&
       ((this->BackingStoreFileHandle).Ptr = pIVar10, pIVar3 != (IFileHandle *)0x0)) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  if ((this->BackingStoreFileHandle).Ptr == (IFileHandle *)0x0) {
    if (2 < (byte)LogBuildPatchServices._0_1_) {
      if (local_res8[0] != false) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                    ::__l38::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      if (2 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                    ::__l60::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
    }
    this->MaxDiskSpaceBytes = 0;
  }
  if (3 < (byte)LogBuildPatchServices._0_1_) {
    local_1c8.Object = (FCulture *)0x0;
    local_1c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = FText::AsNumber(&local_148,this->AdditionalDiskSpaceHeadroomBytes,
                              (FNumberFormattingOptions *)0x0,&local_1c8);
    pFVar12 = FText::ToString(pFVar11);
    local_240.Data = (FScriptContainerElement *)0x0;
    local_238 = (pFVar12->Data).ArrayNum;
    lVar16 = (longlong)local_238;
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (local_238 == 0) {
      local_234 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_238,0,&local_240,local_238,&local_234);
      memcpy(local_240.Data,pFVar2,lVar16 * 2);
    }
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
    local_1b8.Object = (FCulture *)0x0;
    local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = FText::AsNumber(&local_138,this->MaxDiskSpaceBytes,(FNumberFormattingOptions *)0x0,
                              &local_1b8);
    pFVar12 = FText::ToString(pFVar11);
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = (pFVar12->Data).ArrayNum;
    lVar16 = (longlong)local_248;
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (local_248 == 0) {
      local_244 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_248,0,&local_250,local_248,&local_244);
      memcpy(local_250.Data,pFVar2,lVar16 * 2);
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
    UE::Logging::Private::BasicLog<4>
              (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                ::__l78::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    if (local_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data);
    }
  }
  bVar4 = FConfigCacheIni::GetInt
                    (GConfig,L"Portal.BuildPatch",L"ChunkStoreMemorySize",local_1e0,&GEngineIni);
  if (bVar4) {
    if (2 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                  ::__l100::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    iVar14 = 0;
    if (0 < local_1e0[0]) {
      iVar14 = local_1e0[0];
    }
    uVar17 = (longlong)iVar14 << 0x14;
  }
  local_res18 = (FScriptContainerElement *)((ulonglong)local_res18._4_4_ << 0x20);
  local_res20 = (FScriptContainerElement *)((ulonglong)local_res20._4_4_ << 0x20);
  bVar4 = FConfigCacheIni::GetInt
                    (GConfig,L"Portal.BuildPatch",L"CloudChunkStoreMemorySize",(int *)&local_res18,
                     &GEngineIni);
  bVar5 = FConfigCacheIni::GetInt
                    (GConfig,L"Portal.BuildPatch",L"InstallChunkStoreMemorySize",(int *)&local_res20
                     ,&GEngineIni);
  if ((bVar4) || (bVar5)) {
    if ((2 < (byte)LogBuildPatchServices._0_1_) &&
       (UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                    ::__l121::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
       2 < (byte)LogBuildPatchServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,FBuildPatchFileConstructor::FChunkBackingStore::FBackingStoreStats&___ptr64)___ptr64'
                  ::L::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    iVar14 = 0;
    if (0 < (int)local_res20 + (int)local_res18) {
      iVar14 = (int)local_res20 + (int)local_res18;
    }
    uVar17 = (longlong)iVar14 << 0x14;
  }
  local_258 = 0;
  bVar4 = FConfigCacheIni::GetInt
                    (GConfig,L"Portal.BuildPatch",L"ChunkStoreMemorySizeMB",&local_258,&GEngineIni);
  if (bVar4) {
    if (local_258 < 0) {
      uVar17 = 0xffffffffffffffff;
    }
    else {
      uVar17 = (longlong)local_258 << 0x14;
    }
  }
  local_res10[0] = 2000;
  bVar4 = FConfigCacheIni::GetInt
                    (GConfig,L"Portal.BuildPatch",L"ChunkStoreMemoryHeadRoomMB",local_res10,
                     &GEngineIni);
  if (bVar4) {
    if (local_res10[0] < 0) {
      local_res10[0] = -1;
    }
    else if (local_res10[0] < 500) {
      if (2 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                    ::__l175::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      local_res10[0] = 500;
    }
  }
  FWindowsPlatformMemory::GetStats(&local_d8);
  uVar13 = uVar17;
  if (-1 < local_res10[0]) {
    if ((ulonglong)((longlong)local_res10[0] * 0x100000) < (ulonglong)local_d8._padding_) {
      uVar13 = local_d8._padding_ + (longlong)local_res10[0] * -0x100000;
    }
    else if ((ulonglong)local_d8._padding_ < uVar17) {
      uVar13 = local_d8._padding_;
    }
    if ((uVar17 != 0xffffffffffffffff) && (uVar13 < uVar17)) {
      uVar13 = uVar17;
    }
  }
  if (uVar13 == 0xffffffffffffffff) {
    if (3 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                  ::__l212::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
  }
  else if (3 < (byte)LogBuildPatchServices._0_1_) {
    local_1a8.Object = (FCulture *)0x0;
    local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = FText::AsNumber(&local_128,local_d8._padding_,(FNumberFormattingOptions *)0x0,
                              &local_1a8);
    pFVar12 = FText::ToString(pFVar11);
    local_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e8 = (pFVar12->Data).ArrayNum;
    lVar16 = (longlong)local_1e8;
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (local_1e8 == 0) {
      local_1e4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1e8,0,&local_1f0,local_1e8,&local_1e4);
      memcpy(local_1f0.Data,pFVar2,lVar16 * 2);
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
    local_res20 = (FScriptContainerElement *)L"";
    if (local_1e8 != 0) {
      local_res20 = local_1f0.Data;
    }
    local_198.Object = (FCulture *)0x0;
    local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = FText::AsNumber(&local_118,local_d8._padding_,(FNumberFormattingOptions *)0x0,
                              &local_198);
    pFVar12 = FText::ToString(pFVar11);
    local_200.Data = (FScriptContainerElement *)0x0;
    local_1f8 = (pFVar12->Data).ArrayNum;
    lVar16 = (longlong)local_1f8;
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (local_1f8 == 0) {
      local_1f4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f8,0,&local_200,local_1f8,&local_1f4);
      memcpy(local_200.Data,pFVar2,lVar16 * 2);
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    local_188.Object = (FCulture *)0x0;
    local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = FText::AsNumber(&local_108,local_d8._padding_,(FNumberFormattingOptions *)0x0,
                              &local_188);
    pFVar12 = FText::ToString(pFVar11);
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = (pFVar12->Data).ArrayNum;
    lVar16 = (longlong)local_208;
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (local_208 == 0) {
      local_204 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_208,0,&local_210,local_208,&local_204);
      memcpy(local_210.Data,pFVar2,lVar16 * 2);
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    if (-1 < local_res10[0]) {
      local_178.Object = (FCulture *)0x0;
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = FText::AsNumber(&local_f8,(longlong)local_res10[0] << 0x14,
                                (FNumberFormattingOptions *)0x0,&local_178);
      pFVar12 = FText::ToString(pFVar11);
      local_220.Data = (FScriptContainerElement *)0x0;
      local_218 = (pFVar12->Data).ArrayNum;
      lVar16 = (longlong)local_218;
      pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
      if (local_218 == 0) {
        local_214 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_218,0,&local_220,local_218,&local_214);
        memcpy(local_220.Data,pFVar2,lVar16 * 2);
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      local_254 = 1;
    }
    local_168.Object = (FCulture *)0x0;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = FText::AsNumber(&local_e8,uVar13,(FNumberFormattingOptions *)0x0,&local_168);
    pFVar12 = FText::ToString(pFVar11);
    local_230.Data = (FScriptContainerElement *)0x0;
    local_228 = (pFVar12->Data).ArrayNum;
    lVar16 = (longlong)local_228;
    local_res18 = (pFVar12->Data).AllocatorInstance.Data;
    if (local_228 == 0) {
      local_224 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_228,0,&local_230,local_228,&local_224);
      memcpy(local_230.Data,local_res18,lVar16 * 2);
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    UE::Logging::Private::BasicLog<4>
              (&`public:___cdecl_FChunkBackingStore::FChunkBackingStore(BuildPatchServices::FBuildPatchFileConstructor*___ptr64,FString_const&___ptr64,BuildPatchServices::FBuildPatchFileConstructor::FBackingStoreStats&___ptr64)___ptr64'
                ::__l232::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    if (local_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data);
    }
    if (((local_254 & 1) != 0) && (local_220.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_220.Data);
    }
    if (local_210.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data);
    }
    if (local_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data);
    }
    if (local_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data);
    }
  }
  this->MaxMemoryBytes = uVar13;
  this->Stats->MemoryLimitBytes = uVar13;
  return this;
}

// CheckNoLocks @ 1431c5b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FChunkBackingStore::CheckNoLocks(FChunkBackingStore *this,bool param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *pTVar8;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  FGuid *this_00;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  char local_138;
  char local_137;
  undefined1 local_136 [6];
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *local_f8;
  FChunkBackingStore *local_f0;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [40];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_168;
  local_137 = param_1;
  local_f0 = this;
  if (CpuChannel->Enabled < 0) {
    local_138 = '\0';
  }
  else {
    local_138 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_FChunkBackingStore::CheckNoLocks(bool)___ptr64'::__l2::
                __CpuProfilerEventSpecId1344,"BackingStore_CheckNoLocks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0x540);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_FChunkBackingStore::CheckNoLocks(bool)___ptr64'::__l2::
               __CpuProfilerEventSpecId1344);
  }
  iVar3 = *(int *)&(this->StoredChunks).field_0x28;
  puVar2 = &(this->StoredChunks).field_0x10;
  local_130 = &this->StoredChunks;
  bVar18 = true;
  iStack_128 = 0;
  uStack_124 = 1;
  local_110 = 0;
  iStack_114 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->StoredChunks).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    local_110 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      iStack_114 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_128) goto LAB_1431c5c6f;
      uVar14 = puVar16[lVar12 + 1];
    }
    uStack_124 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_124 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_100 = (int)lVar12;
    iStack_114 = local_100 + -1 + local_110;
    if (iVar3 < iStack_114) {
      iStack_114 = iVar3;
    }
  }
LAB_1431c5c6f:
  iStack_108 = *(int *)&(this->StoredChunks).field_0x8 - *(int *)&(this->StoredChunks).field_0x34;
  uVar14 = *(uint *)&(this->StoredChunks).field_0x28;
  TStack_e0._padding_ = CONCAT44(uStack_124,iStack_128);
  uStack_118 = 0xffffffff;
  uVar17 = uVar14 & 0xffffffe0;
  TStack_e0.CurrentBitIndex = iStack_114;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_e0._28_4_ = iStack_114;
  TStack_e0.BaseBitIndex = local_110;
  uStack_c0 = CONCAT44(uStack_104,iStack_108);
  local_120 = puVar2;
  iStack_10c = iStack_114;
  local_f8 = local_130;
  local_e8 = local_130;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  pTVar8 = local_f8;
  cVar7 = local_137;
  uVar4 = *(uint *)&(this->StoredChunks).field_0x28;
  if (uVar14 != uVar4) {
    puVar13 = *(undefined1 **)&(this->StoredChunks).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar15) goto LAB_1431c5d90;
      uVar14 = *(uint *)(puVar13 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_1431c5d90:
  while( true ) {
    pTVar9 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FStoredChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_136);
    }
    cVar6 = local_138;
    if (((TStack_e0.CurrentBitIndex == uVar14) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == pTVar8))
    break;
    this_00 = (FGuid *)((longlong)TStack_e0.CurrentBitIndex * 0x38 + *(longlong *)pTVar9);
    if (*(short *)((longlong)&this_00[2].D + 2) != 0) {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        local_b8.Base = local_98;
        local_b8.bIsDynamic = false;
        local_b8.bIsExternal = false;
        local_b8.CurPos = local_98;
        local_b8.End = (wchar_t *)local_48;
        FGuid::AppendString(this_00,&local_b8,DigitsWithHyphensLower);
        if (local_b8.End < local_b8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
        }
        *local_b8.CurPos = L'\0';
        local_148 = L"file completion";
        if (cVar7 != '\0') {
          local_148 = L"harvest";
        }
        UE::Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_FChunkBackingStore::CheckNoLocks(bool)___ptr64'::__l10::
                    LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
      }
      bVar18 = false;
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  bVar10 = false;
  if (bVar18) {
    bVar10 = ConsistencyCheck(local_f0);
  }
  if (cVar6 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// CheckRetirements @ 1431c5ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FChunkBackingStore::CheckRetirements(FChunkBackingStore *this,int param_1)

{
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *this_00;
  FGuid *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  FChunkBackingStore *this_01;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ulong64 uVar12;
  longlong lVar13;
  FStoredChunk *pFVar14;
  int iVar15;
  ForElementType<FGuid> FVar16;
  uint uVar17;
  FStoredChunk *pFVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  ForElementType<FGuid> FVar22;
  undefined1 auStack_258 [32];
  ForElementType<FGuid> local_238;
  ForElementType<FGuid> local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  undefined1 local_208;
  undefined1 local_207 [3];
  int local_204;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *local_200;
  int iStack_1f8;
  uint uStack_1f4;
  undefined1 *local_1f0;
  undefined4 uStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  int local_1cc;
  TBitArray<FDefaultBitArrayAllocator> *local_1c8;
  FChunkBackingStore *local_1c0;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  ForElementType<FGuid> local_188;
  int local_120;
  int local_11c;
  TStringBuilderBase<wchar_t> local_118;
  wchar_t local_f8 [40];
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [40];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_11c = 6;
  this_00 = &this->StoredChunks;
  local_188.SecondaryData = (ForElementType<FGuid>)0x0;
  local_1f0 = &(this->StoredChunks).field_0x10;
  iStack_1f8 = 0;
  local_120 = 0;
  iVar11 = *(int *)&(this->StoredChunks).field_0x28;
  uStack_1f4 = 1;
  local_1e0 = 0;
  iStack_1e4 = local_1e0;
  if (iVar11 != 0) {
    puVar20 = *(uint **)&(this->StoredChunks).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_1f0;
    }
    uVar17 = *puVar20;
    local_1e0 = 0;
    iStack_1f8 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_1f8;
      local_1e0 = local_1e0 + 0x20;
      iStack_1f8 = iStack_1f8 + 1;
      iStack_1e4 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f8) goto LAB_1431c5fbf;
      uVar17 = puVar20[lVar13 + 1];
    }
    uStack_1f4 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_1f4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1d0 = (int)lVar13;
    iStack_1e4 = local_1e0 + -1 + local_1d0;
    if (iVar11 < iStack_1e4) {
      iStack_1e4 = iVar11;
    }
  }
LAB_1431c5fbf:
  uVar17 = *(uint *)&(this->StoredChunks).field_0x28;
  uVar21 = uVar17 & 0xffffffe0;
  iStack_1d8 = *(int *)&(this->StoredChunks).field_0x8 - *(int *)&(this->StoredChunks).field_0x34;
  local_1c8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->StoredChunks).field_0x10;
  uStack_1e8 = 0xffffffff;
  TStack_1b0.CurrentBitIndex = iStack_1e4;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  TStack_1b0._padding_ = CONCAT44(uStack_1f4,iStack_1f8);
  iVar15 = (int)uVar17 >> 5;
  TStack_1b0._28_4_ = iStack_1e4;
  TStack_1b0.BaseBitIndex = local_1e0;
  uStack_190 = CONCAT44(uStack_1d4,iStack_1d8);
  local_204 = param_1;
  local_200 = this_00;
  iStack_1dc = iStack_1e4;
  local_1c0 = this;
  local_1b8 = this_00;
  TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1f0;
  if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar7 = local_1c8;
  iVar11 = local_204;
  uVar3 = *(uint *)&(this->StoredChunks).field_0x28;
  if (uVar17 != uVar3) {
    puVar19 = *(undefined1 **)&(this->StoredChunks).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->StoredChunks).field_0x10;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar15;
      uVar21 = uVar21 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1431c60f0;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1cc = (int)lVar13;
    uVar17 = local_1cc + -1 + uVar21;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_1431c60f0:
  while( true ) {
    pTVar8 = local_1b8;
    if (*(int *)(&local_1b8->field_0x0 + 8) - *(int *)(&local_1b8->field_0x0 + 0x34) !=
        (int)uStack_190) {
      local_208 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FStoredChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
    }
    iVar15 = local_120;
    this_01 = local_1c0;
    if (((TStack_1b0.CurrentBitIndex == uVar17) && (TStack_1b0.Array == pTVar7)) &&
       (pTVar8 == this_00)) break;
    FVar16 = (ForElementType<FGuid>)
             (*(longlong *)&pTVar8->field_0x0 + (longlong)TStack_1b0.CurrentBitIndex * 0x38);
    if ((int)*(uint *)((longlong)FVar16 + 0x28) < iVar11) {
      FVar22 = (ForElementType<FGuid>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FGuid>)0x0) {
        FVar22 = local_188.SecondaryData;
      }
      if ((ulonglong)FVar22 <= (ulonglong)FVar16) {
        FVar22 = (ForElementType<FGuid>)&local_188;
        if (local_188.SecondaryData != (ForElementType<FGuid>)0x0) {
          FVar22 = local_188.SecondaryData;
        }
        if ((ulonglong)FVar16 < (ulonglong)((longlong)local_11c * 0x10 + (longlong)FVar22)) {
          local_220 = (longlong)local_120;
          local_218 = 0x10;
          local_230 = (ForElementType<FGuid>)&local_188;
          if (local_188.SecondaryData != (ForElementType<FGuid>)0x0) {
            local_230 = local_188.SecondaryData;
          }
          local_238 = FVar16;
          local_228 = (longlong)local_11c;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
        }
      }
      if (local_120 == local_11c) {
        local_120 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FGuid>_>
                              (0x410,&local_188,&local_11c);
      }
      lVar13 = (longlong)local_120;
      FVar22 = (ForElementType<FGuid>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FGuid>)0x0) {
        FVar22 = local_188.SecondaryData;
      }
      local_120 = local_120 + 1;
      uVar5 = *(undefined8 *)FVar16;
      uVar6 = *(undefined8 *)((longlong)FVar16 + 8);
      pFVar1 = (FGuid *)((longlong)FVar22 + lVar13 * 0x10);
      pFVar1->A = (int)uVar5;
      pFVar1->B = (int)((ulonglong)uVar5 >> 0x20);
      *(undefined8 *)&pFVar1->C = uVar6;
    }
    TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
  }
  FVar16 = (ForElementType<FGuid>)&local_188;
  if (local_188.SecondaryData != (ForElementType<FGuid>)0x0) {
    FVar16 = local_188.SecondaryData;
  }
  FVar22 = (ForElementType<FGuid>)((longlong)local_120 * 0x10 + (longlong)FVar16);
  while( true ) {
    if (local_120 != iVar15) {
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_207);
    }
    if (FVar16 == FVar22) {
      bVar9 = true;
      goto LAB_1431c644c;
    }
    uVar12 = CityHash64((char *)FVar16,0x10);
    iVar11 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FGuid>
                       ((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                         *)this_00,(uint)uVar12,(FGuid *)FVar16);
    pFVar14 = (FStoredChunk *)0x0;
    if (iVar11 != -1) {
      pFVar14 = (FStoredChunk *)((longlong)iVar11 * 0x38 + *(longlong *)&this_00->field_0x0);
    }
    pFVar18 = (FStoredChunk *)&pFVar14->ChunkSize;
    if (pFVar14 == (FStoredChunk *)0x0) {
      pFVar18 = (FStoredChunk *)0x0;
    }
    if ((pFVar18->bBackedByDisk != false) &&
       (bVar9 = ReleaseBackingStoreEntry(this_01,(FGuid *)FVar16,pFVar18), !bVar9))
    goto LAB_1431c6446;
    if (pFVar18->LockCount != 0) break;
    if ((pFVar18->ChunkData).ArrayNum != 0) {
      if (pFVar18->bCommitted == false) {
        if ((byte)LogBuildPatchServices._0_1_ < 2) goto LAB_1431c6446;
        local_118.Base = local_f8;
        local_118.bIsDynamic = false;
        local_118.bIsExternal = false;
        local_118.CurPos = local_f8;
        local_118.End = (wchar_t *)&local_a8;
        FGuid::AppendString((FGuid *)FVar16,&local_118,DigitsWithHyphensLower);
        if (local_118.End < (TStringBuilderBase<wchar_t> *)(local_118.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_118,1);
        }
        *local_118.CurPos = L'\0';
        UE::Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_FChunkBackingStore::CheckRetirements(int)___ptr64'::__l47
                    ::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_118);
        bVar9 = false;
        goto LAB_1431c644c;
      }
      this_01->CurrentMemoryLoad = this_01->CurrentMemoryLoad - (ulonglong)pFVar18->ChunkSize;
    }
    if (*(int *)&(this_01->StoredChunks).field_0x8 != *(int *)&(this_01->StoredChunks).field_0x34) {
      uVar12 = CityHash64((char *)FVar16,0x10);
      TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
      ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                           *)this_00,(uint)uVar12,(FGuid *)FVar16);
    }
    BuildPatchServices::FBuildPatchFileConstructor::SetChunkLocation
              (this_01->ParentConstructor,(FGuid *)FVar16,Retired);
    FVar16 = (ForElementType<FGuid>)((longlong)FVar16 + 0x10);
  }
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    local_a8.bIsDynamic = false;
    local_a8.bIsExternal = false;
    local_a8.Base = local_88;
    local_a8.CurPos = local_88;
    local_a8.End = (wchar_t *)local_38;
    FGuid::AppendString((FGuid *)FVar16,&local_a8,DigitsWithHyphensLower);
    if (local_a8.End < local_a8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_a8,1);
    }
    *local_a8.CurPos = L'\0';
    UE::Logging::Private::BasicLog<2>
              (&`public:_bool___cdecl_FChunkBackingStore::CheckRetirements(int)___ptr64'::__l23::
                LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
  }
LAB_1431c6446:
  bVar9 = false;
LAB_1431c644c:
  if (local_188.SecondaryData != (ForElementType<FGuid>)0x0) {
    FMemory::Free((void *)local_188.SecondaryData);
  }
  return bVar9;
}

// CommitAndReleaseEntry @ 1431cd570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FChunkBackingStore::CommitAndReleaseEntry(FChunkBackingStore *this,FGuid *param_1)

{
  bool bVar1;
  int iVar2;
  ulong64 uVar3;
  FStaticBasicLogRecord *pFVar4;
  longlong lVar5;
  FStoredChunk *pFVar6;
  undefined1 auStack_b8 [32];
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [40];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                      *)&this->StoredChunks,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x38 + *(longlong *)&this->StoredChunks;
    pFVar6 = (FStoredChunk *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      pFVar6 = (FStoredChunk *)0x0;
    }
    if (pFVar6 != (FStoredChunk *)0x0) {
      if (pFVar6->bCommitted == false) {
        pFVar6->bCommitted = true;
        bVar1 = ReleaseEntryInternal(this,param_1,pFVar6);
        return bVar1;
      }
      if ((byte)LogBuildPatchServices._0_1_ < 2) {
        return false;
      }
      local_98.Base = local_78;
      local_98.bIsDynamic = false;
      local_98.bIsExternal = false;
      local_98.CurPos = local_78;
      local_98.End = (wchar_t *)local_28;
      FGuid::AppendString(param_1,&local_98,DigitsWithHyphensLower);
      if (local_98.End < local_98.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_98,1);
      }
      *local_98.CurPos = L'\0';
      pFVar4 = &`public:_bool___cdecl_FChunkBackingStore::CommitAndReleaseEntry(FGuid_const&___ptr64)___ptr64'
                ::__l9::LOG_Static;
      goto LAB_1431cd6c4;
    }
  }
  if ((byte)LogBuildPatchServices._0_1_ < 2) {
    return false;
  }
  local_98.Base = local_78;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)local_28;
  FGuid::AppendString(param_1,&local_98,DigitsWithHyphensLower);
  if (local_98.End < local_98.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_98,1);
  }
  *local_98.CurPos = L'\0';
  pFVar4 = &`public:_bool___cdecl_FChunkBackingStore::CommitAndReleaseEntry(FGuid_const&___ptr64)___ptr64'
            ::__l29::LOG_Static;
LAB_1431cd6c4:
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogBuildPatchServices);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  return false;
}

// ConsistencyCheck @ 1431cf110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall FChunkBackingStore::ConsistencyCheck(FChunkBackingStore *this)

{
  undefined1 *puVar1;
  TMap<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  longlong lVar10;
  FText *pFVar11;
  FString *pFVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int iVar15;
  ulong64 uVar16;
  uint uVar17;
  ulong64 uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  ulong64 local_1e8;
  ulong64 local_1d8;
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  ForAnyElementType local_190;
  int local_188;
  int local_184;
  ForAnyElementType local_180;
  int local_178;
  int local_174;
  TMap<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  TMap<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  int iStack_118;
  TSharedPtr<FCulture,1> local_110;
  TSharedPtr<FCulture,1> local_100;
  TSharedPtr<FCulture,1> local_f0;
  TSharedPtr<FCulture,1> local_e0;
  TSharedPtr<FCulture,1> local_d0;
  TSharedPtr<FCulture,1> local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60 [2];
  
  puVar1 = &(this->UsedDiskSpans).field_0x10;
  local_1d8 = 0;
  iVar4 = *(int *)&(this->UsedDiskSpans).field_0x28;
  pTVar2 = &this->UsedDiskSpans;
  iStack_168 = 0;
  local_150 = 0;
  uStack_164 = 1;
  iStack_154 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->UsedDiskSpans).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar10 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      iStack_154 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_168) goto LAB_1431cf1d0;
      uVar17 = puVar20[lVar10 + 1];
    }
    uStack_164 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_164 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_154 = local_150 + -1 + local_res18;
    if (iVar4 < iStack_154) {
      iStack_154 = iVar4;
    }
  }
LAB_1431cf1d0:
  uVar17 = *(uint *)&(this->UsedDiskSpans).field_0x28;
  uVar21 = uVar17 & 0xffffffe0;
  iStack_148 = *(int *)&(this->UsedDiskSpans).field_0x8 - *(int *)&(this->UsedDiskSpans).field_0x34;
  uStack_158 = 0xffffffff;
  TStack_138._padding_ = CONCAT44(uStack_164,iStack_168);
  TStack_138.CurrentBitIndex = iStack_154;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  local_170 = pTVar2;
  local_160 = puVar1;
  iStack_14c = iStack_154;
  local_140 = pTVar2;
  TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_138.BaseBitIndex = local_150;
  TStack_138._28_4_ = iStack_154;
  iStack_118 = iStack_148;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar19 = *(uint *)&(this->UsedDiskSpans).field_0x28;
  if (uVar17 != uVar19) {
    puVar13 = *(undefined1 **)&(this->UsedDiskSpans).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar15;
      uVar21 = uVar21 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar19;
      if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar15)
      goto LAB_1431cf2d1;
      uVar17 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar17 = (uVar21 - 1) + local_res20;
    if ((int)uVar19 < (int)uVar17) {
      uVar17 = uVar19;
    }
  }
LAB_1431cf2d1:
  uVar18 = 0;
  while( true ) {
    pTVar6 = local_140;
    if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != iStack_118) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_138.CurrentBitIndex == uVar17) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    break;
    lVar10 = *(longlong *)pTVar6;
    lVar14 = (longlong)TStack_138.CurrentBitIndex * 0x30;
    local_1d8 = local_1d8 + *(uint *)(lVar14 + 0x18 + lVar10);
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    uVar18 = uVar18 + (ulonglong)
                      (uint)(*(int *)(lVar14 + 0x14 + lVar10) - *(int *)(lVar14 + 0x10 + lVar10)) *
                      0x20000;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  uVar16 = 0;
  uVar17 = 0;
  local_1e8 = 0;
  bVar7 = true;
  if (0 < (this->FreeDiskSpans).ArrayNum) {
    lVar10 = -8;
    do {
      uVar21 = 0;
      if ((int)uVar17 < (this->FreeDiskSpans).ArrayNum) {
        uVar21 = ~uVar17 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar22 = (this->FreeDiskSpans).AllocatorInstance.Data + lVar10 + 8;
      uVar21 = *(uint *)(pFVar22 + 4);
      uVar19 = *(uint *)pFVar22;
      uVar16 = uVar16 + (ulonglong)(uVar21 - uVar19) * 0x20000;
      if ((ulonglong)(uVar21 - uVar19) == 0) {
        if (1 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                      __l12::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          uVar21 = *(uint *)(pFVar22 + 4);
          uVar19 = *(uint *)pFVar22;
        }
        bVar7 = false;
      }
      if (this->BackingStoreEntryCount < uVar21) {
        if (1 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                      __l33::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          uVar21 = *(uint *)(pFVar22 + 4);
          uVar19 = *(uint *)pFVar22;
        }
        bVar7 = false;
      }
      if (uVar21 < uVar19) {
        if (1 < (byte)LogBuildPatchServices._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                      __l54::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        }
        bVar7 = false;
      }
      if (uVar17 != 0) {
        uVar21 = 0;
        if ((int)(uVar17 - 1) < (this->FreeDiskSpans).ArrayNum) {
          uVar21 = -uVar17 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (*(uint *)pFVar22 == *(uint *)((this->FreeDiskSpans).AllocatorInstance.Data + lVar10 + 4)
           ) {
          if (1 < (byte)LogBuildPatchServices._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                        __l78::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          }
          bVar7 = false;
        }
        uVar21 = 0;
        if ((int)(uVar17 - 1) < (this->FreeDiskSpans).ArrayNum) {
          uVar21 = -uVar17 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (*(uint *)pFVar22 < *(uint *)((this->FreeDiskSpans).AllocatorInstance.Data + lVar10 + 4))
        {
          if (1 < (byte)LogBuildPatchServices._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                        __l99::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          }
          bVar7 = false;
        }
      }
      uVar17 = uVar17 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar17 < (this->FreeDiskSpans).ArrayNum);
    local_1e8 = uVar16;
    if (!bVar7) {
      if ((3 < (byte)LogBuildPatchServices._0_1_) &&
         (UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)
                     &`private:_void___cdecl_FChunkBackingStore::DumpFreeDiskSpans(void)___ptr64'::
                      __l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
         3 < (byte)LogBuildPatchServices._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)
                   &`private:_void___cdecl_FChunkBackingStore::DumpFreeDiskSpans(void)___ptr64'::
                    __l21::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      uVar17 = 0;
      if (0 < (this->FreeDiskSpans).ArrayNum) {
        do {
          if (3 < (byte)LogBuildPatchServices._0_1_) {
            uVar21 = 0;
            if ((int)uVar17 < (this->FreeDiskSpans).ArrayNum) {
              uVar21 = ~uVar17 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            uVar21 = 0;
            if ((int)uVar17 < (this->FreeDiskSpans).ArrayNum) {
              uVar21 = ~uVar17 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)
                       &`private:_void___cdecl_FChunkBackingStore::DumpFreeDiskSpans(void)___ptr64'
                        ::__l41::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (this->FreeDiskSpans).ArrayNum);
      }
    }
  }
  if (((uVar18 != this->BackingStoreWastedSpace + this->BackingStoreUsedSpace) ||
      (local_1d8 != this->BackingStoreUsedSpace)) ||
     ((ulonglong)this->BackingStoreEntryCount * 0x20000 - uVar18 != local_1e8)) {
    if (((1 < (byte)LogBuildPatchServices._0_1_) &&
        (UE::Logging::Private::BasicLog<2>
                   (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                     __l123::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
        1 < (byte)LogBuildPatchServices._0_1_)) &&
       (UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)
                   &`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::N::
                    LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
       1 < (byte)LogBuildPatchServices._0_1_)) {
      local_110.Object = (FCulture *)0x0;
      local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = FText::AsNumber(&local_b0,uVar18,(FNumberFormattingOptions *)0x0,&local_110);
      pFVar12 = FText::ToString(pFVar11);
      local_1d0.Data = (FScriptContainerElement *)0x0;
      local_1c8 = (pFVar12->Data).ArrayNum;
      lVar10 = (longlong)local_1c8;
      pFVar22 = (pFVar12->Data).AllocatorInstance.Data;
      if (local_1c8 == 0) {
        local_1c4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1c8,0,&local_1d0,local_1c8,&local_1c4);
        memcpy(local_1d0.Data,pFVar22,lVar10 * 2);
      }
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::__l159
                  ::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      if (local_1d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      local_100.Object = (FCulture *)0x0;
      local_100.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = FText::AsNumber(&local_a0,uVar18 - local_1d8,(FNumberFormattingOptions *)0x0,
                                &local_100);
      pFVar12 = FText::ToString(pFVar11);
      local_1c0.Data = (FScriptContainerElement *)0x0;
      local_1b8 = (pFVar12->Data).ArrayNum;
      lVar10 = (longlong)local_1b8;
      pFVar22 = (pFVar12->Data).AllocatorInstance.Data;
      if (local_1b8 == 0) {
        local_1b4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1b8,0,&local_1c0,local_1b8,&local_1b4);
        memcpy(local_1c0.Data,pFVar22,lVar10 * 2);
      }
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::__l177
                  ::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
    }
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      local_f0.Object = (FCulture *)0x0;
      local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = FText::AsNumber(&local_90,local_1e8,(FNumberFormattingOptions *)0x0,&local_f0);
      pFVar12 = FText::ToString(pFVar11);
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = (pFVar12->Data).ArrayNum;
      lVar10 = (longlong)local_1a8;
      pFVar22 = (pFVar12->Data).AllocatorInstance.Data;
      if (local_1a8 == 0) {
        local_1a4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a8,0,&local_1b0,local_1a8,&local_1a4);
        memcpy(local_1b0.Data,pFVar22,lVar10 * 2);
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.SharedReferenceCount.ReferenceController);
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::__l195
                  ::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      if ((1 < (byte)LogBuildPatchServices._0_1_) &&
         (UE::Logging::Private::BasicLog<2>
                    (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                      __l213::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
         1 < (byte)LogBuildPatchServices._0_1_)) {
        local_e0.Object = (FCulture *)0x0;
        local_e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar11 = FText::AsNumber(&local_80,
                                  this->BackingStoreWastedSpace + this->BackingStoreUsedSpace,
                                  (FNumberFormattingOptions *)0x0,&local_e0);
        pFVar12 = FText::ToString(pFVar11);
        local_1a0.Data = (FScriptContainerElement *)0x0;
        local_198 = (pFVar12->Data).ArrayNum;
        lVar10 = (longlong)local_198;
        pFVar22 = (pFVar12->Data).AllocatorInstance.Data;
        if (local_198 == 0) {
          local_194 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_198,0,&local_1a0,local_198,&local_194);
          memcpy(local_1a0.Data,pFVar22,lVar10 * 2);
        }
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0.SharedReferenceCount.ReferenceController);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                    __l231::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        if (local_1a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data);
        }
        if (1 < (byte)LogBuildPatchServices._0_1_) {
          local_d0.Object = (FCulture *)0x0;
          local_d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar11 = FText::AsNumber(&local_70,this->BackingStoreWastedSpace,
                                    (FNumberFormattingOptions *)0x0,&local_d0);
          pFVar12 = FText::ToString(pFVar11);
          local_190.Data = (FScriptContainerElement *)0x0;
          local_188 = (pFVar12->Data).ArrayNum;
          lVar10 = (longlong)local_188;
          pFVar22 = (pFVar12->Data).AllocatorInstance.Data;
          if (local_188 == 0) {
            local_184 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_188,0,&local_190,local_188,&local_184);
            memcpy(local_190.Data,pFVar22,lVar10 * 2);
          }
          if (local_70.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d0.SharedReferenceCount.ReferenceController);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                      __l249::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          if (local_190.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data);
          }
          if (1 < (byte)LogBuildPatchServices._0_1_) {
            local_c0.Object = (FCulture *)0x0;
            local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar11 = FText::AsNumber(local_60,((ulonglong)this->BackingStoreEntryCount * 0x20000 -
                                               this->BackingStoreWastedSpace) -
                                               this->BackingStoreUsedSpace,
                                      (FNumberFormattingOptions *)0x0,&local_c0);
            pFVar12 = FText::ToString(pFVar11);
            local_180.Data = (FScriptContainerElement *)0x0;
            local_178 = (pFVar12->Data).ArrayNum;
            lVar10 = (longlong)local_178;
            pFVar22 = (pFVar12->Data).AllocatorInstance.Data;
            if (local_178 == 0) {
              local_174 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_178,0,&local_180,local_178,&local_174);
              memcpy(local_180.Data,pFVar22,lVar10 * 2);
            }
            if (local_60[0].TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0.SharedReferenceCount.ReferenceController);
            UE::Logging::Private::BasicLog<2>
                      (&`private:_bool___cdecl_FChunkBackingStore::ConsistencyCheck(void)___ptr64'::
                        __l267::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
            if (local_180.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Data);
            }
          }
        }
      }
    }
    bVar7 = false;
  }
  return bVar7;
}

// CreateRequest @ 1431d4410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniqueFunction<void___cdecl(bool)> * __thiscall
FChunkBackingStore::CreateRequest
          (FChunkBackingStore *this,TUniqueFunction<void___cdecl(bool)> *__return_storage_ptr__,
          FGuid *param_1,TMemoryView<void> *param_2,void *param_3,
          TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
          *param_4)

{
  IFileHandle *pIVar1;
  TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> *this_00;
  char cVar2;
  int iVar3;
  ulong64 uVar4;
  longlong lVar5;
  FXxHash64 FVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_128 [32];
  void *local_108;
  FReadAccessScope local_f8;
  TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> *local_d8;
  void *local_d0;
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [40];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d0 = param_3;
  local_d8 = param_4;
  bVar10 = -1 < CpuChannel->Enabled;
  local_f8.DestructionSentinel._0_8_ = param_2;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_class_TUniqueFunction<void___cdecl(bool)>___cdecl_FChunkBackingStore::CreateRequest(FGuid_const&___ptr64,TMemoryView<void>,void*___ptr64,TDelegate<void___cdecl(FGuid_const&___ptr64,bool,bool,void*___ptr64),FDefaultDelegateUserPolicy>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1284,"BackingStoreRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0x504);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_class_TUniqueFunction<void___cdecl(bool)>___cdecl_FChunkBackingStore::CreateRequest(FGuid_const&___ptr64,TMemoryView<void>,void*___ptr64,TDelegate<void___cdecl(FGuid_const&___ptr64,bool,bool,void*___ptr64),FDefaultDelegateUserPolicy>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1284);
  }
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FChunkBackingStore::FStoredChunk>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>,FDefaultSetAllocator>
                      *)&this->StoredChunks,(uint)uVar4,param_1);
  if (iVar3 == -1) {
LAB_1431d456a:
    bVar11 = false;
  }
  else {
    lVar5 = (longlong)iVar3 * 0x38 + *(longlong *)&this->StoredChunks;
    lVar8 = lVar5 + 0x10;
    if (lVar5 == 0) {
      lVar8 = 0;
    }
    bVar11 = lVar8 != 0;
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x1d) == '\0')) {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        local_c8.Base = local_a8;
        local_c8.bIsDynamic = false;
        local_c8.bIsExternal = false;
        local_c8.CurPos = local_a8;
        local_c8.End = (wchar_t *)local_58;
        FGuid::AppendString(param_1,&local_c8,DigitsWithHyphensLower);
        if (local_c8.End < local_c8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
        }
        *local_c8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_class_TUniqueFunction<void___cdecl(bool)>___cdecl_FChunkBackingStore::CreateRequest(FGuid_const&___ptr64,TMemoryView<void>,void*___ptr64,TDelegate<void___cdecl(FGuid_const&___ptr64,bool,bool,void*___ptr64),FDefaultDelegateUserPolicy>)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
      }
      goto LAB_1431d456a;
    }
    if (!bVar11) goto LAB_1431d456d;
    uVar4 = CityHash64((char *)param_1,0x10);
    iVar3 = TSet<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>,FDefaultSetAllocator>
                        *)&this->UsedDiskSpans,(uint)uVar4,param_1);
    if (iVar3 == -1) {
LAB_1431d47c7:
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        local_c8.Base = local_a8;
        local_c8.bIsDynamic = false;
        local_c8.bIsExternal = false;
        local_c8.CurPos = local_a8;
        local_c8.End = (wchar_t *)local_58;
        FGuid::AppendString(param_1,&local_c8,DigitsWithHyphensLower);
        if (local_c8.End < local_c8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
        }
        *local_c8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_class_TUniqueFunction<void___cdecl(bool)>___cdecl_FChunkBackingStore::CreateRequest(FGuid_const&___ptr64,TMemoryView<void>,void*___ptr64,TDelegate<void___cdecl(FGuid_const&___ptr64,bool,bool,void*___ptr64),FDefaultDelegateUserPolicy>)___ptr64'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
      }
LAB_1431d4844:
      bVar11 = false;
    }
    else {
      lVar8 = (longlong)iVar3 * 0x30 + *(longlong *)&this->UsedDiskSpans;
      puVar9 = (uint *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        puVar9 = (uint *)0x0;
      }
      if (puVar9 == (uint *)0x0) goto LAB_1431d47c7;
      this->ReadCount = this->ReadCount + 1;
      pIVar1 = (this->BackingStoreFileHandle).Ptr;
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,(ulonglong)*puVar9 << 0x11);
      pIVar1 = (this->BackingStoreFileHandle).Ptr;
      cVar2 = (**(code **)((longlong)*pIVar1 + 0x20))
                        (pIVar1,*(void **)local_f8.DestructionSentinel._0_8_,
                         *(ulong64 *)(local_f8.DestructionSentinel._0_8_ + 8));
      if (cVar2 == '\0') {
        if (1 < (byte)LogBuildPatchServices._0_1_) {
          local_c8.Base = local_a8;
          local_c8.bIsDynamic = false;
          local_c8.bIsExternal = false;
          local_c8.CurPos = local_a8;
          local_c8.End = (wchar_t *)local_58;
          FGuid::AppendString(param_1,&local_c8,DigitsWithHyphensLower);
          if (local_c8.End < local_c8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
          }
          *local_c8.CurPos = L'\0';
          UE::Logging::Private::BasicLog<2>
                    (&`public:_virtual_class_TUniqueFunction<void___cdecl(bool)>___cdecl_FChunkBackingStore::CreateRequest(FGuid_const&___ptr64,TMemoryView<void>,void*___ptr64,TDelegate<void___cdecl(FGuid_const&___ptr64,bool,bool,void*___ptr64),FDefaultDelegateUserPolicy>)___ptr64'
                      ::__l54::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
          bVar11 = false;
          goto LAB_1431d456d;
        }
        goto LAB_1431d4844;
      }
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_virtual_class_TUniqueFunction<void___cdecl(bool)>___cdecl_FChunkBackingStore::CreateRequest(FGuid_const&___ptr64,TMemoryView<void>,void*___ptr64,TDelegate<void___cdecl(FGuid_const&___ptr64,bool,bool,void*___ptr64),FDefaultDelegateUserPolicy>)___ptr64'
                    ::__l74::__CpuProfilerEventSpecId1322,"BSR_Hash",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                   ,0x52a);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_virtual_class_TUniqueFunction<void___cdecl(bool)>___cdecl_FChunkBackingStore::CreateRequest(FGuid_const&___ptr64,TMemoryView<void>,void*___ptr64,TDelegate<void___cdecl(FGuid_const&___ptr64,bool,bool,void*___ptr64),FDefaultDelegateUserPolicy>)___ptr64'
                   ::__l74::__CpuProfilerEventSpecId1322);
      }
      local_f8.DestructionSentinel.Accessor =
           *(FMRSWRecursiveAccessDetector **)(local_f8.DestructionSentinel._0_8_ + 8);
      local_f8.DestructionSentinel._0_8_ = *(void **)local_f8.DestructionSentinel._0_8_;
      FVar6 = FXxHash64::HashBuffer((TMemoryView<void_const_> *)&local_f8);
      if (FVar6.Hash != *(ulong64 *)(puVar9 + 4)) {
        if ((byte)LogBuildPatchServices._0_1_ < 2) {
          bVar11 = false;
        }
        else {
          local_c8.Base = local_a8;
          local_c8.bIsDynamic = false;
          local_c8.bIsExternal = false;
          local_c8.CurPos = local_a8;
          local_c8.End = (wchar_t *)local_58;
          FGuid::AppendString(param_1,&local_c8,DigitsWithHyphensLower);
          if (local_c8.End < local_c8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
          }
          *local_c8.CurPos = L'\0';
          UE::Logging::Private::BasicLog<2>
                    (&`public:_virtual_class_TUniqueFunction<void___cdecl(bool)>___cdecl_FChunkBackingStore::CreateRequest(FGuid_const&___ptr64,TMemoryView<void>,void*___ptr64,TDelegate<void___cdecl(FGuid_const&___ptr64,bool,bool,void*___ptr64),FDefaultDelegateUserPolicy>)___ptr64'
                      ::__l78::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
          bVar11 = false;
        }
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) goto LAB_1431d4574;
    }
  }
LAB_1431d456d:
  puVar9 = &this->Stats->DiskLoadFailureCount;
  *puVar9 = *puVar9 + 1;
LAB_1431d4574:
  this_00 = local_d8;
  plVar7 = (longlong *)0x0;
  puVar9 = &this->Stats->DiskChunkLoadCount;
  *puVar9 = *puVar9 + 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,&local_f8);
  if (*(int *)&this_00->field_0x10 != 0) {
    plVar7 = *(longlong **)&this_00->field_0x8;
  }
  local_108 = local_d0;
  (**(code **)(*plVar7 + 0x60))(plVar7,param_1,0,!bVar11);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f8);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &___7__TFunction_OwnedObject_P6AX_N_Z_00_0A__Function_Private_Core_UE__6B_;
  *(code **)&__return_storage_ptr__->field_0x18 =
       `FChunkBackingStore::CreateRequest'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(bool),void,bool>::Call;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  return __return_storage_ptr__;
}

// GetChunkUnavailableAt @ 1431ddd30

int __thiscall FChunkBackingStore::GetChunkUnavailableAt(FChunkBackingStore *this,FGuid *param_1)

{
  return 0x7fffffff;
}

// PageOut @ 1431eb9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FChunkBackingStore::PageOut(FChunkBackingStore *this,FGuid *param_1)

{
  uint *puVar1;
  IFileHandle *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FStoredChunk *pFVar9;
  int *piVar10;
  ulong64 uVar11;
  FBackingStoreUsedSpan *pFVar12;
  FXxHash64 FVar13;
  uint uVar14;
  ulonglong uVar15;
  ForElementType<unsigned_char> FVar16;
  uint uVar17;
  int iVar18;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStackY_208 [32];
  FScriptContainerElement *local_1c8;
  ulong64 local_1c0;
  TStringBuilderBase<wchar_t> local_1b8;
  wchar_t local_198 [40];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [40];
  ForElementType<unsigned_char> local_d8;
  int local_50 [2];
  ulonglong local_48;
  ulonglong uVar19;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'::
                __l2::__CpuProfilerEventSpecId565,"BackingStore_PageOut",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
               ,0x235);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'::
               __l2::__CpuProfilerEventSpecId565);
  }
  pFVar9 = TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
           ::FindChecked((TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
                          *)&this->StoredChunks,param_1);
  uVar19 = 0;
  uVar17 = 0;
  if (pFVar9->bBackedByDisk != false) {
    (pFVar9->ChunkData).ArrayNum = 0;
    piVar10 = &(pFVar9->ChunkData).ArrayMax;
    if (*piVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)pFVar9,0,piVar10);
    }
    this->CurrentMemoryLoad = this->CurrentMemoryLoad - (ulonglong)pFVar9->ChunkSize;
    BuildPatchServices::FBuildPatchFileConstructor::SetChunkLocation
              (this->ParentConstructor,param_1,DiskOverflow);
    bVar4 = true;
    goto LAB_1431ec157;
  }
  if (6 < (byte)LogBuildPatchServices._0_1_) {
    local_1b8.Base = local_198;
    local_1b8.bIsDynamic = false;
    local_1b8.bIsExternal = false;
    local_1b8.CurPos = local_198;
    local_1b8.End = (wchar_t *)&local_148;
    FGuid::AppendString(param_1,&local_1b8,DigitsWithHyphensLower);
    if (local_1b8.End < (TStringBuilderBase<wchar_t> *)(local_1b8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
    }
    *local_1b8.CurPos = L'\0';
    UE::Logging::Private::BasicLog<7>
              (&`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1b8);
  }
  uVar22 = pFVar9->ChunkSize + 0x1ffff >> 0x11;
  uVar15 = uVar19;
  if (0 < (this->FreeDiskSpans).ArrayNum) {
    do {
      uVar17 = (uint)uVar19;
      uVar14 = 0;
      if ((int)uVar17 < (this->FreeDiskSpans).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar21 = (this->FreeDiskSpans).AllocatorInstance.Data;
      if (uVar22 <= (uint)(*(int *)(pFVar21 + uVar15 + 4) - *(int *)(pFVar21 + uVar15))) break;
      uVar17 = uVar17 + 1;
      uVar19 = (ulonglong)uVar17;
      uVar15 = uVar15 + 8;
    } while ((int)uVar17 < (this->FreeDiskSpans).ArrayNum);
  }
  bVar4 = false;
  if (uVar17 == (this->FreeDiskSpans).ArrayNum) {
    uVar19 = this->MaxDiskSpaceBytes;
    if ((this->InstallationFreeSpaceRequired != 0) || (this->AdditionalDiskSpaceHeadroomBytes != 0))
    {
      bVar4 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                        (this->InstallDirectory,&local_1c0,(ulong64 *)&local_1c8);
      if (bVar4) {
        pFVar21 = (FScriptContainerElement *)
                  (this->AdditionalDiskSpaceHeadroomBytes + this->InstallationFreeSpaceRequired);
        if ((pFVar21 < local_1c8 + (ulonglong)this->BackingStoreEntryCount * 0x20000) &&
           ((uVar15 = (longlong)(local_1c8 + (ulonglong)this->BackingStoreEntryCount * 0x20000) -
                      (longlong)pFVar21, uVar19 == 0 || (uVar15 < uVar19)))) {
          uVar19 = uVar15;
        }
      }
      else {
        this->InstallationFreeSpaceRequired = 0;
        this->AdditionalDiskSpaceHeadroomBytes = 0;
      }
    }
    if (((this->BackingStoreFileHandle).Ptr == (IFileHandle *)0x0) ||
       ((uVar19 != 0 &&
        (uVar19 < ((ulonglong)this->BackingStoreEntryCount + (ulonglong)uVar22) * 0x20000)))) {
      puVar1 = &this->Stats->DiskLostChunkCount;
      *puVar1 = *puVar1 + 1;
      BuildPatchServices::FBuildPatchFileConstructor::SetChunkLocation
                (this->ParentConstructor,param_1,Cloud);
      this->CurrentMemoryLoad = this->CurrentMemoryLoad - (ulonglong)pFVar9->ChunkSize;
      piVar10 = &(pFVar9->ChunkData).ArrayMax;
      (pFVar9->ChunkData).ArrayNum = 0;
      if (*piVar10 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)pFVar9,0,piVar10);
      }
      TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
      ::Remove((TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
                *)&this->StoredChunks,param_1);
      bVar4 = true;
      goto LAB_1431ec157;
    }
    iVar8 = (this->FreeDiskSpans).ArrayNum;
    piVar10 = &(this->FreeDiskSpans).ArrayMax;
    if (iVar8 == *piVar10) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->FreeDiskSpans).AllocatorInstance,piVar10);
    }
    (this->FreeDiskSpans).ArrayNum = iVar8 + 1;
    pFVar21 = (this->FreeDiskSpans).AllocatorInstance.Data + (longlong)iVar8 * 8;
    DefaultConstructItems<FChunkBackingStore::FBackingStoreFreeSpan,int>(pFVar21,1);
    *(uint *)pFVar21 = this->BackingStoreEntryCount;
    uVar14 = this->BackingStoreEntryCount + uVar22;
    this->BackingStoreEntryCount = uVar14;
    if (this->BackingStoreMaxEntries < uVar14) {
      this->BackingStoreMaxEntries = uVar14;
    }
    bVar4 = true;
    *(uint *)(pFVar21 + 4) = *(int *)pFVar21 + uVar22;
    this->Stats->DiskPeakUsageBytes = (ulonglong)this->BackingStoreEntryCount << 0x11;
  }
  uVar14 = 0;
  if ((int)uVar17 < (this->FreeDiskSpans).ArrayNum) {
    uVar14 = ~uVar17 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_1c8 = (this->FreeDiskSpans).AllocatorInstance.Data + (longlong)(int)uVar17 * 8;
  uVar11 = CityHash64((char *)param_1,0x10);
  pFVar12 = TMapBase<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
                        *)&this->UsedDiskSpans,(uint)uVar11,param_1);
  if ((pFVar12->Hash).Hash == 0) {
    uVar14 = *(uint *)local_1c8;
    pFVar12->StartEntryIndex = uVar14;
    pFVar12->EndEntryIndex = uVar14 + uVar22;
    pFVar12->UsedBytes = pFVar9->ChunkSize;
    *(uint *)local_1c8 = *(uint *)local_1c8 + uVar22;
    if (CpuChannel->Enabled < 0) {
      FVar13 = FXxHash64::HashBuffer
                         ((pFVar9->ChunkData).AllocatorInstance.Data,
                          (longlong)(pFVar9->ChunkData).ArrayNum);
      (pFVar12->Hash).Hash = FVar13.Hash;
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'
                  ::__l70::__CpuProfilerEventSpecId678,"BSPO_Hash",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                 ,0x2a6);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'::
                 __l70::__CpuProfilerEventSpecId678);
      FVar13 = FXxHash64::HashBuffer
                         ((pFVar9->ChunkData).AllocatorInstance.Data,
                          (longlong)(pFVar9->ChunkData).ArrayNum);
      (pFVar12->Hash).Hash = FVar13.Hash;
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (*(uint *)(local_1c8 + 4) == *(uint *)local_1c8) {
      TArray<FChunkBackingStore::FBackingStoreFreeSpan,TSizedDefaultAllocator<32>_>::RemoveAt
                (&this->FreeDiskSpans,uVar17,Default);
    }
    this->WriteCount = this->WriteCount + 1;
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'
                  ::__l74::__CpuProfilerEventSpecId691,"BSPO_Write",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchFileConstructor.cpp"
                 ,0x2b3);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'::
                 __l74::__CpuProfilerEventSpecId691);
    }
    pIVar2 = (this->BackingStoreFileHandle).Ptr;
    cVar7 = (**(code **)((longlong)*pIVar2 + 0x10))
                      (pIVar2,(ulonglong)pFVar12->StartEntryIndex << 0x11);
    if (cVar7 == '\0') {
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'
                    ::__l78::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
    }
    else {
      pIVar2 = (this->BackingStoreFileHandle).Ptr;
      cVar7 = (**(code **)((longlong)*pIVar2 + 0x30))
                        (pIVar2,(pFVar9->ChunkData).AllocatorInstance.Data);
      if (cVar7 != '\0') {
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        lVar20 = (ulonglong)(pFVar12->EndEntryIndex - pFVar12->StartEntryIndex) * 0x20000 -
                 (longlong)(pFVar9->ChunkData).ArrayNum;
        if (bVar4) {
          local_d8.SecondaryData = (ForElementType<unsigned_char>)0x0;
          local_50[0] = 0;
          local_50[1] = 0x80;
          iVar18 = (int)lVar20;
          iVar8 = UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                            (1,1,iVar18,&local_d8,local_50,local_50 + 1);
          FVar16 = (ForElementType<unsigned_char>)&local_d8;
          if (local_d8.SecondaryData != (ForElementType<unsigned_char>)0x0) {
            FVar16 = local_d8.SecondaryData;
          }
          memset((void *)((longlong)iVar8 + (longlong)FVar16),0,(longlong)iVar18);
          pIVar2 = (this->BackingStoreFileHandle).Ptr;
          FVar16 = (ForElementType<unsigned_char>)&local_d8;
          if (local_d8.SecondaryData != (ForElementType<unsigned_char>)0x0) {
            FVar16 = local_d8.SecondaryData;
          }
          cVar7 = (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,FVar16);
          if (cVar7 == '\0') {
            if (1 < (byte)LogBuildPatchServices._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'
                          ::__l123::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
            }
            if (local_d8.SecondaryData != (ForElementType<unsigned_char>)0x0) {
              FMemory::Free((void *)local_d8.SecondaryData);
            }
            goto LAB_1431ec0de;
          }
          if (local_d8.SecondaryData != (ForElementType<unsigned_char>)0x0) {
            FMemory::Free((void *)local_d8.SecondaryData);
          }
        }
        this->CurrentMemoryLoad = this->CurrentMemoryLoad - (ulonglong)pFVar9->ChunkSize;
        this->BackingStoreUsedSpace = this->BackingStoreUsedSpace + (ulonglong)pFVar9->ChunkSize;
        piVar10 = &(pFVar9->ChunkData).ArrayMax;
        this->BackingStoreWastedSpace = this->BackingStoreWastedSpace + lVar20;
        (pFVar9->ChunkData).ArrayNum = 0;
        if (*piVar10 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,(ForAnyElementType *)pFVar9,0,piVar10);
        }
        pFVar9->bBackedByDisk = true;
        BuildPatchServices::FBuildPatchFileConstructor::SetChunkLocation
                  (this->ParentConstructor,param_1,DiskOverflow);
        bVar4 = ConsistencyCheck(this);
        goto LAB_1431ec157;
      }
      if (1 < (byte)LogBuildPatchServices._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'
                    ::__l99::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      bVar4 = false;
      goto LAB_1431ec157;
    }
  }
  else if (1 < (byte)LogBuildPatchServices._0_1_) {
    local_148.Base = local_128;
    local_148.CurPos = local_128;
    local_148.bIsDynamic = false;
    local_148.bIsExternal = false;
    local_148.End = (wchar_t *)&local_d8;
    FGuid::AppendString(param_1,&local_148,DigitsWithHyphensLower);
    if (local_148.End < (ForElementType<unsigned_char> *)(local_148.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_148,1);
    }
    *local_148.CurPos = L'\0';
    UE::Logging::Private::BasicLog<2>
              (&`private:_bool___cdecl_FChunkBackingStore::PageOut(FGuid_const&___ptr64)___ptr64'::
                __l52::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
    bVar4 = false;
    goto LAB_1431ec157;
  }
LAB_1431ec0de:
  bVar4 = false;
LAB_1431ec157:
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// ReleaseBackingStoreEntry @ 1431ef640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FChunkBackingStore::ReleaseBackingStoreEntry
          (FChunkBackingStore *this,FGuid *param_1,FStoredChunk *param_2)

{
  int *piVar1;
  TArray<FChunkBackingStore::FBackingStoreFreeSpan,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  IFileHandle *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  FBackingStoreUsedSpan *pFVar10;
  ulong64 uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint local_38;
  uint uStack_34;
  
  pFVar10 = TMapBase<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
            ::FindChecked((TMapBase<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>_>
                           *)&this->UsedDiskSpans,param_1);
  pTVar2 = &this->FreeDiskSpans;
  this->BackingStoreUsedSpace = this->BackingStoreUsedSpace - (ulonglong)param_2->ChunkSize;
  uVar12 = 0;
  this->BackingStoreWastedSpace =
       this->BackingStoreWastedSpace +
       (ulonglong)param_2->ChunkSize +
       (ulonglong)(pFVar10->EndEntryIndex - pFVar10->StartEntryIndex) * -0x20000;
  uVar14 = (this->FreeDiskSpans).ArrayNum;
  if (0 < (int)uVar14) {
    do {
      iVar15 = (uVar14 >> 1) + uVar12;
      if (*(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) <
          pFVar10->StartEntryIndex) {
        uVar12 = iVar15 + (uVar14 & 1);
      }
      uVar9 = uVar14 >> 1;
      uVar14 = uVar14 >> 1;
    } while (uVar9 != 0);
  }
  local_38 = pFVar10->StartEntryIndex;
  uStack_34 = pFVar10->EndEntryIndex;
  param_2->bBackedByDisk = false;
  if (*(int *)&(this->UsedDiskSpans).field_0x8 != *(int *)&(this->UsedDiskSpans).field_0x34) {
    uVar11 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FBackingStoreUsedSpan,0>,FDefaultSetAllocator>
                         *)&this->UsedDiskSpans,(uint)uVar11,param_1);
  }
  if ((int)uVar12 < (this->FreeDiskSpans).ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
    if ((int)uVar12 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    lVar16 = (longlong)(int)uVar12;
    if (uStack_34 == *(uint *)(pFVar13 + lVar16 * 8)) {
      uVar9 = 0;
      if ((int)uVar12 < (this->FreeDiskSpans).ArrayNum) {
        uVar9 = uVar14;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      *(uint *)((pTVar2->AllocatorInstance).Data + lVar16 * 8) = local_38;
      if (0 < (int)uVar12) {
        uVar9 = 0;
        if ((int)uVar12 < (this->FreeDiskSpans).ArrayNum) {
          uVar9 = uVar14;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        pFVar13 = (pTVar2->AllocatorInstance).Data;
        uVar9 = uVar12 - 1;
        uVar17 = 0;
        if ((int)uVar9 < (this->FreeDiskSpans).ArrayNum) {
          uVar17 = ~uVar9 >> 0x1f;
        }
        if (uVar17 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (*(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8 + 4) ==
            *(int *)(pFVar13 + lVar16 * 8)) {
          uVar17 = 0;
          if ((int)uVar12 < (this->FreeDiskSpans).ArrayNum) {
            uVar17 = uVar14;
          }
          if (uVar17 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          uVar3 = *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar16 * 8 + 4);
          uVar14 = 0;
          if ((int)uVar9 < (this->FreeDiskSpans).ArrayNum) {
            uVar14 = ~uVar9 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8 + 4) = uVar3;
          TArray<FChunkBackingStore::FBackingStoreFreeSpan,TSizedDefaultAllocator<32>_>::RemoveAt
                    (pTVar2,uVar12,Default);
        }
      }
      goto LAB_1431efc2e;
    }
  }
  else {
    pFVar13 = (this->FreeDiskSpans).AllocatorInstance.Data;
  }
  if (0 < (int)uVar12) {
    uVar14 = uVar12 - 1;
    uVar17 = ~uVar14 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar14 < (this->FreeDiskSpans).ArrayNum) {
      uVar9 = uVar17;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    lVar16 = (longlong)(int)uVar14;
    if (*(uint *)(pFVar13 + (lVar16 * 2 + 1) * 4) == local_38) {
      uVar9 = 0;
      if ((int)uVar14 < (this->FreeDiskSpans).ArrayNum) {
        uVar9 = uVar17;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      *(uint *)((this->FreeDiskSpans).AllocatorInstance.Data + lVar16 * 8 + 4) = uStack_34;
      if ((int)uVar12 < (this->FreeDiskSpans).ArrayNum) {
        if ((int)uVar12 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        pFVar13 = (this->FreeDiskSpans).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar14 < (this->FreeDiskSpans).ArrayNum) {
          uVar9 = uVar17;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (*(int *)((this->FreeDiskSpans).AllocatorInstance.Data + lVar16 * 8 + 4) ==
            *(int *)(pFVar13 + (longlong)(int)uVar12 * 8)) {
          uVar9 = 0;
          if ((int)uVar12 < (this->FreeDiskSpans).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          uVar3 = *(undefined4 *)
                   ((this->FreeDiskSpans).AllocatorInstance.Data + (longlong)(int)uVar12 * 8 + 4);
          uVar9 = 0;
          if ((int)uVar14 < (this->FreeDiskSpans).ArrayNum) {
            uVar9 = uVar17;
          }
          if (uVar9 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          *(undefined4 *)((this->FreeDiskSpans).AllocatorInstance.Data + lVar16 * 8 + 4) = uVar3;
          TArray<FChunkBackingStore::FBackingStoreFreeSpan,TSizedDefaultAllocator<32>_>::RemoveAt
                    (pTVar2,uVar12,Default);
        }
      }
      goto LAB_1431efc2e;
    }
  }
  pTVar2 = &this->FreeDiskSpans;
  if ((pFVar13 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar13 + (longlong)(this->FreeDiskSpans).ArrayMax * 8)
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar15 = (this->FreeDiskSpans).ArrayNum;
  piVar1 = &(this->FreeDiskSpans).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar13 = (pTVar2->AllocatorInstance).Data;
  (this->FreeDiskSpans).ArrayNum = iVar15 + 1;
  pFVar13 = pFVar13 + (longlong)(int)uVar12 * 8;
  memmove(pFVar13 + 8,pFVar13,(longlong)(int)(iVar15 - uVar12) << 3);
  *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 8) =
       CONCAT44(uStack_34,local_38);
LAB_1431efc2e:
  iVar15 = (this->FreeDiskSpans).ArrayNum;
  uVar12 = iVar15 - 1;
  uVar14 = 0;
  if ((int)uVar12 < iVar15) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar15 = (this->FreeDiskSpans).ArrayNum;
  if (*(uint *)((this->FreeDiskSpans).AllocatorInstance.Data + ((longlong)iVar15 + -1) * 8 + 4) ==
      this->BackingStoreEntryCount) {
    uVar14 = 0;
    if ((int)(iVar15 - 1U) < iVar15) {
      uVar14 = ~(iVar15 - 1U) >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pIVar4 = (this->BackingStoreFileHandle).Ptr;
    cVar8 = (**(code **)((longlong)*pIVar4 + 0x40))
                      (pIVar4,(ulonglong)
                              *(uint *)((this->FreeDiskSpans).AllocatorInstance.Data +
                                       (longlong)(this->FreeDiskSpans).ArrayNum * 8 + -8) << 0x11);
    if (cVar8 != '\0') {
      iVar15 = (this->FreeDiskSpans).ArrayNum;
      uVar12 = iVar15 - 1;
      uVar14 = 0;
      if ((int)uVar12 < iVar15) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      this->BackingStoreEntryCount =
           *(uint *)((this->FreeDiskSpans).AllocatorInstance.Data +
                    (longlong)(this->FreeDiskSpans).ArrayNum * 8 + -8);
      if ((this->FreeDiskSpans).ArrayNum < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      iVar15 = (this->FreeDiskSpans).ArrayNum;
      uVar14 = iVar15 - 1;
      pFVar13 = (this->FreeDiskSpans).AllocatorInstance.Data + (longlong)(int)uVar14 * 8;
      iVar15 = ~uVar14 + iVar15;
      if (iVar15 != 0) {
        memmove(pFVar13,pFVar13 + 8,(longlong)iVar15 << 3);
      }
      iVar15 = (this->FreeDiskSpans).ArrayNum + -1;
      (this->FreeDiskSpans).ArrayNum = iVar15;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&(this->FreeDiskSpans).AllocatorInstance,iVar15,&(this->FreeDiskSpans).ArrayMax
                );
    }
  }
  bVar6 = ConsistencyCheck(this);
  return bVar6;
}

// ReleaseEntryInternal @ 1431efe60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FChunkBackingStore::ReleaseEntryInternal
          (FChunkBackingStore *this,FGuid *param_1,FStoredChunk *param_2)

{
  undefined1 auStack_a8 [32];
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [40];
  ulonglong local_18 [3];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_2->LockCount == 0) {
    if (1 < (byte)LogBuildPatchServices._0_1_) {
      local_88.Base = local_68;
      local_88.CurPos = local_68;
      local_88.End = (wchar_t *)local_18;
      local_88.bIsDynamic = false;
      local_88.bIsExternal = false;
      FGuid::AppendString(param_1,&local_88,DigitsWithHyphensLower);
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      *local_88.CurPos = L'\0';
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FChunkBackingStore::ReleaseEntryInternal(FGuid_const&___ptr64,FChunkBackingStore::FStoredChunk*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_88);
    }
    return false;
  }
  param_2->LockCount = param_2->LockCount - 1;
  return true;
}

// ReserveAndLockEntry @ 1431f0c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TMemoryView<void> * __thiscall
FChunkBackingStore::ReserveAndLockEntry
          (FChunkBackingStore *this,TMemoryView<void> *__return_storage_ptr__,FGuid *param_1,
          uint param_2,int param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  IChunkReferenceTracker *pIVar6;
  code *pcVar7;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  TMemoryView<void> *pTVar12;
  ulong64 uVar13;
  FStoredChunk *pFVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [4];
  uint local_184;
  int local_180;
  TMemoryView<void> *local_178;
  FGuid *local_170;
  FGuid local_168;
  int local_158;
  int local_154;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TMap<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined4 local_d4;
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [40];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_184 = param_2;
  local_178 = __return_storage_ptr__;
  local_170 = param_1;
  local_180 = (**(code **)((longlong)*this->ParentConstructor->ChunkReferenceTracker + 0x50))();
  if ((this->MaxMemoryBytes != 0xffffffffffffffff) &&
     (this->MaxMemoryBytes < (ulonglong)param_2 + this->CurrentMemoryLoad)) {
    puVar1 = &(this->StoredChunks).field_0x10;
    do {
      local_150 = &this->StoredChunks;
      local_130 = 0;
      local_168.A = 0;
      local_168.B = 0;
      iVar22 = -1;
      local_168.C = 0;
      local_168.D = 0;
      iVar10 = *(int *)&(this->StoredChunks).field_0x28;
      iStack_148 = local_130;
      uStack_144 = 1;
      iStack_134 = 0;
      if (iVar10 != 0) {
        puVar4 = *(uint **)&(this->StoredChunks).field_0x20;
        puVar21 = (uint *)puVar1;
        if (puVar4 != (uint *)0x0) {
          puVar21 = puVar4;
        }
        uStack_144 = *puVar21;
        while (uStack_144 == 0) {
          lVar11 = (longlong)iStack_148;
          local_130 = local_130 + 0x20;
          iStack_148 = iStack_148 + 1;
          uStack_144 = 1;
          iStack_134 = iVar10;
          if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 < iStack_148)
          goto LAB_1431f0d8f;
          uStack_144 = puVar21[lVar11 + 1];
        }
        uStack_144 = -uStack_144 & uStack_144;
        uVar16 = (ulonglong)uStack_144 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_158 = (int)lVar11;
        iStack_134 = local_130 + -1 + local_158;
        if (iVar10 < iStack_134) {
          iStack_134 = iVar10;
        }
      }
LAB_1431f0d8f:
      uVar20 = *(uint *)&(this->StoredChunks).field_0x28;
      uStack_12c = local_d4;
      iStack_128 = *(int *)&(this->StoredChunks).field_0x8 -
                   *(int *)&(this->StoredChunks).field_0x34;
      uVar19 = uVar20 & 0xffffffe0;
      TStack_118._padding_ = CONCAT44(uStack_144,iStack_148);
      uStack_138 = 0xffffffff;
      TStack_118.CurrentBitIndex = iStack_134;
      TStack_118.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar20 >> 5;
      TStack_118._28_4_ = local_d4;
      TStack_118.BaseBitIndex = local_130;
      uStack_f8 = CONCAT44(uStack_124,iStack_128);
      local_140 = puVar1;
      local_120 = local_150;
      TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar20 < 0) || (iVar10 < (int)uVar20)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TMemoryView<void> *)(*pcVar7)();
        return pTVar12;
      }
      uVar3 = *(uint *)&(this->StoredChunks).field_0x28;
      if (uVar20 != uVar3) {
        puVar5 = *(undefined1 **)&(this->StoredChunks).field_0x20;
        puVar15 = puVar1;
        if (puVar5 != (undefined1 *)0x0) {
          puVar15 = puVar5;
        }
        uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
        while (uVar20 == 0) {
          lVar11 = (longlong)iVar17;
          uVar19 = uVar19 + 0x20;
          iVar17 = iVar17 + 1;
          uVar20 = uVar3;
          if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar17)
          goto LAB_1431f0ea0;
          uVar20 = *(uint *)(puVar15 + lVar11 * 4 + 4);
        }
        uVar16 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_154 = (int)lVar11;
        uVar20 = local_154 + -1 + uVar19;
        if ((int)uVar3 < (int)uVar20) {
          uVar20 = uVar3;
        }
      }
LAB_1431f0ea0:
      while( true ) {
        pTVar8 = local_120;
        if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
          local_188[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FStoredChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
        }
        if (((TStack_118.CurrentBitIndex == uVar20) &&
            (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar8 == &this->StoredChunks)) break;
        puVar18 = (undefined8 *)(*(longlong *)pTVar8 + (longlong)TStack_118.CurrentBitIndex * 0x38);
        if ((*(short *)((longlong)puVar18 + 0x2e) == 0) && (*(int *)(puVar18 + 3) != 0)) {
          iVar10 = *(int *)((longlong)puVar18 + 0x24);
          if (iVar10 < local_180) {
            pIVar6 = this->ParentConstructor->ChunkReferenceTracker;
            iVar10 = (**(code **)((longlong)*pIVar6 + 0x48))(pIVar6,puVar18,puVar18 + 5);
            *(int *)((longlong)puVar18 + 0x24) = iVar10;
          }
          if (iVar22 < iVar10) {
            local_168._0_8_ = *puVar18;
            local_168._8_8_ = puVar18[1];
            iVar22 = iVar10;
          }
        }
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
      }
      __return_storage_ptr__ = local_178;
      param_1 = local_170;
      param_2 = local_184;
      if (iVar22 == -1) break;
      bVar9 = PageOut(this,&local_168);
      if (!bVar9) goto LAB_1431f1044;
      __return_storage_ptr__ = local_178;
      param_1 = local_170;
      param_2 = local_184;
    } while (this->MaxMemoryBytes < (ulonglong)local_184 + this->CurrentMemoryLoad);
  }
  uVar13 = CityHash64((char *)param_1,0x10);
  pFVar14 = TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,FChunkBackingStore::FStoredChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChunkBackingStore::FStoredChunk,0>_>
                        *)&this->StoredChunks,(uint)uVar13,param_1);
  piVar2 = &(pFVar14->ChunkData).ArrayNum;
  if ((pFVar14->ChunkData).ArrayNum == 0) {
    pFVar14->LastUsageIndex = param_3;
    pFVar14->bCommitted = false;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_2,(ForAnyElementType *)pFVar14,piVar2,&(pFVar14->ChunkData).ArrayMax);
    pFVar14->ChunkSize = param_2;
    pFVar14->LockCount = 1;
    uVar16 = (ulonglong)param_2 + this->CurrentMemoryLoad;
    this->CurrentMemoryLoad = uVar16;
    if (this->PeakMemoryLoad < uVar16) {
      this->PeakMemoryLoad = uVar16;
      this->Stats->MemoryPeakUsageBytes = uVar16;
    }
    iVar10 = *piVar2;
    __return_storage_ptr__->Data = (pFVar14->ChunkData).AllocatorInstance.Data;
    __return_storage_ptr__->Size = (longlong)iVar10;
  }
  else if ((byte)LogBuildPatchServices._0_1_ < 2) {
LAB_1431f1044:
    local_178->Data = (void *)0x0;
    local_178->Size = 0;
    __return_storage_ptr__ = local_178;
  }
  else {
    local_c8.Base = local_a8;
    local_c8.bIsDynamic = false;
    local_c8.bIsExternal = false;
    local_c8.CurPos = local_a8;
    local_c8.End = (wchar_t *)local_58;
    FGuid::AppendString(param_1,&local_c8,DigitsWithHyphensLower);
    if (local_c8.End < local_c8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
    }
    *local_c8.CurPos = L'\0';
    UE::Logging::Private::BasicLog<2>
              (&`public:_class_TMemoryView<void>___cdecl_FChunkBackingStore::ReserveAndLockEntry(FGuid_const&___ptr64,unsigned_int,int)___ptr64'
                ::__l32::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
    local_178->Data = (void *)0x0;
    local_178->Size = 0;
    __return_storage_ptr__ = local_178;
  }
  return __return_storage_ptr__;
}

