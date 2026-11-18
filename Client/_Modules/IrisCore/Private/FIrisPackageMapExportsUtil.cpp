// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// CloneDynamicState @ 1443287b0

void __cdecl
UE::Net::FIrisPackageMapExportsUtil::CloneDynamicState
          (FNetSerializationContext *param_1,FIrisPackageMapExportsQuantizedType *param_2,
          FIrisPackageMapExportsQuantizedType *param_3)

{
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *this;
  uint uVar1;
  FIrisPackageMapExportsQuantizedType *pFVar2;
  FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *_Dst;
  FIrisPackageMapExportsQuantizedType *_Dst_00;
  FIrisPackageMapExportsQuantizedType *pFVar3;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *_Dst_01;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar4;
  FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar5;
  uint uVar6;
  uint uVar7;
  
  (param_2->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data =
       (FObjectNetSerializerQuantizedReferenceStorage *)0x0;
  uVar6 = 4;
  uVar1 = (param_3->ObjectReferenceStorage).ArrayNum;
  uVar7 = uVar1;
  if (uVar1 < 5) {
    uVar7 = 4;
  }
  AllocationPolicies::
  TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
  ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage>::ResizeAllocation
            ((ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage> *)param_2,
             param_1,0,uVar7);
  pFVar2 = (FIrisPackageMapExportsQuantizedType *)
           (param_3->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
  pFVar3 = param_3;
  if (pFVar2 != (FIrisPackageMapExportsQuantizedType *)0x0) {
    pFVar3 = pFVar2;
  }
  pFVar2 = (FIrisPackageMapExportsQuantizedType *)
           (param_2->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
  _Dst_00 = param_2;
  if (pFVar2 != (FIrisPackageMapExportsQuantizedType *)0x0) {
    _Dst_00 = pFVar2;
  }
  memcpy(_Dst_00,pFVar3,(ulonglong)uVar1 * 0x18);
  if (uVar1 < uVar7) {
    pFVar2 = (FIrisPackageMapExportsQuantizedType *)
             (param_2->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
    pFVar3 = param_2;
    if (pFVar2 != (FIrisPackageMapExportsQuantizedType *)0x0) {
      pFVar3 = pFVar2;
    }
    memset((pFVar3->ObjectReferenceStorage).AllocatorInstance.InlineData + uVar1,0,
           (ulonglong)(uVar7 - uVar1) * 0x18);
  }
  (param_2->ObjectReferenceStorage).ArrayMaxCapacity = uVar7;
  (param_2->ObjectReferenceStorage).ArrayNum = uVar1;
  this = &param_2->NameStorage;
  (param_2->NameStorage).AllocatorInstance.SecondaryData.Data = (FQuantizedName *)0x0;
  uVar1 = (param_3->NameStorage).ArrayNum;
  uVar7 = uVar1;
  if (uVar1 < 5) {
    uVar7 = 4;
  }
  AllocationPolicies::
  TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
  ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName>::ResizeAllocation
            (&this->AllocatorInstance,param_1,0,uVar7);
  pFVar4 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
            *)(param_3->NameStorage).AllocatorInstance.SecondaryData.Data;
  _Dst_01 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
             *)(param_2->NameStorage).AllocatorInstance.SecondaryData.Data;
  if (pFVar4 == (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                 *)0x0) {
    pFVar4 = &param_3->NameStorage;
  }
  if (_Dst_01 ==
      (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
       *)0x0) {
    _Dst_01 = this;
  }
  memcpy(_Dst_01,pFVar4,(ulonglong)uVar1 * 0x18);
  if (uVar1 < uVar7) {
    pFVar4 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)(param_2->NameStorage).AllocatorInstance.SecondaryData.Data;
    if (pFVar4 == (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)0x0) {
      pFVar4 = this;
    }
    memset((pFVar4->AllocatorInstance).InlineData + uVar1,0,(ulonglong)(uVar7 - uVar1) * 0x18);
  }
  (param_2->NameStorage).ArrayNum = uVar1;
  (param_2->NameStorage).ArrayMaxCapacity = uVar7;
  (param_2->NetTokenStorage).AllocatorInstance.SecondaryData.Data = (FNetToken *)0x0;
  uVar1 = (param_3->NetTokenStorage).ArrayNum;
  if (uVar1 < 5) {
    pFVar5 = (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)(param_3->NetTokenStorage).AllocatorInstance.SecondaryData.Data;
    if (pFVar5 == (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)0x0) {
      pFVar5 = &param_3->NetTokenStorage;
    }
  }
  else {
    _Dst = FMemory::Realloc((void *)0x0,(ulonglong)uVar1 * 4,4);
    (param_2->NetTokenStorage).AllocatorInstance.SecondaryData.Data = (FNetToken *)_Dst;
    pFVar5 = (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)(param_3->NetTokenStorage).AllocatorInstance.SecondaryData.Data;
    if (pFVar5 == (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)0x0) {
      pFVar5 = &param_3->NetTokenStorage;
    }
    uVar6 = uVar1;
    if (_Dst != (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                 *)0x0) goto LAB_144328941;
  }
  _Dst = &param_2->NetTokenStorage;
LAB_144328941:
  memcpy(_Dst,pFVar5,(ulonglong)uVar1 * 4);
  if (uVar1 < uVar6) {
    pFVar5 = (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)(param_2->NetTokenStorage).AllocatorInstance.SecondaryData.Data;
    if (pFVar5 == (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)0x0) {
      pFVar5 = &param_2->NetTokenStorage;
    }
    memset((pFVar5->AllocatorInstance).InlineData + uVar1,0,(ulonglong)(uVar6 - uVar1) << 2);
  }
  (param_2->NetTokenStorage).ArrayMaxCapacity = uVar6;
  (param_2->NetTokenStorage).ArrayNum = uVar1;
  return;
}

// CollectNetReferences @ 144328e10

void __cdecl
UE::Net::FIrisPackageMapExportsUtil::CollectNetReferences
          (FNetSerializationContext *param_1,FIrisPackageMapExportsQuantizedType *param_2,
          FNetSerializerChangeMaskParam *param_3,FNetReferenceCollector *param_4)

{
  uint uVar1;
  FIrisPackageMapExportsQuantizedType *pFVar2;
  code *pcVar3;
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar4;
  bool bVar5;
  FNetReferenceInfo local_res10 [4];
  
  pFVar2 = (FIrisPackageMapExportsQuantizedType *)
           (param_2->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
  uVar1 = (param_2->ObjectReferenceStorage).ArrayNum;
  local_res10[0].ResolveType = ResolveOnClient;
  local_res10[0].Padding = '\0';
  if (pFVar2 != (FIrisPackageMapExportsQuantizedType *)0x0) {
    param_2 = pFVar2;
  }
  if (((int)uVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = &param_2->ObjectReferenceStorage;
  for (; param_2 !=
         (FIrisPackageMapExportsQuantizedType *)
         ((FNetRefHandle_u_0 *)(pFVar4->AllocatorInstance).InlineData + (longlong)(int)uVar1 * 3);
      param_2 = (FIrisPackageMapExportsQuantizedType *)
                ((FNetRefHandle_u_0 *)(param_2->ObjectReferenceStorage).AllocatorInstance.InlineData
                + 3)) {
    FNetReferenceCollector::Add(param_4,local_res10,(FQuantizedObjectReference *)param_2,param_3);
  }
  return;
}

// Dequantize @ 14432a250

void __cdecl
UE::Net::FIrisPackageMapExportsUtil::Dequantize
          (FNetSerializationContext *param_1,FIrisPackageMapExportsQuantizedType *param_2,
          FIrisPackageMapExports *param_3)

{
  int *piVar1;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  void *pvVar3;
  uint uVar4;
  FIrisPackageMapExportsQuantizedType *pFVar5;
  ForElementType<TObjectPtr<UObject>_> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<TObjectPtr<UObject>_> FVar10;
  uint uVar11;
  FIrisPackageMapExportsQuantizedType *pFVar12;
  ForElementType<FName> FVar13;
  ulonglong uVar14;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar15;
  undefined **local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined4 local_88;
  FNetDequantizeArgs local_80;
  FNetDequantizeArgs local_58;
  
  uVar4 = (param_2->ObjectReferenceStorage).ArrayNum;
  uVar14 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    iVar9 = (param_3->References).ArrayNum;
    piVar1 = &(param_3->References).ArrayNum;
    if (iVar9 < (int)uVar4) {
      Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
                (8,8,uVar4 - iVar9,(ForElementType<TObjectPtr<UObject>_> *)param_3,piVar1,
                 &(param_3->References).ArrayMax);
    }
    else {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar14);
      }
      if ((int)uVar4 < iVar9) {
        uVar11 = iVar9 - uVar4;
        if (((int)(uVar11 | uVar4) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar11 != 0) {
          FVar6 = (param_3->References).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<TObjectPtr<UObject>_>)param_3;
          if (FVar6 != (ForElementType<TObjectPtr<UObject>_>)0x0) {
            FVar10 = FVar6;
          }
          pvVar3 = (void *)((longlong)FVar10 + (longlong)(int)uVar4 * 8);
          iVar9 = (*piVar1 - uVar11) - uVar4;
          if (iVar9 != 0) {
            memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)(int)uVar11 * 8),
                    (longlong)iVar9 << 3);
          }
          *piVar1 = *piVar1 - uVar11;
          Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
                    (8,8,(ForElementType<TObjectPtr<UObject>_> *)param_3,*piVar1,
                     &(param_3->References).ArrayMax);
        }
      }
    }
    local_a0 = 0;
    local_a8 = &___7FObjectNetSerializerConfig__6B_;
    pFVar5 = (FIrisPackageMapExportsQuantizedType *)
             (param_2->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
    local_98 = 0;
    pFVar12 = param_2;
    if (pFVar5 != (FIrisPackageMapExportsQuantizedType *)0x0) {
      pFVar12 = pFVar5;
    }
    FVar6 = (param_3->References).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<TObjectPtr<UObject>_>)param_3;
    if (FVar6 != (ForElementType<TObjectPtr<UObject>_>)0x0) {
      FVar10 = FVar6;
    }
    do {
      local_80._padding_ = (longlong)&local_a8;
      local_80._padding_ = 0;
      local_80._padding_._0_4_ = 0;
      local_80.Source = (ulong64)pFVar12;
      local_80.Target = (ulong64)FVar10;
      (*ObjectNetSerializer->Dequantize)(param_1,&local_80);
      pFVar12 = (FIrisPackageMapExportsQuantizedType *)
                ((pFVar12->ObjectReferenceStorage).AllocatorInstance.InlineData + 1);
      uVar14 = uVar14 - 1;
      FVar10 = (ForElementType<TObjectPtr<UObject>_>)((longlong)FVar10 + 8);
    } while (uVar14 != 0);
    local_a8 = &___7FNetSerializerConfig__6B_;
  }
  uVar4 = (param_2->NameStorage).ArrayNum;
  uVar14 = (ulonglong)uVar4;
  pTVar2 = &param_3->Names;
  if (uVar4 != 0) {
    iVar9 = (param_3->Names).ArrayNum;
    if (iVar9 < (int)uVar4) {
      Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                (8,4,uVar4 - iVar9,&pTVar2->AllocatorInstance,&(param_3->Names).ArrayNum,
                 &(param_3->Names).ArrayMax);
    }
    else {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar14);
      }
      if ((int)uVar4 < iVar9) {
        uVar11 = iVar9 - uVar4;
        if (((int)(uVar11 | uVar4) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar11 != 0) {
          FVar13 = (param_3->Names).AllocatorInstance.SecondaryData;
          if (FVar13 == (ForElementType<FName>)0x0) {
            FVar13 = (ForElementType<FName>)pTVar2;
          }
          pvVar3 = (void *)((longlong)FVar13 + (longlong)(int)uVar4 * 8);
          iVar9 = ((param_3->Names).ArrayNum - uVar11) - uVar4;
          if (iVar9 != 0) {
            memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)(int)uVar11 * 8),
                    (longlong)iVar9 << 3);
          }
          piVar1 = &(param_3->Names).ArrayNum;
          *piVar1 = *piVar1 - uVar11;
          Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,&pTVar2->AllocatorInstance,(param_3->Names).ArrayNum,
                     &(param_3->Names).ArrayMax);
        }
      }
    }
    FVar13 = (param_3->Names).AllocatorInstance.SecondaryData;
    local_90 = &___7FNetSerializerConfig__6B_;
    pFVar15 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
               *)(param_2->NameStorage).AllocatorInstance.SecondaryData.Data;
    if (FVar13 == (ForElementType<FName>)0x0) {
      FVar13 = (ForElementType<FName>)pTVar2;
    }
    local_88 = 0;
    if (pFVar15 ==
        (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
         *)0x0) {
      pFVar15 = &param_2->NameStorage;
    }
    do {
      local_58._padding_ = (longlong)&local_90;
      local_58._padding_ = 0;
      local_58._padding_._0_4_ = 0;
      local_58.Source = (ulong64)pFVar15;
      local_58.Target = (ulong64)FVar13;
      (*NameNetSerializer->Dequantize)(param_1,&local_58);
      FVar13 = (ForElementType<FName>)((longlong)FVar13 + 8);
      uVar14 = uVar14 - 1;
      pFVar15 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                 *)((pFVar15->AllocatorInstance).InlineData + 1);
    } while (uVar14 != 0);
  }
  return;
}

// Deserialize @ 14432c730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FIrisPackageMapExportsUtil::Deserialize
          (FNetSerializationContext *param_1,FIrisPackageMapExportsQuantizedType *param_2)

{
  FNetBitStreamReader *this;
  FIrisPackageMapExportsQuantizedType *pFVar1;
  code *pcVar2;
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar3;
  ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *pFVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  FIrisPackageMapExportsQuantizedType *pFVar9;
  FNetTraceCollector *pFVar10;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar11;
  ulonglong uVar12;
  undefined **local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined4 local_80;
  undefined8 local_78;
  FNetDeserializeArgs local_70;
  FNetDeserializeArgs local_50;
  
  this = param_1->BitStreamReader;
  uVar12 = (ulonglong)_tls_index;
  pFVar10 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar10 = param_1->TraceCollector;
  }
  uVar6 = 0xffffffff;
  if (pFVar10 != (FNetTraceCollector *)0x0) {
    uVar6 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,this->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ObjectReferences = CreatePersistentNetDebugName(L"ObjectReferences",0x10);
      _Init_thread_footer(&::_TSS0);
    }
    uVar7 = FNetTrace::TraceName(ObjectReferences);
    FVar8 = (pFVar10->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
    }
    *(uint *)((longlong)FVar8 + (ulonglong)uVar6 * 0x10) = uVar7;
  }
  uVar7 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar7 & 1) == 0) {
    FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::Free(&param_2->ObjectReferenceStorage,param_1);
  }
  else {
    uVar7 = FNetBitStreamReader::ReadBits(this,2);
    uVar7 = FNetBitStreamReader::ReadBits(this,uVar7 * 8 + 8);
    if (0x10000 < uVar7) {
      if (1 < (byte)LogIris._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      FNetSerializationContext::SetError(param_1,GNetError_ArraySizeTooLarge,true);
      if (uVar6 == 0xffffffff) {
        return;
      }
      FNetTrace::EndPacketContentEvent(pFVar10,uVar6,this->BufferBitPosition);
      return;
    }
    FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::AdjustSize(&param_2->ObjectReferenceStorage,param_1,uVar7);
    uVar7 = (param_2->ObjectReferenceStorage).ArrayNum;
    local_88 = &___7FObjectNetSerializerConfig__6B_;
    pFVar1 = (FIrisPackageMapExportsQuantizedType *)
             (param_2->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
    local_80 = 0;
    local_78 = 0;
    pFVar9 = param_2;
    if (pFVar1 != (FIrisPackageMapExportsQuantizedType *)0x0) {
      pFVar9 = pFVar1;
    }
    if (((int)uVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar3 = &pFVar9->ObjectReferenceStorage;
    for (; pFVar9 != (FIrisPackageMapExportsQuantizedType *)
                     ((pFVar3->AllocatorInstance).InlineData + (int)uVar7);
        pFVar9 = (FIrisPackageMapExportsQuantizedType *)
                 ((pFVar9->ObjectReferenceStorage).AllocatorInstance.InlineData + 1)) {
      local_70._padding_._0_4_ = 0;
      local_70._padding_ = (longlong)&local_88;
      local_70._padding_ = 0;
      local_70.Target = (ulong64)pFVar9;
      (*ObjectNetSerializer->Deserialize)(param_1,&local_70);
    }
    local_88 = &___7FNetSerializerConfig__6B_;
  }
  if (uVar6 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar10,uVar6,this->BufferBitPosition);
  }
  uVar6 = 0xffffffff;
  pFVar10 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar10 = param_1->TraceCollector;
  }
  if (pFVar10 != (FNetTraceCollector *)0x0) {
    uVar6 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,this->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Names = CreatePersistentNetDebugName(L"Names",5);
      _Init_thread_footer(&::_TSS0);
    }
    uVar7 = FNetTrace::TraceName(Names);
    FVar8 = (pFVar10->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
    }
    *(uint *)((longlong)FVar8 + (ulonglong)uVar6 * 0x10) = uVar7;
  }
  uVar7 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar7 & 1) == 0) {
    FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::Free(&param_2->NameStorage,param_1);
  }
  else {
    uVar7 = FNetBitStreamReader::ReadBits(this,2);
    uVar7 = FNetBitStreamReader::ReadBits(this,uVar7 * 8 + 8);
    if (0x10000 < uVar7) {
      if (1 < (byte)LogIris._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      FNetSerializationContext::SetError(param_1,GNetError_ArraySizeTooLarge,true);
      if (uVar6 == 0xffffffff) {
        return;
      }
      FNetTrace::EndPacketContentEvent(pFVar10,uVar6,this->BufferBitPosition);
      return;
    }
    FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::AdjustSize(&param_2->NameStorage,param_1,uVar7);
    pFVar11 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
               *)(param_2->NameStorage).AllocatorInstance.SecondaryData.Data;
    uVar7 = (param_2->NameStorage).ArrayNum;
    local_98 = &___7FNetSerializerConfig__6B_;
    local_90 = 0;
    if (pFVar11 ==
        (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
         *)0x0) {
      pFVar11 = &param_2->NameStorage;
    }
    if (((int)uVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = &pFVar11->AllocatorInstance;
    for (; pFVar11 !=
           (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
            *)(pFVar4->InlineData + (int)uVar7);
        pFVar11 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)((pFVar11->AllocatorInstance).InlineData + 1)) {
      local_50._padding_._0_4_ = 0;
      local_50._padding_ = (longlong)&local_98;
      local_50._padding_ = 0;
      local_50.Target = (ulong64)pFVar11;
      (*NameNetSerializer->Deserialize)(param_1,&local_50);
    }
  }
  if (uVar6 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar10,uVar6,this->BufferBitPosition);
  }
  FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free(&param_2->NetTokenStorage,param_1);
  return;
}

// FreeDynamicState @ 14432fc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FIrisPackageMapExportsUtil::FreeDynamicState(FIrisPackageMapExportsQuantizedType *param_1)

{
  FObjectNetSerializerQuantizedReferenceStorage *pFVar1;
  FQuantizedName *pFVar2;
  FNetToken *pFVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined1 local_3a8;
  undefined8 local_3a0;
  uint local_398;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_370 [95];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  puVar6 = local_370;
  local_388 = 0;
  local_380 = 0;
  lVar5 = 0x20;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_28 = local_28 & 0xfffffffc;
  local_58 = &local_3c8;
  local_398 = local_398 & 0xfffffff8;
  pFVar1 = (param_1->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0xffffffff;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3ac = 0xffffffff;
  local_3a8 = 0;
  local_3a0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  if (pFVar1 != (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
    uVar4 = 4;
    if ((param_1->ObjectReferenceStorage).ArrayNum < 4) {
      uVar4 = (param_1->ObjectReferenceStorage).ArrayNum;
    }
    memmove(param_1,pFVar1,(ulonglong)uVar4 * 0x18);
    pFVar1 = (param_1->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
    if (pFVar1 != (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
      FMemory::Free(pFVar1);
      (param_1->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data =
           (FObjectNetSerializerQuantizedReferenceStorage *)0x0;
    }
  }
  (param_1->ObjectReferenceStorage).ArrayMaxCapacity = 4;
  (param_1->ObjectReferenceStorage).ArrayNum = 0;
  pFVar2 = (param_1->NameStorage).AllocatorInstance.SecondaryData.Data;
  if (pFVar2 != (FQuantizedName *)0x0) {
    uVar4 = 4;
    if ((param_1->NameStorage).ArrayNum < 4) {
      uVar4 = (param_1->NameStorage).ArrayNum;
    }
    memmove(&param_1->NameStorage,pFVar2,(ulonglong)uVar4 * 0x18);
    pFVar2 = (param_1->NameStorage).AllocatorInstance.SecondaryData.Data;
    if (pFVar2 != (FQuantizedName *)0x0) {
      FMemory::Free(pFVar2);
      (param_1->NameStorage).AllocatorInstance.SecondaryData.Data = (FQuantizedName *)0x0;
    }
  }
  (param_1->NameStorage).ArrayMaxCapacity = 4;
  (param_1->NameStorage).ArrayNum = 0;
  pFVar3 = (param_1->NetTokenStorage).AllocatorInstance.SecondaryData.Data;
  if (pFVar3 != (FNetToken *)0x0) {
    uVar4 = 4;
    if ((param_1->NetTokenStorage).ArrayNum < 4) {
      uVar4 = (param_1->NetTokenStorage).ArrayNum;
    }
    memmove(&param_1->NetTokenStorage,pFVar3,(ulonglong)uVar4 << 2);
    pFVar3 = (param_1->NetTokenStorage).AllocatorInstance.SecondaryData.Data;
    if (pFVar3 != (FNetToken *)0x0) {
      FMemory::Free(pFVar3);
      (param_1->NetTokenStorage).AllocatorInstance.SecondaryData.Data = (FNetToken *)0x0;
    }
  }
  (param_1->NetTokenStorage).ArrayMaxCapacity = 4;
  (param_1->NetTokenStorage).ArrayNum = 0;
  return;
}

// FreeDynamicState @ 14432fe20

void __cdecl
UE::Net::FIrisPackageMapExportsUtil::FreeDynamicState
          (FNetSerializationContext *param_1,FIrisPackageMapExportsQuantizedType *param_2)

{
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free(&param_2->ObjectReferenceStorage,param_1);
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free(&param_2->NameStorage,param_1);
  FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free(&param_2->NetTokenStorage,param_1);
  return;
}

// IsEqual @ 144333a30

bool __cdecl
UE::Net::FIrisPackageMapExportsUtil::IsEqual
          (FNetSerializationContext *param_1,FIrisPackageMapExportsQuantizedType *param_2,
          FIrisPackageMapExportsQuantizedType *param_3)

{
  uint uVar1;
  uint uVar2;
  FIrisPackageMapExportsQuantizedType *pFVar3;
  int iVar4;
  FIrisPackageMapExportsQuantizedType *_Buf1;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *_Buf1_00;
  FIrisPackageMapExportsQuantizedType *_Buf2;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *_Buf2_00;
  
  uVar1 = (param_2->ObjectReferenceStorage).ArrayNum;
  if (uVar1 == (param_3->ObjectReferenceStorage).ArrayNum) {
    uVar2 = (param_2->NameStorage).ArrayNum;
    if ((uVar2 == (param_3->NameStorage).ArrayNum) &&
       ((param_2->NetTokenStorage).ArrayNum == (param_3->NetTokenStorage).ArrayNum)) {
      if (uVar1 != 0) {
        pFVar3 = (FIrisPackageMapExportsQuantizedType *)
                 (param_3->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
        _Buf2 = param_3;
        if (pFVar3 != (FIrisPackageMapExportsQuantizedType *)0x0) {
          _Buf2 = pFVar3;
        }
        pFVar3 = (FIrisPackageMapExportsQuantizedType *)
                 (param_2->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
        _Buf1 = param_2;
        if (pFVar3 != (FIrisPackageMapExportsQuantizedType *)0x0) {
          _Buf1 = pFVar3;
        }
        iVar4 = memcmp(_Buf1,_Buf2,(ulonglong)uVar1 << 4);
        if (iVar4 != 0) {
          return false;
        }
      }
      if (uVar2 != 0) {
        _Buf2_00 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                    *)(param_3->NameStorage).AllocatorInstance.SecondaryData.Data;
        _Buf1_00 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                    *)(param_2->NameStorage).AllocatorInstance.SecondaryData.Data;
        if (_Buf2_00 ==
            (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
             *)0x0) {
          _Buf2_00 = &param_3->NameStorage;
        }
        if (_Buf1_00 ==
            (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
             *)0x0) {
          _Buf1_00 = &param_2->NameStorage;
        }
        iVar4 = memcmp(_Buf1_00,_Buf2_00,(ulonglong)uVar2 << 3);
        if (iVar4 != 0) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// Quantize @ 144336050

void __cdecl
UE::Net::FIrisPackageMapExportsUtil::Quantize
          (FNetSerializationContext *param_1,FIrisPackageMapExports *param_2,
          TArrayView<UE::Net::FNetToken_const_,int> *param_3,
          FIrisPackageMapExportsQuantizedType *param_4)

{
  FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *this;
  ForElementType<UE::Net::FNetToken> *pFVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<TObjectPtr<UObject>_> FVar4;
  FIrisPackageMapExportsQuantizedType *pFVar5;
  code *pcVar6;
  bool bVar7;
  FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<TObjectPtr<UObject>_> FVar12;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar13;
  ulonglong uVar14;
  FIrisPackageMapExportsQuantizedType *pFVar15;
  ForElementType<FName> FVar16;
  undefined **local_a8;
  undefined4 local_a0;
  undefined **local_98;
  undefined4 local_90;
  undefined8 local_88;
  FNetQuantizeArgs local_80;
  FNetQuantizeArgs local_58;
  
  uVar2 = (param_2->References).ArrayNum;
  uVar14 = (ulonglong)uVar2;
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::AdjustSize(&param_4->ObjectReferenceStorage,param_1,uVar2);
  if (uVar2 != 0) {
    local_90 = 0;
    local_98 = &___7FObjectNetSerializerConfig__6B_;
    FVar4 = (param_2->References).AllocatorInstance.SecondaryData;
    local_88 = 0;
    FVar12 = (ForElementType<TObjectPtr<UObject>_>)param_2;
    if (FVar4 != (ForElementType<TObjectPtr<UObject>_>)0x0) {
      FVar12 = FVar4;
    }
    pFVar5 = (FIrisPackageMapExportsQuantizedType *)
             (param_4->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
    pFVar15 = param_4;
    if (pFVar5 != (FIrisPackageMapExportsQuantizedType *)0x0) {
      pFVar15 = pFVar5;
    }
    do {
      local_80._padding_._0_4_ = 0;
      local_80._padding_ = (longlong)&local_98;
      local_80._padding_ = 0;
      local_80.Source = (ulong64)FVar12;
      local_80.Target = (ulong64)pFVar15;
      (*ObjectNetSerializer->Quantize)(param_1,&local_80);
      FVar12 = (ForElementType<TObjectPtr<UObject>_>)((longlong)FVar12 + 8);
      pFVar15 = (FIrisPackageMapExportsQuantizedType *)
                ((pFVar15->ObjectReferenceStorage).AllocatorInstance.InlineData + 1);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    local_98 = &___7FNetSerializerConfig__6B_;
  }
  uVar2 = (param_2->Names).ArrayNum;
  uVar14 = (ulonglong)uVar2;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::AdjustSize(&param_4->NameStorage,param_1,uVar2);
  if (uVar2 != 0) {
    FVar16 = (param_2->Names).AllocatorInstance.SecondaryData;
    local_a8 = &___7FNetSerializerConfig__6B_;
    pFVar13 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
               *)(param_4->NameStorage).AllocatorInstance.SecondaryData.Data;
    local_a0 = 0;
    if (pFVar13 ==
        (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
         *)0x0) {
      pFVar13 = &param_4->NameStorage;
    }
    if (FVar16 == (ForElementType<FName>)0x0) {
      FVar16 = (ForElementType<FName>)&param_2->Names;
    }
    do {
      local_58._padding_ = (longlong)&local_a8;
      local_58._padding_ = 0;
      local_58._padding_._0_4_ = 0;
      local_58.Source = (ulong64)FVar16;
      local_58.Target = (ulong64)pFVar13;
      (*NameNetSerializer->Quantize)(param_1,&local_58);
      pFVar13 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                 *)((pFVar13->AllocatorInstance).InlineData + 1);
      uVar14 = uVar14 - 1;
      FVar16 = (ForElementType<FName>)((longlong)FVar16 + 8);
    } while (uVar14 != 0);
    local_a8 = &___7FNetSerializerConfig__6B_;
  }
  uVar11 = 0;
  uVar2 = param_3->ArrayNum;
  this = &param_4->NetTokenStorage;
  uVar10 = uVar2;
  if (uVar2 < 5) {
    uVar10 = 4;
  }
  AllocationPolicies::
  TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
  ForElementType<UE::Net::FNetToken>::ResizeAllocation
            (&this->AllocatorInstance,param_1,(param_4->NetTokenStorage).ArrayNum,uVar10);
  uVar3 = (param_4->NetTokenStorage).ArrayNum;
  pFVar1 = &(param_4->NetTokenStorage).AllocatorInstance.SecondaryData;
  (param_4->NetTokenStorage).ArrayMaxCapacity = uVar10;
  if (uVar3 < uVar10) {
    pFVar8 = (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)pFVar1->Data;
    if (pFVar8 == (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)0x0) {
      pFVar8 = this;
    }
    memset((pFVar8->AllocatorInstance).InlineData + uVar3,0,(ulonglong)(uVar10 - uVar3) << 2);
  }
  if (uVar2 < uVar10) {
    uVar10 = uVar2;
  }
  (param_4->NetTokenStorage).ArrayNum = uVar10;
  pFVar8 = (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
            *)pFVar1->Data;
  if (pFVar8 == (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                 *)0x0) {
    pFVar8 = this;
  }
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      if ((int)uVar11 < (int)uVar2) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar9 = (longlong)(int)uVar11;
      uVar11 = uVar11 + 1;
      *(FNetToken_u_0 *)(pFVar8->AllocatorInstance).InlineData[0].Pad =
           param_3->DataPtr[lVar9].field0_0x0;
      pFVar8 = (FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                *)((pFVar8->AllocatorInstance).InlineData + 1);
    } while (uVar11 < uVar2);
  }
  return;
}

// Serialize @ 14433bab0

void __cdecl
UE::Net::FIrisPackageMapExportsUtil::Serialize
          (FNetSerializationContext *param_1,FIrisPackageMapExportsQuantizedType *param_2)

{
  FNetToken_u_0 *pFVar1;
  ulonglong uVar2;
  FNetBitStreamWriter *this;
  FIrisPackageMapExportsQuantizedType *pFVar3;
  FNetExportContext *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar7;
  ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  uint uVar13;
  FIrisPackageMapExportsQuantizedType *pFVar14;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar15;
  FNetToken_u_0 *pFVar16;
  FNetTraceCollector *pFVar17;
  FNetToken_u_0 local_res18 [2];
  int local_res20;
  undefined **local_b0;
  undefined4 local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined8 local_90;
  FNetSerializeArgs local_88;
  FNetSerializeArgs local_68;
  
  this = param_1->BitStreamWriter;
  pFVar17 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar17 = param_1->TraceCollector;
  }
  uVar10 = 0xffffffff;
  if (pFVar17 != (FNetTraceCollector *)0x0) {
    uVar10 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar10 = 0;
    }
    uVar10 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar10);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ObjectReferences = CreatePersistentNetDebugName(L"ObjectReferences",0x10);
      _Init_thread_footer(&::_TSS0);
    }
    uVar11 = FNetTrace::TraceName(ObjectReferences);
    FVar12 = (pFVar17->Events).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
    }
    *(uint *)((longlong)FVar12 + (ulonglong)uVar10 * 0x10) = uVar11;
  }
  uVar11 = (param_2->ObjectReferenceStorage).ArrayNum;
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar11 != 0),1);
  if (uVar11 != 0) {
    uVar2 = ((ulonglong)uVar11 | 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_res20 = (int)lVar5;
    uVar13 = local_res20 + 7U >> 3;
    FNetBitStreamWriter::WriteBits(this,uVar13 - 1,2);
    FNetBitStreamWriter::WriteBits(this,uVar11,uVar13 * 8);
    local_a0 = &___7FObjectNetSerializerConfig__6B_;
    pFVar3 = (FIrisPackageMapExportsQuantizedType *)
             (param_2->ObjectReferenceStorage).AllocatorInstance.SecondaryData.Data;
    local_98 = 0;
    local_90 = 0;
    pFVar14 = param_2;
    if (pFVar3 != (FIrisPackageMapExportsQuantizedType *)0x0) {
      pFVar14 = pFVar3;
    }
    if (((int)uVar11 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar7 = &pFVar14->ObjectReferenceStorage;
    for (; pFVar14 !=
           (FIrisPackageMapExportsQuantizedType *)
           ((pFVar7->AllocatorInstance).InlineData + (int)uVar11);
        pFVar14 = (FIrisPackageMapExportsQuantizedType *)
                  ((pFVar14->ObjectReferenceStorage).AllocatorInstance.InlineData + 1)) {
      local_88._padding_ = (longlong)&local_a0;
      local_88._padding_ = 0;
      local_88._padding_._0_4_ = 0;
      local_88.Source = (ulong64)pFVar14;
      (*ObjectNetSerializer->Serialize)(param_1,&local_88);
    }
    local_a0 = &___7FNetSerializerConfig__6B_;
  }
  if (uVar10 != 0xffffffff) {
    uVar11 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar11 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar17,uVar10,uVar11);
  }
  uVar10 = 0xffffffff;
  pFVar17 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar17 = param_1->TraceCollector;
  }
  if (pFVar17 != (FNetTraceCollector *)0x0) {
    uVar10 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar10 = 0;
    }
    uVar10 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar10);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Names = CreatePersistentNetDebugName(L"Names",5);
      _Init_thread_footer(&::_TSS0);
    }
    uVar11 = FNetTrace::TraceName(Names);
    FVar12 = (pFVar17->Events).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
    }
    *(uint *)((longlong)FVar12 + (ulonglong)uVar10 * 0x10) = uVar11;
  }
  uVar11 = (param_2->NameStorage).ArrayNum;
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar11 != 0),1);
  if (uVar11 != 0) {
    uVar2 = ((ulonglong)uVar11 | 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar13 = (int)lVar5 + 7U >> 3;
    FNetBitStreamWriter::WriteBits(this,uVar13 - 1,2);
    FNetBitStreamWriter::WriteBits(this,uVar11,uVar13 * 8);
    pFVar15 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
               *)(param_2->NameStorage).AllocatorInstance.SecondaryData.Data;
    local_b0 = &___7FNetSerializerConfig__6B_;
    local_a8 = 0;
    if (pFVar15 ==
        (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
         *)0x0) {
      pFVar15 = &param_2->NameStorage;
    }
    if (((int)uVar11 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar8 = &pFVar15->AllocatorInstance;
    for (; pFVar15 !=
           (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
            *)(pFVar8->InlineData + (int)uVar11);
        pFVar15 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)((pFVar15->AllocatorInstance).InlineData + 1)) {
      local_68._padding_ = (longlong)&local_b0;
      local_68._padding_ = 0;
      local_68._padding_._0_4_ = 0;
      local_68.Source = (ulong64)pFVar15;
      (*NameNetSerializer->Serialize)(param_1,&local_68);
    }
    local_b0 = &___7FNetSerializerConfig__6B_;
  }
  if (uVar10 != 0xffffffff) {
    uVar11 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar11 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar17,uVar10,uVar11);
  }
  pFVar4 = param_1->ExportContext;
  if (pFVar4 != (FNetExportContext *)0x0) {
    pFVar16 = &((param_2->NetTokenStorage).AllocatorInstance.SecondaryData.Data)->field0_0x0;
    uVar10 = (param_2->NetTokenStorage).ArrayNum;
    if (pFVar16 == (FNetToken_u_0 *)0x0) {
      pFVar16 = (FNetToken_u_0 *)&param_2->NetTokenStorage;
    }
    if (((int)uVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar1 = pFVar16 + (int)uVar10;
    for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 1) {
      local_res18[0] = *pFVar16;
      TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<UE::Net::FNetToken_const_&>
                (&pFVar4->BatchExports->NetTokensPendingExportInCurrentBatch,
                 (FNetToken *)&local_res18[0]._s_0);
    }
  }
  return;
}

// Validate @ 14433f5c0

bool __cdecl
UE::Net::FIrisPackageMapExportsUtil::Validate
          (FNetSerializationContext *param_1,FIrisPackageMapExportsQuantizedType *param_2)

{
  if ((param_2->ObjectReferenceStorage).ArrayNum < 0x10001) {
    return (param_2->NameStorage).ArrayNum < 0x10001;
  }
  return false;
}

