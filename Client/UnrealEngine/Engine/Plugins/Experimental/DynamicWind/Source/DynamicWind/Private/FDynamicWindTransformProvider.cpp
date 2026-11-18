// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 8

// FDynamicWindTransformProvider @ 14da4cfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicWindTransformProvider * __thiscall
FDynamicWindTransformProvider::FDynamicWindTransformProvider
          (FDynamicWindTransformProvider *this,FScene *param_1)

{
  FScene *pFVar1;
  FSkinningTransformProvider *this_00;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 *puVar5;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  this->Scene = param_1;
  *(undefined8 *)&this->SkeletonLookup = 0;
  *(undefined8 *)&(this->SkeletonLookup).field_0x8 = 0;
  *(undefined8 *)&(this->SkeletonLookup).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletonLookup).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletonLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletonLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletonLookup).field_0x34 = 0;
  *(undefined8 *)&(this->SkeletonLookup).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletonLookup).field_0x48 = 0;
  FSpanAllocator::FSpanAllocator(&this->BoneDataAllocator,false);
  (this->BoneDataUploader).Ptr =
       (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
        *)0x0;
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->BoneDataBuffer,1,L"DynamicWind.BoneDataBuffer",true);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WindParameters).SimulationCenter.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WindParameters).SimulationCenter.field0_0x0._s_0.Y = (double)uVar2;
  (this->WindParameters).SimulationCenter.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar1 = this->Scene;
  (this->WindParameters).SimulationExtents = 1.0;
  uVar2 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  (this->WindParameters).WindDirection.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (this->WindParameters).WindDirection.field0_0x0._s_0.Y = (double)uVar2;
  (this->WindParameters).WindDirection.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  (this->WindParameters).WindTexture.field0_0x0.DebugPtr = (UTexture *)0x0;
  *(undefined8 *)&(this->WindParameters).DebugModulation.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->WindParameters).DebugModulation.field0_0x0 + 8) = 0;
  (this->WindParameters).WindSpeed = 15.0;
  (this->WindParameters).WindAmplitude = 1.0;
  this->LastSimulatedFrameNumber = 0;
  this->BlendedWindAmplitude = -1.0;
  if ((-1 < (int)FSkinningTransformProvider::ExtensionRegistration._8_4_) &&
     ((int)FSkinningTransformProvider::ExtensionRegistration._8_4_ <
      *(int *)&(pFVar1->SceneExtensions).Extensions.field_0x28)) {
    puVar5 = *(undefined1 **)&(pFVar1->SceneExtensions).Extensions.field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar1->SceneExtensions).Extensions.field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)
                            ((int)(FSkinningTransformProvider::ExtensionRegistration._8_4_ +
                                  ((int)FSkinningTransformProvider::ExtensionRegistration._8_4_ >>
                                   0x1f & 0x1fU)) >> 5) * 4) >>
         (FSkinningTransformProvider::ExtensionRegistration._8_4_ & 0x1f) & 1) != 0) {
      this_00 = *(FSkinningTransformProvider **)
                 (*(longlong *)&(pFVar1->SceneExtensions).Extensions +
                 (longlong)(int)FSkinningTransformProvider::ExtensionRegistration._8_4_ * 8);
      if (this_00 != (FSkinningTransformProvider *)0x0) {
        local_48 = (undefined1  [8])0x0;
        local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_40.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_30);
        local_18 = &local_40;
        puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar4 = FDelegateHandle::GenerateNewID();
          puVar3[2] = uVar4;
          *puVar3 = &
                    ___7__TBaseRawMethodDelegateInstance__0A_VFDynamicWindTransformProvider____A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar3[4] = ProvideTransforms;
          puVar3[3] = this;
        }
        if (local_30.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
        }
        FSkinningTransformProvider::RegisterProvider
                  (this_00,&GDynamicWindTransformProviderId,
                   (TDelegate<void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
                    *)local_48,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_30);
        if ((local_40.DelegateSize != 0) &&
           (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_40,0,0,0x10);
          local_40.DelegateSize = 0;
        }
        if (local_30.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
        }
        if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_40.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_48);
      }
      return this;
    }
  }
  return this;
}

// ~FDynamicWindTransformProvider @ 14da4d7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDynamicWindTransformProvider::~FDynamicWindTransformProvider(FDynamicWindTransformProvider *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *pTVar4;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar5;
  void *pvVar6;
  
  puVar3 = *(undefined8 **)&(this->BoneDataBuffer).field_0x18;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  pTVar4 = (this->BoneDataUploader).Ptr;
  if (pTVar4 != (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                 *)0x0) {
    (**(code **)pTVar4->_padding_)(pTVar4,1);
  }
  FVar5 = (this->BoneDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FVar5 = (this->BoneDataAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  *(undefined4 *)&(this->SkeletonLookup).field_0x48 = 0;
  pvVar6 = *(void **)&(this->SkeletonLookup).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkeletonLookup);
  return;
}

// operator() @ 14da4db70

void __thiscall
`FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>::operator()(void *this)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  int local_d0;
  int iStack_cc;
  undefined4 uStack_94;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  TStack_78;
  undefined8 uStack_58;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId290,"FDynamicWindTransformProvider::ProvideTransforms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\DynamicWind\\Source\\DynamicWind\\Private\\DynamicWindProvider.cpp"
               ,0x122);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId290);
  }
  iVar13 = 0;
  iVar8 = *(int *)((longlong)this + 0x38);
  TStack_78.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)((longlong)this + 0x20);
  iVar17 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar8 != 0) {
    pTVar14 = *(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                **)((longlong)this + 0x30);
    if (*(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          **)((longlong)this + 0x30) ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar14 = TStack_78.Array;
    }
    uVar19 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar19 == 0) {
      lVar10 = (longlong)iVar13;
      iVar17 = iVar17 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14da4dc60;
      uVar19 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uVar6 = -uVar19 & uVar19;
    uVar12 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = iVar17 + -1 + (int)lVar10;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14da4dc60:
  uVar19 = *(uint *)((longlong)this + 0x38);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_78.CurrentBitIndex = iVar7;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uVar6,iVar13);
  iVar13 = (int)uVar19 >> 5;
  TStack_78._28_4_ = iVar7;
  TStack_78.BaseBitIndex = iVar17;
  uStack_58 = CONCAT44(uStack_94,*(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44));
  if ((((int)uVar19 < 0) || (iVar8 < (int)uVar19)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)((longlong)this + 0x38);
  if (uVar19 != uVar6) {
    pTVar14 = *(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                **)((longlong)this + 0x30);
    if (*(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          **)((longlong)this + 0x30) ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar14 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)((longlong)this + 0x20);
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar19 == 0) {
      lVar10 = (longlong)iVar13;
      uVar20 = uVar20 + 0x20;
      iVar13 = iVar13 + 1;
      uVar19 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14da4dd63;
      uVar19 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar19 = (int)lVar10 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar19) {
      uVar19 = uVar6;
    }
  }
LAB_14da4dd63:
  lVar10 = 0;
  while( true ) {
    if (*(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44) != (int)uStack_58) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_78.CurrentBitIndex == uVar19) &&
       (TStack_78.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)((longlong)this + 0x20))) break;
    puVar11 = (undefined8 *)
              ((longlong)TStack_78.CurrentBitIndex * 0x40 + 0x28 +
              *(longlong *)((longlong)this + 0x10));
    uVar3 = puVar11[1];
    puVar2 = (undefined8 *)(*(longlong *)((longlong)this + 8) + lVar10);
    *puVar2 = *puVar11;
    puVar2[1] = uVar3;
    lVar10 = lVar10 + 0x10;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&TStack_78);
  }
  uVar6 = 0;
  puVar11 = *(undefined8 **)((longlong)this + 0x70);
  puVar2 = (undefined8 *)((longlong)puVar11 + (longlong)*(int *)((longlong)this + 0x78) * 0xc);
  while( true ) {
    if (puVar11 == puVar2) {
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar3 = *puVar11;
    local_d0 = (int)uVar3;
    if ((local_d0 < 0 || *(int *)((longlong)this + 0x88) <= local_d0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    iStack_cc = (int)((ulonglong)uVar3 >> 0x20);
    lVar10 = (longlong)local_d0 * 0x20 + *(longlong *)((longlong)this + 0x80);
    uVar19 = *(uint *)(lVar10 + 0x18);
    uVar20 = *(uint *)(lVar10 + 0x1c);
    local_res20 = uVar19 + (uVar19 >> 6) * -0x40;
    local_res18 = uVar19;
    uVar9 = CityHash64((char *)(lVar10 + 8),0x10);
    iVar8 = TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
                        *)((longlong)this + 0x10),(uint)uVar9,(FGuid *)(lVar10 + 8));
    uVar18 = 0;
    if (uVar20 != 0) {
      do {
        iVar13 = 0;
        if (uVar19 >> 6 != 0) {
          uVar12 = (ulonglong)(uVar19 >> 6);
          iVar17 = iVar13;
          do {
            uVar15 = (ulonglong)uVar6;
            uVar6 = uVar6 + 1;
            lVar16 = uVar15 * 0x10;
            *(int *)(lVar16 + *(longlong *)this) = iVar8;
            *(int *)(lVar16 + 4 + *(longlong *)this) = iStack_cc;
            iStack_cc = iStack_cc + 0xc00;
            *(undefined1 *)(lVar16 + 8 + *(longlong *)this) = 0x40;
            lVar10 = *(longlong *)this;
            iVar13 = iVar17 + 0x40;
            puVar1 = (uint *)(lVar10 + lVar16 + 8);
            *puVar1 = *puVar1 & 0xff;
            puVar1 = (uint *)(lVar10 + lVar16 + 8);
            *puVar1 = *puVar1 | iVar17 << 8;
            *(char *)(lVar16 + 0xc + *(longlong *)this) = (char)uVar18;
            lVar10 = *(longlong *)this;
            puVar1 = (uint *)(lVar16 + 0xc + lVar10);
            *puVar1 = *puVar1 & 0xff;
            puVar1 = (uint *)(lVar16 + 0xc + lVar10);
            *puVar1 = *puVar1 | local_res18 << 8;
            uVar12 = uVar12 - 1;
            iVar17 = iVar13;
          } while (uVar12 != 0);
        }
        if (local_res20 != 0) {
          lVar16 = (ulonglong)uVar6 * 0x10;
          *(int *)(lVar16 + *(longlong *)this) = iVar8;
          *(int *)(lVar16 + 4 + *(longlong *)this) = iStack_cc;
          *(char *)(lVar16 + 8 + *(longlong *)this) = (char)local_res20;
          lVar10 = *(longlong *)this;
          puVar1 = (uint *)(lVar16 + 8 + lVar10);
          *puVar1 = *puVar1 & 0xff;
          puVar1 = (uint *)(lVar16 + 8 + lVar10);
          *puVar1 = *puVar1 | iVar13 << 8;
          *(char *)(lVar16 + 0xc + *(longlong *)this) = (char)uVar18;
          lVar10 = *(longlong *)this;
          puVar1 = (uint *)(lVar16 + lVar10 + 0xc);
          *puVar1 = *puVar1 & 0xff;
          puVar1 = (uint *)(lVar16 + lVar10 + 0xc);
          *puVar1 = *puVar1 | local_res18 << 8;
          iStack_cc = iStack_cc + local_res20 * 0x30;
          uVar6 = uVar6 + 1;
        }
        iStack_cc = iStack_cc + local_res18 * 0x30;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar20);
    }
    puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetBlendedWindAmplitude @ 14da4fd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FDynamicWindTransformProvider::GetBlendedWindAmplitude(FDynamicWindTransformProvider *this)

{
  return this->BlendedWindAmplitude;
}

// ProvideTransforms @ 14da51150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FDynamicWindTransformProvider::ProvideTransforms
          (FDynamicWindTransformProvider *this,FProviderContext *param_1)

{
  FDynamicWindBlockHeader *pFVar1;
  FProviderIndirection *pFVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined4 uVar9;
  FSkeletonBatch *pFVar10;
  FRDGBuilder *this_00;
  TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *pTVar11;
  UTexture *this_01;
  code *pcVar12;
  bool bVar13;
  TRefCountPtr<FRHISamplerState> TVar14;
  TConsoleVariableData<float> *pTVar15;
  TConsoleVariableData<float> *pTVar16;
  TConsoleVariableData<bool> *pTVar17;
  FRDGTexture *pFVar18;
  FRDGBuffer *pFVar19;
  FTaskHandle *pFVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  atomic<unsigned___int64> aVar24;
  atomic<UE::Tasks::Private::FTaskBase_*> aVar25;
  FLowLevelMemTracker *pFVar26;
  FPageAllocator *pFVar27;
  FTextureResource *pFVar28;
  TRefCountPtr<IPooledRenderTarget> TVar29;
  longlong lVar30;
  FRDGScope *this_02;
  ulonglong uVar31;
  FRHITexture *pFVar32;
  FRDGBufferSRV *pFVar33;
  FRDGBufferUAV *pFVar34;
  FRDGTextureSRV *pFVar35;
  FShaderType *pFVar36;
  FName this_03;
  FString *pFVar37;
  FRHITexture *pFVar38;
  FRDGEventName *pFVar39;
  FShaderParametersMetadata *pFVar40;
  uint uVar41;
  FProviderIndirection *pFVar42;
  FRHITexture *pFVar43;
  FSetElementId *pFVar44;
  int *piVar45;
  uint *puVar46;
  TRefCountPtr<FRHISamplerState> this_04;
  ERDGPassFlags EVar47;
  FRHITexture *pFVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStackY_388 [32];
  ulong64 uVar52;
  FRDGBuffer *local_330;
  FRHITexture *local_318;
  atomic<unsigned___int64> local_310;
  FRDGTexture *local_308;
  uint local_300;
  FRDGTextureSRVDesc local_2f8;
  FRDGBufferUAVDesc local_2e0;
  FScriptContainerElement *local_2d0;
  FTaskHandle *local_2c8;
  undefined8 local_2c0;
  TIntVector3<int>_u_0 local_2b8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2a8;
  char local_298;
  undefined1 local_290 [16];
  FRDGBuffer *local_280;
  FRDGBufferSRVDesc local_278;
  FRDGBufferSRVDesc local_258;
  FRDGBufferSRVDesc local_238;
  FScatterInfo local_218;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_208;
  undefined1 local_1f8 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_const_*,std::tuple<>_> local_1f0;
  FString local_1e0;
  TShaderRefBase<FDynamicWindEvalCS,FShaderMapPointerTable> local_1c8;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  FRDGEventName local_198;
  undefined1 local_178 [32];
  longlong local_158;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  ForElementType<FSetElementId> local_128;
  int local_120;
  undefined1 local_118 [16];
  TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  local_108;
  FProviderIndirection *local_a8;
  undefined8 uStack_a0;
  FSkeletonBatch *local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pFVar48 = (FRHITexture *)0x0;
  bVar13 = false;
  uVar22 = (**(code **)(*(longlong *)this->Scene + 0x4e8))();
  if (this->LastSimulatedFrameNumber == (ulonglong)uVar22) {
    return;
  }
  if (*(int *)&(this->SkeletonLookup).field_0x8 == *(int *)&(this->SkeletonLookup).field_0x34) {
    return;
  }
  pFVar42 = (param_1->Indirections).DataPtr;
  pFVar2 = pFVar42 + (param_1->Indirections).ArrayNum;
  pFVar43 = pFVar48;
  if (pFVar42 == pFVar2) {
    return;
  }
  do {
    local_300 = pFVar42->HierarchyOffset;
    uVar5._0_4_ = pFVar42->Index;
    uVar5._4_4_ = pFVar42->TransformOffset;
    local_308 = (FRDGTexture *)uVar5;
    if (((int)(undefined4)uVar5 < 0 || (param_1->SkeletonBatches).ArrayNum <= (int)(undefined4)uVar5
        ) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar10 = (param_1->SkeletonBatches).DataPtr;
    pFVar42 = pFVar42 + 1;
    uVar22 = (int)pFVar43 +
             (pFVar10[(int)(undefined4)uVar5].MaxBoneTransforms + 0x3f >> 6) *
             pFVar10[(int)(undefined4)uVar5].UniqueAnimationCount;
    pFVar43 = (FRHITexture *)(ulonglong)uVar22;
  } while (pFVar42 != pFVar2);
  if (uVar22 == 0) {
    return;
  }
  uVar41 = *(int *)&(this->SkeletonLookup).field_0x8 - *(int *)&(this->SkeletonLookup).field_0x34;
  this_00 = param_1->GraphBuilder;
  aVar24 = (atomic<unsigned___int64>)
           FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,(ulonglong)uVar41 << 4,4);
  local_310 = aVar24;
  aVar25 = (atomic<UE::Tasks::Private::FTaskBase_*>)
           FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,(ulonglong)uVar22 << 4,4);
  local_148 = 0xffffffff;
  local_178._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *)0x0;
  local_178._8_8_ = 0;
  local_158 = 0;
  local_150 = 0;
  local_14c = 0x80;
  local_144 = 0;
  local_128.Data = (FSetElementId *)0x0;
  local_120 = 0;
  TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  ::Append<FDefaultSetAllocator>
            ((TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
              *)local_178,
             (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
              *)&this->SkeletonLookup);
  local_118._0_8_ = aVar25;
  local_118._8_8_ = aVar24;
  TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  ::
  TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
            ((TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
              *)(local_118 + 0x10),
             (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
              *)local_178);
  local_a8 = (param_1->Indirections).DataPtr;
  uStack_a0 = *(undefined8 *)&(param_1->Indirections).ArrayNum;
  local_98 = (param_1->SkeletonBatches).DataPtr;
  uStack_90 = *(undefined8 *)&(param_1->SkeletonBatches).ArrayNum;
  local_2c8 = (FTaskHandle *)0x0;
  local_2c0 = 0;
  FRDGBuilder::
  AddSetupTask<_FDynamicWindTransformProvider::ProvideTransforms_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (this_00,(<lambda_1> *)local_290,(FPipe *)local_118,
             (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
             (ETaskPriority)&local_2c8,false,Execute);
  pFVar20 = local_2c8;
  DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_2c8,(int)local_2c0);
  if (pFVar20 != (FTaskHandle *)0x0) {
    FMemory::Free(pFVar20);
  }
  if ((FDynamicWindBlockHeader *)local_290._0_8_ != (FDynamicWindBlockHeader *)0x0) {
    LOCK();
    pFVar1 = (FDynamicWindBlockHeader *)(local_290._0_8_ + 0x30);
    uVar3 = pFVar1->SkeletonDataIndex;
    pFVar1->SkeletonDataIndex = pFVar1->SkeletonDataIndex - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (*(code *)**(undefined8 **)local_290._0_8_)();
    }
  }
  local_108.HashSize = 0;
  if (local_108.Hash.SecondaryData.SecondaryData.Data != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_108.Hash.SecondaryData.SecondaryData.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
              *)(local_118 + 0x10));
  local_120 = 0;
  if (local_128.Data != (FSetElementId *)0x0) {
    pFVar44 = local_128.Data + -2;
    MemoryTrace_Free((ulong64)pFVar44,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar26 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar26 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar26,Default,pFVar44,FMalloc,true);
    }
    piVar45 = (int *)((longlong)pFVar44 - (ulonglong)(uint)pFVar44->Index);
    LOCK();
    iVar23 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      lVar30 = *(longlong *)(piVar45 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar45,0,0);
      if (lVar30 - (longlong)piVar45 == 0x10000) {
        pFVar27 = FPageAllocator::Get();
        FPageAllocator::Free(pFVar27,piVar45);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  iVar23 = SUB84(local_178._8_8_,4);
  local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
  if (iVar23 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>_>
              (0x40,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_> *)
                        local_178,0,(int *)(local_178 + 0xc));
  }
  local_148 = 0xffffffff;
  local_144 = 0;
  local_150 = 0;
  if (0x80 < local_14c) {
    local_14c = 0x80;
    TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::Realloc((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(local_178 + 0x10),0);
  }
  if (local_158 != 0) {
    puVar46 = (uint *)(local_158 + -8);
    MemoryTrace_Free((ulong64)puVar46,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar26 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar26 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar26,Default,puVar46,FMalloc,true);
    }
    piVar45 = (int *)((longlong)puVar46 - (ulonglong)*puVar46);
    LOCK();
    iVar23 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      lVar30 = *(longlong *)(piVar45 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar45,0,0);
      if (lVar30 - (longlong)piVar45 == 0x10000) {
        pFVar27 = FPageAllocator::Get();
        FPageAllocator::Free(pFVar27,piVar45);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  if ((TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *)local_178._0_8_ !=
      (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *)0x0) {
    puVar46 = (uint *)(local_178._0_8_ + -8);
    MemoryTrace_Free((ulong64)puVar46,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar26 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar26 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar26,Default,puVar46,FMalloc,true);
    }
    piVar45 = (int *)((longlong)puVar46 - (ulonglong)*puVar46);
    LOCK();
    iVar23 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      lVar30 = *(longlong *)(piVar45 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar45,0,0);
      if (lVar30 - (longlong)piVar45 == 0x10000) {
        pFVar27 = FPageAllocator::Get();
        FPageAllocator::Free(pFVar27,piVar45);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar45);
      }
    }
  }
  local_2d0 = (FScriptContainerElement *)0x15060d16c;
  if (((int)uVar41 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindSkeletonData>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindSkeletonData_const_,int>,ERDGInitialDataFlags)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindSkeletonData>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindSkeletonData_const_,int>,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindSkeletonData>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindSkeletonData_const_,int>,ERDGInitialDataFlags)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindSkeletonData>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindSkeletonData_const_,int>,ERDGInitialDataFlags)'
    ::__l2::DummyElement = (FDynamicWindSkeletonData)ZEXT816(0);
    _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindSkeletonData>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindSkeletonData_const_,int>,ERDGInitialDataFlags)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (uVar41 == 0) {
    uVar52 = 0x10;
    uVar41 = 1;
    aVar24 = (atomic<unsigned___int64>)
             &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindSkeletonData>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindSkeletonData_const_,int>,ERDGInitialDataFlags)'
              ::__l2::DummyElement;
  }
  else {
    uVar52 = (longlong)(int)uVar41 << 4;
    aVar24 = local_310;
  }
  local_310 = (atomic<unsigned___int64>)
              CreateStructuredBuffer
                        (this_00,L"DynamicWind.SkeletonData",0x10,uVar41,(void *)aVar24,uVar52,
                         NoCopy);
  if (((int)uVar22 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindBlockHeader>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindBlockHeader_const_,int>,ERDGInitialDataFlags)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindBlockHeader>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindBlockHeader_const_,int>,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindBlockHeader>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindBlockHeader_const_,int>,ERDGInitialDataFlags)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindBlockHeader>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindBlockHeader_const_,int>,ERDGInitialDataFlags)'
    ::__l2::DummyElement = (FDynamicWindBlockHeader)ZEXT816(0);
    _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FDynamicWindBlockHeader>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FDynamicWindBlockHeader_const_,int>,ERDGInitialDataFlags)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_280 = CreateStructuredBuffer
                        (this_00,L"DynamicWind.ScatterHeaders",0x10,uVar22,(void *)aVar25,
                         (longlong)(int)uVar22 << 4,NoCopy);
  pTVar11 = (this->BoneDataUploader).Ptr;
  if (pTVar11 ==
      (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
       *)0x0) {
    local_330 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
                          ((FPersistentBuffer *)&this->BoneDataBuffer,this_00);
  }
  else {
    piVar45 = &(this->BoneDataAllocator).PeakMaxSize;
    if ((this->BoneDataAllocator).bGrowOnly == false) {
      piVar45 = &(this->BoneDataAllocator).CurrentMaxSize;
    }
    local_218.ScatterOffsetsRDG = (FRDGBuffer *)0x0;
    local_218.NumScatters = 0;
    local_330 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                ::ResizeAndUploadTo(pTVar11,this_00,&this->BoneDataBuffer,*piVar45,&local_218);
    pTVar11 = (this->BoneDataUploader).Ptr;
    (this->BoneDataUploader).Ptr =
         (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          *)0x0;
    if (pTVar11 !=
        (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
         *)0x0) {
      (**(code **)pTVar11->_padding_)(pTVar11,1);
    }
  }
  this_01 = (this->WindParameters).WindTexture.field0_0x0.DebugPtr;
  pFVar43 = pFVar48;
  this_04.Reference = (FRHISamplerState *)pFVar48;
  if ((this_01 == (UTexture *)0x0) ||
     (pFVar28 = UTexture::GetResource(this_01), pFVar28 == (FTextureResource *)0x0)) {
LAB_14da518c2:
    pFVar32 = (GWhiteTexture->TextureRHI).Reference;
    if (pFVar32 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar32);
      pFVar43 = pFVar32;
    }
  }
  else {
    pFVar32 = (FRHITexture *)pFVar28->_padding_;
    if (pFVar32 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar32);
      pFVar43 = pFVar32;
    }
    pFVar32 = (FRHITexture *)pFVar28->_padding_;
    if (pFVar32 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar32);
      this_04.Reference = (FRHISamplerState *)pFVar32;
    }
    if (pFVar43 == (FRHITexture *)0x0) goto LAB_14da518c2;
  }
  TVar14.Reference =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  if (((FRHITexture *)this_04.Reference == (FRHITexture *)0x0) &&
     (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0)) {
    FRHIResource::AddRef
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
    this_04.Reference = TVar14.Reference;
  }
  TVar29 = CreateRenderTarget((FRHITexture *)(local_290 + 8),(wchar_t *)pFVar43);
  local_308 = FRDGBuilder::RegisterExternalTexture
                        (this_00,(TRefCountPtr<IPooledRenderTarget> *)TVar29.Reference,None);
  if ((FDynamicWindSkeletonData *)local_290._8_8_ != (FDynamicWindSkeletonData *)0x0) {
    (**(code **)(*(longlong *)local_290._8_8_ + 0x38))();
  }
  pTVar15 = CVarDynamicWindOverrideSpeed.Ref;
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_14da51945:
    pFVar32 = pFVar48;
  }
  else {
    bVar21 = IsInGameThread();
    pFVar32 = (FRHITexture *)&DAT_00000004;
    if (bVar21) goto LAB_14da51945;
  }
  pTVar16 = CVarDynamicWindOverrideAmplitude.Ref;
  fVar51 = *(float *)((longlong)&pFVar32->_padding_ + (longlong)pTVar15->ShadowedValue);
  if (fVar51 < 0.0) {
    fVar51 = (this->WindParameters).WindSpeed;
  }
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_14da5197f:
    pFVar32 = pFVar48;
  }
  else {
    bVar21 = IsInGameThread();
    pFVar32 = (FRHITexture *)&DAT_00000004;
    if (bVar21) goto LAB_14da5197f;
  }
  pTVar15 = CVarDynamicWindOverrideRateOfChange.Ref;
  fVar49 = *(float *)((longlong)pTVar16->ShadowedValue + (longlong)&pFVar32->_padding_);
  if (__real_3c23d70a <
      (float)((uint)(fVar49 - this->BlendedWindAmplitude) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    bVar21 = IsInParallelGameThread();
    if (bVar21) {
LAB_14da519cf:
      pFVar32 = pFVar48;
    }
    else {
      bVar21 = IsInGameThread();
      pFVar32 = (FRHITexture *)&DAT_00000004;
      if (bVar21) goto LAB_14da519cf;
    }
    fVar49 = fVar49 - this->BlendedWindAmplitude;
    fVar4 = *(float *)((longlong)&pFVar32->_padding_ + (longlong)pTVar15->ShadowedValue);
    fVar50 = __real_3f800000;
    if ((fVar49 <= 0.0) && (fVar50 = __real_bf800000, 0.0 <= fVar49)) {
      fVar50 = 0.0;
    }
    lVar30 = (**(code **)(*(longlong *)this->Scene + 0x410))();
    fVar49 = fVar50 * fVar4 * *(float *)(lVar30 + 0x91c) + this->BlendedWindAmplitude;
  }
  this->BlendedWindAmplitude = fVar49;
  if (fVar49 < 0.0) {
    fVar49 = (this->WindParameters).WindAmplitude;
  }
  cVar8 = *(char *)((longlong)&this_00->_padding_ + 6);
  local_298 = '\0';
  if ((cVar8 != '\0') && ((cVar8 != '\x01' || ((this_00->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x1a6;
      local_1a8 = 0x54d978a0;
      uStack_1a4 = 1;
      ::Desc._padding_._0_4_ = 0x54d978a0;
      ::Desc._padding_._4_4_ = uStack_1ac;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_DynamicWind;
      ::Desc._padding_ = (longlong)u_DynamicWind;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FDynamicWindTransformProvider::ProvideTransforms'::__l40::<lambda_2>::operator()<>'
             ::__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_1f0._Myfirst._Val = &::Desc;
    local_2a8.State = (FRDGScopeState *)this_00;
    this_02 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&this_00->_padding_,(FRDGScope **)this_00);
    this_00->_padding_ = (longlong)this_02;
    uVar31 = (ulonglong)(this_02->Impl).Impl.TypeIndex;
    local_2a8.Scope = this_02;
    if ((3 < uVar31) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar21)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar31])(&this_02->Impl);
    FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_>
              ((FRDGScope_RHI *)&this_02->Impl,(FRDGScopeState *)this_00,&local_1f0);
    (this_02->Impl).Impl.TypeIndex = '\x02';
    if (*(char *)((longlong)&this_00->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_02,(FRHIComputeCommandList *)this_00->_padding_,false);
      FRDGScope::BeginGPU(this_02,(FRHIComputeCommandList *)this_00->_padding_);
    }
    local_298 = '\x01';
  }
  pFVar32 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x70,0x10);
  if (pFVar32 == (FRHITexture *)0x0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    pFVar32 = pFVar48;
    if (bVar21) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    *(FNameEntryId *)&pFVar32->_padding_ = 0;
    *(uint *)((longlong)&pFVar32->_padding_ + 4) = 0;
    pFVar32->_padding_ =
         (longlong)&___7__TObject_VFParameters_FDynamicWindEvalCS___FRDGAllocator__6B_;
    pFVar32->_padding_ = 0;
    pFVar32->_padding_ = 0;
    pFVar32->_padding_ = 0;
    pFVar32->_padding_ = 0;
    pFVar32->_padding_ = 0;
    pFVar32->_padding_ = 0;
    *(undefined4 *)&pFVar32->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar32->_padding_ + 4) = 0x3f800000;
  }
  local_318 = pFVar32;
  if ((((FRHITexture **)this_00->_padding_ <= &local_318) &&
      (&local_318 < (FRHITexture **)this_00->_padding_ + *(int *)((longlong)&this_00->_padding_ + 4)
      )) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar23 = (int)this_00->_padding_;
  piVar45 = (int *)((longlong)&this_00->_padding_ + 4);
  if (iVar23 == *piVar45) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&this_00->_padding_,piVar45);
  }
  *(int *)&this_00->_padding_ = iVar23 + 1;
  local_278._padding_._4_4_ = 0;
  local_278._padding_._0_4_ = 0xffffffff;
  local_278._padding_ = 0;
  *(FRHITexture **)(this_00->_padding_ + (longlong)iVar23 * 8) = local_318;
  local_278.Buffer = (FRDGBuffer *)local_310;
  local_278._padding_._0_1_ = 0;
  if ((((FRDGBufferDesc *)((longlong)local_310 + 0x80))->Usage & DrawIndirect) != None) {
    local_278._padding_._0_1_ = 0x1c;
  }
  pFVar33 = FRDGBuilder::CreateSRV(this_00,&local_278);
  *(FRDGBufferSRV **)&((FName *)&pFVar32->_padding_)->ComparisonIndex = pFVar33;
  local_258.Buffer = local_280;
  local_258._padding_._4_4_ = 0;
  local_258._padding_._0_4_ = 0xffffffff;
  local_258._padding_ = 0;
  local_258._padding_._0_1_ = 0;
  if (((local_280->Desc).Usage & DrawIndirect) != None) {
    local_258._padding_._0_1_ = 0x1c;
  }
  pFVar33 = FRDGBuilder::CreateSRV(this_00,&local_258);
  pFVar32->_padding_ = (longlong)pFVar33;
  local_238.Buffer = local_330;
  local_238._padding_._4_4_ = 0;
  local_238._padding_._0_4_ = 0xffffffff;
  local_238._padding_ = 0;
  local_238._padding_._0_1_ = 0;
  if (((local_330->Desc).Usage & DrawIndirect) != None) {
    local_238._padding_._0_1_ = 0x1c;
  }
  pFVar33 = FRDGBuilder::CreateSRV(this_00,&local_238);
  pFVar32->_padding_ = (longlong)pFVar33;
  local_2e0.Buffer = param_1->TransformBuffer;
  local_2e0._padding_._2_1_ = 0;
  local_2e0._padding_._1_1_ = 0;
  local_2e0._padding_._0_1_ = 0;
  if ((((local_2e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_2e0._padding_._0_1_ = 0x1c;
  }
  FRDGUserValidation::ValidateCreateUAV(&this_00->UserValidation,&local_2e0);
  pFVar19 = local_2e0.Buffer;
  pFVar34 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x48,8);
  lVar30 = pFVar19->_padding_;
  *(byte *)&pFVar34->_padding_ = (byte)pFVar34->_padding_ & 0xfe;
  pFVar34->_padding_ = lVar30;
  pFVar34->_padding_ = 0;
  *(undefined8 *)((longlong)&pFVar34->_padding_ + 4) = 0xffffffffffffffff;
  piVar45 = &(this_00->Views).Array.ArrayMax;
  *(undefined1 *)&pFVar34->_padding_ = 2;
  *(undefined1 *)&pFVar34->_padding_ = 0;
  pFVar34->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
  (pFVar34->Desc)._padding_ =
       CONCAT53(local_2e0._padding_._3_5_,
                CONCAT12(local_2e0._padding_._2_1_,
                         CONCAT11(local_2e0._padding_._1_1_,(undefined1)local_2e0._padding_)));
  (pFVar34->Desc).Buffer = local_2e0.Buffer;
  iVar23 = (this_00->Views).Array.ArrayNum;
  if (iVar23 == *piVar45) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                       (0x808,(ForElementType<FRDGView_*> *)&this_00->Views,piVar45);
  }
  (this_00->Views).Array.ArrayNum = iVar23 + 1;
  (this_00->Views).Array.AllocatorInstance.Data[iVar23] = (FRDGView *)pFVar34;
  *(int *)((longlong)&pFVar34->_padding_ + 4) = (this_00->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUAV(&this_00->UserValidation,pFVar34);
  local_2f8._padding_._0_2_ = 0;
  local_2f8._padding_._3_1_ = 0;
  local_2f8._padding_._4_4_ = 0;
  pFVar32->_padding_ = (longlong)pFVar34;
  local_2f8._padding_._2_1_ = (local_308->Desc).field_0x30;
  cVar8 = (local_308->Desc).field_0x32;
  local_2f8._padding_._0_1_ = 0;
  local_2f8._padding_._2_1_ = 0;
  local_2f8.Texture = local_308;
  if ((cVar8 == '\x01') || (cVar8 == '\x04')) {
    local_2f8._padding_._4_4_ = (uint)*(ushort *)&(local_308->Desc).field_0x2e << 0x10;
  }
  FRDGUserValidation::ValidateCreateSRV(&this_00->UserValidation,&local_2f8);
  pFVar18 = local_2f8.Texture;
  pFVar35 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x48,8);
  pFVar35 = FRDGTextureSRV::FRDGTextureSRV(pFVar35,(wchar_t *)pFVar18->_padding_,&local_2f8);
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
            (&this_00->Views,(FRDGView *)pFVar35);
  FRDGUserValidation::ValidateCreateSRV(&this_00->UserValidation,pFVar35);
  pFVar32->_padding_ = (longlong)pFVar35;
  pFVar32->_padding_ = (longlong)this_04.Reference;
  lVar30 = (**(code **)(*(longlong *)this->Scene + 0x410))();
  *(float *)&pFVar32->_padding_ = (float)*(double *)(lVar30 + 0x8f8);
  lVar30 = (**(code **)(*(longlong *)this->Scene + 0x410))();
  uVar9 = *(undefined4 *)(lVar30 + 0x91c);
  *(float *)&pFVar32->_padding_ = fVar51;
  *(float *)((longlong)&pFVar32->_padding_ + 4) = fVar49;
  *(undefined4 *)((longlong)&pFVar32->_padding_ + 4) = uVar9;
  dVar6 = (this->WindParameters).WindDirection.field0_0x0._s_0.Y;
  dVar7 = (this->WindParameters).WindDirection.field0_0x0._s_0.Z;
  *(float *)&pFVar32->_padding_ = (float)(this->WindParameters).WindDirection.field0_0x0._s_0.X;
  *(float *)((longlong)&pFVar32->_padding_ + 4) = (float)dVar6;
  *(float *)&pFVar32->_padding_ = (float)dVar7;
  lVar30 = *(longlong *)((longlong)&(this->WindParameters).DebugModulation.field0_0x0 + 8);
  pFVar32->_padding_ = *(longlong *)&(this->WindParameters).DebugModulation.field0_0x0;
  pFVar32->_padding_ = lVar30;
  pTVar17 = CVarDynamicWindUseSine.Ref;
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_14da52045:
    pFVar38 = pFVar48;
  }
  else {
    bVar21 = IsInGameThread();
    pFVar38 = (FRHITexture *)&DAT_00000001;
    if (bVar21) goto LAB_14da52045;
  }
  bVar21 = pTVar17->ShadowedValue[(longlong)&pFVar38->_padding_];
  local_308 = (FRDGTexture *)
              GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
  pFVar36 = (FShaderType *)FDynamicWindEvalCS::GetStaticType();
  FGlobalShaderMap::GetShader
            ((FGlobalShaderMap *)local_308,&local_208,pFVar36,(uint)(bVar21 != false));
  if (local_208.ShaderContent == (FShader *)0x0) {
    this_03 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1f8);
    pFVar37 = ::FName::ToString((FName *)this_03,&local_1e0);
    if ((pFVar37->Data).ArrayNum != 0) {
      local_2d0 = (pFVar37->Data).AllocatorInstance.Data;
    }
    FDynamicWindEvalCS::GetStaticType();
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (bVar21) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FDynamicWindEvalCS::GetStaticType();
  pTVar17 = CVarDynamicWindPreferAsyncCompute.Ref;
  local_1c8.ShaderContent = (FDynamicWindEvalCS *)local_208.ShaderContent;
  local_1c8.ShaderMap = local_208.ShaderMap;
  if (GRHIGlobals.SupportsEfficientAsyncCompute == false) goto LAB_14da52165;
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_14da52156:
    pFVar38 = pFVar48;
  }
  else {
    bVar21 = IsInGameThread();
    pFVar38 = (FRHITexture *)&DAT_00000001;
    if (bVar21) goto LAB_14da52156;
  }
  if (pTVar17->ShadowedValue[(longlong)&pFVar38->_padding_] != false) {
    bVar13 = true;
  }
LAB_14da52165:
  pFVar39 = FRDGEventName::FRDGEventName(&local_198,L"DynamicWind Simulate [BlockCount: %d]");
  pFVar40 = FDynamicWindEvalCS::FParameters::FTypeInfo::GetStructMetadata();
  local_2b8._s_0.Y = 1;
  local_2b8._s_0.Z = 1;
  EVar47 = Compute;
  if (bVar13) {
    EVar47 = AsyncCompute;
  }
  local_2b8._s_0.X = uVar22;
  FComputeShaderUtils::AddPass<FDynamicWindEvalCS>
            (this_00,pFVar39,EVar47,&local_1c8,pFVar40,(FParameters *)&pFVar32->_padding_,
             (TIntVector3<int> *)&local_2b8._s_0);
  if (local_198.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_298 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2a8);
  }
  uVar22 = (**(code **)(*(longlong *)this->Scene + 0x4e8))();
  this->LastSimulatedFrameNumber = (ulonglong)uVar22;
  if ((FRHITexture *)this_04.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_04.Reference);
  }
  if (pFVar43 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar43);
  }
  return;
}

// RegisterSceneProxy @ 14da52390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDynamicWindTransformProvider::RegisterSceneProxy
          (FDynamicWindTransformProvider *this,FSkinnedSceneProxy *param_1)

{
  int *piVar1;
  TUniquePtr<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>,TDefaultDelete<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>_>_>
  *pTVar2;
  FDynamicWindBoneData *pFVar3;
  uint uVar4;
  USkinnedAsset *pUVar5;
  TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *pTVar6;
  code *pcVar7;
  ulong64 uVar8;
  FReferenceSkeleton *this_00;
  bool bVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  longlong lVar13;
  UDynamicWindSkeletalData *this_01;
  TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *pTVar14;
  undefined8 *puVar15;
  FString *pFVar16;
  FScriptContainerElement FVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  undefined1 *puVar21;
  wchar_t *pwVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  uint *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_258 [32];
  ulong64 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  ulong64 local_208;
  TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *local_200;
  uint local_1f8;
  float fStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  uint uStack_1cc;
  undefined8 *local_1c8;
  FReferenceSkeleton *local_1c0;
  TArrayView<UE::HLSL::FDynamicWindBoneData,int> local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  FString local_190;
  FString local_180;
  FString local_170 [2];
  double local_150;
  double local_138;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pUVar5 = param_1->SkinnedAsset;
  if (pUVar5 == (USkinnedAsset *)0x0) {
    pFVar16 = GetTypeName<USkeletalMesh>(&local_190);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar22);
  }
  pUVar12 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  iVar10 = (int)pUVar12->_padding_;
  if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar10) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
      &pUVar12->_padding_)) {
    pFVar16 = GetTypeName<USkeletalMesh>(&local_180);
    pwVar22 = L"";
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    pFVar16 = GetFullNameForCastLogError<USkinnedAsset>(local_170,pUVar5);
    if ((pFVar16->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar22,pwVar24);
  }
  lVar13 = (**(code **)(*(longlong *)pUVar5 + 0x408))(pUVar5);
  local_1c0 = (FReferenceSkeleton *)(lVar13 + 0x48);
  uVar4 = *(uint *)(lVar13 + 0x70);
  this_01 = IInterface_AssetUserData::GetAssetUserData<UDynamicWindSkeletalData>
                      ((IInterface_AssetUserData *)&pUVar5[1].field_0x8);
  if (this_01 == (UDynamicWindSkeletalData *)0x0) {
    return;
  }
  local_218 = *(undefined8 *)(lVar13 + 0x160);
  uStack_210 = *(undefined8 *)(lVar13 + 0x168);
  local_208 = this_01->SkeletalDataHash;
  local_220 = CityHash64((char *)&local_218,0x10);
  if (*(int *)&(this->SkeletonLookup).field_0x8 != *(int *)&(this->SkeletonLookup).field_0x34) {
    puVar19 = *(undefined1 **)&(this->SkeletonLookup).field_0x40;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->SkeletonLookup).field_0x38;
    }
    iVar10 = *(int *)(puVar19 +
                     ((ulonglong)(*(int *)&(this->SkeletonLookup).field_0x48 - 1) &
                     local_220 & 0xffffffff) * 4);
    if (iVar10 != -1) {
      lVar23 = *(longlong *)&this->SkeletonLookup;
      do {
        lVar20 = (longlong)iVar10 * 0x40;
        if (((uStack_210._4_4_ == *(int *)(lVar20 + 0xc + lVar23) &&
             (int)uStack_210 == *(int *)(lVar20 + 8 + lVar23)) &&
            local_218._4_4_ == *(int *)(lVar20 + 4 + lVar23)) &&
            (int)local_218 == *(int *)(lVar20 + lVar23)) {
          if ((iVar10 != -1) && (lVar23 = (longlong)iVar10 * 0x40 + lVar23, lVar23 != 0))
          goto LAB_14da52552;
          break;
        }
        iVar10 = *(int *)(lVar20 + 0x38 + lVar23);
      } while (iVar10 != -1);
    }
  }
  local_1c8 = &local_218;
  TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            ((TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
              *)&this->SkeletonLookup,(uint)&local_220,
             (TKeyInitializer<FGuid_const_&> *)(local_220 & 0xffffffff),(bool *)&local_1c8);
  lVar23 = (longlong)(int)local_220 * 0x40 + *(longlong *)&this->SkeletonLookup;
LAB_14da52552:
  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
  if (*(int *)(lVar23 + 0x1c) == 1) {
    iVar10 = FSpanAllocator::Allocate(&this->BoneDataAllocator,uVar4);
    *(int *)(lVar23 + 0x28) = iVar10;
    *(uint *)(lVar23 + 0x18) = uVar4;
    *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar13 + 0x18);
  }
  else {
    if ((*(int *)(lVar23 + 0x28) == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SkeletonEntry.Data.BoneDataOffset != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\DynamicWind\\Source\\DynamicWind\\Private\\DynamicWindProvider.cpp"
                           ,0xa7,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(uint *)(lVar23 + 0x18) != uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SkeletonEntry.NumBones == NumBonesInSkeleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\DynamicWind\\Source\\DynamicWind\\Private\\DynamicWindProvider.cpp"
                           ,0xa8,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(ulong64 *)(lVar23 + 0x10) == local_208) {
      return;
    }
  }
  uVar8 = local_208;
  pTVar2 = &this->BoneDataUploader;
  if (pTVar2->Ptr ==
      (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
       *)0x0) {
    pTVar14 = ::operator_new(0x30);
    if (pTVar14 ==
        (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
         *)0x0) {
      pTVar14 = (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                 *)0x0;
    }
    else {
      pTVar14->UploadDataProxy = (FUploadData *)0x0;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TBufferScatterUploader_UFDynamicWindBoneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__6B_
      ;
      piVar1 = &(pTVar14->UploadData).ScatterOffsets.ArrayMax;
      (pTVar14->UploadData).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar14->UploadData).Values.ArrayNum = 0;
      (pTVar14->UploadData).Values.ArrayMax = 0;
      (pTVar14->UploadData).ScatterOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar14->UploadData).ScatterOffsets.ArrayNum = 0;
      (pTVar14->UploadData).ScatterOffsets.ArrayMax = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(pTVar14->UploadData).ScatterOffsets.AllocatorInstance,
                   (pTVar14->UploadData).ScatterOffsets.ArrayNum,piVar1);
      }
    }
    if (pTVar2 == (TUniquePtr<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>,TDefaultDelete<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>_>_>
                   *)&local_200) {
      local_200 = pTVar14;
      if (pTVar14 ==
          (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           *)0x0) goto LAB_14da52696;
      puVar15 = (undefined8 *)pTVar14->_padding_;
    }
    else {
      pTVar6 = pTVar2->Ptr;
      pTVar2->Ptr = pTVar14;
      local_200 = (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                   *)0x0;
      if (pTVar6 == (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                     *)0x0) goto LAB_14da52696;
      puVar15 = (undefined8 *)pTVar6->_padding_;
      pTVar14 = pTVar6;
    }
    (*(code *)*puVar15)(pTVar14,1);
  }
LAB_14da52696:
  (**(code **)(*(longlong *)pUVar5 + 0x3e0))(pUVar5);
  *(ulong64 *)(lVar23 + 0x10) = uVar8;
  uVar11 = (this_01->SimulationGroups).ArrayNum - 1;
  uVar18 = 0;
  if (0 < (int)uVar11) {
    uVar18 = uVar11;
  }
  *(uint *)(lVar23 + 0x34) =
       *(uint *)(lVar23 + 0x34) ^ (uVar18 ^ *(uint *)(lVar23 + 0x34)) & 0x7fffffff;
  *(float *)(lVar23 + 0x2c) = (float)(local_150 + local_138);
  *(float *)(lVar23 + 0x30) = this_01->GustAttenuation;
  *(uint *)(lVar23 + 0x34) = (uint)this_01->bIsGroundCover << 0x1f | uVar18 & 0x7fffffff;
  UE::RendererPrivateUtils::Implementation::
  TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  ::AddMultiple_GetRef((this->BoneDataUploader).Ptr,&local_1b8,*(int *)(lVar23 + 0x28),uVar4);
  this_00 = local_1c0;
  uVar18 = 0;
  if (uVar4 == 0) {
    return;
  }
LAB_14da52760:
  uVar11 = 0;
  if ((int)uVar18 < (this_00->FinalRefBoneInfo).ArrayNum) {
    uVar11 = ~uVar18 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)((this_00->FinalRefBoneInfo).AllocatorInstance.Data +
                    (longlong)(int)uVar18 * 0xc + 8);
  FReferenceSkeleton::GetBoneAbsoluteTransform(this_00,&local_128,uVar18);
  local_198 = local_128.Translation.ZW.m128d_f64[0];
  local_1a8 = local_128.Translation.XY.m128d_f64[0];
  dStack_1a0 = local_128.Translation.XY.m128d_f64[1];
  local_1f8 = 0xffff;
  if (uVar11 < 0xffff) {
    local_1f8 = uVar11;
  }
  fVar26 = (float)local_128.Translation.XY.m128d_f64[0];
  fVar29 = (float)local_128.Rotation.XY.m128d_f64[0];
  fVar31 = (float)local_128.Rotation.ZW.m128d_f64[0];
  fVar27 = (float)local_128.Translation.XY.m128d_f64[1];
  fVar28 = (float)local_128.Translation.ZW.m128d_f64[0];
  fVar30 = (float)local_128.Rotation.XY.m128d_f64[1];
  fVar32 = (float)local_128.Rotation.ZW.m128d_f64[1];
  fStack_1f4 = UDynamicWindSkeletalData::GetBoneInfluence(this_01,uVar18);
  iStack_1f0 = UDynamicWindSkeletalData::GetBoneSimulationGroupIndex(this_01,uVar18);
  if (*(int *)&(this_01->ExtraBonesData).field_0x8 != *(int *)&(this_01->ExtraBonesData).field_0x34)
  {
    puVar19 = *(undefined1 **)&(this_01->ExtraBonesData).field_0x40;
    puVar21 = &(this_01->ExtraBonesData).field_0x38;
    if (puVar19 != (undefined1 *)0x0) {
      puVar21 = puVar19;
    }
    iVar10 = *(int *)(puVar21 +
                     (ulonglong)(*(int *)&(this_01->ExtraBonesData).field_0x48 - 1U & uVar18) * 4);
    if (iVar10 != -1) {
      lVar13 = *(longlong *)&this_01->ExtraBonesData;
      do {
        if (*(uint *)(lVar13 + (longlong)iVar10 * 0x14) == uVar18) {
          if ((((iVar10 != -1) && (lVar13 = lVar13 + (longlong)iVar10 * 0x14, lVar13 != 0)) &&
              (puVar25 = (uint *)(lVar13 + 4), puVar25 != (uint *)0x0)) &&
             (uVar11 = *puVar25,
             *(int *)&(this_01->BoneChains).field_0x8 != *(int *)&(this_01->BoneChains).field_0x34))
          {
            puVar19 = *(undefined1 **)&(this_01->BoneChains).field_0x40;
            puVar21 = &(this_01->BoneChains).field_0x38;
            if (puVar19 != (undefined1 *)0x0) {
              puVar21 = puVar19;
            }
            iVar10 = *(int *)(puVar21 +
                             (ulonglong)(*(int *)&(this_01->BoneChains).field_0x48 - 1U & uVar11) *
                             4);
            if (iVar10 != -1) {
              lVar13 = *(longlong *)&this_01->BoneChains;
              goto LAB_14da52ac0;
            }
          }
          break;
        }
        iVar10 = *(int *)(lVar13 + 0xc + (longlong)iVar10 * 0x14);
      } while (iVar10 != -1);
    }
  }
  goto LAB_14da528bb;
  while (iVar10 = *(int *)(lVar13 + 0xc + (longlong)iVar10 * 0x14), iVar10 != -1) {
LAB_14da52ac0:
    if (*(uint *)(lVar13 + (longlong)iVar10 * 0x14) == uVar11) {
      if (((iVar10 != -1) && (lVar13 = lVar13 + (longlong)iVar10 * 0x14, lVar13 != 0)) &&
         (lVar13 != -4)) {
        uStack_1ec = *(undefined4 *)(lVar13 + 8);
        goto LAB_14da528bf;
      }
      break;
    }
  }
LAB_14da528bb:
  uStack_1ec = 0;
LAB_14da528bf:
  local_1e8 = fVar29;
  fStack_1e4 = fVar30;
  fStack_1e0 = fVar31;
  fStack_1dc = fVar32;
  local_1d8 = fVar26;
  fStack_1d4 = fVar27;
  fStack_1d0 = fVar28;
  if (*(int *)&(this_01->ExtraBonesData).field_0x8 != *(int *)&(this_01->ExtraBonesData).field_0x34)
  {
    puVar19 = *(undefined1 **)&(this_01->ExtraBonesData).field_0x40;
    puVar21 = &(this_01->ExtraBonesData).field_0x38;
    if (puVar19 != (undefined1 *)0x0) {
      puVar21 = puVar19;
    }
    iVar10 = *(int *)(puVar21 +
                     (ulonglong)(*(int *)&(this_01->ExtraBonesData).field_0x48 - 1U & uVar18) * 4);
    if (iVar10 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this_01->ExtraBonesData + (longlong)iVar10 * 0x14) == uVar18) {
          iVar10 = UDynamicWindSkeletalData::GetBoneSimulationGroupIndex(this_01,uVar18);
          if ((-1 < iVar10) && (iVar10 < (this_01->SimulationGroups).ArrayNum)) {
            if (((this_01->SimulationGroups).ArrayNum <= iVar10) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar17 = (this_01->SimulationGroups).AllocatorInstance.Data
                     [(longlong)iVar10 * 0x18 + 0x14];
            goto LAB_14da5294a;
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)&this_01->ExtraBonesData + 0xc + (longlong)iVar10 * 0x14);
      } while (iVar10 != -1);
    }
  }
  FVar17 = (FScriptContainerElement)0x0;
LAB_14da5294a:
  uStack_1cc = (uint)(FVar17 != (FScriptContainerElement)0x0);
  uVar11 = 0;
  if ((int)uVar18 < local_1b8.ArrayNum) {
    uVar11 = ~uVar18 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = uVar18 + 1;
  pFVar3 = local_1b8.DataPtr + (int)uVar18;
  pFVar3->ParentBoneIndex = local_1f8;
  pFVar3->Influence = fStack_1f4;
  pFVar3->SimulationGroupIndex = iStack_1f0;
  pFVar3->BoneChainLength = (float)uStack_1ec;
  *(ulonglong *)&local_1b8.DataPtr[(int)uVar18].BindPoseRotation.field0_0x0 =
       CONCAT44(fStack_1e4,local_1e8);
  *(ulonglong *)((longlong)&local_1b8.DataPtr[(int)uVar18].BindPoseRotation.field0_0x0 + 8) =
       CONCAT44(fStack_1dc,fStack_1e0);
  *(ulonglong *)&local_1b8.DataPtr[(int)uVar18].BindPosePosition.field0_0x0 =
       CONCAT44(fStack_1d4,local_1d8);
  *(ulonglong *)((longlong)&local_1b8.DataPtr[(int)uVar18].BindPosePosition.field0_0x0 + 8) =
       CONCAT44(uStack_1cc,fStack_1d0);
  uVar18 = uVar11;
  if (uVar4 <= uVar11) {
    return;
  }
  goto LAB_14da52760;
}

// UnregisterSceneProxy @ 14da53d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDynamicWindTransformProvider::UnregisterSceneProxy
          (FDynamicWindTransformProvider *this,FSkinnedSceneProxy *param_1)

{
  int iVar1;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  longlong lVar7;
  ulong64 uVar8;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar9;
  undefined1 *puVar10;
  int *piVar11;
  FSetElementId FVar12;
  USkinnedAsset *pUVar13;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar14;
  undefined4 local_38;
  int iStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pUVar13 = param_1->SkinnedAsset;
  if (pUVar13 != (USkinnedAsset *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14da53dac;
  }
  pUVar13 = (USkinnedAsset *)0x0;
LAB_14da53dac:
  lVar7 = (**(code **)(*(longlong *)pUVar13 + 0x400))(pUVar13);
  local_30 = *(undefined8 *)(lVar7 + 0x160);
  uStack_28 = *(undefined8 *)(lVar7 + 0x168);
  uVar8 = CityHash64((char *)&local_30,0x10);
  if (*(int *)&(this->SkeletonLookup).field_0x8 != *(int *)&(this->SkeletonLookup).field_0x34) {
    puVar10 = *(undefined1 **)&(this->SkeletonLookup).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SkeletonLookup).field_0x38;
    }
    FVar12.Index = *(int *)(puVar10 +
                           ((ulonglong)(*(int *)&(this->SkeletonLookup).field_0x48 - 1) &
                           uVar8 & 0xffffffff) * 4);
    if (FVar12.Index != -1) {
      do {
        piVar11 = (int *)((longlong)FVar12.Index * 0x40 + *(longlong *)&this->SkeletonLookup);
        if (((local_30._4_4_ == piVar11[1] && uStack_28._4_4_ == piVar11[3]) &&
            (int)uStack_28 == piVar11[2]) && (int)local_30 == *piVar11) goto LAB_14da53e55;
        FVar12.Index = piVar11[0xe];
      } while (FVar12.Index != -1);
    }
  }
  FVar12.Index = -1;
LAB_14da53e55:
  bVar4 = TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
          ::IsValidId((TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
                       *)&this->SkeletonLookup,FVar12);
  if (bVar4) {
    lVar7 = (longlong)FVar12.Index * 0x40 + *(longlong *)&this->SkeletonLookup;
    piVar11 = (int *)(lVar7 + 0x1c);
    *piVar11 = *piVar11 + -1;
    if (*piVar11 == 0) {
      local_38 = *(undefined4 *)(lVar7 + 0x28);
      FVar14 = (ForElementType<FSpanAllocator::FLinearAllocation>)
               &(this->BoneDataAllocator).PendingFreeSpans;
      iVar1 = *(int *)(lVar7 + 0x18);
      FVar2 = (this->BoneDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
      FVar9 = FVar2;
      if (FVar2 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar9 = FVar14;
      }
      iStack_34 = iVar1;
      if ((ulonglong)FVar9 <= &local_38) {
        FVar9 = FVar14;
        if (FVar2 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FVar9 = FVar2;
        }
        if ((&local_38 <
             (undefined4 *)
             ((longlong)FVar9 + (longlong)(this->BoneDataAllocator).PendingFreeSpans.ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (this->BoneDataAllocator).PendingFreeSpans.ArrayNum;
      piVar11 = &(this->BoneDataAllocator).PendingFreeSpans.ArrayMax;
      if (iVar5 == *piVar11) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                          (0x408,(ForElementType<FSpanAllocator::FLinearAllocation> *)FVar14,piVar11
                          );
      }
      (this->BoneDataAllocator).PendingFreeSpans.ArrayNum = iVar5 + 1;
      FVar2 = (this->BoneDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar14 = FVar2;
      }
      *(ulonglong *)((longlong)FVar14 + (longlong)iVar5 * 8) = CONCAT44(iStack_34,local_38);
      (this->BoneDataAllocator).CurrentSize = (this->BoneDataAllocator).CurrentSize - iVar1;
      TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,FDefaultSetAllocator>
                *)&this->SkeletonLookup,FVar12);
    }
  }
  return;
}

// UpdateParameters @ 14da540b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FDynamicWindTransformProvider::UpdateParameters
          (FDynamicWindTransformProvider *this,FDynamicWindParameters *param_1)

{
  FDynamicWindParameters::operator=(&this->WindParameters,param_1);
  return -1;
}

