// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// TIndirectObject<UE::Mutable::Private::FProjector> @ 14aa92320

TIndirectObject<UE::Mutable::Private::FProjector> * __thiscall
UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>::
TIndirectObject<UE::Mutable::Private::FProjector>
          (TIndirectObject<UE::Mutable::Private::FProjector> *this,
          TIndirectObject<UE::Mutable::Private::FProjector> *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  EProjectorType EVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  FProjector *pFVar12;
  FProjector *pFVar13;
  TIndirectObject<UE::Mutable::Private::FProjector> *pTVar14;
  
  pFVar12 = ::operator_new(0x38);
  pFVar13 = (FProjector *)0x0;
  if (pFVar12 != (FProjector *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)((longlong)&(pFVar12->position).field0_0x0 + 4) = 0;
    *(undefined8 *)&(pFVar12->direction).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar12->direction).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(pFVar12->up).field0_0x0 + 4) = 0;
    *(undefined8 *)&(pFVar12->scale).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar12->scale).field0_0x0 + 8) = 0;
    pFVar13 = pFVar12;
  }
  (this->StoragePtr).Ptr = pFVar13;
  if (((param_1->StoragePtr).Ptr == (FProjector *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StoragePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                          ,0x4f,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TIndirectObject<UE::Mutable::Private::FProjector> *)(*pcVar2)();
    return pTVar14;
  }
  pFVar13 = (param_1->StoragePtr).Ptr;
  uVar7 = *(undefined8 *)&(pFVar13->direction).field0_0x0;
  uVar8 = *(undefined8 *)((longlong)&(pFVar13->direction).field0_0x0 + 8);
  EVar3 = pFVar13->type;
  fVar4 = (pFVar13->position).field0_0x0._s_0.X;
  fVar5 = (pFVar13->position).field0_0x0._s_0.Y;
  fVar6 = (pFVar13->position).field0_0x0._s_0.Z;
  uVar9 = *(undefined8 *)((longlong)&(pFVar13->up).field0_0x0 + 4);
  uVar10 = *(undefined8 *)&(pFVar13->scale).field0_0x0;
  uVar1 = *(undefined8 *)((longlong)&(pFVar13->scale).field0_0x0 + 8);
  if (((this->StoragePtr).Ptr == (FProjector *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StoragePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                          ,0x55,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TIndirectObject<UE::Mutable::Private::FProjector> *)(*pcVar2)();
    return pTVar14;
  }
  pFVar13 = (this->StoragePtr).Ptr;
  pFVar13->type = EVar3;
  (pFVar13->position).field0_0x0._s_0.X = fVar4;
  (pFVar13->position).field0_0x0._s_0.Y = fVar5;
  (pFVar13->position).field0_0x0._s_0.Z = fVar6;
  *(undefined8 *)&(pFVar13->direction).field0_0x0 = uVar7;
  *(undefined8 *)((longlong)&(pFVar13->direction).field0_0x0 + 8) = uVar8;
  *(undefined8 *)((longlong)&(pFVar13->up).field0_0x0 + 4) = uVar9;
  *(undefined8 *)&(pFVar13->scale).field0_0x0 = uVar10;
  *(undefined8 *)((longlong)&(pFVar13->scale).field0_0x0 + 8) = uVar1;
  return this;
}

// TIndirectObject<UE::Math::TMatrix<float>_> @ 14ab5e5b0

TIndirectObject<UE::Math::TMatrix<float>_> * __thiscall
UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>::
TIndirectObject<UE::Math::TMatrix<float>_>
          (TIndirectObject<UE::Math::TMatrix<float>_> *this,TMatrix<float> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  TMatrix<float> *pTVar11;
  TIndirectObject<UE::Math::TMatrix<float>_> *pTVar12;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pTVar11 = ::operator_new(0x40);
  if (pTVar11 == (TMatrix<float> *)0x0) {
    (this->StoragePtr).Ptr = (TMatrix<float> *)0x0;
    uVar2 = *(undefined8 *)param_1->M[0];
    uVar3 = *(undefined8 *)(param_1->M[0] + 2);
    uVar4 = *(undefined8 *)param_1->M[1];
    uVar5 = *(undefined8 *)(param_1->M[1] + 2);
    uVar6 = *(undefined8 *)param_1->M[2];
    uVar7 = *(undefined8 *)(param_1->M[2] + 2);
    uVar8 = *(undefined8 *)param_1->M[3];
    uVar9 = *(undefined8 *)(param_1->M[3] + 2);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("StoragePtr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                        ,0x55,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pTVar12 = (TIndirectObject<UE::Math::TMatrix<float>_> *)(*pcVar1)();
      return pTVar12;
    }
    local_18 = (float)uVar8;
    fStack_14 = (float)((ulonglong)uVar8 >> 0x20);
    fStack_10 = (float)uVar9;
    fStack_c = (float)((ulonglong)uVar9 >> 0x20);
    local_28 = (float)uVar6;
    fStack_24 = (float)((ulonglong)uVar6 >> 0x20);
    fStack_20 = (float)uVar7;
    fStack_1c = (float)((ulonglong)uVar7 >> 0x20);
    local_38 = (float)uVar4;
    fStack_34 = (float)((ulonglong)uVar4 >> 0x20);
    fStack_30 = (float)uVar5;
    fStack_2c = (float)((ulonglong)uVar5 >> 0x20);
    local_48 = (float)uVar2;
    fStack_44 = (float)((ulonglong)uVar2 >> 0x20);
    fStack_40 = (float)uVar3;
    fStack_3c = (float)((ulonglong)uVar3 >> 0x20);
  }
  else {
    *(float *)((longlong)(pTVar11->M + 0) + 0) = 0.0;
    *(float *)((longlong)(pTVar11->M + 0) + 4) = 0.0;
    *(float *)((longlong)(pTVar11->M + 0) + 8) = 0.0;
    *(float *)((longlong)(pTVar11->M + 0) + 0xc) = 0.0;
    *(float *)((longlong)(pTVar11->M + 1) + 0) = 0.0;
    *(float *)((longlong)(pTVar11->M + 1) + 4) = 0.0;
    *(float *)((longlong)(pTVar11->M + 1) + 8) = 0.0;
    *(float *)((longlong)(pTVar11->M + 1) + 0xc) = 0.0;
    *(float *)((longlong)(pTVar11->M + 2) + 0) = 0.0;
    *(float *)((longlong)(pTVar11->M + 2) + 4) = 0.0;
    *(float *)((longlong)(pTVar11->M + 2) + 8) = 0.0;
    *(float *)((longlong)(pTVar11->M + 2) + 0xc) = 0.0;
    *(float *)((longlong)(pTVar11->M + 3) + 0) = 0.0;
    *(float *)((longlong)(pTVar11->M + 3) + 4) = 0.0;
    *(float *)((longlong)(pTVar11->M + 3) + 8) = 0.0;
    *(float *)((longlong)(pTVar11->M + 3) + 0xc) = 0.0;
    (this->StoragePtr).Ptr = pTVar11;
    local_48 = param_1->M[0][0];
    fStack_44 = param_1->M[0][1];
    fStack_40 = param_1->M[0][2];
    fStack_3c = param_1->M[0][3];
    local_38 = param_1->M[1][0];
    fStack_34 = param_1->M[1][1];
    fStack_30 = param_1->M[1][2];
    fStack_2c = param_1->M[1][3];
    local_28 = param_1->M[2][0];
    fStack_24 = param_1->M[2][1];
    fStack_20 = param_1->M[2][2];
    fStack_1c = param_1->M[2][3];
    local_18 = param_1->M[3][0];
    fStack_14 = param_1->M[3][1];
    fStack_10 = param_1->M[3][2];
    fStack_c = param_1->M[3][3];
  }
  pTVar11 = (this->StoragePtr).Ptr;
  pTVar11->M[0][0] = local_48;
  pTVar11->M[0][1] = fStack_44;
  pTVar11->M[0][2] = fStack_40;
  pTVar11->M[0][3] = fStack_3c;
  pTVar11->M[1][0] = local_38;
  pTVar11->M[1][1] = fStack_34;
  pTVar11->M[1][2] = fStack_30;
  pTVar11->M[1][3] = fStack_2c;
  pTVar11->M[2][0] = local_28;
  pTVar11->M[2][1] = fStack_24;
  pTVar11->M[2][2] = fStack_20;
  pTVar11->M[2][3] = fStack_1c;
  pTVar11->M[3][0] = local_18;
  pTVar11->M[3][1] = fStack_14;
  pTVar11->M[3][2] = fStack_10;
  pTVar11->M[3][3] = fStack_c;
  return this;
}

// TIndirectObject<FString> @ 14ab5e680

TIndirectObject<FString> * __thiscall
UE::Mutable::Private::Private::TIndirectObject<FString>::TIndirectObject<FString>
          (TIndirectObject<FString> *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TIndirectObject<FString> *pTVar4;
  
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 == (FString *)0x0) {
    (this->StoragePtr).Ptr = (FString *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoragePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TIndirectObject<FString> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else {
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    (this->StoragePtr).Ptr = pFVar3;
  }
  ::FString::operator=((this->StoragePtr).Ptr,param_1);
  return this;
}

