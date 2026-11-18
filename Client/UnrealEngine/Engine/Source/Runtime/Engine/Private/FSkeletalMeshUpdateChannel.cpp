// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// Replay<FSkeletalMeshUpdatePacketGPUSkin> @ 148604280

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketGPUSkin>
          (FSkeletalMeshUpdateChannel *this,FRHICommandList *param_1,
          FSkeletalMeshUpdatePacketGPUSkin *param_2)

{
  TArray<FSkeletalMeshUpdateChannel::FSlot,TSizedDefaultAllocator<32>_> *pTVar1;
  FSlotRegistry *this_00;
  FOpStream *pFVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar5;
  FSkeletalMeshObjectGPUSkin *this_01;
  code *pcVar6;
  byte bVar7;
  undefined8 uVar8;
  FOp *pFVar9;
  bool bVar10;
  bool bVar11;
  ERHIPipeline EVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ForElementType<unsigned_int> FVar20;
  int iVar21;
  uint uVar22;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar23;
  ForElementType<unsigned_int> FVar24;
  ulonglong uVar25;
  uint uVar26;
  FOp *pFVar27;
  undefined1 local_a8 [4];
  uint local_a4;
  ulonglong local_a0;
  FOp *local_98;
  int local_90;
  int local_8c;
  int local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70 [6];
  
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                          ,0x39,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketGPUSkin>(FRHICommandList&___ptr64,FSkeletalMeshUpdatePacketGPUSkin&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId58,"FSkeletalMeshUpdateChannel::Replay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
               ,0x3a);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketGPUSkin>(FRHICommandList&___ptr64,FSkeletalMeshUpdatePacketGPUSkin&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId58);
  }
  local_a0 = 1;
  local_a4 = (this->OpStream).Ops.ArrayNum;
  uVar18 = (ulonglong)(int)local_a4;
  pFVar27 = (this->OpStream).Ops.AllocatorInstance.Data;
  local_98 = pFVar27 + uVar18;
  uVar25 = 1;
  while( true ) {
    pFVar9 = local_98;
    if ((this->OpStream).Ops.ArrayNum != (int)uVar18) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FSkeletalMeshUpdateChannel::FOp,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_a8);
    }
    if (pFVar27 == pFVar9) break;
    iVar14 = pFVar27->HandleIndex;
    uStack_84 = *(uint *)&pFVar27->Type;
    uStack_80 = *(undefined4 *)&pFVar27->field2_0x8;
    uStack_7c = *(undefined4 *)((longlong)&pFVar27->field2_0x8 + 4);
    local_88 = iVar14;
    if ((char)uStack_84 == '\0') {
      iVar13 = (this->SlotRegistry).Slots.ArrayNum;
      iVar21 = iVar14 + 1;
      pTVar1 = &(this->SlotRegistry).Slots;
      if (iVar13 < iVar21) {
        iVar13 = iVar21 - iVar13;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,8,iVar13,&pTVar1->AllocatorInstance,
                            &(this->SlotRegistry).Slots.ArrayNum,
                            &(this->SlotRegistry).Slots.ArrayMax);
        DefaultConstructItems<FSkeletalMeshUpdateChannel::FSlot,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 0x18,iVar13);
        TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
                  (&(this->SlotRegistry).SlotBits,iVar21,false);
      }
      if ((iVar14 < 0 || (this->SlotRegistry).Slots.ArrayNum <= iVar14) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 0x18) =
           CONCAT44(uStack_7c,uStack_80);
LAB_1486046cb:
      pFVar27 = pFVar27 + 1;
      uVar18 = (ulonglong)local_a4;
    }
    else {
      bVar7 = (byte)iVar14;
      if ((uStack_84 & 0xff) == 1) {
        if ((iVar14 < 0 || (this->SlotRegistry).Slots.ArrayNum <= iVar14) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar19 = (longlong)iVar14;
        pFVar4 = (this->SlotRegistry).Slots.AllocatorInstance.Data;
        if ((*(longlong *)(pFVar4 + lVar19 * 0x18) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Slot.MeshObject",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                                ,0x5c,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar8 = CONCAT44(uStack_7c,uStack_80);
        if (*(longlong *)(pFVar4 + lVar19 * 0x18 + 8) == 0) {
          *(undefined8 *)(pFVar4 + lVar19 * 0x18 + 8) = uVar8;
          *(undefined8 *)(pFVar4 + lVar19 * 0x18 + 0x10) = uVar8;
        }
        else {
          *(undefined8 *)(*(longlong *)(pFVar4 + lVar19 * 0x18 + 0x10) + 8) = uVar8;
          *(undefined8 *)(pFVar4 + lVar19 * 0x18 + 0x10) = uVar8;
        }
        if (((iVar14 < 0) || ((this->SlotRegistry).SlotBits.NumBits <= iVar14)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar20 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
        FVar24 = (ForElementType<unsigned_int>)&this->SlotRegistry;
        if (FVar20 != (ForElementType<unsigned_int>)0x0) {
          FVar24 = FVar20;
        }
        if (iVar14 < 0) {
          iVar14 = iVar14 + 0x1f;
        }
        puVar3 = (uint *)((longlong)FVar24 + (longlong)(iVar14 >> 5) * 4);
        *puVar3 = *puVar3 | (int)uVar25 << (bVar7 & 0x1f);
        uVar18 = (ulonglong)local_a4;
        pFVar27 = pFVar27 + 1;
      }
      else {
        if ((uStack_84 & 0xff) != 2) goto LAB_1486046cb;
        if ((iVar14 < 0 || (this->SlotRegistry).Slots.ArrayNum <= iVar14) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->SlotRegistry).Slots.AllocatorInstance.Data;
        pFVar23 = *(FDynamicSkelMeshObjectDataGPUSkin **)(pFVar4 + (longlong)iVar14 * 0x18 + 8);
        pFVar4 = pFVar4 + (longlong)iVar14 * 0x18;
        if (pFVar23 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
          do {
            pFVar5 = *(FDynamicSkelMeshObjectDataGPUSkin **)&pFVar23->field_0x8;
            *(undefined8 *)&pFVar23->field_0x8 = 0;
            iVar13 = (param_2->DynamicDatasToFree).ArrayNum;
            if (iVar13 == (param_2->DynamicDatasToFree).ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FDynamicSkelMeshObjectDataGPUSkin_*>_>
                                 (0x808,&(param_2->DynamicDatasToFree).AllocatorInstance,
                                  &(param_2->DynamicDatasToFree).ArrayMax);
            }
            (param_2->DynamicDatasToFree).ArrayNum = iVar13 + 1;
            (param_2->DynamicDatasToFree).AllocatorInstance.Data[iVar13] = pFVar23;
            pFVar23 = pFVar5;
          } while (pFVar5 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0);
        }
        *(undefined8 *)pFVar4 = 0;
        *(undefined8 *)(pFVar4 + 8) = 0;
        *(undefined8 *)(pFVar4 + 0x10) = 0;
        if (((iVar14 < 0) || ((this->SlotRegistry).SlotBits.NumBits <= iVar14)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar20 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
        FVar24 = (ForElementType<unsigned_int>)&this->SlotRegistry;
        if (FVar20 != (ForElementType<unsigned_int>)0x0) {
          FVar24 = FVar20;
        }
        if (iVar14 < 0) {
          iVar14 = iVar14 + 0x1f;
        }
        puVar3 = (uint *)((longlong)FVar24 + (longlong)(iVar14 >> 5) * 4);
        *puVar3 = *puVar3 & ~((int)local_a0 << (bVar7 & 0x1f));
        uVar18 = (ulonglong)local_a4;
        pFVar27 = pFVar27 + 1;
        uVar25 = local_a0;
      }
    }
  }
  uVar17 = (this->SlotRegistry).SlotBits.NumBits;
  local_a4 = 0;
  iVar14 = 0;
  uVar26 = 0xffffffff;
  uVar16 = 0;
  if (uVar17 != 0) {
    FVar20 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<unsigned_int>)0x0) {
      FVar20 = (ForElementType<unsigned_int>)&this->SlotRegistry;
    }
    uVar16 = *(uint *)FVar20;
    local_a4 = 0;
    while (uVar16 == 0) {
      lVar19 = (longlong)(int)local_a4;
      iVar14 = iVar14 + 0x20;
      local_a4 = local_a4 + 1;
      uVar16 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a4)
      goto LAB_148604777;
      uVar16 = *(uint *)((uchar *)((longlong)FVar20 + 4) + lVar19 * 4);
    }
    local_a0 = (ulonglong)(-uVar16 & uVar16);
    uVar25 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_90 = (int)lVar19;
    uVar16 = local_90 + -1 + iVar14;
    if ((int)uVar17 < (int)uVar16) {
      uVar16 = uVar17;
    }
  }
LAB_148604777:
  uVar22 = local_a4;
  if ((int)uVar16 < (int)uVar17) {
    do {
      uVar17 = 0;
      if ((int)uVar16 < (this->SlotRegistry).Slots.ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->SlotRegistry).Slots.AllocatorInstance.Data;
      pFVar23 = *(FDynamicSkelMeshObjectDataGPUSkin **)(pFVar4 + (longlong)(int)uVar16 * 0x18 + 8);
      local_98 = (FOp *)(pFVar4 + (longlong)(int)uVar16 * 0x18);
      this_01 = *(FSkeletalMeshObjectGPUSkin **)local_98;
      if (pFVar23 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
        while( true ) {
          pFVar5 = *(FDynamicSkelMeshObjectDataGPUSkin **)&pFVar23->field_0x8;
          *(undefined8 *)&pFVar23->field_0x8 = 0;
          if (pFVar5 == (FDynamicSkelMeshObjectDataGPUSkin *)0x0) break;
          if (pFVar23->GPUSkinTechnique == GPUSkinCache) {
            EVar12 = (ERHIPipeline)param_2->_padding_;
          }
          else {
            EVar12 = Graphics;
          }
          EVar12 = FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,EVar12);
          FSkeletalMeshObjectGPUSkin::UpdateDynamicData_RenderThread(this_01,param_1,pFVar23);
          FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,EVar12);
          pFVar23 = pFVar5;
        }
        FSkeletalMeshUpdatePacketGPUSkin::Add(param_2,this_01,pFVar23);
        uVar22 = local_a4;
      }
      local_98[1].HandleIndex = 0;
      local_98[1].Type = Add;
      *(undefined3 *)&local_98[1].field_0x5 = 0;
      uVar26 = uVar26 & ~(uint)local_a0;
      local_98->field2_0x8 = (FOp_u_8)0x0;
      FVar20 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
      uVar17 = (this->SlotRegistry).SlotBits.NumBits;
      FVar24 = (ForElementType<unsigned_int>)&this->SlotRegistry;
      if (FVar20 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = FVar20;
      }
      uVar16 = uVar26 & *(uint *)((longlong)FVar24 + (longlong)(int)uVar22 * 4);
      while (uVar16 == 0) {
        lVar19 = (longlong)(int)uVar22;
        iVar14 = iVar14 + 0x20;
        uVar22 = uVar22 + 1;
        uVar16 = uVar17;
        local_a4 = uVar22;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
        goto LAB_148604924;
        uVar26 = 0xffffffff;
        uVar16 = *(uint *)((uchar *)((longlong)FVar24 + 4) + lVar19 * 4);
      }
      local_a0 = CONCAT44(local_a0._4_4_,-uVar16 & uVar16);
      uVar25 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_8c = (int)lVar19;
      uVar16 = local_8c + -1 + iVar14;
      if ((int)uVar17 < (int)uVar16) {
        uVar16 = uVar17;
      }
LAB_148604924:
    } while ((int)uVar16 < (this->SlotRegistry).SlotBits.NumBits);
  }
  this_00 = &this->SlotRegistry;
  iVar14 = (this->SlotRegistry).SlotBits.NumBits;
  (this->SlotRegistry).SlotBits.NumBits = iVar14;
  uVar17 = iVar14 + 0x1f;
  uVar26 = uVar17 >> 5;
  if (uVar17 >> 5 != 0) {
    if ((this->SlotRegistry).SlotBits.MaxBits + 0x1fU >> 5 < uVar26) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this_00,0,uVar26,4);
      (this->SlotRegistry).SlotBits.MaxBits = uVar26 << 5;
    }
    FVar20 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<unsigned_int>)0x0) {
      FVar20 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar20,0,(ulonglong)uVar26 << 2);
    iVar14 = (this->SlotRegistry).SlotBits.NumBits;
    uVar26 = iVar14 >> 0x1f & 0x1f;
    uVar17 = iVar14 + uVar26;
    iVar14 = (uVar17 & 0x1f) - uVar26;
    if (iVar14 != 0) {
      FVar20 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
      if (FVar20 == (ForElementType<unsigned_int>)0x0) {
        FVar20 = (ForElementType<unsigned_int>)this_00;
      }
      puVar3 = (uint *)((longlong)FVar20 + (longlong)((int)uVar17 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar14 & 0x1f);
    }
  }
  pFVar2 = &this->OpStream;
  if (pFVar2 != (FOpStream *)local_70) {
    pFVar27 = (pFVar2->Ops).AllocatorInstance.Data;
    if (pFVar27 != (FOp *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar27);
    }
    (pFVar2->Ops).AllocatorInstance.Data = (FOp *)0x0;
    (this->OpStream).Ops.ArrayNum = 0;
    (this->OpStream).Ops.ArrayMax = 0;
  }
  (this->OpStream).NumAdds = 0;
  (this->OpStream).NumRemoves = 0;
  (this->OpStream).NumUpdates = 0;
  (this->OpStream).Num = 0;
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FSkeletalMeshUpdateChannel @ 148623a60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshUpdateChannel * __thiscall
FSkeletalMeshUpdateChannel::FSkeletalMeshUpdateChannel
          (FSkeletalMeshUpdateChannel *this,FBackend *param_1)

{
  int *piVar1;
  FBackend *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar6;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar7;
  FSkeletalMeshUpdateChannel *pFVar8;
  
  aVar7 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0;
  (this->IndexAllocator).Mutex.State = (atomic<unsigned_char>)0x0;
  (this->IndexAllocator).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexAllocator).FreeList.ArrayNum = 0;
  (this->IndexAllocator).FreeList.ArrayMax = 0;
  (this->IndexAllocator).Max = 0;
  aVar6 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)::operator_new(0x30)
  ;
  if (aVar6 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
    *(undefined8 *)aVar6 = 0;
    *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)
     ((longlong)aVar6 + 0x18) = aVar6;
    *(undefined8 *)((longlong)aVar6 + 0x20) = 0;
    *(undefined8 *)((longlong)aVar6 + 0x28) = 0;
    aVar7 = aVar6;
  }
  (this->OpQueue).Ptr = (FOpQueue *)aVar7;
  (this->OpStream).Ops.AllocatorInstance.Data = (FOp *)0x0;
  (this->OpStream).Ops.ArrayNum = 0;
  (this->OpStream).Ops.ArrayMax = 0;
  (this->OpStream).NumAdds = 0;
  (this->OpStream).NumRemoves = 0;
  (this->OpStream).NumUpdates = 0;
  (this->OpStream).Num = 0;
  (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SlotRegistry).SlotBits.NumBits = 0;
  (this->SlotRegistry).SlotBits.MaxBits = 0x80;
  (this->SlotRegistry).Slots.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotRegistry).Slots.ArrayNum = 0;
  (this->SlotRegistry).Slots.ArrayMax = 0;
  this->Backend = param_1;
  if ((param_1 == (FBackend *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Backend",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0xc0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FSkeletalMeshUpdateChannel *)(*pcVar3)();
    return pFVar8;
  }
  pFVar2 = this->Backend;
  piVar1 = &(pFVar2->Channels).ArrayMax;
  iVar5 = (pFVar2->Channels).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar2->Channels).AllocatorInstance,piVar1);
  }
  (pFVar2->Channels).ArrayNum = iVar5 + 1;
  *(FSkeletalMeshUpdateChannel **)((pFVar2->Channels).AllocatorInstance.Data + (longlong)iVar5 * 8)
       = this;
  return this;
}

// ~FSkeletalMeshUpdateChannel @ 148625550

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdateChannel::~FSkeletalMeshUpdateChannel(FSkeletalMeshUpdateChannel *this)

{
  int iVar1;
  FBackend *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  FOp *pFVar5;
  FOpQueue *pFVar6;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar7;
  code *pcVar8;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar9;
  bool bVar10;
  FSkeletalMeshUpdateChannel *pFVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FSkeletalMeshUpdateChannel *local_38 [2];
  
  pFVar2 = this->Backend;
  if (pFVar2 != (FBackend *)0x0) {
    pFVar3 = (pFVar2->Channels).AllocatorInstance.Data;
    local_38[0] = this;
    if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(pFVar2->Channels).ArrayMax * 8))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar1 = (pFVar2->Channels).ArrayNum;
    if (iVar1 != 0) {
      iVar15 = 0;
      pFVar3 = (pFVar2->Channels).AllocatorInstance.Data;
      bVar10 = *(FSkeletalMeshUpdateChannel **)pFVar3 != local_38[0];
      lVar12 = 0;
      pFVar11 = local_38[0];
      iVar13 = 0;
      do {
        iVar14 = iVar13;
        do {
          lVar12 = lVar12 + 1;
          iVar14 = iVar14 + 1;
          if (iVar1 <= lVar12) break;
        } while (bVar10 == (*(FSkeletalMeshUpdateChannel **)(pFVar3 + lVar12 * 8) != pFVar11));
        if (bVar10 != false) {
          if (iVar15 != iVar13) {
            memmove(pFVar3 + (longlong)iVar15 * 8,pFVar3 + (longlong)iVar13 * 8,
                    (longlong)(iVar14 - iVar13) << 3);
            pFVar11 = local_38[0];
          }
          iVar15 = iVar15 + (iVar14 - iVar13);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar13 = iVar14;
      } while (lVar12 < iVar1);
      (pFVar2->Channels).ArrayNum = iVar15;
    }
  }
  if (((this->OpQueue).Ptr != (FOpQueue *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!OpQueue",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                          ,0xcc,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->OpStream).Ops.ArrayNum != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OpStream.Ops.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                          ,0xcd,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->IndexAllocator).Max != (this->IndexAllocator).FreeList.ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumAllocatedHandles == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                          ,0xd0,
                          L"FSkeletalMeshUpdateChannel is destructing but still has %d valid handles!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar3 = (this->SlotRegistry).Slots.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVar4 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar5 = (this->OpStream).Ops.AllocatorInstance.Data;
  if (pFVar5 != (FOp *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar5);
  }
  pFVar6 = (this->OpQueue).Ptr;
  if (pFVar6 != (FOpQueue *)0x0) {
    if ((pFVar6->Queue).Head !=
        (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
      aVar9 = (pFVar6->Queue).Sentinel.Next;
      while (aVar9 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
        aVar7 = *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)aVar9;
        ::operator_delete((void *)aVar9,0x18);
        aVar9 = aVar7;
      }
    }
    ::operator_delete(pFVar6,0x30);
  }
  pFVar3 = (this->IndexAllocator).FreeList.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Create @ 148635440

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshUpdateHandle * __thiscall
FSkeletalMeshUpdateChannel::Create
          (FSkeletalMeshUpdateChannel *this,FSkeletalMeshUpdateHandle *__return_storage_ptr__,
          FSkeletalMeshObject *param_1)

{
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  FOpQueue *pFVar5;
  code *pcVar6;
  bool bVar7;
  FSkeletalMeshUpdateHandle *pFVar8;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar9;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar10;
  uint uVar11;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar12;
  undefined4 uStack_14;
  
  bVar7 = IsInGameThread();
  if (((!bVar7) && (bVar7 = IsInParallelGameThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0xd5,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FSkeletalMeshUpdateHandle *)(*pcVar6)();
    return pFVar8;
  }
  __return_storage_ptr__->Index = 0xffffffff;
  if ((this == (FSkeletalMeshUpdateChannel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FSkeletalMeshUpdateHandle *)(*pcVar6)();
    return pFVar8;
  }
  LOCK();
  bVar7 = (this->IndexAllocator).Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this->IndexAllocator).Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow((FMutex *)this);
  }
  iVar4 = (this->IndexAllocator).FreeList.ArrayNum;
  if (iVar4 == 0) {
    uVar11 = (this->IndexAllocator).Max;
    (this->IndexAllocator).Max = uVar11 + 1;
  }
  else {
    if ((iVar4 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FSkeletalMeshUpdateHandle *)(*pcVar6)();
      return pFVar8;
    }
    iVar4 = (this->IndexAllocator).FreeList.ArrayNum;
    uVar11 = *(uint *)((this->IndexAllocator).FreeList.AllocatorInstance.Data +
                      (longlong)iVar4 * 4 + -4);
    (this->IndexAllocator).FreeList.ArrayNum = iVar4 + -1;
  }
  LOCK();
  aVar3 = (this->IndexAllocator).Mutex.State;
  (this->IndexAllocator).Mutex.State =
       (atomic<unsigned_char>)((char)(this->IndexAllocator).Mutex.State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)this);
  }
  __return_storage_ptr__->Index = uVar11;
  __return_storage_ptr__->Channel = this;
  if (((this->OpQueue).Ptr == (FOpQueue *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpQueue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0xe0,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FSkeletalMeshUpdateHandle *)(*pcVar6)();
    return pFVar8;
  }
  pFVar5 = (this->OpQueue).Ptr;
  aVar12 = (pFVar5->Queue).Head;
  if (aVar12 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
    aVar9 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)
            ::operator_new(0x18);
    if (aVar9 == (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
      aVar9 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0;
    }
    else {
      *(undefined8 *)aVar9 = 0;
    }
    *(ulonglong *)((longlong)aVar9 + 8) = CONCAT44(uStack_14,uVar11) & 0xffffff00ffffffff;
    *(FSkeletalMeshObject **)((longlong)aVar9 + 0x10) = param_1;
    do {
      paVar1 = &(pFVar5->Queue).Head;
      LOCK();
      aVar10 = *paVar1;
      bVar7 = aVar12 == aVar10;
      if (bVar7) {
        *paVar1 = aVar9;
        aVar10 = aVar12;
      }
      UNLOCK();
      if (bVar7) {
        *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)aVar12 = aVar9;
        goto LAB_1486355e7;
      }
      aVar12 = aVar10;
    } while (aVar10 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0);
    ::operator_delete((void *)aVar9,0x18);
  }
LAB_1486355e7:
  LOCK();
  paVar2 = &((this->OpQueue).Ptr)->NumAdds;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  LOCK();
  paVar2 = &((this->OpQueue).Ptr)->Num;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  return __return_storage_ptr__;
}

// GetChannels @ 148646b40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FSkeletalMeshUpdateChannel,TSizedDefaultAllocator<32>_> * __cdecl
FSkeletalMeshUpdateChannel::GetChannels
          (TArray<FSkeletalMeshUpdateChannel,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  FBackend *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGlobalList *pFVar7;
  TArray<FSkeletalMeshUpdateChannel,TSizedDefaultAllocator<32>_> *pTVar8;
  FBackend *pFVar9;
  FBackend *pFVar10;
  
  pFVar7 = FBackend::GetGlobalList();
  pFVar9 = (FBackend *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = pFVar7->Num;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar3 = (pFVar7->List).Sentinel.Next;
  pFVar10 = (FBackend *)&pFVar7[-1].Num;
  if (pFVar7 == (FGlobalList *)0x0) {
    pFVar10 = pFVar9;
  }
  while( true ) {
    if (pFVar3 == pFVar10) {
      return __return_storage_ptr__;
    }
    iVar6 = (int)pFVar9;
    pFVar9 = (FBackend *)(ulonglong)(iVar6 + 1);
    if ((iVar6 != pFVar3->GlobalListIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChannelIndex++ == Backend.GlobalListIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                           ,0xb4,L""), bVar5)) break;
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x888,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    FSkeletalMeshUpdateChannel
              ((FSkeletalMeshUpdateChannel *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x88),pFVar3);
    pFVar3 = (FBackend *)pFVar3->_padding_;
  }
  pcVar4 = (code *)swi(3);
  pTVar8 = (TArray<FSkeletalMeshUpdateChannel,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar8;
}

// PopFromQueue @ 14865bd60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
 __thiscall FSkeletalMeshUpdateChannel::PopFromQueue(FSkeletalMeshUpdateChannel *this)

{
  TTypeCompatibleBytes<FSkeletalMeshUpdateChannel::FOp> *pTVar1;
  uchar *puVar2;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  bool bVar7;
  TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
  TVar8;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar9;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar10;
  FOpQueue *in_RDX;
  TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
  *pTVar11;
  undefined8 local_18 [2];
  
  bVar7 = IsInGameThread();
  if (((!bVar7) && (bVar7 = IsInParallelGameThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0x119,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    TVar8.Ptr = (FOpQueue *)(*pcVar5)();
    return (TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
            )TVar8.Ptr;
  }
  pTVar11 = &this->OpQueue;
  aVar10 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0;
  if (((this->OpQueue).Ptr)->Num == (atomic<int>)0x0) {
    (in_RDX->Queue).Sentinel.Next =
         (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0;
    return (TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
            )in_RDX;
  }
  aVar3 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)pTVar11->Ptr;
  pTVar11->Ptr = (FOpQueue *)0x0;
  aVar9 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)::operator_new(0x30)
  ;
  if (aVar9 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
    pTVar1 = (TTypeCompatibleBytes<FSkeletalMeshUpdateChannel::FOp> *)((longlong)aVar9 + 8);
    pTVar1->Pad[0] = '\0';
    pTVar1->Pad[1] = '\0';
    pTVar1->Pad[2] = '\0';
    pTVar1->Pad[3] = '\0';
    pTVar1->Pad[4] = '\0';
    pTVar1->Pad[5] = '\0';
    pTVar1->Pad[6] = '\0';
    pTVar1->Pad[7] = '\0';
    puVar2 = (uchar *)((longlong)aVar9 + 0x10);
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    *(undefined8 *)aVar9 = 0;
    *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)
     ((longlong)aVar9 + 0x18) = aVar9;
    *(undefined8 *)((longlong)aVar9 + 0x20) = 0;
    *(undefined8 *)((longlong)aVar9 + 0x28) = 0;
    aVar10 = aVar9;
  }
  if (pTVar11 ==
      (TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
       *)local_18) {
    if (aVar10 == (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0)
    goto LAB_14865bea5;
    aVar9 = aVar10;
    if (*(longlong *)
         &((atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)
          ((longlong)aVar10 + 0x18))->field_0x0 != 0) {
      puVar6 = *(undefined8 **)aVar10;
      while (puVar6 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar6;
        ::operator_delete(puVar6,0x18);
        puVar6 = puVar4;
      }
    }
  }
  else {
    aVar9 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)pTVar11->Ptr;
    pTVar11->Ptr = (FOpQueue *)aVar10;
    if (aVar9 == (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0)
    goto LAB_14865bea5;
    if (*(longlong *)
         &((atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)
          ((longlong)aVar9 + 0x18))->field_0x0 != 0) {
      puVar6 = *(undefined8 **)aVar9;
      while (puVar6 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar6;
        ::operator_delete(puVar6,0x18);
        puVar6 = puVar4;
      }
    }
  }
  ::operator_delete((void *)aVar9,0x30);
LAB_14865bea5:
  (in_RDX->Queue).Sentinel.Next = aVar3;
  return (TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
          )in_RDX;
}

// PushToStream @ 14865dd40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdateChannel::PushToStream
          (FSkeletalMeshUpdateChannel *this,
          TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
          *param_1)

{
  int *piVar1;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar2;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar3;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar4;
  code *pcVar5;
  longlong lVar6;
  FOp_u_8 FVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  FOp *pFVar11;
  uint uVar12;
  
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0x127,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &(this->OpStream).NumAdds;
  *piVar1 = *piVar1 + (int)param_1->Ptr->NumAdds;
  piVar1 = &(this->OpStream).NumRemoves;
  *piVar1 = *piVar1 + (int)param_1->Ptr->NumRemoves;
  piVar1 = &(this->OpStream).NumUpdates;
  *piVar1 = *piVar1 + (int)param_1->Ptr->NumUpdates;
  uVar12 = (int)param_1->Ptr->Num + (this->OpStream).Num;
  (this->OpStream).Num = uVar12;
  if (-1 < (int)uVar12) {
    piVar1 = &(this->OpStream).Ops.ArrayMax;
    if ((this->OpStream).Ops.ArrayMax < (int)uVar12) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdateChannel::FOp>_>
                (0x10,8,uVar12,(ForElementType<FSkeletalMeshUpdateChannel::FOp> *)&this->OpStream,
                 (this->OpStream).Ops.ArrayNum,piVar1);
    }
    aVar3 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)param_1->Ptr;
    LOCK();
    aVar2 = (((TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp> *)((longlong)aVar3 + 0x18U))->
            Sentinel).Next;
    (((TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp> *)((longlong)aVar3 + 0x18U))->Sentinel).
    Next = 0;
    UNLOCK();
    if ((aVar2 != aVar3) &&
       (aVar2 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0)) {
      do {
        aVar4 = *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)aVar3;
      } while (aVar4 == (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0);
      while (aVar4 != aVar2) {
        do {
          aVar3 = *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)aVar4;
        } while (aVar3 == (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0)
        ;
        iVar10 = (this->OpStream).Ops.ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdateChannel::FOp>_>
                             (0x810,(ForElementType<FSkeletalMeshUpdateChannel::FOp> *)
                                    &this->OpStream,piVar1);
        }
        (this->OpStream).Ops.ArrayNum = iVar10 + 1;
        pFVar11 = (this->OpStream).Ops.AllocatorInstance.Data + iVar10;
        if (pFVar11 != (FOp *)0x0) {
          lVar6 = *(longlong *)
                   ((TTypeCompatibleBytes<FSkeletalMeshUpdateChannel::FOp> *)((longlong)aVar4 + 8))
                   ->Pad;
          FVar7 = *(FOp_u_8 *)((longlong)aVar4 + 0x10);
          pFVar11->HandleIndex = (int)lVar6;
          pFVar11->Type = (char)((ulonglong)lVar6 >> 0x20);
          *(int3 *)&pFVar11->field_0x5 = (int3)((ulonglong)lVar6 >> 0x28);
          pFVar11->field2_0x8 = FVar7;
        }
        ::operator_delete((void *)aVar4,0x18);
        aVar4 = aVar3;
      }
      iVar10 = (this->OpStream).Ops.ArrayNum;
      piVar1 = &(this->OpStream).Ops.ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdateChannel::FOp>_>
                           (0x810,(ForElementType<FSkeletalMeshUpdateChannel::FOp> *)&this->OpStream
                            ,piVar1);
      }
      (this->OpStream).Ops.ArrayNum = iVar10 + 1;
      pFVar11 = (this->OpStream).Ops.AllocatorInstance.Data + iVar10;
      if (pFVar11 != (FOp *)0x0) {
        uVar8 = (((TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp> *)((longlong)aVar2 + 8))->
                Sentinel).Next;
        FVar7 = *(FOp_u_8 *)
                 &((TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp> *)((longlong)aVar2 + 0x10))
                  ->Sentinel;
        pFVar11->HandleIndex = (int)uVar8;
        pFVar11->Type = (char)((ulonglong)uVar8 >> 0x20);
        *(int3 *)&pFVar11->field_0x5 = (int3)((ulonglong)uVar8 >> 0x28);
        pFVar11->field2_0x8 = FVar7;
      }
      ::operator_delete((void *)aVar2,0x18);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// Release @ 14865eeb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdateChannel::Release
          (FSkeletalMeshUpdateChannel *this,FSkeletalMeshUpdateHandle *param_1)

{
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *paVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<unsigned_char> aVar4;
  FOpQueue *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar10;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar11;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar12;
  uint local_28 [2];
  uint local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  bVar8 = IsInGameThread();
  if (((!bVar8) && (bVar8 = IsInParallelGameThread(), !bVar8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0xea,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1->Channel != this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.Channel == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_20 = param_1->Index;
  uStack_1c = CONCAT31(uStack_1c._1_3_,2);
  if (((this->OpQueue).Ptr == (FOpQueue *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpQueue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0xf1,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (this->OpQueue).Ptr;
  aVar12 = (pFVar5->Queue).Head;
  if (aVar12 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
    aVar10 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)
             ::operator_new(0x18);
    if (aVar10 == (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
      aVar10 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0;
    }
    else {
      *(undefined8 *)aVar10 = 0;
    }
    *(ulonglong *)((longlong)aVar10 + 8) = CONCAT44(uStack_1c,local_20);
    *(undefined8 *)((longlong)aVar10 + 0x10) = uStack_18;
    do {
      paVar1 = &(pFVar5->Queue).Head;
      LOCK();
      aVar11 = *paVar1;
      bVar8 = aVar12 == aVar11;
      if (bVar8) {
        *paVar1 = aVar10;
        aVar11 = aVar12;
      }
      UNLOCK();
      if (bVar8) {
        *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)aVar12 = aVar10;
        goto LAB_14865efc3;
      }
      aVar12 = aVar11;
    } while (aVar11 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0);
    ::operator_delete((void *)aVar10,0x18);
  }
LAB_14865efc3:
  LOCK();
  paVar2 = &((this->OpQueue).Ptr)->NumRemoves;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  LOCK();
  paVar2 = &((this->OpQueue).Ptr)->Num;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  local_28[0] = param_1->Index;
  LOCK();
  bVar8 = (this->IndexAllocator).Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    (this->IndexAllocator).Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    UE::FMutex::LockSlow((FMutex *)this);
  }
  pFVar6 = (this->IndexAllocator).FreeList.AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 <
       pFVar6 + (longlong)(this->IndexAllocator).FreeList.ArrayMax * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (this->IndexAllocator).FreeList.ArrayNum;
  piVar3 = &(this->IndexAllocator).FreeList.ArrayMax;
  if (iVar9 == *piVar3) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->IndexAllocator).FreeList.AllocatorInstance,piVar3);
  }
  (this->IndexAllocator).FreeList.ArrayNum = iVar9 + 1;
  *(uint *)((this->IndexAllocator).FreeList.AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28[0];
  LOCK();
  aVar4 = (this->IndexAllocator).Mutex.State;
  (this->IndexAllocator).Mutex.State =
       (atomic<unsigned_char>)((char)(this->IndexAllocator).Mutex.State + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)this);
  }
  param_1->Channel = (FSkeletalMeshUpdateChannel *)0x0;
  return;
}

// Shutdown @ 148668470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkeletalMeshUpdateChannel::Shutdown(FSkeletalMeshUpdateChannel *this)

{
  FOpQueue *pFVar1;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar2;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar3;
  
  pFVar1 = (this->OpQueue).Ptr;
  (this->OpQueue).Ptr = (FOpQueue *)0x0;
  if (pFVar1 != (FOpQueue *)0x0) {
    if ((pFVar1->Queue).Head !=
        (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
      aVar3 = (pFVar1->Queue).Sentinel.Next;
      while (aVar3 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
        aVar2 = *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)aVar3;
        ::operator_delete((void *)aVar3,0x18);
        aVar3 = aVar2;
      }
    }
    ::operator_delete(pFVar1,0x30);
    return;
  }
  return;
}

// Update @ 14866a320

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshUpdateChannel::Update
          (FSkeletalMeshUpdateChannel *this,FSkeletalMeshUpdateHandle *param_1,
          FSkeletalMeshDynamicData *param_2)

{
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *paVar1;
  atomic<int> *paVar2;
  uint uVar3;
  FOpQueue *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar8;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar9;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar10;
  undefined4 uStack_14;
  
  bVar6 = IsInGameThread();
  if (((!bVar6) && (bVar6 = IsInParallelGameThread(), !bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((param_2 == (FSkeletalMeshDynamicData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshDynamicData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0xff,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((param_1->Channel != this) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.Channel == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0x100,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (GUseSkeletalMeshUpdater == false) {
    return false;
  }
  uVar3 = param_1->Index;
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  if (((this->OpQueue).Ptr == (FOpQueue *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpQueue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0x109,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar4 = (this->OpQueue).Ptr;
  aVar10 = (pFVar4->Queue).Head;
  if (aVar10 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
    aVar8 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)
            ::operator_new(0x18);
    if (aVar8 == (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
      aVar8 = (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0;
    }
    else {
      *(undefined8 *)aVar8 = 0;
    }
    *(ulonglong *)((longlong)aVar8 + 8) = CONCAT44(uStack_14,uVar3);
    *(FSkeletalMeshDynamicData **)((longlong)aVar8 + 0x10) = param_2;
    do {
      paVar1 = &(pFVar4->Queue).Head;
      LOCK();
      aVar9 = *paVar1;
      bVar6 = aVar10 == aVar9;
      if (bVar6) {
        *paVar1 = aVar8;
        aVar9 = aVar10;
      }
      UNLOCK();
      if (bVar6) {
        *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)aVar10 = aVar8;
        goto LAB_14866a468;
      }
      aVar10 = aVar9;
    } while (aVar9 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0);
    ::operator_delete((void *)aVar8,0x18);
  }
LAB_14866a468:
  LOCK();
  paVar2 = &((this->OpQueue).Ptr)->NumUpdates;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  LOCK();
  paVar2 = &((this->OpQueue).Ptr)->Num;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  return true;
}

// Replay<FSkeletalMeshUpdatePacketNanite> @ 14868e4e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketNanite>
          (FSkeletalMeshUpdateChannel *this,FRHICommandList *param_1,
          FSkeletalMeshUpdatePacketNanite *param_2)

{
  TArray<FSkeletalMeshUpdateChannel::FSlot,TSizedDefaultAllocator<32>_> *pTVar1;
  FSlotRegistry *this_00;
  FOpStream *pFVar2;
  FScriptContainerElement *pFVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  FDynamicSkelMeshObjectDataNanite *pFVar6;
  FSkeletalMeshObjectNanite *this_01;
  FGPUSkinCache *pFVar7;
  code *pcVar8;
  byte bVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ForElementType<unsigned_int> FVar19;
  uint uVar20;
  FOp *pFVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  ForElementType<unsigned_int> FVar25;
  FDynamicSkelMeshObjectDataNanite *pFVar26;
  FOp *pFVar27;
  undefined1 local_98 [4];
  uint local_94;
  ulonglong local_90;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  undefined8 local_68 [5];
  
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                          ,0x39,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketNanite>(FRHICommandList&___ptr64,FSkeletalMeshUpdatePacketNanite&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId58,"FSkeletalMeshUpdateChannel::Replay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
               ,0x3a);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketNanite>(FRHICommandList&___ptr64,FSkeletalMeshUpdatePacketNanite&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId58);
  }
  local_94 = (this->OpStream).Ops.ArrayNum;
  uVar17 = (ulonglong)(int)local_94;
  uVar23 = 1;
  pFVar27 = (this->OpStream).Ops.AllocatorInstance.Data;
  pFVar21 = pFVar27 + uVar17;
  local_90 = 1;
  while( true ) {
    if ((this->OpStream).Ops.ArrayNum != (int)uVar17) {
      local_98[0] = 0;
      `TCheckedPointerIterator<FSkeletalMeshUpdateChannel::FOp,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_98);
    }
    if (pFVar27 == pFVar21) break;
    iVar13 = pFVar27->HandleIndex;
    local_88 = *(FScriptContainerElement **)pFVar27;
    uStack_80 = *(undefined4 *)&pFVar27->field2_0x8;
    uStack_7c = *(undefined4 *)((longlong)&pFVar27->field2_0x8 + 4);
    uVar20 = *(uint *)&pFVar27->Type & 0xff;
    if ((char)*(uint *)&pFVar27->Type == '\0') {
      iVar24 = (this->SlotRegistry).Slots.ArrayNum;
      iVar22 = iVar13 + 1;
      pTVar1 = &(this->SlotRegistry).Slots;
      if (iVar24 < iVar22) {
        iVar24 = iVar22 - iVar24;
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,8,iVar24,&pTVar1->AllocatorInstance,
                            &(this->SlotRegistry).Slots.ArrayNum,
                            &(this->SlotRegistry).Slots.ArrayMax);
        DefaultConstructItems<FSkeletalMeshUpdateChannel::FSlot,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 0x18,iVar24);
        TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
                  (&(this->SlotRegistry).SlotBits,iVar22,false);
      }
      if ((iVar13 < 0 || (this->SlotRegistry).Slots.ArrayNum <= iVar13) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x18) =
           CONCAT44(uStack_7c,uStack_80);
      uVar23 = local_90;
LAB_14868e8cf:
      uVar17 = (ulonglong)local_94;
      pFVar27 = pFVar27 + 1;
    }
    else {
      bVar9 = (byte)iVar13;
      if (uVar20 == 1) {
        if ((iVar13 < 0 || (this->SlotRegistry).Slots.ArrayNum <= iVar13) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar18 = (longlong)iVar13;
        pFVar3 = (this->SlotRegistry).Slots.AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + lVar18 * 0x18) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Slot.MeshObject",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                                ,0x5c,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar10 = CONCAT44(uStack_7c,uStack_80);
        if (*(longlong *)(pFVar3 + lVar18 * 0x18 + 8) == 0) {
          *(undefined8 *)(pFVar3 + lVar18 * 0x18 + 8) = uVar10;
          *(undefined8 *)(pFVar3 + lVar18 * 0x18 + 0x10) = uVar10;
        }
        else {
          *(undefined8 *)(*(longlong *)(pFVar3 + lVar18 * 0x18 + 0x10) + 8) = uVar10;
          *(undefined8 *)(pFVar3 + lVar18 * 0x18 + 0x10) = uVar10;
        }
        if (((iVar13 < 0) || ((this->SlotRegistry).SlotBits.NumBits <= iVar13)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar19 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
        FVar25 = (ForElementType<unsigned_int>)&this->SlotRegistry;
        if (FVar19 != (ForElementType<unsigned_int>)0x0) {
          FVar25 = FVar19;
        }
        if (iVar13 < 0) {
          iVar13 = iVar13 + 0x1f;
        }
        puVar4 = (uint *)((longlong)FVar25 + (longlong)(iVar13 >> 5) * 4);
        *puVar4 = *puVar4 | (int)uVar23 << (bVar9 & 0x1f);
        uVar17 = (ulonglong)local_94;
        pFVar27 = pFVar27 + 1;
      }
      else {
        if (uVar20 != 2) goto LAB_14868e8cf;
        if ((iVar13 < 0 || (this->SlotRegistry).Slots.ArrayNum <= iVar13) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (this->SlotRegistry).Slots.AllocatorInstance.Data;
        pFVar3 = pFVar5 + (longlong)iVar13 * 0x18;
        pFVar26 = *(FDynamicSkelMeshObjectDataNanite **)(pFVar5 + (longlong)iVar13 * 0x18 + 8);
        while (pFVar26 != (FDynamicSkelMeshObjectDataNanite *)0x0) {
          pFVar6 = (FDynamicSkelMeshObjectDataNanite *)pFVar26->_padding_;
          pFVar26->_padding_ = 0;
          TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(pFVar26);
          pFVar26 = pFVar6;
        }
        *(undefined8 *)pFVar3 = 0;
        *(undefined8 *)(pFVar3 + 8) = 0;
        *(undefined8 *)(pFVar3 + 0x10) = 0;
        if (((iVar13 < 0) || ((this->SlotRegistry).SlotBits.NumBits <= iVar13)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar19 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
        FVar25 = (ForElementType<unsigned_int>)&this->SlotRegistry;
        if (FVar19 != (ForElementType<unsigned_int>)0x0) {
          FVar25 = FVar19;
        }
        if (iVar13 < 0) {
          iVar13 = iVar13 + 0x1f;
        }
        puVar4 = (uint *)((longlong)FVar25 + (longlong)(iVar13 >> 5) * 4);
        *puVar4 = *puVar4 & ~((int)uVar23 << (bVar9 & 0x1f));
        uVar17 = (ulonglong)local_94;
        pFVar27 = pFVar27 + 1;
      }
    }
  }
  uVar20 = (this->SlotRegistry).SlotBits.NumBits;
  iVar13 = 0;
  iVar24 = 0;
  uVar15 = 0;
  if (uVar20 != 0) {
    FVar19 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
    if (FVar19 == (ForElementType<unsigned_int>)0x0) {
      FVar19 = (ForElementType<unsigned_int>)&this->SlotRegistry;
    }
    uVar15 = *(uint *)FVar19;
    while (uVar15 == 0) {
      lVar18 = (longlong)iVar13;
      iVar24 = iVar24 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14868e977;
      uVar15 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar18 * 4);
    }
    local_90 = (ulonglong)(-uVar15 & uVar15);
    uVar23 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_78 = (int)lVar18;
    uVar15 = local_78 + -1 + iVar24;
    if ((int)uVar20 < (int)uVar15) {
      uVar15 = uVar20;
    }
  }
LAB_14868e977:
  local_94 = 0xffffffff;
  if ((int)uVar15 < (int)uVar20) {
    do {
      uVar20 = local_94;
      uVar16 = 0;
      if ((int)uVar15 < (this->SlotRegistry).Slots.ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_88 = (this->SlotRegistry).Slots.AllocatorInstance.Data;
      pFVar26 = *(FDynamicSkelMeshObjectDataNanite **)(local_88 + (longlong)(int)uVar15 * 0x18 + 8);
      local_88 = local_88 + (longlong)(int)uVar15 * 0x18;
      this_01 = *(FSkeletalMeshObjectNanite **)local_88;
      if (pFVar26 != (FDynamicSkelMeshObjectDataNanite *)0x0) {
        while( true ) {
          pFVar6 = (FDynamicSkelMeshObjectDataNanite *)pFVar26->_padding_;
          pFVar26->_padding_ = 0;
          if (pFVar6 == (FDynamicSkelMeshObjectDataNanite *)0x0) break;
          pFVar7 = (FGPUSkinCache *)param_2->_padding_;
          FDynamicSkelMeshObjectDataNanite::BuildBoneTransforms(pFVar26,this_01->DynamicData);
          TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(this_01->DynamicData);
          this_01->DynamicData = pFVar26;
          bVar12 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported();
          pFVar26 = pFVar6;
          if ((((bVar12) && (pFVar7 != (FGPUSkinCache *)0x0)) && (GEnableGPUSkinCache != 0)) &&
             ((bVar12 = IsRayTracingEnabled(), bVar12 &&
              (*(char *)(*(longlong *)&this_01->field_0x48 + 0x1e) != '\0')))) {
            FSkeletalMeshObjectNanite::ProcessUpdatedDynamicData(this_01,param_1,pFVar7);
            FSkeletalMeshObjectNanite::UpdateBoneData(this_01,param_1);
          }
        }
        FSkeletalMeshUpdatePacketNanite::Add(param_2,this_01,pFVar26);
        uVar20 = local_94;
      }
      *(undefined8 *)(local_88 + 0x10) = 0;
      *(undefined8 *)(local_88 + 8) = 0;
      uVar16 = (this->SlotRegistry).SlotBits.NumBits;
      local_94 = uVar20 & ~(uint)local_90;
      FVar19 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
      FVar25 = (ForElementType<unsigned_int>)&this->SlotRegistry;
      if (FVar19 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = FVar19;
      }
      uVar20 = local_94 & *(uint *)((longlong)FVar25 + (longlong)iVar13 * 4);
      while (uVar20 == 0) {
        lVar18 = (longlong)iVar13;
        iVar24 = iVar24 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14868eb55;
        uVar20 = *(uint *)((uchar *)((longlong)FVar25 + 4) + lVar18 * 4);
        local_94 = 0xffffffff;
      }
      local_90 = CONCAT44(local_90._4_4_,-uVar20 & uVar20);
      uVar23 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_74 = (int)lVar18;
      uVar15 = local_74 + -1 + iVar24;
      if ((int)uVar16 < (int)uVar15) {
        uVar15 = uVar16;
      }
LAB_14868eb55:
    } while ((int)uVar15 < (this->SlotRegistry).SlotBits.NumBits);
  }
  iVar13 = (this->SlotRegistry).SlotBits.NumBits;
  this_00 = &this->SlotRegistry;
  (this->SlotRegistry).SlotBits.NumBits = iVar13;
  uVar20 = iVar13 + 0x1f;
  uVar15 = uVar20 >> 5;
  if (uVar20 >> 5 != 0) {
    if ((this->SlotRegistry).SlotBits.MaxBits + 0x1fU >> 5 < uVar15) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this_00,0,uVar15,4);
      (this->SlotRegistry).SlotBits.MaxBits = uVar15 << 5;
    }
    FVar19 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
    if (FVar19 == (ForElementType<unsigned_int>)0x0) {
      FVar19 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar19,0,(ulonglong)uVar15 << 2);
    iVar13 = (this->SlotRegistry).SlotBits.NumBits;
    uVar15 = iVar13 >> 0x1f & 0x1f;
    uVar20 = iVar13 + uVar15;
    iVar13 = (uVar20 & 0x1f) - uVar15;
    if (iVar13 != 0) {
      FVar19 = (this->SlotRegistry).SlotBits.AllocatorInstance.SecondaryData;
      if (FVar19 == (ForElementType<unsigned_int>)0x0) {
        FVar19 = (ForElementType<unsigned_int>)this_00;
      }
      puVar4 = (uint *)((longlong)FVar19 + (longlong)((int)uVar20 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
    }
  }
  pFVar2 = &this->OpStream;
  if (pFVar2 != (FOpStream *)local_68) {
    pFVar27 = (pFVar2->Ops).AllocatorInstance.Data;
    if (pFVar27 != (FOp *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar27);
    }
    (pFVar2->Ops).AllocatorInstance.Data = (FOp *)0x0;
    (this->OpStream).Ops.ArrayNum = 0;
    (this->OpStream).Ops.ArrayMax = 0;
  }
  (this->OpStream).NumAdds = 0;
  (this->OpStream).NumRemoves = 0;
  (this->OpStream).NumUpdates = 0;
  (this->OpStream).Num = 0;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

