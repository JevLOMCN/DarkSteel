// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 17

// FVirtualTextureProducerCollection @ 1458cd640

FVirtualTextureProducerCollection * __thiscall
FVirtualTextureProducerCollection::FVirtualTextureProducerCollection
          (FVirtualTextureProducerCollection *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FVirtualTextureProducerCollection *pFVar9;
  
  piVar1 = &(this->Producers).ArrayNum;
  (this->Producers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Producers).ArrayMax;
  (this->Callbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Callbacks).ArrayNum;
  *(undefined8 *)&this->CallbacksMap = 0;
  piVar4 = &(this->Callbacks).ArrayMax;
  *(undefined8 *)&(this->CallbacksMap).field_0x8 = 0;
  *(undefined8 *)&(this->CallbacksMap).field_0x20 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  *piVar3 = 0;
  *piVar4 = 0;
  *(undefined4 *)&(this->CallbacksMap).field_0x28 = 0;
  *(undefined4 *)&(this->CallbacksMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CallbacksMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CallbacksMap).field_0x34 = 0;
  *(undefined8 *)&(this->CallbacksMap).field_0x40 = 0;
  *(undefined4 *)&(this->CallbacksMap).field_0x48 = 0;
  this->NumPendingCallbacks = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xf8,8,1,(ForAnyElementType *)this,piVar1,piVar2);
  DefaultConstructItems<FVirtualTextureProducerCollection::FProducerEntry,int>
            ((this->Producers).AllocatorInstance.Data + (longlong)iVar8 * 0xf8,1);
  if (*piVar1 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FVirtualTextureProducerCollection *)(*pcVar6)();
      return pFVar9;
    }
  }
  *(undefined2 *)((this->Producers).AllocatorInstance.Data + 0xf4) = 1;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,&(this->Callbacks).AllocatorInstance,piVar3,piVar4);
  DefaultConstructItems<FVirtualTextureProducerCollection::FCallbackEntry,int>
            ((this->Callbacks).AllocatorInstance.Data + (longlong)iVar8 * 0x20,2);
  if (*piVar3 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FVirtualTextureProducerCollection *)(*pcVar6)();
      return pFVar9;
    }
  }
  *(undefined8 *)((this->Callbacks).AllocatorInstance.Data + 0x14) = 0;
  if (*piVar3 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FVirtualTextureProducerCollection *)(*pcVar6)();
      return pFVar9;
    }
  }
  pFVar5 = (this->Callbacks).AllocatorInstance.Data;
  *(undefined4 *)(pFVar5 + 0x38) = 1;
  *(undefined4 *)(pFVar5 + 0x34) = 1;
  return this;
}

// AcquireCallback @ 1458d6200

uint __thiscall
FVirtualTextureProducerCollection::AcquireCallback(FVirtualTextureProducerCollection *this)

{
  TArray<FVirtualTextureProducerCollection::FCallbackEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  pTVar1 = &this->Callbacks;
  if ((this->Callbacks).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  uVar6 = *(uint *)((pTVar1->AllocatorInstance).Data + 0x14);
  if (uVar6 == 0) {
    uVar6 = (this->Callbacks).ArrayNum;
    piVar2 = &(this->Callbacks).ArrayMax;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Callbacks).ArrayNum = uVar6 + 1;
    lVar8 = (longlong)(int)uVar6 * 0x20;
    DefaultConstructItems<FVirtualTextureProducerCollection::FCallbackEntry,int>
              ((pTVar1->AllocatorInstance).Data + lVar8,1);
    uVar7 = 0;
    if ((int)uVar6 < (this->Callbacks).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    *(uint *)(pFVar3 + lVar8 + 0x18) = uVar6;
    *(uint *)(pFVar3 + lVar8 + 0x14) = uVar6;
  }
  else {
    RemoveCallbackFromList(this,uVar6);
  }
  return uVar6;
}

// AddCallbackToList @ 1458d77b0

void __thiscall
FVirtualTextureProducerCollection::AddCallbackToList
          (FVirtualTextureProducerCollection *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  if ((int)param_1 < (this->Callbacks).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar1 = (this->Callbacks).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)param_2 < (this->Callbacks).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar2 = (this->Callbacks).AllocatorInstance.Data;
  if (param_2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= CallbackList_Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                       ,0xb5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(uint *)(pFVar2 + (longlong)(int)param_2 * 0x20 + 0x14) != param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Entry.NextIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                       ,0xb8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(uint *)(pFVar2 + (longlong)(int)param_2 * 0x20 + 0x18) != param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Entry.PrevIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                       ,0xb9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar2 + (longlong)(int)param_2 * 0x20 + 0x14) = param_1;
  *(undefined4 *)(pFVar2 + (longlong)(int)param_2 * 0x20 + 0x18) =
       *(undefined4 *)(pFVar1 + (longlong)(int)param_1 * 0x20 + 0x18);
  uVar5 = *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x20 + 0x18);
  uVar6 = 0;
  if ((int)uVar5 < (this->Callbacks).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  *(uint *)((this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20 + 0x14) = param_2
  ;
  *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x20 + 0x18) = param_2;
  return;
}

// AddDestroyedCallback @ 1458d8640

void __thiscall
FVirtualTextureProducerCollection::AddDestroyedCallback
          (FVirtualTextureProducerCollection *this,FVirtualTextureProducerHandle *param_1,
          _func___cdecl_void_FVirtualTextureProducerHandle_ptr_void_ptr *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FProducerEntry *pFVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  void *local_res20;
  uint local_18 [4];
  
  local_res20 = param_3;
  if (param_2 == (_func___cdecl_void_FVirtualTextureProducerHandle_ptr_void_ptr *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Function",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                       ,0xc9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_res20 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Baton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                       ,0xca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = GetEntry(this,param_1);
  if (pFVar4 != (FProducerEntry *)0x0) {
    local_18[0] = AcquireCallback(this);
    AddCallbackToList(this,pFVar4->DestroyedCallbacksIndex,local_18[0]);
    lVar8 = (longlong)(int)local_18[0];
    uVar6 = 0;
    if ((int)local_18[0] < (this->Callbacks).ArrayNum) {
      uVar6 = ~local_18[0] >> 0x1f;
    }
    if (uVar6 == 0) {
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
    pFVar7 = (this->Callbacks).AllocatorInstance.Data + lVar8 * 0x20;
    *(_func___cdecl_void_FVirtualTextureProducerHandle_ptr_void_ptr **)pFVar7 = param_2;
    *(void **)(pFVar7 + 8) = local_res20;
    *(FVirtualTextureProducerHandle *)(pFVar7 + 0x10) = *param_1;
    *(undefined4 *)(pFVar7 + 0x1c) = 0;
    uVar6 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res20 >> 4))
            * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    pTVar5 = TMapBase<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<void_*_const_&>
                       ((TMapBase<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>_>
                         *)&this->CallbacksMap,uVar6 >> 0x10 ^ uVar6,&local_res20);
    pFVar7 = (pTVar5->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar7 + (longlong)pTVar5->ArrayMax * 4)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = pTVar5->ArrayNum;
    if (iVar3 == pTVar5->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
    }
    pTVar5->ArrayNum = iVar3 + 1;
    *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)iVar3 * 4) = local_18[0];
  }
  return;
}

// AddEntryToList @ 1458d8a40

void __thiscall
FVirtualTextureProducerCollection::AddEntryToList
          (FVirtualTextureProducerCollection *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  if ((int)param_1 < (this->Producers).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar1 = (this->Producers).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)param_2 < (this->Producers).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar2 = (this->Producers).AllocatorInstance.Data;
  if (param_2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                       ,0x87,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(uint *)(pFVar2 + (longlong)(int)param_2 * 0xf8 + 0xec) != param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Entry.NextIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                       ,0x8a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(uint *)(pFVar2 + (longlong)(int)param_2 * 0xf8 + 0xf0) != param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Entry.PrevIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar2 + (longlong)(int)param_2 * 0xf8 + 0xec) = param_1;
  *(undefined4 *)(pFVar2 + (longlong)(int)param_2 * 0xf8 + 0xf0) =
       *(undefined4 *)(pFVar1 + (longlong)(int)param_1 * 0xf8 + 0xf0);
  uVar5 = *(uint *)(pFVar1 + (longlong)(int)param_1 * 0xf8 + 0xf0);
  uVar6 = 0;
  if ((int)uVar5 < (this->Producers).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  *(uint *)((this->Producers).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xf8 + 0xec) = param_2
  ;
  *(uint *)(pFVar1 + (longlong)(int)param_1 * 0xf8 + 0xf0) = param_2;
  return;
}

// CallPendingCallbacks @ 1458e0f10

void __thiscall
FVirtualTextureProducerCollection::CallPendingCallbacks(FVirtualTextureProducerCollection *this)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *pTVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  void *local_res20;
  uint local_78 [2];
  code *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (((this->Callbacks).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = 0;
  uVar7 = *(uint *)((this->Callbacks).AllocatorInstance.Data + 0x34);
  do {
    local_78[0] = uVar7;
    if (uVar7 == 1) {
      if ((uVar9 != this->NumPendingCallbacks) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumCallbacksChecked == NumPendingCallbacks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                             ,0xbd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->NumPendingCallbacks = 0;
      return;
    }
    uVar5 = 0;
    if ((int)uVar7 < (this->Callbacks).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar12 = (this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    if ((((byte)pFVar12[0x1c] & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Callback.bPending",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                           ,0x9d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_70 = *(code **)pFVar12;
    uStack_68 = *(undefined8 *)(pFVar12 + 8);
    local_60 = *(undefined8 *)(pFVar12 + 0x10);
    uStack_58 = *(undefined8 *)(pFVar12 + 0x18);
    if (*(void **)(pFVar12 + 8) != (void *)0x0) {
      pTVar6 = TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       *)&this->CallbacksMap,*(void **)(pFVar12 + 8));
      if ((pTVar6 == (TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(uint **)&pTVar6->field_0x8 <= local_78) &&
          (local_78 < *(uint **)&pTVar6->field_0x8 + *(int *)&pTVar6->field_0x14)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)&pTVar6->field_0x10;
      if (iVar1 != 0) {
        puVar2 = *(uint **)&pTVar6->field_0x8;
        iVar13 = 0;
        lVar8 = 0;
        bVar4 = *puVar2 != local_78[0];
        iVar10 = 0;
        do {
          iVar11 = iVar10;
          do {
            lVar8 = lVar8 + 1;
            iVar11 = iVar11 + 1;
            if (iVar1 <= lVar8) break;
          } while (bVar4 == (puVar2[lVar8] != local_78[0]));
          if (bVar4 != false) {
            if (iVar13 != iVar10) {
              memmove(puVar2 + iVar13,puVar2 + iVar10,(longlong)(iVar11 - iVar10) << 2);
            }
            iVar13 = iVar13 + (iVar11 - iVar10);
          }
          bVar4 = (bool)(bVar4 ^ 1);
          iVar10 = iVar11;
        } while (lVar8 < iVar1);
        *(int *)&pTVar6->field_0x10 = iVar13;
        if (iVar13 != 0) goto LAB_1458e1201;
      }
      local_res20 = *(void **)(pFVar12 + 8);
      if (*(int *)&(this->CallbacksMap).field_0x8 != *(int *)&(this->CallbacksMap).field_0x34) {
        uVar7 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<void_const_*>
                  ((TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->CallbacksMap,uVar7 ^ uVar7 >> 0x10,&local_res20);
      }
    }
LAB_1458e1201:
    uVar7 = local_78[0];
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)(pFVar12 + 8) = 0;
    *(undefined4 *)(pFVar12 + 0x10) = 0;
    *(undefined4 *)(pFVar12 + 0x1c) = 0;
    RemoveCallbackFromList(this,local_78[0]);
    AddCallbackToList(this,0,uVar7);
    if (local_70 != (code *)0x0) {
      if (((int)local_60 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CallbackCopy.OwnerHandle.PackedValue != 0u",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                             ,0xb5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*local_70)(&local_60,uStack_68);
    }
    uVar9 = uVar9 + 1;
    uVar7 = local_60._4_4_;
  } while( true );
}

// FindProducer @ 1458f7130

FVirtualTextureProducer * __thiscall
FVirtualTextureProducerCollection::FindProducer
          (FVirtualTextureProducerCollection *this,FVirtualTextureProducerHandle *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FVirtualTextureProducer *pFVar5;
  FVirtualTextureProducer *pFVar6;
  uint uVar7;
  
  uVar2 = (this->Producers).ArrayNum;
  uVar7 = param_1->PackedValue & 0x3fffff;
  if (uVar2 <= uVar7) {
    return (FVirtualTextureProducer *)0x0;
  }
  if ((int)uVar2 <= (int)uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVirtualTextureProducer *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar6 = (FVirtualTextureProducer *)
           ((this->Producers).AllocatorInstance.Data + (ulonglong)uVar7 * 0xf8);
  uVar1._0_1_ = pFVar6[1].Description.bPersistentHighestMip;
  uVar1._1_1_ = pFVar6[1].Description.bContinuousUpdate;
  pFVar5 = (FVirtualTextureProducer *)0x0;
  if (uVar1 == (ushort)(param_1->PackedValue >> 0x16)) {
    pFVar5 = pFVar6;
  }
  return pFVar5;
}

// GetEntry @ 145900470

FProducerEntry * __thiscall
FVirtualTextureProducerCollection::GetEntry
          (FVirtualTextureProducerCollection *this,FVirtualTextureProducerHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FProducerEntry *pFVar4;
  FProducerEntry *pFVar5;
  uint uVar6;
  
  uVar1 = (this->Producers).ArrayNum;
  uVar6 = param_1->PackedValue & 0x3fffff;
  if (uVar1 <= uVar6) {
    return (FProducerEntry *)0x0;
  }
  if ((int)uVar1 <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FProducerEntry *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar5 = (FProducerEntry *)((this->Producers).AllocatorInstance.Data + (ulonglong)uVar6 * 0xf8);
  pFVar4 = (FProducerEntry *)0x0;
  if (pFVar5->Magic == (ushort)(param_1->PackedValue >> 0x16)) {
    pFVar4 = pFVar5;
  }
  return pFVar4;
}

// GetProducer @ 145902880

FVirtualTextureProducer * __thiscall
FVirtualTextureProducerCollection::GetProducer
          (FVirtualTextureProducerCollection *this,FVirtualTextureProducerHandle *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FVirtualTextureProducer *pFVar4;
  uint uVar5;
  
  uVar5 = param_1->PackedValue & 0x3fffff;
  if ((uint)(this->Producers).ArrayNum <= uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < (uint32)Producers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                       ,0x10f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVirtualTextureProducer *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((this->Producers).ArrayNum <= (int)uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVirtualTextureProducer *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = (FVirtualTextureProducer *)
           ((this->Producers).AllocatorInstance.Data + (ulonglong)uVar5 * 0xf8);
  uVar1._0_1_ = pFVar4[1].Description.bPersistentHighestMip;
  uVar1._1_1_ = pFVar4[1].Description.bContinuousUpdate;
  if (uVar1 != (ushort)(param_1->PackedValue >> 0x16)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Entry.Magic == Handle.Magic",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                       ,0x111,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVirtualTextureProducer *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// HasPendingCallbacks @ 1459092e0

bool __thiscall
FVirtualTextureProducerCollection::HasPendingCallbacks(FVirtualTextureProducerCollection *this)

{
  return this->NumPendingCallbacks != 0;
}

// NotifyRequestsCompleted @ 145912d40

void __thiscall
FVirtualTextureProducerCollection::NotifyRequestsCompleted(FVirtualTextureProducerCollection *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId251,"FVirtualTextureSystem::NotifyRequestsComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
               ,0xfb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId251);
  }
  iVar1 = (this->Producers).ArrayNum;
  pFVar3 = (this->Producers).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0xf8;
  while( true ) {
    if ((this->Producers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVirtualTextureProducerCollection::FProducerEntry,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0xf] != (FScriptContainerElement)0x0) {
      (**(code **)(**(longlong **)(pFVar3 + 0xe0) + 0x40))();
    }
    pFVar3 = pFVar3 + 0xf8;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RegisterProducer @ 145914350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVirtualTextureProducerHandle __thiscall
FVirtualTextureProducerCollection::RegisterProducer
          (FVirtualTextureProducerCollection *this,FRHICommandListBase *param_1,
          FVirtualTextureSystem *param_2,FVTProducerDescription *param_3,IVirtualTexture *param_4)

{
  int *piVar1;
  IVirtualTexture *pIVar2;
  TArray<FVirtualTextureProducer::FPhysicalGroupDesc,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  FVirtualTexturePhysicalSpace *pFVar4;
  code *pcVar5;
  IVirtualTexture IVar6;
  bool bVar7;
  uchar *puVar8;
  FVirtualTexturePhysicalSpace *pFVar9;
  uchar uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  IVirtualTexture *pIVar18;
  int iVar19;
  IVirtualTexture in_stack_00000030;
  undefined1 auStackY_c8 [32];
  uint local_88;
  FVTPhysicalSpaceDescription local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  iVar12 = *(int *)(param_4 + 2);
  iVar19 = (uint)*(ushort *)&param_4[4].field_0x4 * *(int *)(param_4 + 3);
  iVar16 = (uint)*(ushort *)&param_4[4].field_0x6 * *(int *)&param_4[3].field_0x4;
  uVar13 = iVar19 * iVar12;
  uVar14 = iVar16 * iVar12;
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProducerWidth > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                         ,0x3d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (FVirtualTextureProducerHandle)uVar13;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProducerHeight > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                         ,0x3e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (FVirtualTextureProducerHandle)uVar13;
  }
  if (uVar14 < uVar13) {
    iVar16 = iVar19;
  }
  iVar19 = 1;
  if (iVar16 * iVar12 != 0) {
    iVar19 = iVar16 * iVar12;
  }
  uVar17 = (ulonglong)(iVar19 - 1) * 2 + 1;
  lVar15 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  if (((uint)lVar15 < (uint)(byte)param_4[5].field_0x1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDesc.MaxLevel <= FMath::CeilLogTwo(FMath::Max(ProducerWidth, ProducerHeight))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                         ,0x3f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (FVirtualTextureProducerHandle)uVar13;
  }
  if ((8 < (byte)param_4[5].field_0x2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDesc.NumTextureLayers <= 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                         ,0x40,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (FVirtualTextureProducerHandle)uVar13;
  }
  if (((byte)param_4[5].field_0x2 < (byte)param_4[0x17].field_0x4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDesc.NumPhysicalGroups <= InDesc.NumTextureLayers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (FVirtualTextureProducerHandle)uVar13;
  }
  if ((in_stack_00000030 == (IVirtualTexture)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProducer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                         ,0x42,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (FVirtualTextureProducerHandle)uVar13;
  }
  if (((this->Producers).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (FVirtualTextureProducerHandle)uVar13;
  }
  local_88 = *(uint *)((this->Producers).AllocatorInstance.Data + 0xec);
  if (local_88 == 0) {
    local_88 = (this->Producers).ArrayNum;
    piVar1 = &(this->Producers).ArrayMax;
    if (local_88 == *piVar1) {
      local_88 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8f8,(ForAnyElementType *)this,piVar1);
    }
    (this->Producers).ArrayNum = local_88 + 1;
    lVar15 = (longlong)(int)local_88 * 0xf8;
    DefaultConstructItems<FVirtualTextureProducerCollection::FProducerEntry,int>
              ((this->Producers).AllocatorInstance.Data + lVar15,1);
    uVar13 = 0;
    if ((int)local_88 < (this->Producers).ArrayNum) {
      uVar13 = ~local_88 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (FVirtualTextureProducerHandle)uVar13;
    }
    pFVar3 = (this->Producers).AllocatorInstance.Data;
    *(uint *)(pFVar3 + lVar15 + 0xf0) = local_88;
    *(uint *)(pFVar3 + lVar15 + 0xec) = local_88;
  }
  else {
    RemoveEntryFromList(this,local_88);
  }
  uVar13 = 0;
  if ((int)local_88 < (this->Producers).ArrayNum) {
    uVar13 = ~local_88 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (FVirtualTextureProducerHandle)uVar13;
  }
  IVar6 = param_4[1];
  pIVar18 = (IVirtualTexture *)
            ((this->Producers).AllocatorInstance.Data + (longlong)(int)local_88 * 0xf8);
  *pIVar18 = *param_4;
  pIVar18[1] = IVar6;
  IVar6 = param_4[3];
  pIVar18[2] = param_4[2];
  pIVar18[3] = IVar6;
  IVar6 = param_4[5];
  pIVar18[4] = param_4[4];
  pIVar18[5] = IVar6;
  IVar6 = param_4[7];
  pIVar18[6] = param_4[6];
  pIVar18[7] = IVar6;
  IVar6 = param_4[9];
  pIVar18[8] = param_4[8];
  pIVar18[9] = IVar6;
  IVar6 = param_4[0xb];
  pIVar18[10] = param_4[10];
  pIVar18[0xb] = IVar6;
  IVar6 = param_4[0xd];
  pIVar18[0xc] = param_4[0xc];
  pIVar18[0xd] = IVar6;
  IVar6 = param_4[0xf];
  pIVar18[0xe] = param_4[0xe];
  pIVar18[0xf] = IVar6;
  IVar6 = param_4[0x11];
  pIVar18[0x10] = param_4[0x10];
  pIVar18[0x11] = IVar6;
  IVar6 = param_4[0x13];
  pIVar18[0x12] = param_4[0x12];
  pIVar18[0x13] = IVar6;
  IVar6 = param_4[0x15];
  pIVar18[0x14] = param_4[0x14];
  pIVar18[0x15] = IVar6;
  IVar6 = param_4[0x17];
  pIVar18[0x16] = param_4[0x16];
  pIVar18[0x17] = IVar6;
  pIVar18[0x18] = param_4[0x18];
  pIVar18[0x1c] = in_stack_00000030;
  uVar13 = AcquireCallback(this);
  *(uint *)(pIVar18 + 0x1d) = uVar13;
  this_00 = (TArray<FVirtualTextureProducer::FPhysicalGroupDesc,TSizedDefaultAllocator<32>_> *)
            (pIVar18 + 0x1a);
  local_60.Dimensions = *(uchar *)(param_4 + 5);
  pIVar2 = pIVar18 + 0x1b;
  local_60.bCanSplit = param_4[1].field_0x6 == '\0';
  bVar11 = param_4[0x17].field_0x4;
  local_60.TileSize = *(int *)(param_4 + 2) + *(int *)&param_4[2].field_0x4 * 2;
  iVar12 = *(int *)pIVar2;
  if (iVar12 < (int)(uint)bVar11) {
    iVar12 = (uint)bVar11 - iVar12;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar12,(ForAnyElementType *)this_00,(int *)pIVar2,
                        (int *)&pIVar18[0x1b].field_0x4);
    DefaultConstructItems<FVirtualTextureProducer::FPhysicalGroupDesc,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar16 * 8,iVar12);
  }
  else if ((int)(uint)bVar11 < iVar12) {
    iVar12 = iVar12 - (uint)bVar11;
    if (iVar12 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (FVirtualTextureProducerHandle)uVar13;
      }
    }
    else if (iVar12 == 0) goto LAB_1459147db;
    TArray<FVirtualTextureProducer::FPhysicalGroupDesc,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (this_00,(uint)bVar11,iVar12);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this_00,*(int *)pIVar2,(int *)&pIVar18[0x1b].field_0x4);
  }
LAB_1459147db:
  uVar13 = 0;
  if (param_4[0x17].field_0x4 != '\0') {
    do {
      bVar11 = 0;
      local_60.NumLayers = 0;
      if (param_4[5].field_0x2 == 0) {
LAB_145914864:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysicalSpaceDesc.NumLayers > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                           ,0x5d,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (FVirtualTextureProducerHandle)uVar13;
        }
      }
      else {
        puVar8 = &param_4[5].field_0x3;
        uVar17 = (ulonglong)(byte)param_4[5].field_0x2;
        do {
          if (puVar8[0x92] == uVar13) {
            local_60.Format[bVar11].Value = *puVar8;
            uVar10 = true;
            if (GRHIGlobals.SupportsTextureViews == false) {
              uVar10 = puVar8[0x89];
            }
            local_60.bHasLayerSrgbView[local_60.NumLayers] = (bool)uVar10;
            bVar11 = local_60.NumLayers + 1;
            local_60.NumLayers = bVar11;
          }
          puVar8 = puVar8 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
        if (bVar11 == 0) goto LAB_145914864;
      }
      pFVar9 = FVirtualTextureSystem::AcquirePhysicalSpace
                         ((FVirtualTextureSystem *)param_3,(FRHICommandListBase *)param_2,&local_60)
      ;
      uVar14 = 0;
      if ((int)uVar13 < *(int *)pIVar2) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (FVirtualTextureProducerHandle)uVar13;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      pFVar4 = *(FVirtualTexturePhysicalSpace **)(pFVar3 + (longlong)(int)uVar13 * 8);
      if (pFVar4 != pFVar9) {
        *(FVirtualTexturePhysicalSpace **)(pFVar3 + (longlong)(int)uVar13 * 8) = pFVar9;
        if (pFVar9 != (FVirtualTexturePhysicalSpace *)0x0) {
          pFVar9->NumRefs = pFVar9->NumRefs + 1;
        }
        if (pFVar4 != (FVirtualTexturePhysicalSpace *)0x0) {
          if ((pFVar4->NumRefs == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumRefs > 0u",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTexturePhysicalSpace.h"
                                 ,0x75,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (FVirtualTextureProducerHandle)uVar13;
          }
          pFVar4->NumRefs = pFVar4->NumRefs - 1;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (byte)param_4[0x17].field_0x4);
  }
  *(uint *)&(param_1->MemManager).Top =
       (uint)*(ushort *)&pIVar18[0x1e].field_0x4 << 0x16 | local_88 & 0x3fffff;
  return (FVirtualTextureProducerHandle)(uint)param_1;
}

// ReleaseProducer @ 145916270

void __thiscall
FVirtualTextureProducerCollection::ReleaseProducer
          (FVirtualTextureProducerCollection *this,FVirtualTextureSystem *param_1,
          FVirtualTextureProducerHandle *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FProducerEntry *this_00;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  this_00 = GetEntry(this,param_2);
  if (this_00 != (FProducerEntry *)0x0) {
    uVar9 = this_00->DestroyedCallbacksIndex;
    uVar8 = 0;
    if ((int)uVar9 < (this->Callbacks).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = this_00->DestroyedCallbacksIndex;
    uVar9 = *(uint *)((this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 0x14)
    ;
    if (uVar9 != uVar8) {
      do {
        uVar10 = ~uVar9 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar9 < (this->Callbacks).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Callbacks).AllocatorInstance.Data;
        lVar11 = (longlong)(int)uVar9 * 0x20;
        uVar1 = *(uint *)(pFVar3 + lVar11 + 0x14);
        if ((*(uint *)(pFVar3 + lVar11 + 0x10) != param_2->PackedValue) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Callback.OwnerHandle == Handle",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                               ,0x6e,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((((byte)pFVar3[lVar11 + 0x1c] & 1) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Callback.bPending",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                               ,0x70,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(pFVar3 + lVar11 + 0x1c) = *(uint *)(pFVar3 + lVar11 + 0x1c) | 1;
        uVar8 = 0;
        if ((int)uVar9 < (this->Callbacks).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Callbacks).AllocatorInstance.Data;
        uVar8 = *(uint *)(pFVar3 + lVar11 + 0x18);
        uVar2 = *(undefined4 *)(pFVar3 + lVar11 + 0x14);
        uVar7 = 0;
        if ((int)uVar8 < (this->Callbacks).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)
         ((this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x14) = uVar2;
        uVar8 = *(uint *)(pFVar3 + lVar11 + 0x14);
        uVar2 = *(undefined4 *)(pFVar3 + lVar11 + 0x18);
        uVar7 = 0;
        if ((int)uVar8 < (this->Callbacks).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)
         ((this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x18) = uVar2;
        *(uint *)(pFVar3 + lVar11 + 0x18) = uVar9;
        *(uint *)(pFVar3 + lVar11 + 0x14) = uVar9;
        if (((this->Callbacks).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Callbacks).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar9 < (this->Callbacks).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Callbacks).AllocatorInstance.Data;
        if ((uVar9 < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= CallbackList_Count",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                               ,0xb5,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(uint *)(pFVar4 + lVar11 + 0x14) != uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Entry.NextIndex == Index",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                               ,0xb8,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(uint *)(pFVar4 + lVar11 + 0x18) != uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Entry.PrevIndex == Index",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                               ,0xb9,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(pFVar4 + lVar11 + 0x14) = 1;
        *(undefined4 *)(pFVar4 + lVar11 + 0x18) = *(undefined4 *)(pFVar3 + 0x38);
        uVar8 = *(uint *)(pFVar3 + 0x38);
        uVar10 = 0;
        if ((int)uVar8 < (this->Callbacks).ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x14) =
             uVar9;
        *(uint *)(pFVar3 + 0x38) = uVar9;
        this->NumPendingCallbacks = this->NumPendingCallbacks + 1;
        uVar8 = this_00->DestroyedCallbacksIndex;
        uVar9 = uVar1;
      } while (uVar1 != uVar8);
    }
    RemoveCallbackFromList(this,uVar8);
    AddCallbackToList(this,0,uVar8);
    this_00->DestroyedCallbacksIndex = 0;
    this_00->Magic = this_00->Magic + 1 & 0x3ff;
    FVirtualTextureProducer::Release(&this_00->Producer,param_1,param_2);
    uVar9 = param_2->PackedValue;
    RemoveEntryFromList(this,uVar9 & 0x3fffff);
    AddEntryToList(this,0,uVar9 & 0x3fffff);
  }
  return;
}

// RemoveAllCallbacks @ 145918440

uint __thiscall
FVirtualTextureProducerCollection::RemoveAllCallbacks
          (FVirtualTextureProducerCollection *this,void *param_1)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  uint *local_res10;
  TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_res18;
  void *local_res20;
  
  if (param_1 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Baton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                       ,0xdc,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  local_res18 = (TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)&this->CallbacksMap;
  puVar9 = (undefined8 *)0x0;
  uVar5 = 0;
  pTVar7 = TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find(local_res18,param_1);
  puVar12 = (undefined8 *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    puVar12 = puVar9;
  }
  if (puVar12 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar12 + 1);
    puVar10 = (uint *)*puVar12;
    local_res10 = puVar10 + iVar1;
    while( true ) {
      puVar3 = local_res10;
      uVar5 = (uint)puVar9;
      if (*(int *)(puVar12 + 1) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar10 == puVar3) break;
      uVar11 = *puVar10;
      uVar6 = 0;
      if ((int)uVar11 < (this->Callbacks).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
      pFVar8 = (this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x20;
      if (*(void **)(pFVar8 + 8) != param_1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Callback.Baton == Baton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                           ,0xe5,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
      if (*(longlong *)pFVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Callback.DestroyedFunction",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                           ,0xe6,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
      *(longlong *)pFVar8 = 0;
      *(longlong *)(pFVar8 + 8) = 0;
      *(undefined4 *)(pFVar8 + 0x10) = 0;
      if (((byte)pFVar8[0x1c] & 1) == 0) {
        *(undefined4 *)(pFVar8 + 0x1c) = 0;
        RemoveCallbackFromList(this,uVar11);
        AddCallbackToList(this,0,uVar11);
      }
      puVar9 = (undefined8 *)(ulonglong)(uVar5 + 1);
      puVar10 = puVar10 + 1;
    }
    if (*(int *)&(local_res18->Elements).field_0x8 != *(int *)&(local_res18->Elements).field_0x34) {
      uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      local_res20 = param_1;
      TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>(local_res18,uVar11 >> 0x10 ^ uVar11,&local_res20);
    }
  }
  return uVar5;
}

// RemoveCallbackFromList @ 1459187c0

void __thiscall
FVirtualTextureProducerCollection::RemoveCallbackFromList
          (FVirtualTextureProducerCollection *this,uint param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((int)param_1 < (this->Callbacks).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  pFVar2 = (this->Callbacks).AllocatorInstance.Data;
  uVar6 = *(uint *)(pFVar2 + (longlong)(int)param_1 * 0x20 + 0x18);
  uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)param_1 * 0x20 + 0x14);
  uVar5 = 0;
  if ((int)uVar6 < (this->Callbacks).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  *(undefined4 *)((this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20 + 0x14) =
       uVar1;
  uVar6 = *(uint *)(pFVar2 + (longlong)(int)param_1 * 0x20 + 0x14);
  uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)param_1 * 0x20 + 0x18);
  uVar5 = 0;
  if ((int)uVar6 < (this->Callbacks).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  *(undefined4 *)((this->Callbacks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20 + 0x18) =
       uVar1;
  *(uint *)(pFVar2 + (longlong)(int)param_1 * 0x20 + 0x18) = param_1;
  *(uint *)(pFVar2 + (longlong)(int)param_1 * 0x20 + 0x14) = param_1;
  return;
}

// RemoveEntryFromList @ 145918920

void __thiscall
FVirtualTextureProducerCollection::RemoveEntryFromList
          (FVirtualTextureProducerCollection *this,uint param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((int)param_1 < (this->Producers).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  pFVar2 = (this->Producers).AllocatorInstance.Data;
  uVar6 = *(uint *)(pFVar2 + (longlong)(int)param_1 * 0xf8 + 0xf0);
  uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)param_1 * 0xf8 + 0xec);
  uVar5 = 0;
  if ((int)uVar6 < (this->Producers).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  *(undefined4 *)((this->Producers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xf8 + 0xec) =
       uVar1;
  uVar6 = *(uint *)(pFVar2 + (longlong)(int)param_1 * 0xf8 + 0xec);
  uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)param_1 * 0xf8 + 0xf0);
  uVar5 = 0;
  if ((int)uVar6 < (this->Producers).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  *(undefined4 *)((this->Producers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xf8 + 0xf0) =
       uVar1;
  *(uint *)(pFVar2 + (longlong)(int)param_1 * 0xf8 + 0xf0) = param_1;
  *(uint *)(pFVar2 + (longlong)(int)param_1 * 0xf8 + 0xec) = param_1;
  return;
}

// TryReleaseProducer @ 145925960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FVirtualTextureProducerCollection::TryReleaseProducer
          (FVirtualTextureProducerCollection *this,FVirtualTextureSystem *param_1,
          FVirtualTextureProducerHandle *param_2)

{
  IVirtualTexture *pIVar1;
  FProducerEntry *pFVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  undefined1 auStack_78 [32];
  TRefCountPtr<FBaseGraphTask> local_58 [4];
  TRefCountPtr<FBaseGraphTask> *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = GetEntry(this,param_2);
  if (pFVar2 != (FProducerEntry *)0x0) {
    local_2c = 4;
    local_38 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    local_30 = 0;
    pIVar1 = (pFVar2->Producer).VirtualTexture;
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_2,local_58);
    if (local_30 != 0) {
      pTVar3 = local_58;
      if (local_38 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
        pTVar3 = local_38;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar3,local_30);
      if (local_38 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
        FMemory::Free(local_38);
      }
      return false;
    }
    pTVar3 = local_58;
    if (local_38 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      pTVar3 = local_38;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar3,0);
    if (local_38 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      FMemory::Free(local_38);
    }
  }
  ReleaseProducer(this,param_1,param_2);
  return true;
}

