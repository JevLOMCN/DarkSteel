// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// Read<int> @ 1490a5720

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<int>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,int *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  
  if (this->Size != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_3) {
    iVar4 = (this->PrevData).ArrayNum;
  }
  else {
    iVar4 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar4 / this->Size <= param_1)) {
    *param_2 = 0;
    bVar2 = false;
  }
  else {
    pFVar5 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar5 = this;
    }
    bVar2 = true;
    *param_2 = *(int *)((pFVar5->Data).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return bVar2;
}

// Read<double> @ 1490a57c0

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<double>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,double *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  
  if (this->Size != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_3) {
    iVar4 = (this->PrevData).ArrayNum;
  }
  else {
    iVar4 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar4 / this->Size <= param_1)) {
    *param_2 = 0.0;
    bVar2 = false;
  }
  else {
    pFVar5 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar5 = this;
    }
    bVar2 = true;
    *param_2 = *(double *)((pFVar5->Data).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return bVar2;
}

// Read<UE::Math::TQuat<double>_> @ 1490a5870

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<UE::Math::TQuat<double>_>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,TQuat<double> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  
  if (this->Size != 0x20) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (param_3) {
    iVar7 = (this->PrevData).ArrayNum;
  }
  else {
    iVar7 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar7 / this->Size <= param_1)) {
    bVar5 = false;
    param_2->X = 0.0;
    param_2->Y = 0.0;
    param_2->Z = 0.0;
    param_2->W = 0.0;
  }
  else {
    pFVar8 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar8 = this;
    }
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)param_1 * 0x20;
    dVar4 = *(double *)(pFVar1 + 8);
    param_2->X = *(double *)pFVar1;
    param_2->Y = dVar4;
    pFVar2 = pFVar2 + (longlong)param_1 * 0x20 + 0x10;
    dVar4 = *(double *)(pFVar2 + 8);
    bVar5 = true;
    param_2->Z = *(double *)pFVar2;
    param_2->W = dVar4;
  }
  return bVar5;
}

// Read<UE::Math::TVector2<double>_> @ 1490a5930

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<UE::Math::TVector2<double>_>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,TVector2<double> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FNiagaraDataChannelVariableBuffer *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (this->Size != 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (param_3) {
    iVar5 = (this->PrevData).ArrayNum;
  }
  else {
    iVar5 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar5 / this->Size <= param_1)) {
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    bVar3 = false;
  }
  else {
    pFVar6 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar6 = this;
    }
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    uVar7 = *(undefined4 *)pFVar1;
    uVar8 = *(undefined4 *)(pFVar1 + 4);
    uVar9 = *(undefined4 *)(pFVar1 + 8);
    uVar10 = *(undefined4 *)(pFVar1 + 0xc);
    bVar3 = true;
  }
  *(undefined4 *)&param_2->field0_0x0 = uVar7;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 4) = uVar8;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 8) = uVar9;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc) = uVar10;
  return bVar3;
}

// Read<UE::Math::TVector4<double>_> @ 1490a59e0

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<UE::Math::TVector4<double>_>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,TVector4<double> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  
  if (this->Size != 0x20) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (param_3) {
    iVar7 = (this->PrevData).ArrayNum;
  }
  else {
    iVar7 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar7 / this->Size <= param_1)) {
    (param_2->field0_0x0)._s_0.X = 0.0;
    (param_2->field0_0x0)._s_0.Y = 0.0;
    (param_2->field0_0x0)._s_0.Z = 0.0;
    (param_2->field0_0x0)._s_0.W = 1.0;
    bVar5 = false;
  }
  else {
    pFVar8 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar8 = this;
    }
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)param_1 * 0x20;
    dVar4 = *(double *)(pFVar1 + 8);
    (param_2->field0_0x0)._s_0.X = *(double *)pFVar1;
    (param_2->field0_0x0)._s_0.Y = dVar4;
    pFVar2 = pFVar2 + (longlong)param_1 * 0x20 + 0x10;
    dVar4 = *(double *)(pFVar2 + 8);
    bVar5 = true;
    (param_2->field0_0x0)._s_0.Z = *(double *)pFVar2;
    (param_2->field0_0x0)._s_0.W = dVar4;
  }
  return bVar5;
}

// Read<UE::Math::TVector<double>_> @ 1490a5ab0

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<UE::Math::TVector<double>_>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,TVector<double> *param_2,bool param_3
          )

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  
  if (this->Size != 0x18) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (param_3) {
    iVar7 = (this->PrevData).ArrayNum;
  }
  else {
    iVar7 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar7 / this->Size <= param_1)) {
    bVar5 = false;
    (param_2->field0_0x0)._s_0.X = 0.0;
    (param_2->field0_0x0)._s_0.Y = 0.0;
    (param_2->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    pFVar8 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar8 = this;
    }
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)param_1 * 0x18;
    dVar4 = *(double *)(pFVar1 + 8);
    (param_2->field0_0x0)._s_0.X = *(double *)pFVar1;
    (param_2->field0_0x0)._s_0.Y = dVar4;
    bVar5 = true;
    (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar2 + (longlong)param_1 * 0x18 + 0x10);
  }
  return bVar5;
}

// Read<FLinearColor> @ 1490a5b80

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<FLinearColor>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,FLinearColor *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FNiagaraDataChannelVariableBuffer *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (this->Size != 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (param_3) {
    iVar5 = (this->PrevData).ArrayNum;
  }
  else {
    iVar5 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar5 / this->Size <= param_1)) {
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    bVar3 = false;
  }
  else {
    pFVar6 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar6 = this;
    }
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    fVar7 = *(float *)pFVar1;
    fVar8 = *(float *)(pFVar1 + 4);
    fVar9 = *(float *)(pFVar1 + 8);
    fVar10 = *(float *)(pFVar1 + 0xc);
    bVar3 = true;
  }
  (param_2->field0_0x0)._s_0.R = fVar7;
  (param_2->field0_0x0)._s_0.G = fVar8;
  (param_2->field0_0x0)._s_0.B = fVar9;
  (param_2->field0_0x0)._s_0.A = fVar10;
  return bVar3;
}

// Read<FNiagaraBool> @ 1490a5c30

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<FNiagaraBool>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,FNiagaraBool *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  
  if (this->Size != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_3) {
    iVar4 = (this->PrevData).ArrayNum;
  }
  else {
    iVar4 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar4 / this->Size <= param_1)) {
    param_2->Value = 0;
    bVar2 = false;
  }
  else {
    pFVar5 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar5 = this;
    }
    bVar2 = true;
    param_2->Value = *(int *)((pFVar5->Data).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return bVar2;
}

// Read<FNiagaraID> @ 1490a5cd0

bool __thiscall
FNiagaraDataChannelVariableBuffer::Read<FNiagaraID>
          (FNiagaraDataChannelVariableBuffer *this,int param_1,FNiagaraID *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  
  if (this->Size != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_3) {
    iVar4 = (this->PrevData).ArrayNum;
  }
  else {
    iVar4 = (this->Data).ArrayNum;
  }
  if ((param_1 < 0) || (iVar4 / this->Size <= param_1)) {
    param_2->Index = -1;
    param_2->AcquireTag = -1;
    bVar2 = false;
  }
  else {
    pFVar5 = (FNiagaraDataChannelVariableBuffer *)&this->PrevData;
    if (!param_3) {
      pFVar5 = this;
    }
    bVar2 = true;
    *param_2 = *(FNiagaraID *)((pFVar5->Data).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return bVar2;
}

