// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 2

// ~FPakMountWork @ 14f01f4e0

void __thiscall FChunkDownloader::FPakMountWork::~FPakMountWork(FPakMountWork *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int>
            ((TSharedRef<FChunkDownloader::FPakFile,1> *)
             (this->MountedPakFiles).AllocatorInstance.Data,(this->MountedPakFiles).ArrayNum);
  pFVar1 = (this->MountedPakFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TFunction<void___cdecl(bool)>,int>
            ((TFunction<void___cdecl(bool)> *)(this->PostMountCallbacks).AllocatorInstance.Data,
             (this->PostMountCallbacks).ArrayNum);
  pFVar1 = (this->PostMountCallbacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FChunkDownloader::FPakFile,1>,int>
            ((TSharedRef<FChunkDownloader::FPakFile,1> *)(this->PakFiles).AllocatorInstance.Data,
             (this->PakFiles).ArrayNum);
  pFVar1 = (this->PakFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmbeddedFolder).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheFolder).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// DoWork @ 14f023500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkDownloader::FPakMountWork::DoWork(FPakMountWork *this)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  IFileManager *pIVar10;
  uint uVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  void *_Src;
  undefined1 local_res10 [8];
  int local_res18;
  FScriptContainerElement *local_res20;
  FString local_a8;
  void *local_98 [2];
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::MountPak,
             &local_88);
  if (((FCoreDelegates::MountPak._16_4_ == 0) || (FCoreDelegates::MountPak._8_8_ == 0)) ||
     (cVar5 = (**(code **)(*(longlong *)FCoreDelegates::MountPak._8_8_ + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (1 < (byte)LogChunkDownloader._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FChunkDownloader::FPakMountWork::DoWork(void)___ptr64'::
                  __l38::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    local_res18 = (this->PakFiles).ArrayNum;
    uVar17 = (ulonglong)local_res18;
    pFVar15 = (this->PakFiles).AllocatorInstance.Data;
    local_res20 = pFVar15 + uVar17 * 0x10;
    while( true ) {
      pFVar13 = local_res20;
      if ((this->PakFiles).ArrayNum != local_res18) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FChunkDownloader::FPakFile,1>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar13) break;
      puVar3 = *(undefined8 **)pFVar15;
      lVar9 = 0x18;
      if (*(char *)((longlong)puVar3 + 0x42) == '\0') {
        lVar9 = 8;
      }
      iVar8 = *(int *)((longlong)&(this->CacheFolder).Data.AllocatorInstance.Data + lVar9);
      puVar2 = (undefined8 *)((longlong)&this->ChunkId + lVar9);
      iVar14 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        iVar14 = 0;
      }
      local_a8.Data.ArrayNum = iVar8;
      if ((iVar8 == 0) && (iVar14 != -1)) {
        _Src = (void *)*puVar2;
        iVar7 = iVar14 + 2;
LAB_14f02361f:
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar7 != 0) goto LAB_14f023628;
        local_a8.Data.ArrayMax = 0;
      }
      else {
        _Src = (void *)*puVar2;
        iVar7 = iVar14 + 1;
        if (iVar8 == 0) goto LAB_14f02361f;
LAB_14f023628:
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar11 = iVar8 + iVar7;
        if ((int)uVar11 < iVar8) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar11,0,(ForAnyElementType *)&local_a8,iVar8,&local_a8.Data.ArrayMax);
        if (iVar8 != 0) {
          memcpy(local_a8.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
        }
      }
      ::FString::PathAppend(&local_a8,(wchar_t *)*puVar3,iVar14);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FCoreDelegates::MountPak
                 ,&local_70);
      plVar12 = (longlong *)0x0;
      if (FCoreDelegates::MountPak._16_4_ != 0) {
        plVar12 = (longlong *)FCoreDelegates::MountPak._8_8_;
      }
      lVar9 = (**(code **)(*plVar12 + 0x60))(plVar12,&local_a8,uVar17 & 0xffffffff);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      if (lVar9 == 0) {
        pIVar10 = IFileManager::Get();
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar16.Data = local_a8.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar10 + 0x100))(pIVar10,local_98,FVar16.Data);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FCoreDelegates::MountPak,&local_58);
        plVar12 = (longlong *)0x0;
        if (FCoreDelegates::MountPak._16_4_ != 0) {
          plVar12 = (longlong *)FCoreDelegates::MountPak._8_8_;
        }
        lVar9 = (**(code **)(*plVar12 + 0x60))(plVar12,local_98,uVar17 & 0xffffffff);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        if (local_98[0] != (void *)0x0) {
          FMemory::Free(local_98[0]);
        }
        if (lVar9 != 0) goto LAB_14f02376e;
        if (1 < (byte)LogChunkDownloader._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_void___cdecl_FChunkDownloader::FPakMountWork::DoWork(void)___ptr64'::
                      __l18::LOG_Static,(FLogCategoryBase *)&LogChunkDownloader);
        }
      }
      else {
LAB_14f02376e:
        pFVar13 = (this->MountedPakFiles).AllocatorInstance.Data;
        if (((pFVar13 <= pFVar15) &&
            (pFVar15 < pFVar13 + (longlong)(this->MountedPakFiles).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (this->MountedPakFiles).ArrayNum;
        piVar1 = &(this->MountedPakFiles).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->MountedPakFiles).AllocatorInstance,piVar1);
        }
        (this->MountedPakFiles).ArrayNum = iVar8 + 1;
        pFVar13 = (this->MountedPakFiles).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(longlong *)pFVar13 = *(longlong *)pFVar15;
        lVar9 = *(longlong *)(pFVar15 + 8);
        *(longlong *)(pFVar13 + 8) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        uVar17 = (ulonglong)((int)uVar17 - 1);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      pFVar15 = pFVar15 + 0x10;
    }
  }
  return;
}

