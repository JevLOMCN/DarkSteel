// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// Actuate @ 1462a2690

void __thiscall
TMovieSceneBlendingActuator<int>::Actuate
          (TMovieSceneBlendingActuator<int> *this,FMovieSceneInterrogationData *param_1,int param_2,
          TBlendableTokenStack<int> *param_3,FMovieSceneContext *param_4)

{
  return;
}

// GetDataTypeID @ 1462af060

FMovieSceneAnimTypeID __thiscall
TMovieSceneBlendingActuator<int>::GetDataTypeID(TMovieSceneBlendingActuator<int> *this)

{
  ulong64 in_RDX;
  
  GetBlendingDataType<int>();
  return (FMovieSceneAnimTypeID)in_RDX;
}

// RemoveInitialValueForObject @ 1462b8ba0

void __thiscall
TMovieSceneBlendingActuator<int>::RemoveInitialValueForObject
          (TMovieSceneBlendingActuator<int> *this,FObjectKey param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  
  iVar8 = (this->InitialValues).ArrayNum;
  lVar4 = (longlong)iVar8;
  if (iVar8 != 0) {
    pFVar1 = (this->InitialValues).AllocatorInstance.Data;
    iVar8 = 0;
    if ((*(int *)pFVar1 == param_1.ObjectIndex) &&
       (*(int *)(pFVar1 + 4) == param_1.ObjectSerialNumber)) {
      bVar9 = 0;
    }
    else {
      bVar9 = 1;
    }
    lVar7 = 0;
    iVar5 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar6 = iVar5 + 1;
      if (lVar7 < lVar4) {
        pFVar3 = pFVar1 + lVar7 * 0xc;
        do {
          if ((*(int *)pFVar3 == param_1.ObjectIndex) &&
             (*(int *)(pFVar3 + 4) == param_1.ObjectSerialNumber)) {
            bVar2 = 0;
          }
          else {
            bVar2 = 1;
          }
          if (bVar9 != bVar2) break;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
          pFVar3 = pFVar3 + 0xc;
        } while (lVar7 < lVar4);
      }
      if (bVar9 != 0) {
        if (iVar8 != iVar5) {
          memmove(pFVar1 + (longlong)iVar8 * 0xc,pFVar1 + (longlong)iVar5 * 0xc,
                  (longlong)(iVar6 - iVar5) * 0xc);
        }
        iVar8 = iVar8 + (iVar6 - iVar5);
      }
      bVar9 = bVar9 ^ 1;
      iVar5 = iVar6;
    } while (lVar7 < lVar4);
    (this->InitialValues).ArrayNum = iVar8;
  }
  return;
}

