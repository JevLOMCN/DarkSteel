// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// GetAnimTypeID @ 148fb1450

FMovieSceneAnimTypeID __thiscall
TMovieSceneAnimTypeIDContainer<FNiagaraVariableBase>::GetAnimTypeID
          (TMovieSceneAnimTypeIDContainer<FNiagaraVariableBase> *this,FNiagaraVariableBase *param_1)

{
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FMovieSceneAnimTypeID FVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *in_R8;
  FName local_28 [2];
  
  if ((this == (TMovieSceneAnimTypeIDContainer<FNiagaraVariableBase> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    FVar9.ID = (*pcVar5)();
    return (FMovieSceneAnimTypeID)FVar9.ID;
  }
  LOCK();
  bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar3 = (this->Data).AllocatorInstance.Data;
  if (pFVar3 != pFVar3 + (longlong)(this->Data).ArrayNum * 0xc) {
    pFVar10 = pFVar3;
    do {
      if ((*(longlong *)pFVar10 == *(longlong *)in_R8) &&
         (*(int *)(pFVar10 + 8) == *(int *)(in_R8 + 8))) {
        lVar11 = ((longlong)pFVar10 - (longlong)pFVar3) / 6 +
                 ((longlong)pFVar10 - (longlong)pFVar3 >> 0x3f);
        uVar12 = (int)(lVar11 >> 1) - (int)(lVar11 >> 0x3f);
        if (uVar12 != 0xffffffff) {
          uVar8 = 0;
          if ((int)uVar12 < (this->TypeIDs).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            FVar9.ID = (*pcVar5)();
            return (FMovieSceneAnimTypeID)FVar9.ID;
          }
          param_1->Name =
               *(FName *)((this->TypeIDs).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
          goto LAB_148fb1637;
        }
        break;
      }
      pFVar10 = pFVar10 + 0xc;
    } while (pFVar10 != pFVar3 + (longlong)(this->Data).ArrayNum * 0xc);
  }
  if (((pFVar3 <= in_R8) && (in_R8 < pFVar3 + (longlong)(this->Data).ArrayMax * 0xc)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    FVar9.ID = (*pcVar5)();
    return (FMovieSceneAnimTypeID)FVar9.ID;
  }
  iVar7 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->Data).AllocatorInstance,piVar1);
  }
  (this->Data).ArrayNum = iVar7 + 1;
  pFVar3 = (this->Data).AllocatorInstance.Data;
  *(longlong *)(pFVar3 + (longlong)iVar7 * 0xc) = *(longlong *)in_R8;
  *(undefined4 *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = *(undefined4 *)(in_R8 + 8);
  local_28[0] = (FName)FMovieSceneAnimTypeID::GenerateHash(this,(this->TypeIDs).ArrayNum);
  pFVar4 = (FName *)(this->TypeIDs).AllocatorInstance.Data;
  if (((pFVar4 <= local_28) && (local_28 < pFVar4 + (this->TypeIDs).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    FVar9.ID = (*pcVar5)();
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
  *(FName *)((this->TypeIDs).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
  param_1->Name = local_28[0];
LAB_148fb1637:
  if (this != (TMovieSceneAnimTypeIDContainer<FNiagaraVariableBase> *)0x0) {
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

