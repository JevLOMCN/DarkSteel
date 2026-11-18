// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Advance @ 147fb3120

void __thiscall FMorphTargetDeltaIterator::Advance(FMorphTargetDeltaIterator *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  FMorphTargetDelta *pFVar6;
  FMorphTargetCompressedLODModel *pFVar7;
  FScriptContainerElement *pFVar8;
  FDeltaBatchHeader *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<unsigned_int_const_,int> local_48;
  TArrayView<UE::MorphTargetVertexCodec::FDeltaBatchHeader_const_,int> local_38 [3];
  
  iVar3 = (this->RawDeltas).ArrayNum;
  if (iVar3 == 0) {
    pFVar7 = this->CompressedDelta;
    if (pFVar7 != (FMorphTargetCompressedLODModel *)0x0) {
      pFVar8 = (pFVar7->PackedDeltaData).AllocatorInstance.Data;
      iVar3 = (pFVar7->PackedDeltaData).ArrayNum;
      fVar1 = pFVar7->TangentPrecision;
      fVar2 = pFVar7->PositionPrecision;
      if ((iVar3 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (FDeltaBatchHeader *)
               (this->CompressedDelta->PackedDeltaHeaders).AllocatorInstance.Data;
      iVar4 = (this->CompressedDelta->PackedDeltaHeaders).ArrayNum;
      if ((iVar4 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = iVar3;
      local_38[0]._12_4_ = uStack_4c;
      local_38[0].ArrayNum = iVar4;
      local_48.DataPtr = (uint *)pFVar8;
      local_38[0].DataPtr = pFVar9;
      bVar12 = UE::MorphTargetVertexCodec::IterativeDecode
                         (&this->Token,local_38,&local_48,fVar2,fVar1,&this->CurrentDelta);
      if (bVar12) {
        return;
      }
    }
    this->Token = 0xffffffffffffffff;
    uStack_5c = uStack_4c;
  }
  else {
    uVar5 = this->Token;
    if (uVar5 < (ulonglong)(longlong)iVar3) {
      this->Token = uVar5 + 1;
      uVar14 = (uint)uVar5;
      uVar13 = 0;
      if ((int)uVar14 < iVar3) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (this->RawDeltas).DataPtr;
      uVar11 = *(undefined8 *)((longlong)&pFVar6[(int)uVar14].PositionDelta.field0_0x0 + 8);
      *(undefined8 *)&(this->CurrentDelta).PositionDelta.field0_0x0 =
           *(undefined8 *)&pFVar6[(int)uVar14].PositionDelta.field0_0x0;
      *(undefined8 *)((longlong)&(this->CurrentDelta).PositionDelta.field0_0x0 + 8) = uVar11;
      *(undefined8 *)((longlong)&(this->CurrentDelta).TangentZDelta.field0_0x0 + 4) =
           *(undefined8 *)((longlong)&pFVar6[(int)uVar14].TangentZDelta.field0_0x0 + 4);
      (this->CurrentDelta).SourceIdx = pFVar6[(int)uVar14].SourceIdx;
      return;
    }
    this->Token = 0xffffffffffffffff;
  }
  this->CompressedDelta = (FMorphTargetCompressedLODModel *)0x0;
  *(undefined4 *)&(this->RawDeltas).DataPtr = 0;
  *(undefined4 *)((longlong)&(this->RawDeltas).DataPtr + 4) = 0;
  (this->RawDeltas).ArrayNum = 0;
  *(undefined4 *)&(this->RawDeltas).field_0xc = uStack_5c;
  return;
}

