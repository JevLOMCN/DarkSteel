// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 15

// ~FStateStreamManagerImpl @ 143125d20

void __thiscall FStateStreamManagerImpl::~FStateStreamManagerImpl(FStateStreamManagerImpl *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  longlong *plVar4;
  FTaskBase *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FStateStreamManagerImpl__6B_;
  iVar3 = (this->StateStreams).ArrayNum;
  pFVar6 = (this->StateStreams).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((pFVar6[8] != (FScriptContainerElement)0x0) &&
       (plVar4 = *(longlong **)pFVar6, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x58))(plVar4,1);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  pFVar5 = (this->GarbageCollectTask).Pimpl.Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar6 = (this->StateStreamsLookup).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->StateStreams).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7IStateStreamManager__6B_;
  return;
}

// operator() @ 1431261c0

void __thiscall
`FStateStreamManagerImpl::Render_GarbageCollect'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x10);
  puVar3 = *(undefined8 **)(lVar2 + 8);
  puVar4 = puVar3 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)(lVar2 + 0x10) != iVar1) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar3 == puVar4) break;
    (**(code **)(*(longlong *)*puVar3 + 0x38))();
    puVar3 = puVar3 + 2;
  }
  return;
}

// Game_BeginTick @ 143127860

void __thiscall FStateStreamManagerImpl::Game_BeginTick(FStateStreamManagerImpl *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->bIsInTick != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsInTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamManagerImpl.cpp"
                       ,0xb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bGameExited != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bGameExited",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamManagerImpl.cpp"
                       ,0xc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bIsInTick = true;
  iVar1 = (this->StateStreams).ArrayNum;
  pFVar4 = (this->StateStreams).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    (**(code **)**(undefined8 **)pFVar4)();
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// Game_DebugRender @ 143127930

void __thiscall
FStateStreamManagerImpl::Game_DebugRender
          (FStateStreamManagerImpl *this,IStateStreamDebugRenderer *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->StateStreams).ArrayNum;
  pFVar2 = (this->StateStreams).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x50))(*(longlong **)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// Game_EndTick @ 1431279a0

void __thiscall FStateStreamManagerImpl::Game_EndTick(FStateStreamManagerImpl *this,double param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->bIsInTick == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsInTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamManagerImpl.cpp"
                       ,0x16,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bIsInTick = false;
  iVar1 = (this->StateStreams).ArrayNum;
  pFVar4 = (this->StateStreams).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,SUB84(param_1,0));
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// Game_Exit @ 143127a50

void __thiscall FStateStreamManagerImpl::Game_Exit(FStateStreamManagerImpl *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->bIsInTick != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsInTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamManagerImpl.cpp"
                       ,0x20,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->StateStreams).ArrayNum;
  pFVar4 = (this->StateStreams).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    (**(code **)(**(longlong **)pFVar4 + 0x10))();
    pFVar4 = pFVar4 + 0x10;
  }
  this->bGameExited = true;
  return;
}

// Game_GetStreamPointer @ 143127af0

void * __thiscall
FStateStreamManagerImpl::Game_GetStreamPointer(FStateStreamManagerImpl *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  
  if ((uint)(this->StateStreamsLookup).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Id < uint32(StateStreamsLookup.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamManagerImpl.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->StateStreamsLookup).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143127b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar4 = (void *)(**(code **)(**(longlong **)
                                  ((this->StateStreamsLookup).AllocatorInstance.Data +
                                  (longlong)(int)param_1 * 8) + 0x18))();
  return pvVar4;
}

// Game_IsInTick @ 143127b90

bool __thiscall FStateStreamManagerImpl::Game_IsInTick(FStateStreamManagerImpl *this)

{
  return this->bIsInTick;
}

// Render_Exit @ 143127ee0

void __thiscall FStateStreamManagerImpl::Render_Exit(FStateStreamManagerImpl *this)

{
  int iVar1;
  FTaskBase *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this_00 = (this->GarbageCollectTask).Pimpl.Reference;
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(this_00);
  }
  iVar1 = (this->StateStreams).ArrayNum;
  pFVar2 = (this->StateStreams).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x30))();
    pFVar2 = pFVar2 + 0x10;
  }
  this->bRenderExited = true;
  return;
}

// Render_GarbageCollect @ 143127f60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FStateStreamManagerImpl::Render_GarbageCollect(FStateStreamManagerImpl *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  undefined8 *puVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  FTaskBase *pFVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *lpTlsValue;
  FScriptContainerElement *pFVar12;
  FTaskHandle *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  pFVar8 = (this->GarbageCollectTask).Pimpl.Reference;
  if (pFVar8 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar8);
  }
  if (!param_1) {
    iVar10 = (this->StateStreams).ArrayNum;
    pFVar12 = (this->StateStreams).AllocatorInstance.Data;
    pFVar14 = pFVar12 + (longlong)iVar10 * 0x10;
    while( true ) {
      if ((this->StateStreams).ArrayNum != iVar10) {
        `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar12 == pFVar14) break;
      (**(code **)(**(longlong **)pFVar12 + 0x38))();
      pFVar12 = pFVar12 + 0x10;
    }
    return;
  }
  plVar7 = TlsGetValue(UE::Tasks::Private::SmallTaskAllocator._0_4_);
  lpTlsValue = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = ::operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      lpTlsValue = plVar7;
    }
    TlsSetValue(UE::Tasks::Private::SmallTaskAllocator._0_4_,lpTlsValue);
    plVar7 = lpTlsValue;
  }
  pFVar8 = (FTaskBase *)plVar7[1];
  if (pFVar8 == (FTaskBase *)0x0) {
    pFVar8 = (FTaskBase *)*plVar7;
    if (pFVar8 == (FTaskBase *)0x0) {
      pFVar8 = (FTaskBase *)
               TLockFreePointerListLIFOPad<void_*,64>::Pop
                         ((TLockFreePointerListLIFOPad<void_*,64> *)
                          &UE::Tasks::Private::SmallTaskAllocator.field_0x40);
      plVar7[1] = (longlong)pFVar8;
      if (pFVar8 == (FTaskBase *)0x0) {
        puVar9 = FMemory::Malloc(0x10000,0);
        plVar7[1] = (longlong)puVar9;
        lVar11 = 0xff;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar11 = lVar11 + -1;
          puVar9 = puVar2;
        } while (lVar11 != 0);
        *puVar2 = 0;
        pFVar8 = (FTaskBase *)plVar7[1];
      }
    }
    else {
      plVar7[1] = (longlong)pFVar8;
      *plVar7 = 0;
    }
    *(undefined4 *)(plVar7 + 2) = 0x100;
  }
  lVar11 = pFVar8->_padding_;
  iVar10 = (int)plVar7[2] + -1;
  *(int *)(plVar7 + 2) = iVar10;
  plVar7[1] = lVar11;
  if (((iVar10 < 0) || ((iVar10 != 0) != (lVar11 != 0))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::Tasks::Private::FTaskBase::FTaskBase(pFVar8,2,true);
  pFVar8->_padding_ =
       (longlong)
       &UE::Tasks::Private::
        TExecutableTaskBase<`FStateStreamManagerImpl::Render_GarbageCollect'::`2'::<lambda_1>,void,void>
        ::_vftable_;
  UE::Tasks::Private::FTaskBase::Init
            (pFVar8,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamManagerImpl.cpp(112)"
             ,Default,None,None);
  pFVar8[1]._padding_ = (longlong)this;
  pFVar8->_padding_ =
       (longlong)
       &UE::Tasks::Private::
        TExecutableTask<`FStateStreamManagerImpl::Render_GarbageCollect'::`2'::<lambda_1>_>::
        _vftable_;
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar8,0x100);
  pFVar13 = &this->GarbageCollectTask;
  if (pFVar13 == (FTaskHandle *)local_18) {
    if (pFVar8 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pFVar8->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar9 = (undefined8 *)pFVar8->_padding_;
  }
  else {
    pFVar4 = (pFVar13->Pimpl).Reference;
    (pFVar13->Pimpl).Reference = pFVar8;
    if (pFVar4 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar9 = (undefined8 *)pFVar4->_padding_;
    pFVar8 = pFVar4;
  }
  (*(code *)*puVar9)(pFVar8,1);
  return;
}

// Render_GetStream @ 143128210

IStateStream * __thiscall
FStateStreamManagerImpl::Render_GetStream(FStateStreamManagerImpl *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IStateStream *pIVar4;
  
  if ((uint)(this->StateStreamsLookup).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Id < uint32(StateStreamsLookup.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamManagerImpl.cpp"
                       ,0x7a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IStateStream *)(*pcVar1)();
      return pIVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->StateStreamsLookup).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IStateStream *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(IStateStream **)
          ((this->StateStreamsLookup).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// Render_Register @ 143128380

void __thiscall
FStateStreamManagerImpl::Render_Register
          (FStateStreamManagerImpl *this,IStateStream *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pFVar2 = (this->StateStreams).AllocatorInstance.Data;
  uStack_20 = CONCAT31(uStack_20._1_3_,param_2);
  local_28 = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->StateStreams).ArrayMax * 0x10
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->StateStreams).ArrayNum;
  piVar1 = &(this->StateStreams).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->StateStreams).AllocatorInstance,piVar1);
  }
  (this->StateStreams).ArrayNum = iVar5 + 1;
  pFVar2 = (this->StateStreams).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(undefined4 *)pFVar2 = (undefined4)local_28;
  *(undefined4 *)(pFVar2 + 4) = local_28._4_4_;
  *(undefined4 *)(pFVar2 + 8) = uStack_20;
  *(undefined4 *)(pFVar2 + 0xc) = uStack_1c;
  uVar6 = (**(code **)((longlong)*param_1 + 0x40))(param_1);
  uVar8 = (this->StateStreamsLookup).ArrayNum;
  if (uVar8 <= uVar6) {
    uVar7 = uVar6 + 1;
    if ((int)uVar8 < (int)uVar7) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar7 - uVar8,&(this->StateStreamsLookup).AllocatorInstance,
                         &(this->StateStreamsLookup).ArrayNum,&(this->StateStreamsLookup).ArrayMax);
      memset((this->StateStreamsLookup).AllocatorInstance.Data + (longlong)iVar5 * 8,0,
             (longlong)(int)(uVar7 - uVar8) << 3);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < (int)uVar8) {
        uVar8 = uVar8 - uVar7;
        if ((int)(uVar8 | uVar7) < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (uVar8 != 0) {
          pFVar2 = (this->StateStreamsLookup).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
          iVar5 = ((this->StateStreamsLookup).ArrayNum - uVar8) - uVar7;
          if (iVar5 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar8 * 8,(longlong)iVar5 << 3);
          }
          piVar1 = &(this->StateStreamsLookup).ArrayNum;
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->StateStreamsLookup).AllocatorInstance,
                     (this->StateStreamsLookup).ArrayNum,&(this->StateStreamsLookup).ArrayMax);
        }
      }
    }
  }
  uVar8 = 0;
  if ((int)uVar6 < (this->StateStreamsLookup).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)((this->StateStreamsLookup).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) !=
      0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StateStreamsLookup[Id] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamManagerImpl.cpp"
                       ,0x3d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar8 = 0;
  if ((int)uVar6 < (this->StateStreamsLookup).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(IStateStream **)((this->StateStreamsLookup).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) =
       param_1;
  return;
}

// Render_RegisterDependency @ 143128650

void __thiscall
FStateStreamManagerImpl::Render_RegisterDependency
          (FStateStreamManagerImpl *this,IStateStream *param_1,IStateStream *param_2)

{
  (**(code **)((longlong)*param_2 + 0x40))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014312866d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x40))(param_1);
  return;
}

// Render_RegisterDependency @ 143128680

void __thiscall
FStateStreamManagerImpl::Render_RegisterDependency
          (FStateStreamManagerImpl *this,uint param_1,uint param_2)

{
  return;
}

// Render_Update @ 143128690

void __thiscall FStateStreamManagerImpl::Render_Update(FStateStreamManagerImpl *this,double param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->StateStreams).ArrayNum;
  pFVar2 = (this->StateStreams).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x20))(*(longlong **)pFVar2,SUB84(param_1,0));
    pFVar2 = pFVar2 + 0x10;
  }
  iVar1 = (this->StateStreams).ArrayNum;
  pFVar2 = (this->StateStreams).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x28))();
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

