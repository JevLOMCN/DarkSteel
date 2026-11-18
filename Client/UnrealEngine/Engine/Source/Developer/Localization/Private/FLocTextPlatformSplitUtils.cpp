// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// GetPlatformsToSplit @ 146b75f50

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FLocTextPlatformSplitUtils::GetPlatformsToSplit(ELocTextPlatformSplitMode *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FName *pFVar12;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50 [2];
  
  uVar9 = (ulonglong)_tls_index;
  if (*param_1 == Confidential) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ConfidentialPlatformNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ConfidentialPlatformNames.ArrayNum = 0;
      ConfidentialPlatformNames.ArrayMax = 0;
      pTVar7 = FDataDrivenPlatformInfoRegistry::GetConfidentialPlatforms();
      pFVar12 = (FName *)(pTVar7->AllocatorInstance).Data;
      iVar8 = pTVar7->ArrayNum;
      pFVar1 = pFVar12 + iVar8;
      while( true ) {
        if (pTVar7->ArrayNum != iVar8) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar12 == pFVar1) break;
        local_78 = *pFVar12;
        pFVar5 = (FScriptContainerElement *)::FName::ToString(&local_78,local_50);
        if (((ConfidentialPlatformNames.AllocatorInstance.Data <= pFVar5) &&
            (pFVar5 < ConfidentialPlatformNames.AllocatorInstance.Data +
                      (longlong)ConfidentialPlatformNames.ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        iVar4 = ConfidentialPlatformNames.ArrayNum;
        if (ConfidentialPlatformNames.ArrayNum == ConfidentialPlatformNames.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&ConfidentialPlatformNames.AllocatorInstance,
                             &ConfidentialPlatformNames.ArrayMax);
        }
        ConfidentialPlatformNames.ArrayNum = iVar4 + 1;
        pFVar10 = ConfidentialPlatformNames.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar10 = 0;
        *(undefined8 *)pFVar10 = *(undefined8 *)pFVar5;
        *(undefined8 *)pFVar5 = 0;
        *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar5 + 8);
        *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar5 + 0xc);
        *(undefined8 *)(pFVar5 + 8) = 0;
        if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
        }
        pFVar12 = pFVar12 + 1;
      }
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)ConfidentialPlatformNames.AllocatorInstance.Data,
                 ConfidentialPlatformNames.ArrayNum,local_res8[0],(TLess<void> *)local_res18);
      atexit(`FLocTextPlatformSplitUtils::GetPlatformsToSplit'::__l5::
             _dynamic_atexit_destructor_for__ConfidentialPlatformNames__);
      _Init_thread_footer(&::_TSS0);
    }
    return &ConfidentialPlatformNames;
  }
  if (*param_1 != All) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS2
        ) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      atexit(`FLocTextPlatformSplitUtils::GetPlatformsToSplit'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS2);
    }
    return &::EmptyArray;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    AllPlatformNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    AllPlatformNames.ArrayNum = 0;
    AllPlatformNames.ArrayMax = 0;
    FDataDrivenPlatformInfoRegistry::GetSortedPlatformNames(&local_70,AllPlatformInfos);
    iVar8 = local_70.ArrayNum;
    pFVar1 = (FName *)(local_70.AllocatorInstance.Data + (longlong)iVar8 * 8);
    FVar11.Data = local_70.AllocatorInstance.Data;
    while( true ) {
      if (local_70.ArrayNum != iVar8) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if ((FName *)FVar11.Data == pFVar1) break;
      local_res20 = *(FName *)FVar11.Data;
      pFVar5 = (FScriptContainerElement *)::FName::ToString(&local_res20,&local_60);
      if (((AllPlatformNames.AllocatorInstance.Data <= pFVar5) &&
          (pFVar5 < AllPlatformNames.AllocatorInstance.Data +
                    (longlong)AllPlatformNames.ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      iVar4 = AllPlatformNames.ArrayNum;
      if (AllPlatformNames.ArrayNum == AllPlatformNames.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&AllPlatformNames.AllocatorInstance,&AllPlatformNames.ArrayMax);
      }
      AllPlatformNames.ArrayNum = iVar4 + 1;
      pFVar10 = AllPlatformNames.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar5;
      *(undefined8 *)pFVar5 = 0;
      *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar5 + 8);
      *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar5 + 0xc);
      *(undefined8 *)(pFVar5 + 8) = 0;
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    atexit(`FLocTextPlatformSplitUtils::GetPlatformsToSplit'::__l6::
           _dynamic_atexit_destructor_for__AllPlatformNames__);
    _Init_thread_footer(&::_TSS1);
  }
  return &AllPlatformNames;
}

// ShouldSplitPlatformData @ 146b88a80

bool __cdecl FLocTextPlatformSplitUtils::ShouldSplitPlatformData(ELocTextPlatformSplitMode *param_1)

{
  return *param_1 != None;
}

