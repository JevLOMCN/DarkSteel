// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 42

// operator() @ 1441d52a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FNetTrace::SetTraceVerbosity'::__l5::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined ***pppuVar3;
  undefined1 auStackY_98 [32];
  TWeakPtr<FTSTicker::FElement,1> local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this_00 = FTSTicker::GetCoreTicker();
  local_20 = (undefined ***)0x0;
  local_38[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`ExecuteOnGameThread<``FNetTrace::SetTraceVerbosity'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ExecuteOnGameThread<``FNetTrace::SetTraceVerbosity'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                ::Call;
  FTSTicker::AddTicker
            (this_00,&local_60,L"FNetTrace::OnTraceConnected",0.0,
             (TUniqueFunction<bool___cdecl(float)> *)local_48);
  if (local_60.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_60.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_60.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_60.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar3 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar3 = local_20;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return;
}

// BeginBunch @ 1441d6e80

void __cdecl FNetTrace::BeginBunch(FNetTraceCollector *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->PendingBunchEventIndex != 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.PendingBunchEventIndex == ~0U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x17f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->CurrentNestingLevel != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.CurrentNestingLevel == 0U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x180,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->PendingBunchEventIndex = param_1->EventCount;
  return;
}

// BeginPacketContentEvent @ 1441d6f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
FNetTrace::BeginPacketContentEvent
          (FNetTraceCollector *param_1,ENetTracePacketContentEventType param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  longlong lVar6;
  
  if (0x1e < param_1->CurrentNestingLevel) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.CurrentNestingLevel < (FNetTraceCollector::MaxNestingLevel - 1U)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x139,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = param_1->EventCount;
  if ((uint)(param_1->Events).ArrayNum <= uVar4 + 1) {
    TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&param_1->Events,uVar4 + 1,No);
  }
  FVar5 = (param_1->Events).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
    FVar5 = (ForElementType<FNetTracePacketContentEvent>)&param_1->Events;
  }
  lVar6 = (ulonglong)uVar4 * 0x10 + (longlong)FVar5;
  uVar1 = param_1->OffsetStack[param_1->OffsetStackLevel];
  *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) & 0xff000000;
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) ^ (uVar1 + param_3 ^ *(uint *)(lVar6 + 8)) & 0xffffff;
  *(ENetTracePacketContentEventType *)(lVar6 + 0xb) = param_2;
  *(char *)(lVar6 + 0xf) = (char)param_1->CurrentNestingLevel;
  param_1->NestingStack[param_1->CurrentNestingLevel] = param_1->EventCount;
  param_1->CurrentNestingLevel = param_1->CurrentNestingLevel + 1;
  param_1->EventCount = param_1->EventCount + 1;
  return uVar4;
}

// CreateTraceCollector @ 1441d8510

FNetTraceCollector * __cdecl FNetTrace::CreateTraceCollector(void)

{
  TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNetTraceCollector *pFVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  int iVar9;
  
  if (GNetTraceRuntimeVerbosity == 0) {
    return (FNetTraceCollector *)0x0;
  }
  pFVar7 = ::operator_new(0x1538);
  if (pFVar7 == (FNetTraceCollector *)0x0) {
    return (FNetTraceCollector *)0x0;
  }
  (pFVar7->Events).AllocatorInstance.SecondaryData =
       (ForElementType<FNetTracePacketContentEvent>)0x0;
  pTVar1 = &pFVar7->Events;
  (pFVar7->Events).ArrayNum = 0;
  piVar2 = &(pFVar7->Events).ArrayNum;
  piVar3 = &(pFVar7->Events).ArrayMax;
  *piVar3 = 0x100;
  (pFVar7->ReferencedObjectIds).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (pFVar7->ReferencedObjectIds).ArrayNum = 0;
  (pFVar7->ReferencedObjectIds).ArrayMax = 0x80;
  iVar9 = *piVar2;
  if (iVar9 < 0x100) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_>
              (0x10,8,0x100 - iVar9,&pTVar1->AllocatorInstance,piVar2,piVar3);
  }
  else if (0x100 < iVar9) {
    iVar9 = iVar9 + -0x100;
    if (iVar9 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FNetTraceCollector *)(*pcVar4)();
        return pFVar7;
      }
    }
    else if (iVar9 == 0) goto LAB_1441d8666;
    FVar8 = (pFVar7->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)pTVar1;
    }
    iVar6 = (*piVar2 - iVar9) + -0x100;
    if (iVar6 != 0) {
      memmove((ForElementType<FNetTracePacketContentEvent> *)((longlong)FVar8 + 0x1000),
              (ForElementType<FNetTracePacketContentEvent> *)((longlong)FVar8 + 0x1000) +
              (longlong)iVar9 * 2,(longlong)iVar6 << 4);
    }
    *piVar2 = *piVar2 - iVar9;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_>
              (0x10,8,&pTVar1->AllocatorInstance,*piVar2,piVar3);
  }
LAB_1441d8666:
  FNetTraceCollector::Reset(pFVar7);
  return pFVar7;
}

// DestroyTraceCollector @ 1441d9e30

void __cdecl FNetTrace::DestroyTraceCollector(FNetTraceCollector *param_1)

{
  ForElementType<unsigned___int64> FVar1;
  ForElementType<FNetTracePacketContentEvent> FVar2;
  
  if (param_1 != (FNetTraceCollector *)0x0) {
    FVar1 = (param_1->ReferencedObjectIds).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar2 = (param_1->Events).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    ::operator_delete(param_1,0x1538);
  }
  return;
}

// DiscardBunch @ 1441d9fb0

void __cdecl FNetTrace::DiscardBunch(FNetTraceCollector *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->PendingBunchEventIndex == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.PendingBunchEventIndex != ~0U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x189,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->EventCount < param_1->PendingBunchEventIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.EventCount >= Collector.PendingBunchEventIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->CurrentNestingLevel != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.CurrentNestingLevel == 0U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->EventCount = param_1->PendingBunchEventIndex;
  param_1->CurrentNestingLevel = 0;
  param_1->PendingBunchEventIndex = 0xffffffff;
  return;
}

// EndBunch @ 1441daad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FNetTrace::EndBunch(FNetTraceCollector *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                   FNetTraceBunchInfo *param_6)

{
  TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
  *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  uint *puVar7;
  FNetTraceBunchInfo *pFVar8;
  
  if (param_1->PendingBunchEventIndex == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstCollector.PendingBunchEventIndex != ~0U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x197,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->EventCount < param_1->PendingBunchEventIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstCollector.EventCount >= DstCollector.PendingBunchEventIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x198,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->CurrentNestingLevel != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstCollector.CurrentNestingLevel == 0U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x19b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = param_1->EventCount;
  this = &param_1->Events;
  if ((uint)(param_1->Events).ArrayNum <= uVar1 + 2) {
    TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(this,uVar1 + 2,No);
  }
  FVar6 = (param_1->Events).AllocatorInstance.SecondaryData;
  uVar2 = param_1->EventCount;
  uVar3 = param_1->PendingBunchEventIndex;
  if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
    FVar6 = (ForElementType<FNetTracePacketContentEvent>)this;
  }
  puVar7 = (uint *)((ulonglong)uVar1 * 0x10 + (longlong)FVar6);
  *puVar7 = param_2;
  puVar7[2] = puVar7[2] ^ (puVar7[2] ^ param_3) & 0xffffff;
  *(undefined1 *)((longlong)puVar7 + 0xb) = 2;
  puVar7[3] = puVar7[3] ^ (puVar7[3] ^ param_5) & 0xffffff;
  *(undefined1 *)((longlong)puVar7 + 0xf) = 0;
  param_1->EventCount = param_1->EventCount + 1;
  param_1->LastBunchEventIndex = uVar1;
  FVar6 = (param_1->Events).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
    FVar6 = (ForElementType<FNetTracePacketContentEvent>)this;
  }
  pFVar8 = (FNetTraceBunchInfo *)((ulonglong)(uVar1 + 1) * 0x10 + (longlong)FVar6);
  *pFVar8 = *param_6;
  *(uint *)(pFVar8 + 1) = *(uint *)(pFVar8 + 1) ^ (*(uint *)(pFVar8 + 1) ^ uVar2 - uVar3) & 0xffffff
  ;
  *(undefined1 *)((longlong)pFVar8 + 0xb) = 3;
  *(uint *)((longlong)pFVar8 + 0xc) =
       *(uint *)((longlong)pFVar8 + 0xc) ^ (*(uint *)((longlong)pFVar8 + 0xc) ^ param_4) & 0xffffff;
  *(undefined1 *)((longlong)pFVar8 + 0xf) = 0;
  param_1->BunchEventCount = param_1->BunchEventCount + 1;
  param_1->EventCount = param_1->EventCount + 1;
  param_1->PendingBunchEventIndex = 0xffffffff;
  return;
}

// EndPacketContentEvent @ 1441dac90

void __cdecl FNetTrace::EndPacketContentEvent(FNetTraceCollector *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 == 0xffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventIndex != FNetTrace::InvalidEventIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x159,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((uint)(param_1->Events).ArrayNum <= param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventIndex < (uint32)Collector.Events.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x15a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar4 = (param_1->Events).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
    FVar4 = (ForElementType<FNetTracePacketContentEvent>)&param_1->Events;
  }
  lVar6 = (ulonglong)param_2 * 0x10 + (longlong)FVar4;
  bVar1 = *(byte *)(lVar6 + 0xf);
  if (param_1->CurrentNestingLevel <= (ushort)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventNestingLevel < Collector.CurrentNestingLevel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x160,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = param_1->OffsetStack[param_1->OffsetStackLevel] + param_3;
  *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) ^ (*(uint *)(lVar6 + 0xc) ^ uVar5) & 0xffffff;
  if (uVar5 <= (*(uint *)(lVar6 + 8) & 0xffffff)) {
    param_1->EventCount = param_1->NestingStack[bVar1];
  }
  param_1->CurrentNestingLevel = param_1->CurrentNestingLevel - 1;
  return;
}

// FoldTraceCollector @ 1441db600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FNetTrace::FoldTraceCollector
          (FNetTraceCollector *param_1,FNetTraceCollector *param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned___int64> FVar7;
  uint uVar8;
  undefined8 *puVar9;
  ForElementType<unsigned___int64> _Src;
  uint uVar10;
  ulonglong uVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  
  if (((param_1 != (FNetTraceCollector *)0x0) && (param_2 != (FNetTraceCollector *)0x0)) &&
     (param_1 != param_2)) {
    if (((param_2->BunchEventCount != 0) || (param_2->CurrentNestingLevel != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcCollector->BunchEventCount == 0 && SrcCollector->CurrentNestingLevel == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                           ,0x101,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = param_1->CurrentNestingLevel;
    uVar8 = param_1->EventCount + param_2->EventCount;
    if ((uint)(param_1->Events).ArrayNum < uVar8) {
      TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
      ::SetNumUninitialized(&param_1->Events,uVar8,No);
    }
    uVar8 = param_2->EventCount;
    uVar10 = param_1->EventCount;
    if (uVar8 + uVar10 <= (uint)(param_1->Events).ArrayNum) {
      FVar14 = (param_1->Events).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar14 = (ForElementType<FNetTracePacketContentEvent>)&param_1->Events;
      }
      FVar12 = (param_2->Events).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&param_2->Events;
      }
      if (((int)uVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar13 = (ForElementType<FNetTracePacketContentEvent>)
               ((longlong)(int)uVar8 * 0x10 + (longlong)FVar12);
      for (; FVar12 != FVar13;
          FVar12 = (ForElementType<FNetTracePacketContentEvent>)((longlong)FVar12 + 0x10)) {
        uVar11 = (ulonglong)uVar10;
        uVar4 = *(undefined8 *)((longlong)FVar12 + 8);
        uVar10 = uVar10 + 1;
        puVar9 = (undefined8 *)(uVar11 * 0x10 + (longlong)FVar14);
        *puVar9 = *(undefined8 *)FVar12;
        puVar9[1] = uVar4;
        uVar8 = *(uint *)(puVar9 + 1);
        *(uint *)(puVar9 + 1) = (uVar8 + param_3 ^ uVar8) & 0xffffff ^ uVar8;
        uVar8 = *(uint *)((longlong)puVar9 + 0xc);
        *(uint *)((longlong)puVar9 + 0xc) = (uVar8 + param_3 ^ uVar8) & 0xffffff ^ uVar8;
        *(char *)((longlong)puVar9 + 0xf) = (char)(uVar8 >> 0x18) + (char)uVar1 + (char)param_4;
      }
      param_1->EventCount = param_1->EventCount + param_2->EventCount;
      iVar2 = (param_2->ReferencedObjectIds).ArrayNum;
      if (iVar2 != 0) {
        iVar6 = UE::Core::Private::
                ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                          (8,8,iVar2,&(param_1->ReferencedObjectIds).AllocatorInstance,
                           &(param_1->ReferencedObjectIds).ArrayNum,
                           &(param_1->ReferencedObjectIds).ArrayMax);
        _Src = (param_2->ReferencedObjectIds).AllocatorInstance.SecondaryData;
        FVar7 = (param_1->ReferencedObjectIds).AllocatorInstance.SecondaryData;
        if (_Src == (ForElementType<unsigned___int64>)0x0) {
          _Src = (ForElementType<unsigned___int64>)&param_2->ReferencedObjectIds;
        }
        if (FVar7 == (ForElementType<unsigned___int64>)0x0) {
          FVar7 = (ForElementType<unsigned___int64>)&param_1->ReferencedObjectIds;
        }
        memcpy((void *)((longlong)FVar7 + (longlong)iVar6 * 8),(void *)_Src,(longlong)iVar2 << 3);
      }
    }
  }
  return;
}

// OnTraceConnected @ 1441e2e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::OnTraceConnected(void)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined1 uVar2;
  code *pcVar3;
  byte bVar4;
  TMap<unsigned_int,FNetTraceInternal::FGameInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>_>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_167 [3];
  uint local_164;
  TMap<unsigned_int,FNetTraceInternal::FGameInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined8 local_150;
  undefined4 uStack_148;
  uint uStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  LARGE_INTEGER local_120;
  uint *local_118;
  int iStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  int local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  uint *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<unsigned_int,FNetTraceInternal::FGameInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  LARGE_INTEGER *local_68;
  longlong local_60;
  undefined2 *local_58;
  longlong local_50;
  undefined2 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  LOCK();
  CurrentTraceId = (atomic<unsigned_int>)((int)CurrentTraceId + 1);
  UNLOCK();
  LOCK();
  NextNameId = (atomic<unsigned_int>)0x1;
  UNLOCK();
  UE::Net::FPersistentNetDebugNames::Get();
  UE::Net::FPersistentNetDebugNames::ResetNameIds();
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnResetPersistentNetDebugNames);
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceInitEventFields>((TLogScope<0> *)&local_68);
    QueryPerformanceCounter(&local_120);
    *local_68 = local_120;
    local_68[1].s.LowPart = 5;
    *(uint *)((longlong)local_68 + 0xc) = FNetTraceReporter::NetTraceReporterVersion;
    *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
  }
  iStack_158 = 0;
  local_140 = 0;
  uStack_154 = 1;
  uVar14 = GameInstances._40_4_;
  uStack_144 = 0;
  if (uVar14 != 0) {
    puVar19 = (uint *)&GameInstances.field_0x10;
    if (GameInstances._32_8_ != 0) {
      puVar19 = (uint *)GameInstances._32_8_;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar7 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      uStack_144 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_158)
      goto LAB_1441e2f51;
      uVar12 = puVar19[lVar7 + 1];
    }
    uStack_154 = -uVar12 & uVar12;
    uVar20 = (ulonglong)uStack_154 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_130 = (int)lVar7;
    uStack_144 = local_140 + -1 + local_130;
    if ((int)uVar14 < (int)uStack_144) {
      uStack_144 = uVar14;
    }
  }
LAB_1441e2f51:
  bVar4 = GameInstances._40_1_;
  uStack_13c = local_6c;
  iStack_138 = GameInstances._8_4_ - GameInstances._52_4_;
  uVar12 = uVar14 & 0xffffffe0;
  uVar20 = GameInstances._40_8_ & 0xffffffff;
  local_160 = &GameInstances;
  TStack_b0._padding_ = CONCAT44(uStack_154,iStack_158);
  local_150 = 0x154bb4050;
  local_b8 = &GameInstances;
  uStack_148 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_144;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_6c;
  TStack_b0.BaseBitIndex = local_140;
  uStack_90 = CONCAT44(uStack_134,iStack_138);
  iVar9 = (int)uVar14 >> 5;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&GameInstances.field_0x10;
  local_164 = uVar14;
  if (((int)uVar14 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar15 = GameInstances._40_4_;
  if (uVar14 != uVar15) {
    lVar7 = 0x154bb4050;
    if (GameInstances._32_8_ != 0) {
      lVar7 = GameInstances._32_8_;
    }
    uVar14 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar9 * 4);
    while (uVar14 == 0) {
      lVar8 = (longlong)iVar9;
      uVar12 = uVar12 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) {
        uVar20 = GameInstances._40_8_ & 0xffffffff;
        local_164 = uVar15;
        goto LAB_1441e3080;
      }
      uVar14 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar20 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_12c = (int)lVar7;
    uVar12 = local_12c + -1 + uVar12;
    uVar20 = (ulonglong)uVar12;
    if ((int)uVar15 < (int)uVar12) {
      uVar20 = GameInstances._40_8_ & 0xffffffff;
    }
    local_164 = (uint)uVar20;
  }
LAB_1441e3080:
  do {
    pTVar5 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_168 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_168);
    }
    if (((TStack_b0.CurrentBitIndex == (int)uVar20) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&GameInstances.field_0x10)) &&
       (pTVar5 == &GameInstances)) {
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                (&OnNetTraceStarted);
      return;
    }
    puVar10 = (uint *)(*(longlong *)pTVar5 + (longlong)TStack_b0.CurrentBitIndex * 200);
    puVar19 = puVar10 + 2;
    uVar14 = *puVar10;
    if (puVar10[0x2c] == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = *(wchar_t **)(puVar10 + 0x2a);
    }
    FNetTraceReporter::ReportInstanceUpdated(uVar14,SUB41(puVar10[0x2e],0),pwVar18);
    uVar12 = puVar10[0xc];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar10 + 6);
    iStack_110 = 0;
    local_f8 = 0;
    uStack_10c = 1;
    uStack_fc = 0;
    if (uVar12 != 0) {
      pTVar16 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar10 + 10) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar10 + 10);
      }
      uVar15 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      while (uVar15 == 0) {
        lVar7 = (longlong)iStack_110;
        local_f8 = local_f8 + 0x20;
        iStack_110 = iStack_110 + 1;
        uStack_fc = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_110)
        goto LAB_1441e318f;
        uVar15 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uStack_10c = -uVar15 & uVar15;
      uVar20 = (ulonglong)uStack_10c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_128 = (int)lVar7;
      uStack_fc = local_f8 + -1 + local_128;
      if ((int)uVar12 < (int)uStack_fc) {
        uStack_fc = uVar12;
      }
    }
LAB_1441e318f:
    uVar15 = puVar10[0xc];
    uStack_f4 = uStack_144;
    iStack_f0 = puVar10[4] - puVar10[0xf];
    uVar13 = uVar15 & 0xffffffe0;
    TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
    uStack_100 = 0xffffffff;
    TStack_e0.CurrentBitIndex = uStack_fc;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar15 >> 5;
    TStack_e0._28_4_ = uStack_144;
    TStack_e0.BaseBitIndex = local_f8;
    uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
    local_118 = puVar19;
    local_108 = pTVar1;
    local_e8 = puVar19;
    TStack_e0.Array = pTVar1;
    if ((((int)uVar15 < 0) || ((int)uVar12 < (int)uVar15)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = puVar10[0xc];
    if (uVar15 != uVar12) {
      pTVar16 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar10 + 10) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar10 + 10);
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
      while (uVar15 == 0) {
        lVar7 = (longlong)iVar9;
        uVar13 = uVar13 + 0x20;
        iVar9 = iVar9 + 1;
        uVar15 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_1441e3290;
        uVar15 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uVar20 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_124 = (int)lVar7;
      uVar15 = local_124 + -1 + uVar13;
      if ((int)uVar12 < (int)uVar15) {
        uVar15 = uVar12;
      }
    }
LAB_1441e3290:
    while( true ) {
      puVar10 = local_e8;
      if (local_e8[2] - local_e8[0xd] != (int)uStack_c0) {
        local_167[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
      }
      if (((TStack_e0.CurrentBitIndex == uVar15) && (TStack_e0.Array == pTVar1)) &&
         (puVar10 == puVar19)) break;
      lVar7 = *(longlong *)puVar10;
      lVar8 = (longlong)TStack_e0.CurrentBitIndex * 0x38;
      uVar12 = *(uint *)(lVar8 + lVar7);
      uVar11 = (undefined2)uVar12;
      if (-1 < NetChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionCreatedEventFields>
                  ((TLogScope<0> *)&local_58);
        *local_58 = uVar11;
        *(char *)(local_58 + 1) = (char)uVar14;
        *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
      }
      if (*(int *)(lVar8 + 0x20 + lVar7) == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *(wchar_t **)(lVar8 + 0x18 + lVar7);
      }
      if (*(int *)(lVar8 + 0x10 + lVar7) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)(lVar8 + 8 + lVar7);
      }
      FNetTraceReporter::ReportConnectionUpdated(uVar14,uVar12,pwVar17,pwVar18);
      uVar2 = *(undefined1 *)(lVar8 + 0x28 + lVar7);
      if (-1 < NetChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionStateUpdatedEventFields>
                  ((TLogScope<0> *)&local_48);
        *local_48 = uVar11;
        *(char *)(local_48 + 1) = (char)uVar14;
        *(undefined1 *)((longlong)local_48 + 3) = uVar2;
        *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    uVar20 = (ulonglong)local_164;
  } while( true );
}

// OnTraceStopped @ 1441e3400

void __cdecl FNetTrace::OnTraceStopped(EConnectionType param_1,FString *param_2)

{
  FThreadBuffer *pFVar1;
  TDefaultDelete<FNetTraceInternal::FThreadBuffer> *this;
  
  this = (TDefaultDelete<FNetTraceInternal::FThreadBuffer> *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe60);
  pFVar1 = *(FThreadBuffer **)this;
  if (pFVar1 != (FThreadBuffer *)0x0) {
    *(undefined8 *)this = 0;
    TDefaultDelete<FNetTraceInternal::FThreadBuffer>::operator()(this,pFVar1);
    return;
  }
  return;
}

// PopSendBunch @ 1441e37f0

void __cdecl FNetTrace::PopSendBunch(FNetTraceCollector *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_1->CurrentNestingLevel != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.CurrentNestingLevel == 0U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->BunchEventCount == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.BunchEventCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x1e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->EventCount <= param_1->LastBunchEventIndex + 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collector.EventCount > Collector.LastBunchEventIndex + 1U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x1e6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar6 = param_1->LastBunchEventIndex + 1;
  uVar3 = 0;
  if ((int)uVar6 < (param_1->Events).ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (param_1->Events).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
    FVar4 = (ForElementType<FNetTracePacketContentEvent>)&param_1->Events;
  }
  lVar5 = (longlong)(int)uVar6 * 0x10 + (longlong)FVar4;
  if ((*(uint *)(lVar5 + 0xc) & 0xffffff) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BunchHeaderEvent.EndPos != 0U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x1ef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(lVar5 + 0xb) != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BunchHeaderEvent.EventType == (uint8)ENetTracePacketContentEventType::BunchHeaderEvent"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x1f0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) & 0xff000000;
  return;
}

// PopStreamOffset @ 1441e3990

void __cdecl FNetTrace::PopStreamOffset(FNetTraceCollector *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->OffsetStackLevel == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1458293168251338448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x130,"Collector->OffsetStackLevel > 0U");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    param_1->OffsetStackLevel = param_1->OffsetStackLevel - 1;
  }
  return;
}

// PushStreamOffset @ 1441e4310

void __cdecl FNetTrace::PushStreamOffset(FNetTraceCollector *param_1,uint param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = param_1->OffsetStackLevel;
  if (uVar1 < 0x1f) {
    param_1->OffsetStack[(ulonglong)uVar1 + 1] = param_1->OffsetStack[uVar1] + param_2;
    param_1->OffsetStackLevel = param_1->OffsetStackLevel + 1;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1458293168251338460>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                       ,0x124,
                       "Collector->OffsetStackLevel < (FNetTraceCollector::MaxNestingLevel - 1U)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetTraceVerbosity @ 1441ec3b0

void __cdecl FNetTrace::SetTraceVerbosity(uint param_1)

{
  FThreadBuffer *pFVar1;
  bool bVar2;
  FDelegateHandle FVar3;
  TDefaultDelete<FNetTraceInternal::FThreadBuffer> *this;
  uint uVar4;
  <lambda_1> local_res10 [24];
  FString local_18;
  
  uVar4 = 3;
  if (param_1 < 3) {
    uVar4 = param_1;
  }
  if (GNetTraceRuntimeVerbosity == 0) {
    if (uVar4 != 0) {
      UE::Trace::ToggleChannel(L"NetChannel",true);
      UE::Trace::ToggleChannel(L"FrameChannel",true);
      bVar2 = UE::Trace::IsTracing();
      if (bVar2) {
        OnTraceConnected();
      }
      FVar3 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
              AddLambda<_FNetTrace::SetTraceVerbosity_::__l5::<lambda_1>_>
                        ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                          *)&FTraceAuxiliary::OnConnection,local_res10);
                    /* WARNING: Load size is inaccurate */
      OnTraceConnectedHandle.ID = *FVar3.ID;
      FVar3 = TMulticastDelegateRegistration<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
              ::AddStatic<>(&FTraceAuxiliary::OnTraceStopped,
                            (_func___cdecl_void_EConnectionType_FString_ptr *)local_res10);
                    /* WARNING: Load size is inaccurate */
      OnTraceStoppedHandle.ID = *FVar3.ID;
      GNetTraceRuntimeVerbosity = uVar4;
      return;
    }
  }
  else if (uVar4 == 0) {
    UE::Trace::ToggleChannel(L"NetChannel",false);
    bVar2 = UE::Trace::IsTracing();
    if (bVar2) {
      ::FString::FString(&local_18,L"");
      this = (TDefaultDelete<FNetTraceInternal::FThreadBuffer> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe60
             );
      pFVar1 = *(FThreadBuffer **)this;
      if (pFVar1 != (FThreadBuffer *)0x0) {
        *(undefined8 *)this = 0;
        TDefaultDelete<FNetTraceInternal::FThreadBuffer>::operator()(this,pFVar1);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (OnTraceConnectedHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                 &FTraceAuxiliary::OnConnection,OnTraceConnectedHandle);
    }
    if (OnTraceStoppedHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                 &FTraceAuxiliary::OnTraceStopped,OnTraceStoppedHandle);
    }
  }
  GNetTraceRuntimeVerbosity = uVar4;
  return;
}

// TraceBunch @ 1441ed060

void __cdecl
FNetTrace::TraceBunch
          (FNetTraceCollector *param_1,FNetTraceBunchInfo *param_2,wchar_t *param_3,uint param_4,
          uint param_5,uint param_6,FNetTraceCollector *param_7)

{
  uint uVar1;
  
  if (param_1 != param_7) {
    BeginBunch(param_1);
    FoldTraceCollector(param_1,param_7,0,0);
  }
  uVar1 = TraceName(param_3);
  EndBunch(param_1,uVar1,param_4,param_5,param_6,param_2);
  return;
}

// TraceBunch @ 1441ed0f0

void __cdecl
FNetTrace::TraceBunch
          (FNetTraceCollector *param_1,FNetTraceBunchInfo *param_2,FName param_3,uint param_4,
          uint param_5,uint param_6,FNetTraceCollector *param_7)

{
  uint uVar1;
  
  if (param_1 != param_7) {
    BeginBunch(param_1);
    FoldTraceCollector(param_1,param_7,0,0);
  }
  uVar1 = TraceName(param_3);
  EndBunch(param_1,uVar1,param_4,param_5,param_6,param_2);
  return;
}

// TraceCollectedEvents @ 1441ed180

void __cdecl
FNetTrace::TraceCollectedEvents
          (FNetTraceCollector *param_1,uint param_2,uint param_3,ENetTracePacketType param_4)

{
  ForElementType<unsigned___int64> FVar1;
  uint uVar2;
  int iVar3;
  FThreadBuffer *pFVar4;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  uint *puVar7;
  ForElementType<unsigned___int64> FVar8;
  longlong lVar9;
  uint *local_res8;
  uint local_res10 [4];
  int local_res20 [2];
  FNetTracePacketInfo local_48;
  
  local_48.ConnectionId = (ushort)param_3;
  local_48.PacketSequenceNumber = 0;
  local_res10[0] = param_2;
  local_48.GameInstanceId = param_2;
  local_48.PacketType = param_4;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar9 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar9 = GameInstances._64_8_;
    }
    uVar2 = *(uint *)(lVar9 + (ulonglong)(GameInstances._72_4_ - 1 & param_2) * 4);
    while (uVar2 != 0xffffffff) {
      puVar7 = (uint *)((longlong)(int)uVar2 * 200 + GameInstances._0_8_);
      if (*puVar7 == param_2) {
        if (puVar7 != (uint *)0x0) goto LAB_1441ed25c;
        break;
      }
      uVar2 = puVar7[0x30];
    }
  }
  local_res8 = local_res10;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_res20,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_2,(bool *)&local_res8);
  puVar7 = (uint *)((longlong)local_res20[0] * 200 + GameInstances._0_8_);
LAB_1441ed25c:
  pFVar4 = FNetTraceInternal::GetThreadBuffer();
  pTVar5 = &TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
                        *)&pFVar4->GameInstanceToObjectTraceCounterMap,local_res10[0],local_res10)->
            ObjectsTraced;
  FVar8 = (param_1->ReferencedObjectIds).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->ReferencedObjectIds).ArrayNum;
  if (FVar8 == (ForElementType<unsigned___int64>)0x0) {
    FVar8 = (ForElementType<unsigned___int64>)&param_1->ReferencedObjectIds;
  }
  FVar1 = (ForElementType<unsigned___int64>)((longlong)FVar8 + (longlong)iVar3 * 8);
  while( true ) {
    if ((param_1->ReferencedObjectIds).ArrayNum != iVar3) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar8 == FVar1) break;
    TraceExistingObject(local_res10[0],
                        (TMap<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
                         *)(puVar7 + 0x16),pTVar5,*(ulong64 *)FVar8);
    FVar8 = (ForElementType<unsigned___int64>)((longlong)FVar8 + 8);
  }
  FVar6 = (param_1->Events).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
    FVar6 = (ForElementType<FNetTracePacketContentEvent>)&param_1->Events;
  }
  FNetTraceReporter::ReportPacketContent
            ((FNetTracePacketContentEvent *)FVar6,param_1->EventCount,&local_48);
  FNetTraceCollector::Reset(param_1);
  return;
}

// TraceConnectionClosed @ 1441ed320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::TraceConnectionClosed(uint param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((GNetTraceRuntimeVerbosity != 0) && (-1 < NetChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionClosedEventFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = (short)param_2;
    *(char *)(local_28 + 1) = (char)param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// TraceConnectionCreated @ 1441ed3a0

void __cdecl FNetTrace::TraceConnectionCreated(uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  uint *local_res20;
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar3 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar3 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar2 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar2 == param_1) {
        if (puVar2 != (uint *)0x0) goto LAB_1441ed457;
        break;
      }
      uVar1 = puVar2[0x30];
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_res18,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  puVar2 = (uint *)((longlong)local_res18[0] * 200 + GameInstances._0_8_);
LAB_1441ed457:
  TMapBase<unsigned_int,FNetTraceInternal::FConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>_>
  ::FindOrAddImpl<unsigned_int_const_&>
            ((TMapBase<unsigned_int,FNetTraceInternal::FConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>_>
              *)(puVar2 + 2),local_res10[0],local_res10);
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTraceReporter::ReportConnectionCreated(local_res8[0],local_res10[0]);
  }
  return;
}

// TraceConnectionStateUpdated @ 1441ed490

void __cdecl FNetTrace::TraceConnectionStateUpdated(uint param_1,uint param_2,uchar param_3)

{
  uint uVar1;
  FConnection *pFVar2;
  uint *puVar3;
  longlong lVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  uint *local_res20;
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar4 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar4 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar3 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar3 == param_1) {
        if (puVar3 != (uint *)0x0) goto LAB_1441ed554;
        break;
      }
      uVar1 = puVar3[0x30];
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_res18,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  puVar3 = (uint *)((longlong)local_res18[0] * 200 + GameInstances._0_8_);
LAB_1441ed554:
  pFVar2 = TMapBase<unsigned_int,FNetTraceInternal::FConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,FNetTraceInternal::FConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>_>
                       *)(puVar3 + 2),local_res10[0],local_res10);
  pFVar2->State = param_3;
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTraceReporter::ReportConnectionStateUpdated(local_res8[0],local_res10[0],param_3);
  }
  return;
}

// TraceConnectionUpdated @ 1441ed590

void __cdecl
FNetTrace::TraceConnectionUpdated(uint param_1,uint param_2,wchar_t *param_3,wchar_t *param_4)

{
  uint uVar1;
  FConnection *this;
  uint *puVar2;
  longlong lVar3;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_18 [2];
  uint *local_10;
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar3 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar3 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar2 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar2 == param_1) {
        if (puVar2 != (uint *)0x0) goto LAB_1441ed655;
        break;
      }
      uVar1 = puVar2[0x30];
    }
  }
  local_10 = local_res8;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_18,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_10);
  puVar2 = (uint *)((longlong)local_18[0] * 200 + GameInstances._0_8_);
LAB_1441ed655:
  this = TMapBase<unsigned_int,FNetTraceInternal::FConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>_>
         ::FindOrAddImpl<unsigned_int_const_&>
                   ((TMapBase<unsigned_int,FNetTraceInternal::FConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>_>
                     *)(puVar2 + 2),local_res10[0],local_res10);
  ::FString::operator=(&this->Address,param_3);
  ::FString::operator=(&this->OwningActor,param_4);
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTraceReporter::ReportConnectionUpdated(local_res8[0],local_res10[0],param_3,param_4);
  }
  return;
}

// TraceEndSession @ 1441ed6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::TraceEndSession(uint param_1)

{
  undefined1 auStack_48 [32];
  uint local_28 [2];
  undefined1 *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28[0] = param_1;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
                *)&GameInstances,param_1,local_28);
  }
  if ((GNetTraceRuntimeVerbosity != 0) && (-1 < NetChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceInstanceDestroyedEventFields>
              ((TLogScope<0> *)&local_20);
    *local_20 = (char)param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// TraceFrameStatsCounter @ 1441ed8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::TraceFrameStatsCounter(uint param_1,uint param_2,uint param_3)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER LStack_28;
  LARGE_INTEGER *pLStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  
  if (GNetTraceRuntimeVerbosity == 0) {
    return;
  }
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceFrameStatsCounterEventFields>
              ((TLogScope<0> *)&pLStack_20);
    QueryPerformanceCounter(&LStack_28);
    *pLStack_20 = LStack_28;
    pLStack_20[1].s.LowPart = param_3;
    *(uint *)((longlong)pLStack_20 + 0xc) = param_2;
    *(char *)(pLStack_20 + 2) = (char)param_1;
    *(undefined8 *)(lStack_18 + 0x28) = *(undefined8 *)(lStack_18 + 0x20);
  }
  return;
}

// TraceFrameStatsCounter @ 1441ed8d0

void __cdecl FNetTrace::TraceFrameStatsCounter(uint param_1,FNetDebugName *param_2,uint param_3)

{
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTraceReporter::ReportFrameStatsCounter(param_1,param_2->DebugNameId,param_3);
    return;
  }
  return;
}

// TraceInstanceUpdated @ 1441ed8f0

void __cdecl FNetTrace::TraceInstanceUpdated(uint param_1,bool param_2,wchar_t *param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint local_res8 [2];
  int local_res10 [4];
  uint *local_res20;
  
  local_res8[0] = param_1;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar3 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar3 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar2 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar2 == param_1) {
        if (puVar2 != (uint *)0x0) goto LAB_1441ed9af;
        break;
      }
      uVar1 = puVar2[0x30];
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_res10,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  puVar2 = (uint *)((longlong)local_res10[0] * 200 + GameInstances._0_8_);
LAB_1441ed9af:
  ::FString::operator=((FString *)(puVar2 + 0x2a),param_3);
  *(bool *)(puVar2 + 0x2e) = param_2;
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTraceReporter::ReportInstanceUpdated(local_res8[0],param_2,param_3);
  }
  return;
}

// TraceName @ 1441ed9f0

uint __cdecl FNetTrace::TraceName(FNetDebugName *param_1)

{
  uint uVar1;
  FThreadBuffer *pFVar2;
  uint *puVar3;
  
  if (GNetTraceRuntimeVerbosity == 0 || param_1 == (FNetDebugName *)0x0) {
    return 0;
  }
  uVar1 = param_1->DebugNameId;
  if (uVar1 == 0) {
    pFVar2 = FNetTraceInternal::GetThreadBuffer();
    puVar3 = GetOrCreateDebugNameIdInLocalMap(param_1,pFVar2);
    uVar1 = *puVar3;
  }
  return uVar1;
}

// TraceName @ 1441eda40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FNetTrace::TraceName(wchar_t *param_1)

{
  longlong lVar1;
  int iVar2;
  atomic<unsigned_int> aVar3;
  FThreadBuffer *pFVar4;
  size_t sVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_f8 [32];
  atomic<unsigned_int> local_d8;
  undefined1 local_d4 [12];
  undefined8 *local_c8;
  atomic<unsigned_int> *local_c0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_1 == (wchar_t *)0x0 || GNetTraceRuntimeVerbosity == 0) {
    aVar3 = (atomic<unsigned_int>)0x0;
  }
  else {
    pFVar4 = FNetTraceInternal::GetThreadBuffer();
    sVar5 = wcslen(param_1);
    local_d4._4_8_ = CityHash64((char *)param_1,(int)sVar5 * 2);
    if (*(int *)&(pFVar4->DynamicNameHashToNameIdMap).field_0x8 !=
        *(int *)&(pFVar4->DynamicNameHashToNameIdMap).field_0x34) {
      puVar7 = *(undefined1 **)&(pFVar4->DynamicNameHashToNameIdMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar4->DynamicNameHashToNameIdMap).field_0x38;
      }
      iVar2 = *(int *)(puVar7 + (((ulonglong)local_d4._4_8_ >> 0x20) * 0x17 + local_d4._4_8_ &
                                (ulonglong)
                                (*(int *)&(pFVar4->DynamicNameHashToNameIdMap).field_0x48 - 1)) * 4)
      ;
      if (iVar2 != -1) {
        do {
          lVar1 = *(longlong *)&pFVar4->DynamicNameHashToNameIdMap + (longlong)iVar2 * 0x18;
          if (*(ulong64 *)
               (*(longlong *)&pFVar4->DynamicNameHashToNameIdMap + (longlong)iVar2 * 0x18) ==
              local_d4._4_8_) {
            puVar6 = (uint *)(lVar1 + 8);
            if (lVar1 == 0) {
              puVar6 = (uint *)0x0;
            }
            if (puVar6 != (uint *)0x0) {
              return *puVar6;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x10);
        } while (iVar2 != -1);
      }
    }
    LOCK();
    UNLOCK();
    local_d8 = NextNameId;
    local_c8 = (undefined8 *)(local_d4 + 4);
    local_c0 = &local_d8;
    NextNameId = (atomic<unsigned_int>)((int)NextNameId + 1);
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&pFVar4->DynamicNameHashToNameIdMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)local_d4,
               (bool *)&local_c8);
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
    TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_b8,param_1);
    FNetTraceReporter::ReportAnsiName((uint)local_d8,local_b8.StringLength + 1,local_b8.Ptr);
    aVar3 = local_d8;
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  return (uint)aVar3;
}

// TraceName @ 1441edbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FNetTrace::TraceName(FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  FName FVar3;
  atomic<unsigned_int> aVar4;
  uint uVar5;
  int iVar6;
  FThreadBuffer *pFVar7;
  size_t sVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  FName local_res8;
  undefined1 auStack_918 [32];
  atomic<unsigned_int> local_8f8;
  undefined1 local_8f4 [4];
  FName *local_8f0;
  atomic<unsigned_int> *local_8e8;
  FScriptContainerElement local_8d8 [128];
  ForAnyElementType local_858;
  FScriptContainerElement *local_850;
  int local_848;
  wchar_t local_838 [1040];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_918;
  if ((GNetTraceRuntimeVerbosity == 0) || (param_1 == (FName)0x0)) {
    return 0;
  }
  local_res8 = param_1;
  pFVar7 = FNetTraceInternal::GetThreadBuffer();
  FVar3 = local_res8;
  uVar5 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  if (*(int *)&(pFVar7->DynamicFNameToNameIdMap).field_0x8 !=
      *(int *)&(pFVar7->DynamicFNameToNameIdMap).field_0x34) {
    puVar10 = *(undefined1 **)&(pFVar7->DynamicFNameToNameIdMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(pFVar7->DynamicFNameToNameIdMap).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(pFVar7->DynamicFNameToNameIdMap).field_0x48 - 1U &
                    FVar3.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(pFVar7->DynamicFNameToNameIdMap).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x14) == FVar3) {
          puVar9 = (uint *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            return *puVar9;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  LOCK();
  UNLOCK();
  local_8f8 = NextNameId;
  local_8f0 = &local_res8;
  local_8e8 = &local_8f8;
  NextNameId = (atomic<unsigned_int>)((int)NextNameId + 1);
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)&pFVar7->DynamicFNameToNameIdMap,
             (TPairInitializer<FName_const_&,unsigned_int_const_&> *)local_8f4,
             (bool *)(local_8f4 + 4));
  ::FName::ToStringInternal(&local_res8,local_838,0x40b);
  local_858.Data = (FScriptContainerElement *)0x0;
  sVar8 = wcslen(local_838);
  local_848 = UE::Core::Private::GetConvertedLength((uchar *)0x0,local_838,(int)sVar8);
  uVar5 = local_848 + 1;
  uVar11 = uVar5;
  if (uVar5 < 0x81) {
    if (local_858.Data == (FScriptContainerElement *)0x0) goto LAB_1441edd76;
    uVar11 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_858,0,uVar11,1);
LAB_1441edd76:
  local_850 = local_8d8;
  if (local_858.Data != (FScriptContainerElement *)0x0) {
    local_850 = local_858.Data;
  }
  UE::Core::Private::Convert((uchar *)local_850,uVar5,local_838,(int)sVar8 + 1);
  FNetTraceReporter::ReportAnsiName((uint)local_8f8,local_848 + 1,(char *)local_850);
  aVar4 = local_8f8;
  if (local_858.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data);
  }
  return (uint)aVar4;
}

// TraceObjectCreated @ 1441eddd0

void __cdecl
FNetTrace::TraceObjectCreated
          (uint param_1,ulong64 param_2,FNetDebugName *param_3,ulong64 param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  FThreadBuffer *pFVar4;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this;
  longlong lVar5;
  uint *puVar6;
  uint local_res8 [2];
  ulong64 local_res10;
  int local_res18 [2];
  uint *local_res20;
  ulong64 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  FNetDebugName *local_60;
  ulong64 local_58;
  undefined8 local_50;
  uint local_48;
  
  local_res8[0] = param_1;
  local_res10 = param_2;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar5 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar5 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar5 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar6 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar6 == param_1) {
        if (puVar6 != (uint *)0x0) goto LAB_1441ede86;
        break;
      }
      uVar1 = puVar6[0x30];
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_res18,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  puVar6 = (uint *)((longlong)local_res18[0] * 200 + GameInstances._0_8_);
LAB_1441ede86:
  pFVar4 = FNetTraceInternal::GetThreadBuffer();
  this = &TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
          ::FindOrAddImpl<unsigned_int_const_&>
                    ((TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
                      *)&pFVar4->GameInstanceToObjectTraceCounterMap,local_res8[0],local_res8)->
          ObjectsTraced;
  uVar1 = param_5;
  local_68 = 0;
  local_78 = &local_res10;
  local_70 = &local_68;
  local_50 = 0xffffffffffffffff;
  local_48 = param_5;
  local_60 = param_3;
  local_58 = param_4;
  TSet<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&,FNetTraceInternal::FNetObject_&&>_>
            ((TSet<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>,FDefaultSetAllocator>
              *)(puVar6 + 0x16),
             (TPairInitializer<unsigned___int64_&,FNetTraceInternal::FNetObject_&&> *)&param_5,
             (bool *)&local_78);
  if (GNetTraceRuntimeVerbosity != 0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      `FNetTrace::TraceObjectCreated'::__l2::<lambda_1>::operator()(&param_5);
    }
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(this,(ulong64 *)&param_5,(bool *)&local_res10);
    uVar3 = param_3->DebugNameId;
    if (uVar3 == 0) {
      uVar3 = TraceName(param_3->Name);
      param_3->DebugNameId = uVar3;
    }
    FNetTraceReporter::ReportObjectCreated(local_res8[0],local_res10,uVar3,param_4,uVar1);
  }
  return;
}

// TraceObjectCreated @ 1441edf50

void __cdecl
FNetTrace::TraceObjectCreated
          (uint param_1,ulong64 param_2,FName param_3,ulong64 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  FThreadBuffer *pFVar3;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this;
  longlong lVar4;
  uint *puVar5;
  uint local_res8 [2];
  ulong64 local_res10;
  int local_res18 [2];
  uint *local_res20;
  ulong64 *local_78;
  FName *local_70;
  FName local_68;
  undefined8 local_60;
  ulong64 local_58;
  undefined8 local_50;
  uint local_48;
  
  local_res8[0] = param_1;
  local_res10 = param_2;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar4 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar4 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar5 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar5 == param_1) {
        if (puVar5 != (uint *)0x0) goto LAB_1441ee006;
        break;
      }
      uVar1 = puVar5[0x30];
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_res18,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  puVar5 = (uint *)((longlong)local_res18[0] * 200 + GameInstances._0_8_);
LAB_1441ee006:
  pFVar3 = FNetTraceInternal::GetThreadBuffer();
  this = &TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
          ::FindOrAddImpl<unsigned_int_const_&>
                    ((TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
                      *)&pFVar3->GameInstanceToObjectTraceCounterMap,local_res8[0],local_res8)->
          ObjectsTraced;
  uVar1 = param_5;
  local_60 = 0;
  local_78 = &local_res10;
  local_70 = &local_68;
  local_50 = 0xffffffffffffffff;
  local_48 = param_5;
  local_68 = param_3;
  local_58 = param_4;
  TSet<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&,FNetTraceInternal::FNetObject_&&>_>
            ((TSet<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>,FDefaultSetAllocator>
              *)(puVar5 + 0x16),
             (TPairInitializer<unsigned___int64_&,FNetTraceInternal::FNetObject_&&> *)&param_5,
             (bool *)&local_78);
  if (GNetTraceRuntimeVerbosity != 0) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(this,(ulong64 *)&param_5,(bool *)&local_res10);
    uVar2 = TraceName(param_3);
    FNetTraceReporter::ReportObjectCreated(local_res8[0],local_res10,uVar2,param_4,uVar1);
  }
  return;
}

// TraceObjectDestroyed @ 1441ee0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::TraceObjectDestroyed(uint param_1,ulong64 param_2)

{
  uint uVar1;
  FThreadBuffer *pFVar2;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this;
  longlong lVar3;
  uint *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulong64 local_38;
  int local_30 [2];
  TLogScope<0> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38._0_4_ = param_1;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar3 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar3 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar4 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar4 == param_1) {
        if (puVar4 != (uint *)0x0) goto LAB_1441ee17f;
        break;
      }
      uVar1 = puVar4[0x30];
    }
  }
  local_28._0_8_ = &local_38;
  local_48 = 0;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_30,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_28);
  puVar4 = (uint *)((longlong)local_30[0] * 200 + GameInstances._0_8_);
LAB_1441ee17f:
  pFVar2 = FNetTraceInternal::GetThreadBuffer();
  this = &TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
          ::FindOrAddImpl<unsigned_int_const_&>
                    ((TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
                      *)&pFVar2->GameInstanceToObjectTraceCounterMap,(uint)local_38,
                     (uint *)&local_38)->ObjectsTraced;
  TSet<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FNetTraceInternal::FNetObject>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>,FDefaultSetAllocator>
            *)(puVar4 + 0x16),param_2);
  if ((GNetTraceRuntimeVerbosity != 0) &&
     (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Remove
                (this,param_2), uVar1 = (uint)local_38, -1 < NetChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectDestroyedEventFields>(&local_28);
    *(ulong64 *)local_28._0_8_ = param_2;
    *(char *)(local_28._0_8_ + 8) = (char)uVar1;
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  return;
}

// TraceObjectPolled @ 1441ee220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::TraceObjectPolled(uint param_1,ulong64 param_2,ulong64 param_3,bool param_4)

{
  uint uVar1;
  FThreadBuffer *pFVar2;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulong64 local_48;
  int local_40 [2];
  TLogScope<0> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48._0_4_ = param_1;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar4 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar4 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar5 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar5 == param_1) {
        if (puVar5 != (uint *)0x0) goto LAB_1441ee2ef;
        break;
      }
      uVar1 = puVar5[0x30];
    }
  }
  local_38._0_8_ = &local_48;
  local_58 = 0;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_40,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_38);
  puVar5 = (uint *)((longlong)local_40[0] * 200 + GameInstances._0_8_);
LAB_1441ee2ef:
  pFVar2 = FNetTraceInternal::GetThreadBuffer();
  pTVar3 = &TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
                        *)&pFVar2->GameInstanceToObjectTraceCounterMap,(uint)local_48,
                       (uint *)&local_48)->ObjectsTraced;
  TraceExistingObject((uint)local_48,
                      (TMap<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
                       *)(puVar5 + 0x16),pTVar3,param_2);
  uVar1 = (uint)local_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectPolledEventFields>(&local_38);
    *(ulong64 *)local_38._0_8_ = param_2;
    *(ulong64 *)(local_38._0_8_ + 8) = param_3;
    *(bool *)(local_38._0_8_ + 0x10) = param_4;
    *(char *)(local_38._0_8_ + 0x11) = (char)uVar1;
    *(undefined8 *)(local_38._8_8_ + 0x28) = *(undefined8 *)(local_38._8_8_ + 0x20);
  }
  return;
}

// TraceObjectQuantized @ 1441ee390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::TraceObjectQuantized(uint param_1,ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  FThreadBuffer *pFVar2;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulong64 local_38;
  int local_30 [2];
  TLogScope<0> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38._0_4_ = param_1;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar4 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar4 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar5 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar5 == param_1) {
        if (puVar5 != (uint *)0x0) goto LAB_1441ee45f;
        break;
      }
      uVar1 = puVar5[0x30];
    }
  }
  local_28._0_8_ = &local_38;
  local_48 = 0;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_30,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_28);
  puVar5 = (uint *)((longlong)local_30[0] * 200 + GameInstances._0_8_);
LAB_1441ee45f:
  pFVar2 = FNetTraceInternal::GetThreadBuffer();
  pTVar3 = &TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
                        *)&pFVar2->GameInstanceToObjectTraceCounterMap,(uint)local_38,
                       (uint *)&local_38)->ObjectsTraced;
  TraceExistingObject((uint)local_38,
                      (TMap<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
                       *)(puVar5 + 0x16),pTVar3,param_2);
  uVar1 = (uint)local_38;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectQuantizedEventFields>(&local_28);
    *(ulong64 *)local_28._0_8_ = param_2;
    *(ulong64 *)(local_28._0_8_ + 8) = param_3;
    *(char *)(local_28._0_8_ + 0x10) = (char)uVar1;
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  return;
}

// TraceObjectWritten @ 1441ee4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::TraceObjectWritten(uint param_1,ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  FThreadBuffer *pFVar2;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulong64 local_38;
  int local_30 [2];
  TLogScope<0> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38._0_4_ = param_1;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar4 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar4 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar5 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar5 == param_1) {
        if (puVar5 != (uint *)0x0) goto LAB_1441ee5bf;
        break;
      }
      uVar1 = puVar5[0x30];
    }
  }
  local_28._0_8_ = &local_38;
  local_48 = 0;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_30,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_28);
  puVar5 = (uint *)((longlong)local_30[0] * 200 + GameInstances._0_8_);
LAB_1441ee5bf:
  pFVar2 = FNetTraceInternal::GetThreadBuffer();
  pTVar3 = &TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
                        *)&pFVar2->GameInstanceToObjectTraceCounterMap,(uint)local_38,
                       (uint *)&local_38)->ObjectsTraced;
  TraceExistingObject((uint)local_38,
                      (TMap<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
                       *)(puVar5 + 0x16),pTVar3,param_2);
  uVar1 = (uint)local_38;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTraceObjectWrittenEventFields>(&local_28);
    *(ulong64 *)local_28._0_8_ = param_2;
    *(ulong64 *)(local_28._0_8_ + 8) = param_3;
    *(char *)(local_28._0_8_ + 0x10) = (char)uVar1;
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  return;
}

// TracePacket @ 1441ee650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTrace::TracePacket
          (uint param_1,uint param_2,uint param_3,uint param_4,ENetTracePacketType param_5)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((GNetTraceRuntimeVerbosity != 0) && (-1 < NetChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FNetTracePacketEventFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s.LowPart = param_4;
    *(uint *)((longlong)local_20 + 0xc) = param_3;
    *(short *)(local_20 + 2) = (short)param_2;
    *(char *)((longlong)local_20 + 0x12) = (char)param_1;
    *(ENetTracePacketType *)((longlong)local_20 + 0x13) = param_5;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// TracePacketContentEvent @ 1441ee720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FNetTrace::TracePacketContentEvent
          (FNetTraceCollector *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
  *this;
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (param_5 <= GNetTraceRuntimeVerbosity) {
    if (0x1e < param_1->CurrentNestingLevel) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collector.CurrentNestingLevel < (FNetTraceCollector::MaxNestingLevel - 1U)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                         ,0x139,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = param_1->EventCount;
    uVar8 = (ulonglong)uVar7;
    this = &param_1->Events;
    if ((uint)(param_1->Events).ArrayNum <= uVar7 + 1) {
      TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
      ::SetNumUninitialized(this,uVar7 + 1,No);
    }
    FVar6 = (param_1->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)this;
    }
    lVar1 = (longlong)FVar6 + uVar8 * 0x10;
    uVar3 = param_1->OffsetStack[param_1->OffsetStackLevel];
    *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) & 0xff000000;
    *(uint *)(lVar1 + 8) =
         *(uint *)(lVar1 + 8) ^ (uVar3 + param_3 ^ *(uint *)(lVar1 + 8)) & 0xffffff;
    *(undefined1 *)(lVar1 + 0xb) = 1;
    *(char *)(lVar1 + 0xf) = (char)param_1->CurrentNestingLevel;
    param_1->NestingStack[param_1->CurrentNestingLevel] = param_1->EventCount;
    param_1->CurrentNestingLevel = param_1->CurrentNestingLevel + 1;
    param_1->EventCount = param_1->EventCount + 1;
    FVar6 = (param_1->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)this;
    }
    *(uint *)((longlong)FVar6 + uVar8 * 0x10) = param_2;
    if (uVar7 == 0xffffffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventIndex != FNetTrace::InvalidEventIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                         ,0x159,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((uint)(param_1->Events).ArrayNum <= uVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventIndex < (uint32)Collector.Events.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                         ,0x15a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar6 = (param_1->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)this;
    }
    bVar2 = ((uchar *)((longlong)FVar6 + 0xf))[uVar8 * 0x10];
    lVar1 = (longlong)FVar6 + uVar8 * 0x10;
    if (param_1->CurrentNestingLevel <= (ushort)bVar2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventNestingLevel < Collector.CurrentNestingLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                         ,0x160,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = param_1->OffsetStack[param_1->OffsetStackLevel] + param_4;
    *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) ^ (*(uint *)(lVar1 + 0xc) ^ uVar7) & 0xffffff;
    if (uVar7 <= (*(uint *)(lVar1 + 8) & 0xffffff)) {
      param_1->EventCount = param_1->NestingStack[bVar2];
    }
    param_1->CurrentNestingLevel = param_1->CurrentNestingLevel - 1;
  }
  return;
}

// TracePacketDropped @ 1441ee940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNetTrace::TracePacketDropped(uint param_1,uint param_2,uint param_3,ENetTracePacketType param_4)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((GNetTraceRuntimeVerbosity != 0) && (-1 < NetChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FNetTracePacketDroppedEventFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].s.LowPart = param_3;
    *(short *)((longlong)local_20 + 0xc) = (short)param_2;
    *(char *)((longlong)local_20 + 0xe) = (char)param_1;
    *(ENetTracePacketType *)((longlong)local_20 + 0xf) = param_4;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// TracePacketStatsCounter @ 1441eea00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNetTrace::TracePacketStatsCounter(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 auStack_48 [32];
  uint *puStack_28;
  longlong lStack_20;
  ulonglong uStack_18;
  
  if (GNetTraceRuntimeVerbosity == 0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < NetChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FNetTracePacketStatsCounterEventFields>
              ((TLogScope<0> *)&puStack_28);
    *puStack_28 = param_4;
    puStack_28[1] = param_3;
    *(short *)(puStack_28 + 2) = (short)param_2;
    *(char *)((longlong)puStack_28 + 10) = (char)param_1;
    *(undefined8 *)(lStack_20 + 0x28) = *(undefined8 *)(lStack_20 + 0x20);
  }
  return;
}

// TracePacketStatsCounter @ 1441eea20

void __cdecl
FNetTrace::TracePacketStatsCounter(uint param_1,uint param_2,FNetDebugName *param_3,uint param_4)

{
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTraceReporter::ReportPacketStatsCounter(param_1,param_2,param_3->DebugNameId,param_4);
    return;
  }
  return;
}

// TraceSubObject @ 1441eea40

void __cdecl FNetTrace::TraceSubObject(uint param_1,ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  FNetObject *pFVar2;
  uint *puVar3;
  longlong lVar4;
  uint local_res8 [2];
  int local_res20 [2];
  uint *local_18 [2];
  
  local_res8[0] = param_1;
  if (GameInstances._8_4_ != GameInstances._52_4_) {
    lVar4 = 0x154bb4078;
    if (GameInstances._64_8_ != 0) {
      lVar4 = GameInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)(GameInstances._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar3 = (uint *)((longlong)(int)uVar1 * 200 + GameInstances._0_8_);
      if (*puVar3 == param_1) {
        if (puVar3 != (uint *)0x0) goto LAB_1441eeaff;
        break;
      }
      uVar1 = puVar3[0x30];
    }
  }
  local_18[0] = local_res8;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FGameInstance,0>,FDefaultSetAllocator>
              *)&GameInstances,(uint)local_res20,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)local_18);
  puVar3 = (uint *)((longlong)local_res20[0] * 200 + GameInstances._0_8_);
LAB_1441eeaff:
  FNetTraceInternal::GetThreadBuffer();
  pFVar2 = TMapBase<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
           ::Find((TMapBase<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
                   *)(puVar3 + 0x16),param_3);
  if (pFVar2 != (FNetObject *)0x0) {
    pFVar2->ParentNetObjectId = param_2;
  }
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTraceReporter::ReportSubObject(local_res8[0],param_2,param_3);
  }
  return;
}

// operator() @ 1504b19e0

bool __thiscall `FNetTrace::TraceObjectCreated'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1458293168251338142>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1458293168251338142>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

