// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FMemoryReaderAndMemory @ 145c453c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMemoryReaderAndMemory * __thiscall
`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory::FMemoryReaderAndMemory
          (void *this,FPipelineCacheFile *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IFileManager *pIVar6;
  ulonglong uVar7;
  FMemoryReaderAndMemory *pFVar8;
  IAsyncReadFileHandle *pIVar9;
  longlong *plVar10;
  FMemoryReader *pFVar11;
  FMemoryReader *pFVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  uint uVar15;
  uint uVar16;
  longlong local_58;
  FString local_50;
  FString local_40;
  
  pFVar12 = (FMemoryReader *)0x0;
  piVar1 = (int *)((longlong)this + 8);
  *(undefined8 *)this = 0;
  *piVar1 = 0;
  plVar2 = (longlong *)((longlong)this + 0x10);
  *(int *)((longlong)this + 0xc) = 0;
  *plVar2 = 0;
  if (param_1 == (FPipelineCacheFile *)0x0) {
    return this;
  }
  pIVar6 = IFileManager::Get();
  if ((param_1->FilePath).Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_1->FilePath).Data.AllocatorInstance.Data;
  }
  uVar7 = (**(code **)((longlong)*pIVar6 + 0x110))(pIVar6,pwVar14);
  if ((longlong)uVar7 < 1) {
    return this;
  }
  iVar5 = *piVar1;
  uVar15 = (uint)uVar7;
  if (iVar5 < (int)uVar15) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar15 - iVar5,this,piVar1,(int *)((longlong)this + 0xc));
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7 & 0xffffffff);
    }
    if ((int)uVar15 < iVar5) {
      uVar16 = iVar5 - uVar15;
      if (((int)(uVar16 | uVar15) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FMemoryReaderAndMemory *)(*pcVar3)();
        return pFVar8;
      }
      if (uVar16 != 0) {
        iVar5 = (*piVar1 - uVar15) - uVar16;
        if (iVar5 != 0) {
          memmove((void *)((longlong)(int)uVar15 + *(longlong *)this),
                  (void *)((longlong)(int)uVar16 + (longlong)(int)uVar15 + *(longlong *)this),
                  (longlong)iVar5);
        }
        *piVar1 = *piVar1 - uVar16;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,this,*piVar1,(int *)((longlong)this + 0xc));
      }
    }
  }
  if ((param_1->AsyncFileHandle).Object == (IAsyncReadFileHandle *)0x0) {
    if ((param_1->FilePath).Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(param_1->FilePath).Data.AllocatorInstance.Data;
    }
    bVar4 = FFileHelper::LoadFileToArray(this,pwVar14,0);
    if (6 < (byte)LogRHI._0_1_) {
      local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.Data.ArrayNum = 0;
      local_40.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->FileGuid,&local_40,Digits);
      UE::Logging::Private::BasicLog<7>
                (&`public:___cdecl_`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'::`46'::FMemoryReaderAndMemory::FMemoryReaderAndMemory(FPipelineCacheFile*___ptr64)___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    if ((2 < (byte)LogRHI._0_1_) && (!bVar4)) {
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'::`46'::FMemoryReaderAndMemory::FMemoryReaderAndMemory(FPipelineCacheFile*___ptr64)___ptr64'
                  ::__l50::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  else {
    pIVar9 = TSharedPtr<IAsyncReadFileHandle,1>::operator->(&param_1->AsyncFileHandle);
    plVar10 = (longlong *)
              (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9,0,uVar7,3,0,*(undefined8 *)this);
    if (*(char *)((longlong)plVar10 + 0x41) == '\0') {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
    (**(code **)*plVar10)(plVar10,1);
    if (6 < (byte)LogRHI._0_1_) {
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->FileGuid,&local_50,Digits);
      UE::Logging::Private::BasicLog<7>
                (&`public:___cdecl_`public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats*___ptr64,0>_>_const&___ptr64,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>&___ptr64,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>&___ptr64)___ptr64'::`46'::FMemoryReaderAndMemory::FMemoryReaderAndMemory(FPipelineCacheFile*___ptr64)___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar11 = ::operator_new(0xa8);
  if (pFVar11 != (FMemoryReader *)0x0) {
    pFVar12 = FMemoryReader::FMemoryReader(pFVar11,this,false);
  }
  if (plVar2 == &local_58) {
    if (pFVar12 == (FMemoryReader *)0x0) goto LAB_145c45704;
    puVar13 = (undefined8 *)pFVar12->_padding_;
  }
  else {
    pFVar11 = (FMemoryReader *)*plVar2;
    *plVar2 = (longlong)pFVar12;
    if (pFVar11 == (FMemoryReader *)0x0) goto LAB_145c45704;
    puVar13 = (undefined8 *)pFVar11->_padding_;
    pFVar12 = pFVar11;
  }
  (*(code *)*puVar13)(pFVar12,1);
LAB_145c45704:
  (**(code **)(*(longlong *)*plVar2 + 0x130))((longlong *)*plVar2,0x1d);
  return this;
}

