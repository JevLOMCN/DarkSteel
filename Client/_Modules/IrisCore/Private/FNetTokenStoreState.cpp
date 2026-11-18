// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// ReserveTokenCount @ 144290230

bool __thiscall
UE::Net::FNetTokenStoreState::ReserveTokenCount(FNetTokenStoreState *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if ((7 < param_1) || (0xfffff < param_2)) {
    return false;
  }
  pTVar7 = this->TokenInfoArray + param_1;
  uVar6 = pTVar7->ArrayNum;
  if (param_2 < uVar6) {
    param_2 = uVar6;
  }
  piVar1 = &pTVar7->ArrayNum;
  if ((int)param_2 <= (int)uVar6) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    if ((int)param_2 < (int)uVar6) {
      uVar6 = uVar6 - param_2;
      if (((int)(uVar6 | param_2) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (uVar6 != 0) {
        _Dst = (pTVar7->AllocatorInstance).Data + (longlong)(int)param_2 * 4;
        iVar5 = (*piVar1 - uVar6) - param_2;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        *piVar1 = *piVar1 - uVar6;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar7->AllocatorInstance,*piVar1,&pTVar7->ArrayMax);
      }
    }
    return true;
  }
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_2 - uVar6,&pTVar7->AllocatorInstance,piVar1,&pTVar7->ArrayMax);
  memset((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 4,0,
         (longlong)(int)(param_2 - uVar6) << 2);
  return true;
}

// Reset @ 144290670

void __thiscall UE::Net::FNetTokenStoreState::Reset(FNetTokenStoreState *this)

{
  FNetTokenStoreState *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  int *piVar6;
  uint uVar7;
  
  if (this != this + 1) {
    piVar6 = &this->TokenInfoArray[0].ArrayNum;
    do {
      iVar2 = *piVar6;
      if (iVar2 < 1) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,1 - iVar2,(ForAnyElementType *)(piVar6 + -2),piVar6,piVar6 + 1);
        DefaultConstructItems<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,int>
                  ((((TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_>
                      *)(piVar6 + -2))->AllocatorInstance).Data + (longlong)iVar5 * 4,1 - iVar2);
      }
      else if (1 < iVar2) {
        uVar7 = iVar2 - 1;
        if ((int)uVar7 < 0) {
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
        else if (uVar7 == 0) goto LAB_144290778;
        _Dst = (((TArray<UE::Net::FNetTokenDataStore::FNetTokenStoreKey,TSizedDefaultAllocator<32>_>
                  *)(piVar6 + -2))->AllocatorInstance).Data + 4;
        if (~uVar7 + *piVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar7 * 4,(longlong)(int)(~uVar7 + *piVar6) << 2);
        }
        *piVar6 = *piVar6 - uVar7;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)(piVar6 + -2),*piVar6,piVar6 + 1);
      }
LAB_144290778:
      pFVar1 = (FNetTokenStoreState *)(piVar6 + 2);
      piVar6 = piVar6 + 4;
    } while (pFVar1 != this + 1);
  }
  return;
}

