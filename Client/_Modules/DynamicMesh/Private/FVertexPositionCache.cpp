// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// SetPositions @ 14c762e60

void __thiscall
UE::Geometry::FVertexPositionCache::SetPositions(FVertexPositionCache *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  short sVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar15 = (longlong)(this->Vertices).ArrayNum;
  uVar13 = 0;
  if (0 < lVar15) {
    lVar16 = 0;
    lVar14 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (this->Positions).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Positions).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar13 < (this->Vertices).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = *(uint *)((this->Vertices).AllocatorInstance.Data + lVar16 * 4);
      sVar10 = _dclass(*(undefined8 *)(pFVar5 + lVar14));
      if (((sVar10 < 1) && (sVar10 = _dclass(*(undefined8 *)(pFVar5 + lVar14 + 8)), sVar10 < 1)) &&
         (sVar10 = _dclass(*(undefined8 *)(pFVar5 + lVar14 + 0x10)), sVar10 < 1)) {
        uVar8 = *(undefined8 *)(pFVar5 + lVar14 + 8);
        uVar12 = (ulonglong)(uVar11 & 0x1ff);
        uVar4 = *(undefined8 *)(pFVar5 + lVar14 + 0x10);
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar6 + uVar12 * 0x18);
        *puVar2 = *(undefined8 *)(pFVar5 + lVar14);
        puVar2[1] = uVar8;
        *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18) = uVar4;
        if ((param_1->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(param_1->ChangeStampShape).Mutex;
          LOCK();
          bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar9) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar9) {
            FMutex::LockSlow(this_00);
          }
          puVar1 = &(param_1->ChangeStampShape).Value;
          *puVar1 = *puVar1 + 1;
          LOCK();
          aVar3 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar3 & 2) != 0) {
            FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 0x18;
    } while (lVar16 < lVar15);
  }
  return;
}

