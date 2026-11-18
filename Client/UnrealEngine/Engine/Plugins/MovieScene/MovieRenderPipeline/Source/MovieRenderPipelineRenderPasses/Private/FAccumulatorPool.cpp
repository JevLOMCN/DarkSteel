// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 4

// ~FAccumulatorPool @ 14ddcaab0

void __thiscall FAccumulatorPool::~FAccumulatorPool(FAccumulatorPool *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  DestructItems<TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1>,int>
            ((TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)
             (this->Accumulators).AllocatorInstance.Data,(this->Accumulators).ArrayNum);
  pFVar3 = (this->Accumulators).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ddcab05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// BlockAndGetAccumulator_GameThread @ 14ddd6c50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> * __thiscall
FAccumulatorPool::BlockAndGetAccumulator_GameThread
          (FAccumulatorPool *this,
          TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *__return_storage_ptr__,int param_1,
          FMoviePipelinePassIdentifier *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *pTVar9;
  FName *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 local_74 [12];
  longlong local_68;
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  
  uVar17 = 0;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar14 = 0xffffffff;
  do {
    uVar16 = 0;
    uVar13 = uVar17;
    uVar18 = uVar14;
    uVar19 = uVar17;
    if (0 < (this->Accumulators).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar15 = 0;
        if ((int)uVar12 < (this->Accumulators).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar10 = (this->Accumulators).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar10 + uVar19) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
          return pTVar9;
        }
        if (param_1 == *(int *)(*(longlong *)(pFVar10 + uVar19) + 0x10)) {
          uVar15 = uVar16;
          if ((int)uVar12 < (this->Accumulators).ArrayNum) {
            uVar15 = ~uVar12 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar10 = (this->Accumulators).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar10 + uVar19) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          lVar2 = *(longlong *)(pFVar10 + uVar19);
          iVar7 = (param_2->Name).Data.ArrayNum;
          if (iVar7 == *(int *)(lVar2 + 0x20)) {
            if (1 < iVar7) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(param_2->Name).Data.AllocatorInstance.Data,
                                 *(wchar_t **)(lVar2 + 0x18));
              bVar6 = iVar7 == 0;
              goto LAB_14ddd6df3;
            }
          }
          else {
            bVar6 = iVar7 + *(int *)(lVar2 + 0x20) == 1;
LAB_14ddd6df3:
            if (!bVar6) goto LAB_14ddd6e26;
          }
          iVar7 = (param_2->CameraName).Data.ArrayNum;
          uVar18 = uVar13;
          if (iVar7 == *(int *)(lVar2 + 0x30)) {
            if (iVar7 < 2) break;
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(param_2->CameraName).Data.AllocatorInstance.Data,
                               *(wchar_t **)(lVar2 + 0x28));
            bVar6 = iVar7 == 0;
          }
          else {
            bVar6 = iVar7 + *(int *)(lVar2 + 0x30) == 1;
          }
          if (bVar6) break;
        }
LAB_14ddd6e26:
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar18 = uVar14;
        uVar19 = uVar19 + 0x10;
      } while ((int)(uVar12 + 1) < (this->Accumulators).ArrayNum);
      uVar15 = (uint)uVar18;
      if (uVar15 != 0xffffffff) {
LAB_14ddd73da:
        if ((int)uVar15 < (this->Accumulators).ArrayNum) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar10 = (this->Accumulators).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
        __return_storage_ptr__->Object = *(FAccumulatorInstance **)pFVar10;
        pTVar4 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        return __return_storage_ptr__;
      }
    }
    uVar14 = uVar17;
    uVar13 = uVar17;
    uVar19 = uVar17;
    if (0 < (this->Accumulators).ArrayNum) {
      do {
        uVar15 = (uint)uVar13;
        uVar11 = ~uVar15 >> 0x1f;
        uVar12 = uVar16;
        if ((int)uVar15 < (this->Accumulators).ArrayNum) {
          uVar12 = uVar11;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar10 = (this->Accumulators).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar10 + uVar14) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
          return pTVar9;
        }
        if (*(int *)(*(longlong *)(pFVar10 + uVar14) + 0x38) == 0) {
          uVar8 = 0;
          uVar12 = uVar8;
          if ((int)uVar15 < (this->Accumulators).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar10 = (this->Accumulators).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar10 + uVar19 * 0x10) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          *(int *)(*(longlong *)(pFVar10 + uVar19 * 0x10) + 0x10) = param_1;
          uVar12 = uVar8;
          if ((int)uVar15 < (this->Accumulators).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar10 = (this->Accumulators).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar10 + uVar19 * 0x10) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          lVar2 = *(longlong *)(pFVar10 + uVar19 * 0x10);
          ::FString::operator=((FString *)(lVar2 + 0x18),&param_2->Name);
          ::FString::operator=((FString *)(lVar2 + 0x28),&param_2->CameraName);
          uVar12 = uVar8;
          if ((int)uVar15 < (this->Accumulators).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar10 = (this->Accumulators).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar10 + uVar19 * 0x10) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          LOCK();
          *(undefined4 *)(*(longlong *)(pFVar10 + uVar19 * 0x10) + 0x38) = 1;
          UNLOCK();
          if ((int)uVar15 < (this->Accumulators).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar10 = (this->Accumulators).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar10 + uVar19 * 0x10) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
            return pTVar9;
          }
          lVar2 = *(longlong *)(pFVar10 + uVar19 * 0x10);
          puVar3 = *(undefined8 **)(lVar2 + 0x40);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x40) = 0;
            LOCK();
            piVar1 = (int *)(puVar3 + 6);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          uVar18 = uVar13;
          if (uVar15 != 0xffffffff) goto LAB_14ddd73da;
          break;
        }
        uVar14 = uVar14 + 0x10;
        uVar13 = (ulonglong)(uVar15 + 1);
        uVar19 = uVar19 + 1;
      } while ((int)(uVar15 + 1) < (this->Accumulators).ArrayNum);
    }
    (**(code **)(this->_padding_ + 8))(this,&local_68);
    if (local_68 != 0) {
      if ((local_68 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
        return pTVar9;
      }
      *(int *)(local_68 + 0x10) = param_1;
      if ((local_68 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
        return pTVar9;
      }
      lVar2 = local_68;
      ::FString::operator=((FString *)(local_68 + 0x18),&param_2->Name);
      ::FString::operator=((FString *)(lVar2 + 0x28),&param_2->CameraName);
      if ((local_68 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
        return pTVar9;
      }
      LOCK();
      *(undefined4 *)(local_68 + 0x38) = 1;
      UNLOCK();
      if ((local_68 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
        return pTVar9;
      }
      puVar3 = *(undefined8 **)(local_68 + 0x40);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(local_68 + 0x40) = 0;
        LOCK();
        piVar1 = (int *)(puVar3 + 6);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      uVar18 = (ulonglong)(this->Accumulators).ArrayNum;
      pFVar10 = (this->Accumulators).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar10 + (longlong)(this->Accumulators).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *)(*pcVar5)();
        return pTVar9;
      }
      piVar1 = &(this->Accumulators).ArrayMax;
      iVar7 = (this->Accumulators).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Accumulators).AllocatorInstance,piVar1);
      }
      (this->Accumulators).ArrayNum = iVar7 + 1;
      pFVar10 = (this->Accumulators).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      *(longlong *)pFVar10 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_60;
      if (local_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        this_00 = (FName *)(**(code **)(this->_padding_ + 0x10))(this,local_74);
        ::FName::ToString(this_00,&local_58);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    uVar15 = (uint)uVar18;
    uVar14 = uVar18;
    if (uVar15 != 0xffffffff) goto LAB_14ddd73da;
  } while( true );
}

// CreateNewAccumulatorInstance @ 14ddda170

TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> * __thiscall
FAccumulatorPool::CreateNewAccumulatorInstance
          (FAccumulatorPool *this,
          TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FAccumulatorInstance *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPoolName @ 14dde3410

FName __thiscall FAccumulatorPool::GetPoolName(FAccumulatorPool *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

