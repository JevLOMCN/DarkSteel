// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 37

// ~TIndirectArray<FWorldContext,TSizedDefaultAllocator<32>_> @ 147277660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TIndirectArray<FWorldContext,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FWorldContext,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FWorldContext,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  FWorldContext *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(FWorldContext **)pFVar2;
    if (this_00 != (FWorldContext *)0x0) {
      FWorldContext::~FWorldContext(this_00);
      ::operator_delete(this_00,0x2c8);
    }
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// ~TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> @ 14761f720

void __thiscall
TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar3;
    if (pvVar2 != (void *)0x0) {
      FBulkData::~FBulkData((FBulkData *)((longlong)pvVar2 + 0x10));
      ::operator_delete(pvVar2,0x40);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// Empty @ 147636410

void __thiscall
TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_>::Empty
          (TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar3;
    if (pvVar2 != (void *)0x0) {
      FBulkData::~FBulkData((FBulkData *)((longlong)pvVar2 + 0x10));
      ::operator_delete(pvVar2,0x40);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_> @ 147689480

void __thiscall
TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x20);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Empty @ 1476a6120

void __thiscall
TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::Empty
          (TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x20);
    pFVar2 = pFVar2 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 1476c1b70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::RemoveAt
          (TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                       ,0x100,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Array).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                       ,0x101,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::operator_delete(*(void **)((this->Array).AllocatorInstance.Data + (longlong)param_1 * 8),0x20);
  uVar3 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  _Dst = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  iVar4 = (this->Array).ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = (this->Array).ArrayNum + -1;
  (this->Array).ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this,iVar4,&(this->Array).ArrayMax);
  }
  return;
}

// ~TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> @ 1478ab3c0

void __thiscall
TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Empty @ 1478cb2b0

void __thiscall
TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>::Empty
          (TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// ~TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> @ 14792c4b0

void __thiscall
TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// RemoveAt @ 147962940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>::RemoveAt
          (TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2,EAllowShrinking param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar6 = param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar1 = *(undefined8 **)pFVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    pFVar5 = pFVar5 + 8;
  }
  uVar4 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar4 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar6 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar6 != 0) {
      memmove(pFVar5,pFVar5 + (longlong)param_2 * 8,(longlong)iVar6 << 3);
    }
    iVar6 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar6;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar6,&(this->Array).ArrayMax);
    }
  }
  return;
}

// Empty @ 147b5eaa0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TIndirectArray<TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  FTypedElementInternalData *this_00;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar5;
    if (pvVar2 != (void *)0x0) {
      this_00 = (FTypedElementInternalData *)((longlong)pvVar2 + 0x3fe8);
      lVar3 = 0x199;
      do {
        this_00 = (FTypedElementInternalData *)((longlong)(this_00 + 0xfffffffffffffffe) + 8);
        FTypedElementInternalData::~FTypedElementInternalData(this_00);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      ::operator_delete(pvVar2,0x3fe8);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 147b5eb80

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TIndirectArray<TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  FTypedElementInternalData *this_00;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar5;
    if (pvVar2 != (void *)0x0) {
      this_00 = (FTypedElementInternalData *)((longlong)pvVar2 + 0x3fe8);
      lVar3 = 0x199;
      do {
        this_00 = (FTypedElementInternalData *)((longlong)(this_00 + 0xfffffffffffffffe) + 8);
        FTypedElementInternalData::~FTypedElementInternalData(this_00);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      ::operator_delete(pvVar2,0x3fe8);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 147b5ec60

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TIndirectArray<TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  FTypedElementInternalData *this_00;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar5;
    if (pvVar2 != (void *)0x0) {
      this_00 = (FTypedElementInternalData *)((longlong)pvVar2 + 0x4000);
      lVar3 = 0x200;
      do {
        this_00 = (FTypedElementInternalData *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10);
        FTypedElementInternalData::~FTypedElementInternalData(this_00);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      ::operator_delete(pvVar2,0x4000);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 147b5ed40

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TIndirectArray<TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  FTypedElementInternalData *this_00;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar5;
    if (pvVar2 != (void *)0x0) {
      this_00 = (FTypedElementInternalData *)((longlong)pvVar2 + 0x3fe8);
      lVar3 = 0x199;
      do {
        this_00 = (FTypedElementInternalData *)((longlong)(this_00 + 0xfffffffffffffffe) + 8);
        FTypedElementInternalData::~FTypedElementInternalData(this_00);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      ::operator_delete(pvVar2,0x3fe8);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<FInstancedStaticMeshVertexFactory,TSizedDefaultAllocator<32>_> @ 147cc7b50

void __thiscall
TIndirectArray<FInstancedStaticMeshVertexFactory,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FInstancedStaticMeshVertexFactory,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FInstancedStaticMeshVertexFactory,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 147cc7be0

void __thiscall
TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::
~TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  undefined8 *puVar3;
  ForElementType<void_*> FVar4;
  int iVar5;
  
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  iVar5 = (this->Array).ArrayNum;
  FVar4 = (ForElementType<void_*>)this;
  if (FVar2 != (ForElementType<void_*>)0x0) {
    FVar4 = FVar2;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = *(undefined8 **)FVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FVar4 = (ForElementType<void_*>)((longlong)FVar4 + 8);
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
              (8,8,0,(ForElementType<void_*> *)this,0,piVar1);
  }
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<void_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// Empty @ 147cf2260

void __thiscall
TIndirectArray<FGPUSortManager::FDynamicValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::Empty(TIndirectArray<FGPUSortManager::FDynamicValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  int iVar3;
  ForElementType<void_*> FVar4;
  ForElementType<void_*> FVar5;
  ForElementType<void_*> FVar6;
  undefined1 local_res18 [8];
  int local_res20;
  
  FVar4 = (this->Array).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<void_*>)this;
  if (FVar4 != (ForElementType<void_*>)0x0) {
    FVar6 = FVar4;
  }
  local_res20 = (this->Array).ArrayNum;
  if (local_res20 != 0) {
    do {
      FVar4 = *(ForElementType<void_*> *)FVar6;
      if (FVar4 != (ForElementType<void_*>)0x0) {
        iVar3 = *(int *)((longlong)FVar4 + 0x28);
        FVar5 = FVar4;
        if (*(ForElementType<void_*> *)((longlong)FVar4 + 0x20) != (ForElementType<void_*>)0x0) {
          FVar5 = *(ForElementType<void_*> *)((longlong)FVar4 + 0x20);
        }
        FVar2 = (ForElementType<void_*>)((longlong)FVar5 + (longlong)iVar3 * 8);
        while( true ) {
          if (*(int *)((longlong)FVar4 + 0x28) != iVar3) {
            `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar5 == FVar2) break;
          FGPUSortManager::FValueBuffer::ReleaseRHI(*(FValueBuffer **)FVar5);
          FVar5 = (ForElementType<void_*>)((longlong)FVar5 + 8);
        }
        TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        ::
        ~TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  ((TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)FVar4);
        ::operator_delete((void *)FVar4,0x40);
      }
      FVar6 = (ForElementType<void_*>)((longlong)FVar6 + 8);
      local_res20 = local_res20 + -1;
    } while (local_res20 != 0);
    local_res20 = 0;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                (8,8,param_1,(ForElementType<void_*> *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 147cf23e0

void __thiscall
TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::Empty(TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  undefined8 *puVar3;
  ForElementType<void_*> FVar4;
  int iVar5;
  
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  iVar5 = (this->Array).ArrayNum;
  FVar4 = (ForElementType<void_*>)this;
  if (FVar2 != (ForElementType<void_*>)0x0) {
    FVar4 = FVar2;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = *(undefined8 **)FVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FVar4 = (ForElementType<void_*>)((longlong)FVar4 + 8);
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                (8,8,param_1,(ForElementType<void_*> *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 147d219d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2,EAllowShrinking param_3)

{
  void *_Dst;
  ForElementType<void_*> FVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<void_*> FVar6;
  longlong *plVar7;
  int iVar8;
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (this->Array).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<void_*>)this;
  if (FVar1 != (ForElementType<void_*>)0x0) {
    FVar6 = FVar1;
  }
  plVar7 = (longlong *)((longlong)FVar6 + (longlong)param_1 * 8);
  for (iVar8 = param_2; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar2 = (undefined8 *)*plVar7;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    plVar7 = plVar7 + 1;
  }
  uVar5 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar5 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 != 0) {
    FVar1 = (this->Array).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<void_*>)this;
    if (FVar1 != (ForElementType<void_*>)0x0) {
      FVar6 = FVar1;
    }
    _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
    iVar8 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar8 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar8 << 3);
    }
    iVar8 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar8;
    if (param_3 == Default) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                (8,8,(ForElementType<void_*> *)this,iVar8,&(this->Array).ArrayMax);
    }
  }
  return;
}

// operator= @ 147fa9dd0

TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> * __thiscall
TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>::operator=
          (TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *this,
          TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  UObject *pUVar4;
  void *_Src;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined8 *local_68;
  FScriptContainerElement *local_60;
  int *piStack_58;
  undefined8 local_50;
  FScriptContainerElement *local_48;
  int *piStack_40;
  int local_38;
  undefined4 uStack_34;
  
  if (param_1 != this) {
    piVar1 = &(param_1->Array).ArrayNum;
    Empty(this,(param_1->Array).ArrayNum);
    pFVar12 = (param_1->Array).AllocatorInstance.Data;
    local_38 = *piVar1;
    pFVar2 = pFVar12 + (longlong)local_38 * 8;
    local_50 = CONCAT44(uStack_34,local_38);
    piStack_58 = piVar1;
    local_48 = pFVar12;
    piStack_40 = piVar1;
    while( true ) {
      local_60 = pFVar12;
      if (*piStack_58 != (int)local_50) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar2) break;
      lVar3 = *(longlong *)pFVar12;
      puVar10 = ::operator_new(0x90);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        *puVar10 = &___7FModelElement__6B_;
        pUVar4 = *(UObject **)(lVar3 + 8);
        puVar10[1] = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar4 = *(UObject **)(lVar3 + 0x10);
        puVar10[2] = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        puVar10[3] = 0;
        iVar9 = *(int *)(lVar3 + 0x20);
        _Src = *(void **)(lVar3 + 0x18);
        *(int *)(puVar10 + 4) = iVar9;
        if (iVar9 == 0) {
          *(int *)((longlong)puVar10 + 0x24) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,0,(ForAnyElementType *)(puVar10 + 3),iVar9,
                     (int *)((longlong)puVar10 + 0x24));
          memcpy(((ForAnyElementType *)(puVar10 + 3))->Data,_Src,(longlong)iVar9 * 2);
        }
        puVar10[5] = *(undefined8 *)(lVar3 + 0x28);
        uVar7 = *(undefined8 *)(lVar3 + 0x38);
        puVar10[6] = *(undefined8 *)(lVar3 + 0x30);
        puVar10[7] = uVar7;
        puVar10[8] = *(undefined8 *)(lVar3 + 0x40);
        *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(lVar3 + 0x48);
        *(undefined4 *)((longlong)puVar10 + 0x4c) = *(undefined4 *)(lVar3 + 0x4c);
        *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(lVar3 + 0x50);
        *(undefined4 *)((longlong)puVar10 + 0x54) = *(undefined4 *)(lVar3 + 0x54);
        uVar7 = *(undefined8 *)(lVar3 + 0x60);
        puVar10[0xb] = *(undefined8 *)(lVar3 + 0x58);
        puVar10[0xc] = uVar7;
        uVar7 = *(undefined8 *)(lVar3 + 0x70);
        puVar10[0xd] = *(undefined8 *)(lVar3 + 0x68);
        puVar10[0xe] = uVar7;
        uVar7 = *(undefined8 *)(lVar3 + 0x80);
        puVar10[0xf] = *(undefined8 *)(lVar3 + 0x78);
        puVar10[0x10] = uVar7;
        puVar10[0x11] = *(undefined8 *)(lVar3 + 0x88);
      }
      pFVar5 = (this->Array).AllocatorInstance.Data;
      local_68 = puVar10;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)(this->Array).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
      iVar9 = (this->Array).ArrayNum;
      piVar1 = &(this->Array).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      pFVar12 = pFVar12 + 8;
      (this->Array).ArrayNum = iVar9 + 1;
      *(undefined8 **)((this->Array).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_68;
    }
  }
  return this;
}

// ~TIndirectArray<FMeshBatch,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 1480f5fe0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
TIndirectArray<FMeshBatch,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
~TIndirectArray<FMeshBatch,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TIndirectArray<FMeshBatch,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this
          )

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  FMeshBatchElement *pFVar3;
  ForElementType<void_*> FVar4;
  FMeshBatchElement *pFVar5;
  int iVar6;
  
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  iVar6 = (this->Array).ArrayNum;
  FVar4 = (ForElementType<void_*>)this;
  if (FVar2 != (ForElementType<void_*>)0x0) {
    FVar4 = FVar2;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    pFVar3 = *(FMeshBatchElement **)FVar4;
    if (pFVar3 != (FMeshBatchElement *)0x0) {
      pFVar5 = pFVar3;
      if ((FMeshBatchElement *)pFVar3[1].PrimitiveUniformBuffer != (FMeshBatchElement *)0x0) {
        pFVar5 = (FMeshBatchElement *)pFVar3[1].PrimitiveUniformBuffer;
      }
      DestructItems<FMeshBatchElement,int>(pFVar5,*(int *)&pFVar3[1].PrimitiveUniformBufferResource)
      ;
      if (pFVar3[1].PrimitiveUniformBuffer != (FRHIUniformBuffer *)0x0) {
        FMemory::Free(pFVar3[1].PrimitiveUniformBuffer);
      }
      ::operator_delete(pFVar3,0xe0);
    }
    FVar4 = (ForElementType<void_*>)((longlong)FVar4 + 8);
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
              (8,8,0,(ForElementType<void_*> *)this,0,piVar1);
  }
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<void_*>)0x0) {
    return;
  }
  FMemory::Free((void *)FVar2);
  return;
}

// ~TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> @ 148444af0

void __thiscall
TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  FBitReader *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(FBitReader **)pFVar2;
    if (this_00 != (FBitReader *)0x0) {
      FBitReader::~FBitReader(this_00);
      ::operator_delete(this_00,0xb8);
    }
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// Empty @ 1484d5650

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
TIndirectArray<TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
::Empty(TIndirectArray<TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  FMeshBatchElement *pFVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  void **ppvVar7;
  
  ppvVar7 = (this->Array).AllocatorInstance.Data;
  for (iVar5 = (this->Array).ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    pvVar2 = *ppvVar7;
    if (pvVar2 != (void *)0x0) {
      lVar4 = 0x49;
      lVar6 = (longlong)pvVar2 + 0x3fe0;
      do {
        lVar4 = lVar4 + -1;
        pFVar3 = (FMeshBatchElement *)(lVar6 + -0xe0);
        if (*(FMeshBatchElement **)(lVar6 + -0x48) != (FMeshBatchElement *)0x0) {
          pFVar3 = *(FMeshBatchElement **)(lVar6 + -0x48);
        }
        DestructItems<FMeshBatchElement,int>(pFVar3,*(int *)(lVar6 + -0x40));
        if (*(void **)(lVar6 + -0x48) != (void *)0x0) {
          FMemory::Free(*(void **)(lVar6 + -0x48));
        }
        lVar6 = lVar6 + -0xe0;
      } while (lVar4 != 0);
      ::operator_delete(pvVar2,0x3fe0);
    }
    ppvVar7 = ppvVar7 + 1;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<void_*>_>
                (8,8,param_1,(ForElementType<void_*> *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_> @ 148510320

void __thiscall
TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_> *this)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  
  pFVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar7 = (this->Array).ArrayNum; iVar7 != 0; iVar7 = iVar7 + -1) {
    pvVar3 = *(void **)pFVar5;
    if (pvVar3 != (void *)0x0) {
      lVar4 = 0x200;
      lVar6 = (longlong)pvVar3 + 0xb048;
      do {
        puVar1 = (undefined8 *)(lVar6 + -0x58);
        lVar6 = lVar6 + -0x58;
        lVar4 = lVar4 + -1;
        if ((FShaderCommonCompileJob *)*puVar1 != (FShaderCommonCompileJob *)0x0) {
          FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)*puVar1);
        }
      } while (lVar4 != 0);
      ::operator_delete(pvVar3,0xb000);
    }
    pFVar5 = pFVar5 + 8;
  }
  piVar2 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar2);
  }
  pFVar5 = (this->Array).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
    return;
  }
  return;
}

// RemoveAt @ 1485406c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_>::RemoveAt
          (TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2,EAllowShrinking param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar8 = param_2; iVar8 != 0; iVar8 = iVar8 + -1) {
    pvVar2 = *(void **)pFVar9;
    if (pvVar2 != (void *)0x0) {
      lVar6 = 0x200;
      lVar7 = (longlong)pvVar2 + 0xb048;
      do {
        puVar1 = (undefined8 *)(lVar7 + -0x58);
        lVar7 = lVar7 + -0x58;
        lVar6 = lVar6 + -1;
        if ((FShaderCommonCompileJob *)*puVar1 != (FShaderCommonCompileJob *)0x0) {
          FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)*puVar1);
        }
      } while (lVar6 != 0);
      ::operator_delete(pvVar2,0xb000);
    }
    pFVar9 = pFVar9 + 8;
  }
  uVar5 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar5 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 != 0) {
    pFVar9 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar8 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar8 != 0) {
      memmove(pFVar9,pFVar9 + (longlong)param_2 * 8,(longlong)iVar8 << 3);
    }
    iVar8 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar8;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar8,&(this->Array).ArrayMax);
    }
  }
  return;
}

// Empty @ 1486395e0

void __thiscall
TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_>::Empty
          (TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// Serialize @ 148661f20

void __thiscall
TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_>::Serialize
          (TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_> *this,
          FArchive *param_1,UObject *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FSkeletalMeshLODRenderData *this_00;
  FSkeletalMeshLODRenderData *pFVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  FSkeletalMeshLODRenderData *local_38 [2];
  
  piVar1 = &(this->Array).ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Array).ArrayNum << 3,(longlong)*piVar1 << 3);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = (this->Array).ArrayNum;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar11 = 0;
    if (0 < (int)local_res10[0]) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (this->Array).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FSkeletalMeshLODRenderData::Serialize
                  (*(FSkeletalMeshLODRenderData **)((this->Array).AllocatorInstance.Data + lVar10),
                   param_1,param_2,uVar11);
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar11 < (int)local_res10[0]);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar11 = local_res8[0];
    uVar13 = (ulonglong)local_res8[0];
    pFVar12 = (this->Array).AllocatorInstance.Data;
    for (iVar9 = (this->Array).ArrayNum; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar3 = *(undefined8 **)pFVar12;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      pFVar12 = pFVar12 + 8;
    }
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    (this->Array).ArrayNum = 0;
    if (*piVar1 != uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,(ForAnyElementType *)this,0,piVar1);
    }
    iVar9 = 0;
    if (0 < (int)local_res8[0]) {
      do {
        this_00 = ::operator_new(0x768);
        pFVar8 = (FSkeletalMeshLODRenderData *)0x0;
        if (this_00 != (FSkeletalMeshLODRenderData *)0x0) {
          pFVar8 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(this_00,true);
        }
        pFVar12 = (this->Array).AllocatorInstance.Data;
        local_38[0] = pFVar8;
        if (((pFVar12 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar12 + (longlong)*piVar1 * 8)) &&
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
        iVar6 = (this->Array).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar1);
        }
        iVar9 = iVar9 + 1;
        (this->Array).ArrayNum = iVar6 + 1;
        *(FSkeletalMeshLODRenderData **)((this->Array).AllocatorInstance.Data + (longlong)iVar6 * 8)
             = local_38[0];
      } while (iVar9 < (int)local_res8[0]);
    }
    uVar11 = 0;
    if (0 < (int)local_res8[0]) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (this->Array).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FSkeletalMeshLODRenderData::Serialize
                  (*(FSkeletalMeshLODRenderData **)((this->Array).AllocatorInstance.Data + lVar10),
                   param_1,param_2,uVar11);
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return;
}

// operator= @ 14869c460

TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> * __thiscall
TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_>::operator=
          (TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *this,
          TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 *puVar9;
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined4 *local_68;
  FScriptContainerElement *local_60;
  int *piStack_58;
  undefined8 local_50;
  FScriptContainerElement *local_48;
  int *piStack_40;
  int local_38;
  undefined4 uStack_34;
  
  if (param_1 != this) {
    piVar1 = &(param_1->Array).ArrayNum;
    uVar3 = *piVar1;
    pFVar12 = (this->Array).AllocatorInstance.Data;
    for (iVar11 = (this->Array).ArrayNum; iVar11 != 0; iVar11 = iVar11 + -1) {
      pvVar4 = *(void **)pFVar12;
      if (pvVar4 != (void *)0x0) {
        FBulkData::~FBulkData((FBulkData *)((longlong)pvVar4 + 0x10));
        ::operator_delete(pvVar4,0x40);
      }
      pFVar12 = pFVar12 + 8;
    }
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar2 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar2 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,(ForAnyElementType *)this,0,piVar2);
    }
    pFVar13 = (param_1->Array).AllocatorInstance.Data;
    local_38 = *piVar1;
    pFVar12 = pFVar13 + (longlong)local_38 * 8;
    local_50 = CONCAT44(uStack_34,local_38);
    piStack_58 = piVar1;
    local_48 = pFVar13;
    piStack_40 = piVar1;
    while( true ) {
      local_60 = pFVar13;
      if (*piStack_58 != (int)local_50) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar13 == pFVar12) break;
      puVar5 = *(undefined4 **)pFVar13;
      puVar9 = ::operator_new(0x40);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = *puVar5;
        puVar9[1] = puVar5[1];
        puVar9[2] = puVar5[2];
        FBulkData::FBulkData((FBulkData *)(puVar9 + 4),(FBulkData *)(puVar5 + 4));
        *(undefined8 *)(puVar9 + 0xe) = *(undefined8 *)(puVar5 + 0xe);
      }
      pFVar6 = (this->Array).AllocatorInstance.Data;
      local_68 = puVar9;
      if (((pFVar6 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar6 + (longlong)*piVar2 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar10;
      }
      iVar11 = (this->Array).ArrayNum;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,piVar2);
      }
      pFVar13 = pFVar13 + 8;
      (this->Array).ArrayNum = iVar11 + 1;
      *(undefined4 **)((this->Array).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_68;
    }
  }
  return this;
}

// ~TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_> @ 148713ab0

void __thiscall
TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Serialize @ 148756410

void __thiscall
TIndirectArray<FStaticMeshLODResources,TSizedDefaultAllocator<32>_>::Serialize
          (TIndirectArray<FStaticMeshLODResources,TSizedDefaultAllocator<32>_> *this,
          FArchive *param_1,UObject *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FStaticMeshLODResources *this_00;
  FStaticMeshLODResources *pFVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  FStaticMeshLODResources *local_38 [2];
  
  piVar1 = &(this->Array).ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Array).ArrayNum << 3,(longlong)*piVar1 << 3);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = (this->Array).ArrayNum;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar11 = 0;
    if (0 < (int)local_res10[0]) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (this->Array).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FStaticMeshLODResources::Serialize
                  (*(FStaticMeshLODResources **)((this->Array).AllocatorInstance.Data + lVar10),
                   param_1,param_2,uVar11);
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar11 < (int)local_res10[0]);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar11 = local_res8[0];
    uVar13 = (ulonglong)local_res8[0];
    pFVar12 = (this->Array).AllocatorInstance.Data;
    for (iVar9 = (this->Array).ArrayNum; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar3 = *(undefined8 **)pFVar12;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      pFVar12 = pFVar12 + 8;
    }
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    (this->Array).ArrayNum = 0;
    if (*piVar1 != uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,(ForAnyElementType *)this,0,piVar1);
    }
    iVar9 = 0;
    if (0 < (int)local_res8[0]) {
      do {
        this_00 = ::operator_new(0x350);
        pFVar8 = (FStaticMeshLODResources *)0x0;
        if (this_00 != (FStaticMeshLODResources *)0x0) {
          pFVar8 = FStaticMeshLODResources::FStaticMeshLODResources(this_00,true);
        }
        pFVar12 = (this->Array).AllocatorInstance.Data;
        local_38[0] = pFVar8;
        if (((pFVar12 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar12 + (longlong)*piVar1 * 8)) &&
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
        iVar6 = (this->Array).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar1);
        }
        iVar9 = iVar9 + 1;
        (this->Array).ArrayNum = iVar6 + 1;
        *(FStaticMeshLODResources **)((this->Array).AllocatorInstance.Data + (longlong)iVar6 * 8) =
             local_38[0];
      } while (iVar9 < (int)local_res8[0]);
    }
    uVar11 = 0;
    if (0 < (int)local_res8[0]) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (this->Array).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FStaticMeshLODResources::Serialize
                  (*(FStaticMeshLODResources **)((this->Array).AllocatorInstance.Data + lVar10),
                   param_1,param_2,uVar11);
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return;
}

// Serialize @ 148756780

void __thiscall
TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_>::Serialize
          (TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_> *this,
          FArchive *param_1,UObject *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined8 *local_48 [2];
  
  piVar1 = &(this->Array).ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Array).ArrayNum << 3,(longlong)*piVar1 << 3);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = (this->Array).ArrayNum;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar9 = 0;
    if (0 < (int)local_res10[0]) {
      lVar8 = 0;
      while( true ) {
        uVar10 = 0;
        if ((int)uVar9 < (this->Array).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) break;
        FStaticMeshRayTracingProxyLOD::Serialize
                  (*(FStaticMeshRayTracingProxyLOD **)((this->Array).AllocatorInstance.Data + lVar8)
                   ,param_1,param_2,uVar9);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 8;
        if ((int)local_res10[0] <= (int)uVar9) {
          return;
        }
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar7 = (undefined8 *)0x0;
    local_res8[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar9 = local_res8[0];
    uVar13 = (ulonglong)local_res8[0];
    pFVar11 = (this->Array).AllocatorInstance.Data;
    for (iVar6 = (this->Array).ArrayNum; iVar6 != 0; iVar6 = iVar6 + -1) {
      plVar2 = *(longlong **)pFVar11;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,1);
      }
      pFVar11 = pFVar11 + 8;
    }
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    (this->Array).ArrayNum = 0;
    if (*piVar1 != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,(ForAnyElementType *)this,0,piVar1);
    }
    puVar12 = puVar7;
    if (0 < (int)local_res8[0]) {
      do {
        puVar5 = ::operator_new(0x60);
        local_48[0] = puVar7;
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[5] = 0;
          *puVar5 = &___7FStaticMeshRayTracingProxyLOD__6B_;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          *(undefined4 *)((longlong)puVar5 + 0x35) = 0xffffffff;
          *(undefined1 *)((longlong)puVar5 + 0x39) = 0xff;
          puVar5[8] = FIoChunkId::InvalidChunkId.Id._0_8_;
          *(undefined4 *)(puVar5 + 9) = FIoChunkId::InvalidChunkId.Id._8_4_;
          puVar5[10] = 0;
          *(undefined4 *)(puVar5 + 0xb) = 0;
          *(byte *)((longlong)puVar5 + 0x5c) = *(byte *)((longlong)puVar5 + 0x5c) & 0xe3 | 3;
          local_48[0] = puVar5;
        }
        pFVar11 = (this->Array).AllocatorInstance.Data;
        if (((pFVar11 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 < pFVar11 + (longlong)*piVar1 * 8)) &&
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
        iVar6 = (this->Array).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar1);
        }
        uVar9 = (int)puVar12 + 1;
        (this->Array).ArrayNum = iVar6 + 1;
        *(undefined8 **)((this->Array).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_48[0];
        puVar12 = (undefined8 *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
    puVar12 = puVar7;
    if (0 < (int)local_res8[0]) {
      do {
        uVar10 = (uint)puVar12;
        uVar9 = 0;
        if ((int)uVar10 < (this->Array).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FStaticMeshRayTracingProxyLOD::Serialize
                  (*(FStaticMeshRayTracingProxyLOD **)
                    ((this->Array).AllocatorInstance.Data + (longlong)puVar7),param_1,param_2,uVar10
                  );
        puVar7 = puVar7 + 1;
        puVar12 = (undefined8 *)(ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < (int)local_res8[0]);
    }
  }
  return;
}

// ~TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 14880b2f0

void __thiscall
TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x3fe8);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Empty @ 148834a40

void __thiscall
TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x3fe8);
    pFVar2 = pFVar2 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_> @ 14887e8e0

void __thiscall
TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar3;
    if (pvVar2 != (void *)0x0) {
      FBulkData::~FBulkData((FBulkData *)((longlong)pvVar2 + 0x20));
      ::operator_delete(pvVar2,0x50);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// Empty @ 148889860

void __thiscall
TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>::Empty
          (TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar3;
    if (pvVar2 != (void *)0x0) {
      FBulkData::~FBulkData((FBulkData *)((longlong)pvVar2 + 0x20));
      ::operator_delete(pvVar2,0x50);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 1488976f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_>::RemoveAt
          (TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2,EAllowShrinking param_3)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar6 = param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
    pvVar1 = *(void **)pFVar5;
    if (pvVar1 != (void *)0x0) {
      FBulkData::~FBulkData((FBulkData *)((longlong)pvVar1 + 0x20));
      ::operator_delete(pvVar1,0x50);
    }
    pFVar5 = pFVar5 + 8;
  }
  uVar4 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar4 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar6 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar6 != 0) {
      memmove(pFVar5,pFVar5 + (longlong)param_2 * 8,(longlong)iVar6 << 3);
    }
    iVar6 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar6;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar6,&(this->Array).ArrayMax);
    }
  }
  return;
}

// RemoveAt @ 148b70130

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<FWorldContext,TSizedDefaultAllocator<32>_>::RemoveAt
          (TIndirectArray<FWorldContext,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                       ,0x100,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Array).ArrayNum <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                       ,0x101,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((this->Array).AllocatorInstance.Data + (longlong)param_1 * 8);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0x2b0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x2b0));
    }
    *(undefined4 *)((longlong)pvVar1 + 0x2a8) = 0;
    if (*(void **)((longlong)pvVar1 + 0x2a0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x2a0));
    }
    TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)pvVar1 + 0x260));
    if (*(void **)((longlong)pvVar1 + 0x248) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x248));
    }
    if (*(void **)((longlong)pvVar1 + 0x228) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x228));
    }
    if (*(void **)((longlong)pvVar1 + 0x210) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x210));
    }
    if (*(void **)((longlong)pvVar1 + 0x1f0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x1f0));
    }
    if (*(void **)((longlong)pvVar1 + 0x1e0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x1e0));
    }
    if (*(void **)((longlong)pvVar1 + 0x1c8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x1c8));
    }
    if (*(void **)((longlong)pvVar1 + 0x1b8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x1b8));
    }
    if (*(void **)((longlong)pvVar1 + 0x1a8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x1a8));
    }
    DestructItems<FFullyLoadedPackagesInfo,int>
              (*(FFullyLoadedPackagesInfo **)((longlong)pvVar1 + 0x198),
               *(int *)((longlong)pvVar1 + 0x1a0));
    if (*(void **)((longlong)pvVar1 + 0x198) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x198));
    }
    FURL::~FURL((FURL *)((longlong)pvVar1 + 0x128));
    FURL::~FURL((FURL *)((longlong)pvVar1 + 0xc0));
    if (*(void **)((longlong)pvVar1 + 0xa8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xa8));
    }
    FURL::~FURL((FURL *)((longlong)pvVar1 + 8));
    ::operator_delete(pvVar1,0x2c8);
  }
  uVar5 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Array).ArrayNum + ~param_1;
  _Dst = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = (this->Array).ArrayNum + -1;
  (this->Array).ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this,iVar4,&(this->Array).ArrayMax);
  }
  return;
}

