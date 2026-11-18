// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// CloneDynamicState @ 147bcc3f0

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::CloneDynamicState(FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  FReplicationStateDescriptor *pFVar6;
  void *_Dst;
  uchar *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  
  plVar3 = (longlong *)param_2->Source;
  plVar4 = (longlong *)param_2->Target;
  lVar5 = param_2->_padding_;
  uVar1 = *(uint *)(plVar3 + 1);
  if (uVar1 == 0) {
    *plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 0;
  }
  else {
    _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                     (param_1,(ulonglong)uVar1 << 4,8);
    *plVar4 = (longlong)_Dst;
    *(uint *)(plVar4 + 1) = uVar1;
    memset(_Dst,0,(ulonglong)uVar1 << 4);
  }
  uVar1 = *(uint *)(plVar3 + 1);
  uVar10 = 0;
  if (uVar1 != 0) {
    do {
      puVar11 = (undefined8 *)(*plVar3 + (ulonglong)uVar10 * 0x10);
      puVar9 = (undefined8 *)(*plVar4 + (ulonglong)uVar10 * 0x10);
      iVar2 = *(int *)(puVar11 + 1);
      if (iVar2 - 1U < *(uint *)(lVar5 + 0x18)) {
        lVar8 = (ulonglong)(iVar2 - 1U) * 0x10 + *(longlong *)(lVar5 + 0x10);
        *(int *)(puVar9 + 1) = iVar2;
        if (lVar8 == 0) goto LAB_147bcc493;
        pFVar6 = *(FReplicationStateDescriptor **)(lVar8 + 8);
        puVar7 = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                           (param_1,(ulonglong)pFVar6->InternalSize,
                            (ulonglong)pFVar6->InternalAlignment);
        *puVar9 = puVar7;
        Net::Private::FPolymorphicStructNetSerializerInternal::CloneQuantizedState
                  (param_1,puVar7,(uchar *)*puVar11,pFVar6);
      }
      else {
        *(int *)(puVar9 + 1) = iVar2;
LAB_147bcc493:
        *puVar9 = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar1);
  }
  return;
}

// CloneDynamicState @ 147bcc510

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::CloneDynamicState(FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  FReplicationStateDescriptor *pFVar6;
  void *_Dst;
  uchar *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  
  plVar3 = (longlong *)param_2->Source;
  plVar4 = (longlong *)param_2->Target;
  lVar5 = param_2->_padding_;
  uVar1 = *(uint *)(plVar3 + 1);
  if (uVar1 == 0) {
    *plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 0;
  }
  else {
    _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                     (param_1,(ulonglong)uVar1 << 4,8);
    *plVar4 = (longlong)_Dst;
    *(uint *)(plVar4 + 1) = uVar1;
    memset(_Dst,0,(ulonglong)uVar1 << 4);
  }
  uVar1 = *(uint *)(plVar3 + 1);
  uVar10 = 0;
  if (uVar1 != 0) {
    do {
      puVar11 = (undefined8 *)(*plVar3 + (ulonglong)uVar10 * 0x10);
      puVar9 = (undefined8 *)(*plVar4 + (ulonglong)uVar10 * 0x10);
      iVar2 = *(int *)(puVar11 + 1);
      if (iVar2 - 1U < *(uint *)(lVar5 + 0x18)) {
        lVar8 = (ulonglong)(iVar2 - 1U) * 0x10 + *(longlong *)(lVar5 + 0x10);
        *(int *)(puVar9 + 1) = iVar2;
        if (lVar8 == 0) goto LAB_147bcc5b3;
        pFVar6 = *(FReplicationStateDescriptor **)(lVar8 + 8);
        puVar7 = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                           (param_1,(ulonglong)pFVar6->InternalSize,
                            (ulonglong)pFVar6->InternalAlignment);
        *puVar9 = puVar7;
        Net::Private::FPolymorphicStructNetSerializerInternal::CloneQuantizedState
                  (param_1,puVar7,(uchar *)*puVar11,pFVar6);
      }
      else {
        *(int *)(puVar9 + 1) = iVar2;
LAB_147bcc5b3:
        *puVar9 = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar1);
  }
  return;
}

// CollectNetReferences @ 147bccaa0

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::CollectNetReferences(FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  uint uVar1;
  longlong *plVar2;
  FNetReferenceCollector *pFVar3;
  longlong lVar4;
  FReplicationStateDescriptor *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  plVar2 = (longlong *)param_2->Source;
  pFVar3 = (FNetReferenceCollector *)param_2->Collector;
  uVar1 = *(uint *)(plVar2 + 1);
  if ((uVar1 != 0) && (lVar4 = param_2->_padding_, (*(byte *)(lVar4 + 0x20) & 4) != 0)) {
    uVar8 = 0;
    do {
      puVar9 = (undefined8 *)((ulonglong)uVar8 * 0x10 + *plVar2);
      uVar6 = *(int *)(puVar9 + 1) - 1;
      if ((((uVar6 < *(uint *)(lVar4 + 0x18)) &&
           (lVar7 = *(longlong *)(lVar4 + 0x10) + (ulonglong)uVar6 * 0x10, lVar7 != 0)) &&
          (pFVar5 = *(FReplicationStateDescriptor **)(lVar7 + 8),
          pFVar5 != (FReplicationStateDescriptor *)0x0)) &&
         ((pFVar5->Traits & HasObjectReference) != None)) {
        Net::Private::FPolymorphicStructNetSerializerInternal::CollectReferences
                  (param_1,pFVar3,(FNetSerializerChangeMaskParam *)&param_2->_padding_,
                   (uchar *)*puVar9,pFVar5);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  return;
}

// CollectNetReferences @ 147bccb60

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::CollectNetReferences(FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  uint uVar1;
  longlong *plVar2;
  FNetReferenceCollector *pFVar3;
  longlong lVar4;
  FReplicationStateDescriptor *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  plVar2 = (longlong *)param_2->Source;
  pFVar3 = (FNetReferenceCollector *)param_2->Collector;
  uVar1 = *(uint *)(plVar2 + 1);
  if ((uVar1 != 0) && (lVar4 = param_2->_padding_, (*(byte *)(lVar4 + 0x20) & 4) != 0)) {
    uVar8 = 0;
    do {
      puVar9 = (undefined8 *)((ulonglong)uVar8 * 0x10 + *plVar2);
      uVar6 = *(int *)(puVar9 + 1) - 1;
      if ((((uVar6 < *(uint *)(lVar4 + 0x18)) &&
           (lVar7 = *(longlong *)(lVar4 + 0x10) + (ulonglong)uVar6 * 0x10, lVar7 != 0)) &&
          (pFVar5 = *(FReplicationStateDescriptor **)(lVar7 + 8),
          pFVar5 != (FReplicationStateDescriptor *)0x0)) &&
         ((pFVar5->Traits & HasObjectReference) != None)) {
        Net::Private::FPolymorphicStructNetSerializerInternal::CollectReferences
                  (param_1,pFVar3,(FNetSerializerChangeMaskParam *)&param_2->_padding_,
                   (uchar *)*puVar9,pFVar5);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  return;
}

// Dequantize @ 147bd4cf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulong64 uVar4;
  longlong lVar5;
  longlong lVar6;
  FReplicationStateDescriptor *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uchar *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  FSharedReferencer<1> FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uchar **ppuVar17;
  undefined8 *puVar18;
  uchar *local_58;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  
  plVar3 = (longlong *)param_2->Source;
  uVar4 = param_2->Target;
  lVar5 = param_2->_padding_;
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *)(uVar4 + 0x18),
             (int)plVar3[1],Default);
  iVar1 = *(int *)(uVar4 + 0x20);
  lVar6 = *(longlong *)(uVar4 + 0x18);
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar2 = *(uint *)(plVar3 + 1);
  uVar15 = 0;
  if (uVar2 != 0) {
    do {
      uVar14 = (uint)uVar15;
      puVar18 = (undefined8 *)(uVar15 * 0x10 + *plVar3);
      uVar10 = *(int *)(puVar18 + 1) - 1;
      if ((uVar10 < *(uint *)(lVar5 + 0x18)) &&
         (plVar16 = (longlong *)((ulonglong)uVar10 * 0x10 + *(longlong *)(lVar5 + 0x10)),
         plVar16 != (longlong *)0x0)) {
        pFVar7 = (FReplicationStateDescriptor *)plVar16[1];
        plVar16 = (longlong *)*plVar16;
        uVar10 = (uint)*(short *)((longlong)plVar16 + 0x5c);
        puVar11 = FMemory::Malloc((longlong)(int)((int)plVar16[0xb] + -1 + uVar10 & -uVar10),uVar10)
        ;
        (**(code **)(*plVar16 + 0x2f8))(plVar16,puVar11,1);
        FReplicationStateOperations::Dequantize(param_1,puVar11,(uchar *)*puVar18,pFVar7);
        FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        uVar10 = 0;
        if ((int)uVar14 < iVar1) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ppuVar17 = (uchar **)((longlong)(int)uVar14 * 0x10 + lVar6);
        local_58 = puVar11;
        pTVar12 = ::operator_new(0x18);
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFRootMotionSource__UFSourceArrayItemTypeDeleter___TPolymorphicArrayStructNetSerializerImpl_UFRootMotionSourceGroup__UFRootMotionSource___1_GetPendingRootMotionSources_FRootMotionSourceGroupNetSerializer_Net_UE__CA_AV__TArrayView_V__TSharedPtr_UFRootMotionSource___00__H__AEAU1__Z_1_SetPendingRootMotionSourcesNum_456_CAX0_K_Z_Net_UE___00_SharedPointerInternals__6B_
          ;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12[1]._padding_ = (longlong)puVar11;
          FVar13.ReferenceController = pTVar12;
        }
        local_50.ReferenceController = FVar13.ReferenceController;
        if (ppuVar17 != &local_58) {
          *ppuVar17 = puVar11;
          local_58 = (uchar *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(ppuVar17 + 1),&local_50);
          FVar13.ReferenceController = local_50.ReferenceController;
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar14 < iVar1) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar18 = (undefined8 *)((longlong)(int)uVar14 * 0x10 + lVar6);
        local_48 = 0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FVar13.ReferenceController = FStack_40.ReferenceController;
        if (puVar18 != &local_48) {
          *puVar18 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(puVar18 + 1),&FStack_40);
          FVar13.ReferenceController = FStack_40.ReferenceController;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
      uVar15 = (ulonglong)(uVar14 + 1);
    } while (uVar14 + 1 != uVar2);
  }
  return;
}

// Dequantize @ 147bd4f70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulong64 uVar4;
  longlong lVar5;
  longlong lVar6;
  FReplicationStateDescriptor *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uchar *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  FSharedReferencer<1> FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uchar **ppuVar17;
  undefined8 *puVar18;
  uchar *local_58;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  
  plVar3 = (longlong *)param_2->Source;
  uVar4 = param_2->Target;
  lVar5 = param_2->_padding_;
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_> *)(uVar4 + 8),
             (int)plVar3[1],Default);
  iVar1 = *(int *)(uVar4 + 0x10);
  lVar6 = *(longlong *)(uVar4 + 8);
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar2 = *(uint *)(plVar3 + 1);
  uVar15 = 0;
  if (uVar2 != 0) {
    do {
      uVar14 = (uint)uVar15;
      puVar18 = (undefined8 *)(uVar15 * 0x10 + *plVar3);
      uVar10 = *(int *)(puVar18 + 1) - 1;
      if ((uVar10 < *(uint *)(lVar5 + 0x18)) &&
         (plVar16 = (longlong *)((ulonglong)uVar10 * 0x10 + *(longlong *)(lVar5 + 0x10)),
         plVar16 != (longlong *)0x0)) {
        pFVar7 = (FReplicationStateDescriptor *)plVar16[1];
        plVar16 = (longlong *)*plVar16;
        uVar10 = (uint)*(short *)((longlong)plVar16 + 0x5c);
        puVar11 = FMemory::Malloc((longlong)(int)((int)plVar16[0xb] + -1 + uVar10 & -uVar10),uVar10)
        ;
        (**(code **)(*plVar16 + 0x2f8))(plVar16,puVar11,1);
        FReplicationStateOperations::Dequantize(param_1,puVar11,(uchar *)*puVar18,pFVar7);
        FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        uVar10 = 0;
        if ((int)uVar14 < iVar1) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ppuVar17 = (uchar **)((longlong)(int)uVar14 * 0x10 + lVar6);
        local_58 = puVar11;
        pTVar12 = ::operator_new(0x18);
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFRootMotionSource__UFSourceArrayItemTypeDeleter___TPolymorphicArrayStructNetSerializerImpl_UFRootMotionSourceGroup__UFRootMotionSource___1_GetRootMotionSources_FRootMotionSourceGroupNetSerializer_Net_UE__CA_AV__TArrayView_V__TSharedPtr_UFRootMotionSource___00__H__AEAU1__Z_1_SetRootMotionSourcesNum_456_CAX0_K_Z_Net_UE___00_SharedPointerInternals__6B_
          ;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12[1]._padding_ = (longlong)puVar11;
          FVar13.ReferenceController = pTVar12;
        }
        local_50.ReferenceController = FVar13.ReferenceController;
        if (ppuVar17 != &local_58) {
          *ppuVar17 = puVar11;
          local_58 = (uchar *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(ppuVar17 + 1),&local_50);
          FVar13.ReferenceController = local_50.ReferenceController;
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar14 < iVar1) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar18 = (undefined8 *)((longlong)(int)uVar14 * 0x10 + lVar6);
        local_48 = 0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FVar13.ReferenceController = FStack_40.ReferenceController;
        if (puVar18 != &local_48) {
          *puVar18 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(puVar18 + 1),&FStack_40);
          FVar13.ReferenceController = FStack_40.ReferenceController;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
      uVar15 = (ulonglong)(uVar14 + 1);
    } while (uVar14 + 1 != uVar2);
  }
  return;
}

// Deserialize @ 147bd5850

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  longlong *plVar1;
  FQuantizedArray *pFVar2;
  FPolymorphicArrayStructNetSerializerConfig *pFVar3;
  FNetBitStreamReader *this;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FReplicationStateDescriptor *pFVar5;
  FName FVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *_Dst;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  longlong lVar11;
  FQuantizedItem *pFVar12;
  FNetTraceCollector *pFVar13;
  ulonglong uVar14;
  
  pFVar2 = (FQuantizedArray *)param_2->Target;
  pFVar3 = (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_;
  this = param_1->BitStreamReader;
  uVar7 = FNetBitStreamReader::ReadBits(this,8);
  FVar6 = GNetError_BitStreamOverflow;
  if (this->OverflowBitCount != 0) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar6);
    return;
  }
  InternalFreeItemArray(param_1,pFVar2,pFVar3);
  InternalAllocateItemArray(param_1,pFVar2,uVar7);
  uVar7 = pFVar2->NumItems;
  uVar14 = 0;
  if (uVar7 != 0) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      uVar8 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar13 = param_1->TraceCollector;
      }
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        uVar8 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this->BufferBitPosition);
        if ((*(int *)(*plVar1 + 0x9d4c) <
             `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
          _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        uVar9 = FNetTrace::TraceName
                          (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::Element);
        FVar4 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar10 = FVar4;
        }
        *(uint *)((longlong)FVar10 + (ulonglong)uVar8 * 0x10) = uVar9;
      }
      pFVar12 = pFVar2->Items + uVar14;
      uVar9 = FNetBitStreamReader::ReadBits(this,1);
      if ((uVar9 & 1) != 0) {
        uVar9 = FNetBitStreamReader::ReadBits(this,5);
        if ((*(uint *)&pFVar3->field_0x18 <= uVar9 - 1) ||
           (lVar11 = (ulonglong)(uVar9 - 1) * 0x10 + *(longlong *)&pFVar3->field_0x10, lVar11 == 0))
        {
          InternalFreeItemArray(param_1,pFVar2,pFVar3);
          FVar6 = NetError_PolymorphicStructNetSerializer_InvalidStructType;
          FNetSerializationContext::SetBitStreamOverflow(param_1);
          FNetErrorContext::SetError(&param_1->ErrorContext,FVar6);
          if (uVar8 == 0xffffffff) {
            return;
          }
          FNetTrace::EndPacketContentEvent(pFVar13,uVar8,this->BufferBitPosition);
          return;
        }
        pFVar5 = *(FReplicationStateDescriptor **)(lVar11 + 8);
        _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                         (param_1,(ulonglong)pFVar5->InternalSize,
                          (ulonglong)pFVar5->InternalAlignment);
        pFVar12->StructData = _Dst;
        pFVar12->TypeIndex = uVar9;
        memset(_Dst,0,(ulonglong)pFVar5->InternalSize);
        FReplicationStateOperations::Deserialize(param_1,pFVar12->StructData,pFVar5);
      }
      if (uVar8 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar13,uVar8,this->BufferBitPosition);
      }
      uVar8 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar8;
    } while (uVar8 != uVar7);
  }
  return;
}

// Deserialize @ 147bd5ad0

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  longlong *plVar1;
  FQuantizedArray *pFVar2;
  FPolymorphicArrayStructNetSerializerConfig *pFVar3;
  FNetBitStreamReader *this;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FReplicationStateDescriptor *pFVar5;
  FName FVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *_Dst;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  longlong lVar11;
  FQuantizedItem *pFVar12;
  FNetTraceCollector *pFVar13;
  ulonglong uVar14;
  
  pFVar2 = (FQuantizedArray *)param_2->Target;
  pFVar3 = (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_;
  this = param_1->BitStreamReader;
  uVar7 = FNetBitStreamReader::ReadBits(this,8);
  FVar6 = GNetError_BitStreamOverflow;
  if (this->OverflowBitCount != 0) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar6);
    return;
  }
  InternalFreeItemArray(param_1,pFVar2,pFVar3);
  InternalAllocateItemArray(param_1,pFVar2,uVar7);
  uVar7 = pFVar2->NumItems;
  uVar14 = 0;
  if (uVar7 != 0) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      uVar8 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar13 = param_1->TraceCollector;
      }
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        uVar8 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this->BufferBitPosition);
        if ((*(int *)(*plVar1 + 0x9d4c) <
             `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
          _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        uVar9 = FNetTrace::TraceName
                          (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Deserialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeArgs_const&___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::Element);
        FVar4 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar10 = FVar4;
        }
        *(uint *)((longlong)FVar10 + (ulonglong)uVar8 * 0x10) = uVar9;
      }
      pFVar12 = pFVar2->Items + uVar14;
      uVar9 = FNetBitStreamReader::ReadBits(this,1);
      if ((uVar9 & 1) != 0) {
        uVar9 = FNetBitStreamReader::ReadBits(this,5);
        if ((*(uint *)&pFVar3->field_0x18 <= uVar9 - 1) ||
           (lVar11 = (ulonglong)(uVar9 - 1) * 0x10 + *(longlong *)&pFVar3->field_0x10, lVar11 == 0))
        {
          InternalFreeItemArray(param_1,pFVar2,pFVar3);
          FVar6 = NetError_PolymorphicStructNetSerializer_InvalidStructType;
          FNetSerializationContext::SetBitStreamOverflow(param_1);
          FNetErrorContext::SetError(&param_1->ErrorContext,FVar6);
          if (uVar8 == 0xffffffff) {
            return;
          }
          FNetTrace::EndPacketContentEvent(pFVar13,uVar8,this->BufferBitPosition);
          return;
        }
        pFVar5 = *(FReplicationStateDescriptor **)(lVar11 + 8);
        _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                         (param_1,(ulonglong)pFVar5->InternalSize,
                          (ulonglong)pFVar5->InternalAlignment);
        pFVar12->StructData = _Dst;
        pFVar12->TypeIndex = uVar9;
        memset(_Dst,0,(ulonglong)pFVar5->InternalSize);
        FReplicationStateOperations::Deserialize(param_1,pFVar12->StructData,pFVar5);
      }
      if (uVar8 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar13,uVar8,this->BufferBitPosition);
      }
      uVar8 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar8;
    } while (uVar8 != uVar7);
  }
  return;
}

// DeserializeDelta @ 147bd6420

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FPolymorphicArrayStructNetSerializerConfig *pFVar3;
  FQuantizedArray *pFVar4;
  FNetBitStreamReader *this;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FReplicationStateDescriptor *pFVar6;
  FName FVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *_Dst;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FNetTraceCollector *pFVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FQuantizedItem *pFVar17;
  FNetDeserializeDeltaArgs local_78;
  
  plVar2 = (longlong *)param_2->Prev;
  pFVar3 = (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_;
  pFVar4 = (FQuantizedArray *)param_2->_padding_;
  this = param_1->BitStreamReader;
  uVar16 = *(uint *)(plVar2 + 1);
  uVar8 = FNetBitStreamReader::ReadBits(this,1);
  uVar9 = uVar16;
  if (uVar8 == 0) {
    uVar9 = FNetBitStreamReader::ReadBits(this,8);
  }
  FVar7 = GNetError_BitStreamOverflow;
  if (this->OverflowBitCount == 0) {
    InternalFreeItemArray(param_1,pFVar4,pFVar3);
    InternalAllocateItemArray(param_1,pFVar4,uVar9);
    if (uVar16 != 0) {
      local_78._padding_ = param_2->_padding_;
      local_78._padding_ = param_2->_padding_;
      uVar15 = 0;
      local_78._padding_ = param_2->_padding_;
      local_78._padding_ = param_2->_padding_;
      local_78.Prev = param_2->Prev;
      uVar8 = uVar16;
      if (uVar9 < uVar16) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          uVar10 = 0xffffffff;
          pFVar13 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar13 = param_1->TraceCollector;
          }
          if (pFVar13 != (FNetTraceCollector *)0x0) {
            uVar10 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this->BufferBitPosition);
            if ((*(int *)(*plVar1 + 0x9d4c) <
                 `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
              ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            uVar11 = FNetTrace::TraceName
                               (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                ::__l2::Element);
            FVar5 = (pFVar13->Events).AllocatorInstance.SecondaryData;
            FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
            if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar12 = FVar5;
            }
            *(uint *)((longlong)FVar12 + (ulonglong)uVar10 * 0x10) = uVar11;
          }
          local_78._padding_ = (longlong)(pFVar4->Items + uVar15);
          local_78.Prev = *plVar2 + (ulonglong)uVar15 * 0x10;
          TPolymorphicStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,0>::
          DeserializeDelta(param_1,&local_78);
          if (uVar10 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar13,uVar10,this->BufferBitPosition);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar8);
      }
    }
    FVar7 = GNetError_BitStreamOverflow;
    if ((param_1->ErrorContext).Error == (FName)0x0) {
      if (this->OverflowBitCount == 0) {
        if (uVar16 < uVar9) {
          plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          do {
            uVar8 = 0xffffffff;
            pFVar13 = (FNetTraceCollector *)0x0;
            if (2 < GNetTraceRuntimeVerbosity) {
              pFVar13 = param_1->TraceCollector;
            }
            if (pFVar13 != (FNetTraceCollector *)0x0) {
              uVar8 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this->BufferBitPosition);
              if ((*(int *)(*plVar2 + 0x9d4c) <
                   `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                   ::__l2::_thread_safe_static_guard_0__) &&
                 (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                                       ::__l2::_thread_safe_static_guard_0__),
                 `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__ == -1)) {
                `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
                _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                                     ::__l2::_thread_safe_static_guard_0__);
              }
              uVar15 = FNetTrace::TraceName
                                 (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                                  ::__l2::Element);
              FVar5 = (pFVar13->Events).AllocatorInstance.SecondaryData;
              FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
              if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                FVar12 = FVar5;
              }
              *(uint *)((longlong)FVar12 + (ulonglong)uVar8 * 0x10) = uVar15;
            }
            pFVar17 = pFVar4->Items + uVar16;
            uVar15 = FNetBitStreamReader::ReadBits(this,1);
            if ((uVar15 & 1) != 0) {
              uVar15 = FNetBitStreamReader::ReadBits(this,5);
              if ((*(uint *)&pFVar3->field_0x18 <= uVar15 - 1) ||
                 (lVar14 = (ulonglong)(uVar15 - 1) * 0x10 + *(longlong *)&pFVar3->field_0x10,
                 lVar14 == 0)) {
                InternalFreeItemArray(param_1,pFVar4,pFVar3);
                FVar7 = NetError_PolymorphicStructNetSerializer_InvalidStructType;
                FNetSerializationContext::SetBitStreamOverflow(param_1);
                FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
                if (uVar8 == 0xffffffff) {
                  return;
                }
                FNetTrace::EndPacketContentEvent(pFVar13,uVar8,this->BufferBitPosition);
                return;
              }
              pFVar6 = *(FReplicationStateDescriptor **)(lVar14 + 8);
              _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                               (param_1,(ulonglong)pFVar6->InternalSize,
                                (ulonglong)pFVar6->InternalAlignment);
              pFVar17->StructData = _Dst;
              pFVar17->TypeIndex = uVar15;
              memset(_Dst,0,(ulonglong)pFVar6->InternalSize);
              FReplicationStateOperations::Deserialize(param_1,pFVar17->StructData,pFVar6);
            }
            if (uVar8 != 0xffffffff) {
              FNetTrace::EndPacketContentEvent(pFVar13,uVar8,this->BufferBitPosition);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar9);
        }
        FVar7 = GNetError_BitStreamOverflow;
        if (this->OverflowBitCount == 0) {
          return;
        }
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
      }
      else {
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
      }
    }
    InternalFreeItemArray(param_1,pFVar4,pFVar3);
    return;
  }
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
  return;
}

// DeserializeDelta @ 147bd68d0

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FPolymorphicArrayStructNetSerializerConfig *pFVar3;
  FQuantizedArray *pFVar4;
  FNetBitStreamReader *this;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FReplicationStateDescriptor *pFVar6;
  FName FVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *_Dst;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FNetTraceCollector *pFVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FQuantizedItem *pFVar17;
  FNetDeserializeDeltaArgs local_78;
  
  plVar2 = (longlong *)param_2->Prev;
  pFVar3 = (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_;
  pFVar4 = (FQuantizedArray *)param_2->_padding_;
  this = param_1->BitStreamReader;
  uVar16 = *(uint *)(plVar2 + 1);
  uVar8 = FNetBitStreamReader::ReadBits(this,1);
  uVar9 = uVar16;
  if (uVar8 == 0) {
    uVar9 = FNetBitStreamReader::ReadBits(this,8);
  }
  FVar7 = GNetError_BitStreamOverflow;
  if (this->OverflowBitCount == 0) {
    InternalFreeItemArray(param_1,pFVar4,pFVar3);
    InternalAllocateItemArray(param_1,pFVar4,uVar9);
    if (uVar16 != 0) {
      local_78._padding_ = param_2->_padding_;
      local_78._padding_ = param_2->_padding_;
      uVar15 = 0;
      local_78._padding_ = param_2->_padding_;
      local_78._padding_ = param_2->_padding_;
      local_78.Prev = param_2->Prev;
      uVar8 = uVar16;
      if (uVar9 < uVar16) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          uVar10 = 0xffffffff;
          pFVar13 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar13 = param_1->TraceCollector;
          }
          if (pFVar13 != (FNetTraceCollector *)0x0) {
            uVar10 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this->BufferBitPosition);
            if ((*(int *)(*plVar1 + 0x9d4c) <
                 `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
              ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            uVar11 = FNetTrace::TraceName
                               (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                ::__l2::Element);
            FVar5 = (pFVar13->Events).AllocatorInstance.SecondaryData;
            FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
            if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar12 = FVar5;
            }
            *(uint *)((longlong)FVar12 + (ulonglong)uVar10 * 0x10) = uVar11;
          }
          local_78._padding_ = (longlong)(pFVar4->Items + uVar15);
          local_78.Prev = *plVar2 + (ulonglong)uVar15 * 0x10;
          TPolymorphicStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,0>::
          DeserializeDelta(param_1,&local_78);
          if (uVar10 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar13,uVar10,this->BufferBitPosition);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar8);
      }
    }
    FVar7 = GNetError_BitStreamOverflow;
    if ((param_1->ErrorContext).Error == (FName)0x0) {
      if (this->OverflowBitCount == 0) {
        if (uVar16 < uVar9) {
          plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          do {
            uVar8 = 0xffffffff;
            pFVar13 = (FNetTraceCollector *)0x0;
            if (2 < GNetTraceRuntimeVerbosity) {
              pFVar13 = param_1->TraceCollector;
            }
            if (pFVar13 != (FNetTraceCollector *)0x0) {
              uVar8 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this->BufferBitPosition);
              if ((*(int *)(*plVar2 + 0x9d4c) <
                   `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                   ::__l2::_thread_safe_static_guard_0__) &&
                 (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                                       ::__l2::_thread_safe_static_guard_0__),
                 `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__ == -1)) {
                `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
                _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                                     ::__l2::_thread_safe_static_guard_0__);
              }
              uVar15 = FNetTrace::TraceName
                                 (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::DeserializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetDeserializeDeltaArgs_const&___ptr64)'::`21'::<lambda_2>::operator()(void)const___ptr64'
                                  ::__l2::Element);
              FVar5 = (pFVar13->Events).AllocatorInstance.SecondaryData;
              FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
              if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                FVar12 = FVar5;
              }
              *(uint *)((longlong)FVar12 + (ulonglong)uVar8 * 0x10) = uVar15;
            }
            pFVar17 = pFVar4->Items + uVar16;
            uVar15 = FNetBitStreamReader::ReadBits(this,1);
            if ((uVar15 & 1) != 0) {
              uVar15 = FNetBitStreamReader::ReadBits(this,5);
              if ((*(uint *)&pFVar3->field_0x18 <= uVar15 - 1) ||
                 (lVar14 = (ulonglong)(uVar15 - 1) * 0x10 + *(longlong *)&pFVar3->field_0x10,
                 lVar14 == 0)) {
                InternalFreeItemArray(param_1,pFVar4,pFVar3);
                FVar7 = NetError_PolymorphicStructNetSerializer_InvalidStructType;
                FNetSerializationContext::SetBitStreamOverflow(param_1);
                FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
                if (uVar8 == 0xffffffff) {
                  return;
                }
                FNetTrace::EndPacketContentEvent(pFVar13,uVar8,this->BufferBitPosition);
                return;
              }
              pFVar6 = *(FReplicationStateDescriptor **)(lVar14 + 8);
              _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                               (param_1,(ulonglong)pFVar6->InternalSize,
                                (ulonglong)pFVar6->InternalAlignment);
              pFVar17->StructData = _Dst;
              pFVar17->TypeIndex = uVar15;
              memset(_Dst,0,(ulonglong)pFVar6->InternalSize);
              FReplicationStateOperations::Deserialize(param_1,pFVar17->StructData,pFVar6);
            }
            if (uVar8 != 0xffffffff) {
              FNetTrace::EndPacketContentEvent(pFVar13,uVar8,this->BufferBitPosition);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar9);
        }
        FVar7 = GNetError_BitStreamOverflow;
        if (this->OverflowBitCount == 0) {
          return;
        }
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
      }
      else {
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
      }
    }
    InternalFreeItemArray(param_1,pFVar4,pFVar3);
    return;
  }
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
  return;
}

// FreeDynamicState @ 147bdd6c0

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::FreeDynamicState(FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  InternalFreeItemArray
            (param_1,(FQuantizedArray *)param_2->Source,
             (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_);
  return;
}

// FreeDynamicState @ 147bdd6e0

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::FreeDynamicState(FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  InternalFreeItemArray
            (param_1,(FQuantizedArray *)param_2->Source,
             (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_);
  return;
}

// InternalAllocateItemArray @ 147bf0200

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::InternalAllocateItemArray(FNetSerializationContext *param_1,FQuantizedArray *param_2,uint param_3)

{
  FQuantizedItem *_Dst;
  
  if (param_3 != 0) {
    _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                     (param_1,(ulonglong)param_3 << 4,8);
    param_2->Items = _Dst;
    param_2->NumItems = param_3;
    memset(_Dst,0,(ulonglong)param_3 << 4);
    return;
  }
  param_2->Items = (FQuantizedItem *)0x0;
  param_2->NumItems = 0;
  return;
}

// InternalAllocateItemArray @ 147bf0270

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::InternalAllocateItemArray(FNetSerializationContext *param_1,FQuantizedArray *param_2,uint param_3)

{
  FQuantizedItem *_Dst;
  
  if (param_3 != 0) {
    _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                     (param_1,(ulonglong)param_3 << 4,8);
    param_2->Items = _Dst;
    param_2->NumItems = param_3;
    memset(_Dst,0,(ulonglong)param_3 << 4);
    return;
  }
  param_2->Items = (FQuantizedItem *)0x0;
  param_2->NumItems = 0;
  return;
}

// InternalFreeItemArray @ 147bf0360

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::InternalFreeItemArray
          (FNetSerializationContext *param_1,FQuantizedArray *param_2,
          FPolymorphicArrayStructNetSerializerConfig *param_3)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FReplicationStateDescriptor *pFVar6;
  
  uVar1 = param_2->NumItems;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = param_2->Items[uVar4].TypeIndex - 1;
      if ((uVar3 < *(uint *)&param_3->field_0x18) &&
         (lVar5 = (ulonglong)uVar3 * 0x10 + *(longlong *)&param_3->field_0x10, lVar5 != 0)) {
        pFVar6 = *(FReplicationStateDescriptor **)(lVar5 + 8);
      }
      else {
        pFVar6 = (FReplicationStateDescriptor *)0x0;
      }
      puVar2 = param_2->Items[uVar4].StructData;
      if (puVar2 != (uchar *)0x0) {
        if ((pFVar6 != (FReplicationStateDescriptor *)0x0) &&
           ((pFVar6->Traits & HasDynamicState) != None)) {
          FReplicationStateOperations::FreeDynamicState(param_1,puVar2,pFVar6);
        }
        Net::Private::FPolymorphicStructNetSerializerInternal::Free
                  (param_1,param_2->Items[uVar4].StructData);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  Net::Private::FPolymorphicStructNetSerializerInternal::Free(param_1,param_2->Items);
  param_2->Items = (FQuantizedItem *)0x0;
  param_2->NumItems = 0;
  return;
}

// InternalFreeItemArray @ 147bf0430

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::InternalFreeItemArray
          (FNetSerializationContext *param_1,FQuantizedArray *param_2,
          FPolymorphicArrayStructNetSerializerConfig *param_3)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FReplicationStateDescriptor *pFVar6;
  
  uVar1 = param_2->NumItems;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = param_2->Items[uVar4].TypeIndex - 1;
      if ((uVar3 < *(uint *)&param_3->field_0x18) &&
         (lVar5 = (ulonglong)uVar3 * 0x10 + *(longlong *)&param_3->field_0x10, lVar5 != 0)) {
        pFVar6 = *(FReplicationStateDescriptor **)(lVar5 + 8);
      }
      else {
        pFVar6 = (FReplicationStateDescriptor *)0x0;
      }
      puVar2 = param_2->Items[uVar4].StructData;
      if (puVar2 != (uchar *)0x0) {
        if ((pFVar6 != (FReplicationStateDescriptor *)0x0) &&
           ((pFVar6->Traits & HasDynamicState) != None)) {
          FReplicationStateOperations::FreeDynamicState(param_1,puVar2,pFVar6);
        }
        Net::Private::FPolymorphicStructNetSerializerInternal::Free
                  (param_1,param_2->Items[uVar4].StructData);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  Net::Private::FPolymorphicStructNetSerializerInternal::Free(param_1,param_2->Items);
  param_2->Items = (FQuantizedItem *)0x0;
  param_2->NumItems = 0;
  return;
}

// IsEqual @ 147bf0800

bool __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_2->bStateIsQuantized == false) {
    bVar8 = FRootMotionSourceGroup::operator==
                      ((FRootMotionSourceGroup *)param_2->Source0,
                       (FRootMotionSourceGroup *)param_2->Source1);
    return bVar8;
  }
  lVar3 = param_2->_padding_;
  plVar4 = (longlong *)param_2->Source0;
  plVar5 = (longlong *)param_2->Source1;
  uVar1 = *(uint *)(plVar4 + 1);
  if (uVar1 == *(uint *)(plVar5 + 1)) {
    uVar10 = 0;
    if (uVar1 != 0) {
      do {
        lVar6 = *plVar4;
        lVar7 = *plVar5;
        iVar2 = *(int *)(lVar6 + 8 + uVar10 * 0x10);
        if ((iVar2 != *(int *)(lVar7 + 8 + uVar10 * 0x10)) ||
           (((uVar9 = iVar2 - 1, uVar9 < *(uint *)(lVar3 + 0x18) &&
             (lVar11 = (ulonglong)uVar9 * 0x10 + *(longlong *)(lVar3 + 0x10), lVar11 != 0)) &&
            (bVar8 = FReplicationStateOperations::IsEqualQuantizedState
                               (param_1,*(uchar **)(lVar6 + uVar10 * 0x10),
                                *(uchar **)(lVar7 + uVar10 * 0x10),
                                *(FReplicationStateDescriptor **)(lVar11 + 8)), !bVar8))))
        goto LAB_147bf08b9;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 != uVar1);
    }
    bVar8 = true;
  }
  else {
LAB_147bf08b9:
    bVar8 = false;
  }
  return bVar8;
}

// IsEqual @ 147bf08e0

bool __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_2->bStateIsQuantized == false) {
    bVar8 = FRootMotionSourceGroup::operator==
                      ((FRootMotionSourceGroup *)param_2->Source0,
                       (FRootMotionSourceGroup *)param_2->Source1);
    return bVar8;
  }
  lVar3 = param_2->_padding_;
  plVar4 = (longlong *)param_2->Source0;
  plVar5 = (longlong *)param_2->Source1;
  uVar1 = *(uint *)(plVar4 + 1);
  if (uVar1 == *(uint *)(plVar5 + 1)) {
    uVar10 = 0;
    if (uVar1 != 0) {
      do {
        lVar6 = *plVar4;
        lVar7 = *plVar5;
        iVar2 = *(int *)(lVar6 + 8 + uVar10 * 0x10);
        if ((iVar2 != *(int *)(lVar7 + 8 + uVar10 * 0x10)) ||
           (((uVar9 = iVar2 - 1, uVar9 < *(uint *)(lVar3 + 0x18) &&
             (lVar11 = (ulonglong)uVar9 * 0x10 + *(longlong *)(lVar3 + 0x10), lVar11 != 0)) &&
            (bVar8 = FReplicationStateOperations::IsEqualQuantizedState
                               (param_1,*(uchar **)(lVar6 + uVar10 * 0x10),
                                *(uchar **)(lVar7 + uVar10 * 0x10),
                                *(FReplicationStateDescriptor **)(lVar11 + 8)), !bVar8))))
        goto LAB_147bf0999;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 != uVar1);
    }
    bVar8 = true;
  }
  else {
LAB_147bf0999:
    bVar8 = false;
  }
  return bVar8;
}

// Quantize @ 147bf8c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  uint uVar1;
  FQuantizedArray *pFVar2;
  FPolymorphicArrayStructNetSerializerConfig *pFVar3;
  longlong *plVar4;
  FReplicationStateDescriptor *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  void *_Dst;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  FName local_res10;
  FQuantizedArray *local_res18;
  FString local_48;
  
  pFVar2 = (FQuantizedArray *)param_2->Target;
  pFVar3 = (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_;
  uVar1 = *(uint *)(param_2->Source + 0x20);
  plVar4 = *(longlong **)(param_2->Source + 0x18);
  local_res18 = pFVar2;
  if (((int)uVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar7 = GNetError_ArraySizeTooLarge;
  if (0xff < uVar1) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
    return;
  }
  InternalFreeItemArray(param_1,pFVar2,pFVar3);
  InternalAllocateItemArray(param_1,pFVar2,uVar1);
  plVar14 = plVar4;
  do {
    if (plVar14 == plVar4 + (longlong)(int)uVar1 * 2) {
      return;
    }
    if ((longlong *)*plVar14 == (longlong *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(longlong *)*plVar14 + 0x58))();
      puVar15 = (undefined8 *)
                ((longlong)&pFVar2->Items->StructData +
                ((longlong)plVar14 - (longlong)plVar4 & 0xfffffffffffffff0U));
      if (lVar10 != 0) {
        plVar13 = *(longlong **)&pFVar3->field_0x10;
        for (plVar11 = plVar13; plVar11 != plVar13 + (longlong)(int)*(uint *)&pFVar3->field_0x18 * 2
            ; plVar11 = plVar11 + 2) {
          if (*plVar11 == lVar10) {
            uVar12 = (longlong)plVar11 - (longlong)plVar13 >> 4;
            uVar9 = (uint)uVar12;
            if (uVar9 != 0xffffffff) {
              if (uVar9 + 1 == 0) goto LAB_147bf8e18;
              if (uVar9 < *(uint *)&pFVar3->field_0x18) {
                plVar13 = plVar13 + (uVar12 & 0xffffffff) * 2;
              }
              else {
                plVar13 = (longlong *)0x0;
              }
              pFVar5 = (FReplicationStateDescriptor *)plVar13[1];
              *(uint *)(puVar15 + 1) = uVar9 + 1;
              _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                               (param_1,(ulonglong)pFVar5->InternalSize,
                                (ulonglong)pFVar5->InternalAlignment);
              *puVar15 = _Dst;
              memset(_Dst,0,(ulonglong)pFVar5->InternalSize);
              FReplicationStateOperations::Quantize
                        (param_1,(uchar *)*puVar15,(uchar *)*plVar14,pFVar5);
              goto LAB_147bf8e87;
            }
            break;
          }
        }
      }
    }
    if (lVar10 != 0) {
LAB_147bf8e18:
      FVar7 = NetError_PolymorphicStructNetSerializer_InvalidStructType;
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
      if (2 < (byte)LogIris._0_1_) {
        local_res10 = *(FName *)(lVar10 + 0x18);
        ::FName::ToString(&local_res10,&local_48);
        Logging::Private::BasicLog<3>
                  (&`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Quantize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetQuantizeArgs_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_147bf8e87:
    plVar14 = plVar14 + 2;
    pFVar2 = local_res18;
  } while( true );
}

// Quantize @ 147bf8ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  uint uVar1;
  FQuantizedArray *pFVar2;
  FPolymorphicArrayStructNetSerializerConfig *pFVar3;
  longlong *plVar4;
  FReplicationStateDescriptor *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  void *_Dst;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  FName local_res10;
  FQuantizedArray *local_res18;
  FString local_48;
  
  pFVar2 = (FQuantizedArray *)param_2->Target;
  pFVar3 = (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_;
  uVar1 = *(uint *)(param_2->Source + 0x10);
  plVar4 = *(longlong **)(param_2->Source + 8);
  local_res18 = pFVar2;
  if (((int)uVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar7 = GNetError_ArraySizeTooLarge;
  if (0xff < uVar1) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
    return;
  }
  InternalFreeItemArray(param_1,pFVar2,pFVar3);
  InternalAllocateItemArray(param_1,pFVar2,uVar1);
  plVar14 = plVar4;
  do {
    if (plVar14 == plVar4 + (longlong)(int)uVar1 * 2) {
      return;
    }
    if ((longlong *)*plVar14 == (longlong *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(longlong *)*plVar14 + 0x58))();
      puVar15 = (undefined8 *)
                ((longlong)&pFVar2->Items->StructData +
                ((longlong)plVar14 - (longlong)plVar4 & 0xfffffffffffffff0U));
      if (lVar10 != 0) {
        plVar13 = *(longlong **)&pFVar3->field_0x10;
        for (plVar11 = plVar13; plVar11 != plVar13 + (longlong)(int)*(uint *)&pFVar3->field_0x18 * 2
            ; plVar11 = plVar11 + 2) {
          if (*plVar11 == lVar10) {
            uVar12 = (longlong)plVar11 - (longlong)plVar13 >> 4;
            uVar9 = (uint)uVar12;
            if (uVar9 != 0xffffffff) {
              if (uVar9 + 1 == 0) goto LAB_147bf9048;
              if (uVar9 < *(uint *)&pFVar3->field_0x18) {
                plVar13 = plVar13 + (uVar12 & 0xffffffff) * 2;
              }
              else {
                plVar13 = (longlong *)0x0;
              }
              pFVar5 = (FReplicationStateDescriptor *)plVar13[1];
              *(uint *)(puVar15 + 1) = uVar9 + 1;
              _Dst = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                               (param_1,(ulonglong)pFVar5->InternalSize,
                                (ulonglong)pFVar5->InternalAlignment);
              *puVar15 = _Dst;
              memset(_Dst,0,(ulonglong)pFVar5->InternalSize);
              FReplicationStateOperations::Quantize
                        (param_1,(uchar *)*puVar15,(uchar *)*plVar14,pFVar5);
              goto LAB_147bf90b7;
            }
            break;
          }
        }
      }
    }
    if (lVar10 != 0) {
LAB_147bf9048:
      FVar7 = NetError_PolymorphicStructNetSerializer_InvalidStructType;
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar7);
      if (2 < (byte)LogIris._0_1_) {
        local_res10 = *(FName *)(lVar10 + 0x18);
        ::FName::ToString(&local_res10,&local_48);
        Logging::Private::BasicLog<3>
                  (&`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Quantize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetQuantizeArgs_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_147bf90b7:
    plVar14 = plVar14 + 2;
    pFVar2 = local_res18;
  } while( true );
}

// Serialize @ 147bfe910

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  FNetBitStreamWriter *this;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  longlong lVar10;
  FNetTraceCollector *pFVar11;
  FNetTraceCollector *pFVar12;
  undefined8 *puVar13;
  
  plVar3 = (longlong *)param_2->Source;
  lVar4 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,*(uint *)(plVar3 + 1),8);
  uVar2 = *(uint *)(plVar3 + 1);
  uVar8 = 0;
  if (uVar2 != 0) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      uVar6 = 0xffffffff;
      pFVar11 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar11 = param_1->TraceCollector;
      }
      if (pFVar11 != (FNetTraceCollector *)0x0) {
        pFVar12 = (FNetTraceCollector *)(ulonglong)this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          pFVar12 = (FNetTraceCollector *)0x0;
        }
        uVar6 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,(uint)pFVar12);
        if ((*(int *)(*plVar1 + 0x9d4c) <
             `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
          _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        uVar7 = FNetTrace::TraceName
                          (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::Element);
        FVar5 = (pFVar11->Events).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
        if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar9 = FVar5;
        }
        *(uint *)((longlong)FVar9 + (ulonglong)uVar6 * 0x10) = uVar7;
      }
      lVar10 = 0;
      puVar13 = (undefined8 *)(*plVar3 + uVar8 * 0x10);
      if (*(int *)(puVar13 + 1) - 1U < *(uint *)(lVar4 + 0x18)) {
        lVar10 = (ulonglong)(*(int *)(puVar13 + 1) - 1U) * 0x10 + *(longlong *)(lVar4 + 0x10);
      }
      FNetBitStreamWriter::WriteBits(this,(uint)(lVar10 != 0),1);
      if (lVar10 != 0) {
        FNetBitStreamWriter::WriteBits(this,*(uint *)(puVar13 + 1),5);
        FReplicationStateOperations::Serialize
                  (param_1,(uchar *)*puVar13,*(FReplicationStateDescriptor **)(lVar10 + 8));
      }
      if (uVar6 != 0xffffffff) {
        uVar7 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar7 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar11,uVar6,uVar7);
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 != uVar2);
  }
  return;
}

// Serialize @ 147bfeb30

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  FNetBitStreamWriter *this;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  longlong lVar10;
  FNetTraceCollector *pFVar11;
  FNetTraceCollector *pFVar12;
  undefined8 *puVar13;
  
  plVar3 = (longlong *)param_2->Source;
  lVar4 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,*(uint *)(plVar3 + 1),8);
  uVar2 = *(uint *)(plVar3 + 1);
  uVar8 = 0;
  if (uVar2 != 0) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      uVar6 = 0xffffffff;
      pFVar11 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar11 = param_1->TraceCollector;
      }
      if (pFVar11 != (FNetTraceCollector *)0x0) {
        pFVar12 = (FNetTraceCollector *)(ulonglong)this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          pFVar12 = (FNetTraceCollector *)0x0;
        }
        uVar6 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,(uint)pFVar12);
        if ((*(int *)(*plVar1 + 0x9d4c) <
             `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
          _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        uVar7 = FNetTrace::TraceName
                          (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::Serialize(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeArgs_const&___ptr64)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::Element);
        FVar5 = (pFVar11->Events).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
        if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar9 = FVar5;
        }
        *(uint *)((longlong)FVar9 + (ulonglong)uVar6 * 0x10) = uVar7;
      }
      lVar10 = 0;
      puVar13 = (undefined8 *)(*plVar3 + uVar8 * 0x10);
      if (*(int *)(puVar13 + 1) - 1U < *(uint *)(lVar4 + 0x18)) {
        lVar10 = (ulonglong)(*(int *)(puVar13 + 1) - 1U) * 0x10 + *(longlong *)(lVar4 + 0x10);
      }
      FNetBitStreamWriter::WriteBits(this,(uint)(lVar10 != 0),1);
      if (lVar10 != 0) {
        FNetBitStreamWriter::WriteBits(this,*(uint *)(puVar13 + 1),5);
        FReplicationStateOperations::Serialize
                  (param_1,(uchar *)*puVar13,*(FReplicationStateDescriptor **)(lVar10 + 8));
      }
      if (uVar6 != 0xffffffff) {
        uVar7 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar7 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar11,uVar6,uVar7);
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 != uVar2);
  }
  return;
}

// SerializeDelta @ 147bffa60

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FNetBitStreamWriter *this;
  longlong *plVar3;
  longlong *plVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FNetTraceCollector *pFVar13;
  longlong lVar14;
  FNetTraceCollector *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  FNetSerializeDeltaArgs local_78;
  
  lVar2 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  plVar3 = (longlong *)param_2->_padding_;
  plVar4 = (longlong *)param_2->Prev;
  uVar10 = *(uint *)(plVar3 + 1);
  uVar11 = *(uint *)(plVar4 + 1);
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar10 == uVar11),1);
  if (uVar10 != uVar11) {
    FNetBitStreamWriter::WriteBits(this,uVar10,8);
  }
  uVar16 = 0;
  if (uVar11 != 0) {
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = param_2->_padding_;
    uVar7 = uVar11;
    if (uVar10 < uVar11) {
      uVar7 = uVar10;
    }
    local_78.Prev = param_2->Prev;
    if (uVar7 != 0) {
      plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        uVar8 = 0xffffffff;
        pFVar13 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar13 = param_1->TraceCollector;
        }
        if (pFVar13 != (FNetTraceCollector *)0x0) {
          pFVar15 = (FNetTraceCollector *)(ulonglong)this->BufferBitPosition;
          if (this->OverflowBitCount != 0) {
            pFVar15 = (FNetTraceCollector *)0x0;
          }
          uVar8 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,(uint)pFVar15);
          if ((*(int *)(*plVar1 + 0x9d4c) <
               `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
            _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          uVar9 = FNetTrace::TraceName
                            (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::Element);
          FVar5 = (pFVar13->Events).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
          if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar12 = FVar5;
          }
          *(uint *)((longlong)FVar12 + (ulonglong)uVar8 * 0x10) = uVar9;
        }
        local_78._padding_ = *plVar3 + uVar16 * 0x10;
        local_78.Prev = *plVar4 + uVar16 * 0x10;
        TPolymorphicStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,0>::
        SerializeDelta(param_1,&local_78);
        if (uVar8 != 0xffffffff) {
          uVar9 = this->BufferBitPosition;
          if (this->OverflowBitCount != 0) {
            uVar9 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar13,uVar8,uVar9);
        }
        uVar8 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar8;
      } while (uVar8 != uVar7);
    }
  }
  if (uVar11 < uVar10) {
    lVar17 = (ulonglong)uVar11 << 4;
    plVar4 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar16 = (ulonglong)(uVar10 - uVar11);
    do {
      uVar10 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar13 = param_1->TraceCollector;
      }
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        pFVar15 = (FNetTraceCollector *)(ulonglong)this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          pFVar15 = (FNetTraceCollector *)0x0;
        }
        uVar10 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,(uint)pFVar15);
        if ((*(int *)(*plVar4 + 0x9d4c) <
             `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
          ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
          _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        uVar11 = FNetTrace::TraceName
                           (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
                            ::__l2::Element);
        FVar5 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar5;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar10 * 0x10) = uVar11;
      }
      lVar14 = 0;
      lVar6 = *plVar3;
      uVar11 = *(int *)(lVar6 + 8 + lVar17) - 1;
      if (uVar11 < *(uint *)(lVar2 + 0x18)) {
        lVar14 = (ulonglong)uVar11 * 0x10 + *(longlong *)(lVar2 + 0x10);
      }
      FNetBitStreamWriter::WriteBits(this,(uint)(lVar14 != 0),1);
      if (lVar14 != 0) {
        FNetBitStreamWriter::WriteBits(this,*(uint *)(lVar6 + 8 + lVar17),5);
        FReplicationStateOperations::Serialize
                  (param_1,*(uchar **)(lVar6 + lVar17),*(FReplicationStateDescriptor **)(lVar14 + 8)
                  );
      }
      if (uVar10 != 0xffffffff) {
        uVar11 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar11 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar13,uVar10,uVar11);
      }
      lVar17 = lVar17 + 0x10;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// SerializeDelta @ 147bffe50

void __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FNetBitStreamWriter *this;
  longlong *plVar3;
  longlong *plVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FNetTraceCollector *pFVar13;
  longlong lVar14;
  FNetTraceCollector *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  FNetSerializeDeltaArgs local_78;
  
  lVar2 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  plVar3 = (longlong *)param_2->_padding_;
  plVar4 = (longlong *)param_2->Prev;
  uVar10 = *(uint *)(plVar3 + 1);
  uVar11 = *(uint *)(plVar4 + 1);
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar10 == uVar11),1);
  if (uVar10 != uVar11) {
    FNetBitStreamWriter::WriteBits(this,uVar10,8);
  }
  uVar16 = 0;
  if (uVar11 != 0) {
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = param_2->_padding_;
    uVar7 = uVar11;
    if (uVar10 < uVar11) {
      uVar7 = uVar10;
    }
    local_78.Prev = param_2->Prev;
    if (uVar7 != 0) {
      plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        uVar8 = 0xffffffff;
        pFVar13 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar13 = param_1->TraceCollector;
        }
        if (pFVar13 != (FNetTraceCollector *)0x0) {
          pFVar15 = (FNetTraceCollector *)(ulonglong)this->BufferBitPosition;
          if (this->OverflowBitCount != 0) {
            pFVar15 = (FNetTraceCollector *)0x0;
          }
          uVar8 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,(uint)pFVar15);
          if ((*(int *)(*plVar1 + 0x9d4c) <
               `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
            _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          uVar9 = FNetTrace::TraceName
                            (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::Element);
          FVar5 = (pFVar13->Events).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
          if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar12 = FVar5;
          }
          *(uint *)((longlong)FVar12 + (ulonglong)uVar8 * 0x10) = uVar9;
        }
        local_78._padding_ = *plVar3 + uVar16 * 0x10;
        local_78.Prev = *plVar4 + uVar16 * 0x10;
        TPolymorphicStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,0>::
        SerializeDelta(param_1,&local_78);
        if (uVar8 != 0xffffffff) {
          uVar9 = this->BufferBitPosition;
          if (this->OverflowBitCount != 0) {
            uVar9 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar13,uVar8,uVar9);
        }
        uVar8 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar8;
      } while (uVar8 != uVar7);
    }
  }
  if (uVar11 < uVar10) {
    lVar17 = (ulonglong)uVar11 << 4;
    plVar4 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar16 = (ulonglong)(uVar10 - uVar11);
    do {
      uVar10 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar13 = param_1->TraceCollector;
      }
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        pFVar15 = (FNetTraceCollector *)(ulonglong)this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          pFVar15 = (FNetTraceCollector *)0x0;
        }
        uVar10 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,(uint)pFVar15);
        if ((*(int *)(*plVar4 + 0x9d4c) <
             `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
          ::__l2::Element = CreatePersistentNetDebugName(L"Element",7);
          _Init_thread_footer(&`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        uVar11 = FNetTrace::TraceName
                           (`public:___cdecl_`public:_static_void___cdecl_UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&private:_static_class_TArrayView<class_TSharedPtr<struct_FRootMotionSource,1>,int>___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources(struct_FRootMotionSourceGroup&___ptr64),&private:_static_void___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum(struct_FRootMotionSourceGroup&___ptr64,unsigned___int64)>::SerializeDelta(UE::Net::FNetSerializationContext&___ptr64,UE::Net::FNetSerializeDeltaArgs_const&___ptr64)'::`15'::<lambda_2>::operator()(void)const___ptr64'
                            ::__l2::Element);
        FVar5 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar5;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar10 * 0x10) = uVar11;
      }
      lVar14 = 0;
      lVar6 = *plVar3;
      uVar11 = *(int *)(lVar6 + 8 + lVar17) - 1;
      if (uVar11 < *(uint *)(lVar2 + 0x18)) {
        lVar14 = (ulonglong)uVar11 * 0x10 + *(longlong *)(lVar2 + 0x10);
      }
      FNetBitStreamWriter::WriteBits(this,(uint)(lVar14 != 0),1);
      if (lVar14 != 0) {
        FNetBitStreamWriter::WriteBits(this,*(uint *)(lVar6 + 8 + lVar17),5);
        FReplicationStateOperations::Serialize
                  (param_1,*(uchar **)(lVar6 + lVar17),*(FReplicationStateDescriptor **)(lVar14 + 8)
                  );
      }
      if (uVar10 != 0xffffffff) {
        uVar11 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar11 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar13,uVar10,uVar11);
      }
      lVar17 = lVar17 + 0x10;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// Validate @ 147c0bb00

bool __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
::Validate(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  lVar2 = param_2->_padding_;
  uVar1 = *(uint *)(param_2->Source + 0x20);
  plVar10 = *(longlong **)(param_2->Source + 0x18);
  if (((int)uVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (uVar1 < 0x100) {
    plVar11 = plVar10 + (longlong)(int)uVar1 * 2;
    for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
      if ((longlong *)*plVar10 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(longlong *)*plVar10 + 0x58))();
        if (lVar7 != 0) {
          plVar3 = *(longlong **)(lVar2 + 0x10);
          for (plVar9 = plVar3; plVar9 != plVar3 + (longlong)*(int *)(lVar2 + 0x18) * 2;
              plVar9 = plVar9 + 2) {
            if (*plVar9 == lVar7) {
              iVar8 = (int)((longlong)plVar9 - (longlong)plVar3 >> 4);
              if (iVar8 != -1) {
                iVar8 = iVar8 + 1;
                goto LAB_147c0bbcb;
              }
              break;
            }
          }
        }
      }
      iVar8 = 0;
      if (lVar7 != 0) {
LAB_147c0bbcb:
        if (iVar8 == 0) goto LAB_147c0bc07;
      }
      if (((iVar8 - 1U < *(uint *)(lVar2 + 0x18)) &&
          (lVar7 = (ulonglong)(iVar8 - 1U) * 0x10 + *(longlong *)(lVar2 + 0x10), lVar7 != 0)) &&
         (bVar5 = FReplicationStateOperations::Validate
                            (param_1,(uchar *)*plVar10,*(FReplicationStateDescriptor **)(lVar7 + 8))
         , !bVar5)) goto LAB_147c0bc07;
    }
    bVar5 = true;
  }
  else {
LAB_147c0bc07:
    bVar5 = false;
  }
  return bVar5;
}

// Validate @ 147c0bc30

bool __cdecl
UE::Net::
TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
::Validate(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  lVar2 = param_2->_padding_;
  uVar1 = *(uint *)(param_2->Source + 0x10);
  plVar10 = *(longlong **)(param_2->Source + 8);
  if (((int)uVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (uVar1 < 0x100) {
    plVar11 = plVar10 + (longlong)(int)uVar1 * 2;
    for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
      if ((longlong *)*plVar10 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(longlong *)*plVar10 + 0x58))();
        if (lVar7 != 0) {
          plVar3 = *(longlong **)(lVar2 + 0x10);
          for (plVar9 = plVar3; plVar9 != plVar3 + (longlong)*(int *)(lVar2 + 0x18) * 2;
              plVar9 = plVar9 + 2) {
            if (*plVar9 == lVar7) {
              iVar8 = (int)((longlong)plVar9 - (longlong)plVar3 >> 4);
              if (iVar8 != -1) {
                iVar8 = iVar8 + 1;
                goto LAB_147c0bcfb;
              }
              break;
            }
          }
        }
      }
      iVar8 = 0;
      if (lVar7 != 0) {
LAB_147c0bcfb:
        if (iVar8 == 0) goto LAB_147c0bd37;
      }
      if (((iVar8 - 1U < *(uint *)(lVar2 + 0x18)) &&
          (lVar7 = (ulonglong)(iVar8 - 1U) * 0x10 + *(longlong *)(lVar2 + 0x10), lVar7 != 0)) &&
         (bVar5 = FReplicationStateOperations::Validate
                            (param_1,(uchar *)*plVar10,*(FReplicationStateDescriptor **)(lVar7 + 8))
         , !bVar5)) goto LAB_147c0bd37;
    }
    bVar5 = true;
  }
  else {
LAB_147c0bd37:
    bVar5 = false;
  }
  return bVar5;
}

