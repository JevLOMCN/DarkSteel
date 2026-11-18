// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 4

// Acquire @ 14f11b690

FWebMMediaAudioSample * __thiscall
TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::
TStorage::Acquire(TStorage *this,bool param_1)

{
  int *piVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FWebMMediaAudioSample *pFVar9;
  FWebMMediaAudioSample *pFVar10;
  FWebMMediaAudioSample *local_18 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar9 = (FWebMMediaAudioSample *)0x0;
  if ((this->Pool).ArrayNum < 1) {
    while (pFVar10 = pFVar9, ((this->WaitReadyForReuse).Tail)->NextNode != (TNode *)0x0) {
      local_18[0] = ((this->WaitReadyForReuse).Tail)->NextNode->Item;
      cVar6 = (**(code **)(local_18[0]->_padding_ + 0x10))(&local_18[0]->_padding_);
      if (cVar6 == '\0') break;
      pTVar2 = ((this->WaitReadyForReuse).Tail)->NextNode;
      if (pTVar2 != (TNode *)0x0) {
        pTVar3 = (this->WaitReadyForReuse).Tail;
        (this->WaitReadyForReuse).Tail = pTVar2;
        pTVar2->Item = (FWebMMediaAudioSample *)0x0;
        ::operator_delete(pTVar3,0x10);
      }
      (**(code **)(local_18[0]->_padding_ + 8))();
      pFVar9 = local_18[0];
      if (pFVar10 != (FWebMMediaAudioSample *)0x0) {
        pFVar4 = (this->Pool).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(this->Pool).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FWebMMediaAudioSample *)(*pcVar5)();
          return pFVar9;
        }
        iVar8 = (this->Pool).ArrayNum;
        piVar1 = &(this->Pool).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Pool).AllocatorInstance,piVar1);
        }
        (this->Pool).ArrayNum = iVar8 + 1;
        *(FWebMMediaAudioSample **)((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_18[0];
        pFVar9 = pFVar10;
      }
    }
  }
  else {
    iVar8 = (this->Pool).ArrayNum;
    pFVar10 = *(FWebMMediaAudioSample **)
               ((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8 + -8);
    (this->Pool).ArrayNum = iVar8 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if ((pFVar10 == (FWebMMediaAudioSample *)0x0) && (param_1)) {
    pFVar10 = TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>::Alloc();
    (**(code **)pFVar10->_padding_)(&pFVar10->_padding_);
  }
  return pFVar10;
}

// Acquire @ 14f11b860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWebMMediaTextureSample * __thiscall
TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>
::TStorage::Acquire(TStorage *this,bool param_1)

{
  int *piVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FWebMMediaTextureSample *pFVar9;
  FWebMMediaTextureSample *pFVar10;
  FWebMMediaTextureSample *local_18 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar9 = (FWebMMediaTextureSample *)0x0;
  if ((this->Pool).ArrayNum < 1) {
    while (pFVar10 = pFVar9, ((this->WaitReadyForReuse).Tail)->NextNode != (TNode *)0x0) {
      local_18[0] = ((this->WaitReadyForReuse).Tail)->NextNode->Item;
      cVar6 = (**(code **)(local_18[0]->_padding_ + 0x10))(&local_18[0]->_padding_);
      if (cVar6 == '\0') break;
      pTVar2 = ((this->WaitReadyForReuse).Tail)->NextNode;
      if (pTVar2 != (TNode *)0x0) {
        pTVar3 = (this->WaitReadyForReuse).Tail;
        (this->WaitReadyForReuse).Tail = pTVar2;
        pTVar2->Item = (FWebMMediaTextureSample *)0x0;
        ::operator_delete(pTVar3,0x10);
      }
      (**(code **)(local_18[0]->_padding_ + 8))();
      pFVar9 = local_18[0];
      if (pFVar10 != (FWebMMediaTextureSample *)0x0) {
        pFVar4 = (this->Pool).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(this->Pool).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FWebMMediaTextureSample *)(*pcVar5)();
          return pFVar9;
        }
        iVar8 = (this->Pool).ArrayNum;
        piVar1 = &(this->Pool).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Pool).AllocatorInstance,piVar1);
        }
        (this->Pool).ArrayNum = iVar8 + 1;
        *(FWebMMediaTextureSample **)((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_18[0];
        pFVar9 = pFVar10;
      }
    }
  }
  else {
    iVar8 = (this->Pool).ArrayNum;
    pFVar10 = *(FWebMMediaTextureSample **)
               ((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8 + -8);
    (this->Pool).ArrayNum = iVar8 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if ((pFVar10 == (FWebMMediaTextureSample *)0x0) && (param_1)) {
    pFVar10 = ::operator_new(0x38);
    if (pFVar10 == (FWebMMediaTextureSample *)0x0) {
      (*(code *)*_DAT_00000008)(8);
      pFVar10 = (FWebMMediaTextureSample *)0x0;
    }
    else {
      (pFVar10->Texture).Reference = (FRHITexture *)0x0;
      pFVar10->_padding_ = (longlong)&FWebMMediaTextureSample::_vftable__for__IMediaTextureSample__;
      (pFVar10->Time).Ticks = 0;
      pFVar10->_padding_ = (longlong)&FWebMMediaTextureSample::_vftable__for__IMediaPoolable__;
      (pFVar10->Duration).Ticks = 0;
      (**(code **)pFVar10->_padding_)();
    }
  }
  return pFVar10;
}

// Reserve @ 14f122270

void __thiscall
TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::
TStorage::Reserve(TStorage *this,uint param_1)

{
  uint uVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *local_28 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar1 = (this->Pool).ArrayNum;
  while (param_1 < uVar1) {
    if (((this->Pool).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->Pool).ArrayNum;
    plVar2 = *(longlong **)((this->Pool).AllocatorInstance.Data + (longlong)iVar6 * 8 + -8);
    (this->Pool).ArrayNum = iVar6 + -1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2,1);
    }
    uVar1 = (this->Pool).ArrayNum;
  }
  if (param_1 != uVar1) {
    do {
      puVar7 = ::operator_new(0x40);
      local_28[0] = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = &FWebMMediaAudioSample::_vftable__for__IMediaPoolable__;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[5] = 0;
        *puVar7 = &FWebMMediaAudioSample::_vftable__for__IMediaAudioSample__;
        *(undefined4 *)(puVar7 + 4) = 0;
        *(undefined4 *)(puVar7 + 6) = 0;
        puVar7[7] = 0;
        local_28[0] = puVar7;
      }
      pFVar3 = (this->Pool).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->Pool).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->Pool).ArrayNum;
      if (iVar6 == (this->Pool).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Pool).AllocatorInstance,&(this->Pool).ArrayMax);
        (this->Pool).ArrayNum = iVar6;
      }
      (this->Pool).ArrayNum = iVar6 + 1;
      *(undefined8 **)((this->Pool).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
    } while ((uint)(this->Pool).ArrayNum < param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f12243e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Reserve @ 14f122460

void __thiscall
TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>
::TStorage::Reserve(TStorage *this,uint param_1)

{
  uint uVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *local_28 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar1 = (this->Pool).ArrayNum;
  while (param_1 < uVar1) {
    if (((this->Pool).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->Pool).ArrayNum;
    plVar2 = *(longlong **)((this->Pool).AllocatorInstance.Data + (longlong)iVar6 * 8 + -8);
    (this->Pool).ArrayNum = iVar6 + -1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x138))(plVar2,1);
    }
    uVar1 = (this->Pool).ArrayNum;
  }
  if (param_1 != uVar1) {
    do {
      puVar7 = ::operator_new(0x38);
      local_28[0] = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &FWebMMediaTextureSample::_vftable__for__IMediaTextureSample__;
        puVar7[1] = &FWebMMediaTextureSample::_vftable__for__IMediaPoolable__;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        local_28[0] = puVar7;
      }
      pFVar3 = (this->Pool).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->Pool).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->Pool).ArrayNum;
      if (iVar6 == (this->Pool).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Pool).AllocatorInstance,&(this->Pool).ArrayMax);
        (this->Pool).ArrayNum = iVar6;
      }
      (this->Pool).ArrayNum = iVar6 + 1;
      *(undefined8 **)((this->Pool).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
    } while ((uint)(this->Pool).ArrayNum < param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f122622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

