// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 20

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,2,0> @ 143aa7b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,2,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<float,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  longlong lVar17;
  bool bVar18;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,2,0>(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,2,0>(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  local_78 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_78 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aa7c80:
      lVar17 = 0;
      do {
        lVar15 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + (lVar17 + lVar15 * 2) * 4);
        uVar14 = 0;
        if ((int)uVar5 < *(int *)&(param_2->MInvM).field_0x10) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(float *)(*(longlong *)&(param_2->MInvM).field_0x8 + (longlong)(int)uVar5 * 4) != 0.0)
        {
          uVar14 = 0;
          if ((int)uVar5 < param_4) {
            uVar14 = ~uVar5 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aa7c80;
            }
          }
        }
        piVar13 = local_80;
        lVar17 = lVar17 + 1;
      } while (lVar17 < 2);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar12 | uVar14) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            piVar13 = local_80;
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
              piVar13 = &__return_storage_ptr__->ArrayNum;
            }
          }
        }
      }
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 8);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 8 + 4);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_88;
      uVar14 = 0;
      if ((int)local_88 < *piVar13) {
        uVar14 = ~local_88 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar17 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,3,0> @ 143aa8300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,3,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<float,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  longlong lVar17;
  bool bVar18;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,3,0>(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,3,0>(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  local_78 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_78 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aa8440:
      lVar17 = 0;
      do {
        lVar15 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + (lVar17 + lVar15 * 3) * 4);
        uVar14 = 0;
        if ((int)uVar5 < *(int *)&(param_2->MInvM).field_0x10) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(float *)(*(longlong *)&(param_2->MInvM).field_0x8 + (longlong)(int)uVar5 * 4) != 0.0)
        {
          uVar14 = 0;
          if ((int)uVar5 < param_4) {
            uVar14 = ~uVar5 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aa8440;
            }
          }
        }
        piVar13 = local_80;
        lVar17 = lVar17 + 1;
      } while (lVar17 < 3);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar12 | uVar14) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            piVar13 = local_80;
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
              piVar13 = &__return_storage_ptr__->ArrayNum;
            }
          }
        }
      }
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc + 4);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc + 8);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_88;
      uVar14 = 0;
      if ((int)local_88 < *piVar13) {
        uVar14 = ~local_88 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar17 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,1> @ 143aa8c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,1>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<float,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  bool bVar17;
  uint local_res20;
  uint local_48;
  uint local_44;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_40;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,1>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,1>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_res20 = 0xffffffff;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_40,param_4 - param_3,Default);
  FVar3.Data = local_40.AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_44 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_48 = 0;
LAB_143aa8d20:
      lVar13 = 0;
      do {
        lVar15 = (longlong)(int)local_44;
        uVar5 = 0;
        if ((int)local_44 < param_1->ArrayNum) {
          uVar5 = ~local_44 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 0x10 + lVar13);
        uVar14 = 0;
        if ((int)uVar5 < param_4) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        pFVar11 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
        pFVar9 = pFVar11;
        if (*(FScriptContainerElement **)(pFVar11 + 0x20) != (FScriptContainerElement *)0x0) {
          pFVar9 = *(FScriptContainerElement **)(pFVar11 + 0x20);
        }
        pFVar11 = pFVar9 + (longlong)(int)*(uint *)(pFVar11 + 0x28) * 4;
        for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 4) {
          if (*(uint *)pFVar9 == local_48) {
            local_48 = local_48 + 1;
            goto LAB_143aa8d20;
          }
        }
        lVar13 = lVar13 + 4;
      } while (lVar13 < 0x10);
      iVar7 = __return_storage_ptr__->ArrayNum;
      uVar5 = local_48;
      if ((int)local_48 < (int)local_res20) {
        uVar5 = local_res20;
      }
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar14 | uVar12) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar13 = 0;
      do {
        lVar15 = (longlong)(int)local_44;
        uVar14 = 0;
        if ((int)local_44 < param_1->ArrayNum) {
          uVar14 = ~local_44 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 0x10 + lVar13);
        uVar12 = 0;
        if ((int)uVar14 < param_4) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar16 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
        FVar10 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar10 = FVar1;
        }
        if ((ulonglong)FVar10 <= &local_48) {
          FVar10 = FVar16;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar10 = FVar1;
          }
          if ((&local_48 <
               (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar16 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
        }
        *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
          FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
        }
        lVar13 = lVar13 + 4;
        *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_48;
      } while (lVar13 < 0x10);
      lVar13 = (longlong)(int)local_48;
      uVar14 = 0;
      if ((int)local_48 < __return_storage_ptr__->ArrayNum) {
        uVar14 = ~local_48 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + lVar13 * 0x10;
      if (((*(uint **)&pFVar9->field_0x0 <= &local_44) &&
          (&local_44 < *(uint **)&pFVar9->field_0x0 + *(int *)(pFVar9 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar9[8].field_0x0;
      if (iVar7 == *(int *)(pFVar9 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
      }
      *(int *)&pFVar9[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar7 * 4) = local_44;
      local_44 = local_44 + 1;
      local_res20 = uVar5;
    } while ((int)local_44 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_40.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,0> @ 143aa91d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<float,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<int> FVar15;
  longlong lVar16;
  bool bVar17;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,0>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,0>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_80 = 0;
  local_78 = &__return_storage_ptr__->ArrayMax;
  *local_78 = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aa9310:
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0x10 + lVar16);
        uVar13 = 0;
        if ((int)uVar5 < *(int *)&(param_2->MInvM).field_0x10) {
          uVar13 = ~uVar5 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(float *)(*(longlong *)&(param_2->MInvM).field_0x8 + (longlong)(int)uVar5 * 4) != 0.0)
        {
          uVar13 = 0;
          if ((int)uVar5 < param_4) {
            uVar13 = ~uVar5 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aa9310;
            }
          }
        }
        lVar16 = lVar16 + 4;
      } while (lVar16 < 0x10);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar13 = uVar5 + 1;
        if (iVar7 < (int)uVar13) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar13 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar13 - iVar7) << 4);
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          if ((int)uVar13 < iVar7) {
            uVar12 = iVar7 - uVar13;
            if (((int)(uVar12 | uVar13) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar13,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar13 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar13 = ~local_84 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0x10 + lVar16);
        uVar12 = 0;
        if ((int)uVar13 < param_4) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar15 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar13 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        FVar9 = FVar15;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= &local_88) {
          FVar9 = FVar15;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((&local_88 <
               (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar15 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar15 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar15 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar15,(int *)((longlong)FVar15 + 0x2c));
        }
        *(int *)((longlong)FVar15 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar15 + 0x20) != (ForElementType<int>)0x0) {
          FVar15 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        }
        lVar16 = lVar16 + 4;
        *(uint *)((longlong)FVar15 + (longlong)iVar7 * 4) = local_88;
      } while (lVar16 < 0x10);
      lVar16 = (longlong)(int)local_88;
      uVar13 = 0;
      if ((int)local_88 < __return_storage_ptr__->ArrayNum) {
        uVar13 = ~local_88 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar16 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,6,0> @ 143aa9850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,6,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<float,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<int> FVar15;
  longlong lVar16;
  bool bVar17;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,6,0>(TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,6,0>(TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<float,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_80 = 0;
  local_78 = &__return_storage_ptr__->ArrayMax;
  *local_78 = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aa9990:
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 + lVar14 * 0x18);
        uVar13 = 0;
        if ((int)uVar5 < *(int *)&(param_2->MInvM).field_0x10) {
          uVar13 = ~uVar5 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(float *)(*(longlong *)&(param_2->MInvM).field_0x8 + (longlong)(int)uVar5 * 4) != 0.0)
        {
          uVar13 = 0;
          if ((int)uVar5 < param_4) {
            uVar13 = ~uVar5 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aa9990;
            }
          }
        }
        lVar16 = lVar16 + 4;
      } while (lVar16 < 0x18);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar13 = uVar5 + 1;
        if (iVar7 < (int)uVar13) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar13 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar13 - iVar7) << 4);
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          if ((int)uVar13 < iVar7) {
            uVar12 = iVar7 - uVar13;
            if (((int)(uVar12 | uVar13) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar13,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar13 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar13 = ~local_84 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 + lVar14 * 0x18);
        uVar12 = 0;
        if ((int)uVar13 < param_4) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar15 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar13 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        FVar9 = FVar15;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= &local_88) {
          FVar9 = FVar15;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((&local_88 <
               (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar15 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar15 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar15 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar15,(int *)((longlong)FVar15 + 0x2c));
        }
        *(int *)((longlong)FVar15 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar15 + 0x20) != (ForElementType<int>)0x0) {
          FVar15 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        }
        lVar16 = lVar16 + 4;
        *(uint *)((longlong)FVar15 + (longlong)iVar7 * 4) = local_88;
      } while (lVar16 < 0x18);
      lVar16 = (longlong)(int)local_88;
      uVar13 = 0;
      if ((int)local_88 < __return_storage_ptr__->ArrayNum) {
        uVar13 = ~local_88 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar16 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,2,0> @ 143aa9ed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,2,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<double,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  longlong lVar17;
  bool bVar18;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,2,0>(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,2,0>(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  local_78 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_78 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aaa010:
      lVar17 = 0;
      do {
        lVar15 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + (lVar17 + lVar15 * 2) * 4);
        uVar14 = 0;
        if ((int)uVar5 < *(int *)&(param_2->MInvM).field_0x10) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(double *)(*(longlong *)&(param_2->MInvM).field_0x8 + (longlong)(int)uVar5 * 8) != 0.0)
        {
          uVar14 = 0;
          if ((int)uVar5 < param_4) {
            uVar14 = ~uVar5 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aaa010;
            }
          }
        }
        piVar13 = local_80;
        lVar17 = lVar17 + 1;
      } while (lVar17 < 2);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar12 | uVar14) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            piVar13 = local_80;
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
              piVar13 = &__return_storage_ptr__->ArrayNum;
            }
          }
        }
      }
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 8);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 8 + 4);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_88;
      uVar14 = 0;
      if ((int)local_88 < *piVar13) {
        uVar14 = ~local_88 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar17 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,3,0> @ 143aaa690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,3,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<double,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  longlong lVar17;
  bool bVar18;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,3,0>(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,3,0>(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  local_78 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_78 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aaa7d0:
      lVar17 = 0;
      do {
        lVar15 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + (lVar17 + lVar15 * 3) * 4);
        uVar14 = 0;
        if ((int)uVar5 < *(int *)&(param_2->MInvM).field_0x10) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(double *)(*(longlong *)&(param_2->MInvM).field_0x8 + (longlong)(int)uVar5 * 8) != 0.0)
        {
          uVar14 = 0;
          if ((int)uVar5 < param_4) {
            uVar14 = ~uVar5 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aaa7d0;
            }
          }
        }
        piVar13 = local_80;
        lVar17 = lVar17 + 1;
      } while (lVar17 < 3);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar12 | uVar14) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            piVar13 = local_80;
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
              piVar13 = &__return_storage_ptr__->ArrayNum;
            }
          }
        }
      }
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc + 4);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc + 8);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_88;
      uVar14 = 0;
      if ((int)local_88 < *piVar13) {
        uVar14 = ~local_88 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar17 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,4,1> @ 143aaafb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,4,1>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<double,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  bool bVar17;
  uint local_res20;
  uint local_48;
  uint local_44;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_40;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,4,1>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,4,1>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_res20 = 0xffffffff;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_40,param_4 - param_3,Default);
  FVar3.Data = local_40.AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_44 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_48 = 0;
LAB_143aab0b0:
      lVar13 = 0;
      do {
        lVar15 = (longlong)(int)local_44;
        uVar5 = 0;
        if ((int)local_44 < param_1->ArrayNum) {
          uVar5 = ~local_44 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 0x10 + lVar13);
        uVar14 = 0;
        if ((int)uVar5 < param_4) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        pFVar11 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
        pFVar9 = pFVar11;
        if (*(FScriptContainerElement **)(pFVar11 + 0x20) != (FScriptContainerElement *)0x0) {
          pFVar9 = *(FScriptContainerElement **)(pFVar11 + 0x20);
        }
        pFVar11 = pFVar9 + (longlong)(int)*(uint *)(pFVar11 + 0x28) * 4;
        for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 4) {
          if (*(uint *)pFVar9 == local_48) {
            local_48 = local_48 + 1;
            goto LAB_143aab0b0;
          }
        }
        lVar13 = lVar13 + 4;
      } while (lVar13 < 0x10);
      iVar7 = __return_storage_ptr__->ArrayNum;
      uVar5 = local_48;
      if ((int)local_48 < (int)local_res20) {
        uVar5 = local_res20;
      }
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar14 | uVar12) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar13 = 0;
      do {
        lVar15 = (longlong)(int)local_44;
        uVar14 = 0;
        if ((int)local_44 < param_1->ArrayNum) {
          uVar14 = ~local_44 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 0x10 + lVar13);
        uVar12 = 0;
        if ((int)uVar14 < param_4) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar16 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
        FVar10 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar10 = FVar1;
        }
        if ((ulonglong)FVar10 <= &local_48) {
          FVar10 = FVar16;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar10 = FVar1;
          }
          if ((&local_48 <
               (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar16 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
        }
        *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
          FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
        }
        lVar13 = lVar13 + 4;
        *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_48;
      } while (lVar13 < 0x10);
      lVar13 = (longlong)(int)local_48;
      uVar14 = 0;
      if ((int)local_48 < __return_storage_ptr__->ArrayNum) {
        uVar14 = ~local_48 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + lVar13 * 0x10;
      if (((*(uint **)&pFVar9->field_0x0 <= &local_44) &&
          (&local_44 < *(uint **)&pFVar9->field_0x0 + *(int *)(pFVar9 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar9[8].field_0x0;
      if (iVar7 == *(int *)(pFVar9 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
      }
      *(int *)&pFVar9[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar7 * 4) = local_44;
      local_44 = local_44 + 1;
      local_res20 = uVar5;
    } while ((int)local_44 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_40.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,4,0> @ 143aab560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,4,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<double,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<int> FVar15;
  longlong lVar16;
  bool bVar17;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,4,0>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,4,0>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_80 = 0;
  local_78 = &__return_storage_ptr__->ArrayMax;
  *local_78 = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aab6a0:
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0x10 + lVar16);
        uVar13 = 0;
        if ((int)uVar5 < *(int *)&(param_2->MInvM).field_0x10) {
          uVar13 = ~uVar5 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(double *)(*(longlong *)&(param_2->MInvM).field_0x8 + (longlong)(int)uVar5 * 8) != 0.0)
        {
          uVar13 = 0;
          if ((int)uVar5 < param_4) {
            uVar13 = ~uVar5 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aab6a0;
            }
          }
        }
        lVar16 = lVar16 + 4;
      } while (lVar16 < 0x10);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar13 = uVar5 + 1;
        if (iVar7 < (int)uVar13) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar13 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar13 - iVar7) << 4);
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          if ((int)uVar13 < iVar7) {
            uVar12 = iVar7 - uVar13;
            if (((int)(uVar12 | uVar13) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar13,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar13 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar13 = ~local_84 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0x10 + lVar16);
        uVar12 = 0;
        if ((int)uVar13 < param_4) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar15 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar13 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        FVar9 = FVar15;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= &local_88) {
          FVar9 = FVar15;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((&local_88 <
               (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar15 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar15 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar15 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar15,(int *)((longlong)FVar15 + 0x2c));
        }
        *(int *)((longlong)FVar15 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar15 + 0x20) != (ForElementType<int>)0x0) {
          FVar15 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        }
        lVar16 = lVar16 + 4;
        *(uint *)((longlong)FVar15 + (longlong)iVar7 * 4) = local_88;
      } while (lVar16 < 0x10);
      lVar16 = (longlong)(int)local_88;
      uVar13 = 0;
      if ((int)local_88 < __return_storage_ptr__->ArrayNum) {
        uVar13 = ~local_88 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar16 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,6,0> @ 143aabbe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,6,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicParticles<double,3> *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<int> FVar15;
  longlong lVar16;
  bool bVar17;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,6,0>(TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<double,3>,6,0>(TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::TDynamicParticles<double,3>_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_80 = 0;
  local_78 = &__return_storage_ptr__->ArrayMax;
  *local_78 = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aabd20:
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 + lVar14 * 0x18);
        uVar13 = 0;
        if ((int)uVar5 < *(int *)&(param_2->MInvM).field_0x10) {
          uVar13 = ~uVar5 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(double *)(*(longlong *)&(param_2->MInvM).field_0x8 + (longlong)(int)uVar5 * 8) != 0.0)
        {
          uVar13 = 0;
          if ((int)uVar5 < param_4) {
            uVar13 = ~uVar5 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aabd20;
            }
          }
        }
        lVar16 = lVar16 + 4;
      } while (lVar16 < 0x18);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar13 = uVar5 + 1;
        if (iVar7 < (int)uVar13) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar13 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar13 - iVar7) << 4);
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          if ((int)uVar13 < iVar7) {
            uVar12 = iVar7 - uVar13;
            if (((int)(uVar12 | uVar13) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar13,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar13 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar13 = ~local_84 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 + lVar14 * 0x18);
        uVar12 = 0;
        if ((int)uVar13 < param_4) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar15 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar13 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        FVar9 = FVar15;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= &local_88) {
          FVar9 = FVar15;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((&local_88 <
               (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar15 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar15 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar15 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar15,(int *)((longlong)FVar15 + 0x2c));
        }
        *(int *)((longlong)FVar15 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar15 + 0x20) != (ForElementType<int>)0x0) {
          FVar15 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        }
        lVar16 = lVar16 + 4;
        *(uint *)((longlong)FVar15 + (longlong)iVar7 * 4) = local_88;
      } while (lVar16 < 0x18);
      lVar16 = (longlong)(int)local_88;
      uVar13 = 0;
      if ((int)local_88 < __return_storage_ptr__->ArrayNum) {
        uVar13 = ~local_88 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar16 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,2,0> @ 143aac260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,2,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticles *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  longlong lVar17;
  bool bVar18;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,2,0>(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,2,0>(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  local_78 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_78 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aac3a0:
      lVar17 = 0;
      do {
        lVar15 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + (lVar17 + lVar15 * 2) * 4);
        uVar14 = 0;
        if ((int)uVar5 < (int)param_2->_padding_) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(float *)(param_2->_padding_ + (longlong)(int)uVar5 * 4) != 0.0) {
          uVar14 = 0;
          if ((int)uVar5 < param_4) {
            uVar14 = ~uVar5 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aac3a0;
            }
          }
        }
        piVar13 = local_80;
        lVar17 = lVar17 + 1;
      } while (lVar17 < 2);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar12 | uVar14) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            piVar13 = local_80;
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
              piVar13 = &__return_storage_ptr__->ArrayNum;
            }
          }
        }
      }
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 8);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 8 + 4);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_88;
      uVar14 = 0;
      if ((int)local_88 < *piVar13) {
        uVar14 = ~local_88 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar17 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,3,0> @ 143aaca20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,3,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticles *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  longlong lVar17;
  bool bVar18;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,3,0>(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,3,0>(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  local_78 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_78 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aacb60:
      lVar17 = 0;
      do {
        lVar15 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + (lVar17 + lVar15 * 3) * 4);
        uVar14 = 0;
        if ((int)uVar5 < (int)param_2->_padding_) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(float *)(param_2->_padding_ + (longlong)(int)uVar5 * 4) != 0.0) {
          uVar14 = 0;
          if ((int)uVar5 < param_4) {
            uVar14 = ~uVar5 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aacb60;
            }
          }
        }
        piVar13 = local_80;
        lVar17 = lVar17 + 1;
      } while (lVar17 < 3);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar12 | uVar14) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            piVar13 = local_80;
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
              piVar13 = &__return_storage_ptr__->ArrayNum;
            }
          }
        }
      }
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc + 4);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_84;
      uVar14 = 0;
      if ((int)local_84 < param_1->ArrayNum) {
        uVar14 = ~local_84 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar17 * 0xc + 8);
      uVar12 = 0;
      if ((int)uVar14 < param_4) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      FVar16 = (ForElementType<int>)
               ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
      FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      FVar9 = FVar16;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
      }
      iVar7 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
        FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      }
      *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_88;
      lVar17 = (longlong)(int)local_88;
      uVar14 = 0;
      if ((int)local_88 < *piVar13) {
        uVar14 = ~local_88 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar17 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,1> @ 143aad340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,1>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticles *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  bool bVar17;
  uint local_res20;
  uint local_48;
  uint local_44;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_40;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,1>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,1>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_res20 = 0xffffffff;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_40,param_4 - param_3,Default);
  FVar3.Data = local_40.AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_44 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_48 = 0;
LAB_143aad440:
      lVar13 = 0;
      do {
        lVar15 = (longlong)(int)local_44;
        uVar5 = 0;
        if ((int)local_44 < param_1->ArrayNum) {
          uVar5 = ~local_44 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 0x10 + lVar13);
        uVar14 = 0;
        if ((int)uVar5 < param_4) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        pFVar11 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
        pFVar9 = pFVar11;
        if (*(FScriptContainerElement **)(pFVar11 + 0x20) != (FScriptContainerElement *)0x0) {
          pFVar9 = *(FScriptContainerElement **)(pFVar11 + 0x20);
        }
        pFVar11 = pFVar9 + (longlong)(int)*(uint *)(pFVar11 + 0x28) * 4;
        for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 4) {
          if (*(uint *)pFVar9 == local_48) {
            local_48 = local_48 + 1;
            goto LAB_143aad440;
          }
        }
        lVar13 = lVar13 + 4;
      } while (lVar13 < 0x10);
      iVar7 = __return_storage_ptr__->ArrayNum;
      uVar5 = local_48;
      if ((int)local_48 < (int)local_res20) {
        uVar5 = local_res20;
      }
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar14 | uVar12) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar13 = 0;
      do {
        lVar15 = (longlong)(int)local_44;
        uVar14 = 0;
        if ((int)local_44 < param_1->ArrayNum) {
          uVar14 = ~local_44 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 0x10 + lVar13);
        uVar12 = 0;
        if ((int)uVar14 < param_4) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar16 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
        FVar10 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar10 = FVar1;
        }
        if ((ulonglong)FVar10 <= &local_48) {
          FVar10 = FVar16;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar10 = FVar1;
          }
          if ((&local_48 <
               (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar16 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
        }
        *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
          FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
        }
        lVar13 = lVar13 + 4;
        *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_48;
      } while (lVar13 < 0x10);
      lVar13 = (longlong)(int)local_48;
      uVar14 = 0;
      if ((int)local_48 < __return_storage_ptr__->ArrayNum) {
        uVar14 = ~local_48 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + lVar13 * 0x10;
      if (((*(uint **)&pFVar9->field_0x0 <= &local_44) &&
          (&local_44 < *(uint **)&pFVar9->field_0x0 + *(int *)(pFVar9 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar9[8].field_0x0;
      if (iVar7 == *(int *)(pFVar9 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
      }
      *(int *)&pFVar9[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar7 * 4) = local_44;
      local_44 = local_44 + 1;
      local_res20 = uVar5;
    } while ((int)local_44 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_40.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,0> @ 143aad8f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticles *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<int> FVar15;
  longlong lVar16;
  bool bVar17;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,0>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,0>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_80 = 0;
  local_78 = &__return_storage_ptr__->ArrayMax;
  *local_78 = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aada30:
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0x10 + lVar16);
        uVar13 = 0;
        if ((int)uVar5 < (int)param_2->_padding_) {
          uVar13 = ~uVar5 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(float *)(param_2->_padding_ + (longlong)(int)uVar5 * 4) != 0.0) {
          uVar13 = 0;
          if ((int)uVar5 < param_4) {
            uVar13 = ~uVar5 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aada30;
            }
          }
        }
        lVar16 = lVar16 + 4;
      } while (lVar16 < 0x10);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar13 = uVar5 + 1;
        if (iVar7 < (int)uVar13) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar13 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar13 - iVar7) << 4);
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          if ((int)uVar13 < iVar7) {
            uVar12 = iVar7 - uVar13;
            if (((int)(uVar13 | uVar12) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar13,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar13 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar13 = ~local_84 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0x10 + lVar16);
        uVar12 = 0;
        if ((int)uVar13 < param_4) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar15 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar13 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        FVar9 = FVar15;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= &local_88) {
          FVar9 = FVar15;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((&local_88 <
               (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar15 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar15 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar15 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar15,(int *)((longlong)FVar15 + 0x2c));
        }
        *(int *)((longlong)FVar15 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar15 + 0x20) != (ForElementType<int>)0x0) {
          FVar15 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        }
        lVar16 = lVar16 + 4;
        *(uint *)((longlong)FVar15 + (longlong)iVar7 * 4) = local_88;
      } while (lVar16 < 0x10);
      lVar16 = (longlong)(int)local_88;
      uVar13 = 0;
      if ((int)local_88 < __return_storage_ptr__->ArrayNum) {
        uVar13 = ~local_88 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar16 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,6,0> @ 143aadf70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,6,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticles *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<int> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<int> FVar15;
  longlong lVar16;
  bool bVar17;
  uint local_res20;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_78;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_70 [3];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,6,0>(TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,6,0>(TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticles_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  local_80 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_80 = 0;
  local_78 = &__return_storage_ptr__->ArrayMax;
  *local_78 = 0;
  local_res20 = 0xffffffff;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_70,param_4 - param_3,Default);
  FVar3.Data = local_70[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_84 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_88 = 0;
LAB_143aae0b0:
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar5 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar5 = ~local_84 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 + lVar14 * 0x18);
        uVar13 = 0;
        if ((int)uVar5 < (int)param_2->_padding_) {
          uVar13 = ~uVar5 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if (*(float *)(param_2->_padding_ + (longlong)(int)uVar5 * 4) != 0.0) {
          uVar13 = 0;
          if ((int)uVar5 < param_4) {
            uVar13 = ~uVar5 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
          pFVar10 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar10;
          if (*(FScriptContainerElement **)(pFVar10 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar10 + 0x20);
          }
          pFVar10 = pFVar11 + (longlong)(int)*(uint *)(pFVar10 + 0x28) * 4;
          for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_88) {
              local_88 = local_88 + 1;
              goto LAB_143aae0b0;
            }
          }
        }
        lVar16 = lVar16 + 4;
      } while (lVar16 < 0x18);
      uVar5 = local_88;
      if ((int)local_88 < (int)local_res20) {
        uVar5 = local_res20;
      }
      iVar7 = *local_80;
      if (iVar7 <= (int)uVar5) {
        uVar13 = uVar5 + 1;
        if (iVar7 < (int)uVar13) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar13 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             local_80,local_78);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar13 - iVar7) << 4);
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
          }
          if ((int)uVar13 < iVar7) {
            uVar12 = iVar7 - uVar13;
            if (((int)(uVar13 | uVar12) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar13,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar16 = 0;
      do {
        lVar14 = (longlong)(int)local_84;
        uVar13 = 0;
        if ((int)local_84 < param_1->ArrayNum) {
          uVar13 = ~local_84 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 + lVar14 * 0x18);
        uVar12 = 0;
        if ((int)uVar13 < param_4) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar15 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar13 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        FVar9 = FVar15;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= &local_88) {
          FVar9 = FVar15;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((&local_88 <
               (uint *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar15 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar15 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar15 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar15,(int *)((longlong)FVar15 + 0x2c));
        }
        *(int *)((longlong)FVar15 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar15 + 0x20) != (ForElementType<int>)0x0) {
          FVar15 = *(ForElementType<int> *)((longlong)FVar15 + 0x20);
        }
        lVar16 = lVar16 + 4;
        *(uint *)((longlong)FVar15 + (longlong)iVar7 * 4) = local_88;
      } while (lVar16 < 0x18);
      lVar16 = (longlong)(int)local_88;
      uVar13 = 0;
      if ((int)local_88 < __return_storage_ptr__->ArrayNum) {
        uVar13 = ~local_88 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar16 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_84) &&
          (&local_84 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      if (iVar7 == *(int *)(pFVar11 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = local_84;
      local_84 = local_84 + 1;
      local_res20 = uVar5;
    } while ((int)local_84 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_70[0].AllocatorInstance.Data,local_70[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_70[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,2,0> @ 143aae5f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,2,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticlesRange *param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  bool bVar18;
  float fVar19;
  uint local_res20;
  uint local_68;
  uint local_64;
  int *local_60;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_58 [2];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,2,0>(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,2,0>(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  local_60 = &__return_storage_ptr__->ArrayMax;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *local_60 = 0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  local_res20 = 0xffffffff;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_58,param_4 - param_3,Default);
  FVar4.Data = local_58[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar3)();
    return pTVar9;
  }
  local_64 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_68 = 0;
LAB_143aae700:
      lVar14 = 0;
      do {
        lVar16 = (longlong)(int)local_64;
        uVar6 = 0;
        if ((int)local_64 < param_1->ArrayNum) {
          uVar6 = ~local_64 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar6 = *(uint *)((param_1->AllocatorInstance).Data + (lVar14 + lVar16 * 2) * 4);
        if ((*(longlong *)&param_2->field_0x8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        fVar19 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_2->field_0x8,
                            *(int *)&param_2->field_0x10 + uVar6);
        if (fVar19 != 0.0) {
          uVar15 = 0;
          if ((int)uVar6 < param_4) {
            uVar15 = ~uVar6 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
          pFVar12 = FVar4.Data + (longlong)(int)uVar6 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar12;
          if (*(FScriptContainerElement **)(pFVar12 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar12 + 0x20);
          }
          pFVar12 = pFVar11 + (longlong)(int)*(uint *)(pFVar12 + 0x28) * 4;
          for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_68) {
              local_68 = local_68 + 1;
              goto LAB_143aae700;
            }
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < 2);
      uVar6 = local_68;
      if ((int)local_68 < (int)local_res20) {
        uVar6 = local_res20;
      }
      iVar8 = *piVar1;
      if (iVar8 <= (int)uVar6) {
        uVar15 = uVar6 + 1;
        if (iVar8 < (int)uVar15) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar15 - iVar8,&__return_storage_ptr__->AllocatorInstance,piVar1
                             ,local_60);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
                 (longlong)(int)(uVar15 - iVar8) << 4);
        }
        else {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          if ((int)uVar15 < iVar8) {
            uVar13 = iVar8 - uVar15;
            if (((int)(uVar13 | uVar15) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar3)();
              return pTVar9;
            }
            if (uVar13 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar15,uVar13);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar14 = (longlong)(int)local_64;
      uVar15 = 0;
      if ((int)local_64 < param_1->ArrayNum) {
        uVar15 = ~local_64 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 8);
      uVar13 = 0;
      if ((int)uVar15 < param_4) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      FVar17 = (ForElementType<int>)
               ((longlong)FVar4.Data + (longlong)(int)uVar15 * 0x30 + (longlong)param_3 * -0x30);
      FVar2 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      FVar10 = FVar17;
      if (FVar2 != (ForElementType<int>)0x0) {
        FVar10 = FVar2;
      }
      if ((ulonglong)FVar10 <= &local_68) {
        FVar10 = FVar17;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if ((&local_68 <
             (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
      }
      iVar8 = *(int *)((longlong)FVar17 + 0x28);
      if (iVar8 == *(int *)((longlong)FVar17 + 0x2c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar17,(int *)((longlong)FVar17 + 0x2c));
      }
      *(int *)((longlong)FVar17 + 0x28) = iVar8 + 1;
      if (*(ForElementType<int> *)((longlong)FVar17 + 0x20) != (ForElementType<int>)0x0) {
        FVar17 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      }
      *(uint *)((longlong)FVar17 + (longlong)iVar8 * 4) = local_68;
      lVar14 = (longlong)(int)local_64;
      uVar15 = 0;
      if ((int)local_64 < param_1->ArrayNum) {
        uVar15 = ~local_64 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 8 + 4);
      uVar13 = 0;
      if ((int)uVar15 < param_4) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      FVar17 = (ForElementType<int>)
               ((longlong)FVar4.Data + (longlong)(int)uVar15 * 0x30 + (longlong)param_3 * -0x30);
      FVar2 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      FVar10 = FVar17;
      if (FVar2 != (ForElementType<int>)0x0) {
        FVar10 = FVar2;
      }
      if ((ulonglong)FVar10 <= &local_68) {
        FVar10 = FVar17;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if ((&local_68 <
             (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
      }
      iVar8 = *(int *)((longlong)FVar17 + 0x28);
      if (iVar8 == *(int *)((longlong)FVar17 + 0x2c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar17,(int *)((longlong)FVar17 + 0x2c));
      }
      *(int *)((longlong)FVar17 + 0x28) = iVar8 + 1;
      if (*(ForElementType<int> *)((longlong)FVar17 + 0x20) != (ForElementType<int>)0x0) {
        FVar17 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      }
      *(uint *)((longlong)FVar17 + (longlong)iVar8 * 4) = local_68;
      lVar14 = (longlong)(int)local_68;
      uVar15 = 0;
      if ((int)local_68 < __return_storage_ptr__->ArrayNum) {
        uVar15 = ~local_68 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar14 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_64) &&
          (&local_64 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      iVar8 = *(int *)&pFVar11[8].field_0x0;
      if (iVar8 == *(int *)(pFVar11 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar8 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar8 * 4) = local_64;
      local_64 = local_64 + 1;
      local_res20 = uVar6;
    } while ((int)local_64 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_58[0].AllocatorInstance.Data,local_58[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_58[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,3,0> @ 143aaed30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,3,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticlesRange *param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  bool bVar18;
  float fVar19;
  uint local_res20;
  uint local_68;
  uint local_64;
  int *local_60;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_58 [2];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,3,0>(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,3,0>(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  local_60 = &__return_storage_ptr__->ArrayMax;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *local_60 = 0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  local_res20 = 0xffffffff;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_58,param_4 - param_3,Default);
  FVar4.Data = local_58[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar3)();
    return pTVar9;
  }
  local_64 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_68 = 0;
LAB_143aaee50:
      lVar14 = 0;
      do {
        lVar16 = (longlong)(int)local_64;
        uVar6 = 0;
        if ((int)local_64 < param_1->ArrayNum) {
          uVar6 = ~local_64 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar6 = *(uint *)((param_1->AllocatorInstance).Data + (lVar14 + lVar16 * 3) * 4);
        if ((*(longlong *)&param_2->field_0x8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        fVar19 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_2->field_0x8,
                            *(int *)&param_2->field_0x10 + uVar6);
        if (fVar19 != 0.0) {
          uVar15 = 0;
          if ((int)uVar6 < param_4) {
            uVar15 = ~uVar6 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
          pFVar12 = FVar4.Data + (longlong)(int)uVar6 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar12;
          if (*(FScriptContainerElement **)(pFVar12 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar12 + 0x20);
          }
          pFVar12 = pFVar11 + (longlong)(int)*(uint *)(pFVar12 + 0x28) * 4;
          for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_68) {
              local_68 = local_68 + 1;
              goto LAB_143aaee50;
            }
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < 3);
      uVar6 = local_68;
      if ((int)local_68 < (int)local_res20) {
        uVar6 = local_res20;
      }
      iVar8 = *piVar1;
      if (iVar8 <= (int)uVar6) {
        uVar15 = uVar6 + 1;
        if (iVar8 < (int)uVar15) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar15 - iVar8,&__return_storage_ptr__->AllocatorInstance,piVar1
                             ,local_60);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
                 (longlong)(int)(uVar15 - iVar8) << 4);
        }
        else {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          if ((int)uVar15 < iVar8) {
            uVar13 = iVar8 - uVar15;
            if (((int)(uVar13 | uVar15) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar3)();
              return pTVar9;
            }
            if (uVar13 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar15,uVar13);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar14 = (longlong)(int)local_64;
      uVar15 = 0;
      if ((int)local_64 < param_1->ArrayNum) {
        uVar15 = ~local_64 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0xc);
      uVar13 = 0;
      if ((int)uVar15 < param_4) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      FVar17 = (ForElementType<int>)
               ((longlong)FVar4.Data + (longlong)(int)uVar15 * 0x30 + (longlong)param_3 * -0x30);
      FVar2 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      FVar10 = FVar17;
      if (FVar2 != (ForElementType<int>)0x0) {
        FVar10 = FVar2;
      }
      if ((ulonglong)FVar10 <= &local_68) {
        FVar10 = FVar17;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if ((&local_68 <
             (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
      }
      iVar8 = *(int *)((longlong)FVar17 + 0x28);
      if (iVar8 == *(int *)((longlong)FVar17 + 0x2c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar17,(int *)((longlong)FVar17 + 0x2c));
      }
      *(int *)((longlong)FVar17 + 0x28) = iVar8 + 1;
      if (*(ForElementType<int> *)((longlong)FVar17 + 0x20) != (ForElementType<int>)0x0) {
        FVar17 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      }
      *(uint *)((longlong)FVar17 + (longlong)iVar8 * 4) = local_68;
      lVar14 = (longlong)(int)local_64;
      uVar15 = 0;
      if ((int)local_64 < param_1->ArrayNum) {
        uVar15 = ~local_64 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0xc + 4);
      uVar13 = 0;
      if ((int)uVar15 < param_4) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      FVar17 = (ForElementType<int>)
               ((longlong)FVar4.Data + (longlong)(int)uVar15 * 0x30 + (longlong)param_3 * -0x30);
      FVar2 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      FVar10 = FVar17;
      if (FVar2 != (ForElementType<int>)0x0) {
        FVar10 = FVar2;
      }
      if ((ulonglong)FVar10 <= &local_68) {
        FVar10 = FVar17;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if ((&local_68 <
             (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
      }
      iVar8 = *(int *)((longlong)FVar17 + 0x28);
      if (iVar8 == *(int *)((longlong)FVar17 + 0x2c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar17,(int *)((longlong)FVar17 + 0x2c));
      }
      *(int *)((longlong)FVar17 + 0x28) = iVar8 + 1;
      if (*(ForElementType<int> *)((longlong)FVar17 + 0x20) != (ForElementType<int>)0x0) {
        FVar17 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      }
      *(uint *)((longlong)FVar17 + (longlong)iVar8 * 4) = local_68;
      lVar14 = (longlong)(int)local_64;
      uVar15 = 0;
      if ((int)local_64 < param_1->ArrayNum) {
        uVar15 = ~local_64 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      uVar15 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 0xc + 8);
      uVar13 = 0;
      if ((int)uVar15 < param_4) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      FVar17 = (ForElementType<int>)
               ((longlong)FVar4.Data + (longlong)(int)uVar15 * 0x30 + (longlong)param_3 * -0x30);
      FVar2 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      FVar10 = FVar17;
      if (FVar2 != (ForElementType<int>)0x0) {
        FVar10 = FVar2;
      }
      if ((ulonglong)FVar10 <= &local_68) {
        FVar10 = FVar17;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if ((&local_68 <
             (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
      }
      iVar8 = *(int *)((longlong)FVar17 + 0x28);
      if (iVar8 == *(int *)((longlong)FVar17 + 0x2c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar17,(int *)((longlong)FVar17 + 0x2c));
      }
      *(int *)((longlong)FVar17 + 0x28) = iVar8 + 1;
      if (*(ForElementType<int> *)((longlong)FVar17 + 0x20) != (ForElementType<int>)0x0) {
        FVar17 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
      }
      *(uint *)((longlong)FVar17 + (longlong)iVar8 * 4) = local_68;
      lVar14 = (longlong)(int)local_68;
      uVar15 = 0;
      if ((int)local_68 < __return_storage_ptr__->ArrayNum) {
        uVar15 = ~local_68 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar14 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_64) &&
          (&local_64 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      iVar8 = *(int *)&pFVar11[8].field_0x0;
      if (iVar8 == *(int *)(pFVar11 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar8 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar8 * 4) = local_64;
      local_64 = local_64 + 1;
      local_res20 = uVar6;
    } while ((int)local_64 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_58[0].AllocatorInstance.Data,local_58[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_58[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,1> @ 143aaf600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,1>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticlesRange *param_2,int param_3,int param_4)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  bool bVar17;
  uint local_res20;
  uint local_48;
  uint local_44;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_40;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,1>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,1>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_res20 = 0xffffffff;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_40,param_4 - param_3,Default);
  FVar3.Data = local_40.AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  local_44 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_48 = 0;
LAB_143aaf700:
      lVar13 = 0;
      do {
        lVar15 = (longlong)(int)local_44;
        uVar5 = 0;
        if ((int)local_44 < param_1->ArrayNum) {
          uVar5 = ~local_44 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 0x10 + lVar13);
        uVar14 = 0;
        if ((int)uVar5 < param_4) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        pFVar11 = FVar3.Data + (longlong)(int)uVar5 * 0x30 + (longlong)param_3 * -0x30;
        pFVar9 = pFVar11;
        if (*(FScriptContainerElement **)(pFVar11 + 0x20) != (FScriptContainerElement *)0x0) {
          pFVar9 = *(FScriptContainerElement **)(pFVar11 + 0x20);
        }
        pFVar11 = pFVar9 + (longlong)(int)*(uint *)(pFVar11 + 0x28) * 4;
        for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 4) {
          if (*(uint *)pFVar9 == local_48) {
            local_48 = local_48 + 1;
            goto LAB_143aaf700;
          }
        }
        lVar13 = lVar13 + 4;
      } while (lVar13 < 0x10);
      iVar7 = __return_storage_ptr__->ArrayNum;
      uVar5 = local_48;
      if ((int)local_48 < (int)local_res20) {
        uVar5 = local_res20;
      }
      if (iVar7 <= (int)uVar5) {
        uVar14 = uVar5 + 1;
        if (iVar7 < (int)uVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar14 - iVar7,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
                 (longlong)(int)(uVar14 - iVar7) << 4);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((int)uVar14 < iVar7) {
            uVar12 = iVar7 - uVar14;
            if (((int)(uVar14 | uVar12) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            if (uVar12 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar14,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar13 = 0;
      do {
        lVar15 = (longlong)(int)local_44;
        uVar14 = 0;
        if ((int)local_44 < param_1->ArrayNum) {
          uVar14 = ~local_44 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 0x10 + lVar13);
        uVar12 = 0;
        if ((int)uVar14 < param_4) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        FVar16 = (ForElementType<int>)
                 ((longlong)FVar3.Data + (longlong)(int)uVar14 * 0x30 + (longlong)param_3 * -0x30);
        FVar1 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
        FVar10 = FVar16;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar10 = FVar1;
        }
        if ((ulonglong)FVar10 <= &local_48) {
          FVar10 = FVar16;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar10 = FVar1;
          }
          if ((&local_48 <
               (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar8;
          }
        }
        iVar7 = *(int *)((longlong)FVar16 + 0x28);
        if (iVar7 == *(int *)((longlong)FVar16 + 0x2c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
        }
        *(int *)((longlong)FVar16 + 0x28) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) != (ForElementType<int>)0x0) {
          FVar16 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
        }
        lVar13 = lVar13 + 4;
        *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4) = local_48;
      } while (lVar13 < 0x10);
      lVar13 = (longlong)(int)local_48;
      uVar14 = 0;
      if ((int)local_48 < __return_storage_ptr__->ArrayNum) {
        uVar14 = ~local_48 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + lVar13 * 0x10;
      if (((*(uint **)&pFVar9->field_0x0 <= &local_44) &&
          (&local_44 < *(uint **)&pFVar9->field_0x0 + *(int *)(pFVar9 + 0xc))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)&pFVar9[8].field_0x0;
      if (iVar7 == *(int *)(pFVar9 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
      }
      *(int *)&pFVar9[8].field_0x0 = iVar7 + 1;
      *(uint *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar7 * 4) = local_44;
      local_44 = local_44 + 1;
      local_res20 = uVar5;
    } while ((int)local_44 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_40.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0> @ 143aafbb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticlesRange *param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  bool bVar18;
  float fVar19;
  uint local_res20;
  uint local_68;
  uint local_64;
  int *local_60;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_58 [2];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0>(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  local_60 = &__return_storage_ptr__->ArrayMax;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *local_60 = 0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  local_res20 = 0xffffffff;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_58,param_4 - param_3,Default);
  FVar4.Data = local_58[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar3)();
    return pTVar9;
  }
  local_64 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_68 = 0;
LAB_143aafcc0:
      lVar14 = 0;
      do {
        lVar16 = (longlong)(int)local_64;
        uVar6 = 0;
        if ((int)local_64 < param_1->ArrayNum) {
          uVar6 = ~local_64 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 * 0x10 + lVar14);
        if ((*(longlong *)&param_2->field_0x8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        fVar19 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_2->field_0x8,
                            *(int *)&param_2->field_0x10 + uVar6);
        if (fVar19 != 0.0) {
          uVar15 = 0;
          if ((int)uVar6 < param_4) {
            uVar15 = ~uVar6 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
          pFVar12 = FVar4.Data + (longlong)(int)uVar6 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar12;
          if (*(FScriptContainerElement **)(pFVar12 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar12 + 0x20);
          }
          pFVar12 = pFVar11 + (longlong)(int)*(uint *)(pFVar12 + 0x28) * 4;
          for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_68) {
              local_68 = local_68 + 1;
              goto LAB_143aafcc0;
            }
          }
        }
        lVar14 = lVar14 + 4;
      } while (lVar14 < 0x10);
      uVar6 = local_68;
      if ((int)local_68 < (int)local_res20) {
        uVar6 = local_res20;
      }
      iVar8 = *piVar1;
      if (iVar8 <= (int)uVar6) {
        uVar15 = uVar6 + 1;
        if (iVar8 < (int)uVar15) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar15 - iVar8,&__return_storage_ptr__->AllocatorInstance,piVar1
                             ,local_60);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
                 (longlong)(int)(uVar15 - iVar8) << 4);
        }
        else {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          if ((int)uVar15 < iVar8) {
            uVar13 = iVar8 - uVar15;
            if (((int)(uVar15 | uVar13) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar3)();
              return pTVar9;
            }
            if (uVar13 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar15,uVar13);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar14 = 0;
      do {
        lVar16 = (longlong)(int)local_64;
        uVar15 = 0;
        if ((int)local_64 < param_1->ArrayNum) {
          uVar15 = ~local_64 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar15 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 * 0x10 + lVar14);
        uVar13 = 0;
        if ((int)uVar15 < param_4) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        FVar17 = (ForElementType<int>)
                 ((longlong)FVar4.Data + (longlong)(int)uVar15 * 0x30 + (longlong)param_3 * -0x30);
        FVar2 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
        FVar10 = FVar17;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if ((ulonglong)FVar10 <= &local_68) {
          FVar10 = FVar17;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar10 = FVar2;
          }
          if ((&local_68 <
               (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
        }
        iVar8 = *(int *)((longlong)FVar17 + 0x28);
        if (iVar8 == *(int *)((longlong)FVar17 + 0x2c)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar17,(int *)((longlong)FVar17 + 0x2c));
        }
        *(int *)((longlong)FVar17 + 0x28) = iVar8 + 1;
        if (*(ForElementType<int> *)((longlong)FVar17 + 0x20) != (ForElementType<int>)0x0) {
          FVar17 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
        }
        lVar14 = lVar14 + 4;
        *(uint *)((longlong)FVar17 + (longlong)iVar8 * 4) = local_68;
      } while (lVar14 < 0x10);
      lVar14 = (longlong)(int)local_68;
      uVar15 = 0;
      if ((int)local_68 < *piVar1) {
        uVar15 = ~local_68 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar14 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_64) &&
          (&local_64 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      iVar8 = *(int *)&pFVar11[8].field_0x0;
      if (iVar8 == *(int *)(pFVar11 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar8 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar8 * 4) = local_64;
      local_64 = local_64 + 1;
      local_res20 = uVar6;
    } while ((int)local_64 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_58[0].AllocatorInstance.Data,local_58[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_58[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,6,0> @ 143ab01d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,6,0>
          (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_> *param_1,
          FSolverParticlesRange *param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  bool bVar18;
  float fVar19;
  uint local_res20;
  uint local_68;
  uint local_64;
  int *local_60;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_58 [2];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,6,0>(TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
                ::__l2::__CpuProfilerEventSpecId400,"FGraphColoring_ComputeGraphColoringN",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\GraphColoring.cpp"
               ,400);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,6,0>(TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FSolverParticlesRange_const&___ptr64,int,int)'
               ::__l2::__CpuProfilerEventSpecId400);
  }
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  local_60 = &__return_storage_ptr__->ArrayMax;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *local_60 = 0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  local_res20 = 0xffffffff;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(local_58,param_4 - param_3,Default);
  FVar4.Data = local_58[0].AllocatorInstance.Data;
  if ((param_4 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar3)();
    return pTVar9;
  }
  local_64 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      local_68 = 0;
LAB_143ab02f0:
      lVar14 = 0;
      do {
        lVar16 = (longlong)(int)local_64;
        uVar6 = 0;
        if ((int)local_64 < param_1->ArrayNum) {
          uVar6 = ~local_64 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 + lVar16 * 0x18);
        if ((*(longlong *)&param_2->field_0x8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        fVar19 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_2->field_0x8,
                            *(int *)&param_2->field_0x10 + uVar6);
        if (fVar19 != 0.0) {
          uVar15 = 0;
          if ((int)uVar6 < param_4) {
            uVar15 = ~uVar6 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
          pFVar12 = FVar4.Data + (longlong)(int)uVar6 * 0x30 + (longlong)param_3 * -0x30;
          pFVar11 = pFVar12;
          if (*(FScriptContainerElement **)(pFVar12 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar12 + 0x20);
          }
          pFVar12 = pFVar11 + (longlong)(int)*(uint *)(pFVar12 + 0x28) * 4;
          for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 4) {
            if (*(uint *)pFVar11 == local_68) {
              local_68 = local_68 + 1;
              goto LAB_143ab02f0;
            }
          }
        }
        lVar14 = lVar14 + 4;
      } while (lVar14 < 0x18);
      uVar6 = local_68;
      if ((int)local_68 < (int)local_res20) {
        uVar6 = local_res20;
      }
      iVar8 = *piVar1;
      if (iVar8 <= (int)uVar6) {
        uVar15 = uVar6 + 1;
        if (iVar8 < (int)uVar15) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar15 - iVar8,&__return_storage_ptr__->AllocatorInstance,piVar1
                             ,local_60);
          memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
                 (longlong)(int)(uVar15 - iVar8) << 4);
        }
        else {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          if ((int)uVar15 < iVar8) {
            uVar13 = iVar8 - uVar15;
            if (((int)(uVar15 | uVar13) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar3)();
              return pTVar9;
            }
            if (uVar13 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(__return_storage_ptr__,uVar15,uVar13);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&__return_storage_ptr__->AllocatorInstance,
                         __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            }
          }
        }
      }
      lVar14 = 0;
      do {
        lVar16 = (longlong)(int)local_64;
        uVar15 = 0;
        if ((int)local_64 < param_1->ArrayNum) {
          uVar15 = ~local_64 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar15 = *(uint *)((param_1->AllocatorInstance).Data + lVar14 + lVar16 * 0x18);
        uVar13 = 0;
        if ((int)uVar15 < param_4) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        FVar17 = (ForElementType<int>)
                 ((longlong)FVar4.Data + (longlong)(int)uVar15 * 0x30 + (longlong)param_3 * -0x30);
        FVar2 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
        FVar10 = FVar17;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        if ((ulonglong)FVar10 <= &local_68) {
          FVar10 = FVar17;
          if (FVar2 != (ForElementType<int>)0x0) {
            FVar10 = FVar2;
          }
          if ((&local_68 <
               (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
        }
        iVar8 = *(int *)((longlong)FVar17 + 0x28);
        if (iVar8 == *(int *)((longlong)FVar17 + 0x2c)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar17,(int *)((longlong)FVar17 + 0x2c));
        }
        *(int *)((longlong)FVar17 + 0x28) = iVar8 + 1;
        if (*(ForElementType<int> *)((longlong)FVar17 + 0x20) != (ForElementType<int>)0x0) {
          FVar17 = *(ForElementType<int> *)((longlong)FVar17 + 0x20);
        }
        lVar14 = lVar14 + 4;
        *(uint *)((longlong)FVar17 + (longlong)iVar8 * 4) = local_68;
      } while (lVar14 < 0x18);
      lVar14 = (longlong)(int)local_68;
      uVar15 = 0;
      if ((int)local_68 < *piVar1) {
        uVar15 = ~local_68 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + lVar14 * 0x10;
      if (((*(uint **)&pFVar11->field_0x0 <= &local_64) &&
          (&local_64 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      iVar8 = *(int *)&pFVar11[8].field_0x0;
      if (iVar8 == *(int *)(pFVar11 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar8 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar8 * 4) = local_64;
      local_64 = local_64 + 1;
      local_res20 = uVar6;
    } while ((int)local_64 < param_1->ArrayNum);
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_58[0].AllocatorInstance.Data,local_58[0].ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_58[0].AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

