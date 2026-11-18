// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 24

// Construct<FDynamicWindExtraBoneData> @ 14da49580

void __cdecl UE::CoreUObject::Private::Construct<FDynamicWindExtraBoneData>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FDynamicWindExtraBoneData> @ 14da495a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDynamicWindExtraBoneData>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FDynamicWindExtraBoneData> @ 14da495c0

void __cdecl UE::CoreUObject::Private::Destruct<FDynamicWindExtraBoneData>(void *param_1)

{
  return;
}

// Copy<FDynamicWindExtraBoneData> @ 14da495d0

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicWindExtraBoneData>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDynamicWindBoneChainData> @ 14da49600

void __cdecl UE::CoreUObject::Private::Construct<FDynamicWindBoneChainData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FDynamicWindBoneChainData> @ 14da49610

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDynamicWindBoneChainData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FDynamicWindBoneChainData> @ 14da49620

void __cdecl UE::CoreUObject::Private::Destruct<FDynamicWindBoneChainData>(void *param_1)

{
  return;
}

// Copy<FDynamicWindBoneChainData> @ 14da49630

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicWindBoneChainData>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDynamicWindSimulationGroupBoneLookup> @ 14da49660

void __cdecl
UE::CoreUObject::Private::Construct<FDynamicWindSimulationGroupBoneLookup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// ConstructForTests<FDynamicWindSimulationGroupBoneLookup> @ 14da496a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDynamicWindSimulationGroupBoneLookup>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FDynamicWindSimulationGroupBoneLookup> @ 14da496e0

void __cdecl
UE::CoreUObject::Private::Destruct<FDynamicWindSimulationGroupBoneLookup>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FDynamicWindSimulationGroupBoneLookup> @ 14da49720

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicWindSimulationGroupBoneLookup>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  uint uVar5;
  undefined4 *_Dst;
  undefined4 *_Src;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      this = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(puVar4 + 2);
      *puVar4 = *puVar1;
      if (this != (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(puVar1 + 2)) {
        uVar2 = puVar1[0x14];
        uVar5 = uVar2;
        if (uVar2 < 2) {
          if (((ForAnyElementType *)(puVar4 + 0x12))->Data != (FScriptContainerElement *)0x0) {
            uVar5 = 0;
            goto LAB_14da497ab;
          }
        }
        else {
LAB_14da497ab:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)(puVar4 + 0x12),0,uVar5,4);
        }
        _Src = puVar1 + 0x10;
        if (*(undefined4 **)(puVar1 + 0x12) != (undefined4 *)0x0) {
          _Src = *(undefined4 **)(puVar1 + 0x12);
        }
        _Dst = puVar4 + 0x10;
        if (*(undefined4 **)(puVar4 + 0x12) != (undefined4 *)0x0) {
          _Dst = *(undefined4 **)(puVar4 + 0x12);
        }
        if (uVar2 != 0) {
          memcpy(_Dst,_Src,(longlong)(int)uVar2 << 2);
        }
        puVar4[0x14] = uVar2;
        iVar3 = puVar1[4];
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar3);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,(ForAnyElementType *)this,puVar4 + 4,puVar4 + 5);
        puVar4[0xe] = puVar1[0xe];
        puVar4[0xf] = puVar1[0xf];
        if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar4 + 6) !=
            (TBitArray<FDefaultBitArrayAllocator> *)(puVar1 + 6)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(puVar4 + 6),
                     (TBitArray<FDefaultBitArrayAllocator> *)(puVar1 + 6));
        }
        if (iVar3 != 0) {
          memcpy(*(void **)this,*(void **)(puVar1 + 2),(longlong)iVar3 * 0xc);
        }
      }
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0x16;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDynamicWindSimulationGroupData> @ 14da498b0

void __cdecl UE::CoreUObject::Private::Construct<FDynamicWindSimulationGroupData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FDynamicWindSimulationGroupData> @ 14da498d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDynamicWindSimulationGroupData>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FDynamicWindSimulationGroupData> @ 14da498f0

void __cdecl UE::CoreUObject::Private::Destruct<FDynamicWindSimulationGroupData>(void *param_1)

{
  return;
}

// Copy<FDynamicWindSimulationGroupData> @ 14da49900

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicWindSimulationGroupData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDynamicWindParameters> @ 14da49b40

void __cdecl UE::CoreUObject::Private::Construct<FDynamicWindParameters>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X
  ;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z
  ;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  return;
}

// ConstructForTests<FDynamicWindParameters> @ 14da49bb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDynamicWindParameters>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X
  ;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z
  ;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  return;
}

// Destruct<FDynamicWindParameters> @ 14da49c10

void __cdecl UE::CoreUObject::Private::Destruct<FDynamicWindParameters>(void *param_1)

{
  return;
}

// Copy<FDynamicWindParameters> @ 14da49c20

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicWindParameters>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_1;
  puVar4 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    puVar3[2] = puVar4[2];
    *(undefined4 *)(puVar3 + 3) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    puVar3[4] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    puVar3[5] = uVar2;
    puVar3[6] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)(puVar3 + 7) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)puVar3 + 0x3c) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x3c - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x40 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[8] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x58 - (longlong)param_1));
    puVar3[10] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x50 - (longlong)param_1));
    puVar3[0xb] = uVar2;
    puVar3 = puVar3 + 0xc;
    puVar4 = puVar4 + 0xc;
  }
  return true;
}

// DereferenceIfNecessary<FDynamicWindModule,FDynamicWindModule_*_&> @ 14da4b810

FDynamicWindModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FDynamicWindModule,FDynamicWindModule_*_&>
          (FDynamicWindModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FDynamicWindTransformProvider,FDynamicWindTransformProvider_*_&> @ 14da4b830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDynamicWindTransformProvider * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FDynamicWindTransformProvider,FDynamicWindTransformProvider_*_&>
          (FDynamicWindTransformProvider **param_1)

{
  return *param_1;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>_> @ 14da4c850

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>_> @ 14da4c8f0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

