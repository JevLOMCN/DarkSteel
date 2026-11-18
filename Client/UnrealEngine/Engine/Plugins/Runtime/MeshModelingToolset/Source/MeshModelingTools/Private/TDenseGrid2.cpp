// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// AssignAll @ 14cc42a70

void __thiscall UE::Geometry::TDenseGrid2<float>::AssignAll(TDenseGrid2<float> *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  lVar4 = this->DimensionY * this->DimensionX;
  if (0 < lVar4) {
    do {
      if (((this->Buffer).ArrayNum <= lVar3) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(float *)((this->Buffer).AllocatorInstance.Data + lVar3 * 4) = param_1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar4);
  }
  return;
}

// Resize @ 14cc73630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDenseGrid2<float>::Resize
          (TDenseGrid2<float> *this,int param_1,int param_2,EAllowShrinking param_3)

{
  long64 *plVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = &(this->Buffer).ArrayNum;
  this->DimensionY = (longlong)param_2;
  uVar4 = (longlong)param_2 * (longlong)param_1;
  this->DimensionX = (longlong)param_1;
  lVar5 = *plVar1;
  if (uVar4 - lVar5 == 0 || (longlong)uVar4 < lVar5) {
    if ((longlong)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar4);
    }
    if ((longlong)uVar4 < lVar5) {
      lVar5 = lVar5 - uVar4;
      if (((((uint)(uVar4 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar5 >> 0x3f) ^ 1)) == 0) &&
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
      if (lVar5 != 0) {
        _Dst = (this->Buffer).AllocatorInstance.Data + uVar4 * 4;
        lVar6 = (*plVar1 - lVar5) - uVar4;
        if (lVar6 != 0) {
          memmove(_Dst,_Dst + lVar5 * 4,lVar6 * 4);
        }
        lVar6 = *plVar1;
        *plVar1 = lVar6 - lVar5;
        if (param_3 == Default) {
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)this,lVar6 - lVar5,&(this->Buffer).ArrayMax);
        }
      }
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (4,4,uVar4 - lVar5,(ForAnyElementType *)this,plVar1,&(this->Buffer).ArrayMax);
  }
  return;
}

