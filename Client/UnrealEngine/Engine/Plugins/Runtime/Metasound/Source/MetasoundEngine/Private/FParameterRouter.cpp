// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// FindOrCreateDataChannel @ 14b3a8a30

TSharedPtr<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1> * __thiscall
Metasound::SourcePrivate::FParameterRouter::FindOrCreateDataChannel
          (FParameterRouter *this,
          TSharedPtr<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1>
          *__return_storage_ptr__,uint param_1,ulong64 param_2,bool param_3)

{
  atomic<int> *paVar1;
  longlong lVar2;
  atomic<int> aVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  TSharedPtr<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 *puVar10;
  TTuple<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState>
  *pTVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  TReferenceControllerBase<1> *pTVar15;
  TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *pTVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  TTuple<unsigned_int,unsigned___int64> local_38;
  
  if (this == (FParameterRouter *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar4 = (this->DataChannels).Pairs.ArrayNum;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  pFVar19 = (this->DataChannels).Pairs.AllocatorInstance.Data;
  iVar14 = 0;
  pTVar9 = pTVar15;
  iVar20 = iVar14;
  uVar17 = uVar4;
  if (0 < (int)uVar4) {
    do {
      uVar18 = uVar17 >> 1;
      iVar20 = uVar18 + (int)pTVar9;
      if ((*(uint *)(pFVar19 + (longlong)iVar20 * 0x28) < param_1) ||
         ((iVar12 = iVar14, *(uint *)(pFVar19 + (longlong)iVar20 * 0x28) == param_1 &&
          (*(ulonglong *)(pFVar19 + (longlong)iVar20 * 0x28 + 8) < param_2)))) {
        iVar12 = 1;
      }
      if (iVar12 != 0) {
        pTVar9 = (TReferenceControllerBase<1> *)(ulonglong)(iVar20 + (uVar17 & 1));
      }
      iVar20 = (int)pTVar9;
      uVar17 = uVar18;
    } while (uVar18 != 0);
  }
  local_38._0_4_ = param_1;
  local_38._8_8_ = param_2;
  if (iVar20 < (int)uVar4) {
    lVar2 = (longlong)iVar20 * 0x28;
    if ((*(uint *)(pFVar19 + lVar2) <= param_1) &&
       (((*(uint *)(pFVar19 + lVar2) < param_1 || (*(ulonglong *)(pFVar19 + lVar2 + 8) <= param_2))
        && (iVar20 != -1)))) {
      if ((iVar20 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1>
                  *)(*pcVar5)();
        return pTVar8;
      }
      pFVar19 = (this->DataChannels).Pairs.AllocatorInstance.Data + lVar2 + 0x10;
      if ((pFVar19 != (FScriptContainerElement *)0x0) &&
         ((!param_3 || (pFVar19[0x10] != (FScriptContainerElement)0x0)))) {
        pTVar9 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
        pTVar13 = pTVar9;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = pTVar9->SharedReferenceCount;
          do {
            pTVar13 = pTVar15;
            if (aVar3 == (atomic<int>)0x0) goto LAB_14b3a8b85;
            LOCK();
            aVar7 = pTVar9->SharedReferenceCount;
            bVar6 = aVar3 == aVar7;
            if (bVar6) {
              pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar7 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar7;
          } while (!bVar6);
          pTVar13 = pTVar9;
          if (*(TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> **)pFVar19
              != (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)0x0) {
            if (param_3) {
              pFVar19[0x10] = (FScriptContainerElement)0x0;
            }
            __return_storage_ptr__->Object =
                 *(TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> **)
                  pFVar19;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
            goto LAB_14b3a8cbd;
          }
        }
LAB_14b3a8b85:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
      }
    }
  }
  pTVar9 = ::operator_new(0x38);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar16 = (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)
              &DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TSpscQueue_UFParameter_FMetaSoundParameterTransmitter_Metasound__UFMemory_____00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = 0;
    *(undefined4 *)&pTVar9[3]._padding_ = 0;
    puVar10 = FMemory::Malloc(0x28,8);
    pTVar16 = (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)
              (pTVar9 + 1);
    *puVar10 = 0;
    pTVar9[1]._padding_ = (longlong)puVar10;
    *(undefined8 **)&pTVar9[2].SharedReferenceCount = puVar10;
    pTVar9[2]._padding_ = (longlong)puVar10;
    *(undefined8 **)&pTVar9[1].SharedReferenceCount = puVar10;
    LOCK();
    *(undefined4 *)&pTVar9[3]._padding_ = 0;
    UNLOCK();
    if ((pTVar16 == (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)0x0
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1>
                *)(*pcVar5)();
      return pTVar8;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
    pTVar15 = pTVar9;
  }
  pTVar11 = TSortedMap<TTuple<unsigned_int,unsigned___int64>,Metasound::SourcePrivate::FParameterRouter::FQueueState,TSizedDefaultAllocator<32>,TLess<TTuple<unsigned_int,unsigned___int64>_const_&>_>
            ::AllocateMemoryForEmplace<TTuple<unsigned_int,unsigned___int64>_const_&>
                      (&this->DataChannels,&local_38);
  *(undefined4 *)pTVar11 = local_38._0_4_;
  *(undefined4 *)&pTVar11->field_0x4 = local_38._4_4_;
  *(undefined4 *)&pTVar11->field_0x8 = local_38._8_4_;
  *(undefined4 *)&pTVar11->field_0xc = local_38._12_4_;
  *(TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> **)
   &pTVar11->field_0x10 = pTVar16;
  *(TReferenceControllerBase<1> **)&pTVar11->field_0x18 = pTVar15;
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11->field_0x20 = !param_3;
    __return_storage_ptr__->Object = pTVar16;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
    UNLOCK();
    pTVar11->field_0x20 = !param_3;
    __return_storage_ptr__->Object = pTVar16;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar15;
    LOCK();
    paVar1 = &pTVar15->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
    }
  }
LAB_14b3a8cbd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

