// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e619d10

void __thiscall FGLTFJsonAccessor::WriteObject(FGLTFJsonAccessor *this,IGLTFJsonWriter *param_1)

{
  int iVar1;
  EGLTFJsonAccessorType EVar2;
  EGLTFJsonComponentType EVar3;
  FGLTFJsonBufferView *pFVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  longlong lVar8;
  undefined4 uVar9;
  float *pfVar10;
  wchar_t *pwVar11;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_a8,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_a8);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = this->BufferView;
  ::FString::FString(&local_98,L"bufferView");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_98);
  if (pFVar4 == (FGLTFJsonBufferView *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = (undefined4)pFVar4->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar9);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  lVar8 = this->ByteOffset;
  if (lVar8 != 0) {
    ::FString::FString(&local_88,L"byteOffset");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_88);
    (**(code **)(param_1->_padding_ + 0x28))(param_1,lVar8);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = this->Count;
  ::FString::FString(&local_78,L"count");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_78);
  (**(code **)(param_1->_padding_ + 0x30))(param_1,iVar1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = this->Type;
  ::FString::FString(&local_68,L"type");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_68);
  switch(EVar2) {
  case Scalar:
    pwVar11 = L"SCALAR";
    break;
  case Vec2:
    pwVar11 = L"VEC2";
    break;
  case Vec3:
    pwVar11 = L"VEC3";
    break;
  case Vec4:
    pwVar11 = L"VEC4";
    break;
  case Mat2:
    pwVar11 = L"MAT2";
    break;
  case Mat3:
    pwVar11 = L"MAT3";
    break;
  case Mat4:
    pwVar11 = L"MAT4";
    break;
  default:
    pwVar11 = L"";
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                       ,0x44,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pcVar5 = *(code **)(param_1->_padding_ + 0x18);
  pFVar7 = ::FString::FString(&local_18,pwVar11);
  (*pcVar5)(param_1,pFVar7);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar3 = this->ComponentType;
  ::FString::FString(&local_58,L"componentType");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_58);
  (**(code **)(param_1->_padding_ + 0x30))(param_1,EVar3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar6 = this->bNormalized;
  if (bVar6 != false) {
    ::FString::FString(&local_48,L"normalized");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_48);
    (**(code **)(param_1->_padding_ + 0x38))(param_1,bVar6);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  lVar8 = (longlong)this->MinMaxLength;
  if (0 < this->MinMaxLength) {
    ::FString::FString(&local_38,L"min");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x58))(param_1);
    if (lVar8 != 0) {
      pfVar10 = this->Min;
      do {
        (**(code **)(param_1->_padding_ + 0x20))(param_1,*pfVar10);
        pfVar10 = pfVar10 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    (**(code **)(param_1->_padding_ + 0x60))(param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    lVar8 = (longlong)this->MinMaxLength;
    ::FString::FString(&local_28,L"max");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x58))(param_1);
    if (lVar8 != 0) {
      pfVar10 = this->Max;
      do {
        (**(code **)(param_1->_padding_ + 0x20))(param_1,*pfVar10);
        pfVar10 = pfVar10 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    (**(code **)(param_1->_padding_ + 0x60))(param_1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

