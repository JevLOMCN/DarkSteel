// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// StaticStruct @ 146168320

UScriptStruct * __cdecl FMovieSceneEvaluationMetaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationMetaData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationMetaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData,(UObject *)pUVar1,
                         L"MovieSceneEvaluationMetaData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationMetaData.OuterSingleton;
}

// operator= @ 146186750

FMovieSceneEvaluationMetaData * __thiscall
FMovieSceneEvaluationMetaData::operator=
          (FMovieSceneEvaluationMetaData *this,FMovieSceneEvaluationMetaData *param_1)

{
  TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_>::operator=
            (&this->ActiveSequences,&param_1->ActiveSequences);
  pTVar1 = &this->ActiveEntities;
  if (pTVar1 != &param_1->ActiveEntities) {
    iVar3 = (param_1->ActiveEntities).ArrayNum;
    piVar2 = &(this->ActiveEntities).ArrayMax;
    _Src = (param_1->ActiveEntities).AllocatorInstance.Data;
    (this->ActiveEntities).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
      }
    }
  }
  return this;
}

// DiffEntities @ 14619e5d0

void __thiscall
FMovieSceneEvaluationMetaData::DiffEntities
          (FMovieSceneEvaluationMetaData *this,FMovieSceneEvaluationMetaData *param_1,
          TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  TLess<void> local_res8;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar9 = 0;
  uVar8 = 0;
  while ((((-1 < iVar9 && (iVar9 < (this->ActiveEntities).ArrayNum)) && (-1 < (int)uVar8)) &&
         ((int)uVar8 < (param_1->ActiveEntities).ArrayNum))) {
    if ((iVar9 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->ActiveEntities).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
    local_38 = *(undefined8 *)pFVar1;
    uStack_30 = *(undefined8 *)(pFVar1 + 8);
    uVar5 = 0;
    if ((int)uVar8 < (param_1->ActiveEntities).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->ActiveEntities).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    local_48 = *(uint *)pFVar1;
    uStack_44 = *(uint *)(pFVar1 + 4);
    uStack_40 = *(uint *)(pFVar1 + 8);
    uStack_3c = *(uint *)(pFVar1 + 0xc);
    if (((local_38._4_4_ == uStack_44) && (local_48 == (uint)local_38)) &&
       ((uint)uStack_30 == uStack_40)) {
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 + 1;
    }
    else if ((local_48 < (uint)local_38) ||
            ((local_48 == (uint)local_38 &&
             ((uStack_44 < local_38._4_4_ ||
              ((uStack_44 == local_38._4_4_ && (uStack_40 < (uint)uStack_30)))))))) {
      if (param_3 != (TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar1 = (param_3->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_3->ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = param_3->ArrayNum;
        if (iVar6 == param_3->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar6 + 1;
        pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        *(uint *)pFVar1 = local_48;
        *(uint *)(pFVar1 + 4) = uStack_44;
        *(uint *)(pFVar1 + 8) = uStack_40;
        *(uint *)(pFVar1 + 0xc) = uStack_3c;
      }
      uVar8 = uVar8 + 1;
    }
    else {
      if (param_2 != (TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar1 = local_38;
        *(undefined8 *)(pFVar1 + 8) = uStack_30;
      }
      iVar9 = iVar9 + 1;
    }
  }
  if (param_3 != (TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> *)0x0) {
    for (; (-1 < (int)uVar8 && ((int)uVar8 < (param_1->ActiveEntities).ArrayNum)); uVar8 = uVar8 + 1
        ) {
      if (((int)uVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      pFVar7 = (param_1->ActiveEntities).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      if (((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + (longlong)param_3->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_3->ArrayNum;
      if (iVar6 == param_3->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar6 + 1;
      uVar3 = *(undefined8 *)(pFVar7 + 8);
      pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar1 = *(undefined8 *)pFVar7;
      *(undefined8 *)(pFVar1 + 8) = uVar3;
    }
    AlgoImpl::
    IntroSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
              ((FMovieSceneOrderedEvaluationKey *)(param_3->AllocatorInstance).Data,
               param_3->ArrayNum,
               (TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>)0xe,
               local_res8);
  }
  if (param_2 != (TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> *)0x0) {
    for (; (-1 < iVar9 && (iVar9 < (this->ActiveEntities).ArrayNum)); iVar9 = iVar9 + 1) {
      if ((iVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      pFVar7 = (this->ActiveEntities).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
      if (((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      uVar3 = *(undefined8 *)(pFVar7 + 8);
      pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar1 = *(undefined8 *)pFVar7;
      *(undefined8 *)(pFVar1 + 8) = uVar3;
    }
    AlgoImpl::
    IntroSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
              ((FMovieSceneOrderedEvaluationKey *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum,
               (TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>)0xc,
               local_res8);
  }
  return;
}

// DiffSequences @ 14619eb10

void __thiscall
FMovieSceneEvaluationMetaData::DiffSequences
          (FMovieSceneEvaluationMetaData *this,FMovieSceneEvaluationMetaData *param_1,
          TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_28;
  uint local_24 [3];
  
  iVar8 = 0;
  uVar7 = 0;
  while ((((-1 < iVar8 && (iVar8 < (this->ActiveSequences).ArrayNum)) && (-1 < (int)uVar7)) &&
         ((int)uVar7 < (param_1->ActiveSequences).ArrayNum))) {
    if ((iVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_28 = *(uint *)((this->ActiveSequences).AllocatorInstance.Data + (longlong)iVar8 * 4);
    uVar5 = 0;
    if ((int)uVar7 < (param_1->ActiveSequences).ArrayNum) {
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
    local_24[0] = *(uint *)((param_1->ActiveSequences).AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 4);
    if (local_28 == local_24[0]) {
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 + 1;
    }
    else if (local_24[0] < local_28) {
      if (param_3 != (TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar1 = (param_3->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_24) &&
            ((FScriptContainerElement *)local_24 < pFVar1 + (longlong)param_3->ArrayMax * 4)) &&
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
        iVar6 = param_3->ArrayNum;
        if (iVar6 == param_3->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar6 + 1;
        *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_24[0];
      }
      uVar7 = uVar7 + 1;
    }
    else {
      if (param_2 != (TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
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
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28;
      }
      iVar8 = iVar8 + 1;
    }
  }
  if (param_3 != (TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *)0x0) {
    for (; (-1 < (int)uVar7 && ((int)uVar7 < (param_1->ActiveSequences).ArrayNum));
        uVar7 = uVar7 + 1) {
      if (((int)uVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->ActiveSequences).AllocatorInstance.Data + (longlong)(int)uVar7 * 4;
      pFVar2 = (param_3->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_3->ArrayMax * 4)) &&
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
      iVar6 = param_3->ArrayNum;
      if (iVar6 == param_3->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar1;
    }
  }
  if (param_2 != (TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *)0x0) {
    for (; (-1 < iVar8 && (iVar8 < (this->ActiveSequences).ArrayNum)); iVar8 = iVar8 + 1) {
      if ((iVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->ActiveSequences).AllocatorInstance.Data + (longlong)iVar8 * 4;
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
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
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar1;
    }
  }
  return;
}

// Reset @ 1461cd3b0

void __thiscall FMovieSceneEvaluationMetaData::Reset(FMovieSceneEvaluationMetaData *this)

{
  (this->ActiveSequences).ArrayNum = 0;
  if ((this->ActiveSequences).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->ActiveSequences).ArrayMax);
  }
  (this->ActiveEntities).ArrayNum = 0;
  if ((this->ActiveEntities).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->ActiveEntities).AllocatorInstance,0,&(this->ActiveEntities).ArrayMax
              );
  }
  return;
}

