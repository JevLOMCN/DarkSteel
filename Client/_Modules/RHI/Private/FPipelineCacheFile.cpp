// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 13

// operator()<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_> @ 145c3ad50

void __thiscall
`FPipelineCacheFile::SavePipelineFileCache'::__l205::<lambda_2>::
operator()<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>
          (void *this,
          TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>
          *param_1)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString((FGuid *)(*(longlong *)&param_1->field_0x10 + 0x80),&local_28,Digits);
  ::FString::PrintfImpl(&local_18,L"[%s - %s]");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(*(FString **)this,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145c4bde0

bool __thiscall
`FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>::operator()(void *this,double param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x38);
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalReadRequest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0xb70,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if (0.0 <= param_1) {
    if (plVar3 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    if (*(char *)((longlong)plVar3 + 0x41) == '\0') {
      (**(code **)(*plVar3 + 0x10))(plVar3,(float)param_1);
      if (*(char *)((longlong)plVar3 + 0x41) == '\0') {
        bVar5 = false;
        goto LAB_145c4bec9;
      }
    }
  }
  else {
    if (plVar3 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    if (*(char *)((longlong)plVar3 + 0x41) == '\0') {
      bVar5 = false;
      goto LAB_145c4bec9;
    }
  }
  *(undefined1 *)(lVar1 + 0x1c) = 1;
  bVar5 = true;
LAB_145c4bec9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar5;
}

// operator() @ 145c4c100

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMemoryReader * __thiscall
`FPipelineCacheFile::SavePipelineFileCache'::__l46::<lambda_1>::operator()
          (void *this,FGuid *param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  TUniquePtr<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory,TDefaultDelete<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FMemoryReader *pFVar9;
  ulong64 uVar10;
  void *this_01;
  longlong lVar11;
  FPipelineCacheFile *pFVar12;
  FPipelineCacheFile *pFVar13;
  longlong lVar14;
  FPipelineCacheFile *pFVar15;
  TPairInitializer<FGuid_const_&,TUniquePtr<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory,TDefaultDelete<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory>_>_&&>
  local_res8;
  FString local_38;
  FGuid *local_28;
  TUniquePtr<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory,TDefaultDelete<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory>_>
  **local_20;
  
  if ((((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("guid != FGuid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x999,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMemoryReader *)(*pcVar3)();
    return pFVar9;
  }
  pvVar1 = *(void **)this;
  uVar10 = CityHash64((char *)param_1,0x10);
  iVar7 = TSet<TTuple<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(pvVar1,(uint)uVar10,param_1);
  pFVar15 = (FPipelineCacheFile *)0x0;
  if (iVar7 != -1) goto LAB_145c4c31f;
  uVar10 = CityHash64((char *)param_1,0x10);
  iVar7 = TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FString>,TDefaultMapHashableKeyFuncs<FGuid,FString,0>,FDefaultSetAllocator>
                      *)&FPipelineFileCacheManager::GameGuidToCacheKey,(uint)uVar10,param_1);
  if ((iVar7 == -1) ||
     (lVar11 = FPipelineFileCacheManager::GameGuidToCacheKey._0_8_ + (longlong)iVar7 * 0x28,
     lVar11 == 0)) {
    local_38.Data.ArrayNum = 0;
LAB_145c4c223:
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayMax = 0;
  }
  else {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = *(int *)(lVar11 + 0x18);
    lVar14 = (longlong)local_38.Data.ArrayNum;
    pvVar1 = *(void **)(lVar11 + 0x10);
    if (local_38.Data.ArrayNum == 0) goto LAB_145c4c223;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pvVar1,lVar14 * 2);
  }
  iVar7 = local_38.Data.ArrayNum + -1;
  FVar4.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar4.Data);
  iVar7 = TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>,FDefaultSetAllocator>
                      *)&FPipelineFileCacheManager::FileCacheMap,uVar8,&local_38);
  pFVar13 = pFVar15;
  if (iVar7 != -1) {
    lVar11 = (longlong)iVar7 * 0x20 + FPipelineFileCacheManager::FileCacheMap._0_8_;
    pFVar12 = (FPipelineCacheFile *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      pFVar12 = pFVar15;
    }
    if (pFVar12 != (FPipelineCacheFile *)0x0) {
      pFVar13 = (FPipelineCacheFile *)
                (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar12->Name)->
                AllocatorInstance).Data;
    }
  }
  pvVar1 = *(void **)this;
  this_01 = ::operator_new(0x18);
  local_res8.Value =
       (TUniquePtr<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory,TDefaultDelete<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory>_>
        *)pFVar15;
  if (this_01 != (void *)0x0) {
    local_res8.Value =
         (TUniquePtr<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory,TDefaultDelete<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory>_>
          *)FMemoryReaderAndMemory::FMemoryReaderAndMemory(this_01,pFVar13);
  }
  local_20 = &local_res8.Value;
  local_28 = param_1;
  ___fcd4f0b24017f1bb89cd5a9a5b49997c_(pvVar1,&local_res8,(bool *)&local_28);
  pTVar5 = local_res8.Value;
  if ((FPipelineCacheFile *)local_res8.Value != (FPipelineCacheFile *)0x0) {
    pFVar9 = ((TUniquePtr<FMemoryReader,TDefaultDelete<FMemoryReader>_> *)
             ((longlong)local_res8.Value + 0x10))->Ptr;
    if (pFVar9 != (FMemoryReader *)0x0) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
    pFVar2 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pTVar5->Ptr)->AllocatorInstance
             ).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar5,0x18);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_145c4c31f:
  this_00 = *(longlong **)this;
  uVar10 = CityHash64((char *)param_1,0x10);
  iVar7 = TSet<TTuple<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(this_00,(uint)uVar10,param_1);
  if (iVar7 != -1) {
    lVar11 = (longlong)iVar7 * 0x20 + *this_00;
    pFVar13 = (FPipelineCacheFile *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      pFVar13 = pFVar15;
    }
    if (pFVar13 != (FPipelineCacheFile *)0x0) {
      return *(FMemoryReader **)
              ((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar13->Name)->
               AllocatorInstance).Data + 0x10);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                     ,0x9a7,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMemoryReader *)(*pcVar3)();
    return pFVar9;
  }
  return (FMemoryReader *)0x0;
}

// FetchPSODescriptors @ 145c56f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPipelineCacheFile::FetchPSODescriptors
          (FPipelineCacheFile *this,TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *param_1)

{
  int *piVar1;
  TDoubleLinkedListNode *pTVar2;
  FPipelineCacheFileFormatPSORead *pFVar3;
  undefined1 *puVar4;
  IAsyncReadFileHandle *pIVar5;
  FArchive *pFVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  IAsyncReadRequest *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  void *this_00;
  FScriptContainerElement *_Dst;
  undefined ***pppuVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  undefined1 auStackY_108 [32];
  FString local_c8;
  FString local_b8;
  double local_a8;
  ForAnyElementType local_a0;
  FSharedReferencer<1> local_98;
  IAsyncReadFileHandle *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  code *local_78 [2];
  undefined **local_68;
  FPipelineCacheFile *local_60;
  FPipelineCacheFileFormatPSORead *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pTVar2 = param_1->HeadNode;
  do {
    if (pTVar2 == (TDoubleLinkedListNode *)0x0) {
      return;
    }
    puVar13 = (uint *)0x0;
    pFVar3 = pTVar2->Value;
    puVar20 = puVar13;
    if (*(int *)&(this->TOC).MetaData.field_0x8 != *(int *)&(this->TOC).MetaData.field_0x34) {
      puVar4 = *(undefined1 **)&(this->TOC).MetaData.field_0x40;
      puVar18 = &(this->TOC).MetaData.field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar18 = puVar4;
      }
      uVar10 = *(uint *)(puVar18 +
                        (ulonglong)(*(int *)&(this->TOC).MetaData.field_0x48 - 1U & pFVar3->Hash) *
                        4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar20 = (uint *)((longlong)(int)uVar10 * 0xc0 + *(longlong *)&(this->TOC).MetaData);
          if (*puVar20 == pFVar3->Hash) {
            if (puVar20 != (uint *)0x0) goto LAB_145c57011;
            break;
          }
          uVar10 = puVar20[0x2e];
          puVar20 = puVar13;
        } while (uVar10 != 0xffffffff);
      }
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_145c57011:
    if ((puVar20[0x2c] & 1) == 0) {
      if ((((this->FileGuid).D == puVar20[9] && (this->FileGuid).C == puVar20[8]) &&
          (this->FileGuid).B == puVar20[7]) && (this->FileGuid).A == puVar20[6]) {
        if (*(int *)&(this->TOC).MetaData.field_0x8 != *(int *)&(this->TOC).MetaData.field_0x34) {
          puVar4 = *(undefined1 **)&(this->TOC).MetaData.field_0x40;
          puVar18 = &(this->TOC).MetaData.field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar18 = puVar4;
          }
          uVar10 = *(uint *)(puVar18 +
                            (ulonglong)
                            (*(int *)&(this->TOC).MetaData.field_0x48 - 1U & pFVar3->Hash) * 4);
          if (uVar10 != 0xffffffff) {
            do {
              puVar13 = (uint *)((longlong)(int)uVar10 * 0xc0 + *(longlong *)&(this->TOC).MetaData);
              if (*puVar13 == pFVar3->Hash) {
                puVar21 = puVar13 + 2;
                if (puVar13 == (uint *)0x0) {
                  puVar21 = (uint *)0x0;
                }
                if (puVar21 != (uint *)0x0) {
                  if ((this->AsyncFileHandle).Object != (IAsyncReadFileHandle *)0x0) {
                    iVar12 = (pFVar3->Data).ArrayNum;
                    piVar1 = &(pFVar3->Data).ArrayNum;
                    uVar10 = puVar21[2];
                    if (iVar12 < (int)uVar10) {
                      iVar11 = UE::Core::Private::
                               ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (1,1,uVar10 - iVar12,(ForAnyElementType *)pFVar3,piVar1,
                                          &(pFVar3->Data).ArrayMax);
                      memset((pFVar3->Data).AllocatorInstance.Data + iVar11,0,
                             (longlong)(int)(uVar10 - iVar12));
                    }
                    else {
                      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
                      }
                      if ((int)uVar10 < iVar12) {
                        uVar19 = iVar12 - uVar10;
                        if (((int)(uVar19 | uVar10) < 0) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                               ,
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x458,
                                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        if (uVar19 != 0) {
                          _Dst = (pFVar3->Data).AllocatorInstance.Data + (int)uVar10;
                          iVar12 = (*piVar1 - uVar19) - uVar10;
                          if (iVar12 != 0) {
                            memmove(_Dst,_Dst + (int)uVar19,(longlong)iVar12);
                          }
                          *piVar1 = *piVar1 - uVar19;
                          UE::Core::Private::
                          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (1,1,(ForAnyElementType *)pFVar3,*piVar1,
                                     &(pFVar3->Data).ArrayMax);
                        }
                      }
                    }
                    pTVar15 = (this->AsyncFileHandle).SharedReferenceCount.ReferenceController;
                    pIVar5 = (this->AsyncFileHandle).Object;
                    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar15->SharedReferenceCount =
                           (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    local_90 = (pFVar3->ParentFileHandle).Object;
                    pTStack_88 = (pFVar3->ParentFileHandle).SharedReferenceCount.ReferenceController
                    ;
                    (pFVar3->ParentFileHandle).Object = pIVar5;
                    (pFVar3->ParentFileHandle).SharedReferenceCount.ReferenceController = pTVar15;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTStack_88);
                    if (((this->AsyncFileHandle).Object == (IAsyncReadFileHandle *)0x0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar8)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pIVar5 = (this->AsyncFileHandle).Object;
                    pIVar14 = (IAsyncReadRequest *)
                              (**(code **)((longlong)*pIVar5 + 0x10))
                                        (pIVar5,*(undefined8 *)puVar21,*(undefined8 *)(puVar21 + 2),
                                         3);
                    local_a0.Data = (FScriptContainerElement *)pIVar14;
                    pTVar15 = ::operator_new(0x18);
                    local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
                      pTVar15->SharedReferenceCount = (atomic<int>)0x1;
                      pTVar15->_padding_ =
                           (longlong)
                           &
                           ___7__TReferenceControllerWithDeleter_VIAsyncReadRequest__U__DefaultDeleter_VIAsyncReadRequest___SharedPointerInternals___00_SharedPointerInternals__6B_
                      ;
                      pTVar15->WeakReferenceCount = (atomic<int>)0x1;
                      pTVar15[1]._padding_ = (longlong)pIVar14;
                      local_98.ReferenceController = pTVar15;
                    }
                    if (&pFVar3->ReadRequest != (TSharedPtr<IAsyncReadRequest,1> *)&local_a0) {
                      (pFVar3->ReadRequest).Object = pIVar14;
                      local_a0.Data = (FScriptContainerElement *)0x0;
                      SharedPointerInternals::FSharedReferencer<1>::operator=
                                (&(pFVar3->ReadRequest).SharedReferenceCount,&local_98);
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_98.ReferenceController);
                    pFVar3->bValid = true;
                    local_50 = (undefined ***)0x0;
                    local_78[0] = UE::Core::Private::Function::
                                  TFunctionRefCaller<`FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>,bool,double>
                                  ::Call;
                    local_68 = &
                               ___7__TFunction_OwnedObject_V<lambda_1>__3__FetchPSODescriptors_FPipelineCacheFile__QEAAXAEAV__TDoubleLinkedList_PEAUFPipelineCacheFileFormatPSORead_____Z__0A__0A__Function_Private_Core_UE__6B_
                    ;
                    pFVar6 = pFVar3->Ar;
                    local_60 = this;
                    local_58 = pFVar3;
                    if ((pFVar6 == (FArchive *)0x0) ||
                       (cVar9 = (**(code **)(*(longlong *)pFVar6 + 0x250))(pFVar6,local_78),
                       cVar9 == '\0')) {
                      local_a8 = 0.0;
                      UE::Core::Private::Function::CheckCallable(local_78[0]);
                      pcVar7 = local_78[0];
                      pppuVar16 = &local_68;
                      if (local_50 != (undefined ***)0x0) {
                        pppuVar16 = local_50;
                      }
                      this_00 = (void *)(*(code *)(*pppuVar16)[1])();
                      if (pcVar7 == UE::Core::Private::Function::
                                    TFunctionRefCaller<`FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>,bool,double>
                                    ::Call) {
                        `FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>::operator()
                                  (this_00,local_a8);
                      }
                      else {
                        (*pcVar7)(this_00,&local_a8);
                      }
                      if ((pFVar3->bReadCompleted == false) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Entry->bReadCompleted",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                             ,0xbb0,L""), bVar8)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                    if (local_78[0] != (code *)0x0) {
                      pppuVar16 = &local_68;
                      if (local_50 != (undefined ***)0x0) {
                        pppuVar16 = local_50;
                      }
                      (*(code *)(*pppuVar16)[2])();
                    }
                    goto LAB_145c57482;
                  }
                  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_3608245241330529389>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                     ,0xb93,"AsyncFileHandle.IsValid()");
                  if (bVar8) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                break;
              }
              uVar10 = puVar13[0x2e];
            } while (uVar10 != 0xffffffff);
          }
        }
        if (5 < (byte)LogRHI._0_1_) {
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          FGuid::AppendString((FGuid *)(puVar20 + 6),&local_c8,Digits);
          UE::Logging::Private::BasicLog<6>
                    (&`public:_void___cdecl_FPipelineCacheFile::FetchPSODescriptors(TDoubleLinkedList<FPipelineCacheFileFormatPSORead*___ptr64>&___ptr64)___ptr64'
                      ::__l34::LOG_Static,(FLogCategoryBase *)&LogRHI);
          FVar17.Data = local_c8.Data.AllocatorInstance.Data;
LAB_145c57473:
          if (FVar17.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar17.Data);
          }
        }
      }
      else if (2 < (byte)LogRHI._0_1_) {
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)(puVar20 + 6),&local_b8,Digits);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_FPipelineCacheFile::FetchPSODescriptors(TDoubleLinkedList<FPipelineCacheFileFormatPSORead*___ptr64>&___ptr64)___ptr64'
                    ::__l54::LOG_Static,(FLogCategoryBase *)&LogRHI);
        FVar17.Data = local_b8.Data.AllocatorInstance.Data;
        goto LAB_145c57473;
      }
    }
    else if (5 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_FPipelineCacheFile::FetchPSODescriptors(TDoubleLinkedList<FPipelineCacheFileFormatPSORead*___ptr64>&___ptr64)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    pFVar3->bValid = false;
LAB_145c57482:
    pTVar2 = pTVar2->NextNode;
  } while( true );
}

// GarbageCollectUserCache @ 145c59940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FPipelineCacheFile::GarbageCollectUserCache
          (FPipelineCacheFile *this,FString *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  FString *pFVar5;
  void *pvVar6;
  bool bVar7;
  char cVar8;
  IFileManager *pIVar9;
  FArchive *pFVar10;
  long64 lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  byte bVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  int iVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_> *pTVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar29 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStackY_718 [32];
  undefined1 local_6e8;
  undefined1 local_6e7 [3];
  int local_6e4;
  longlong local_6e0;
  FPipelineCacheFileFormatHeader local_6d8;
  undefined8 local_6a0;
  FString *local_698;
  void *local_690;
  undefined8 local_688;
  longlong *local_680;
  uint uStack_678;
  uint uStack_674;
  TBitArray<FDefaultBitArrayAllocator> *local_670;
  undefined4 uStack_668;
  uint uStack_664;
  uint local_660;
  undefined4 uStack_65c;
  int iStack_658;
  undefined4 uStack_654;
  int local_650;
  int local_64c;
  int local_648;
  int local_644;
  FPipelineCacheFile *local_640;
  long64 local_638;
  longlong *local_628;
  uint uStack_620;
  uint uStack_61c;
  TBitArray<FDefaultBitArrayAllocator> *local_618;
  undefined4 uStack_610;
  uint uStack_60c;
  uint local_608;
  uint uStack_604;
  int iStack_600;
  undefined4 uStack_5fc;
  longlong *local_5f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5f0;
  undefined8 uStack_5d0;
  longlong *local_5c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5c0;
  undefined8 uStack_5a0;
  FPipelineCacheFileFormatHeader local_598;
  FSparseArrayAllocationInfo local_560;
  FArchiveState local_548;
  ulong64 local_4b8;
  void **local_4b0;
  undefined8 local_4a8;
  undefined4 local_47c;
  undefined1 local_478 [8];
  undefined1 local_470 [32];
  uint *local_450;
  uint local_448;
  int iStack_444;
  undefined8 uStack_440;
  int iStack_43c;
  void *local_430;
  undefined4 local_428;
  undefined1 local_418 [8];
  undefined1 local_410 [64];
  ForElementType<FSetElementId> local_3d0;
  int local_3c8;
  FPipelineCacheFileFormatPSOMetaData local_3b8;
  FPipelineCacheFileFormatPSO local_308;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_718;
  local_698 = param_1;
  local_640 = this;
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pTVar4 = CVarPSOFileCacheUserCacheUnusedElementCheckPeriod.Ref;
  bVar7 = IsInParallelGameThread();
  uVar28 = 0;
  if (bVar7) {
LAB_145c599c4:
    uVar12 = uVar28;
  }
  else {
    bVar7 = IsInGameThread();
    uVar12 = 4;
    if (bVar7) goto LAB_145c599c4;
  }
  iVar17 = *(int *)((longlong)pTVar4->ShadowedValue + uVar12);
  if (iVar17 < 0) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    goto LAB_145c59f5e;
  }
  pIVar9 = IFileManager::Get();
  uVar24 = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar10 = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,pwVar19,0);
  if (pFVar10 == (FArchive *)0x0) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                  ::__l45::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    goto LAB_145c59f5e;
  }
  (**(code **)(*(longlong *)pFVar10 + 0x130))(pFVar10,0x1d);
  local_6d8.Guid.A = 0;
  local_6d8.Guid.B = 0;
  local_6d8.Guid.C = 0;
  local_6d8.Guid.D = 0;
  ::operator<<(pFVar10,&local_6d8);
  if ((((local_6d8.Magic == 0x5049504543414348) && (local_6d8.Version == 0x1d)) &&
      (local_6d8.GameVersion == GameVersion)) &&
     ((ushort)local_6d8.Platform.Value == this->ShaderPlatform)) {
    auVar29._0_8_ = (double)iVar17 * __real_4269254d38000000 + __real_3fe0000000000000;
    auVar29._8_8_ = 0;
    auVar29 = roundpd(extraout_XMM0,auVar29,1);
    lVar18 = (longlong)
             ((double)(longlong)auVar29._0_8_ * __real_3e7ad7f29abcaf48 +
             (double)local_6d8.LastGCUnixTime);
    lVar11 = GetCurrentUnixTime();
    local_638 = lVar11;
    if (lVar18 <= lVar11) {
      local_448 = ___xmm_00000000ffffffff0000008000000000;
      iStack_444 = _UNK_150631d94;
      uStack_440 = _UNK_150631d98;
      local_478._0_4_ = MostToLeastUsed;
      local_470._0_8_ = 0;
      local_470._8_8_ = 0;
      local_450 = (uint *)0x0;
      local_430 = (void *)0x0;
      local_428 = 0;
      uVar12 = (**(code **)(*(longlong *)pFVar10 + 0x30))(pFVar10);
      if (local_6d8.TableOffset < uVar12) {
        (**(code **)(*(longlong *)pFVar10 + 0x1b8))(pFVar10);
        ::operator<<(pFVar10,(FPipelineCacheFileFormatTOC *)local_478);
        if ((pFVar10->field_0x29 & 2) == 0) goto LAB_145c59c07;
        if (4 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                      ::__l111::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else {
LAB_145c59c07:
        pTVar4 = CVarPSOFileCacheUserCacheUnusedElementRetainDays.Ref;
        bVar7 = IsInParallelGameThread();
        auVar29 = extraout_XMM0_01;
        if ((bVar7) || (bVar7 = IsInGameThread(), uVar12 = 4, auVar29 = extraout_XMM0_02, bVar7)) {
          uVar12 = uVar28;
        }
        uVar27 = local_448;
        uStack_674 = 1;
        auVar31._0_8_ =
             (double)*(int *)((longlong)pTVar4->ShadowedValue + uVar12) * __real_4269254d38000000 +
             __real_3fe0000000000000;
        auVar31._8_8_ = 0;
        auVar29 = roundpd(auVar29,auVar31,1);
        local_6e0 = lVar11 - (longlong)((double)(longlong)auVar29._0_8_ * __real_3e7ad7f29abcaf48);
        uStack_664 = uVar24;
        local_660 = uVar24;
        if (local_448 != 0) {
          puVar25 = (uint *)(local_470 + 0x10);
          if (local_450 != (uint *)0x0) {
            puVar25 = local_450;
          }
          uVar21 = *puVar25;
          uVar12 = uVar28;
          uVar26 = uVar28;
          local_660 = 0;
          uVar24 = 0;
          while (uVar21 == 0) {
            iVar17 = (int)uVar12;
            local_660 = (int)uVar26 + 0x20;
            uVar26 = (ulonglong)local_660;
            uVar24 = iVar17 + 1;
            uVar12 = (ulonglong)uVar24;
            uStack_664 = local_448;
            if ((int)((local_448 - 1) + ((int)(local_448 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
            goto LAB_145c59d00;
            uVar21 = puVar25[(longlong)iVar17 + 1];
          }
          uStack_674 = -uVar21 & uVar21;
          uVar12 = (ulonglong)uStack_674 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_650 = (int)lVar18;
          uStack_664 = (int)lVar18 + -1 + local_660;
          if ((int)local_448 < (int)uStack_664) {
            uStack_664 = local_448;
          }
        }
LAB_145c59d00:
        local_680 = (longlong *)(local_478 + 8);
        uStack_65c = local_47c;
        uVar21 = local_448 & 0xffffffe0;
        local_670 = (TBitArray<FDefaultBitArrayAllocator> *)(local_470 + 0x10);
        uStack_678 = uVar24;
        iStack_658 = local_470._8_4_ - iStack_43c;
        uStack_668 = 0xffffffff;
        local_5f8 = (longlong *)(local_478 + 8);
        TStack_5f0._padding_ = CONCAT44(uStack_674,uVar24);
        iVar17 = (int)local_448 >> 5;
        bVar14 = (byte)_local_448;
        TStack_5f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_470 + 0x10);
        TStack_5f0.UnvisitedBitMask = 0xffffffff;
        TStack_5f0.CurrentBitIndex = uStack_664;
        TStack_5f0.BaseBitIndex = local_660;
        TStack_5f0._28_4_ = local_47c;
        uStack_5d0 = CONCAT44(uStack_654,local_470._8_4_ - iStack_43c);
        if ((int)local_448 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar18 = local_6e0;
        if (uVar27 != local_448) {
          puVar25 = (uint *)(local_470 + 0x10);
          if (local_450 != (uint *)0x0) {
            puVar25 = local_450;
          }
          uVar24 = -1 << (bVar14 & 0x1f) & puVar25[iVar17];
          while (uVar24 == 0) {
            lVar15 = (longlong)iVar17;
            uVar21 = uVar21 + 0x20;
            iVar17 = iVar17 + 1;
            uVar27 = local_448;
            if ((int)((local_448 - 1) + ((int)(local_448 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_145c59e20;
            uVar24 = puVar25[lVar15 + 1];
          }
          uVar12 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_64c = (int)lVar15;
          uVar27 = local_64c + -1 + uVar21;
          if ((int)local_448 < (int)uVar27) {
            uVar27 = local_448;
          }
        }
LAB_145c59e20:
        while( true ) {
          plVar13 = local_5f8;
          if ((int)local_5f8[1] - *(int *)((longlong)local_5f8 + 0x34) != (int)uStack_5d0) {
            local_6e8 = 0;
            `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6e8);
          }
          uVar24 = (uint)uVar28;
          if (((TStack_5f0.CurrentBitIndex == uVar27) &&
              (TStack_5f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_470 + 0x10))) &&
             (plVar13 == (longlong *)(local_478 + 8))) break;
          lVar15 = *(longlong *)((longlong)TStack_5f0.CurrentBitIndex * 0xc0 + 0xa8 + *plVar13);
          TStack_5f0.UnvisitedBitMask = TStack_5f0.UnvisitedBitMask & ~TStack_5f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5f0);
          uVar21 = uVar24 + 1;
          if (lVar18 < lVar15) {
            uVar21 = uVar24;
          }
          uVar28 = (ulonglong)uVar21;
        }
        if (uVar24 == 0) {
          if (4 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                        ::L::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
        }
        else if (uVar24 == local_470._8_4_ - iStack_43c) {
          (**(code **)(*(longlong *)pFVar10 + 0x210))(pFVar10);
          (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
          pIVar9 = IFileManager::Get();
          pFVar5 = local_698;
          pwVar19 = L"";
          if ((local_698->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(local_698->Data).AllocatorInstance.Data;
          }
          cVar8 = (**(code **)((longlong)*pIVar9 + 0x50))(pIVar9,pwVar16);
          if (cVar8 != '\0') {
            pIVar9 = IFileManager::Get();
            if ((pFVar5->Data).ArrayNum != 0) {
              pwVar19 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
            }
            (**(code **)((longlong)*pIVar9 + 0x38))(pIVar9,pwVar19,0,0);
          }
          pFVar10 = (FArchive *)0x0;
          if (4 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                        ::__l163::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
        }
        else {
          if (4 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                        ::__l181::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          local_690 = (void *)0x0;
          local_688 = 0;
          local_6a0 = 0;
          local_548._padding_ = 0;
          local_548.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          local_548.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          local_548.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
          local_548.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
          local_548._40_8_ = 0;
          local_548.ArSerializingDefaults = 0;
          local_548.ArPortFlags = 0;
          local_548.ArMaxSerializeSize = 0;
          local_548.ArUEVer.FileVersionUE4 = 0;
          local_548.ArUEVer.FileVersionUE5 = 0;
          local_548.ArLicenseeUEVer = 0;
          local_548.ArEngineVer.Major = 0;
          local_548.ArEngineVer.Minor = 0;
          local_548.ArEngineVer.Patch = 0;
          local_548.ArEngineVer._6_2_ = 0;
          local_548.ArEngineVer.Changelist = 0;
          local_548.CustomVersionContainer = (FCustomVersionContainer *)0x0;
          local_548.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          local_548.SavePackageData = (FArchiveSavePackageData *)0x0;
          local_548.SerializedProperty = (FProperty *)0x0;
          local_548.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          local_548.bCustomVersionsAreReset = false;
          local_548._129_7_ = 0;
          local_548.NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(&local_548);
          local_4b8 = 0;
          local_548._padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          local_4b0 = &local_690;
          uVar24 = 0;
          local_4a8 = 0;
          FArchiveState::SetIsSaving(&local_548,true);
          (**(code **)(local_548._padding_ + 0x108))(&local_548,0);
          local_548._padding_ = (longlong)&___7FMemoryWriter__6B_;
          FArchiveState::SetGameNetVer(&local_548,0x1d);
          local_598.GameVersion = local_6d8.GameVersion;
          local_598.Guid.A = local_6d8.Guid.A;
          local_598.Platform.Value = local_6d8.Platform.Value;
          local_598._17_3_ = local_6d8._17_3_;
          local_598.Guid.C = local_6d8.Guid.C;
          local_598.Guid.B = local_6d8.Guid.B;
          local_598._36_4_ = local_6d8._36_4_;
          local_598.Guid.D = local_6d8.Guid.D;
          local_598.LastGCUnixTime = local_6d8.LastGCUnixTime;
          local_598.Magic = local_6d8.Magic;
          local_598.TableOffset = local_6d8.TableOffset;
          if ((local_6d8.Magic != 0x5049504543414348) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewHeader.Magic == FPipelineCacheFileFormatMagic",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                 ,0x828,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((ushort)local_598.Platform.Value != local_640->ShaderPlatform) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewHeader.Platform == ShaderPlatform",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                 ,0x829,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_598.LastGCUnixTime = local_638;
          local_598.Version = 0x1d;
          local_598.TableOffset = 0;
          ::operator<<((FArchive *)&local_548,&local_598);
          uStack_61c = 1;
          uVar27 = local_448;
          local_608 = 0;
          local_418._0_4_ = local_478._0_4_;
          local_410._40_4_ = ___xmm_00000000ffffffff0000008000000000;
          local_410._44_4_ = _UNK_150631d94;
          local_410._48_8_ = _UNK_150631d98;
          local_410._0_8_ = (FScriptContainerElement *)0x0;
          local_410._8_8_ = 0;
          local_410._32_8_ = (ForElementType<unsigned_int>)0x0;
          local_3d0 = (ForElementType<FSetElementId>)0x0;
          local_3c8 = 0;
          uStack_60c = local_608;
          if (local_448 != 0) {
            puVar25 = (uint *)(local_470 + 0x10);
            if (local_450 != (uint *)0x0) {
              puVar25 = local_450;
            }
            uVar21 = *puVar25;
            local_608 = 0;
            uVar24 = 0;
            while (uVar21 == 0) {
              lVar18 = (longlong)(int)uVar24;
              local_608 = local_608 + 0x20;
              uVar24 = uVar24 + 1;
              uStack_60c = local_448;
              if ((int)((local_448 - 1) + ((int)(local_448 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24
                 ) goto LAB_145c5a2f0;
              uVar21 = puVar25[lVar18 + 1];
            }
            uStack_61c = -uVar21 & uVar21;
            uVar28 = (ulonglong)uStack_61c * 2 + 1;
            lVar18 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            local_648 = (int)lVar18;
            uStack_60c = (int)lVar18 + -1 + local_608;
            if ((int)local_448 < (int)uStack_60c) {
              uStack_60c = local_448;
            }
          }
LAB_145c5a2f0:
          local_628 = (longlong *)(local_478 + 8);
          uVar21 = local_448 & 0xffffffe0;
          uStack_604 = uStack_664;
          local_618 = (TBitArray<FDefaultBitArrayAllocator> *)(local_470 + 0x10);
          uStack_610 = 0xffffffff;
          uStack_620 = uVar24;
          iStack_600 = local_470._8_4_ - iStack_43c;
          local_5c8 = (longlong *)(local_478 + 8);
          TStack_5c0._padding_ = CONCAT44(uStack_61c,uVar24);
          iVar17 = (int)local_448 >> 5;
          bVar14 = (byte)_local_448;
          TStack_5c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_470 + 0x10);
          TStack_5c0.UnvisitedBitMask = 0xffffffff;
          TStack_5c0.CurrentBitIndex = uStack_60c;
          TStack_5c0.BaseBitIndex = local_608;
          TStack_5c0._28_4_ = uStack_664;
          uStack_5a0 = CONCAT44(uStack_5fc,local_470._8_4_ - iStack_43c);
          if ((int)local_448 < 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (uVar27 != local_448) {
            puVar25 = (uint *)(local_470 + 0x10);
            if (local_450 != (uint *)0x0) {
              puVar25 = local_450;
            }
            uVar24 = -1 << (bVar14 & 0x1f) & puVar25[iVar17];
            while (uVar24 == 0) {
              lVar18 = (longlong)iVar17;
              uVar21 = uVar21 + 0x20;
              iVar17 = iVar17 + 1;
              uVar27 = local_448;
              if ((int)((local_448 - 1) + ((int)(local_448 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_145c5a403;
              uVar24 = puVar25[lVar18 + 1];
            }
            uVar28 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
            lVar18 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            local_644 = (int)lVar18;
            uVar27 = local_644 + -1 + uVar21;
            if ((int)local_448 < (int)uVar27) {
              uVar27 = local_448;
            }
          }
LAB_145c5a403:
          while( true ) {
            plVar13 = local_5c8;
            if ((int)local_5c8[1] - *(int *)((longlong)local_5c8 + 0x34) != (int)uStack_5a0) {
              local_6e7[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_6e7);
            }
            if (((TStack_5c0.CurrentBitIndex == uVar27) &&
                (TStack_5c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_470 + 0x10))) &&
               (plVar13 == (longlong *)(local_478 + 8))) break;
            lVar15 = *plVar13;
            lVar22 = (longlong)TStack_5c0.CurrentBitIndex * 0xc0;
            lVar18 = lVar22 + lVar15;
            if (local_6e0 < *(longlong *)(lVar18 + 0xa8)) {
              FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData
                        (&local_3b8,(FPipelineCacheFileFormatPSOMetaData *)(lVar18 + 8));
              if ((((local_6d8.Guid.D == *(uint *)(lVar22 + 0x24 + lVar15) &&
                    local_6d8.Guid.C == *(uint *)(lVar22 + 0x20 + lVar15)) &&
                   local_6d8.Guid.B == *(uint *)(lVar22 + 0x1c + lVar15)) &&
                   local_6d8.Guid.A == *(uint *)(lVar22 + 0x18 + lVar15)) &&
                 (uVar2 = *(ulong64 *)(lVar22 + 0x10 + lVar15), uVar2 != 0)) {
                local_3b8.FileOffset = local_4b8;
                local_308.ComputeDesc.ComputeShader.Hash[0x10] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0x11] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0x12] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0x13] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[1] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[2] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[3] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[4] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[5] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[6] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[7] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[8] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[9] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[10] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0xb] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0xc] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0xd] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0xe] = '\0';
                local_308.ComputeDesc.ComputeShader.Hash[0xf] = '\0';
                local_3b8.FileSize = uVar2;
                FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor
                          (&local_308.GraphicsDesc);
                FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
                FPipelineFileCacheRayTracingDesc(&local_308.RayTracingDesc);
                (**(code **)(*(longlong *)pFVar10 + 0x1b8))(pFVar10,*(undefined8 *)(lVar18 + 8));
                ::operator<<(pFVar10,&local_308);
                ::operator<<((FArchive *)&local_548,&local_308);
                puVar23 = local_40;
                lVar18 = 8;
                do {
                  puVar1 = (undefined8 *)(puVar23 + -0x18);
                  puVar23 = puVar23 + -0x18;
                  lVar18 = lVar18 + -1;
                  if ((void *)*puVar1 != (void *)0x0) {
                    FMemory::Free((void *)*puVar1);
                  }
                } while (lVar18 != 0);
              }
              if ((((local_3b8.FileGuid.D == 0 && local_3b8.FileGuid.C == 0) &&
                   local_3b8.FileGuid.B == 0) && local_3b8.FileGuid.A == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NewEntry.FileGuid != FGuid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                     ,0x844,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AddUninitialized((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)local_410,&local_560);
              pvVar6 = local_560.Pointer;
              pTVar20 = (TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>
                         *)0x0;
              if (local_560.Pointer !=
                  (TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_> *)
                  0x0) {
                *(undefined4 *)local_560.Pointer = *(undefined4 *)(lVar22 + lVar15);
                FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData
                          ((FPipelineCacheFileFormatPSOMetaData *)((longlong)local_560.Pointer + 8),
                           &local_3b8);
                *(undefined4 *)((longlong)pvVar6 + 0xb8) = 0xffffffff;
                pTVar20 = pvVar6;
              }
              uVar24 = *(uint *)pTVar20;
              local_6e4 = local_560.Index;
              bVar7 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                      ::TryReplaceExisting
                                ((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                                  *)local_410,uVar24,pTVar20,&local_6e4,(bool *)0x0);
              if (!bVar7) {
                TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                ::RehashOrLink((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                                *)local_410,uVar24,pTVar20,local_6e4);
              }
              local_3b8.Shaders.HashSize = 0;
              if (local_3b8.Shaders.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_3b8.Shaders.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_3b8.Shaders.Elements);
            }
            TStack_5c0.UnvisitedBitMask = TStack_5c0.UnvisitedBitMask & ~TStack_5c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5c0);
          }
          local_598.TableOffset = local_4b8;
          ::operator<<((FArchive *)&local_548,(FPipelineCacheFileFormatTOC *)local_418);
          local_4b8 = 0;
          ::operator<<((FArchive *)&local_548,&local_598);
          if (4 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                        ::__l230::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          (**(code **)(*(longlong *)pFVar10 + 0x30))(pFVar10);
          (**(code **)(*(longlong *)pFVar10 + 0x210))(pFVar10);
          (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
          pIVar9 = IFileManager::Get();
          pFVar5 = local_698;
          pwVar19 = L"";
          if ((local_698->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(local_698->Data).AllocatorInstance.Data;
          }
          cVar8 = (**(code **)((longlong)*pIVar9 + 0x50))(pIVar9,pwVar16);
          if (cVar8 != '\0') {
            pIVar9 = IFileManager::Get();
            if ((pFVar5->Data).ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
            }
            (**(code **)((longlong)*pIVar9 + 0x38))(pIVar9,pwVar16,0,0);
          }
          pIVar9 = IFileManager::Get();
          if ((pFVar5->Data).ArrayNum != 0) {
            pwVar19 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
          plVar13 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,pwVar19,0);
          if (plVar13 == (longlong *)0x0) {
            if (4 < (byte)LogRHI._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                          ::__l254::LOG_Static,(FLogCategoryBase *)&LogRHI);
            }
          }
          else {
            (**(code **)(*plVar13 + 0x188))(plVar13,local_690,(longlong)*(int *)(local_4b0 + 1));
            (**(code **)(*plVar13 + 0x210))(plVar13);
            (**(code **)*plVar13)(plVar13,1);
            if (4 < (byte)LogRHI._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                          ::__l272::LOG_Static,(FLogCategoryBase *)&LogRHI);
            }
          }
          local_3c8 = 0;
          if (local_3d0 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_3d0);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_410);
          FArchive::~FArchive((FArchive *)&local_548);
          pFVar10 = (FArchive *)0x0;
          if (local_690 != (void *)0x0) {
            FMemory::Free(local_690);
            pFVar10 = (FArchive *)0x0;
          }
        }
      }
      local_428 = 0;
      if (local_430 != (void *)0x0) {
        FMemory::Free(local_430);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_478 + 8));
      if (pFVar10 == (FArchive *)0x0) goto LAB_145c59f5e;
      goto LAB_145c59f40;
    }
    auVar30._0_8_ = (double)(lVar18 - lVar11) * __real_416312d000000000 + __real_3fe0000000000000;
    auVar30._8_8_ = 0;
    roundpd(extraout_XMM0_00,auVar30,1);
    if ((byte)LogRHI._0_1_ < 5) goto LAB_145c59f40;
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                ::__l87::LOG_Static,(FLogCategoryBase *)&LogRHI);
    (**(code **)(*(longlong *)pFVar10 + 0x210))(pFVar10);
  }
  else {
    if (1 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'
                  ::__l66::LOG_Static,(FLogCategoryBase *)&LogRHI);
      (**(code **)(*(longlong *)pFVar10 + 0x210))(pFVar10);
      goto LAB_145c59f51;
    }
LAB_145c59f40:
    (**(code **)(*(longlong *)pFVar10 + 0x210))(pFVar10);
    if (pFVar10 == (FArchive *)0x0) goto LAB_145c59f5e;
  }
LAB_145c59f51:
  (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
LAB_145c59f5e:
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_`public:_void___cdecl_FPipelineCacheFile::GarbageCollectUserCache(FString_const&___ptr64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

// GetOrderedPSOHashes @ 145c5af70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPipelineCacheFile::GetOrderedPSOHashes
          (FPipelineCacheFile *this,
          TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_> *param_1,PSOOrder param_2,
          long64 param_3,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  long64 lVar7;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint *puVar15;
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *this_00;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 auStackY_188 [32];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [6];
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
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
  int local_fc;
  FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
  local_f8;
  FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>
  local_f0;
  long64 local_e8;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_e8 = param_3;
  if (param_2 != (this->TOC).SortedOrder) {
    pTVar11 = &(this->TOC).MetaData;
    if (param_2 == FirstToLatestUsed) {
      local_f0.Predicate.Predicate =
           (TDereferenceWrapper<FPipelineCacheFileFormatPSOMetaData,_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>
            )local_136;
      TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>
                ((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                  *)pTVar11,&local_f0);
    }
    else if (param_2 == MostToLeastUsed) {
      local_f8.Predicate.Predicate =
           (TDereferenceWrapper<FPipelineCacheFileFormatPSOMetaData,_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
            )&local_137;
      TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>
                ((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                  *)pTVar11,&local_f8);
    }
    (this->TOC).SortedOrder = param_2;
  }
  iVar10 = *(int *)&(this->TOC).MetaData.field_0x28;
  puVar1 = &(this->TOC).MetaData.field_0x10;
  iStack_128 = 0;
  pTVar11 = &(this->TOC).MetaData;
  local_110 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  if (iVar10 != 0) {
    puVar15 = *(uint **)&(this->TOC).MetaData.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar17 = *puVar15;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      iStack_114 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_145c5b06e;
      uVar17 = puVar15[lVar12 + 1];
    }
    uStack_124 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_124 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_100 = (int)lVar12;
    iStack_114 = local_100 + -1 + local_110;
    if (iVar10 < iStack_114) {
      iStack_114 = iVar10;
    }
  }
LAB_145c5b06e:
  uVar17 = *(uint *)&(this->TOC).MetaData.field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_108 = *(int *)&(this->TOC).MetaData.field_0x8 - *(int *)&(this->TOC).MetaData.field_0x34;
  uStack_118 = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_124,iStack_128);
  TStack_d8.CurrentBitIndex = iStack_114;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_d8._28_4_ = iStack_114;
  TStack_d8.BaseBitIndex = local_110;
  uStack_b8 = CONCAT44(uStack_104,iStack_108);
  local_130 = pTVar11;
  local_120 = puVar1;
  iStack_10c = iStack_114;
  local_e0 = pTVar11;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar10 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar7 = local_e8;
  uVar3 = *(uint *)&(this->TOC).MetaData.field_0x28;
  if (uVar17 != uVar3) {
    puVar18 = *(undefined1 **)&(this->TOC).MetaData.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145c5b180;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_fc = (int)lVar12;
    uVar17 = local_fc + -1 + uVar16;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_145c5b180:
  do {
    pTVar8 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      local_138 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_138);
    }
    if (((TStack_d8.CurrentBitIndex == uVar17) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar11))
    {
      return;
    }
    puVar15 = (uint *)(*(longlong *)pTVar8 + (longlong)TStack_d8.CurrentBitIndex * 0xc0);
    if ((((puVar15[0x2c] & 1) == 0) &&
        (bVar9 = (*FPipelineFileCacheManager::MaskComparisonFn)
                           (FPipelineFileCacheManager::GameUsageMask,*(ulong64 *)(puVar15 + 0x28)),
        bVar9)) && (lVar7 <= *(longlong *)(puVar15 + 0x10))) {
      uVar16 = *puVar15;
      if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
        FVar4 = (param_4->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&param_4->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar4;
        }
        iVar10 = *(int *)((longlong)FVar13 + (ulonglong)(param_4->HashSize - 1U & uVar16) * 4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar10 * 0xc) == uVar16) {
              if (iVar10 != -1) goto LAB_145c5b3df;
              break;
            }
            iVar10 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar10 * 0xc);
          } while (iVar10 != -1);
        }
      }
      local_7c = 0x80;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      local_a8._8_8_ = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_74 = 0;
      local_68 = (ForElementType<FSetElementId>)0x0;
      local_60 = 0;
      local_78 = 0xffffffff;
      local_58 = uVar16;
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=
                ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_a8,
                 (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)(puVar15 + 0x14)
                );
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_a8) &&
          ((FScriptContainerElement *)local_a8 < pFVar5 + (longlong)param_1->ArrayMax * 0x58)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == param_1->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar10 + 1;
      this_00 = (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                ((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x58);
      *(undefined8 *)&this_00->Elements = 0;
      *(undefined8 *)&(this_00->Elements).field_0x8 = 0;
      *(undefined8 *)&(this_00->Elements).field_0x20 = 0;
      *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
      *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
      (this_00->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      this_00->HashSize = 0;
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=
                (this_00,(TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_a8
                );
      *(uint *)&this_00[1].Elements = local_58;
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      iVar10 = SUB84(local_a8._8_8_,4);
      local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
      if (iVar10 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_80 = 0;
      if (0x80 < local_7c) {
        local_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
    }
LAB_145c5b3df:
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  } while( true );
}

// IsBSSEquivalentPSOEntryCachedInternal @ 145c5ffa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall
FPipelineCacheFile::IsBSSEquivalentPSOEntryCachedInternal
          (FPipelineCacheFile *this,FPipelineCacheFileFormatPSO *param_1)

{
  FSHAHash *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  TSparseSetElement<FSHAHash> *pTVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  longlong lVar18;
  ForElementType<unsigned_int> FVar19;
  TSparseSetElement<FSHAHash> *pTVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [4];
  uint local_1f4;
  int local_1f0 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_1e0;
  int local_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined4 local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  int local_1a0;
  int local_19c;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  FSparseArrayAllocationInfo local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  undefined4 local_94;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar25 = &(this->TOC).MetaData;
  local_1e0 = pTVar25;
  uVar8 = ::GetTypeHash(param_1);
  pTVar20 = (TSparseSetElement<FSHAHash> *)0x0;
  if (*(int *)&(this->TOC).MetaData.field_0x8 != *(int *)&(this->TOC).MetaData.field_0x34) {
    puVar16 = *(undefined1 **)&(this->TOC).MetaData.field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->TOC).MetaData.field_0x38;
    }
    uVar15 = *(uint *)(puVar16 +
                      (ulonglong)(*(int *)&(this->TOC).MetaData.field_0x48 - 1U & uVar8) * 4);
    if (uVar15 != 0xffffffff) {
      do {
        puVar17 = (uint *)((longlong)(int)uVar15 * 0xc0 + *(longlong *)pTVar25);
        if (*puVar17 == uVar8) {
          pTVar11 = (TSparseSetElement<FSHAHash> *)(puVar17 + 2);
          if (puVar17 == (uint *)0x0) {
            pTVar11 = pTVar20;
          }
          if ((pTVar11 != (TSparseSetElement<FSHAHash> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsPSOEntryCachedInternal(NewEntry)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                 ,0xb18,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          break;
        }
        uVar15 = puVar17[0x2e];
      } while (uVar15 != 0xffffffff);
    }
  }
  if (param_1->Type != Graphics) {
    return false;
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                     (int *)(local_88 + 0xc));
  iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                     ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
  FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FVar19 = local_68;
  }
  uVar8 = iVar10 >> 0x1f & 0x1f;
  iVar10 = iVar10 + uVar8;
  puVar17 = (uint *)((longlong)FVar19 + (longlong)(iVar10 >> 5) * 4);
  *puVar17 = *puVar17 & ~(1 << (((byte)iVar10 & 0x1f) - (char)uVar8 & 0x1f));
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_88,&local_110,iVar9);
  if (local_110.Pointer != (TSparseSetElement<FSHAHash> *)0x0) {
    uVar4 = *(undefined8 *)((param_1->GraphicsDesc).VertexShader.Hash + 8);
    *(undefined8 *)local_110.Pointer = *(undefined8 *)(param_1->GraphicsDesc).VertexShader.Hash;
    *(undefined8 *)((longlong)local_110.Pointer + 8) = uVar4;
    *(undefined4 *)((longlong)local_110.Pointer + 0x10) =
         *(undefined4 *)((param_1->GraphicsDesc).VertexShader.Hash + 0x10);
    *(undefined4 *)((longlong)local_110.Pointer + 0x14) = 0xffffffff;
    pTVar20 = local_110.Pointer;
  }
  uVar8 = *(uint *)pTVar20;
  local_1f0[0] = local_110.Index;
  bVar6 = TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::TryReplaceExisting
                    ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_88,
                     uVar8,pTVar20,local_1f0,(bool *)0x0);
  if (bVar6) goto LAB_145c60469;
  uVar21 = 1;
  uVar15 = local_88._8_4_ - local_54;
  if (3 < uVar15) {
    uVar23 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1b8 = (undefined4)lVar18;
    uVar21 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar15 < 1) || ((int)uVar21 <= (int)local_40)) {
    uVar8 = local_40 - 1 & uVar8;
    *(uint *)&pTVar20->field_0x18 = uVar8;
    FVar13.Data = (FScriptContainerElement *)local_50;
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      FVar13.Data = local_48.Data;
    }
    uVar23 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar8;
    *(undefined4 *)&pTVar20->field_0x14 = *(undefined4 *)((longlong)FVar13.Data + uVar23 * 4);
    *(int *)((longlong)FVar13.Data + uVar23 * 4) = local_1f0[0];
    goto LAB_145c60469;
  }
  local_40 = uVar21;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar21 != 0) {
    uVar8 = uVar21;
    if (uVar21 < 2) {
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        uVar8 = 0;
        goto LAB_145c60250;
      }
    }
    else {
LAB_145c60250:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,4);
    }
    if (0 < (int)uVar21) {
      uVar23 = 0;
      uVar24 = (ulonglong)uVar21;
      do {
        FVar13.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar13.Data = local_48.Data;
        }
        uVar12 = (longlong)(int)uVar21 - 1U & uVar23;
        uVar23 = uVar23 + 1;
        *(undefined4 *)((longlong)FVar13.Data + uVar12 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_1d8 = 0;
    uStack_1d4 = 1;
    iStack_1c4 = 0;
    iStack_1c0 = 0;
    if (local_60 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_68;
      }
      uVar8 = *(uint *)FVar19;
      iStack_1c0 = 0;
      local_1d8 = 0;
      while (uVar8 == 0) {
        iStack_1c0 = iStack_1c0 + 0x20;
        lVar18 = (longlong)local_1d8;
        local_1d8 = local_1d8 + 1;
        if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1d8)
        goto LAB_145c60379;
        uVar8 = ((uint *)((longlong)FVar19 + 4))[lVar18];
      }
      uStack_1d4 = -uVar8 & uVar8;
      uVar23 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1b4 = (int)lVar18;
      iStack_1c4 = local_1b4 + -1 + iStack_1c0;
      if (local_60 < iStack_1c4) {
LAB_145c60379:
        iStack_1c4 = local_60;
      }
    }
    local_1c8 = 0xffffffff;
    local_198 = (longlong *)local_88;
    local_190._padding_ = CONCAT44(uStack_1d4,local_1d8);
    local_190.CurrentBitIndex = iStack_1c4;
    local_190.UnvisitedBitMask = 0xffffffff;
    local_190._28_4_ = uStack_1bc;
    local_190.BaseBitIndex = iStack_1c0;
    iVar9 = iStack_1c4;
    local_190.Array = pTStack_1d0;
    if (iStack_1c4 < local_60) {
      do {
        puVar17 = (uint *)((longlong)iVar9 * 0x1c + *local_198);
        uVar8 = local_40 - 1 & *puVar17;
        puVar17[6] = uVar8;
        FVar13.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar13.Data = local_48.Data;
        }
        uVar23 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar8;
        puVar17[5] = *(uint *)((longlong)FVar13.Data + uVar23 * 4);
        *(int *)((longlong)FVar13.Data + uVar23 * 4) = iVar9;
        local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
        iVar9 = local_190.CurrentBitIndex;
      } while (local_190.CurrentBitIndex < (local_190.Array)->NumBits);
    }
  }
LAB_145c60469:
  iVar9 = 0;
  pFVar1 = &(param_1->GraphicsDesc).FragmentShader;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  if (((*(longlong *)pFVar1->Hash != 0) ||
      (*(longlong *)((param_1->GraphicsDesc).FragmentShader.Hash + 8) != 0)) ||
     (*(int *)((param_1->GraphicsDesc).FragmentShader.Hash + 0x10) != 0)) {
    TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
              ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_88,
               (FSHAHash *)local_1b0,(bool *)pFVar1);
  }
  pFVar1 = &(param_1->GraphicsDesc).GeometryShader;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  if (((*(longlong *)pFVar1->Hash != 0) ||
      (*(longlong *)((param_1->GraphicsDesc).GeometryShader.Hash + 8) != 0)) ||
     (*(int *)((param_1->GraphicsDesc).GeometryShader.Hash + 0x10) != 0)) {
    TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
              ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_88,
               (FSHAHash *)(local_1b0 + 4),(bool *)pFVar1);
  }
  pFVar1 = &(param_1->GraphicsDesc).MeshShader;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  if (((*(longlong *)pFVar1->Hash != 0) ||
      (*(longlong *)((param_1->GraphicsDesc).MeshShader.Hash + 8) != 0)) ||
     (*(int *)((param_1->GraphicsDesc).MeshShader.Hash + 0x10) != 0)) {
    TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
              ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_88,
               (FSHAHash *)local_1a8,(bool *)pFVar1);
  }
  pFVar1 = &(param_1->GraphicsDesc).AmplificationShader;
  local_c4 = 0;
  uStack_bc = 0;
  local_b4 = 0;
  if (((*(longlong *)pFVar1->Hash != 0) ||
      (*(longlong *)((param_1->GraphicsDesc).AmplificationShader.Hash + 8) != 0)) ||
     (*(int *)((param_1->GraphicsDesc).AmplificationShader.Hash + 0x10) != 0)) {
    TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
              ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)local_88,
               (FSHAHash *)(local_1a8 + 4),(bool *)pFVar1);
  }
  iVar10 = *(int *)&(this->TOC).MetaData.field_0x28;
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TOC).MetaData.field_0x10;
  local_150 = 0;
  uStack_164 = 1;
  iStack_154 = iVar9;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->TOC).MetaData.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar26;
    }
    uVar8 = *puVar17;
    while (uVar8 == 0) {
      lVar18 = (longlong)iVar9;
      local_150 = local_150 + 0x20;
      iVar9 = iVar9 + 1;
      iStack_154 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145c605fe;
      uVar8 = puVar17[lVar18 + 1];
    }
    uStack_164 = -uVar8 & uVar8;
    uVar23 = (ulonglong)uStack_164 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1a0 = (int)lVar18;
    iStack_154 = local_150 + -1 + local_1a0;
    if (iVar10 < iStack_154) {
      iStack_154 = iVar10;
    }
  }
LAB_145c605fe:
  uVar8 = *(uint *)&(this->TOC).MetaData.field_0x28;
  uStack_14c = local_94;
  iStack_148 = *(int *)&(this->TOC).MetaData.field_0x8 - *(int *)&(this->TOC).MetaData.field_0x34;
  uVar15 = uVar8 & 0xffffffe0;
  uStack_158 = 0xffffffff;
  TStack_138._padding_ = CONCAT44(uStack_164,iVar9);
  TStack_138.CurrentBitIndex = iStack_154;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar8 >> 5;
  TStack_138._28_4_ = local_94;
  TStack_138.BaseBitIndex = local_150;
  uStack_118 = CONCAT44(uStack_144,iStack_148);
  local_1f4 = uVar8;
  local_1e8 = pTVar26;
  local_170 = pTVar25;
  iStack_168 = iVar9;
  local_160 = (undefined1 *)pTVar26;
  local_140 = pTVar25;
  TStack_138.Array = pTVar26;
  if ((((int)uVar8 < 0) || (iVar10 < (int)uVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  uVar21 = *(uint *)&(this->TOC).MetaData.field_0x28;
  if (uVar8 != uVar21) {
    puVar16 = *(undefined1 **)&(this->TOC).MetaData.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar26;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar22 * 4);
    while (uVar8 == 0) {
      lVar18 = (longlong)iVar22;
      uVar15 = uVar15 + 0x20;
      iVar22 = iVar22 + 1;
      uVar8 = uVar21;
      local_1f4 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_145c60701;
      uVar8 = *(uint *)(puVar16 + lVar18 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_19c = (int)lVar18;
    uVar8 = local_19c + -1 + uVar15;
    local_1f4 = uVar8;
    if ((int)uVar21 < (int)uVar8) {
      uVar8 = uVar21;
      local_1f4 = uVar21;
    }
  }
LAB_145c60701:
  do {
    pTVar5 = local_140;
    if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
      local_1f8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    if (((TStack_138.CurrentBitIndex == uVar8) && (TStack_138.Array == pTVar26)) &&
       (pTVar5 == pTVar25)) {
      bVar6 = false;
LAB_145c6088b:
      local_40 = 0;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return bVar6;
    }
    lVar18 = (longlong)TStack_138.CurrentBitIndex * 0xc0 + *(longlong *)pTVar5;
    if (local_88._8_4_ == *(int *)(lVar18 + 0x58)) {
      iVar9 = 0;
      if ((int)local_88._8_4_ < 1) {
LAB_145c60860:
        bVar6 = true;
        goto LAB_145c6088b;
      }
      while( true ) {
        if (((iVar9 < 0) || (local_60 <= iVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        FVar19 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_68;
        }
        uVar15 = 1 << ((byte)iVar9 & 0x1f);
        iVar10 = iVar9;
        if (iVar9 < 0) {
          iVar10 = iVar9 + 0x1f;
        }
        lVar2 = (longlong)(iVar10 >> 5) * 4;
        uVar21 = uVar15 & *(uint *)(lVar2 + (longlong)FVar19);
        if (((iVar9 < 0) || (*(int *)(lVar18 + 0x78) <= iVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        lVar14 = lVar18 + 0x60;
        if (*(longlong *)(lVar18 + 0x70) != 0) {
          lVar14 = *(longlong *)(lVar18 + 0x70);
        }
        pTVar25 = local_1e0;
        pTVar26 = local_1e8;
        uVar8 = local_1f4;
        if ((uVar21 != 0) != ((*(uint *)(lVar2 + lVar14) & uVar15) != 0)) break;
        if (uVar21 != 0) {
          lVar2 = *(longlong *)(lVar18 + 0x50);
          lVar14 = (longlong)iVar9 * 0x1c;
          if (((*(longlong *)(local_88._0_8_ + lVar14) != *(longlong *)(lVar2 + lVar14)) ||
              (*(longlong *)(local_88._0_8_ + lVar14 + 8) != *(longlong *)(lVar2 + 8 + lVar14))) ||
             (*(int *)(local_88._0_8_ + lVar14 + 0x10) != *(int *)(lVar2 + 0x10 + lVar14))) break;
        }
        iVar9 = iVar9 + 1;
        if ((int)local_88._8_4_ <= iVar9) goto LAB_145c60860;
      }
    }
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  } while( true );
}

// MergePSOUsageToMetaData @ 145c621d0

void __cdecl
FPipelineCacheFile::MergePSOUsageToMetaData
          (TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
           *param_1,
          TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
          *param_2,long64 param_3,bool param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
              *)param_1);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  if ((int)local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    uVar8 = local_78._28_4_;
    local_18 = (TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
                *)param_1;
    do {
      puVar9 = (uint *)((longlong)(int)uVar5 * 0x20 + *local_48);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar7 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&param_2->field_0x40;
        }
        uVar2 = *(uint *)(puVar7 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & *puVar9) * 4);
        if (uVar2 != 0xffffffff) {
          do {
            puVar4 = (uint *)((longlong)(int)uVar2 * 0xc0 + *(longlong *)param_2);
            if (*puVar4 == *puVar9) {
              puVar6 = puVar4 + 2;
              if (puVar4 == (uint *)0x0) {
                puVar6 = (uint *)0x0;
              }
              if (puVar6 != (uint *)0x0) {
                *(ulonglong *)(puVar6 + 0x26) =
                     *(ulonglong *)(puVar6 + 0x26) | *(ulonglong *)(puVar9 + 2);
                *(ushort *)(puVar6 + 0x2a) = (ushort)puVar6[0x2a] | (ushort)puVar9[5];
                *(long64 *)(puVar6 + 0x28) = param_3;
                if (param_4) {
                  TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_20,uVar8);
                  local_10 = '\x01';
                }
              }
              break;
            }
            uVar2 = puVar4[0x2e];
          } while (uVar2 != 0xffffffff);
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
      uVar8 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar3 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// OpenPipelineFileCache @ 145c64af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPipelineCacheFile::OpenPipelineFileCache
          (FPipelineCacheFile *this,FString *param_1,EShaderPlatform param_2,FGuid *param_3)

{
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *this_00;
  ulonglong uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  TConsoleVariableData<int> *pTVar5;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  FNameEntryId FVar11;
  FName FVar12;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar13;
  size_t sVar14;
  FName FVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_FileCacheMemory> FVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  wchar_t *pwVar18;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  uint *puVar22;
  FName FVar23;
  undefined1 *puVar24;
  FName FVar25;
  FNameEntryId FVar26;
  FName FVar27;
  uint uVar28;
  uchar auVar29 [8];
  undefined1 auStackY_328 [32];
  uint local_2c4;
  undefined1 local_2c0 [8];
  FName local_2b8;
  FString *local_2b0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_288;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_278;
  int local_268;
  undefined1 local_264 [12];
  FString local_258;
  FStatMessage local_248;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined1 *local_228;
  undefined4 uStack_220;
  int iStack_21c;
  uint local_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  uint *local_1d8;
  FName *local_1d0;
  undefined1 local_1c8 [8];
  FName local_1c0;
  FString local_1b8;
  FString local_1a8 [2];
  undefined4 local_17c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2b0 = param_1;
  if ((this->CacheStatus != Unknown) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheStatus == EStatus::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x869,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
  FVar15.ComparisonIndex.Value = 0;
  FVar25.ComparisonIndex.Value = 0;
  this_00 = &(this->TOC).MetaData;
  local_298 = 0;
  uStack_290 = 0;
  param_3->A = 0;
  param_3->B = 0;
  param_3->C = 0;
  param_3->D = 0;
  (this->TOC).SortedOrder = Default;
  bVar7 = 1 < *(int *)&(this->TOC).MetaData.field_0x48;
  if (!bVar7) {
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->TOC).MetaData.field_0x8);
  puVar24 = &(this->TOC).MetaData.field_0xc;
  *(undefined4 *)&(this->TOC).MetaData.field_0x8 = 0;
  if (*(int *)puVar24 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,0,(ForAnyElementType *)this_00,0,(int *)puVar24);
  }
  *(undefined4 *)&(this->TOC).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TOC).MetaData.field_0x34 = 0;
  iVar10 = *(int *)&(this->TOC).MetaData.field_0x2c;
  *(undefined4 *)&(this->TOC).MetaData.field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->TOC).MetaData.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TOC).MetaData.field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->TOC).MetaData.field_0x48 = 1;
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  ::FString::operator=(&this->Name,local_2b0);
  this->ShaderPlatform = param_2;
  FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1c8);
  this->PlatformName = *(FName *)FVar12;
  ::FName::ToString(&this->PlatformName,local_1a8);
  ::FString::PrintfImpl(&local_258,L"%s_%s.stable.upipelinecache");
  local_178._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,"Windows",7,Yes);
  pTVar13 = &FPaths::ProjectContentDir(&local_1b8)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_278,pTVar13,0x10 - (uint)(pTVar13->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_278,L"PipelineCaches",0xe);
  sVar14 = wcslen(local_178.Ptr);
  iVar10 = (int)sVar14;
  if ((local_278.ArrayNum != 0) || (iVar21 = 2, iVar10 == -1)) {
    iVar21 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_288,&local_278,iVar21 + iVar10);
  ::FString::PathAppend((FString *)&local_288,local_178.Ptr,iVar10);
  uVar28 = local_258.Data.ArrayNum - 1;
  if (local_258.Data.ArrayNum == 0) {
    uVar28 = FVar25.ComparisonIndex.Value;
  }
  if ((local_288.ArrayNum != 0) || (iVar10 = 2, uVar28 == 0xffffffff)) {
    iVar10 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_2a8,&local_288,iVar10 + uVar28);
  ::FString::PathAppend
            ((FString *)&local_2a8,(wchar_t *)local_258.Data.AllocatorInstance.Data,uVar28);
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_1a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8[0].Data.AllocatorInstance.Data);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar18 = FCommandLine::Get();
    `public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
    ::__l2::bCommandLineNotStable = FParse::Param(pwVar18,L"nostablepipelinecache");
    _Init_thread_footer(&`public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
      ::__l2::bCommandLineNotStable != false) {
    ::FString::Empty((FString *)&local_2a8);
  }
  bVar7 = OpenPipelineFileCache
                    ((FString *)&local_2a8,this->ShaderPlatform,&this->FileGuid,
                     &this->AsyncFileHandle,&this->TOC,&this->TOCOffset);
  if (!bVar7) goto LAB_145c64e9f;
  iVar10 = local_2a8.ArrayNum + -1;
  if (local_2a8.ArrayNum == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange(&this->FilePath,(wchar_t *)local_2a8.AllocatorInstance.Data,iVar10);
  uVar28 = (this->FileGuid).B;
  uVar3 = (this->FileGuid).C;
  uVar4 = (this->FileGuid).D;
  param_3->A = (this->FileGuid).A;
  param_3->B = uVar28;
  param_3->C = uVar3;
  param_3->D = uVar4;
  this->CacheStatus = BundledCache;
  pTVar5 = CVarLazyLoadShadersWhenPSOCacheIsPresent.Ref;
  if (GRHIGlobals.SupportsLazyShaderCodeLoading == false) goto LAB_145c64e9f;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_145c64e74:
    FVar12 = FVar23;
  }
  else {
    bVar9 = IsInGameThread();
    FVar12.ComparisonIndex.Value = 4;
    FVar12.Number = 0;
    if (bVar9) goto LAB_145c64e74;
  }
  if (*(int *)((longlong)pTVar5->ShadowedValue + (longlong)FVar12) != 0) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
                  ::__l19::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    GRHIGlobals.LazyShaderCodeLoading = true;
  }
LAB_145c64e9f:
  iVar10 = *(int *)&(this->TOC).MetaData.field_0x28;
  local_228 = &(this->TOC).MetaData.field_0x10;
  uStack_22c = 1;
  iStack_21c = 0;
  if (iVar10 != 0) {
    puVar22 = *(uint **)&(this->TOC).MetaData.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)local_228;
    }
    uVar28 = *puVar22;
    FVar12 = FVar23;
    FVar27 = FVar23;
    FVar15.ComparisonIndex.Value = 0;
    while (uVar28 == 0) {
      FVar25.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value + 0x20;
      FVar25.Number = 0;
      FVar15.ComparisonIndex.Value = FVar12.ComparisonIndex.Value.Value + 1;
      FVar15.Number = 0;
      iStack_21c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <
          (int)FVar15.ComparisonIndex.Value) goto LAB_145c64f1d;
      uVar28 = puVar22[(longlong)(int)FVar12.ComparisonIndex.Value.Value + 1];
      FVar12 = FVar15;
      FVar27 = FVar25;
    }
    uStack_22c = -uVar28 & uVar28;
    uVar1 = (ulonglong)uStack_22c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_268 = (int)lVar19;
    iStack_21c = (FVar25.ComparisonIndex.Value - 1) + local_268;
    if (iVar10 < iStack_21c) {
      iStack_21c = iVar10;
    }
  }
LAB_145c64f1d:
  local_2c4 = *(uint *)&(this->TOC).MetaData.field_0x28;
  uStack_214 = local_17c;
  iStack_210 = *(int *)&(this->TOC).MetaData.field_0x8 - *(int *)&(this->TOC).MetaData.field_0x34;
  uVar28 = local_2c4 & 0xffffffe0;
  TStack_200._padding_ = CONCAT44(uStack_22c,FVar15.ComparisonIndex.Value);
  uStack_220 = 0xffffffff;
  TStack_200.CurrentBitIndex = iStack_21c;
  TStack_200.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)local_2c4 >> 5;
  TStack_200._28_4_ = local_17c;
  TStack_200.BaseBitIndex = FVar25.ComparisonIndex.Value;
  uStack_1e0 = CONCAT44(uStack_20c,iStack_210);
  local_238 = this_00;
  uStack_230 = FVar15.ComparisonIndex.Value;
  local_218 = FVar25.ComparisonIndex.Value;
  local_208 = this_00;
  TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_228;
  if ((((int)local_2c4 < 0) || (iVar10 < (int)local_2c4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  FVar25.ComparisonIndex.Value = *(uint *)&(this->TOC).MetaData.field_0x28;
  FVar27 = FVar23;
  if (local_2c4 != FVar25.ComparisonIndex.Value) {
    puVar24 = *(undefined1 **)&(this->TOC).MetaData.field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = &(this->TOC).MetaData.field_0x10;
    }
    FVar15.ComparisonIndex.Value =
         -1 << ((byte)local_2c4 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar21 * 4);
    while (FVar15.ComparisonIndex.Value == 0) {
      lVar19 = (longlong)iVar21;
      uVar28 = uVar28 + 0x20;
      iVar21 = iVar21 + 1;
      local_2c4 = FVar25.ComparisonIndex.Value;
      if ((int)((FVar25.ComparisonIndex.Value - 1) +
               ((int)(FVar25.ComparisonIndex.Value - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_145c65040;
      FVar15.ComparisonIndex.Value = *(uint *)(puVar24 + lVar19 * 4 + 4);
    }
    uVar1 = (ulonglong)(-FVar15.ComparisonIndex.Value & FVar15.ComparisonIndex.Value) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_2c4 = (uVar28 - 1) + (int)lVar19;
    if ((int)FVar25.ComparisonIndex.Value < (int)local_2c4) {
      local_2c4 = FVar25.ComparisonIndex.Value;
    }
  }
LAB_145c65040:
  do {
    pTVar6 = local_208;
    if (*(int *)(&local_208->field_0x0 + 8) - *(int *)(&local_208->field_0x0 + 0x34) !=
        (int)uStack_1e0) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2c0);
    }
    FVar26 = FVar27.ComparisonIndex.Value;
    if (((TStack_200.CurrentBitIndex == local_2c4) &&
        (TStack_200.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->TOC).MetaData.field_0x10)) &&
       (pTVar6 == this_00)) {
      if ((FVar26.Value != 0) && (2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
                    ::__l72::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      FVar25.ComparisonIndex.Value = *(uint *)&(this->TOC).MetaData.field_0x48;
      if (1 < FVar25.ComparisonIndex.Value) {
        FVar23 = (FName)((longlong)(int)FVar25.ComparisonIndex.Value << 2);
      }
      auVar29 = (uchar  [8])
                ((longlong)*(int *)&(this->TOC).MetaData.field_0xc * 0xc0 +
                (longlong)FVar23 +
                (ulonglong)((*(int *)&(this->TOC).MetaData.field_0x2c + 0x1fU >> 5) << 2));
      if (auVar29 != (uchar  [8])0x0) {
        FVar17 = StatPtr_STAT_FileCacheMemory;
        if (StatPtr_STAT_FileCacheMemory == (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)0x0)
        {
          pFVar16 = ::FName::FName(&local_1c0,"STAT_FileCacheMemory");
          FVar17 = (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FileCacheMemory,*pFVar16,
                              L"File Cache","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                              L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar23 = *(FName *)FVar17;
        local_2b8 = FVar23;
        if (((FVar23 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_01 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_01 == (FThreadStats *)0x0) {
            this_02 = FThreadStatsPool::Get();
            this_01 = FThreadStatsPool::GetFromPool(this_02);
          }
          local_248.NameAndInfo.Number = FVar23.Number & 0xffffafff | 0xa000;
          local_264._4_8_ = FVar23;
          local_248.StatData.Pad = auVar29;
          local_248.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_01,&local_248);
          FStatsTrace::Add((FName *)(local_264 + 4),(long64)auVar29);
          if (this_01->ScopeCount == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      if (6 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  (&`public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
                    ::__l97::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      FPipelineCacheFileFormatTOC::DumpToLog(&this->TOC);
      if (6 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  (&`public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
                    ::__l115::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.AllocatorInstance.Data);
      }
      return bVar7;
    }
    puVar22 = (uint *)(*(longlong *)&pTVar6->field_0x0 + (longlong)TStack_200.CurrentBitIndex * 0xc0
                      );
    if (FPipelineFileCacheManager::Stats._8_4_ != FPipelineFileCacheManager::Stats._52_4_) {
      lVar19 = 0x154be5c88;
      if (FPipelineFileCacheManager::Stats._64_8_ != 0) {
        lVar19 = FPipelineFileCacheManager::Stats._64_8_;
      }
      iVar10 = *(int *)(lVar19 + (ulonglong)(FPipelineFileCacheManager::Stats._72_4_ - 1 & *puVar22)
                                 * 4);
      while (iVar10 != -1) {
        lVar19 = FPipelineFileCacheManager::Stats._0_8_ + (longlong)iVar10 * 0x18;
        if (*(uint *)(FPipelineFileCacheManager::Stats._0_8_ + (longlong)iVar10 * 0x18) == *puVar22)
        {
          if ((lVar19 != 0) && (local_2b8 = *(FName *)(lVar19 + 8), local_2b8 != (FName)0x0))
          goto LAB_145c6515e;
          break;
        }
        iVar10 = *(int *)(lVar19 + 0x10);
      }
    }
    local_2b8.ComparisonIndex.Value = 0;
    local_2b8.Number = 0;
    FVar15 = (FName)::operator_new(0x28);
    local_2b8 = FVar23;
    if (FVar15 != (FName)0x0) {
      *(undefined8 *)FVar15 = 0xffffffffffffffff;
      ((uint *)((longlong)FVar15 + 8))[0] = 0xffffffff;
      ((uint *)((longlong)FVar15 + 8))[1] = 0xffffffff;
      ((uint *)((longlong)FVar15 + 0x10))[0] = 0;
      ((uint *)((longlong)FVar15 + 0x10))[1] = 0;
      ((uint *)((longlong)FVar15 + 0x18))[0] = 0;
      ((uint *)((longlong)FVar15 + 0x18))[1] = 0;
      *(uint *)((longlong)FVar15 + 0x20) = 0;
      local_2b8 = FVar15;
    }
    *(uint *)((longlong)local_2b8 + 0x20) = *puVar22;
    ((uint *)((longlong)local_2b8 + 0x18))[0] = 0xffffffff;
    ((uint *)((longlong)local_2b8 + 0x18))[1] = 0xffffffff;
    local_1d0 = &local_2b8;
    local_1d8 = puVar22;
    TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FPipelineStateStats_*_const_&>_>
              ((TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
                *)&FPipelineFileCacheManager::Stats,
               (TPairInitializer<unsigned_int_const_&,FPipelineStateStats_*_const_&> *)local_264,
               (bool *)&local_1d8);
LAB_145c6515e:
    if ((2 < (byte)LogRHI._0_1_) &&
       (FPipelineFileCacheManager::NewPSOUsage._8_4_ !=
        FPipelineFileCacheManager::NewPSOUsage._52_4_)) {
      lVar19 = 0x154be5c38;
      if (FPipelineFileCacheManager::NewPSOUsage._64_8_ != 0) {
        lVar19 = FPipelineFileCacheManager::NewPSOUsage._64_8_;
      }
      FVar25.ComparisonIndex.Value =
           *(uint *)(lVar19 + (ulonglong)
                              (FPipelineFileCacheManager::NewPSOUsage._72_4_ - 1 & *puVar22) * 4);
      while (FVar25.ComparisonIndex.Value != 0xffffffff) {
        puVar20 = (uint *)((longlong)(int)FVar25.ComparisonIndex.Value * 0x20 +
                          FPipelineFileCacheManager::NewPSOUsage._0_8_);
        if (*puVar20 == *puVar22) {
          FVar15 = (FName)(puVar20 + 2);
          if (puVar20 == (uint *)0x0) {
            FVar15 = FVar23;
          }
          if (FVar15 != (FName)0x0) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64)___ptr64'
                        ::__l44::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          break;
        }
        FVar25.ComparisonIndex.Value = puVar20[6];
      }
    }
    FVar11.Value = FVar26.Value + 1;
    if ((puVar22[0x2c] & 1) == 0) {
      FVar11.Value = FVar26.Value;
    }
    FVar27.Number = 0;
    FVar27.ComparisonIndex.Value = FVar11.Value;
    TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
  } while( true );
}

// OpenPipelineFileCache @ 145c654b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPipelineCacheFile::OpenPipelineFileCache
          (FString *param_1,EShaderPlatform param_2,FGuid *param_3,
          TSharedPtr<IAsyncReadFileHandle,1> *param_4,FPipelineCacheFileFormatTOC *param_5,
          ulong64 *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  IFileManager *pIVar5;
  FArchive *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  FPlatformFileManager *this;
  IPlatformFile *pIVar9;
  IAsyncReadFileHandle *pIVar10;
  TReferenceControllerBase<1> *pTVar11;
  wchar_t *pwVar12;
  bool bVar13;
  FString local_98;
  FString local_88;
  TSharedPtr<IAsyncReadFileHandle,1> local_78;
  FPipelineCacheFileFormatHeader local_68;
  
  bVar13 = false;
  pIVar5 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar6 = (FArchive *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pwVar12,0);
  if (pFVar6 == (FArchive *)0x0) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                  ::__l188::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    return false;
  }
  (**(code **)(*(longlong *)pFVar6 + 0x130))(pFVar6,0x1d);
  local_68.Platform.Value = '\0';
  local_68._17_3_ = 0;
  local_68.Guid.A = 0;
  local_68.Guid.B = 0;
  local_68.Guid.C = 0;
  local_68.Magic = 0;
  local_68.Version = 0;
  local_68.GameVersion = 0;
  local_68.Guid.D = 0;
  local_68.TableOffset = 0;
  local_68.LastGCUnixTime = 0;
  ::operator<<(pFVar6,&local_68);
  if ((((local_68.Magic == 0x5049504543414348) && (local_68.Version == 0x1d)) &&
      (local_68.GameVersion == GameVersion)) && (local_68.Platform.Value == param_2)) {
    if ((local_68.TableOffset == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header.TableOffset > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x76d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    lVar7 = (**(code **)(*(longlong *)pFVar6 + 0x30))(pFVar6);
    if ((lVar7 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileReader->TotalSize() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x76e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((((4 < (byte)LogRHI._0_1_) &&
         (UE::Logging::Private::BasicLog<5>
                    (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                      ::__l23::LOG_Static,(FLogCategoryBase *)&LogRHI), 4 < (byte)LogRHI._0_1_)) &&
        (UE::Logging::Private::BasicLog<5>
                   (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                     ::__l41::LOG_Static,(FLogCategoryBase *)&LogRHI), 4 < (byte)LogRHI._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>
                  (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                    ::__l59::LOG_Static,(FLogCategoryBase *)&LogRHI), 4 < (byte)LogRHI._0_1_)) {
      (**(code **)(*(longlong *)pFVar6 + 0x30))(pFVar6);
      UE::Logging::Private::BasicLog<5>
                (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                  ::__l77::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    uVar8 = (**(code **)(*(longlong *)pFVar6 + 0x30))(pFVar6);
    if (local_68.TableOffset < uVar8) {
      (**(code **)(*(longlong *)pFVar6 + 0x1b8))(pFVar6);
      ::operator<<(pFVar6,param_5);
      bVar13 = (bool)(~((byte)pFVar6->field_0x29 >> 1) & 1);
      if (bVar13 != false) goto LAB_145c65792;
    }
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                  ::__l101::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  else if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                ::__l121::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
LAB_145c65792:
  cVar4 = (**(code **)(*(longlong *)pFVar6 + 0x210))(pFVar6);
  bVar2 = false;
  if (cVar4 != '\0') {
    bVar2 = bVar13;
  }
  (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
  if (bVar2 != false) {
    this = FPlatformFileManager::Get();
    pIVar9 = FPlatformFileManager::GetPlatformFile(this);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pIVar10 = (IAsyncReadFileHandle *)(**(code **)((longlong)*pIVar9 + 400))(pIVar9,pwVar12);
    local_78.Object = pIVar10;
    pTVar11 = ::operator_new(0x18);
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VIAsyncReadFileHandle__U__DefaultDeleter_VIAsyncReadFileHandle___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11[1]._padding_ = (longlong)pIVar10;
      local_78.SharedReferenceCount.ReferenceController = pTVar11;
    }
    if (param_4 != &local_78) {
      param_4->Object = pIVar10;
      local_78.Object = (IAsyncReadFileHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_4->SharedReferenceCount,&local_78.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (param_4->Object == (IAsyncReadFileHandle *)0x0) {
      if (4 < (byte)LogRHI._0_1_) {
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        FGuid::AppendString(&local_68.Guid,&local_88,Digits);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                    ::__l168::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      bVar2 = false;
    }
    else {
      if (4 < (byte)LogRHI._0_1_) {
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        FGuid::AppendString(&local_68.Guid,&local_98,Digits);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_static_bool___cdecl_FPipelineCacheFile::OpenPipelineFileCache(FString_const&___ptr64,EShaderPlatform,FGuid&___ptr64,TSharedPtr<IAsyncReadFileHandle,1>&___ptr64,FPipelineCacheFileFormatTOC&___ptr64,unsigned___int64&___ptr64)'
                    ::__l148::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      param_3->A = local_68.Guid.A;
      param_3->B = local_68.Guid.B;
      param_3->C = local_68.Guid.C;
      param_3->D = local_68.Guid.D;
      *param_6 = local_68.TableOffset;
    }
  }
  return bVar2;
}

// OpenUserPipelineFileCache @ 145c65c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPipelineCacheFile::OpenUserPipelineFileCache
          (FPipelineCacheFile *this,FString *param_1,EShaderPlatform param_2)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount> FVar14;
  TStatId TVar15;
  FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount> FVar16;
  FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount> FVar17;
  FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount> FVar18;
  FName FVar19;
  FEngineVersion *pFVar20;
  FString *pFVar21;
  FString *pFVar22;
  IFileManager *pIVar23;
  FGuid *pFVar24;
  longlong lVar25;
  FThreadSafeStaticStat<FStat_STAT_FileCacheMemory> FVar26;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined1 *puVar27;
  int iVar28;
  ForAnyElementType FVar29;
  wchar_t *pwVar30;
  FName FVar31;
  int iVar32;
  uint *puVar33;
  int iVar34;
  FName FVar35;
  FName FVar36;
  uint uVar37;
  uchar auVar38 [8];
  uint uVar39;
  undefined1 auStackY_328 [32];
  FName local_2c8;
  undefined1 local_2c0;
  undefined1 local_2bf [7];
  FString local_2b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2a8;
  FString local_298;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_288;
  FString local_278;
  FGuid local_268;
  FString local_258;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_248;
  uint uStack_240;
  uint uStack_23c;
  undefined1 *local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  uint local_228;
  uint uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  int local_218;
  undefined1 local_214 [20];
  FPipelineCacheFile *local_200;
  FName local_1f8;
  FString local_1f0;
  FString local_1e0;
  FStatMessage local_1d0;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  uint *local_190;
  FName *local_188;
  FName local_170;
  FName local_168;
  FName local_160;
  undefined1 local_158 [8];
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130 [2];
  FGuid local_110;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_f8;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  FVar31.ComparisonIndex.Value = 0;
  FVar31.Number = 0;
  iVar32 = 0;
  uVar12 = 0;
  local_200 = this;
  if (this->CacheStatus == Unknown) {
    FVar14 = StatPtr_STAT_TotalGraphicsPipelineStateCount;
    if (StatPtr_STAT_TotalGraphicsPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)0x0) {
      pFVar13 = ::FName::FName(&local_148,"STAT_TotalGraphicsPipelineStateCount");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalGraphicsPipelineStateCount
                          ,*pFVar13,L"Total Graphics Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    local_2c8 = *(FName *)FVar14;
    FThreadStats::AddMessage<__int64>(local_2c8,Set,0,false);
    TVar15 = FThreadSafeStaticStatInner<FStat_STAT_TotalComputePipelineStateCount,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_TotalComputePipelineStateCount,1> *)
                        &StatPtr_STAT_TotalComputePipelineStateCount);
    local_2c8 = *(FName *)(TVar15.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_2c8,Set,0,false);
    TVar15 = FThreadSafeStaticStatInner<FStat_STAT_TotalRayTracingPipelineStateCount,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_TotalRayTracingPipelineStateCount,1>
                         *)&StatPtr_STAT_TotalRayTracingPipelineStateCount);
    local_2c8 = *(FName *)(TVar15.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_2c8,Set,0,false);
    TVar15 = FThreadSafeStaticStatInner<FStat_STAT_SerializedGraphicsPipelineStateCount,1>::
             GetStatId((FThreadSafeStaticStatInner<FStat_STAT_SerializedGraphicsPipelineStateCount,1>
                        *)&StatPtr_STAT_SerializedGraphicsPipelineStateCount);
    local_2c8 = *(FName *)(TVar15.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_2c8,Set,0,false);
    TVar15 = FThreadSafeStaticStatInner<FStat_STAT_SerializedComputePipelineStateCount,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_SerializedComputePipelineStateCount,1>
                         *)&StatPtr_STAT_SerializedComputePipelineStateCount);
    local_2c8 = *(FName *)(TVar15.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_2c8,Set,0,false);
    FVar16 = StatPtr_STAT_NewGraphicsPipelineStateCount;
    if (StatPtr_STAT_NewGraphicsPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount>)0x0) {
      pFVar13 = ::FName::FName(&local_170,"STAT_NewGraphicsPipelineStateCount");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewGraphicsPipelineStateCount,
                          *pFVar13,L"New Graphics Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    local_2c8 = *(FName *)FVar16;
    FThreadStats::AddMessage<__int64>(local_2c8,Set,0,false);
    FVar17 = StatPtr_STAT_NewComputePipelineStateCount;
    if (StatPtr_STAT_NewComputePipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount>)0x0) {
      pFVar13 = ::FName::FName(&local_168,"STAT_NewComputePipelineStateCount");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewComputePipelineStateCount,
                          *pFVar13,L"New Compute Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    local_2c8 = *(FName *)FVar17;
    FThreadStats::AddMessage<__int64>(local_2c8,Set,0,false);
    FVar18 = StatPtr_STAT_NewRayTracingPipelineStateCount;
    if (StatPtr_STAT_NewRayTracingPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount>)0x0) {
      pFVar13 = ::FName::FName(&local_160,"STAT_NewRayTracingPipelineStateCount");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewRayTracingPipelineStateCount
                          ,*pFVar13,L"New RayTracing Pipeline State Count",
                          "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    local_2c8 = *(FName *)FVar18;
    FThreadStats::AddMessage<__int64>(local_2c8,Set,0,false);
    (this->TOC).SortedOrder = Default;
    bVar9 = 1 < *(int *)&(this->TOC).MetaData.field_0x48;
    if (!bVar9) {
      TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                        *)&(this->TOC).MetaData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&(this->TOC).MetaData,0,*(int *)&(this->TOC).MetaData.field_0x8);
    puVar3 = &(this->TOC).MetaData.field_0xc;
    *(undefined4 *)&(this->TOC).MetaData.field_0x8 = 0;
    if (*(int *)puVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,8,0,(ForAnyElementType *)&(this->TOC).MetaData,0,(int *)puVar3);
    }
    *(undefined4 *)&(this->TOC).MetaData.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->TOC).MetaData.field_0x34 = 0;
    iVar34 = *(int *)&(this->TOC).MetaData.field_0x2c;
    *(undefined4 *)&(this->TOC).MetaData.field_0x28 = 0;
    if ((iVar34 < 0) || (0x80 < iVar34)) {
      *(undefined4 *)&(this->TOC).MetaData.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TOC).MetaData.field_0x10,0);
    }
    if (bVar9) {
      *(undefined4 *)&(this->TOC).MetaData.field_0x48 = 1;
      TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                *)&(this->TOC).MetaData);
    }
    ::FString::operator=(&this->Name,param_1);
    this->ShaderPlatform = param_2;
    FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_158);
    this->PlatformName = *(FName *)FVar19;
    local_268.A = 0;
    local_268.B = 0;
    local_268.C = 0;
    local_268.D = 0;
    FWindowsPlatformMisc::CreateGuid(&local_268);
    pFVar20 = FEngineVersion::Current();
    FEngineVersionBase::GetChangelist((FEngineVersionBase *)pFVar20);
    pFVar20 = FEngineVersion::Current();
    FEngineVersion::GetBranchDescriptor(pFVar20);
    ::FString::PrintfImpl(&local_298,L"%s-CL-%u-");
    pFVar22 = &this->RecordingFilename;
    if (pFVar22 != &local_298) {
      pFVar2 = (pFVar22->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar22->Data).AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
      (this->RecordingFilename).Data.ArrayNum = local_298.Data.ArrayNum;
      (this->RecordingFilename).Data.ArrayMax = local_298.Data.ArrayMax;
      local_298.Data.ArrayNum = 0;
      local_298.Data.ArrayMax = 0;
      local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Data.ArrayNum = 0;
    local_278.Data.ArrayMax = 0;
    FGuid::AppendString(&local_268,&local_278,Digits);
    ::FName::ToString(&this->PlatformName,&local_140);
    ::FString::PrintfImpl(&local_1f0,L"%s_%s_%s.rec.upipelinecache");
    iVar34 = local_1f0.Data.ArrayNum + -1;
    if (local_1f0.Data.ArrayNum == 0) {
      iVar34 = iVar32;
    }
    ::FString::AppendChars(pFVar22,(wchar_t *)local_1f0.Data.AllocatorInstance.Data,iVar34);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    pFVar21 = FPaths::ProjectSavedDir();
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar34 = (pFVar21->Data).ArrayNum;
    pFVar2 = (pFVar21->Data).AllocatorInstance.Data;
    FVar19.ComparisonIndex.Value = (0xf - (uint)((pFVar21->Data).ArrayNum != 0)) + iVar34;
    local_288.ArrayNum = iVar34;
    if ((int)FVar19.ComparisonIndex.Value < iVar34) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)FVar19.ComparisonIndex.Value);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FVar19.ComparisonIndex.Value,0,&local_288.AllocatorInstance,iVar34,
               &local_288.ArrayMax);
    if (iVar34 != 0) {
      memcpy(local_288.AllocatorInstance.Data,pFVar2,(longlong)iVar34 * 2);
    }
    ::FString::PathAppend((FString *)&local_288,L"CollectedPSOs",0xd);
    iVar34 = (this->RecordingFilename).Data.ArrayNum;
    FVar19.ComparisonIndex.Value = 0;
    uVar37 = iVar34 - 1;
    if (iVar34 == 0) {
      uVar37 = FVar19.ComparisonIndex.Value;
    }
    if ((local_288.ArrayNum != 0) || (iVar34 = 1, uVar37 + 1 == 0)) {
      iVar34 = iVar32;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2a8,&local_288,uVar37 + 1 + iVar34);
    ::FString::PathAppend
              ((FString *)&local_2a8,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data,uVar37);
    if (&pFVar22->Data != &local_2a8) {
      pFVar2 = (pFVar22->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar22->Data).AllocatorInstance.Data = local_2a8.AllocatorInstance.Data;
      (this->RecordingFilename).Data.ArrayNum = local_2a8.ArrayNum;
      (this->RecordingFilename).Data.ArrayMax = local_2a8.ArrayMax;
      local_2a8.ArrayNum = 0;
      local_2a8.ArrayMax = 0;
      local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_FPipelineCacheFile::OpenUserPipelineFileCache(FString_const&___ptr64,EShaderPlatform)___ptr64'
                  ::__l38::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    ::FName::ToString(&this->PlatformName,local_130);
    ::FString::PrintfImpl(&local_1e0,L"%s_%s.upipelinecache");
    pFVar22 = FPaths::ProjectSavedDir();
    iVar34 = local_1e0.Data.ArrayNum + -1;
    if (local_1e0.Data.ArrayNum == 0) {
      iVar34 = iVar32;
    }
    if (((pFVar22->Data).ArrayNum != 0) || (uVar37 = 1, iVar34 + 1 == 0)) {
      uVar37 = FVar19.ComparisonIndex.Value;
    }
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar28 = iVar34 + 1 + uVar37;
    iVar32 = (pFVar22->Data).ArrayNum;
    pFVar2 = (pFVar22->Data).AllocatorInstance.Data;
    local_2b8.Data.ArrayNum = iVar32;
    if ((iVar32 == 0) && (iVar28 == 0)) {
      local_2b8.Data.ArrayNum = 0;
      local_2b8.Data.ArrayMax = 0;
    }
    else {
      uVar37 = iVar32 + iVar28;
      if ((int)uVar37 < iVar32) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar37,0,(ForAnyElementType *)&local_2b8,iVar32,&local_2b8.Data.ArrayMax);
      if (iVar32 != 0) {
        memcpy(local_2b8.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar32 * 2);
      }
    }
    ::FString::PathAppend(&local_2b8,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar34);
    pFVar22 = &this->FilePath;
    if (pFVar22 != &local_2b8) {
      pFVar2 = (pFVar22->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar22->Data).AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
      (this->FilePath).Data.ArrayNum = local_2b8.Data.ArrayNum;
      (this->FilePath).Data.ArrayMax = local_2b8.Data.ArrayMax;
      local_2b8.Data.ArrayNum = 0;
      local_2b8.Data.ArrayMax = 0;
      local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (local_130[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130[0].Data.AllocatorInstance.Data);
    }
    bVar9 = ShouldDeleteExistingUserCache();
    if (bVar9) {
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_FPipelineCacheFile::OpenUserPipelineFileCache(FString_const&___ptr64,EShaderPlatform)___ptr64'
                    ::__l59::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      pIVar23 = IFileManager::Get();
      if ((this->FilePath).Data.ArrayNum == 0) {
        pwVar30 = L"";
      }
      else {
        pwVar30 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
      }
      cVar10 = (**(code **)((longlong)*pIVar23 + 0x50))(pIVar23,pwVar30);
      if (cVar10 != '\0') {
        pIVar23 = IFileManager::Get();
        if ((this->FilePath).Data.ArrayNum == 0) {
          pwVar30 = L"";
        }
        else {
          pwVar30 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar23 + 0x38))(pIVar23,pwVar30,0,0);
      }
    }
    ::FString::ConcatFF(&local_258,&this->FilePath,&JOURNAL_FILE_EXTENSION);
    pIVar23 = IFileManager::Get();
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_258.Data.ArrayNum != 0) {
      FVar29.Data = local_258.Data.AllocatorInstance.Data;
    }
    cVar10 = (**(code **)((longlong)*pIVar23 + 0x50))(pIVar23,FVar29.Data);
    if ((cVar10 != '\0') || (bVar9 = ShouldDeleteExistingUserCache(), bVar9)) {
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_FPipelineCacheFile::OpenUserPipelineFileCache(FString_const&___ptr64,EShaderPlatform)___ptr64'
                    ::__l83::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      pIVar23 = IFileManager::Get();
      if ((this->FilePath).Data.ArrayNum == 0) {
        pwVar30 = L"";
      }
      else {
        pwVar30 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
      }
      cVar11 = (**(code **)((longlong)*pIVar23 + 0x50))(pIVar23,pwVar30);
      if (cVar11 != '\0') {
        pIVar23 = IFileManager::Get();
        if ((this->FilePath).Data.ArrayNum == 0) {
          pwVar30 = L"";
        }
        else {
          pwVar30 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar23 + 0x38))(pIVar23,pwVar30,0,0);
      }
      if (cVar10 != '\0') {
        pIVar23 = IFileManager::Get();
        FVar29.Data = (FScriptContainerElement *)L"";
        if (local_258.Data.ArrayNum != 0) {
          FVar29.Data = local_258.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar23 + 0x38))(pIVar23,FVar29.Data,0,0);
      }
    }
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Elements._40_4_ = 0;
    local_f8.Elements._44_4_ = 0x80;
    local_f8.Elements._48_4_ = 0xffffffff;
    local_f8.Elements._52_4_ = 0;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_f8.HashSize = 0;
    GarbageCollectUserCache(this,&this->FilePath,&local_f8);
    local_a0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_a0._48_8_ = _UNK_150631d98;
    local_a8 = 2;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_a0._32_8_ = 0;
    local_60 = (void *)0x0;
    local_58 = 0;
    local_2c0 = OpenPipelineFileCache
                          (&this->FilePath,this->ShaderPlatform,&this->FileGuid,
                           &this->AsyncFileHandle,&this->TOC,&this->TOCOffset);
    this->CacheStatus = !(bool)local_2c0 + UserCacheOpened;
    if (!(bool)local_2c0) {
      pFVar24 = FGuid::NewGuid(&local_110);
      uVar37 = pFVar24->B;
      uVar39 = pFVar24->C;
      uVar5 = pFVar24->D;
      (this->FileGuid).A = pFVar24->A;
      (this->FileGuid).B = uVar37;
      (this->FileGuid).C = uVar39;
      (this->FileGuid).D = uVar5;
      pIVar23 = IFileManager::Get();
      if ((this->FilePath).Data.ArrayNum == 0) {
        pwVar30 = L"";
      }
      else {
        pwVar30 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar23 + 0x38))(pIVar23,pwVar30,0,0);
      this->TOCOffset = 0;
    }
    uVar37 = *(uint *)&(this->TOC).MetaData.field_0x28;
    local_238 = &(this->TOC).MetaData.field_0x10;
    local_248 = &(this->TOC).MetaData;
    uStack_23c = 1;
    uStack_22c = FVar19.ComparisonIndex.Value;
    local_228 = FVar19.ComparisonIndex.Value;
    if (uVar37 != 0) {
      puVar33 = *(uint **)&(this->TOC).MetaData.field_0x20;
      if (puVar33 == (uint *)0x0) {
        puVar33 = (uint *)local_238;
      }
      uVar39 = *puVar33;
      FVar36 = FVar31;
      FVar35 = FVar31;
      local_228 = 0;
      FVar19.ComparisonIndex.Value = 0;
      while (uVar39 == 0) {
        FVar35.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value + 0x20;
        FVar35.Number = 0;
        FVar19.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value + 1;
        FVar19.Number = 0;
        uStack_22c = uVar37;
        local_228 = FVar35.ComparisonIndex.Value;
        if ((int)(((int)(uVar37 - 1) >> 0x1f & 0x1fU) + (uVar37 - 1)) >> 5 <
            (int)FVar19.ComparisonIndex.Value) goto LAB_145c667e0;
        uVar39 = puVar33[(longlong)(int)FVar36.ComparisonIndex.Value.Value + 1];
        FVar36 = FVar19;
      }
      uStack_23c = -uVar39 & uVar39;
      uVar1 = (ulonglong)uStack_23c * 2 + 1;
      lVar25 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_218 = (int)lVar25;
      uStack_22c = local_218 + -1 + local_228;
      if ((int)uVar37 < (int)uStack_22c) {
        uStack_22c = uVar37;
      }
    }
LAB_145c667e0:
    iStack_220 = *(int *)&(this->TOC).MetaData.field_0x8 - *(int *)&(this->TOC).MetaData.field_0x34;
    uVar37 = *(uint *)&(this->TOC).MetaData.field_0x28;
    local_214._4_8_ = &(this->TOC).MetaData.field_0x10;
    TStack_1b8._padding_ = CONCAT44(uStack_23c,FVar19.ComparisonIndex.Value);
    uStack_230 = 0xffffffff;
    TStack_1b8.CurrentBitIndex = uStack_22c;
    TStack_1b8.UnvisitedBitMask = 0xffffffff;
    uVar39 = uVar37 & 0xffffffe0;
    iVar32 = (int)uVar37 >> 5;
    TStack_1b8._28_4_ = uStack_22c;
    TStack_1b8.BaseBitIndex = local_228;
    uStack_198 = CONCAT44(uStack_21c,iStack_220);
    uStack_240 = FVar19.ComparisonIndex.Value;
    uStack_224 = uStack_22c;
    local_214._12_8_ = local_248;
    local_1c0 = local_248;
    TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_238;
    if (((int)uVar37 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    uVar7 = local_214._12_8_;
    uVar6 = local_214._4_8_;
    FVar19.ComparisonIndex.Value = *(uint *)&(this->TOC).MetaData.field_0x28;
    FVar36 = FVar31;
    if (uVar37 != FVar19.ComparisonIndex.Value) {
      puVar3 = *(undefined1 **)&(this->TOC).MetaData.field_0x20;
      puVar27 = &(this->TOC).MetaData.field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar27 = puVar3;
      }
      uVar37 = -1 << ((byte)uVar37 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar32 * 4);
      while (uVar37 == 0) {
        lVar25 = (longlong)iVar32;
        uVar39 = uVar39 + 0x20;
        iVar32 = iVar32 + 1;
        uVar37 = FVar19.ComparisonIndex.Value;
        if ((int)(((int)(FVar19.ComparisonIndex.Value - 1) >> 0x1f & 0x1fU) +
                 (FVar19.ComparisonIndex.Value - 1)) >> 5 < iVar32) goto LAB_145c66900;
        uVar37 = *(uint *)(puVar27 + lVar25 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      uVar37 = (int)lVar25 + -1 + uVar39;
      if ((int)FVar19.ComparisonIndex.Value < (int)uVar37) {
        uVar37 = FVar19.ComparisonIndex.Value;
      }
    }
LAB_145c66900:
    while( true ) {
      pTVar8 = local_1c0;
      if (*(int *)&local_1c0->field_0x8 - *(int *)&local_1c0->field_0x34 != (int)uStack_198) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2bf);
      }
      this = local_200;
      if (((TStack_1b8.CurrentBitIndex == uVar37) &&
          (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)uVar6)) &&
         (pTVar8 == (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                     *)uVar7)) break;
      puVar33 = (uint *)(*(longlong *)pTVar8 + (longlong)TStack_1b8.CurrentBitIndex * 0xc0);
      if (FPipelineFileCacheManager::Stats._8_4_ != FPipelineFileCacheManager::Stats._52_4_) {
        lVar25 = 0x154be5c88;
        if (FPipelineFileCacheManager::Stats._64_8_ != 0) {
          lVar25 = FPipelineFileCacheManager::Stats._64_8_;
        }
        iVar32 = *(int *)(lVar25 + (ulonglong)
                                   (FPipelineFileCacheManager::Stats._72_4_ - 1 & *puVar33) * 4);
        while (iVar32 != -1) {
          lVar25 = FPipelineFileCacheManager::Stats._0_8_ + (longlong)iVar32 * 0x18;
          if (*(uint *)(FPipelineFileCacheManager::Stats._0_8_ + (longlong)iVar32 * 0x18) ==
              *puVar33) {
            if ((lVar25 != 0) && (local_2c8 = *(FName *)(lVar25 + 8), local_2c8 != (FName)0x0))
            goto LAB_145c66a37;
            break;
          }
          iVar32 = *(int *)(lVar25 + 0x10);
        }
      }
      local_2c8.ComparisonIndex.Value = 0;
      local_2c8.Number = 0;
      FVar19 = (FName)::operator_new(0x28);
      local_2c8 = FVar31;
      if (FVar19 != (FName)0x0) {
        *(undefined8 *)FVar19 = 0xffffffffffffffff;
        *(undefined8 *)((longlong)FVar19 + 8) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)FVar19 + 0x10) = 0;
        *(undefined8 *)((longlong)FVar19 + 0x18) = 0;
        *(undefined4 *)((longlong)FVar19 + 0x20) = 0;
        local_2c8 = FVar19;
      }
      *(uint *)((longlong)local_2c8 + 0x20) = *puVar33;
      *(undefined8 *)((longlong)local_2c8 + 0x18) = 0xffffffffffffffff;
      local_188 = &local_2c8;
      local_190 = puVar33;
      TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FPipelineStateStats_*_const_&>_>
                ((TSet<TTuple<unsigned_int,FPipelineStateStats_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>,FDefaultSetAllocator>
                  *)&FPipelineFileCacheManager::Stats,
                 (TPairInitializer<unsigned_int_const_&,FPipelineStateStats_*_const_&> *)local_214,
                 (bool *)&local_190);
LAB_145c66a37:
      if ((puVar33[0x2c] & 1) != 0) {
        FVar36.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value + 1;
        FVar36.Number = 0;
      }
      TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
    }
    if ((FVar36.ComparisonIndex.Value.Value != 0) && (2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FPipelineCacheFile::OpenUserPipelineFileCache(FString_const&___ptr64,EShaderPlatform)___ptr64'
                  ::__l123::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a0);
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
    uVar12 = local_2c0;
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
      uVar12 = local_2c0;
    }
  }
  FVar19.ComparisonIndex.Value = *(uint *)&(this->TOC).MetaData.field_0x48;
  if (1 < FVar19.ComparisonIndex.Value) {
    FVar31 = (FName)((longlong)(int)FVar19.ComparisonIndex.Value << 2);
  }
  auVar38 = (uchar  [8])
            ((longlong)*(int *)&(this->TOC).MetaData.field_0xc * 0xc0 +
            (longlong)FVar31 +
            (ulonglong)((*(int *)&(this->TOC).MetaData.field_0x2c + 0x1fU >> 5) << 2));
  if (auVar38 != (uchar  [8])0x0) {
    FVar26 = StatPtr_STAT_FileCacheMemory;
    if (StatPtr_STAT_FileCacheMemory == (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)0x0) {
      pFVar13 = ::FName::FName(&local_150,"STAT_FileCacheMemory");
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FileCacheMemory,*pFVar13,
                          L"File Cache","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                          L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar31 = *(FName *)FVar26;
    if (((FVar31 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_2c8 = FVar31;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_1d0.NameAndInfo.Number = FVar31.Number & 0xffffafff | 0xa000;
      local_1f8 = FVar31;
      local_1d0.StatData.Pad = auVar38;
      local_1d0.NameAndInfo.Index.Value = FVar31.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_1d0);
      FStatsTrace::Add(&local_1f8,(long64)auVar38);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (bool)uVar12;
}

// SavePipelineFileCache @ 145c758d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall
FPipelineCacheFile::SavePipelineFileCache
          (FPipelineCacheFile *this,SaveMode param_1,
          TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
          *param_2,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
                   *param_3,PSOOrder param_4,
          TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
          *param_5)

{
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long64 lVar4;
  long64 lVar5;
  undefined8 uVar6;
  SaveMode SVar7;
  FMemoryWriter *pFVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  TStatId TVar15;
  FName FVar16;
  FArchive *pFVar17;
  FMemoryWriter *pFVar18;
  FName *pFVar19;
  FString *pFVar20;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *pTVar21;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar22;
  FGuid *pFVar23;
  longlong lVar24;
  TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *pTVar25;
  uint *puVar26;
  FMemoryReader *pFVar27;
  longlong lVar28;
  longlong lVar29;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *pTVar30;
  ulonglong uVar31;
  FPipelineStateStats *pFVar32;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *pTVar33;
  IFileManager *pIVar34;
  FThreadSafeStaticStat<FStat_STAT_FileCacheMemory> FVar35;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar36;
  uint *puVar37;
  ulonglong uVar38;
  ForAnyElementType FVar39;
  FScriptContainerElement *pFVar40;
  wchar_t *pwVar41;
  undefined1 *puVar42;
  ForElementType<FSetElementId> FVar43;
  ForAnyElementType FVar44;
  longlong lVar45;
  FPipelineCacheFileFormatPSO *pFVar46;
  PSOOrder PVar47;
  uint *puVar48;
  uint uVar49;
  PSOOrder PVar50;
  ForElementType<unsigned_int> FVar51;
  uint *puVar52;
  PSOOrder PVar53;
  PSOOrder PVar54;
  uint *puVar55;
  uchar auVar56 [8];
  bool bVar57;
  undefined1 auStackY_cf8 [32];
  undefined1 local_c98;
  FIdentityFunctor local_c97 [3];
  int local_c94;
  SaveMode local_c90;
  int local_c8c;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *local_c88;
  FMemoryWriter *local_c80;
  FString local_c78;
  uint local_c68;
  PSOOrder local_c64;
  int local_c60;
  undefined1 local_c5c [4];
  FName local_c58;
  FString local_c50;
  TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  *local_c40;
  undefined8 uStack_c38;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  int local_c18;
  undefined4 uStack_c14;
  FName local_c10;
  FScriptContainerElement *local_c08;
  TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
  *local_c00;
  undefined1 local_bf8 [12];
  uint uStack_bec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_be8;
  undefined8 uStack_be0;
  longlong lStack_bd8;
  int local_bd0;
  undefined4 uStack_bcc;
  uint local_bc8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_bc0;
  uint local_bb0;
  uint uStack_bac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_ba8;
  undefined4 local_ba0;
  uint uStack_b9c;
  uint uStack_b98;
  undefined4 uStack_b94;
  FString local_b90;
  FString local_b80;
  FString local_b70;
  FString local_b60;
  void *local_b50;
  undefined8 local_b48;
  FName local_b40;
  byte local_b38;
  longlong *local_b28;
  undefined1 auStack_b20 [16];
  uint uStack_b10;
  uint uStack_b0c;
  longlong local_b08;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  *pTStack_b00;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  *local_af8;
  undefined2 local_af0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_ae8;
  undefined8 local_ad8;
  FString local_ad0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_ac0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_aa0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a80;
  undefined1 local_a60 [12];
  uint local_a54;
  longlong local_a50;
  uint local_a48;
  int local_a44;
  TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  *local_a38;
  FPipelineCacheFileFormatHeader local_a30;
  int local_9f8;
  int local_9f4;
  int local_9f0;
  undefined4 local_9ec;
  LARGE_INTEGER local_9e8;
  undefined8 *local_9e0;
  FGuid *local_9d8;
  longlong *local_9d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9c8;
  FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
  local_9a8;
  int *local_9a0;
  FName local_998;
  int *local_990;
  uint *local_988;
  FStatMessage local_980;
  FIdentityFunctor *local_970;
  FIdentityFunctor **local_968;
  ulong64 *local_960;
  LARGE_INTEGER local_958;
  LARGE_INTEGER local_950;
  LARGE_INTEGER local_948;
  LARGE_INTEGER local_940;
  longlong *local_938;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_930;
  undefined8 uStack_910;
  undefined1 local_908 [12];
  uint uStack_8fc;
  TBitArray<FDefaultBitArrayAllocator> *local_8f8;
  undefined8 uStack_8f0;
  longlong local_8e8;
  undefined8 uStack_8e0;
  undefined1 local_8d8 [12];
  uint uStack_8cc;
  TBitArray<FDefaultBitArrayAllocator> *local_8c8;
  undefined8 uStack_8c0;
  longlong local_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  FSourceLocation local_8a8;
  TArrayView<unsigned_char_const_,__int64> local_888;
  FPipelineCacheFileFormatHeader local_878;
  FName local_840;
  FString local_838 [2];
  FName local_810;
  TRangedForIterator local_808;
  TRangedForIterator local_7d8;
  TRangedForConstIterator local_7a8;
  undefined1 local_778 [32];
  longlong local_758;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  *pTStack_750;
  FGuid local_748;
  FMemoryWriter local_738;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_688;
  undefined4 local_64c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_648;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_628;
  undefined1 local_608 [8];
  undefined1 local_600 [32];
  ForElementType<unsigned_int> local_5e0;
  ulonglong local_5d8;
  undefined8 uStack_5d0;
  int iStack_5cc;
  undefined1 local_5c8 [8];
  ForAnyElementType local_5c0;
  uint local_5b8;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  local_5a8;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  void *local_518;
  undefined4 local_510;
  FPipelineCacheFileFormatPSOMetaData local_508;
  undefined1 local_458 [72];
  void *local_410;
  undefined8 local_408;
  void *local_3f0;
  ulonglong local_3e8;
  undefined8 uStack_3e0;
  ForElementType<FSetElementId> local_3d0;
  int local_3c8;
  ulong64 local_3c0;
  long64 local_3b8;
  ushort local_3b0;
  undefined1 local_3a8 [8];
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  local_3a0;
  FPipelineCacheFileFormatPSO local_348;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_cf8;
  local_c10 = (FName)param_5;
  local_c90 = param_1;
  local_c88 = param_2;
  if (((this->CacheStatus != NewUserCache) && (this->CacheStatus != UserCacheOpened)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CacheStatus == EStatus::NewUserCache || CacheStatus == EStatus::UserCacheOpened"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                          ,0x93a,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  local_988 = (uint *)&(this->TOC).MetaData.field_0x48;
  puVar55 = (uint *)0x0;
  puVar48 = puVar55;
  if (1 < *local_988) {
    puVar48 = (uint *)((longlong)(int)*local_988 << 2);
  }
  local_9a0 = (int *)&(this->TOC).MetaData.field_0x2c;
  local_990 = (int *)&(this->TOC).MetaData.field_0xc;
  lVar45 = (longlong)puVar48 +
           (longlong)*(int *)&(this->TOC).MetaData.field_0xc * 0xc0 +
           (ulonglong)((*(int *)&(this->TOC).MetaData.field_0x2c + 0x1fU >> 5) << 2);
  if (lVar45 != 0) {
    TVar15 = FThreadSafeStaticStatInner<FStat_STAT_FileCacheMemory,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_FileCacheMemory,1> *)
                        &StatPtr_STAT_FileCacheMemory);
    local_c58 = *(FName *)(TVar15.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_c58,Subtract,lVar45,false);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_SavePipelineFileCache = 0;
    FThreadSafeStaticStatInner<`FPipelineCacheFile::SavePipelineFileCache'::__l2::FStat_STAT_SavePipelineFileCache,1>
    ::GetStatId(&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                 ::__l2::StatPtr_STAT_SavePipelineFileCache);
    _Init_thread_footer(&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar15 = FThreadSafeStaticStatInner<`FPipelineCacheFile::SavePipelineFileCache'::__l2::FStat_STAT_SavePipelineFileCache,1>
           ::GetStatId(&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                        ::__l2::StatPtr_STAT_SavePipelineFileCache);
  local_8a8.Impl._Line = 0x93d;
  local_8a8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp";
  local_8a8.Impl._Column = 3;
  local_8a8.Impl._Function =
       "bool __cdecl FPipelineCacheFile::SavePipelineFileCache(enum FPipelineFileCacheManager::SaveMode,const class TMap<unsigned int,struct FPipelineStateStats *,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<unsigned int,struct FPipelineStateStats *,0> > &,class TSet<struct FPipelineCacheFileFormatPSO,struct DefaultKeyFuncs<struct FPipelineCacheFileFormatPSO,0>,class FDefaultSetAllocator> &,enum FPipelineFileCacheManager::PSOOrder,class TMap<unsigned int,struct FPSOUsageData,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<unsigned int,struct FPSOUsageData,0> > &)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_b40,*(TStatIdData **)&(TVar15.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_8a8);
  QueryPerformanceCounter(&local_9e8);
  ::FString::FString(&local_c78,&this->FilePath);
  PVar50 = Default;
  if (param_1 == BoundPSOsOnly) {
    ::FString::operator=(&local_c78,&this->RecordingFilename);
    local_c94 = 0;
    cVar12 = '\x01';
    local_c58 = (FName)GetCurrentUnixTime();
    local_c08 = (FScriptContainerElement *)0x0;
    local_c60 = 0;
LAB_145c75c79:
    bVar10 = false;
    if (cVar12 != '\0') {
      local_9e0 = &local_558;
      local_558 = 0;
      local_550 = 0;
      local_538 = 0;
      local_530 = 0;
      local_52c = 0x80;
      local_528 = 0xffffffff;
      local_524 = 0;
      local_518 = (void *)0x0;
      local_510 = 0;
      local_bc0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_bc0.ArrayNum = 0;
      local_bc0.ArrayMax = 0;
      ::FString::FString(&local_c50,&local_c78);
      if (local_c90 == BoundPSOsOnly) {
        pFVar18 = ::operator_new(0xa8);
        if (pFVar18 != (FMemoryWriter *)0x0) {
          FVar39.Data = (FScriptContainerElement *)L"";
          if (local_c78.Data.ArrayNum != 0) {
            FVar39.Data = local_c78.Data.AllocatorInstance.Data;
          }
          pFVar19 = ::FName::FName(&local_810,(wchar_t *)FVar39.Data);
          pFVar18 = FMemoryWriter::FMemoryWriter(pFVar18,&local_bc0,true,false,*pFVar19);
          goto LAB_145c75da5;
        }
LAB_145c779b2:
        bVar10 = false;
        if (1 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                      ::__l352::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else {
        pIVar34 = IFileManager::Get();
        pcVar3 = *(code **)((longlong)*pIVar34 + 0x60);
        pFVar20 = FPaths::GetPath(local_838,&local_c50);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar41 = L"";
        }
        else {
          pwVar41 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        (*pcVar3)(pIVar34,pwVar41,1);
        if (local_838[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_838[0].Data.AllocatorInstance.Data);
        }
        pIVar34 = IFileManager::Get();
        FVar39.Data = (FScriptContainerElement *)L"";
        if (local_c50.Data.ArrayNum != 0) {
          FVar39.Data = local_c50.Data.AllocatorInstance.Data;
        }
        pFVar18 = (FMemoryWriter *)(**(code **)((longlong)*pIVar34 + 0x20))(pIVar34,FVar39.Data);
LAB_145c75da5:
        local_c80 = pFVar18;
        if (pFVar18 == (FMemoryWriter *)0x0) goto LAB_145c779b2;
        (**(code **)(*(longlong *)pFVar18 + 0x130))(pFVar18,0x1d);
        (**(code **)(*(longlong *)pFVar18 + 0x1b8))(pFVar18,0);
        local_a30.Version = 0x1d;
        local_a30.Magic = 0x5049504543414348;
        local_a30.GameVersion = GameVersion;
        local_a30.Platform.Value = (uchar)this->ShaderPlatform;
        local_9d8 = &this->FileGuid;
        local_a30.Guid.A = local_9d8->A;
        local_a30.Guid.B = local_9d8->B;
        local_a30.Guid.C = (this->FileGuid).C;
        local_a30.Guid.D = (this->FileGuid).D;
        local_a30.TableOffset = 0;
        local_a30.LastGCUnixTime._0_4_ = local_c58.ComparisonIndex.Value;
        local_a30.LastGCUnixTime._4_4_ = local_c58.Number;
        ::operator<<((FArchive *)pFVar18,&local_a30);
        pTVar21 = (TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                   *)(**(code **)(*(longlong *)pFVar18 + 0x28))(pFVar18);
        local_960 = &this->TOCOffset;
        local_c64 = Default;
        if (pTVar21 < (TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                       *)*local_960) {
          pTVar21 = (TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                     *)*local_960;
        }
        *local_960 = (ulong64)pTVar21;
        uVar6 = _UNK_150631d98;
        uVar38 = ___xmm_00000000ffffffff0000008000000000;
        local_c8c = 0;
        local_c00 = pTVar21;
        if (local_c90 == Incremental) {
          (**(code **)(*(longlong *)pFVar18 + 0x1b8))(pFVar18,pTVar21);
          TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
          ::TIterator::TIterator((TIterator *)local_a60,param_3);
          pTVar30 = local_c88;
          uVar6 = _UNK_150631d98;
          uVar38 = ___xmm_00000000ffffffff0000008000000000;
          lVar5 = _UNK_15060db28;
          lVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
          if (local_a44 < *(int *)(local_a50 + 0x18)) {
            do {
              iVar14 = local_a44;
              pFVar46 = (FPipelineCacheFileFormatPSO *)
                        ((longlong)local_a44 * 0x2d0 + *(longlong *)local_a60._0_8_);
              local_c68 = ::GetTypeHash(pFVar46);
              bVar10 = FPipelineFileCacheManager::IsPSOEntryCached(pFVar46,(FPSOUsageData *)0x0);
              if ((bVar10) && (3 < (byte)LogRHI._0_1_)) {
                UE::Logging::Private::BasicLog<4>
                          (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                            ::__l67::LOG_Static,(FLogCategoryBase *)&LogRHI);
              }
              uVar49 = local_c68;
              pFVar32 = TMapBase<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                        ::FindRef((TMapBase<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                                   *)pTVar30,local_c68);
              pTVar21 = local_c00;
              if ((pFVar32 != (FPipelineStateStats *)0x0) && (0 < pFVar32->TotalBindCount)) {
                local_458._64_4_ = uVar49;
                local_458._48_8_ = 0;
                local_458._56_8_ = 0;
                local_458._16_4_ = (this->FileGuid).A;
                local_458._20_4_ = (this->FileGuid).B;
                local_458._24_4_ = (this->FileGuid).C;
                local_458._28_4_ = (this->FileGuid).D;
                local_410 = (void *)0x0;
                local_458._32_8_ = lVar4;
                local_458._40_8_ = lVar5;
                local_408 = 0;
                local_3f0 = (void *)0x0;
                local_3e8 = uVar38;
                uStack_3e0 = uVar6;
                local_3d0 = (ForElementType<FSetElementId>)0x0;
                local_3c8 = 0;
                local_3c0 = 0;
                local_3b8 = 0;
                local_3b0 = 0;
                local_458._0_8_ = local_c00;
                FPipelineCacheFileFormatPSOMetaData::AddShaders
                          ((FPipelineCacheFileFormatPSOMetaData *)local_458,pFVar46);
                local_ae8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_ae8.ArrayNum = 0;
                local_ae8.ArrayMax = 0;
                local_ad8 = 0;
                FMemoryWriter::FMemoryWriter(&local_738,&local_ae8,false,false,(FName)0x0);
                (**(code **)(local_738._0_8_ + 0x130))(&local_738,0x1d);
                ::operator<<((FArchive *)&local_738,pFVar46);
                pFVar18 = local_c80;
                (**(code **)(*(longlong *)local_c80 + 0x188))
                          (local_c80,local_ae8.AllocatorInstance.Data,
                           (longlong)*(int *)(local_738._152_8_ + 8));
                local_458._8_8_ = SEXT48(*(int *)(local_738._152_8_ + 8));
                if ((((local_458._28_4_ == 0 && local_458._24_4_ == 0) && local_458._20_4_ == 0) &&
                     local_458._16_4_ == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Meta.FileGuid != FGuid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                        ,0xa05,L""), bVar10)) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>
                          ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                            *)&(this->TOC).MetaData,&local_c68,
                           (FPipelineCacheFileFormatPSOMetaData *)local_458);
                pTVar21 = (TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                           *)((longlong)&pTVar21->field_0x0 + local_458._8_8_);
                local_c00 = pTVar21;
                pTVar33 = (TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                           *)(**(code **)(*(longlong *)pFVar18 + 0x28))(pFVar18);
                if ((pTVar21 != pTVar33) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PSOOffset == FileWriter->Tell()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                        ,0xa09,L""), bVar10)) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                local_c94 = local_c94 + 1;
                TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
                ::RemoveByIndex(local_a38,iVar14);
                if (6 < (byte)LogRHI._0_1_) {
                  UE::Logging::Private::BasicLog<7>
                            (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                              ::__l102::LOG_Static,(FLogCategoryBase *)&LogRHI);
                }
                FArchive::~FArchive((FArchive *)&local_738);
                if (local_ae8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_ae8.AllocatorInstance.Data);
                }
                local_3c8 = 0;
                if (local_3d0 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_3d0);
                }
                TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Empty((TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_410,0);
                if (local_3f0 != (void *)0x0) {
                  FMemory::Free(local_3f0);
                }
                if (local_410 != (void *)0x0) {
                  FMemory::Free(local_410);
                }
              }
              local_a48 = local_a48 & ~local_a54;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a60 + 8));
            } while (local_a44 < *(int *)(local_a50 + 0x18));
          }
          pTVar1 = &(this->TOC).MetaData;
          PVar53 = *(int *)&(this->TOC).MetaData.field_0x8 -
                   *(int *)&(this->TOC).MetaData.field_0x34;
          local_c64 = PVar53;
          if (param_4 != Default) {
            SortMetaData(pTVar1,param_4);
            PVar50 = param_4;
          }
          (this->TOC).SortedOrder = PVar50;
          MergePSOUsageToMetaData
                    ((TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
                      *)local_c10,pTVar1,(long64)local_c58,true);
          pFVar18 = local_c80;
          *local_960 = (ulong64)pTVar21;
          local_a30.TableOffset = (ulong64)pTVar21;
          (**(code **)(*(longlong *)local_c80 + 0x1b8))(local_c80,pTVar21);
          local_3a8._0_4_ = (this->TOC).SortedOrder;
          local_3a0.Elements._0_8_ = 0;
          local_3a0.Elements._8_8_ = 0;
          local_3a0.Elements._32_8_ = 0;
          local_3a0.Elements._40_8_ = uVar38;
          local_3a0.Elements._48_8_ = uVar6;
          local_3a0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_3a0.HashSize = 0;
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                       *)(local_3a8 + 8),
                      (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                       *)&(this->TOC).MetaData);
          ::operator<<((FArchive *)pFVar18,(FPipelineCacheFileFormatTOC *)local_3a8);
          local_3a0.HashSize = 0;
          if (local_3a0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_3a0.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_3a8 + 8));
        }
        else if (local_c90 == BoundPSOsOnly) {
          local_608._0_4_ = MostToLeastUsed;
          local_600._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)0x0;
          local_600._8_8_ = 0;
          local_5e0 = (ForElementType<unsigned_int>)0x0;
          local_5d8 = ___xmm_00000000ffffffff0000008000000000;
          uStack_5d0 = _UNK_150631d98;
          local_5c0.Data = (FScriptContainerElement *)0x0;
          local_5b8 = 0;
          local_a80._padding_._0_4_ = 0;
          local_a80._padding_._4_4_ = 1;
          local_a80.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)
               &FPipelineFileCacheManager::FileCacheMap.field_0x10;
          local_a80.UnvisitedBitMask = 0xffffffff;
          local_a80.CurrentBitIndex = 0;
          local_a80.BaseBitIndex = 0;
          iVar14 = 0;
          if (FPipelineFileCacheManager::FileCacheMap._40_4_ != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a80);
            iVar14 = FPipelineFileCacheManager::FileCacheMap._40_4_;
          }
          unique0x10001d6d = CONCAT44(local_a80._padding_._4_4_,(undefined4)local_a80._padding_);
          uStack_be0 = CONCAT44(local_a80.CurrentBitIndex,local_a80.UnvisitedBitMask);
          lStack_bd8 = CONCAT44(local_a80._28_4_,local_a80.BaseBitIndex);
          pTStack_be8 = local_a80.Array;
          local_bd0 = FPipelineFileCacheManager::FileCacheMap._8_4_ -
                      FPipelineFileCacheManager::FileCacheMap._52_4_;
          local_bf8._0_8_ = &FPipelineFileCacheManager::FileCacheMap;
          local_8d8._0_8_ = &FPipelineFileCacheManager::FileCacheMap;
          local_8c8 = local_a80.Array;
          iStack_8b0 = FPipelineFileCacheManager::FileCacheMap._8_4_ -
                       FPipelineFileCacheManager::FileCacheMap._52_4_;
          uStack_8ac = uStack_bcc;
          unique0x100031b2 = unique0x10001d6d;
          uStack_8c0 = uStack_be0;
          local_8b8 = lStack_bd8;
          pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_648,
                               (TBitArray<FDefaultBitArrayAllocator> *)
                               &FPipelineFileCacheManager::FileCacheMap.field_0x10,iVar14);
          local_bf8._0_8_ = &FPipelineFileCacheManager::FileCacheMap;
          unique0x100017f9 = pTVar22->_padding_;
          pTStack_be8 = pTVar22->Array;
          uStack_be0._0_4_ = pTVar22->UnvisitedBitMask;
          uStack_be0._4_4_ = pTVar22->CurrentBitIndex;
          lStack_bd8 = *(longlong *)&pTVar22->BaseBitIndex;
          local_bd0 = FPipelineFileCacheManager::FileCacheMap._8_4_ -
                      FPipelineFileCacheManager::FileCacheMap._52_4_;
          local_808._padding_ = (longlong)&FPipelineFileCacheManager::FileCacheMap;
          local_808.InitialNum =
               FPipelineFileCacheManager::FileCacheMap._8_4_ -
               FPipelineFileCacheManager::FileCacheMap._52_4_;
          local_808._44_4_ = uStack_bcc;
          local_808._padding_ = unique0x100017f9;
          local_808._padding_ = (longlong)pTStack_be8;
          local_808._padding_ = uStack_be0;
          local_808._padding_ = lStack_bd8;
          bVar10 = TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_8d8,&local_808);
          if (bVar10) {
            do {
              TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
              ::Append<FDefaultSetAllocator>
                        ((TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                          *)local_600,
                         (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                          *)(*(longlong *)
                              ((longlong)uStack_8c0._4_4_ * 0x20 + 0x10 +
                              *(longlong *)local_8d8._0_8_) + 0x30));
              uStack_8c0 = CONCAT44(uStack_8c0._4_4_,(uint)uStack_8c0 & ~uStack_8cc);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_8d8 + 8));
              bVar10 = TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_8d8,&local_808);
            } while (bVar10);
          }
          local_5a8.Elements._0_8_ = 0;
          local_5a8.Elements._8_8_ = 0;
          local_5a8.Elements._32_8_ = 0;
          local_5a8.Elements._40_4_ = 0;
          local_5a8.Elements._44_4_ = 0x80;
          local_5a8.Elements._48_4_ = 0xffffffff;
          local_5a8.Elements._52_4_ = 0;
          local_5a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_5a8.HashSize = 0;
          pFVar23 = FGuid::NewGuid(&local_748);
          puVar42 = &(param_3->Elements).field_0x10;
          local_aa0._padding_._0_4_ = 0;
          local_aa0._padding_._4_4_ = 1;
          local_a30.Guid.A = pFVar23->A;
          local_a30.Guid.B = pFVar23->B;
          local_a30.Guid.C = pFVar23->C;
          local_a30.Guid.D = pFVar23->D;
          local_aa0.UnvisitedBitMask = 0xffffffff;
          local_aa0.CurrentBitIndex = 0;
          local_aa0.BaseBitIndex = 0;
          local_aa0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar42;
          if (*(int *)&(param_3->Elements).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_aa0);
          }
          uStack_c38 = CONCAT44(local_aa0._padding_._4_4_,(undefined4)local_aa0._padding_);
          uStack_c28 = CONCAT44(local_aa0.CurrentBitIndex,local_aa0.UnvisitedBitMask);
          uStack_c20 = CONCAT44(local_aa0._28_4_,local_aa0.BaseBitIndex);
          local_c18 = *(int *)&(param_3->Elements).field_0x8 -
                      *(int *)&(param_3->Elements).field_0x34;
          pTStack_c30 = local_aa0.Array;
          uStack_bcc = uStack_c14;
          local_bd0 = local_c18;
          pTStack_be8 = local_aa0.Array;
          local_c40 = param_3;
          local_bf8._0_8_ = param_3;
          unique0x1000310a = uStack_c38;
          uStack_be0 = uStack_c28;
          lStack_bd8 = uStack_c20;
          pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_628,(TBitArray<FDefaultBitArrayAllocator> *)puVar42,
                               *(int *)&(param_3->Elements).field_0x28);
          uStack_c38 = pTVar22->_padding_;
          pTStack_c30 = pTVar22->Array;
          uStack_c28._0_4_ = pTVar22->UnvisitedBitMask;
          uStack_c28._4_4_ = pTVar22->CurrentBitIndex;
          uStack_c20 = *(longlong *)&pTVar22->BaseBitIndex;
          local_c18 = *(int *)&(param_3->Elements).field_0x8 -
                      *(int *)&(param_3->Elements).field_0x34;
          local_7d8._44_4_ = uStack_c14;
          local_7d8.InitialNum = local_c18;
          local_c40 = param_3;
          local_7d8._padding_ = (longlong)param_3;
          local_7d8._padding_ = uStack_c38;
          local_7d8._padding_ = (longlong)pTStack_c30;
          local_7d8._padding_ = uStack_c28;
          local_7d8._padding_ = uStack_c20;
          bVar10 = TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_bf8,&local_7d8);
          lVar5 = _UNK_15060db28;
          lVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
          if (bVar10) {
            do {
              local_508.Stats.FirstFrameUsed = lVar4;
              local_508.Stats.LastFrameUsed = lVar5;
              local_508.Stats.CreateCount = 0;
              local_508.Stats.TotalBindCount = 0;
              local_508.Shaders.Elements._40_8_ = uVar38;
              local_508.Shaders.Elements._48_8_ = uVar6;
              local_508.FileOffset = 0;
              local_508.FileGuid.A = 0;
              local_508.FileGuid.B = 0;
              local_508.FileGuid.C = 0;
              local_508.FileGuid.D = 0;
              pFVar46 = (FPipelineCacheFileFormatPSO *)
                        ((longlong)uStack_be0._4_4_ * 0x2d0 +
                        *(longlong *)
                         (TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_bf8._0_8_);
              local_508.Stats.PSOHash = 0;
              local_508.Shaders.Elements._0_8_ = 0;
              local_508.Shaders.Elements._8_8_ = 0;
              local_508.Shaders.Elements._32_8_ = 0;
              local_508.Shaders.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_508.Shaders.HashSize = 0;
              local_508.UsageMask = 0;
              local_508.LastUsedUnixTime = 0;
              local_508.EngineFlags = 0;
              local_508.Stats.PSOHash = ::GetTypeHash(pFVar46);
              local_508.FileOffset = 0;
              local_508.FileGuid.A = local_a30.Guid.A;
              local_508.FileGuid.B = local_a30.Guid.B;
              local_508.FileGuid.C = local_a30.Guid.C;
              local_508.FileGuid.D = local_a30.Guid.D;
              local_508.FileSize = 0;
              FPipelineCacheFileFormatPSOMetaData::AddShaders(&local_508,pFVar46);
              if ((((local_508.FileGuid.D == 0 && local_508.FileGuid.C == 0) &&
                   local_508.FileGuid.B == 0) && local_508.FileGuid.A == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Meta.FileGuid != FGuid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                      ,0xa42,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                uVar11 = (*pcVar3)();
                return (bool)uVar11;
              }
              TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
              ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>
                        ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                          *)local_600,&local_508.Stats.PSOHash,&local_508);
              TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
              ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSO_const_&>
                        ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                          *)&local_5a8,&local_508.Stats.PSOHash,pFVar46);
              local_508.Shaders.HashSize = 0;
              if (local_508.Shaders.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_508.Shaders.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_508.Shaders.Elements);
              uStack_be0 = CONCAT44(uStack_be0._4_4_,(uint)uStack_be0 & ~uStack_bec);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_bf8 + 8));
              bVar10 = TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_bf8,&local_7d8);
            } while (bVar10);
          }
          MergePSOUsageToMetaData
                    ((TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
                      *)local_c10,
                     (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                      *)local_600,(long64)local_c58,false);
          pTVar21 = local_c88;
          local_ac0._padding_._0_4_ = 0;
          local_ac0._padding_._4_4_ = 1;
          local_ac0.UnvisitedBitMask = 0xffffffff;
          puVar42 = &local_c88->field_0x10;
          local_ac0.CurrentBitIndex = 0;
          local_ac0.BaseBitIndex = 0;
          local_ac0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar42;
          if (*(int *)&local_c88->field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_ac0);
          }
          uStack_c38 = CONCAT44(local_ac0._padding_._4_4_,(undefined4)local_ac0._padding_);
          uStack_c28 = CONCAT44(local_ac0.CurrentBitIndex,local_ac0.UnvisitedBitMask);
          uStack_c20 = CONCAT44(local_ac0._28_4_,local_ac0.BaseBitIndex);
          local_c18 = *(int *)&pTVar21->field_0x8 - *(int *)&pTVar21->field_0x34;
          pTStack_c30 = local_ac0.Array;
          local_c40 = (TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
                       *)pTVar21;
          local_908._0_8_ = pTVar21;
          uStack_8e0._4_4_ = uStack_c14;
          uStack_8e0._0_4_ = local_c18;
          local_8f8 = local_ac0.Array;
          unique0x1000319a = uStack_c38;
          uStack_8f0 = uStack_c28;
          local_8e8 = uStack_c20;
          pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_688,(TBitArray<FDefaultBitArrayAllocator> *)puVar42,
                               *(int *)&pTVar21->field_0x28);
          local_c40 = (TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
                       *)pTVar21;
          uStack_c38 = pTVar22->_padding_;
          pTStack_c30 = pTVar22->Array;
          uStack_c28._0_4_ = pTVar22->UnvisitedBitMask;
          uStack_c28._4_4_ = pTVar22->CurrentBitIndex;
          uStack_c20 = *(longlong *)&pTVar22->BaseBitIndex;
          local_c18 = *(int *)&pTVar21->field_0x8 - *(int *)&pTVar21->field_0x34;
          local_7a8._padding_ = (longlong)pTVar21;
          local_7a8._44_4_ = uStack_c14;
          local_7a8.InitialNum = local_c18;
          local_7a8._padding_ = uStack_c38;
          local_7a8._padding_ = (longlong)pTStack_c30;
          local_7a8._padding_ = uStack_c28;
          local_7a8._padding_ = uStack_c20;
          bVar10 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineStateStats_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForConstIterator::operator!=
                             ((TRangedForConstIterator *)local_908,&local_7a8);
          if (bVar10) {
            do {
              lVar24 = (longlong)uStack_8f0._4_4_;
              lVar45 = *(longlong *)local_908._0_8_;
              pTVar25 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                                *)local_600,*(uint *)(lVar45 + lVar24 * 0x18));
              puVar48 = (uint *)&pTVar25->field_0x8;
              if (pTVar25 == (TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *)0x0) {
                puVar48 = puVar55;
              }
              if (puVar48 != (uint *)0x0) {
                if ((puVar48[0x10] != *(uint *)(*(longlong *)(lVar45 + 8 + lVar24 * 0x18) + 0x20))
                   && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Meta.Stats.PSOHash == Pair.Value->PSOHash",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                           ,0xa51,L""), bVar10)) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                *(longlong *)(puVar48 + 0xc) =
                     *(longlong *)(puVar48 + 0xc) +
                     *(longlong *)(*(longlong *)(lVar45 + 8 + lVar24 * 0x18) + 0x10);
                lVar28 = **(longlong **)(lVar45 + 8 + lVar24 * 0x18);
                if (*(longlong *)(puVar48 + 8) < lVar28) {
                  *(longlong *)(puVar48 + 8) = lVar28;
                }
                lVar28 = *(longlong *)(*(longlong *)(lVar45 + 8 + lVar24 * 0x18) + 8);
                if (*(longlong *)(puVar48 + 10) < lVar28) {
                  *(longlong *)(puVar48 + 10) = lVar28;
                }
                puVar52 = *(uint **)(*(longlong *)(lVar45 + 8 + lVar24 * 0x18) + 0x18);
                puVar37 = puVar55;
                if (0 < (longlong)*(uint **)(puVar48 + 0xe)) {
                  puVar37 = *(uint **)(puVar48 + 0xe);
                }
                puVar26 = puVar55;
                if (0 < (longlong)puVar52) {
                  puVar26 = puVar52;
                }
                uVar38 = (longlong)puVar37 + (longlong)puVar26;
                if (0x7fffffffffffffff < uVar38) {
                  uVar38 = 0x7fffffffffffffff;
                }
                *(ulonglong *)(puVar48 + 0xe) = uVar38;
              }
              uStack_8f0 = CONCAT44(uStack_8f0._4_4_,(uint)uStack_8f0 & ~uStack_8fc);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_908 + 8));
              bVar10 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineStateStats_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForConstIterator::operator!=
                                 ((TRangedForConstIterator *)local_908,&local_7a8);
              pTVar21 = local_c88;
            } while (bVar10);
          }
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    ((TIterator *)local_778,
                     (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                      *)local_600);
          local_af8 = (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                       *)local_600;
          local_af0 = 0;
          stack0xfffffffffffff4e8 = local_778._16_16_;
          local_b28 = (longlong *)local_778._0_8_;
          auStack_b20._0_8_ = local_778._8_8_;
          local_b08 = local_758;
          pTStack_b00 = pTStack_750;
          uVar38 = local_778._24_8_ >> 0x20;
          uVar49 = local_778._28_4_;
          if ((int)uVar49 < *(int *)(local_778._16_8_ + 0x18)) {
            do {
              plVar9 = local_b28;
              lVar45 = *local_b28;
              uVar13 = *(uint *)((longlong)(int)uVar38 * 0xc0 + lVar45);
              if (*(int *)&pTVar21->field_0x8 != *(int *)&pTVar21->field_0x34) {
                puVar42 = &pTVar21->field_0x38;
                if (*(undefined1 **)&pTVar21->field_0x40 != (undefined1 *)0x0) {
                  puVar42 = *(undefined1 **)&pTVar21->field_0x40;
                }
                iVar14 = *(int *)(puVar42 +
                                 (ulonglong)(*(int *)&pTVar21->field_0x48 - 1U & uVar13) * 4);
                if (iVar14 != -1) {
                  do {
                    lVar24 = *(longlong *)pTVar21 + (longlong)iVar14 * 0x18;
                    if (*(uint *)(*(longlong *)pTVar21 + (longlong)iVar14 * 0x18) == uVar13) {
                      if (((lVar24 != 0) && (*(longlong *)(lVar24 + 8) != 0)) &&
                         (0 < *(longlong *)(*(longlong *)(lVar24 + 8) + 0x18))) {
                        local_bc8[0] = uVar13;
                        iVar14 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
                                 ::FindIndexByHash<unsigned_int>(&local_5a8,uVar13,local_bc8);
                        if (iVar14 == -1) {
                          if ((*(longlong *)((longlong)(int)uVar49 * 0xc0 + 0x10 + lVar45) == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("It->Value.FileSize > 0",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                                  ,0xa68,L""), bVar10)) {
                            pcVar3 = (code *)swi(3);
                            uVar11 = (*pcVar3)();
                            return (bool)uVar11;
                          }
                          lVar45 = (longlong)(int)uVar49 * 0xc0;
                          pFVar27 = `FPipelineCacheFile::SavePipelineFileCache'::__l46::<lambda_1>::
                                    operator()(&local_9e0,(FGuid *)(*plVar9 + 0x18 + lVar45));
                          if (pFVar27 == (FMemoryReader *)0x0) {
                            local_b50 = (void *)0x0;
                            local_b48 = 0;
                            Algo::
                            ForEach<TMap<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>_>_&,_FPipelineCacheFile::SavePipelineFileCache_::__l205::<lambda_2>_>
                                      (&FPipelineFileCacheManager::FileCacheMap,
                                       (FString *)&local_b50);
                            if (3 < (byte)LogRHI._0_1_) {
                              local_b90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                              ;
                              local_b90.Data.ArrayNum = 0;
                              local_b90.Data.ArrayMax = 0;
                              FGuid::AppendString(local_9d8,&local_b90,Digits);
                              local_b80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                              ;
                              local_b80.Data.ArrayNum = 0;
                              local_b80.Data.ArrayMax = 0;
                              FGuid::AppendString(&local_a30.Guid,&local_b80,Digits);
                              local_b70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                              ;
                              local_b70.Data.ArrayNum = 0;
                              local_b70.Data.ArrayMax = 0;
                              FGuid::AppendString((FGuid *)(*plVar9 + lVar45 + 0x18),&local_b70,
                                                  Digits);
                              UE::Logging::Private::BasicLog<4>
                                        (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                                          ::__l206::LOG_Static,(FLogCategoryBase *)&LogRHI);
                              if (local_b70.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_b70.Data.AllocatorInstance.Data);
                              }
                              if (local_b80.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_b80.Data.AllocatorInstance.Data);
                              }
                              if (local_b90.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_b90.Data.AllocatorInstance.Data);
                              }
                            }
                            local_c8c = local_c8c + 1;
                            TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                            ::RemoveByIndex(pTStack_b00,uVar49);
                            local_af0 = CONCAT11(local_af0._1_1_,1);
                            pTVar21 = local_c88;
                            if (local_b50 != (void *)0x0) {
                              FMemory::Free(local_b50);
                              pTVar21 = local_c88;
                            }
                          }
                          else {
                            if (6 < (byte)LogRHI._0_1_) {
                              (**(code **)(pFVar27->_padding_ + 0x30))(pFVar27);
                              local_b60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                              ;
                              local_b60.Data.ArrayNum = 0;
                              local_b60.Data.ArrayMax = 0;
                              FGuid::AppendString((FGuid *)(*plVar9 + 0x18 + lVar45),&local_b60,
                                                  Digits);
                              UE::Logging::Private::BasicLog<7>
                                        (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                                          ::__l179::LOG_Static,(FLogCategoryBase *)&LogRHI);
                              if (local_b60.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_b60.Data.AllocatorInstance.Data);
                              }
                            }
                            lVar24 = *plVar9;
                            uVar13 = (**(code **)(pFVar27->_padding_ + 0x30))(pFVar27);
                            if (((ulonglong)uVar13 <= *(ulonglong *)(lVar24 + 8 + lVar45)) &&
                               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "It->Value.FileOffset < (uint32)Reader->TotalSize()"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                                  ,0xa6d,L""), bVar10)) {
                              pcVar3 = (code *)swi(3);
                              uVar11 = (*pcVar3)();
                              return (bool)uVar11;
                            }
                            pFVar27->_padding_ =
                                 *(longlong *)((longlong)(int)uVar49 * 0xc0 + 8 + *plVar9);
                            local_348.ComputeDesc.ComputeShader.Hash[0] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[1] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[2] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[3] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[4] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[5] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[6] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[7] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[8] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[9] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[10] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0xb] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0xc] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0xd] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0xe] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0xf] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0x10] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0x11] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0x12] = '\0';
                            local_348.ComputeDesc.ComputeShader.Hash[0x13] = '\0';
                            FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor
                                      (&local_348.GraphicsDesc);
                            FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
                            FPipelineFileCacheRayTracingDesc(&local_348.RayTracingDesc);
                            ::operator<<((FArchive *)pFVar27,&local_348);
                            TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                            ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSO_const_&>
                                      ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                                        *)&local_5a8,
                                       (uint *)(*plVar9 + (longlong)(int)uVar49 * 0xc0),&local_348);
                            FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
                            ~FPipelineFileCacheRayTracingDesc(&local_348.RayTracingDesc);
                            pTVar21 = local_c88;
                          }
                        }
                        goto LAB_145c76849;
                      }
                      break;
                    }
                    iVar14 = *(int *)(lVar24 + 0x10);
                  } while (iVar14 != -1);
                }
              }
              local_c8c = local_c8c + 1;
              TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_b00,uVar49);
              local_af0 = CONCAT11(local_af0._1_1_,1);
LAB_145c76849:
              uStack_b10 = uStack_b10 & ~auStack_b20._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b20);
              uVar38 = (ulonglong)uStack_b0c;
              uVar49 = uStack_b0c;
            } while ((int)uStack_b0c < *(int *)(auStack_b20._8_8_ + 0x18));
            if (((char)local_af0 != '\0') && (local_af0._1_1_ != '\0')) {
              uVar49 = *(int *)&(local_af8->Elements).field_0x8 -
                       *(int *)&(local_af8->Elements).field_0x34;
              if (uVar49 < 4) {
                iVar14 = 1;
              }
              else {
                uVar38 = (ulonglong)((uVar49 >> 1) + 7) * 2 + 1;
                lVar45 = 0x3f;
                if (uVar38 != 0) {
                  for (; uVar38 >> lVar45 == 0; lVar45 = lVar45 + -1) {
                  }
                }
                local_9ec = (undefined4)lVar45;
                iVar14 = 1 << ((byte)lVar45 & 0x1f);
              }
              if (((0 < (int)uVar49) && (local_af8->HashSize < iVar14)) ||
                 (iVar14 < local_af8->HashSize)) {
                local_af8->HashSize = iVar14;
                TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                ::Rehash(local_af8);
              }
            }
          }
          local_c64 = local_600._8_4_ - iStack_5cc;
          PVar53 = Default;
          if (param_4 == FirstToLatestUsed) {
            local_970 = local_c97;
            local_968 = &local_970;
            if (0 < (int)local_c64) {
              TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Compact((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_600);
              uVar6 = local_600._0_8_;
              iVar14 = local_600._8_4_ - iStack_5cc;
              if ((iVar14 < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                uVar11 = (*pcVar3)();
                return (bool)uVar11;
              }
              AlgoImpl::
              IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>
                        ((TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)uVar6,iVar14,
                         local_c97[0],
                         (FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>_>
                          *)&local_968);
            }
            uVar49 = local_5b8;
            uVar38 = (ulonglong)local_5b8;
            if ((ForElementType<FSetElementId>)local_5c0.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_5c0,0,0,4)
              ;
            }
            if (uVar49 != 0) {
              uVar13 = uVar49;
              if (uVar49 < 2) {
                if ((ForElementType<FSetElementId>)local_5c0.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar13 = 0;
                  goto LAB_145c76ed7;
                }
              }
              else {
LAB_145c76ed7:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_5c0,0,uVar13,4);
              }
              if (0 < (int)uVar49) {
                puVar48 = puVar55;
                do {
                  FVar39.Data = (FScriptContainerElement *)local_5c8;
                  if ((ForElementType<FSetElementId>)local_5c0.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar39.Data = local_5c0.Data;
                  }
                  uVar31 = (ulonglong)puVar48 & (longlong)(int)uVar49 - 1U;
                  puVar48 = (uint *)((longlong)puVar48 + 1);
                  *(undefined4 *)((longlong)FVar39.Data + uVar31 * 4) = 0xffffffff;
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            if (local_5b8 != 0) {
              pTStack_ba8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_600 + 0x10);
              local_bb0 = 0;
              uStack_bac = 1;
              uStack_b9c = 0;
              uStack_b98 = 0;
              puVar48 = puVar55;
              if ((PSOOrder)local_5d8 != 0) {
                FVar51 = (ForElementType<unsigned_int>)((longlong)local_600 + 0x10);
                if (local_5e0 != (ForElementType<unsigned_int>)0x0) {
                  FVar51 = local_5e0;
                }
                uVar49 = *(uint *)FVar51;
                puVar52 = puVar55;
                while (uVar49 == 0) {
                  uStack_b98 = (int)puVar52 + 0x20;
                  puVar52 = (uint *)(ulonglong)uStack_b98;
                  iVar14 = (int)puVar48;
                  local_bb0 = iVar14 + 1;
                  puVar48 = (uint *)(ulonglong)local_bb0;
                  if ((int)(((PSOOrder)local_5d8 - 1) +
                           ((int)((PSOOrder)local_5d8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_bb0)
                  goto LAB_145c76ff0;
                  uVar49 = ((uint *)((longlong)FVar51 + 4))[iVar14];
                }
                uStack_bac = -uVar49 & uVar49;
                uVar38 = (ulonglong)uStack_bac * 2 + 1;
                lVar45 = 0x3f;
                if (uVar38 != 0) {
                  for (; uVar38 >> lVar45 == 0; lVar45 = lVar45 + -1) {
                  }
                }
                local_9f8 = (int)lVar45;
                uStack_b9c = (uStack_b98 - 1) + local_9f8;
                puVar48 = (uint *)(ulonglong)uStack_b9c;
                if ((int)(PSOOrder)local_5d8 < (int)uStack_b9c) {
LAB_145c76ff0:
                  puVar48 = (uint *)(local_5d8 & 0xffffffff);
                  uStack_b9c = (PSOOrder)local_5d8;
                }
              }
              local_ba0 = 0xffffffff;
              local_9d0 = (longlong *)local_600;
              local_9c8._padding_ = CONCAT44(uStack_bac,local_bb0);
              local_9c8.CurrentBitIndex = uStack_b9c;
              local_9c8.UnvisitedBitMask = 0xffffffff;
              local_9c8._28_4_ = uStack_b94;
              local_9c8.BaseBitIndex = uStack_b98;
              local_9c8.Array = pTStack_ba8;
              if ((int)puVar48 < (int)(PSOOrder)local_5d8) {
                do {
                  lVar45 = *local_9d0;
                  lVar24 = (longlong)(int)puVar48 * 0xc0;
                  uVar49 = local_5b8 - 1 & *(uint *)(lVar24 + lVar45);
                  *(uint *)(lVar24 + 0xbc + lVar45) = uVar49;
                  FVar39.Data = (FScriptContainerElement *)local_5c8;
                  if ((ForElementType<FSetElementId>)local_5c0.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar39.Data = local_5c0.Data;
                  }
                  uVar38 = (longlong)(int)local_5b8 - 1U & (longlong)(int)uVar49;
                  *(undefined4 *)(lVar24 + 0xb8 + lVar45) =
                       *(undefined4 *)((longlong)FVar39.Data + uVar38 * 4);
                  *(int *)((longlong)FVar39.Data + uVar38 * 4) = (int)puVar48;
                  local_9c8.UnvisitedBitMask =
                       local_9c8.UnvisitedBitMask & ~local_9c8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9c8);
                  puVar48 = (uint *)(ulonglong)(uint)local_9c8.CurrentBitIndex;
                } while (local_9c8.CurrentBitIndex < (local_9c8.Array)->NumBits);
              }
            }
          }
          else if (param_4 == MostToLeastUsed) {
            local_9a8.Predicate.Predicate =
                 (TDereferenceWrapper<FPipelineCacheFileFormatPSOMetaData,_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
                  )local_c5c;
            TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
            ::
            Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>
                      ((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                        *)local_600,&local_9a8);
          }
          local_608._0_4_ = param_4;
          local_c88 = (TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                       *)(**(code **)(*(longlong *)local_c80 + 0x28))();
          PVar54 = (PSOOrder)local_5d8;
          uVar49 = 1;
          uStack_c28._4_4_ = PVar53;
          if ((PSOOrder)local_5d8 != Default) {
            FVar51 = (ForElementType<unsigned_int>)((longlong)local_600 + 0x10);
            if (local_5e0 != (ForElementType<unsigned_int>)0x0) {
              FVar51 = local_5e0;
            }
            uVar13 = *(uint *)FVar51;
            puVar48 = puVar55;
            puVar52 = puVar55;
            PVar53 = Default;
            PVar50 = Default;
            while (uVar13 == 0) {
              iVar14 = (int)puVar48;
              PVar53 = (int)puVar52 + 0x20;
              puVar52 = (uint *)(ulonglong)PVar53;
              PVar50 = iVar14 + FirstToLatestUsed;
              puVar48 = (uint *)(ulonglong)PVar50;
              uStack_c28._4_4_ = (PSOOrder)local_5d8;
              if ((int)(((PSOOrder)local_5d8 - FirstToLatestUsed) +
                       ((int)((PSOOrder)local_5d8 - FirstToLatestUsed) >> 0x1f & 0x1fU)) >> 5 <
                  (int)PVar50) goto LAB_145c76b42;
              uVar13 = ((uint *)((longlong)FVar51 + 4))[iVar14];
            }
            uVar49 = -uVar13 & uVar13;
            uVar38 = (ulonglong)uVar49 * 2 + 1;
            lVar45 = 0x3f;
            if (uVar38 != 0) {
              for (; uVar38 >> lVar45 == 0; lVar45 = lVar45 + -1) {
              }
            }
            local_9f4 = (int)lVar45;
            uStack_c28._4_4_ = local_9f4 + -1 + PVar53;
            if ((int)(PSOOrder)local_5d8 < (int)uStack_c28._4_4_) {
              uStack_c28._4_4_ = (PSOOrder)local_5d8;
            }
          }
LAB_145c76b42:
          local_c40 = (TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
                       *)local_600;
          pTStack_c30 = (TBitArray<FDefaultBitArrayAllocator> *)(local_600 + 0x10);
          PVar47 = (PSOOrder)local_5d8 & 0xffffffe0;
          local_c18 = local_600._8_4_ - iStack_5cc;
          uStack_c38 = CONCAT44(uVar49,PVar50);
          uStack_c28._0_4_ = 0xffffffff;
          uStack_c20._4_4_ = local_64c;
          uStack_c20._0_4_ = PVar53;
          TStack_930._padding_ = uStack_c38;
          iVar14 = (int)(PSOOrder)local_5d8 >> 5;
          uStack_910 = CONCAT44(uStack_c14,local_c18);
          bVar36 = (byte)local_5d8;
          TStack_930.UnvisitedBitMask = 0xffffffff;
          TStack_930.CurrentBitIndex = uStack_c28._4_4_;
          TStack_930.BaseBitIndex = PVar53;
          TStack_930._28_4_ = local_64c;
          local_938 = (longlong *)local_c40;
          TStack_930.Array = pTStack_c30;
          if ((int)(PSOOrder)local_5d8 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L"");
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              uVar11 = (*pcVar3)();
              return (bool)uVar11;
            }
          }
          pTVar21 = local_c88;
          if (PVar54 != (PSOOrder)local_5d8) {
            FVar51 = (ForElementType<unsigned_int>)((longlong)local_600 + 0x10);
            if (local_5e0 != (ForElementType<unsigned_int>)0x0) {
              FVar51 = local_5e0;
            }
            uVar49 = -1 << (bVar36 & 0x1f) & *(uint *)((longlong)FVar51 + (longlong)iVar14 * 4);
            while (uVar49 == 0) {
              lVar45 = (longlong)iVar14;
              PVar47 = PVar47 + 0x20;
              iVar14 = iVar14 + 1;
              PVar54 = (PSOOrder)local_5d8;
              if ((int)(((PSOOrder)local_5d8 - FirstToLatestUsed) +
                       ((int)((PSOOrder)local_5d8 - FirstToLatestUsed) >> 0x1f & 0x1fU)) >> 5 <
                  iVar14) goto LAB_145c76c70;
              uVar49 = ((uint *)((longlong)FVar51 + 4))[lVar45];
            }
            uVar38 = (ulonglong)(-uVar49 & uVar49) * 2 + 1;
            lVar45 = 0x3f;
            if (uVar38 != 0) {
              for (; uVar38 >> lVar45 == 0; lVar45 = lVar45 + -1) {
              }
            }
            local_9f0 = (int)lVar45;
            PVar54 = local_9f0 + -1 + PVar47;
            if ((int)(PSOOrder)local_5d8 < (int)PVar54) {
              PVar54 = (PSOOrder)local_5d8;
            }
          }
LAB_145c76c70:
          while( true ) {
            plVar9 = local_938;
            if ((int)local_938[1] - *(int *)((longlong)local_938 + 0x34) != (int)uStack_910) {
              local_c98 = 0;
              `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_c98);
            }
            pFVar18 = local_c80;
            if (((TStack_930.CurrentBitIndex == PVar54) &&
                (TStack_930.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_600 + 0x10))) &&
               (plVar9 == (longlong *)local_600)) break;
            lVar45 = *plVar9;
            lVar24 = (longlong)TStack_930.CurrentBitIndex * 0xc0;
            puVar48 = puVar55;
            if (local_5a8.Elements._8_4_ != local_5a8.Elements._52_4_) {
              FVar43 = (ForElementType<FSetElementId>)&local_5a8.Hash;
              if (local_5a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar43 = local_5a8.Hash.SecondaryData;
              }
              uVar49 = *(uint *)((longlong)FVar43 +
                                (ulonglong)(local_5a8.HashSize - 1U & *(uint *)(lVar24 + lVar45)) *
                                4);
              while (puVar48 = puVar55, uVar49 != 0xffffffff) {
                puVar48 = (uint *)((longlong)(int)uVar49 * 0x2d8 + local_5a8.Elements._0_8_);
                if (*puVar48 == *(uint *)(lVar24 + lVar45)) {
                  if (puVar48 != (uint *)0x0) goto LAB_145c76d55;
                  break;
                }
                uVar49 = puVar48[0xb4];
              }
            }
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L"");
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              uVar11 = (*pcVar3)();
              return (bool)uVar11;
            }
LAB_145c76d55:
            pTVar21 = local_c88;
            (**(code **)(*(longlong *)local_c80 + 0x1b8))(local_c80,local_c88);
            *(TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
              **)(lVar24 + 8 + lVar45) = pTVar21;
            puVar2 = (undefined8 *)(lVar24 + 0x18 + lVar45);
            *puVar2 = local_a30.Guid._0_8_;
            puVar2[1] = local_a30.Guid._8_8_;
            lVar28 = (**(code **)(*(longlong *)local_c80 + 0x28))();
            pFVar18 = local_c80;
            ::operator<<((FArchive *)local_c80,(FPipelineCacheFileFormatPSO *)(puVar48 + 2));
            lVar29 = (**(code **)(*(longlong *)pFVar18 + 0x28))(pFVar18);
            pTVar21 = (TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                       *)((longlong)local_c88 + (lVar29 - lVar28));
            *(longlong *)(lVar24 + 0x10 + lVar45) = lVar29 - lVar28;
            local_c88 = pTVar21;
            pTVar30 = (TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
                       *)(**(code **)(*(longlong *)local_c80 + 0x28))();
            if ((pTVar21 != pTVar30) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PSOOffset == FileWriter->Tell()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                    ,0xaa1,L""), bVar10)) {
              pcVar3 = (code *)swi(3);
              uVar11 = (*pcVar3)();
              return (bool)uVar11;
            }
            local_c94 = local_c94 + 1;
            TStack_930.UnvisitedBitMask = TStack_930.UnvisitedBitMask & ~TStack_930._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_930);
          }
          local_a30.TableOffset = (ulong64)pTVar21;
          (**(code **)(*(longlong *)local_c80 + 0x1b8))(local_c80,pTVar21);
          ::operator<<((FArchive *)pFVar18,(FPipelineCacheFileFormatTOC *)local_608);
          local_5a8.HashSize = 0;
          if (local_5a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_5a8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_5a8.Elements);
          local_5b8 = 0;
          if ((ForElementType<FSetElementId>)local_5c0.Data != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free(local_5c0.Data);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_600);
          PVar53 = local_c64;
        }
        else {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                              ,0xab0,L"");
          PVar53 = PVar50;
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
        }
        (**(code **)(*(longlong *)pFVar18 + 0x1b8))(pFVar18,0);
        ::operator<<((FArchive *)pFVar18,&local_a30);
        (**(code **)(*(longlong *)pFVar18 + 0x208))(pFVar18);
        pFVar8 = local_c80;
        bVar36 = pFVar18->field_0x29;
        cVar12 = (**(code **)(*(longlong *)local_c80 + 0x210))(local_c80);
        puVar48 = puVar55;
        if (cVar12 != '\0') {
          puVar48 = (uint *)(ulonglong)(~(bVar36 >> 1) & 1);
        }
        bVar10 = SUB81(puVar48,0);
        if ((bVar10 != false) && (local_c90 == BoundPSOsOnly)) {
          if (PVar53 == Default) {
            (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
            QueryPerformanceCounter(&local_940);
            if (4 < (byte)LogRHI._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                          ::__l256::LOG_Static,(FLogCategoryBase *)&LogRHI);
            }
            if (local_c50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c50.Data.AllocatorInstance.Data);
            }
            if (local_bc0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bc0.AllocatorInstance.Data);
            }
            local_510 = 0;
            if (local_518 != (void *)0x0) {
              FMemory::Free(local_518);
            }
            TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<_FPipelineCacheFile::SavePipelineFileCache_::__l46::FMemoryReaderAndMemory,TDefaultDelete<_FPipelineCacheFile::SavePipelineFileCache_::__l46::FMemoryReaderAndMemory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_558);
            if (local_c08 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c08);
            }
            bVar10 = false;
            goto LAB_145c77bb7;
          }
          pIVar34 = IFileManager::Get();
          local_888.DataPtr = (uchar *)local_bc0.AllocatorInstance.Data;
          local_888.ArrayNum = (long64)local_bc0.ArrayNum;
          FVar39.Data = (FScriptContainerElement *)L"";
          if (local_c50.Data.ArrayNum != 0) {
            FVar39.Data = local_c50.Data.AllocatorInstance.Data;
          }
          if ((local_bc0.ArrayNum < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          bVar10 = FFileHelper::SaveArrayToFile(&local_888,(wchar_t *)FVar39.Data,pIVar34,0);
        }
        SVar7 = local_c90;
        (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
        if (bVar10 == false) {
          pIVar34 = IFileManager::Get();
          FVar39.Data = (FScriptContainerElement *)L"";
          if (local_c50.Data.ArrayNum != 0) {
            FVar39.Data = local_c50.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar34 + 0x38))(pIVar34,FVar39.Data,0,0);
          QueryPerformanceCounter(&local_958);
          if (1 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                        ::__l332::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
        }
        else {
          if (local_c78.Data.ArrayNum == local_c50.Data.ArrayNum) {
            if (1 < local_c78.Data.ArrayNum) {
              iVar14 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)local_c78.Data.AllocatorInstance.Data,
                                  (wchar_t *)local_c50.Data.AllocatorInstance.Data);
              bVar57 = iVar14 == 0;
              goto LAB_145c77768;
            }
          }
          else {
            bVar57 = local_c78.Data.ArrayNum + local_c50.Data.ArrayNum == 1;
LAB_145c77768:
            if (!bVar57) {
              pIVar34 = IFileManager::Get();
              FVar39.Data = (FScriptContainerElement *)L"";
              if (local_c50.Data.ArrayNum != 0) {
                FVar39.Data = local_c50.Data.AllocatorInstance.Data;
              }
              FVar44.Data = (FScriptContainerElement *)L"";
              if (local_c78.Data.ArrayNum != 0) {
                FVar44.Data = local_c78.Data.AllocatorInstance.Data;
              }
              cVar12 = (**(code **)((longlong)*pIVar34 + 0x48))(pIVar34,FVar44.Data,FVar39.Data,1);
              if (cVar12 == '\0') {
                QueryPerformanceCounter(&local_948);
                if (1 < (byte)LogRHI._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                              ::__l312::LOG_Static,(FLogCategoryBase *)&LogRHI);
                }
                goto LAB_145c779da;
              }
            }
          }
          QueryPerformanceCounter(&local_950);
          if (((SVar7 != Incremental) && (SVar7 != BoundPSOsOnly)) &&
             (bVar57 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                  ,0xadd,L""), bVar57)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          if (4 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'
                        ::__l289::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          if ((local_c60 != 0) && (local_c60 != 1)) {
            pIVar34 = IFileManager::Get();
            (**(code **)((longlong)*pIVar34 + 0x38))(pIVar34,local_c08,0,0);
          }
        }
      }
LAB_145c779da:
      if (local_c50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c50.Data.AllocatorInstance.Data);
      }
      if (local_bc0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bc0.AllocatorInstance.Data);
      }
      local_510 = 0;
      if (local_518 != (void *)0x0) {
        FMemory::Free(local_518);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<_FPipelineCacheFile::SavePipelineFileCache_::__l46::FMemoryReaderAndMemory,TDefaultDelete<_FPipelineCacheFile::SavePipelineFileCache_::__l46::FMemoryReaderAndMemory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_558);
    }
    if (local_c08 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c08);
    }
  }
  else {
    if (((local_c90 != Incremental) ||
        (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34)) ||
       ((param_4 != (this->TOC).SortedOrder ||
        (*(int *)&param_5->field_0x8 != *(int *)&param_5->field_0x34)))) {
      local_c94 = 0;
      FVar16 = (FName)GetCurrentUnixTime();
      local_c58 = FVar16;
      ::FString::ConcatFF(&local_ad0,&local_c78,&JOURNAL_FILE_EXTENSION);
      FVar39.Data = local_ad0.Data.AllocatorInstance.Data;
      local_c08 = local_ad0.Data.AllocatorInstance.Data;
      local_c60 = local_ad0.Data.ArrayNum;
      local_ad0.Data.ArrayNum = 0;
      local_ad0.Data.ArrayMax = 0;
      local_ad0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pIVar34 = IFileManager::Get();
      FVar44.Data = (FScriptContainerElement *)L"";
      if (local_c60 != 0) {
        FVar44.Data = FVar39.Data;
      }
      pFVar17 = (FArchive *)(**(code **)((longlong)*pIVar34 + 0x20))(pIVar34,FVar44.Data,0);
      if ((pFVar17 == (FArchive *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("JournalWriter",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                              ,0x958,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      local_878.Guid.A = (this->FileGuid).A;
      local_878.Guid.B = (this->FileGuid).B;
      local_878.Guid.C = (this->FileGuid).C;
      local_878.Guid.D = (this->FileGuid).D;
      local_878.Version = 0x1d;
      local_878.Magic = 0x5049504543414348;
      local_878.GameVersion = GameVersion;
      local_878.Platform.Value = (uchar)this->ShaderPlatform;
      local_878.TableOffset = 0;
      local_878.LastGCUnixTime = (long64)FVar16;
      ::operator<<(pFVar17,&local_878);
      if (((pFVar17->field_0x29 & 2) != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!JournalWriter->IsError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                              ,0x969,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      (**(code **)(*(longlong *)pFVar17 + 0x210))(pFVar17);
      (*(code *)**(undefined8 **)pFVar17)(pFVar17,1);
      pIVar34 = IFileManager::Get();
      pFVar40 = (FScriptContainerElement *)L"";
      if (local_c60 != 0) {
        pFVar40 = local_c08;
      }
      cVar12 = (**(code **)((longlong)*pIVar34 + 0x50))(pIVar34,pFVar40);
      goto LAB_145c75c79;
    }
    bVar10 = true;
  }
  if (1 < *local_988) {
    puVar55 = (uint *)((longlong)(int)*local_988 << 2);
  }
  auVar56 = (uchar  [8])
            ((longlong)puVar55 +
            (longlong)*local_990 * 0xc0 + (ulonglong)((*local_9a0 + 0x1fU >> 5) << 2));
  if (auVar56 != (uchar  [8])0x0) {
    FVar35 = StatPtr_STAT_FileCacheMemory;
    if (StatPtr_STAT_FileCacheMemory == (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)0x0) {
      pFVar19 = ::FName::FName(&local_840,"STAT_FileCacheMemory");
      FVar35 = (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FileCacheMemory,*pFVar19,
                          L"File Cache","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                          L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar16 = *(FName *)FVar35;
    local_c10 = FVar16;
    if (((FVar16 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_980.NameAndInfo.Number = FVar16.Number & 0xffffafff | 0xa000;
      local_998 = FVar16;
      local_980.StatData.Pad = auVar56;
      local_980.NameAndInfo.Index.Value = FVar16.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_980);
      FStatsTrace::Add(&local_998,(long64)auVar56);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_145c77bb7:
  if (local_c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c78.Data.AllocatorInstance.Data);
  }
  if ((local_b38 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_b38 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_b38 & 4) != 0) {
    FThreadStats::AddMessage(local_b40,CycleScopeEnd);
  }
  return bVar10;
}

// SortMetaData @ 145c7a160

void __cdecl
FPipelineCacheFile::SortMetaData
          (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
           *param_1,PSOOrder param_2)

{
  undefined1 local_res10 [8];
  FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
  local_res18 [2];
  
  if (param_2 == FirstToLatestUsed) {
    local_res18[0].Predicate.Predicate =
         (TDereferenceWrapper<FPipelineCacheFileFormatPSOMetaData,_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
          )local_res10;
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>
              ((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                *)param_1,
               (FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>
                *)local_res18);
  }
  else if (param_2 == MostToLeastUsed) {
    local_res18[0].Predicate.Predicate =
         (TDereferenceWrapper<FPipelineCacheFileFormatPSOMetaData,_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
          )local_res10;
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>
              ((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                *)param_1,local_res18);
    return;
  }
  return;
}

