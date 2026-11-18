// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// CacheExistingState @ 146641c70

/* WARNING: Enum "Type": Some values do not have unique names */

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FParticleParameterPreAnimatedTokenProducer::CacheExistingState
          (FParticleParameterPreAnimatedTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  UParticleSystemComponent *pUVar6;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 local_res20 [8];
  FParticleParameterPreAnimatedToken local_c8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  pUVar6 = CastChecked<UParticleSystemComponent,UObject>(param_1);
  local_c8._padding_ = (longlong)&___7FParticleParameterPreAnimatedToken__6B_;
  local_c8.ScalarValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ScalarValues.ArrayNum = 0;
  local_c8.ScalarValues.ArrayMax = 0;
  local_c8.VectorValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.VectorValues.ArrayNum = 0;
  local_c8.VectorValues.ArrayMax = 0;
  local_c8.ColorValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ColorValues.ArrayNum = 0;
  local_c8.ColorValues.ArrayMax = 0;
  if (pUVar6->bParallelRenderThreadUpdate == '\0') {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      if (pUVar6->bAsyncDataCopyIsValid == '\0') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bAsyncDataCopyIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticleSystemComponent.h"
                           ,0x3a1,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar3)();
          return pTVar7;
        }
      }
      lVar12 = 0x758;
      goto LAB_146641d16;
    }
  }
  lVar12 = 0x588;
LAB_146641d16:
  fVar4 = __real_3b808081;
  puVar10 = *(undefined8 **)(&pUVar6->field_0x0 + lVar12);
  iVar2 = *(int *)(&pUVar6->field_0x8 + lVar12);
  pbVar9 = (byte *)((longlong)puVar10 + 0x49);
  puVar11 = puVar10 + (longlong)iVar2 * 0x1c;
LAB_146641d40:
  do {
    while( true ) {
      if (*(int *)(&pUVar6->field_0x8 + lVar12) != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FParticleSysParam_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar10 == puVar11) {
        __return_storage_ptr__->bIsValid = false;
        TInlineValue<IMovieScenePreAnimatedToken,32,8>::
        InitializeFrom<FParticleParameterPreAnimatedToken,FParticleParameterPreAnimatedToken>
                  (__return_storage_ptr__,&local_c8);
        if (local_c8.ColorValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.ColorValues.AllocatorInstance.Data);
        }
        if (local_c8.VectorValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.VectorValues.AllocatorInstance.Data);
        }
        if (local_c8.ScalarValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.ScalarValues.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      bVar1 = pbVar9[-0x41];
      if (bVar1 != 1) break;
      local_90 = *puVar10;
      local_88 = *(undefined4 *)(pbVar9 + -0x3d);
      if ((local_c8.ScalarValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_90) &&
         ((FScriptContainerElement *)&local_90 <
          local_c8.ScalarValues.AllocatorInstance.Data +
          (longlong)local_c8.ScalarValues.ArrayMax * 0xc)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar3)();
          return pTVar7;
        }
      }
      if (local_c8.ScalarValues.ArrayNum == local_c8.ScalarValues.ArrayMax) {
        local_c8.ScalarValues.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_c8.ScalarValues.AllocatorInstance,
                        &local_c8.ScalarValues.ArrayMax);
      }
      lVar8 = (longlong)local_c8.ScalarValues.ArrayNum;
      local_c8.ScalarValues.ArrayNum = local_c8.ScalarValues.ArrayNum + 1;
      *(undefined8 *)(local_c8.ScalarValues.AllocatorInstance.Data + lVar8 * 0xc) = local_90;
      *(undefined4 *)(local_c8.ScalarValues.AllocatorInstance.Data + lVar8 * 0xc + 8) = local_88;
LAB_14664201e:
      puVar10 = puVar10 + 0x1c;
      pbVar9 = pbVar9 + 0xe0;
    }
    if (bVar1 != 3) {
      if (bVar1 != 5) goto LAB_14664201e;
      local_84 = *puVar10;
      fStack_7c = FLinearColor::sRGBToLinearTable[pbVar9[1]];
      fStack_78 = FLinearColor::sRGBToLinearTable[*pbVar9];
      local_74 = FLinearColor::sRGBToLinearTable[pbVar9[-1]];
      fStack_70 = (float)pbVar9[2] * fVar4;
      if ((local_c8.ColorValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_84) &&
         ((FScriptContainerElement *)&local_84 <
          local_c8.ColorValues.AllocatorInstance.Data +
          (longlong)local_c8.ColorValues.ArrayMax * 0x18)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar3)();
          return pTVar7;
        }
      }
      if (local_c8.ColorValues.ArrayNum == local_c8.ColorValues.ArrayMax) {
        local_c8.ColorValues.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,&local_c8.ColorValues.AllocatorInstance,&local_c8.ColorValues.ArrayMax
                       );
      }
      lVar8 = (longlong)local_c8.ColorValues.ArrayNum;
      puVar10 = puVar10 + 0x1c;
      pbVar9 = pbVar9 + 0xe0;
      local_c8.ColorValues.ArrayNum = local_c8.ColorValues.ArrayNum + 1;
      *(undefined8 *)(local_c8.ColorValues.AllocatorInstance.Data + lVar8 * 0x18) = local_84;
      *(ulonglong *)(local_c8.ColorValues.AllocatorInstance.Data + lVar8 * 0x18 + 8) =
           CONCAT44(fStack_78,fStack_7c);
      *(ulonglong *)(local_c8.ColorValues.AllocatorInstance.Data + lVar8 * 0x18 + 0x10) =
           CONCAT44(fStack_70,local_74);
      goto LAB_146641d40;
    }
    local_68 = *puVar10;
    uStack_60 = *(undefined8 *)(pbVar9 + -0x31);
    uStack_58 = *(undefined8 *)(pbVar9 + -0x29);
    uStack_50 = *(undefined8 *)(pbVar9 + -0x21);
    if ((local_c8.VectorValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        local_c8.VectorValues.AllocatorInstance.Data +
        (longlong)local_c8.VectorValues.ArrayMax * 0x20)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (local_c8.VectorValues.ArrayNum == local_c8.VectorValues.ArrayMax) {
      local_c8.VectorValues.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,&local_c8.VectorValues.AllocatorInstance,&local_c8.VectorValues.ArrayMax
                     );
    }
    lVar8 = (longlong)local_c8.VectorValues.ArrayNum;
    puVar10 = puVar10 + 0x1c;
    local_c8.VectorValues.ArrayNum = local_c8.VectorValues.ArrayNum + 1;
    pbVar9 = pbVar9 + 0xe0;
    *(undefined8 *)(local_c8.VectorValues.AllocatorInstance.Data + lVar8 * 0x20) = local_68;
    *(undefined8 *)(local_c8.VectorValues.AllocatorInstance.Data + lVar8 * 0x20 + 8) = uStack_60;
    *(undefined8 *)(local_c8.VectorValues.AllocatorInstance.Data + lVar8 * 0x20 + 0x10) = uStack_58;
    *(undefined8 *)(local_c8.VectorValues.AllocatorInstance.Data + lVar8 * 0x20 + 0x10 + 8) =
         uStack_50;
  } while( true );
}

