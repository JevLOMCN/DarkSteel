// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// GatherDispatchData @ 149753300

void __thiscall
FPCGTransformPointsDataProviderProxy::GatherDispatchData
          (FPCGTransformPointsDataProviderProxy *this,FDispatchData *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  float *pfVar9;
  int iVar10;
  
  iVar3 = param_1->ParameterBufferOffset;
  puVar6 = param_1->ParameterBuffer;
  iVar4 = param_1->NumInvocations;
  iVar5 = param_1->ParameterBufferStride;
  if ((iVar4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((longlong)iVar5 & 0xfU) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = 0;
  if (0 < iVar4) {
    pfVar9 = (float *)(puVar6 + (longlong)iVar3 + 0x18);
    do {
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = iVar10 + 1;
      dVar1 = (this->Data).OffsetMin.field0_0x0._s_0.Y;
      dVar2 = (this->Data).OffsetMin.field0_0x0._s_0.Z;
      pfVar9[-6] = (float)(this->Data).OffsetMin.field0_0x0._s_0.X;
      pfVar9[-5] = (float)dVar1;
      pfVar9[-4] = (float)dVar2;
      dVar1 = (this->Data).OffsetMax.field0_0x0._s_0.Y;
      dVar2 = (this->Data).OffsetMax.field0_0x0._s_0.Z;
      pfVar9[-2] = (float)(this->Data).OffsetMax.field0_0x0._s_0.X;
      pfVar9[-1] = (float)dVar1;
      *pfVar9 = (float)dVar2;
      pfVar9[1] = (float)(this->Data).bAbsoluteOffset;
      dVar1 = (this->Data).RotationMin.field0_0x0._s_0.Y;
      dVar2 = (this->Data).RotationMin.field0_0x0._s_0.Z;
      pfVar9[2] = (float)(this->Data).RotationMin.field0_0x0._s_0.X;
      pfVar9[3] = (float)dVar1;
      pfVar9[4] = (float)dVar2;
      dVar1 = (this->Data).RotationMax.field0_0x0._s_0.Y;
      dVar2 = (this->Data).RotationMax.field0_0x0._s_0.Z;
      pfVar9[6] = (float)(this->Data).RotationMax.field0_0x0._s_0.X;
      pfVar9[7] = (float)dVar1;
      pfVar9[8] = (float)dVar2;
      pfVar9[9] = (float)(this->Data).bAbsoluteRotation;
      dVar1 = (this->Data).ScaleMin.field0_0x0._s_0.Y;
      dVar2 = (this->Data).ScaleMin.field0_0x0._s_0.Z;
      pfVar9[10] = (float)(this->Data).ScaleMin.field0_0x0._s_0.X;
      pfVar9[0xb] = (float)dVar1;
      pfVar9[0xc] = (float)dVar2;
      dVar1 = (this->Data).ScaleMax.field0_0x0._s_0.Y;
      dVar2 = (this->Data).ScaleMax.field0_0x0._s_0.Z;
      pfVar9[0xe] = (float)(this->Data).ScaleMax.field0_0x0._s_0.X;
      pfVar9[0xf] = (float)dVar1;
      pfVar9[0x10] = (float)dVar2;
      pfVar9[0x11] = (float)(this->Data).bAbsoluteScale;
      pfVar9[0x12] = (float)(this->Data).bUniformScale;
      pfVar9[0x13] = (float)(this->Data).bRecomputeSeed;
      pfVar9[0x14] = (float)(this->Data).bApplyToAttribute;
      pfVar9[0x15] = (float)(this->Data).AttributeId;
      pfVar9 = (float *)((longlong)pfVar9 + (longlong)iVar5);
    } while (iVar10 < iVar4);
  }
  return;
}

// IsValid @ 14976c350

bool __thiscall
FPCGTransformPointsDataProviderProxy::IsValid
          (FPCGTransformPointsDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 0x70;
}

