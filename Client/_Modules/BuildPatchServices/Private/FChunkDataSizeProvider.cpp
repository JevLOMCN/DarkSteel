// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// AddManifestData @ 143232ca0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkDataSizeProvider::AddManifestData
          (FChunkDataSizeProvider *this,
          TArrayView<TSharedPtr<FBuildPatchAppManifest,1>_const_,int> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  FBuildPatchAppManifest *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar11;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FBuildPatchAppManifest *local_38;
  TReferenceControllerBase<1> *local_30;
  
  lpCriticalSection = &this->ManifestsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar12 = param_1->DataPtr;
  pTVar11 = pTVar12 + param_1->ArrayNum;
  pFVar3 = local_38;
  pTVar4 = local_30;
  do {
    if (pTVar12 == pTVar11) {
      local_38 = pFVar3;
      local_30 = pTVar4;
                    /* WARNING: Could not recover jumptable at 0x000143232ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    local_30 = (pTVar12->SharedReferenceCount).ReferenceController;
    local_38 = pTVar12->Object;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar13 = local_30;
    if (local_38 != (FBuildPatchAppManifest *)0x0) {
      pFVar10 = (this->Manifests).AllocatorInstance.Data;
      iVar7 = (this->Manifests).ArrayNum;
      for (pFVar9 = pFVar10; pFVar9 != pFVar10 + (longlong)iVar7 * 0x10; pFVar9 = pFVar9 + 0x10) {
        if (*(FBuildPatchAppManifest **)pFVar9 == local_38) {
          uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar10 >> 4);
          if (uVar8 != 0xffffffff) {
            uVar6 = 0;
            if ((int)uVar8 < iVar7) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar10 = (this->Manifests).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar10 + 8));
            iVar7 = (this->Manifests).ArrayNum + ~uVar8;
            if (iVar7 != 0) {
              memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar7 << 4);
            }
            piVar1 = &(this->Manifests).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          break;
        }
      }
      pFVar10 = (this->Manifests).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar10 + (longlong)(this->Manifests).ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (this->Manifests).ArrayNum;
      piVar1 = &(this->Manifests).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Manifests).AllocatorInstance,piVar1);
      }
      (this->Manifests).ArrayNum = iVar7 + 1;
      pFVar10 = (this->Manifests).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      *(FBuildPatchAppManifest **)pFVar10 = local_38;
      *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_30;
      local_30 = (TReferenceControllerBase<1> *)0x0;
      local_38 = (FBuildPatchAppManifest *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      pFVar3 = local_38;
      pTVar4 = local_30;
    }
    local_30 = pTVar4;
    local_38 = pFVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    pTVar12 = pTVar12 + 1;
    pFVar3 = local_38;
    pTVar4 = local_30;
  } while( true );
}

// AddManifestData @ 143232f00

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkDataSizeProvider::AddManifestData
          (FChunkDataSizeProvider *this,TSharedPtr<FBuildPatchAppManifest,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<FBuildPatchAppManifest,1> local_18;
  
  if (param_1->Object == (FBuildPatchAppManifest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  lpCriticalSection = &this->ManifestsCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FBuildPatchAppManifest *)0x0;
    AddManifestDataUnsafe(this,&local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddManifestDataUnsafe @ 143232fa0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkDataSizeProvider::AddManifestDataUnsafe
          (FChunkDataSizeProvider *this,TSharedPtr<FBuildPatchAppManifest,1> *param_1)

{
  TArray<TSharedPtr<FBuildPatchAppManifest,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar7 = (this->Manifests).ArrayNum;
  pTVar1 = &this->Manifests;
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  if (pFVar8 != pFVar8 + (longlong)iVar7 * 0x10) {
    pFVar10 = pFVar8;
    do {
      if (*(FBuildPatchAppManifest **)pFVar10 == param_1->Object) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar8 >> 4);
        if (uVar9 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar9 < iVar7) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar8 + 8));
          iVar7 = (this->Manifests).ArrayNum + ~uVar9;
          if (iVar7 != 0) {
            memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar7 << 4);
          }
          piVar2 = &(this->Manifests).ArrayNum;
          *piVar2 = *piVar2 + -1;
        }
        break;
      }
      pFVar10 = pFVar10 + 0x10;
    } while (pFVar10 != pFVar8 + (longlong)iVar7 * 0x10);
  }
  pTVar3 = (TSharedPtr<FBuildPatchAppManifest,1> *)(pTVar1->AllocatorInstance).Data;
  if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->Manifests).ArrayMax)) &&
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
  iVar7 = (this->Manifests).ArrayNum;
  piVar2 = &(this->Manifests).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Manifests).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FBuildPatchAppManifest **)pFVar8 = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FBuildPatchAppManifest *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetDownloadSize @ 143255d90

void __thiscall
BuildPatchServices::FChunkDataSizeProvider::GetDownloadSize
          (FChunkDataSizeProvider *this,TArrayView<FString_const_,int> *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  FString *pFVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  ForAnyElementType local_58;
  uint local_50;
  uint uStack_4c;
  FGuid local_48;
  
  uVar15 = param_1->ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uStack_4c = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar15,&local_58,0,(int *)&uStack_4c);
  }
  pFVar9 = param_1->DataPtr;
  pFVar14 = pFVar9 + (int)uVar15;
  for (; pFVar9 != pFVar14; pFVar9 = pFVar9 + 1) {
    local_48.A = 0;
    local_48.B = 0;
    local_48.C = 0;
    local_48.D = 0;
    bVar4 = FBuildPatchUtils::GetGUIDFromFilename(pFVar9,&local_48);
    if (!bVar4) {
      local_48.C = 0;
      local_48.D = 0;
      local_48.A = 0;
      local_48.B = 0;
    }
    if (local_50 == uStack_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_58,(int *)&uStack_4c);
    }
    *(undefined8 *)(local_58.Data + (longlong)(int)local_50 * 0x10) = local_48._0_8_;
    *(undefined8 *)(local_58.Data + (longlong)(int)local_50 * 0x10 + 8) = local_48._8_8_;
    local_50 = local_50 + 1;
  }
  uVar15 = param_2->ArrayNum + uVar15;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (param_2->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar15,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
  }
  lpCriticalSection = &this->ManifestsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar15 = local_50;
  uVar7 = (ulonglong)(int)local_50;
  pFVar10 = local_58.Data + uVar7 * 0x10;
  FVar16.Data = local_58.Data;
  do {
    while( true ) {
      if ((uint)uVar7 != uVar15) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar16.Data == pFVar10) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
        return;
      }
      if (((*(int *)(FVar16.Data + 0xc) != 0 || *(int *)(FVar16.Data + 8) != 0) ||
          *(int *)(FVar16.Data + 4) != 0) || *(int *)FVar16.Data != 0) break;
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      FVar16.Data = FVar16.Data + 0x10;
      param_2->ArrayNum = iVar5 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0xffffffffffffffff;
      uVar7 = (ulonglong)local_50;
    }
    uVar13 = (this->Manifests).ArrayNum - 1;
    local_res20 = 0xffffffffffffffff;
    uVar12 = 0xffffffffffffffff;
    if (-1 < (int)uVar13) {
      lVar11 = (longlong)(int)uVar13 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar13 < (this->Manifests).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->Manifests).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar11) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(pFVar1 + lVar11);
        lVar8 = (**(code **)(*plVar2 + 0x218))(plVar2,FVar16.Data);
        if (lVar8 != 0) {
          uVar12 = *(undefined8 *)(lVar8 + 0x38);
          break;
        }
        lVar11 = lVar11 + -0x10;
        uVar13 = uVar13 - 1;
        uVar12 = local_res20;
      } while (-1 < (int)uVar13);
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar16.Data = FVar16.Data + 0x10;
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = uVar12;
    uVar7 = (ulonglong)local_50;
  } while( true );
}

// GetDownloadSize @ 1432560b0

ulong64 __thiscall
BuildPatchServices::FChunkDataSizeProvider::GetDownloadSize
          (FChunkDataSizeProvider *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  ulong64 uVar2;
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  bVar1 = FBuildPatchUtils::GetGUIDFromFilename(param_1,&local_18);
  if (!bVar1) {
    return 0xffffffffffffffff;
  }
  lpCriticalSection = &this->ManifestsCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = GetDownloadSizeUnsafe(this,&local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDownloadSizeUnsafe @ 143256130

ulong64 __thiscall
BuildPatchServices::FChunkDataSizeProvider::GetDownloadSizeUnsafe
          (FChunkDataSizeProvider *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = (this->Manifests).ArrayNum - 1;
  if ((int)uVar8 < 0) {
    return 0xffffffffffffffff;
  }
  lVar9 = (longlong)(int)uVar8 << 4;
  do {
    uVar5 = 0;
    if ((int)uVar8 < (this->Manifests).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    pFVar1 = (this->Manifests).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    plVar2 = *(longlong **)(pFVar1 + lVar9);
    lVar7 = (**(code **)(*plVar2 + 0x218))(plVar2,param_1);
    if (lVar7 != 0) {
      return *(ulong64 *)(lVar7 + 0x38);
    }
    lVar9 = lVar9 + -0x10;
    uVar8 = uVar8 - 1;
  } while (-1 < (int)uVar8);
  return 0xffffffffffffffff;
}

