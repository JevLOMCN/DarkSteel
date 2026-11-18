// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 4

// ~TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> @ 146c1dfe0

void __thiscall
TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::
~TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>
          (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  IModuleInterface *pIVar10;
  longlong *plVar11;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *pTVar12;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *pTVar13;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *pTVar14;
  FName local_res8 [2];
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *local_28;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *local_20;
  
  this->_padding_ =
       (longlong)&___7__TGPUsyncedDataDeleter_V__TSharedPtr_VIMediaTextureSample___00____6B_;
  bVar7 = Update(this);
  if (!bVar7) goto LAB_146c1e111;
  pFVar9 = ::FName::FName(local_res8,L"MediaModule");
  pIVar10 = FModuleManager::GetModulePtr_Internal(*pFVar9);
  if (pIVar10 == (IModuleInterface *)0x0) goto LAB_146c1e111;
  plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0xa8))(pIVar10);
  pTVar13 = (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)
            (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar14 = (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0;
  pcVar3 = *(code **)(*plVar11 + 0x10);
  pTVar12 = pTVar13;
  if (pTVar13 == (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0) {
LAB_146c1e076:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    pTVar13 = pTVar12;
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar6 = *(int *)&(pTVar13->WeakThis).Object;
    do {
      pTVar12 = pTVar14;
      if (iVar6 == 0) goto LAB_146c1e076;
      LOCK();
      iVar8 = *(int *)&(pTVar13->WeakThis).Object;
      bVar7 = iVar6 == iVar8;
      if (bVar7) {
        *(int *)&(pTVar13->WeakThis).Object = iVar6 + 1;
        iVar8 = iVar6;
      }
      UNLOCK();
      iVar6 = iVar8;
    } while (!bVar7);
    pTVar14 = (this->WeakThis).Object;
    pTVar12 = pTVar13;
    if (pTVar14 == (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0)
    goto LAB_146c1e076;
  }
  if (pTVar13 != (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0) {
    LOCK();
    *(int *)&(pTVar13->WeakThis).Object = *(int *)&(pTVar13->WeakThis).Object + 1;
    UNLOCK();
  }
  local_28 = pTVar14;
  local_20 = pTVar13;
  (*pcVar3)(plVar11,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_146c1e111:
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  DestructItems<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,int>
            ((FRetiringObjectInfo *)(this->Objects).AllocatorInstance.Data,(this->Objects).ArrayNum)
  ;
  pFVar4 = (this->Objects).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  return;
}

// Retire @ 146c34e70

void __thiscall
TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::Retire
          (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *this,
          FRHICommandListImmediate *param_1,TSharedPtr<IMediaTextureSample,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FRHIResource *this_00;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FRHIResource *local_res8;
  FName local_res18;
  LARGE_INTEGER local_res20;
  IMediaTextureSample *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FRHIResource *local_28;
  double local_20;
  
  pTStack_30 = (param_2->SharedReferenceCount).ReferenceController;
  local_28 = (FRHIResource *)0x0;
  local_38 = param_2->Object;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  ::FName::FName(&local_res18,L"MediaTextureResourceReuseFence");
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_res8,&local_res18);
  this_00 = local_28;
  local_28 = local_res8;
  local_res8 = (FRHIResource *)0x0;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  QueryPerformanceCounter(&local_res20);
  local_20 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_1,local_28);
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->Objects).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Objects).ArrayMax * 0x20))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->Objects).ArrayNum;
    piVar1 = &(this->Objects).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->Objects).AllocatorInstance,piVar1);
    }
    (this->Objects).ArrayNum = iVar5 + 1;
    pFVar2 = (this->Objects).AllocatorInstance.Data;
    lVar6 = (longlong)iVar5 * 0x20;
    *(IMediaTextureSample **)(pFVar2 + lVar6) = local_38;
    *(TReferenceControllerBase<1> **)(pFVar2 + lVar6 + 8) = pTStack_30;
    if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)(pFVar2 + lVar6 + 0x10) = 0;
    *(FRHIResource **)(pFVar2 + lVar6 + 0x10) = local_28;
    if (local_28 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(local_28);
    }
    *(double *)(pFVar2 + lVar6 + 0x18) = local_20;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_28 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TickInput @ 146c38210

void __thiscall
TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::TickInput
          (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *this,FTimespan param_1,
          FTimespan param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  longlong *plVar7;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *pTVar8;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *pTVar9;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *pTVar10;
  FName local_res20;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *local_30;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *local_28;
  
  bVar3 = Update(this);
  if (bVar3) {
    return;
  }
  pFVar5 = ::FName::FName(&local_res20,L"MediaModule");
  pIVar6 = FModuleManager::GetModulePtr_Internal(*pFVar5);
  if (pIVar6 == (IModuleInterface *)0x0) {
    return;
  }
  plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xa8))(pIVar6);
  pTVar9 = (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar10 = (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0;
  pcVar1 = *(code **)(*plVar7 + 0x18);
  pTVar8 = pTVar9;
  if (pTVar9 != (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0) {
    iVar2 = *(int *)&(pTVar9->WeakThis).Object;
    do {
      pTVar8 = pTVar10;
      if (iVar2 == 0) goto LAB_146c382a5;
      LOCK();
      iVar4 = *(int *)&(pTVar9->WeakThis).Object;
      bVar3 = iVar2 == iVar4;
      if (bVar3) {
        *(int *)&(pTVar9->WeakThis).Object = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
    } while (!bVar3);
    pTVar10 = (this->WeakThis).Object;
    pTVar8 = pTVar9;
    if (pTVar10 != (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0)
    goto LAB_146c382f6;
  }
LAB_146c382a5:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x26c,L"");
  pTVar9 = pTVar8;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146c382f6:
  if (pTVar9 != (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0) {
    LOCK();
    *(int *)&(pTVar9->WeakThis).Object = *(int *)&(pTVar9->WeakThis).Object + 1;
    UNLOCK();
  }
  local_30 = pTVar10;
  local_28 = pTVar9;
  (*pcVar1)(plVar7,&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Update @ 146c39430

bool __thiscall
TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::Update
          (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = 0;
  if (0 < (this->Objects).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Objects).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(longlong *)((this->Objects).AllocatorInstance.Data + lVar8 + 0x10) != 0) {
        uVar6 = 0;
        if ((int)uVar7 < (this->Objects).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        cVar5 = (**(code **)(**(longlong **)((this->Objects).AllocatorInstance.Data + lVar8 + 0x10)
                            + 0x20))();
        if (cVar5 == '\0') break;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((int)uVar7 < (this->Objects).ArrayNum);
    if (uVar7 != 0) {
      uVar6 = 0;
      if ((int)uVar7 <= (this->Objects).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      TArray<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->Objects,0,uVar7);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&(this->Objects).AllocatorInstance,(this->Objects).ArrayNum,
                 &(this->Objects).ArrayMax);
    }
  }
  iVar1 = (this->Objects).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar1 != 0;
}

