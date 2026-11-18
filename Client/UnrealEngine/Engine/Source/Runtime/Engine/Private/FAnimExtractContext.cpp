// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimExtractContext @ 1473d4ee0

FAnimExtractContext * __thiscall
FAnimExtractContext::FAnimExtractContext(FAnimExtractContext *this,FAnimExtractContext *param_1)

{
  TArray<FPoseCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  undefined3 uVar8;
  
  pTVar1 = &this->PoseCurves;
  this->CurrentTime = param_1->CurrentTime;
  this->bExtractRootMotion = param_1->bExtractRootMotion;
  fVar7 = (param_1->DeltaTimeRecord).Previous;
  (this->DeltaTimeRecord).Delta = (param_1->DeltaTimeRecord).Delta;
  (this->DeltaTimeRecord).Previous = fVar7;
  uVar8 = *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9;
  (this->DeltaTimeRecord).bPreviousIsValid = (param_1->DeltaTimeRecord).bPreviousIsValid;
  *(undefined3 *)&(this->DeltaTimeRecord).field_0x9 = uVar8;
  this->bLooping = param_1->bLooping;
  piVar2 = &(this->PoseCurves).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->PoseCurves).ArrayNum;
  pFVar6 = (param_1->PoseCurves).AllocatorInstance.Data;
  (this->PoseCurves).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
  }
  pTVar3 = &this->BonesRequired;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->BonesRequired).ArrayMax;
  iVar5 = (param_1->BonesRequired).ArrayNum;
  pFVar6 = (param_1->BonesRequired).AllocatorInstance.Data;
  (this->BonesRequired).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  (this->InterpolationOverride).bIsSet = false;
  bVar4 = (param_1->InterpolationOverride).bIsSet;
  (this->InterpolationOverride).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->InterpolationOverride).TypedValue = (param_1->InterpolationOverride).TypedValue;
  }
  return this;
}

// IsBoneRequired @ 1475e1b40

bool __thiscall FAnimExtractContext::IsBoneRequired(FAnimExtractContext *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->BonesRequired).ArrayNum <= param_1) {
    return true;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->BonesRequired).AllocatorInstance.Data[param_1];
}

