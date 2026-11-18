// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// GatherDispatchData @ 149752260

void __thiscall
FPCGNormalToDensityDataProviderProxy::GatherDispatchData
          (FPCGNormalToDensityDataProviderProxy *this,FDispatchData *param_1)

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
    pfVar9 = (float *)(puVar6 + (longlong)iVar3 + 8);
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
      dVar1 = (this->Data).Normal.field0_0x0._s_0.Y;
      dVar2 = (this->Data).Normal.field0_0x0._s_0.Z;
      pfVar9[-2] = (float)(this->Data).Normal.field0_0x0._s_0.X;
      pfVar9[-1] = (float)dVar1;
      *pfVar9 = (float)dVar2;
      pfVar9[1] = (float)(this->Data).Offset;
      pfVar9[2] = (float)(this->Data).Strength;
      pfVar9[3] = (float)(int)(char)(this->Data).DensityMode;
      pfVar9 = (float *)((longlong)pfVar9 + (longlong)iVar5);
    } while (iVar10 < iVar4);
  }
  return;
}

// IsValid @ 14976c150

bool __thiscall
FPCGNormalToDensityDataProviderProxy::IsValid
          (FPCGNormalToDensityDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 0x20;
}

