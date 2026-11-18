// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FSchemaStats @ 142011b70

FSchemaStats * __thiscall
UE::GC::FSchemaStats::FSchemaStats
          (FSchemaStats *this,FSchemaView param_1,
          TMap<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSchemaStats *pFVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  this->Counters[0] = 0;
  this->Counters[1] = 0;
  this->Counters[2] = 0;
  this->Counters[3] = 0;
  this->Counters[4] = 0;
  this->Counters[5] = 0;
  this->Counters[6] = 0;
  this->Counters[7] = 0;
  this->Counters[8] = 0;
  this->Counters[9] = 0;
  this->Counters[10] = 0;
  this->Counters[0xb] = 0;
  this->Counters[0xc] = 0;
  this->Counters[0xd] = 0;
  this->Counters[0xe] = 0;
  this->Counters[0xf] = 0;
  this->NumMembers = 0;
  this->NumExtraWords = 0;
  MakeInnerStats(&this->InnerStructs,param_1,param_2);
  pbVar7 = (byte *)(param_1.Handle & 0xfffffffffffffffe);
  do {
    do {
      pbVar8 = pbVar7;
      pbVar6 = pbVar8 + 8;
      pbVar7 = pbVar6;
    } while (pbVar8 == pbVar6);
    do {
      bVar5 = *pbVar8 & 0x1f;
      if ((0xf < bVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type < EMemberType::Count",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                             ,0x1c7,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSchemaStats *)(*pcVar1)();
        return pFVar3;
      }
      this->NumMembers = this->NumMembers + 1;
      if ((0xf < bVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint8)Type < MemberTypeCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                             ,0x23,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSchemaStats *)(*pcVar1)();
        return pFVar3;
      }
      this->Counters[bVar5] = this->Counters[bVar5] + 1;
      uVar4 = 1 << bVar5 & 0xac70;
      this->NumExtraWords = this->NumExtraWords + (uint)(uVar4 != 0);
      pbVar7 = pbVar7 + (-(uint)(uVar4 != 0) & 8);
      if ((1 << bVar5 & 0x6001U) != 0) {
        return this;
      }
      pbVar8 = pbVar8 + 2;
    } while (pbVar8 != pbVar6);
  } while( true );
}

// operator= @ 142013ef0

FSchemaStats * __thiscall UE::GC::FSchemaStats::operator=(FSchemaStats *this,FSchemaStats *param_1)

{
  TArray<UE::GC::FStructMemberStats,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::GC::FStructMemberStats,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  FSchemaStats *pFVar9;
  
  if (((FSchemaStats *)(param_1->Counters + 0xf) < this) ||
     ((FSchemaStats *)(this->Counters + 0xf) < param_1)) {
    uVar4 = *(undefined8 *)(param_1->Counters + 2);
    uVar5 = *(undefined8 *)(param_1->Counters + 4);
    uVar6 = *(undefined8 *)(param_1->Counters + 6);
    *(undefined8 *)this->Counters = *(undefined8 *)param_1->Counters;
    *(undefined8 *)(this->Counters + 2) = uVar4;
    uVar4 = *(undefined8 *)(param_1->Counters + 8);
    uVar7 = *(undefined8 *)(param_1->Counters + 10);
    *(undefined8 *)(this->Counters + 4) = uVar5;
    *(undefined8 *)(this->Counters + 6) = uVar6;
    uVar5 = *(undefined8 *)(param_1->Counters + 0xc);
    uVar6 = *(undefined8 *)(param_1->Counters + 0xe);
    *(undefined8 *)(this->Counters + 8) = uVar4;
    *(undefined8 *)(this->Counters + 10) = uVar7;
    *(undefined8 *)(this->Counters + 0xc) = uVar5;
    *(undefined8 *)(this->Counters + 0xe) = uVar6;
  }
  else {
    lVar8 = 0x10;
    pFVar9 = this;
    do {
      pFVar9->Counters[0] = *(uint *)(((longlong)param_1 - (longlong)this) + (longlong)pFVar9);
      pFVar9 = (FSchemaStats *)(pFVar9->Counters + 1);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  pTVar1 = &param_1->InnerStructs;
  pTVar2 = &this->InnerStructs;
  this->NumMembers = param_1->NumMembers;
  this->NumExtraWords = param_1->NumExtraWords;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InnerStructs).ArrayNum = (param_1->InnerStructs).ArrayNum;
    (this->InnerStructs).ArrayMax = (param_1->InnerStructs).ArrayMax;
    (param_1->InnerStructs).ArrayNum = 0;
    (param_1->InnerStructs).ArrayMax = 0;
  }
  return this;
}

// LinkInnerStats @ 142063620

void __thiscall
UE::GC::FSchemaStats::LinkInnerStats
          (FSchemaStats *this,
          TMap<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong *puVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  iVar2 = (this->InnerStructs).ArrayNum;
  pFVar10 = (this->InnerStructs).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
  do {
    if ((this->InnerStructs).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::GC::FStructMemberStats,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) {
      return;
    }
    if (*(longlong *)(pFVar10 + 0x10) == 0) {
      uVar3 = *(ulonglong *)(pFVar10 + 8);
      uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
        puVar8 = &param_1->field_0x38;
        if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&param_1->field_0x40;
        }
        iVar6 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&param_1->field_0x48 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4)
        ;
        if (iVar6 != -1) {
          do {
            puVar9 = (ulonglong *)((longlong)iVar6 * 0x68 + *(longlong *)param_1);
            if (*puVar9 == (uVar3 & 0xfffffffffffffffe)) {
              if (puVar9 == (ulonglong *)0x0) goto LAB_1420636f8;
              goto LAB_14206371e;
            }
            iVar6 = (int)puVar9[0xc];
          } while (iVar6 != -1);
        }
      }
      puVar9 = (ulonglong *)0x0;
LAB_1420636f8:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_14206371e:
      *(FSchemaStats **)(pFVar10 + 0x10) = (FSchemaStats *)(puVar9 + 1);
      LinkInnerStats((FSchemaStats *)(puVar9 + 1),param_1);
    }
    pFVar10 = pFVar10 + 0x18;
  } while( true );
}

// MakeInnerStats @ 1420638d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::GC::FStructMemberStats,TSizedDefaultAllocator<32>_> * __cdecl
UE::GC::FSchemaStats::MakeInnerStats
          (TArray<UE::GC::FStructMemberStats,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSchemaView param_1,
          TMap<void_const_*,UE::GC::FSchemaStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>_>
          *param_2)

{
  FSchemaView FVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<UE::GC::FStructMemberStats,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 *puVar9;
  ulong64 *puVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  ulong64 *puVar14;
  undefined1 auStack_148 [32];
  uint *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  int local_f8;
  uint local_f0;
  int iStack_ec;
  ulong64 uStack_e8;
  undefined8 local_e0;
  TPairInitializer<UE::GC::FMemberWord_const_*_&&,UE::GC::FSchemaStats_&&> local_d8;
  ulong64 *local_c8;
  FSchemaStats **local_c0;
  FSchemaStats *local_b8;
  FSchemaStats local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (((ulong64 *)(param_1.Handle & 0xfffffffffffffffe) == (ulong64 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Schema.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x2e5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<UE::GC::FStructMemberStats,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  local_f8 = 0;
  puVar14 = (ulong64 *)(param_1.Handle & 0xfffffffffffffffe);
  iVar7 = 0;
  do {
    do {
      puVar10 = puVar14;
      puVar14 = puVar10 + 1;
      local_c8 = puVar14;
    } while (puVar10 == puVar14);
    do {
      bVar12 = (byte)(ushort)*puVar10;
      uVar13 = (uint)(ushort)((ushort)*puVar10 >> 5);
      bVar11 = bVar12 & 0x1f;
      if ((0xf < bVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type < EMemberType::Count",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                             ,0x1c7,L""), iVar7 = local_f8, bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UE::GC::FStructMemberStats,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      uVar6 = 1 << bVar11;
      if ((uVar6 & 0x6001) != 0) {
        return __return_storage_ptr__;
      }
      if (bVar11 == 1) {
        local_f8 = iVar7 + 0x800 + uVar13 * 0x800;
      }
      else if ((uVar6 & 0xac70) != 0) {
        FVar1.Handle = *puVar14;
        puVar14 = puVar14 + 1;
        if ((uVar6 & 0xc50) != 0) {
          iStack_ec = uVar13 + iVar7;
          local_f0 = CONCAT31(local_f0._1_3_,bVar12) & 0xffffff1f;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_e0 = 0;
          uStack_e8 = FVar1.Handle;
          if ((pFVar2 <= (FScriptContainerElement *)&local_f0) &&
             ((FScriptContainerElement *)&local_f0 <
              pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
            local_110 = (longlong)__return_storage_ptr__->ArrayNum;
            local_108 = 0x18;
            local_128 = &local_f0;
            local_120 = pFVar2;
            local_118 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<UE::GC::FStructMemberStats,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
              ;
              return pTVar8;
            }
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
          *(ulonglong *)pFVar2 = CONCAT44(iStack_ec,local_f0);
          *(ulong64 *)(pFVar2 + 8) = uStack_e8;
          *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = local_e0;
          uVar13 = ((uint)(FVar1.Handle >> 0x14) & 0xffff ^ (uint)(FVar1.Handle >> 4)) * -0x7a143595
          ;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
            puVar9 = &param_2->field_0x38;
            if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
              puVar9 = *(undefined1 **)&param_2->field_0x40;
            }
            iVar7 = *(int *)(puVar9 + (ulonglong)
                                      (*(int *)&param_2->field_0x48 - 1U & (uVar13 >> 0x10 ^ uVar13)
                                      ) * 4);
            if (iVar7 != -1) {
              do {
                if (*(FSchemaStats **)((longlong)iVar7 * 0x68 + *(longlong *)param_2) ==
                    (FSchemaStats *)(FVar1.Handle & 0xfffffffffffffffe)) {
                  if (iVar7 != -1) goto LAB_142063ba5;
                  break;
                }
                iVar7 = *(int *)((longlong)iVar7 * 0x68 + 0x60 + *(longlong *)param_2);
              } while (iVar7 != -1);
            }
          }
          local_b8 = FSchemaStats(&local_a8,FVar1,param_2);
          local_c0 = &local_d8.Value;
          local_d8.Value = (FSchemaStats *)(FVar1.Handle & 0xfffffffffffffffe);
          TSet<TTuple<void_const_*,UE::GC::FSchemaStats>,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::GC::FMemberWord_const_*_&&,UE::GC::FSchemaStats_&&>_>
                    ((TSet<TTuple<void_const_*,UE::GC::FSchemaStats>,TDefaultMapHashableKeyFuncs<void_const_*,UE::GC::FSchemaStats,0>,FDefaultSetAllocator>
                      *)param_2,&local_d8,(bool *)&local_c0);
          if (local_a8.InnerStructs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.InnerStructs.AllocatorInstance.Data);
          }
        }
      }
LAB_142063ba5:
      puVar10 = (ulong64 *)((longlong)puVar10 + 2);
      iVar7 = local_f8;
    } while (puVar10 != local_c8);
  } while( true );
}

