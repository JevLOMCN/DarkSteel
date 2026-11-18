// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FOptimusLoopTerminalDataProviderProxy @ 14e152340

FOptimusLoopTerminalDataProviderProxy * __thiscall
FOptimusLoopTerminalDataProviderProxy::FOptimusLoopTerminalDataProviderProxy
          (FOptimusLoopTerminalDataProviderProxy *this,uint param_1,uint param_2)

{
  this->Index = param_1;
  this->_padding_ = (longlong)&___7FOptimusLoopTerminalDataProviderProxy__6B_;
  this->Count = param_2;
  return this;
}

// GatherDispatchData @ 14e1b4420

void __thiscall
FOptimusLoopTerminalDataProviderProxy::GatherDispatchData
          (FOptimusLoopTerminalDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(param_1->ParameterBuffer + param_1->ParameterBufferOffset);
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = iVar5 + 1;
      *puVar6 = this->Index;
      puVar6[1] = this->Count;
      puVar6 = (uint *)((longlong)puVar6 + (longlong)iVar2);
    } while (iVar5 < iVar1);
  }
  return;
}

// IsValid @ 14e1f0830

bool __thiscall
FOptimusLoopTerminalDataProviderProxy::IsValid
          (FOptimusLoopTerminalDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 0x10;
}

