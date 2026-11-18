// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 10

// FModelInstanceGPU @ 14eae5e80

FModelInstanceGPU * __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::FModelInstanceGPU
          (FModelInstanceGPU *this,TSharedRef<UE::NNE::IModelInstanceGPU,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FModelInstanceGPU_Private_NNEDenoiser_UE__6B_;
  (this->ModelInstance).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ModelInstance).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ScratchInputBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchInputBuffers).ArrayNum = 0;
  (this->ScratchInputBuffers).ArrayMax = 0;
  (this->ScratchOutputBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchOutputBuffers).ArrayNum = 0;
  (this->ScratchOutputBuffers).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FModelInstanceGPU @ 14eae6c50

void __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::~FModelInstanceGPU(FModelInstanceGPU *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FModelInstanceGPU_Private_NNEDenoiser_UE__6B_;
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->ScratchOutputBuffers).AllocatorInstance.Data,
             (this->ScratchOutputBuffers).ArrayNum);
  pFVar1 = (this->ScratchOutputBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->ScratchInputBuffers).AllocatorInstance.Data,(this->ScratchInputBuffers).ArrayNum
            );
  pFVar1 = (this->ScratchInputBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelInstance).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14eae9a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ForAnyElementType *pFVar1;
  FRDGResource *pFVar2;
  undefined8 uVar3;
  FRHIBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  ForAnyElementType *pFVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  longlong local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FModelInstanceGPU::DenoisePass");
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId120,"FModelInstanceGPU::DenoisePass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceGPU.cpp"
               ,0x78);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId120);
  }
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(*(longlong *)this + 0x18),*(int *)(*(longlong *)((longlong)this + 8) + 8),Default);
  lVar16 = *(longlong *)((longlong)this + 8);
  uVar15 = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  if (0 < *(int *)(lVar16 + 8)) {
    local_b8 = 0;
    do {
      lVar16 = *(longlong *)this;
      uVar13 = ~uVar15 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar16 + 0x20)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = (ForAnyElementType *)(*(longlong *)(lVar16 + 0x18) + local_b8);
      plVar12 = *(longlong **)((longlong)this + 8);
      uVar8 = 0;
      if ((int)uVar15 < (int)plVar12[1]) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = *(FRDGResource **)(local_b8 + *plVar12);
      FRDGResource::ValidateRHIAccess(pFVar2);
      pFVar1 = pFVar14 + 1;
      iVar10 = *(int *)&pFVar1->Data;
      uVar8 = (uint)pFVar2->ResourceRHI[9]._padding_;
      if (iVar10 < (int)uVar8) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar8 - iVar10,pFVar14,(int *)pFVar1,(int *)((longlong)&pFVar14[1].Data + 4))
        ;
      }
      else {
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if ((int)uVar8 < iVar10) {
          uVar11 = iVar10 - uVar8;
          if (((int)(uVar11 | uVar8) < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar11 != 0) {
            iVar10 = (*(int *)&pFVar1->Data - uVar11) - uVar8;
            if (iVar10 != 0) {
              memmove(pFVar14->Data + (int)uVar8,pFVar14->Data + (int)uVar8 + (int)uVar11,
                      (longlong)iVar10);
            }
            *(uint *)&pFVar1->Data = *(int *)&pFVar1->Data - uVar11;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,pFVar14,*(int *)&pFVar1->Data,(int *)((longlong)&pFVar14[1].Data + 4));
          }
        }
      }
      lVar16 = *(longlong *)this;
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar16 + 0x20)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar17 = *(longlong *)this;
      uVar3 = *(undefined8 *)(local_b8 + *(longlong *)(lVar16 + 0x18));
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar17 + 0x20)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = *(int *)(local_b8 + 8 + *(longlong *)(lVar17 + 0x18));
      iVar9 = (int)local_98;
      if ((int)local_98 == local_98._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_a0,(int *)((longlong)&local_98 + 4));
      }
      local_98 = CONCAT44(local_98._4_4_,iVar9 + 1);
      local_b8 = local_b8 + 0x10;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(local_a0.Data + (longlong)iVar9 * 0x10) = uVar3;
      *(longlong *)(local_a0.Data + (longlong)iVar9 * 0x10 + 8) = (longlong)iVar10;
      lVar16 = *(longlong *)((longlong)this + 8);
    } while ((int)uVar15 < *(int *)(lVar16 + 8));
  }
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(*(longlong *)this + 0x28),*(int *)(lVar16 + 0x18),Default);
  plVar12 = *(longlong **)((longlong)this + 8);
  uVar15 = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  if (0 < (int)plVar12[3]) {
    local_b8 = 0;
    do {
      lVar16 = *(longlong *)this;
      uVar13 = ~uVar15 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar16 + 0x30)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = (ForAnyElementType *)(*(longlong *)(lVar16 + 0x28) + local_b8);
      lVar16 = *(longlong *)((longlong)this + 8);
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar16 + 0x18)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = *(FRDGResource **)(local_b8 + *(longlong *)(lVar16 + 0x10));
      FRDGResource::ValidateRHIAccess(pFVar2);
      pFVar1 = pFVar14 + 1;
      iVar10 = *(int *)&pFVar1->Data;
      uVar8 = (uint)pFVar2->ResourceRHI[9]._padding_;
      if (iVar10 < (int)uVar8) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar8 - iVar10,pFVar14,(int *)pFVar1,(int *)((longlong)&pFVar14[1].Data + 4))
        ;
      }
      else {
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if ((int)uVar8 < iVar10) {
          uVar11 = iVar10 - uVar8;
          if (((int)(uVar11 | uVar8) < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar11 != 0) {
            iVar10 = (*(int *)&pFVar1->Data - uVar11) - uVar8;
            if (iVar10 != 0) {
              memmove(pFVar14->Data + (int)uVar8,pFVar14->Data + (int)uVar8 + (int)uVar11,
                      (longlong)iVar10);
            }
            *(uint *)&pFVar1->Data = *(int *)&pFVar1->Data - uVar11;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,pFVar14,*(int *)&pFVar1->Data,(int *)((longlong)&pFVar14[1].Data + 4));
          }
        }
      }
      lVar16 = *(longlong *)this;
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar16 + 0x30)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar17 = *(longlong *)this;
      uVar3 = *(undefined8 *)(local_b8 + *(longlong *)(lVar16 + 0x28));
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar17 + 0x30)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = *(int *)(*(longlong *)(lVar17 + 0x28) + 8 + local_b8);
      iVar9 = (int)local_a8;
      if ((int)local_a8 == local_a8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_b0,(int *)((longlong)&local_a8 + 4));
      }
      local_a8 = CONCAT44(local_a8._4_4_,iVar9 + 1);
      local_b8 = local_b8 + 0x10;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(local_b0.Data + (longlong)iVar9 * 0x10) = uVar3;
      *(longlong *)(local_b0.Data + (longlong)iVar9 * 0x10 + 8) = (longlong)iVar10;
      plVar12 = *(longlong **)((longlong)this + 8);
    } while ((int)uVar15 < (int)plVar12[3]);
  }
  uVar15 = 0;
  if (0 < (int)plVar12[1]) {
    lVar16 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar15 < (int)plVar12[1]) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = *(FRDGResource **)(lVar16 + *plVar12);
      FRDGResource::ValidateRHIAccess(pFVar2);
      lVar17 = *(longlong *)this;
      pFVar4 = (FRHIBuffer *)pFVar2->ResourceRHI;
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar17 + 0x20)) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<unsigned_char>
                (param_1,pFVar4,(pFVar4->Desc).Size,
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                 ((longlong)(int)uVar15 * 0x10 + *(longlong *)(lVar17 + 0x18)));
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x10;
      plVar12 = *(longlong **)((longlong)this + 8);
    } while ((int)uVar15 < (int)plVar12[1]);
  }
  iVar10 = (int)local_a8;
  plVar12 = *(longlong **)(*(longlong *)this + 8);
  pcVar5 = *(code **)(*plVar12 + 0x30);
  local_88 = local_b0.Data;
  if (((int)local_a8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_80 = iVar10;
  iVar10 = (int)local_98;
  local_78 = local_a0.Data;
  if (((int)local_98 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_70 = iVar10;
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = iVar10;
  uStack_4c = uStack_6c;
  local_68 = (undefined4)local_88;
  uStack_64 = local_88._4_4_;
  iStack_60 = iStack_80;
  uStack_5c = uStack_7c;
  cVar7 = (*pcVar5)(plVar12,&local_58,&local_68);
  if ((cVar7 != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Status == NNE::IModelInstanceGPU::ERunSyncStatus::Ok",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceGPU.cpp"
                         ,0x99,L"RunSync failed with status %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar16 = *(longlong *)((longlong)this + 8);
  uVar15 = 0;
  if (0 < *(int *)(lVar16 + 0x18)) {
    lVar17 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar15 < *(int *)(lVar16 + 0x18)) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = *(FRDGResource **)(lVar17 + *(longlong *)(lVar16 + 0x10));
      FRDGResource::ValidateRHIAccess(pFVar2);
      lVar16 = *(longlong *)this;
      pFVar4 = (FRHIBuffer *)pFVar2->ResourceRHI;
      uVar8 = (pFVar4->Desc).Size;
      uVar13 = 0;
      if ((int)uVar15 < *(int *)(lVar16 + 0x30)) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<unsigned_char>
                (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                         ((longlong)(int)uVar15 * 0x10 + *(longlong *)(lVar16 + 0x28)),uVar8,pFVar4)
      ;
      uVar15 = uVar15 + 1;
      lVar17 = lVar17 + 0x10;
      lVar16 = *(longlong *)((longlong)this + 8);
    } while ((int)uVar15 < *(int *)(lVar16 + 0x18));
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// EnqueueRDG @ 14eaf3950

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

EResultStatus __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG
          (FModelInstanceGPU *this,FRDGBuilder *param_1,
          TArrayView<UE::NNE::FTensorBindingRDG_const_,int> *param_2,
          TArrayView<UE::NNE::FTensorBindingRDG_const_,int> *param_3)

{
  int *piVar1;
  FNNEDenoiserModelInstanceGPUTextureParameters *pFVar2;
  FTensorBindingRDG *pFVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  EResultStatus EVar7;
  int iVar8;
  undefined8 *puVar9;
  FRDGScope *this_00;
  FRDGEventName *pFVar10;
  undefined8 *puVar11;
  FTensorBindingRDG *pFVar12;
  undefined8 *local_a8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a0;
  undefined1 local_90;
  <lambda_2> local_88;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_> local_78;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  FRDGEventName local_48;
  
  puVar11 = (undefined8 *)0x0;
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  else {
    puVar9[2] = 0;
    *puVar9 = &___7__TObject_VFNNEDenoiserModelInstanceGPUTextureParameters___FRDGAllocator__6B_;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar11 = puVar9;
  }
  local_a8 = puVar11;
  if ((((undefined8 **)param_1->_padding_ <= &local_a8) &&
      (&local_a8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar2 = (FNNEDenoiserModelInstanceGPUTextureParameters *)(puVar11 + 2);
  pFVar12 = param_2->DataPtr;
  *(int *)&param_1->_padding_ = iVar8 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_a8;
  pFVar3 = pFVar12 + param_2->ArrayNum;
  for (; pFVar12 != pFVar3; pFVar12 = pFVar12 + 1) {
    iVar8 = *(int *)(puVar11 + 3);
    if (iVar8 == *(int *)((longlong)puVar11 + 0x1c)) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                        (0x810,(ForElementType<FRDGBufferAccess> *)pFVar2,
                         (int *)((longlong)puVar11 + 0x1c));
    }
    *(int *)(puVar11 + 3) = iVar8 + 1;
    puVar9 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)&pFVar2->InputBuffers);
    *puVar9 = pFVar12->Buffer;
    *(undefined4 *)(puVar9 + 1) = 0x80;
  }
  pFVar12 = param_3->DataPtr;
  pFVar3 = pFVar12 + param_3->ArrayNum;
  for (; pFVar12 != pFVar3; pFVar12 = pFVar12 + 1) {
    iVar8 = *(int *)(puVar11 + 5);
    if (iVar8 == *(int *)((longlong)puVar11 + 0x2c)) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                        (0x810,(ForElementType<FRDGBufferAccess> *)(puVar11 + 4),
                         (int *)((longlong)puVar11 + 0x2c));
    }
    *(int *)(puVar11 + 5) = iVar8 + 1;
    puVar9 = (undefined8 *)((longlong)iVar8 * 0x10 + puVar11[4]);
    *puVar9 = pFVar12->Buffer;
    *(undefined4 *)(puVar9 + 1) = 0x2000;
  }
  cVar4 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar6 = false;
  local_90 = 0;
  if ((cVar4 != '\0') && ((cVar4 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x72;
      local_58 = 0x54dc5680;
      uStack_54 = 1;
      ::Desc._padding_._0_4_ = 0x54dc5680;
      ::Desc._padding_._4_4_ = uStack_5c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Mod;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Mod;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG'::__l15::Desc::operator()<>'
             ::__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_78._Myfirst._Val = &::Desc;
    local_a0.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_a0.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_78);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar6 = true;
    local_90 = 1;
  }
  local_88.__this = this;
  local_88.DenoiserParameters = pFVar2;
  pFVar10 = FRDGEventName::FRDGEventName(&local_48,1,L"NNEDenoiser.DenoiseGPU");
  FRDGBuilder::
  AddPass<FNNEDenoiserModelInstanceGPUTextureParameters,_UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG_::__l2::<lambda_2>_>
            (param_1,pFVar10,pFVar2,Readback,&local_88);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a0);
  }
  return Ok;
}

// GetInputTensorDescs @ 14eaf92c0

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::GetInputTensorDescs
          (FModelInstanceGPU *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 8))();
  return __return_storage_ptr__;
}

// GetInputTensorShapes @ 14eaf9350

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::GetInputTensorShapes
          (FModelInstanceGPU *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x18))();
  return __return_storage_ptr__;
}

// GetOutputTensorDescs @ 14eaf95a0

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::GetOutputTensorDescs
          (FModelInstanceGPU *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x10))();
  return __return_storage_ptr__;
}

// GetOutputTensorShapes @ 14eaf9630

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::GetOutputTensorShapes
          (FModelInstanceGPU *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x20))();
  return __return_storage_ptr__;
}

// Make @ 14eafad20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
 __cdecl UE::NNEDenoiser::Private::FModelInstanceGPU::Make(UNNEModelData *param_1,FString *param_2)

{
  code *pcVar1;
  int iVar2;
  INNERuntimeGPU *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
  TVar7;
  undefined8 *puVar8;
  TWeakInterfacePtr<INNERuntimeGPU> *pTVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FString *in_R8;
  undefined1 local_res18 [8];
  FString *local_res20;
  FString *local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  TWeakInterfacePtr<INNERuntimeGPU> local_90;
  longlong local_80;
  TReferenceControllerBase<1> *local_78;
  longlong *local_70;
  TReferenceControllerBase<1> *local_68;
  TWeakInterfacePtr<INNERuntimeGPU> local_60;
  TWeakInterfacePtr<INNERuntimeGPU> local_50;
  
  if (((in_R8->Data).ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RuntimeName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceGPU.cpp"
                         ,0x1c,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    TVar7.Ptr = (FModelInstanceGPU *)(*pcVar1)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
            )TVar7.Ptr;
  }
  NNE::GetRuntime<INNERuntimeGPU>(&local_90,in_R8);
  if ((local_90.InterfaceInstance == (INNERuntimeGPU *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) {
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    NNE::GetAllRuntimeNames(&local_a0);
    FVar11.Data = local_a0.AllocatorInstance.Data;
    pFVar13 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10;
    FVar10.Data = local_a0.AllocatorInstance.Data;
    while (FVar10.Data != pFVar13) {
      pTVar9 = NNE::GetRuntime<INNERuntimeGPU>(&local_60,(FString *)FVar10.Data);
      if ((pTVar9->InterfaceInstance == (INNERuntimeGPU *)0x0) ||
         (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar9), !bVar5)) {
        do {
          pFVar14 = pFVar13;
          pFVar13 = pFVar14 + -0x10;
          if (FVar10.Data == pFVar13) goto LAB_14eafb117;
          pTVar9 = NNE::GetRuntime<INNERuntimeGPU>(&local_50,(FString *)pFVar13);
        } while ((pTVar9->InterfaceInstance == (INNERuntimeGPU *)0x0) ||
                (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar9), !bVar5));
        if (*(void **)FVar10.Data != (void *)0x0) {
          FMemory::Free(*(void **)FVar10.Data);
        }
        *(undefined8 *)FVar10.Data = *(undefined8 *)pFVar13;
        *(undefined8 *)pFVar13 = 0;
        *(int *)(FVar10.Data + 8) = *(int *)(pFVar14 + -8);
        *(int *)(FVar10.Data + 0xc) = *(int *)(pFVar14 + -4);
        FVar10.Data = FVar10.Data + 0x10;
        *(undefined8 *)(pFVar14 + -8) = 0;
      }
      else {
        FVar10.Data = FVar10.Data + 0x10;
      }
    }
LAB_14eafb117:
    TArray<FString,TSizedDefaultAllocator<32>_>::SetNum
              (&local_a0,(int)((longlong)FVar10.Data - (longlong)FVar11.Data >> 4),Default);
    iVar2 = local_a0.ArrayNum;
    pFVar13 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10;
    FVar11.Data = local_a0.AllocatorInstance.Data;
    while( true ) {
      if (local_a0.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar11.Data == pFVar13) break;
      if (4 < (byte)LogNNEDenoiser._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      }
      FVar11.Data = FVar11.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  else {
    if (((local_90.InterfaceInstance == (INNERuntimeGPU *)0x0) ||
        (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      TVar7.Ptr = (FModelInstanceGPU *)(*pcVar1)();
      return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
              )TVar7.Ptr;
    }
    pIVar3 = local_90.InterfaceInstance;
    pcVar1 = *(code **)((longlong)*local_90.InterfaceInstance + 0x10);
    local_res20 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (FString *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    cVar6 = (*pcVar1)(pIVar3,&local_res20);
    if (cVar6 == '\0') {
      if (((local_90.InterfaceInstance == (INNERuntimeGPU *)0x0) ||
          (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                             ,0x8d,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FModelInstanceGPU *)(*pcVar1)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
                )TVar7.Ptr;
      }
      pcVar1 = *(code **)((longlong)*local_90.InterfaceInstance + 0x18);
      local_a8 = param_2;
      if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (FString *)0x0)) {
        GC::MarkAsReachable((UObject *)param_2);
      }
      (*pcVar1)(local_90.InterfaceInstance,&local_70,&local_a8);
      if (local_70 == (longlong *)0x0) {
        if (4 < (byte)LogNNEDenoiser._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
        }
        param_1->_padding_ = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68);
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
                )(FModelInstanceGPU *)param_1;
      }
      if ((local_70 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FModelInstanceGPU *)(*pcVar1)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
                )TVar7.Ptr;
      }
      (**(code **)(*local_70 + 8))(local_70,&local_80);
      if (local_80 == 0) {
        if (4 < (byte)LogNNEDenoiser._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
        }
        param_1->_padding_ = 0;
      }
      else {
        lVar12 = local_80;
        if ((local_80 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), lVar12 = local_80, bVar5)) {
          pcVar1 = (code *)swi(3);
          TVar7.Ptr = (FModelInstanceGPU *)(*pcVar1)();
          return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
                  )TVar7.Ptr;
        }
        pTVar4 = local_78;
        if (local_78 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((lVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          TVar7.Ptr = (FModelInstanceGPU *)(*pcVar1)();
          return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
                  )TVar7.Ptr;
        }
        puVar8 = ::operator_new(0x38);
        if (puVar8 == (undefined8 *)0x0) {
          param_1->_padding_ = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
        }
        else {
          if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
            *puVar8 = &___7FModelInstanceGPU_Private_NNEDenoiser_UE__6B_;
            puVar8[1] = lVar12;
            puVar8[2] = 0;
          }
          else {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
            *puVar8 = &___7FModelInstanceGPU_Private_NNEDenoiser_UE__6B_;
            puVar8[1] = lVar12;
            puVar8[2] = pTVar4;
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          param_1->_padding_ = (longlong)puVar8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
              )(FModelInstanceGPU *)param_1;
    }
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceGPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceGPU>_>
          )(FModelInstanceGPU *)param_1;
}

// SetInputTensorShapes @ 14eafe000

EResultStatus __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::SetInputTensorShapes
          (FModelInstanceGPU *this,TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  IModelInstanceGPU *pIVar1;
  char cVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  pIVar1 = (this->ModelInstance).Object;
  cVar2 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&local_18);
  return cVar2 != '\0';
}

