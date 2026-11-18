// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// GetAnimTypeID @ 1461b01e0

FMovieSceneAnimTypeID __thiscall
TMovieSceneAnimTypeIDContainer<FString>::GetAnimTypeID
          (TMovieSceneAnimTypeIDContainer<FString> *this,FString *param_1)

{
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FMovieSceneAnimTypeID FVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *in_R8;
  FScriptContainerElement *local_38 [2];
  
  if ((this == (TMovieSceneAnimTypeIDContainer<FString> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar9.ID = (*pcVar4)();
    return (FMovieSceneAnimTypeID)FVar9.ID;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar3 = (this->Data).AllocatorInstance.Data;
  iVar7 = (this->Data).ArrayNum;
  pFVar11 = pFVar3;
  do {
    if (pFVar11 == pFVar3 + (longlong)iVar7 * 0x10) {
LAB_1461b0291:
      pFVar3 = (this->Data).AllocatorInstance.Data;
      if (((pFVar3 <= in_R8) && (in_R8 < pFVar3 + (longlong)(this->Data).ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar9.ID = (*pcVar4)();
        return (FMovieSceneAnimTypeID)FVar9.ID;
      }
      iVar7 = (this->Data).ArrayNum;
      piVar1 = &(this->Data).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Data).AllocatorInstance,piVar1);
      }
      (this->Data).ArrayNum = iVar7 + 1;
      ::FString::FString((FString *)((this->Data).AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                         (FString *)in_R8);
      local_38[0] = (FScriptContainerElement *)
                    FMovieSceneAnimTypeID::GenerateHash(this,(this->TypeIDs).ArrayNum);
      pFVar3 = (this->TypeIDs).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(this->TypeIDs).ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar9.ID = (*pcVar4)();
        return (FMovieSceneAnimTypeID)FVar9.ID;
      }
      iVar7 = (this->TypeIDs).ArrayNum;
      piVar1 = &(this->TypeIDs).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->TypeIDs).AllocatorInstance,piVar1);
      }
      (this->TypeIDs).ArrayNum = iVar7 + 1;
      *(FScriptContainerElement **)((this->TypeIDs).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           local_38[0];
      (param_1->Data).AllocatorInstance.Data = local_38[0];
LAB_1461b03da:
      if (this != (TMovieSceneAnimTypeIDContainer<FString> *)0x0) {
        LOCK();
        aVar2 = (this->Mutex).State;
        (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(&this->Mutex);
        }
      }
      return (FMovieSceneAnimTypeID)(ulong64)param_1;
    }
    iVar6 = *(int *)(pFVar11 + 8);
    if (iVar6 == *(int *)(in_R8 + 8)) {
      if (1 < iVar6) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar11,*(wchar_t **)&in_R8->field_0x0);
        bVar5 = iVar6 == 0;
        goto LAB_1461b027d;
      }
LAB_1461b0410:
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar3 >> 4);
      if (uVar10 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar10 < (this->TypeIDs).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          FVar9.ID = (*pcVar4)();
          return (FMovieSceneAnimTypeID)FVar9.ID;
        }
        (param_1->Data).AllocatorInstance.Data =
             *(FScriptContainerElement **)
              ((this->TypeIDs).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
        goto LAB_1461b03da;
      }
      goto LAB_1461b0291;
    }
    bVar5 = iVar6 + *(int *)(in_R8 + 8) == 1;
LAB_1461b027d:
    if (bVar5) goto LAB_1461b0410;
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

