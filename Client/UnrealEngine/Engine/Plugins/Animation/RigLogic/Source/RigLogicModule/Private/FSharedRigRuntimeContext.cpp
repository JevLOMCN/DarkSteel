// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 2

// CacheInverseNeutralJointRotations @ 14a663410

/* WARNING: Removing unreachable block (ram,0x00014a6638d6) */

void __thiscall
FSharedRigRuntimeContext::CacheInverseNeutralJointRotations(FSharedRigRuntimeContext *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RigLogic *pRVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  longlong local_b8;
  uint local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name38,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name38,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name38,true);
  if (((this->RigLogic).Object == (FRigLogic *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pRVar6 = (((this->RigLogic).Object)->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar6 + 0x48))(pRVar6,&local_b8);
  if (((int)local_b0 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar16 = local_b0 / 10;
  if ((local_b0 != uVar16 * 10) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9057042577844338646>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\SharedRigRuntimeContext.cpp"
                          ,0x2a,"NeutralJointValues.Num() % JointAttributeCount == 0"), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  piVar1 = &(this->InverseNeutralJointRotations).ArrayMax;
  (this->InverseNeutralJointRotations).ArrayNum = 0;
  if ((this->InverseNeutralJointRotations).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar16,&(this->InverseNeutralJointRotations).AllocatorInstance,0,piVar1);
  }
  uVar11 = __xmm_80000000800000008000000080000000;
  fVar10 = __real_3f800000;
  uVar17 = (ulonglong)uVar16;
  if (uVar16 != 0) {
    uVar16 = 4;
    lVar15 = 0;
    lVar18 = local_b8;
    do {
      uVar13 = 0;
      if ((int)(uVar16 - 1) < (int)local_b0) {
        uVar13 = ~(uVar16 - 1) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar2 = *(float *)(lVar18 + 0xc);
      uVar13 = 0;
      if ((int)uVar16 < (int)local_b0) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar3 = *(float *)(lVar15 + 0x10 + local_b8);
      uVar13 = 0;
      if ((int)(uVar16 + 1) < (int)local_b0) {
        uVar13 = ~(uVar16 + 1) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar4 = *(float *)(lVar15 + 0x14 + local_b8);
      uVar13 = 0;
      if ((int)(uVar16 + 2) < (int)local_b0) {
        uVar13 = ~(uVar16 + 2) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar5 = *(float *)(lVar15 + 0x18 + local_b8);
      pFVar7 = (this->InverseNeutralJointRotations).AllocatorInstance.Data;
      fVar19 = fVar10 / (fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4);
      local_a8 = (double)(float)((uint)(fVar2 * fVar19) ^ uVar11);
      dStack_a0 = (double)(float)((uint)(fVar3 * fVar19) ^ uVar11);
      local_98 = (double)(float)((uint)(fVar19 * fVar4) ^ uVar11);
      dStack_90 = (double)(fVar19 * fVar5);
      if (((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar7 + (longlong)*piVar1 * 0x20)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar14 = (this->InverseNeutralJointRotations).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&(this->InverseNeutralJointRotations).AllocatorInstance,piVar1);
      }
      (this->InverseNeutralJointRotations).ArrayNum = iVar14 + 1;
      lVar18 = lVar18 + 0x28;
      uVar16 = uVar16 + 10;
      pFVar8 = (this->InverseNeutralJointRotations).AllocatorInstance.Data;
      lVar15 = lVar15 + 0x28;
      pFVar7 = pFVar8 + (longlong)iVar14 * 0x20;
      *(double *)pFVar7 = local_a8;
      *(double *)(pFVar7 + 8) = dStack_a0;
      pFVar8 = pFVar8 + (longlong)iVar14 * 0x20 + 0x10;
      *(double *)pFVar8 = local_98;
      *(double *)(pFVar8 + 8) = dStack_90;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CacheVariableJointIndices @ 14a665c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSharedRigRuntimeContext::CacheVariableJointIndices(FSharedRigRuntimeContext *this)

{
  int *piVar1;
  int *piVar2;
  ushort *puVar3;
  IDNAReader *pIVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ushort *puVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  ushort uVar19;
  undefined1 auStackY_198 [32];
  ForAnyElementType local_140;
  undefined8 local_138;
  ushort local_130 [2];
  FLLMScope local_12c;
  ushort *local_128;
  undefined8 local_120;
  undefined4 local_118;
  ushort local_114 [2];
  int local_110;
  FMemScope local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  longlong *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name12,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_12c,LLMScope_Name12,false,None,Default,true);
  FMemScope::FMemScope(&local_108,&LLMScope_Name12,true);
  if (((this->BehaviorReader).Object == (IDNAReader *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar4 = (this->BehaviorReader).Object;
  uVar7 = (**(code **)(*(longlong *)
                        (&pIVar4->field_0x8 + *(int *)(*(longlong *)&pIVar4->field_0x8 + 4)) + 0x78)
          )();
  piVar1 = &(this->VariableJointIndicesPerLOD).ArrayMax;
  pFVar15 = (this->VariableJointIndicesPerLOD).AllocatorInstance.Data;
  piVar2 = &(this->VariableJointIndicesPerLOD).ArrayNum;
  if ((this->VariableJointIndicesPerLOD).ArrayMax < 0) {
    DestructItems<FSharedRigRuntimeContext::TNestedArray<unsigned_short>,int>
              ((TNestedArray<unsigned_short> *)pFVar15,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->VariableJointIndicesPerLOD).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSharedRigRuntimeContext::TNestedArray<unsigned_short>,int>
              ((TNestedArray<unsigned_short> *)pFVar15,*piVar2);
    *piVar2 = 0;
  }
  uVar16 = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(uint)uVar7,&(this->VariableJointIndicesPerLOD).AllocatorInstance,piVar2
                     ,piVar1);
  DefaultConstructItems<FSharedRigRuntimeContext::TNestedArray<unsigned_short>,int>
            ((this->VariableJointIndicesPerLOD).AllocatorInstance.Data + (longlong)iVar8 * 0x10,
             (uint)uVar7);
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  uVar19 = 0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_40 = 0;
  if (uVar7 != 0) {
    do {
      if (((this->BehaviorReader).Object == (IDNAReader *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar4 = (this->BehaviorReader).Object;
      plVar10 = (longlong *)(&pIVar4->field_0x8 + *(int *)(*(longlong *)&pIVar4->field_0x8 + 8));
      (**(code **)(*plVar10 + 0x60))(plVar10,&local_128);
      if (local_88._8_4_ != local_54) {
        TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::UnhashElements
                  ((TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *)
                   local_88);
        bVar6 = (longlong)local_88._8_8_ < 0;
        local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
        if (bVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
        }
        local_58 = -1;
        local_54 = 0;
        local_60 = 0;
      }
      uVar9 = (uint)local_120;
      if ((uint)(local_88._8_4_ - local_54) < uVar9) {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_88,uVar9);
        if (uVar9 < 4) {
          iVar8 = 1;
        }
        else {
          uVar11 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_118 = (undefined4)lVar12;
          iVar8 = 1 << ((byte)lVar12 & 0x1f);
        }
        if ((local_40 == 0) || (local_40 < iVar8)) {
          local_40 = iVar8;
          TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *)
                     local_88);
        }
        uVar9 = (uint)local_120;
      }
      puVar3 = local_128 + (int)uVar9;
      for (puVar14 = local_128; puVar14 != puVar3; puVar14 = puVar14 + 1) {
        local_130[0] = *puVar14 / 9;
        TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::
        Emplace<unsigned_short_const_&>
                  ((TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *)
                   local_88,local_114,(bool *)local_130);
      }
      uVar9 = local_88._8_4_ - local_54;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      uVar11 = uVar16;
      if (0 < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,&local_140,0,(int *)((longlong)&local_138 + 4));
        uVar11 = local_138 & 0xffffffff;
      }
      uStack_cc = 1;
      uVar13 = uVar16;
      uStack_d0 = 0;
      local_b8 = 0;
      if (local_60 != 0) {
        FVar18 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_68;
        }
        uVar9 = *(uint *)FVar18;
        uVar17 = uVar16;
        while( true ) {
          uStack_d0 = (uint)uVar13;
          local_b8 = (uint)uVar17;
          if (uVar9 != 0) break;
          lVar12 = (longlong)(int)uStack_d0;
          local_b8 = local_b8 + 0x20;
          uVar17 = (ulonglong)local_b8;
          uStack_d0 = uStack_d0 + 1;
          uVar13 = (ulonglong)uStack_d0;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_d0)
          goto LAB_14a665fba;
          uVar9 = ((uint *)((longlong)FVar18 + 4))[lVar12];
        }
        uStack_cc = -uVar9 & uVar9;
        uVar13 = (ulonglong)uStack_cc * 2 + 1;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_110 = (int)lVar12;
        uVar9 = local_110 + -1 + local_b8;
        uVar13 = (ulonglong)uVar9;
        if ((int)local_60 < (int)uVar9) {
LAB_14a665fba:
          uVar13 = (ulonglong)local_60;
        }
      }
      local_100 = (longlong *)local_88;
      TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uStack_c0 = 0xffffffff;
      iStack_bc = (int)uVar13;
      uStack_b4 = local_8c;
      TStack_f8._padding_ = CONCAT44(uStack_cc,uStack_d0);
      TStack_f8.CurrentBitIndex = iStack_bc;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      TStack_f8._28_4_ = local_8c;
      TStack_f8.BaseBitIndex = local_b8;
      local_d8 = local_100;
      local_c8 = TStack_f8.Array;
      if (iStack_bc < (int)local_60) {
        while( true ) {
          pFVar15 = (FScriptContainerElement *)(*local_100 + (longlong)(int)uVar13 * 0xc);
          iVar8 = (int)uVar11;
          if ((local_140.Data <= pFVar15) &&
             (pFVar15 < local_140.Data + (longlong)local_138._4_4_ * 2)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = (int)local_138;
          }
          if (iVar8 == local_138._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x202,&local_140,(int *)((longlong)&local_138 + 4));
          }
          local_138 = CONCAT44(local_138._4_4_,iVar8 + 1);
          *(undefined2 *)(local_140.Data + (longlong)iVar8 * 2) = *(undefined2 *)pFVar15;
          TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
          uVar13 = (ulonglong)(uint)TStack_f8.CurrentBitIndex;
          if ((TStack_f8.Array)->NumBits <= TStack_f8.CurrentBitIndex) break;
          uVar11 = local_138 & 0xffffffff;
        }
      }
      if ((*piVar2 <= (int)(uint)uVar19) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar15 = (this->VariableJointIndicesPerLOD).AllocatorInstance.Data + (ulonglong)uVar19 * 0x10
      ;
      if (pFVar15 != (FScriptContainerElement *)&local_140) {
        if (*(void **)pFVar15 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar15);
        }
        *(FScriptContainerElement **)pFVar15 = local_140.Data;
        local_140.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar15 + 8) = (int)local_138;
        *(int *)(pFVar15 + 0xc) = local_138._4_4_;
        local_138 = 0;
      }
      if (local_140.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar7);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  FMemScope::~FMemScope(&local_108);
  FLLMScope::~FLLMScope(&local_12c);
  return;
}

