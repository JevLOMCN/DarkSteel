// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// IsInternalBuild @ 1418e31b0

bool __cdecl FEngineBuildSettings::IsInternalBuild(void)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar1 = &FPaths::EngineDir(&local_18)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_28,pTVar1,0x33 - (uint)(pTVar1->ArrayNum != 0));
      ::FString::PathAppend
                ((FString *)&local_28,L"Restricted/NotForLicensees/Build/EpicInternal.txt",0x31);
      bIsInternalBuild = FPaths::FileExists((FString *)&local_28);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      _Init_thread_footer(&::_TSS0);
      return bIsInternalBuild;
    }
  }
  return bIsInternalBuild;
}

// IsPerforceBuild @ 1418e3420

bool __cdecl FEngineBuildSettings::IsPerforceBuild(void)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar1 = &FPaths::EngineDir(&local_18)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_28,pTVar1,0x19 - (uint)(pTVar1->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_28,L"Build/PerforceBuild.txt",0x17);
      bIsPerforceBuild = FPaths::FileExists((FString *)&local_28);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      _Init_thread_footer(&::_TSS0);
      return bIsPerforceBuild;
    }
  }
  return bIsPerforceBuild;
}

// IsSourceDistribution @ 1418e3760

bool __cdecl FEngineBuildSettings::IsSourceDistribution(FString *param_1)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  uint uVar2;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
      lVar1 = (longlong)local_18.Data.ArrayNum;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_18.Data.ArrayNum == 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0x25,0,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
      }
      else {
        _Src = (param_1->Data).AllocatorInstance.Data;
        uVar2 = local_18.Data.ArrayNum + 0x24;
        if ((int)uVar2 < local_18.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar2,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
                   &local_18.Data.ArrayMax);
        memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
      }
      ::FString::PathAppend(&local_18,L"Engine/Build/SourceDistribution.txt",0x23);
      bIsSourceDistribution = FPaths::FileExists(&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      _Init_thread_footer(&::_TSS0);
      return bIsSourceDistribution;
    }
  }
  return bIsSourceDistribution;
}

// IsSourceDistribution @ 1418e38b0

bool __cdecl FEngineBuildSettings::IsSourceDistribution(void)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FString *pFVar2;
  longlong lVar3;
  uint uVar4;
  FString local_28;
  FString local_18;
  
  pFVar2 = FPaths::RootDir(&local_18);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      lVar3 = (longlong)local_28.Data.ArrayNum;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.ArrayNum == 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0x25,0,(ForAnyElementType *)&local_28,0,&local_28.Data.ArrayMax);
      }
      else {
        _Src = (pFVar2->Data).AllocatorInstance.Data;
        uVar4 = local_28.Data.ArrayNum + 0x24;
        if ((int)uVar4 < local_28.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar4,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                   &local_28.Data.ArrayMax);
        memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
      }
      ::FString::PathAppend(&local_28,L"Engine/Build/SourceDistribution.txt",0x23);
      bIsSourceDistribution = FPaths::FileExists(&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = bIsSourceDistribution;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

