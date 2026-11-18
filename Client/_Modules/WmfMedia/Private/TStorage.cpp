// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 6

// Acquire @ 14ea9ac70

FWmfMediaAudioSample * __thiscall
TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::
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
  FWmfMediaAudioSample *pFVar9;
  FWmfMediaAudioSample *pFVar10;
  FWmfMediaAudioSample *local_28 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar9 = (FWmfMediaAudioSample *)0x0;
  if ((this->Pool).ArrayNum < 1) {
    while (pFVar10 = pFVar9, ((this->WaitReadyForReuse).Tail)->NextNode != (TNode *)0x0) {
      local_28[0] = ((this->WaitReadyForReuse).Tail)->NextNode->Item;
      cVar6 = (**(code **)(local_28[0]->_padding_ + 0x10))();
      if (cVar6 == '\0') break;
      pTVar2 = ((this->WaitReadyForReuse).Tail)->NextNode;
      if (pTVar2 != (TNode *)0x0) {
        pTVar3 = (this->WaitReadyForReuse).Tail;
        (this->WaitReadyForReuse).Tail = pTVar2;
        pTVar2->Item = (FWmfMediaAudioSample *)0x0;
        ::operator_delete(pTVar3,0x10);
      }
      (**(code **)(local_28[0]->_padding_ + 8))();
      pFVar9 = local_28[0];
      if (pFVar10 != (FWmfMediaAudioSample *)0x0) {
        pFVar4 = (this->Pool).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->Pool).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FWmfMediaAudioSample *)(*pcVar5)();
          return pFVar9;
        }
        piVar1 = &(this->Pool).ArrayMax;
        iVar8 = (this->Pool).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Pool).AllocatorInstance,piVar1);
        }
        (this->Pool).ArrayNum = iVar8 + 1;
        *(FWmfMediaAudioSample **)((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_28[0];
        pFVar9 = pFVar10;
      }
    }
  }
  else {
    iVar8 = (this->Pool).ArrayNum;
    pFVar10 = *(FWmfMediaAudioSample **)
               ((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8 + -8);
    (this->Pool).ArrayNum = iVar8 + -1;
  }
  if (this != (TStorage *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  if ((pFVar10 == (FWmfMediaAudioSample *)0x0) && (param_1)) {
    pFVar10 = TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>::Alloc();
    (**(code **)pFVar10->_padding_)();
  }
  return pFVar10;
}

// Acquire @ 14ea9ae40

FWmfMediaHardwareVideoDecodingTextureSample * __thiscall
TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>
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
  FWmfMediaHardwareVideoDecodingTextureSample *pFVar9;
  FWmfMediaHardwareVideoDecodingTextureSample *pFVar10;
  FWmfMediaHardwareVideoDecodingTextureSample *local_28 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar9 = (FWmfMediaHardwareVideoDecodingTextureSample *)0x0;
  if ((this->Pool).ArrayNum < 1) {
    while (pFVar10 = pFVar9, ((this->WaitReadyForReuse).Tail)->NextNode != (TNode *)0x0) {
      local_28[0] = ((this->WaitReadyForReuse).Tail)->NextNode->Item;
      cVar6 = (**(code **)(local_28[0]->_padding_ + 0x10))();
      if (cVar6 == '\0') break;
      pTVar2 = ((this->WaitReadyForReuse).Tail)->NextNode;
      if (pTVar2 != (TNode *)0x0) {
        pTVar3 = (this->WaitReadyForReuse).Tail;
        (this->WaitReadyForReuse).Tail = pTVar2;
        pTVar2->Item = (FWmfMediaHardwareVideoDecodingTextureSample *)0x0;
        ::operator_delete(pTVar3,0x10);
      }
      (**(code **)(local_28[0]->_padding_ + 8))();
      pFVar9 = local_28[0];
      if (pFVar10 != (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) {
        pFVar4 = (this->Pool).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->Pool).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FWmfMediaHardwareVideoDecodingTextureSample *)(*pcVar5)();
          return pFVar9;
        }
        piVar1 = &(this->Pool).ArrayMax;
        iVar8 = (this->Pool).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Pool).AllocatorInstance,piVar1);
        }
        (this->Pool).ArrayNum = iVar8 + 1;
        *(FWmfMediaHardwareVideoDecodingTextureSample **)
         ((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_28[0];
        pFVar9 = pFVar10;
      }
    }
  }
  else {
    iVar8 = (this->Pool).ArrayNum;
    pFVar10 = *(FWmfMediaHardwareVideoDecodingTextureSample **)
               ((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8 + -8);
    (this->Pool).ArrayNum = iVar8 + -1;
  }
  if (this != (TStorage *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  if ((pFVar10 == (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) && (param_1)) {
    pFVar10 = TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>::Alloc()
    ;
    (**(code **)pFVar10->_padding_)();
  }
  return pFVar10;
}

// Acquire @ 14ea9b010

FWmfMediaTextureSample * __thiscall
TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::
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
  FWmfMediaTextureSample *pFVar9;
  FWmfMediaTextureSample *pFVar10;
  FWmfMediaTextureSample *local_28 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar9 = (FWmfMediaTextureSample *)0x0;
  if ((this->Pool).ArrayNum < 1) {
    while (pFVar10 = pFVar9, ((this->WaitReadyForReuse).Tail)->NextNode != (TNode *)0x0) {
      local_28[0] = ((this->WaitReadyForReuse).Tail)->NextNode->Item;
      cVar6 = (**(code **)(local_28[0]->_padding_ + 0x10))();
      if (cVar6 == '\0') break;
      pTVar2 = ((this->WaitReadyForReuse).Tail)->NextNode;
      if (pTVar2 != (TNode *)0x0) {
        pTVar3 = (this->WaitReadyForReuse).Tail;
        (this->WaitReadyForReuse).Tail = pTVar2;
        pTVar2->Item = (FWmfMediaTextureSample *)0x0;
        ::operator_delete(pTVar3,0x10);
      }
      (**(code **)(local_28[0]->_padding_ + 8))();
      pFVar9 = local_28[0];
      if (pFVar10 != (FWmfMediaTextureSample *)0x0) {
        pFVar4 = (this->Pool).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->Pool).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FWmfMediaTextureSample *)(*pcVar5)();
          return pFVar9;
        }
        piVar1 = &(this->Pool).ArrayMax;
        iVar8 = (this->Pool).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Pool).AllocatorInstance,piVar1);
        }
        (this->Pool).ArrayNum = iVar8 + 1;
        *(FWmfMediaTextureSample **)((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_28[0];
        pFVar9 = pFVar10;
      }
    }
  }
  else {
    iVar8 = (this->Pool).ArrayNum;
    pFVar10 = *(FWmfMediaTextureSample **)
               ((this->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8 + -8);
    (this->Pool).ArrayNum = iVar8 + -1;
  }
  if (this != (TStorage *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  if ((pFVar10 == (FWmfMediaTextureSample *)0x0) && (param_1)) {
    pFVar10 = TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>::Alloc();
    (**(code **)pFVar10->_padding_)();
  }
  return pFVar10;
}

// Reserve @ 14eaba2f0

void __thiscall
TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::
TStorage::Reserve(TStorage *this,uint param_1)

{
  int *piVar1;
  TArray<FWmfMediaAudioSample_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *local_38 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  piVar1 = &(this->Pool).ArrayNum;
  pTVar2 = &this->Pool;
  uVar3 = *piVar1;
  while (param_1 < uVar3) {
    if (((this->Pool).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->Pool).ArrayNum;
    plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8 + -8);
    (this->Pool).ArrayNum = iVar8 + -1;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x40))(plVar4,1);
    }
    uVar3 = *piVar1;
  }
  if (param_1 != uVar3) {
    do {
      puVar9 = ::operator_new(0x48);
      local_38[0] = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &FWmfMediaAudioSample::_vftable__for__IMediaAudioSample__;
        puVar9[1] = &FWmfMediaAudioSample::_vftable__for__IMediaPoolable__;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined4 *)(puVar9 + 4) = 0;
        puVar9[5] = 0;
        *(undefined4 *)(puVar9 + 6) = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        local_38[0] = puVar9;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)(this->Pool).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->Pool).ArrayNum;
      if (iVar8 == (this->Pool).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,&(this->Pool).ArrayMax);
        (this->Pool).ArrayNum = iVar8;
      }
      (this->Pool).ArrayNum = iVar8 + 1;
      *(undefined8 **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38[0];
    } while ((uint)(this->Pool).ArrayNum < param_1);
  }
  if (this != (TStorage *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

// Reserve @ 14eaba4e0

void __thiscall
TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>
::TStorage::Reserve(TStorage *this,uint param_1)

{
  int *piVar1;
  TArray<FWmfMediaHardwareVideoDecodingTextureSample_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *local_48 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  piVar1 = &(this->Pool).ArrayNum;
  pTVar2 = &this->Pool;
  uVar3 = *piVar1;
  while (param_1 < uVar3) {
    if (((this->Pool).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->Pool).ArrayNum;
    plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8 + -8);
    (this->Pool).ArrayNum = iVar8 + -1;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x138))(plVar4,1);
    }
    uVar3 = *piVar1;
  }
  if (param_1 != uVar3) {
    do {
      puVar9 = ::operator_new(0x90);
      local_48[0] = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &FWmfMediaTextureSample::_vftable__for__IMediaTextureSample__;
        puVar9[1] = &FWmfMediaTextureSample::_vftable__for__IMediaPoolable__;
        ((TIntPoint<int>_u_0 *)(puVar9 + 2))->_s_0 =
             (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        puVar9[3] = 0;
        ((TIntPoint<int>_u_0 *)(puVar9 + 4))->_s_0 =
             (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        *(undefined4 *)(puVar9 + 5) = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        *(undefined1 *)(puVar9 + 8) = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        *(undefined4 *)(puVar9 + 0xb) = 0;
        *puVar9 = &FWmfMediaHardwareVideoDecodingTextureSample::_vftable__for__IMediaTextureSample__
        ;
        puVar9[1] = &FWmfMediaHardwareVideoDecodingTextureSample::_vftable__for__IMediaPoolable__;
        puVar9[0xc] = &___7FWmfMediaHardwareVideoDecodingTextureSample__6B_;
        puVar9[0xd] = 0;
        puVar9[0xe] = 0;
        puVar9[0xf] = 0;
        puVar9[0x10] = 0;
        *(undefined2 *)(puVar9 + 0x11) = 0;
        *(undefined1 *)((longlong)puVar9 + 0x8a) = 0;
        local_48[0] = puVar9;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar5 + (longlong)(this->Pool).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->Pool).ArrayNum;
      if (iVar8 == (this->Pool).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,&(this->Pool).ArrayMax);
        (this->Pool).ArrayNum = iVar8;
      }
      (this->Pool).ArrayNum = iVar8 + 1;
      *(undefined8 **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48[0];
    } while ((uint)(this->Pool).ArrayNum < param_1);
  }
  if (this != (TStorage *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

// Reserve @ 14eaba730

void __thiscall
TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::
TStorage::Reserve(TStorage *this,uint param_1)

{
  int *piVar1;
  TArray<FWmfMediaTextureSample_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *local_38 [2];
  
  if (this == (TStorage *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  piVar1 = &(this->Pool).ArrayNum;
  pTVar2 = &this->Pool;
  uVar3 = *piVar1;
  while (param_1 < uVar3) {
    if (((this->Pool).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->Pool).ArrayNum;
    plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8 + -8);
    (this->Pool).ArrayNum = iVar8 + -1;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x138))(plVar4,1);
    }
    uVar3 = *piVar1;
  }
  if (param_1 != uVar3) {
    do {
      puVar9 = ::operator_new(0x60);
      local_38[0] = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &FWmfMediaTextureSample::_vftable__for__IMediaTextureSample__;
        puVar9[1] = &FWmfMediaTextureSample::_vftable__for__IMediaPoolable__;
        ((TIntPoint<int>_u_0 *)(puVar9 + 2))->_s_0 =
             (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        puVar9[3] = 0;
        ((TIntPoint<int>_u_0 *)(puVar9 + 4))->_s_0 =
             (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        *(undefined4 *)(puVar9 + 5) = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        *(undefined1 *)(puVar9 + 8) = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        *(undefined4 *)(puVar9 + 0xb) = 0;
        local_38[0] = puVar9;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)(this->Pool).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->Pool).ArrayNum;
      if (iVar8 == (this->Pool).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,&(this->Pool).ArrayMax);
        (this->Pool).ArrayNum = iVar8;
      }
      (this->Pool).ArrayNum = iVar8 + 1;
      *(undefined8 **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38[0];
    } while ((uint)(this->Pool).ArrayNum < param_1);
  }
  if (this != (TStorage *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

