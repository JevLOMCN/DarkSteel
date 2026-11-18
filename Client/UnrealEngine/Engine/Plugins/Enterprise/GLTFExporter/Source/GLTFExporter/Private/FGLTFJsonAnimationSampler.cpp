// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61a3e0

void __thiscall
FGLTFJsonAnimationSampler::WriteObject(FGLTFJsonAnimationSampler *this,IGLTFJsonWriter *param_1)

{
  EGLTFJsonInterpolation EVar1;
  FGLTFJsonAccessor *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = this->Input;
  ::FString::FString(&local_48,L"input");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_48);
  if (pFVar2 == (FGLTFJsonAccessor *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)pFVar2->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar2 = this->Output;
  ::FString::FString(&local_38,L"output");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
  if (pFVar2 == (FGLTFJsonAccessor *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)pFVar2->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar6);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  EVar1 = this->Interpolation;
  if (EVar1 != Linear) {
    ::FString::FString(&local_28,L"interpolation");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    if (EVar1 == Linear) {
      pwVar7 = L"LINEAR";
    }
    else if (EVar1 == Step) {
      pwVar7 = L"STEP";
    }
    else if (EVar1 == CubicSpline) {
      pwVar7 = L"CUBICSPLINE";
    }
    else {
      pwVar7 = L"";
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                         ,0x6a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pcVar3 = *(code **)(param_1->_padding_ + 0x18);
    pFVar5 = ::FString::FString(&local_18,pwVar7);
    (*pcVar3)(param_1,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

