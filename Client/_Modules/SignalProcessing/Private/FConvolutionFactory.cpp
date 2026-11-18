// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// NewConvolutionAlgorithm @ 1444c6ff0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_> __cdecl
Audio::FConvolutionFactory::NewConvolutionAlgorithm(FConvolutionSettings *param_1,FName *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  IConvolutionAlgorithmFactory *pIVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  longlong lVar10;
  TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_> TVar11;
  FName *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  int iVar16;
  ForAnyElementType FVar17;
  FName *in_R8;
  FIdentityFunctor local_res18 [8];
  undefined1 local_res20 [8];
  IConvolutionAlgorithmFactory *local_a8;
  undefined8 *local_a0;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  FString local_50;
  
  pIVar9 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar9 + 8))(pIVar9);
  pIVar9 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&ModularFeatureName,L"AudioConvolutionAlgorithmFactory");
    _Init_thread_footer(&::_TSS0);
  }
  FVar3 = ModularFeatureName;
  iVar16 = 0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  iVar8 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,ModularFeatureName);
  if (0 < iVar8) {
    do {
      lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar3,iVar16);
      local_a8 = (IConvolutionAlgorithmFactory *)(lVar10 + -8);
      if (lVar10 == 0) {
        local_a8 = (IConvolutionAlgorithmFactory *)0x0;
      }
      if (((local_90.Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < local_90.Data + (longlong)local_88._4_4_ * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        TVar11.Ptr = (IConvolutionAlgorithm *)(*pcVar5)();
        return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>
                )TVar11.Ptr;
      }
      if ((int)local_88 == local_88._4_4_) {
        local_88._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar1 = (int)local_88 + 1;
      iVar16 = iVar16 + 1;
      *(IConvolutionAlgorithmFactory **)(local_90.Data + (longlong)(int)local_88 * 8) = local_a8;
      local_88._0_4_ = iVar1;
    } while (iVar16 < iVar8);
  }
  pIVar9 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
  pFVar14 = (FScriptContainerElement *)0x0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  pFVar2 = local_90.Data + (longlong)(int)local_88 * 8;
  FVar15.Data = pFVar14;
  iVar8 = 0;
  for (FVar17.Data = local_90.Data; FVar17.Data != pFVar2; FVar17.Data = FVar17.Data + 8) {
    if (*(IConvolutionAlgorithmFactory **)FVar17.Data != (IConvolutionAlgorithmFactory *)0x0) {
      iVar8 = (int)pFVar14;
      if ((FVar15.Data <= FVar17.Data) &&
         (local_78._4_4_ = (int)((ulonglong)local_78 >> 0x20), lVar10 = (longlong)local_78._4_4_,
         FVar17.Data < FVar15.Data + lVar10 * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          TVar11.Ptr = (IConvolutionAlgorithm *)(*pcVar5)();
          return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>
                  )TVar11.Ptr;
        }
        FVar15.Data = local_80.Data;
        iVar8 = (int)local_78;
      }
      if (iVar8 == local_78._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_80,(int *)((longlong)&local_78 + 4));
        FVar15.Data = local_80.Data;
      }
      local_78 = CONCAT44(local_78._4_4_,iVar8 + 1U);
      *(IConvolutionAlgorithmFactory **)(FVar15.Data + (longlong)iVar8 * 8) =
           *(IConvolutionAlgorithmFactory **)FVar17.Data;
      pFVar14 = (FScriptContainerElement *)(ulonglong)(iVar8 + 1U);
      FVar15.Data = local_80.Data;
    }
    iVar8 = (int)pFVar14;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
    FVar15.Data = local_80.Data;
    iVar8 = (int)local_78;
  }
  uVar13 = (ulonglong)local_78 >> 0x20;
  local_78 = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_88 = CONCAT44((int)uVar13,iVar8);
  local_90.Data = FVar15.Data;
  if (iVar8 == 0) {
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
LAB_1444c7294:
    param_1->bEnableHardwareAcceleration = false;
    *(undefined3 *)&param_1->field_0x1 = 0;
    param_1->BlockNumSamples = 0;
  }
  else {
    FVar3 = *in_R8;
    if (AnyAlgorithmFactory != FVar3) {
      pFVar2 = FVar15.Data + (longlong)iVar8 * 8;
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      local_68._0_4_ = 0;
      if (FVar15.Data != pFVar2) {
        do {
          pFVar12 = (FName *)(**(code **)((longlong)**(IConvolutionAlgorithmFactory **)FVar15.Data +
                                         8))(*(IConvolutionAlgorithmFactory **)FVar15.Data,local_98)
          ;
          if (FVar3 == *pFVar12) {
            if (((local_70.Data <= FVar15.Data) &&
                (FVar15.Data < local_70.Data + (longlong)local_68._4_4_ * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              TVar11.Ptr = (IConvolutionAlgorithm *)(*pcVar5)();
              return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>
                      )TVar11.Ptr;
            }
            iVar8 = (int)local_68;
            if ((int)local_68 == local_68._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_70,(int *)((longlong)&local_68 + 4));
            }
            local_68 = CONCAT44(local_68._4_4_,iVar8 + 1);
            *(IConvolutionAlgorithmFactory **)(local_70.Data + (longlong)iVar8 * 8) =
                 *(IConvolutionAlgorithmFactory **)FVar15.Data;
          }
          FVar15.Data = FVar15.Data + 8;
        } while (FVar15.Data != pFVar2);
      }
      iVar8 = (int)local_68;
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
        iVar8 = (int)local_68;
      }
      FVar15.Data = local_70.Data;
      local_90.Data = local_70.Data;
      local_70.Data = (FScriptContainerElement *)0x0;
      local_88 = CONCAT44(local_68._4_4_,iVar8);
      local_68 = 0;
      if (iVar8 == 0) {
        if (2 < (byte)LogSignalProcessing._0_1_) {
          ::FName::ToString(in_R8,&local_50);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1444c7294;
      }
    }
    local_90.Data = FVar15.Data;
    if ((char)(param_2->ComparisonIndex).Value == '\0') {
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = 0;
      pFVar2 = FVar15.Data + (longlong)iVar8 * 8;
      for (; FVar15.Data != pFVar2; FVar15.Data = FVar15.Data + 8) {
        cVar7 = (**(code **)((longlong)**(IConvolutionAlgorithmFactory **)FVar15.Data + 0x10))();
        if (cVar7 == '\0') {
          if (((local_60.Data <= FVar15.Data) &&
              (FVar15.Data < local_60.Data + (longlong)local_58._4_4_ * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            TVar11.Ptr = (IConvolutionAlgorithm *)(*pcVar5)();
            return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>
                    )TVar11.Ptr;
          }
          iVar8 = (int)local_58;
          if ((int)local_58 == local_58._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_60,(int *)((longlong)&local_58 + 4));
          }
          local_58 = CONCAT44(local_58._4_4_,iVar8 + 1);
          *(IConvolutionAlgorithmFactory **)(local_60.Data + (longlong)iVar8 * 8) =
               *(IConvolutionAlgorithmFactory **)FVar15.Data;
        }
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      local_90.Data = local_60.Data;
      local_88 = local_58;
      iVar8 = (int)local_58;
    }
    AlgoImpl::
    IntroSortInternal<Audio::IConvolutionAlgorithmFactory_*,int,FIdentityFunctor,TDereferenceWrapper<Audio::IConvolutionAlgorithmFactory_*,_Audio::FConvolutionFactory::NewConvolutionAlgorithm_::__l2::<lambda_4>_>_>
              ((IConvolutionAlgorithmFactory **)local_90.Data,iVar8,local_res18[0],
               (<lambda_4> *)local_res18);
    iVar8 = (int)local_88;
    uVar13 = (ulonglong)(int)local_88;
    pFVar2 = local_90.Data + uVar13 * 8;
    FVar15.Data = local_90.Data;
    while( true ) {
      if ((int)uVar13 != iVar8) {
        `TCheckedPointerIterator<Audio::IConvolutionAlgorithmFactory_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (FVar15.Data == pFVar2) break;
      pIVar4 = *(IConvolutionAlgorithmFactory **)FVar15.Data;
      cVar7 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,param_2);
      if (cVar7 != '\0') {
        (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,&local_a0,param_2);
        if (local_a0 != (undefined8 *)0x0) {
          *(undefined8 **)param_1 = local_a0;
          local_a0 = (undefined8 *)0x0;
          goto joined_r0x0001444c75e2;
        }
        if (2 < (byte)LogSignalProcessing._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
        }
        if (local_a0 != (undefined8 *)0x0) {
          (**(code **)*local_a0)(local_a0,1);
        }
      }
      uVar13 = local_88 & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
    param_1->bEnableHardwareAcceleration = false;
    *(undefined3 *)&param_1->field_0x1 = 0;
    param_1->BlockNumSamples = 0;
  }
joined_r0x0001444c75e2:
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return (TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>)
         (IConvolutionAlgorithm *)param_1;
}

