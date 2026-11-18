// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// AddBaseChannel @ 1468a5430

ushort __thiscall
UE::MovieScene::FHierarchicalEasingChannelBuffer::AddBaseChannel
          (FHierarchicalEasingChannelBuffer *this,FHierarchicalEasingChannelData *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  int iVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  
  if (this->BlendTargetStartIndex != -1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendTargetStartIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                       ,0x45,L"Cannot add base channels once blend targets have been added");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  iVar9 = (this->Channels).ArrayNum;
  piVar1 = &(this->Channels).ArrayMax;
  iVar6 = (this->Channels).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Channels).ArrayNum = iVar9 + 1;
  dVar5 = param_1->UnaccumulatedResult;
  pFVar3 = (this->Channels).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar9 * 0x18;
  *(double *)pFVar2 = param_1->FinalResult;
  *(double *)(pFVar2 + 8) = dVar5;
  *(undefined8 *)(pFVar3 + (longlong)iVar9 * 0x18 + 0x10) = *(undefined8 *)&param_1->ParentChannel;
  return (ushort)iVar6;
}

// AddBlendTargetChannel @ 1468a54d0

ushort __thiscall
UE::MovieScene::FHierarchicalEasingChannelBuffer::AddBlendTargetChannel
          (FHierarchicalEasingChannelBuffer *this,FHierarchicalEasingChannelData *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  
  if (this->BlendTargetStartIndex == -1) {
    this->BlendTargetStartIndex = (this->Channels).ArrayNum;
  }
  iVar6 = (this->Channels).ArrayNum;
  piVar1 = &(this->Channels).ArrayMax;
  iVar5 = (this->Channels).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
    (this->Channels).ArrayNum = iVar6;
  }
  (this->Channels).ArrayNum = iVar6 + 1;
  dVar4 = param_1->UnaccumulatedResult;
  pFVar3 = (this->Channels).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x18;
  *(double *)pFVar2 = param_1->FinalResult;
  *(double *)(pFVar2 + 8) = dVar4;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = *(undefined8 *)&param_1->ParentChannel;
  return (ushort)iVar5;
}

// IsEmpty @ 1468bc6c0

bool __thiscall
UE::MovieScene::FHierarchicalEasingChannelBuffer::IsEmpty(FHierarchicalEasingChannelBuffer *this)

{
  return (this->Channels).ArrayNum == 0;
}

// Reset @ 1468cac30

void __thiscall
UE::MovieScene::FHierarchicalEasingChannelBuffer::Reset(FHierarchicalEasingChannelBuffer *this)

{
  int *piVar1;
  
  piVar1 = &(this->Channels).ArrayMax;
  (this->Channels).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  this->BlendTargetStartIndex = -1;
  return;
}

// ResetBlendTargets @ 1468cac80

void __thiscall
UE::MovieScene::FHierarchicalEasingChannelBuffer::ResetBlendTargets
          (FHierarchicalEasingChannelBuffer *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = this->BlendTargetStartIndex;
  if (uVar1 != 0xffffffff) {
    uVar4 = (this->Channels).ArrayNum - uVar1;
    if ((int)(uVar4 | uVar1) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (uVar4 != 0) {
      TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>::
      RemoveAtSwapImpl(&this->Channels,uVar1,uVar4);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Channels).ArrayNum,
                 &(this->Channels).ArrayMax);
    }
    this->BlendTargetStartIndex = -1;
  }
  return;
}

