// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61b620

void __thiscall FGLTFJsonLight::WriteObject(FGLTFJsonLight *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  EGLTFJsonLightType EVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FString *pFVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  float fVar9;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [3];
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_98,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_98);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  EVar2 = this->Type;
  ::FString::FString(&local_88,L"type");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_88);
  if (EVar2 == Directional) {
    pwVar8 = L"directional";
  }
  else if (EVar2 == Point) {
    pwVar8 = L"point";
  }
  else if (EVar2 == Spot) {
    pwVar8 = L"spot";
  }
  else {
    pwVar8 = L"";
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                       ,0x5d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar3 = *(code **)(param_1->_padding_ + 0x18);
  pFVar6 = ::FString::FString(local_38,pwVar8);
  (*pcVar3)(param_1,pFVar6);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar7 = 0;
  do {
    if (param_1->DefaultTolerance <
        (float)((uint)(*(float *)(&(this->Color).field_0x8 + uVar7) -
                      *(float *)(&FGLTFJsonColor3::White.field_0x8 + uVar7)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      ::FString::FString(&local_78,L"color");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_78);
      (**(code **)(*(longlong *)&this->Color + 8))(&this->Color,param_1);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar7 = uVar7 + 4;
  } while (uVar7 < 0xc);
  fVar1 = this->Intensity;
  fVar9 = (float)((uint)(fVar1 - __real_3f800000) & uVar4);
  if (param_1->DefaultTolerance <= fVar9 && fVar9 != param_1->DefaultTolerance) {
    ::FString::FString(&local_68,L"intensity");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_68);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((this->Type == Point) || (this->Type == Spot)) {
    fVar1 = this->Range;
    fVar9 = (float)((uint)fVar1 & uVar4);
    if (param_1->DefaultTolerance <= fVar9 && fVar9 != param_1->DefaultTolerance) {
      ::FString::FString(&local_58,L"range");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_58);
      (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (this->Type == Spot) {
      ::FString::FString(&local_48,L"spot");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_48);
      (**(code **)((this->Spot)._padding_ + 8))(&this->Spot,param_1);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

