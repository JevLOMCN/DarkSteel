// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// operator[] @ 14596fdf0

FRHIUnorderedAccessView ** __thiscall
RHIValidation::FTracker::FUAVTracker::operator[](FUAVTracker *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FRHIUnorderedAccessView **ppFVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = &(this->UAVs).ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 <= param_1) {
    uVar7 = param_1 + 1;
    if (iVar5 < (int)uVar7) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar7 - iVar5,(ForAnyElementType *)this,piVar1,&(this->UAVs).ArrayMax);
      memset((this->UAVs).AllocatorInstance.Data + (longlong)iVar4 * 8,0,
             (longlong)(int)(uVar7 - iVar5) << 3);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar5) {
        uVar8 = iVar5 - uVar7;
        if (((int)(uVar8 | uVar7) < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          ppFVar6 = (FRHIUnorderedAccessView **)(*pcVar2)();
          return ppFVar6;
        }
        if (uVar8 != 0) {
          _Dst = (this->UAVs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
          iVar5 = (*piVar1 - uVar8) - uVar7;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar5 << 3);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)this,*piVar1,&(this->UAVs).ArrayMax);
        }
      }
    }
  }
  uVar7 = 0;
  if (param_1 < *piVar1) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    ppFVar6 = (FRHIUnorderedAccessView **)(*pcVar2)();
    return ppFVar6;
  }
  return (FRHIUnorderedAccessView **)((this->UAVs).AllocatorInstance.Data + (longlong)param_1 * 8);
}

