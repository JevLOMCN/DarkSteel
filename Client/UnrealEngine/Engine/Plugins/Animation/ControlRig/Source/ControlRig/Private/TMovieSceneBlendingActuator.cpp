// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 12

// Actuate @ 14a3c8880

void __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenFloat>::Actuate
          (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *this,
          FMovieSceneInterrogationData *param_1,FControlRigTrackTokenFloat *param_2,
          TBlendableTokenStack<FControlRigTrackTokenFloat> *param_3,FMovieSceneContext *param_4)

{
  return;
}

// Actuate @ 14a3c8890

void __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenTransform>::Actuate
          (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *this,
          FMovieSceneInterrogationData *param_1,FControlRigTrackTokenTransform *param_2,
          TBlendableTokenStack<FControlRigTrackTokenTransform> *param_3,FMovieSceneContext *param_4)

{
  return;
}

// Actuate @ 14a3c88a0

void __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D>::Actuate
          (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *this,
          FMovieSceneInterrogationData *param_1,FControlRigTrackTokenVector2D *param_2,
          TBlendableTokenStack<FControlRigTrackTokenVector2D> *param_3,FMovieSceneContext *param_4)

{
  return;
}

// Actuate @ 14a3c88b0

void __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenVector>::Actuate
          (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *this,
          FMovieSceneInterrogationData *param_1,FControlRigTrackTokenVector *param_2,
          TBlendableTokenStack<FControlRigTrackTokenVector> *param_3,FMovieSceneContext *param_4)

{
  return;
}

// GetDataTypeID @ 14a413820

FMovieSceneAnimTypeID __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenFloat>::GetDataTypeID
          (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *this)

{
  ulong64 in_RDX;
  
  GetBlendingDataType<FControlRigTrackTokenFloat>();
  return (FMovieSceneAnimTypeID)in_RDX;
}

// GetDataTypeID @ 14a413840

FMovieSceneAnimTypeID __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenTransform>::GetDataTypeID
          (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *this)

{
  ulong64 in_RDX;
  
  GetBlendingDataType<FControlRigTrackTokenTransform>();
  return (FMovieSceneAnimTypeID)in_RDX;
}

// GetDataTypeID @ 14a413860

FMovieSceneAnimTypeID __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D>::GetDataTypeID
          (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *this)

{
  ulong64 in_RDX;
  
  GetBlendingDataType<FControlRigTrackTokenVector2D>();
  return (FMovieSceneAnimTypeID)in_RDX;
}

// GetDataTypeID @ 14a413880

FMovieSceneAnimTypeID __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenVector>::GetDataTypeID
          (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *this)

{
  ulong64 in_RDX;
  
  GetBlendingDataType<FControlRigTrackTokenVector>();
  return (FMovieSceneAnimTypeID)in_RDX;
}

// RemoveInitialValueForObject @ 14a442550

void __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenFloat>::RemoveInitialValueForObject
          (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *this,FObjectKey param_1)

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

// RemoveInitialValueForObject @ 14a442690

void __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenTransform>::RemoveInitialValueForObject
          (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *this,FObjectKey param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
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
        pFVar2 = pFVar1 + lVar7 * 0x50;
        do {
          if ((*(int *)pFVar2 == param_1.ObjectIndex) &&
             (*(int *)(pFVar2 + 4) == param_1.ObjectSerialNumber)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar9 != bVar3) break;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
          pFVar2 = pFVar2 + 0x50;
        } while (lVar7 < lVar4);
      }
      if (bVar9 != 0) {
        if (iVar8 != iVar5) {
          memmove(pFVar1 + (longlong)iVar8 * 0x50,pFVar1 + (longlong)iVar5 * 0x50,
                  (longlong)(iVar6 - iVar5) * 0x50);
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

// RemoveInitialValueForObject @ 14a4427d0

void __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D>::RemoveInitialValueForObject
          (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *this,FObjectKey param_1)

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
        pFVar3 = pFVar1 + lVar7 * 0x18;
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
          pFVar3 = pFVar3 + 0x18;
        } while (lVar7 < lVar4);
      }
      if (bVar9 != 0) {
        if (iVar8 != iVar5) {
          memmove(pFVar1 + (longlong)iVar8 * 0x18,pFVar1 + (longlong)iVar5 * 0x18,
                  (longlong)(iVar6 - iVar5) * 0x18);
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

// RemoveInitialValueForObject @ 14a442910

void __thiscall
TMovieSceneBlendingActuator<FControlRigTrackTokenVector>::RemoveInitialValueForObject
          (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *this,FObjectKey param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
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
        pFVar2 = pFVar1 + lVar7 * 0x20;
        do {
          if ((*(int *)pFVar2 == param_1.ObjectIndex) &&
             (*(int *)(pFVar2 + 4) == param_1.ObjectSerialNumber)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar9 != bVar3) break;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
          pFVar2 = pFVar2 + 0x20;
        } while (lVar7 < lVar4);
      }
      if (bVar9 != 0) {
        if (iVar8 != iVar5) {
          memmove(pFVar1 + (longlong)iVar8 * 0x20,pFVar1 + (longlong)iVar5 * 0x20,
                  (longlong)(iVar6 - iVar5) << 5);
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

