// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// GatherDispatchData @ 149751030

void __thiscall
FPCGCopyPointsAnalysisDataProviderProxy::GatherDispatchData
          (FPCGCopyPointsAnalysisDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  
  iVar1 = param_1->ParameterBufferOffset;
  puVar4 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    puVar7 = (uint *)(puVar4 + (longlong)iVar1 + 8);
    do {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar7[-2] = (this->Params).MatchAttributeId;
      puVar7[-1] = (this->Params).SelectedFlagAttributeId;
      iVar8 = iVar8 + 1;
      *puVar7 = (uint)((this->Params).bCopyEachSourceOnEveryTarget != false);
      puVar7 = (uint *)((longlong)puVar7 + (longlong)iVar3);
    } while (iVar8 < iVar2);
  }
  return;
}

// IsValid @ 14976be70

bool __thiscall
FPCGCopyPointsAnalysisDataProviderProxy::IsValid
          (FPCGCopyPointsAnalysisDataProviderProxy *this,FValidationData *param_1)

{
  if (((param_1->ParameterStructSize == 0x10) && ((this->Params).MatchAttributeId != -1)) &&
     ((this->Params).SelectedFlagAttributeId != -1)) {
    return true;
  }
  return false;
}

