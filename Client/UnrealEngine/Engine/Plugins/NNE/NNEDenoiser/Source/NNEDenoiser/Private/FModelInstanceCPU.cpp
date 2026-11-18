// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 10

// FModelInstanceCPU @ 14eae5e20

FModelInstanceCPU * __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::FModelInstanceCPU
          (FModelInstanceCPU *this,TSharedRef<UE::NNE::IModelInstanceCPU,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FModelInstanceCPU_Private_NNEDenoiser_UE__6B_;
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

// ~FModelInstanceCPU @ 14eae6bf0

void __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::~FModelInstanceCPU(FModelInstanceCPU *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FModelInstanceCPU_Private_NNEDenoiser_UE__6B_;
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

// operator() @ 14eae7e00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UE::NNEDenoiser::Private::FModelInstanceCPU::EnqueueRDG'::__l2::<lambda_1>::operator()
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
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FModelInstanceCPU::DenoisePass");
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId114,"FModelInstanceCPU::DenoisePass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceCPU.cpp"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId114);
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
                        ("Status == NNE::IModelInstanceCPU::ERunSyncStatus::Ok",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceCPU.cpp"
                         ,0x93,L"RunSync failed with status %d"), bVar6)) {
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

// EnqueueRDG @ 14eaf3700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

EResultStatus __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::EnqueueRDG
          (FModelInstanceCPU *this,FRDGBuilder *param_1,
          TArrayView<UE::NNE::FTensorBindingRDG_const_,int> *param_2,
          TArrayView<UE::NNE::FTensorBindingRDG_const_,int> *param_3)

{
  int *piVar1;
  FTensorBindingRDG *pFVar2;
  code *pcVar3;
  bool bVar4;
  EResultStatus EVar5;
  int iVar6;
  undefined8 *puVar7;
  FRDGEventName *pFVar8;
  FTensorBindingRDG *pFVar9;
  undefined8 *puVar10;
  FNNEDenoiserModelInstanceCPUTextureParameters *pFVar11;
  undefined8 *local_58;
  <lambda_1> local_50;
  FRDGEventName local_40;
  
  puVar10 = (undefined8 *)0x0;
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  else {
    puVar7[2] = 0;
    *puVar7 = &___7__TObject_VFNNEDenoiserModelInstanceCPUTextureParameters___FRDGAllocator__6B_;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar10 = puVar7;
  }
  local_58 = puVar10;
  if ((((undefined8 **)param_1->_padding_ <= &local_58) &&
      (&local_58 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  iVar6 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar9 = param_2->DataPtr;
  pFVar11 = (FNNEDenoiserModelInstanceCPUTextureParameters *)(puVar10 + 2);
  *(int *)&param_1->_padding_ = iVar6 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_58;
  pFVar2 = pFVar9 + param_2->ArrayNum;
  for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 1) {
    iVar6 = *(int *)(puVar10 + 3);
    if (iVar6 == *(int *)((longlong)puVar10 + 0x1c)) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                        (0x810,(ForElementType<FRDGBufferAccess> *)pFVar11,
                         (int *)((longlong)puVar10 + 0x1c));
    }
    *(int *)(puVar10 + 3) = iVar6 + 1;
    puVar7 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)&pFVar11->InputBuffers);
    *puVar7 = pFVar9->Buffer;
    *(undefined4 *)(puVar7 + 1) = 0x80;
  }
  pFVar9 = param_3->DataPtr;
  pFVar2 = pFVar9 + param_3->ArrayNum;
  for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 1) {
    iVar6 = *(int *)(puVar10 + 5);
    if (iVar6 == *(int *)((longlong)puVar10 + 0x2c)) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                        (0x810,(ForElementType<FRDGBufferAccess> *)(puVar10 + 4),
                         (int *)((longlong)puVar10 + 0x2c));
    }
    *(int *)(puVar10 + 5) = iVar6 + 1;
    puVar7 = (undefined8 *)((longlong)iVar6 * 0x10 + puVar10[4]);
    *puVar7 = pFVar9->Buffer;
    *(undefined4 *)(puVar7 + 1) = 0x2000;
  }
  local_50.__this = this;
  local_50.DenoiserParameters = pFVar11;
  pFVar8 = FRDGEventName::FRDGEventName(&local_40,1,L"NNEDenoiser.DenoiseCPU");
  FRDGBuilder::
  AddPass<FNNEDenoiserModelInstanceCPUTextureParameters,_UE::NNEDenoiser::Private::FModelInstanceCPU::EnqueueRDG_::__l2::<lambda_1>_>
            (param_1,pFVar8,pFVar11,Readback,&local_50);
  if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return Ok;
}

// GetInputTensorDescs @ 14eaf9290

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::GetInputTensorDescs
          (FModelInstanceCPU *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 8))();
  return __return_storage_ptr__;
}

// GetInputTensorShapes @ 14eaf9320

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::GetInputTensorShapes
          (FModelInstanceCPU *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x18))();
  return __return_storage_ptr__;
}

// GetOutputTensorDescs @ 14eaf9570

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::GetOutputTensorDescs
          (FModelInstanceCPU *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x10))();
  return __return_storage_ptr__;
}

// GetOutputTensorShapes @ 14eaf9600

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::GetOutputTensorShapes
          (FModelInstanceCPU *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->ModelInstance).Object + 0x20))();
  return __return_storage_ptr__;
}

// Make @ 14eafa870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
 __cdecl UE::NNEDenoiser::Private::FModelInstanceCPU::Make(UNNEModelData *param_1,FString *param_2)

{
  code *pcVar1;
  int iVar2;
  INNERuntimeCPU *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  char cVar6;
  TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
  TVar7;
  undefined8 *puVar8;
  TWeakInterfacePtr<INNERuntimeCPU> *pTVar9;
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
  TWeakInterfacePtr<INNERuntimeCPU> local_90;
  longlong local_80;
  TReferenceControllerBase<1> *local_78;
  longlong *local_70;
  TReferenceControllerBase<1> *local_68;
  TWeakInterfacePtr<INNERuntimeCPU> local_60;
  TWeakInterfacePtr<INNERuntimeCPU> local_50;
  
  if (((in_R8->Data).ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RuntimeName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceCPU.cpp"
                         ,0x19,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    TVar7.Ptr = (FModelInstanceCPU *)(*pcVar1)();
    return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
            )TVar7.Ptr;
  }
  NNE::GetRuntime<INNERuntimeCPU>(&local_90,in_R8);
  if ((local_90.InterfaceInstance == (INNERuntimeCPU *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) {
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    NNE::GetAllRuntimeNames(&local_a0);
    FVar11.Data = local_a0.AllocatorInstance.Data;
    pFVar13 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10;
    FVar10.Data = local_a0.AllocatorInstance.Data;
    while (FVar10.Data != pFVar13) {
      pTVar9 = NNE::GetRuntime<INNERuntimeCPU>(&local_60,(FString *)FVar10.Data);
      if ((pTVar9->InterfaceInstance == (INNERuntimeCPU *)0x0) ||
         (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar9), !bVar5)) {
        do {
          pFVar14 = pFVar13;
          pFVar13 = pFVar14 + -0x10;
          if (FVar10.Data == pFVar13) goto LAB_14eafac67;
          pTVar9 = NNE::GetRuntime<INNERuntimeCPU>(&local_50,(FString *)pFVar13);
        } while ((pTVar9->InterfaceInstance == (INNERuntimeCPU *)0x0) ||
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
LAB_14eafac67:
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
    if (((local_90.InterfaceInstance == (INNERuntimeCPU *)0x0) ||
        (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      TVar7.Ptr = (FModelInstanceCPU *)(*pcVar1)();
      return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
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
      if (((local_90.InterfaceInstance == (INNERuntimeCPU *)0x0) ||
          (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_90), !bVar5)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                             ,0x8d,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FModelInstanceCPU *)(*pcVar1)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
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
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
                )(FModelInstanceCPU *)param_1;
      }
      if ((local_70 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar7.Ptr = (FModelInstanceCPU *)(*pcVar1)();
        return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
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
          TVar7.Ptr = (FModelInstanceCPU *)(*pcVar1)();
          return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
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
          TVar7.Ptr = (FModelInstanceCPU *)(*pcVar1)();
          return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
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
            *puVar8 = &___7FModelInstanceCPU_Private_NNEDenoiser_UE__6B_;
            puVar8[1] = lVar12;
            puVar8[2] = 0;
          }
          else {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
            *puVar8 = &___7FModelInstanceCPU_Private_NNEDenoiser_UE__6B_;
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
      return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
              )(FModelInstanceCPU *)param_1;
    }
    if (4 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<UE::NNEDenoiser::Private::FModelInstanceCPU,TDefaultDelete<UE::NNEDenoiser::Private::FModelInstanceCPU>_>
          )(FModelInstanceCPU *)param_1;
}

// SetInputTensorShapes @ 14eafdfd0

EResultStatus __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::SetInputTensorShapes
          (FModelInstanceCPU *this,TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  IModelInstanceCPU *pIVar1;
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

