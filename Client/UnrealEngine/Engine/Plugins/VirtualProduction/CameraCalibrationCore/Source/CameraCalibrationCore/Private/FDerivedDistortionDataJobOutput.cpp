// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// Reset @ 14d6e9f60

void __thiscall FDerivedDistortionDataJobOutput::Reset(FDerivedDistortionDataJobOutput *this)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  int iVar6;
  
  pTVar1 = &this->EdgePointsDistortedUVs;
  this->Result = Error;
  iVar6 = (this->EdgePointsDistortedUVs).ArrayNum;
  piVar2 = &(this->EdgePointsDistortedUVs).ArrayNum;
  if (iVar6 < 8) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,8 - iVar6,&pTVar1->AllocatorInstance,piVar2,
                       &(this->EdgePointsDistortedUVs).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,(longlong)(8 - iVar6) << 4);
    return;
  }
  if (8 < iVar6) {
    iVar6 = iVar6 + -8;
    if (iVar6 < 0) {
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
    else if (iVar6 == 0) {
      return;
    }
    _Dst = (pTVar1->AllocatorInstance).Data + 0x80;
    iVar5 = (*piVar2 - iVar6) + -8;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar6 * 0x10,(longlong)iVar5 << 4);
    }
    *piVar2 = *piVar2 - iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar1->AllocatorInstance,*piVar2,&(this->EdgePointsDistortedUVs).ArrayMax);
  }
  return;
}

