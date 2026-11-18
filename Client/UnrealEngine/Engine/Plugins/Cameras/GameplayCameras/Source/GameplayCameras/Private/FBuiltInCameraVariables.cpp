// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// FBuiltInCameraVariables @ 14d5429c0

FBuiltInCameraVariables * __thiscall
UE::Cameras::FBuiltInCameraVariables::FBuiltInCameraVariables(FBuiltInCameraVariables *this)

{
  ulong64 uVar1;
  FString local_88;
  char local_78 [112];
  
  (this->YawDefinition).VariableID.Value = 0xffffffff;
  (this->YawDefinition).VariableType = Boolean;
  (this->YawDefinition).BlendableStructType.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->YawDefinition).bIsPrivate = false;
  (this->YawDefinition).bIsInput = false;
  (this->YawDefinition).bAutoReset = false;
  (this->PitchDefinition).VariableType = Boolean;
  (this->PitchDefinition).BlendableStructType.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->PitchDefinition).bIsPrivate = false;
  (this->PitchDefinition).bIsInput = false;
  (this->PitchDefinition).bAutoReset = false;
  (this->RollDefinition).VariableType = Boolean;
  (this->RollDefinition).BlendableStructType.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->RollDefinition).bIsPrivate = false;
  (this->RollDefinition).bIsInput = false;
  (this->RollDefinition).bAutoReset = false;
  (this->ZoomDefinition).VariableType = Boolean;
  (this->ZoomDefinition).BlendableStructType.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->ZoomDefinition).bIsPrivate = false;
  (this->ZoomDefinition).bIsInput = false;
  (this->ZoomDefinition).bAutoReset = false;
  (this->YawPitchDefinition).VariableType = Boolean;
  (this->YawPitchDefinition).BlendableStructType.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->YawPitchDefinition).bIsPrivate = false;
  (this->YawPitchDefinition).bIsInput = false;
  (this->YawPitchDefinition).bAutoReset = false;
  (this->FreezeControlRotationDefinition).VariableType = Boolean;
  (this->FreezeControlRotationDefinition).BlendableStructType.field0_0x0.DebugPtr =
       (UScriptStruct *)0x0;
  (this->FreezeControlRotationDefinition).bIsPrivate = false;
  (this->FreezeControlRotationDefinition).bIsInput = false;
  (this->FreezeControlRotationDefinition).bAutoReset = false;
  (this->ControlRotationDefinition).VariableType = Boolean;
  (this->ControlRotationDefinition).BlendableStructType.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->ControlRotationDefinition).bIsPrivate = false;
  (this->ControlRotationDefinition).bIsInput = false;
  (this->ControlRotationDefinition).bAutoReset = false;
  (this->PitchDefinition).VariableID.Value = 0xffffffff;
  (this->RollDefinition).VariableID.Value = 0xffffffff;
  (this->ZoomDefinition).VariableID.Value = 0xffffffff;
  (this->YawPitchDefinition).VariableID.Value = 0xffffffff;
  (this->FreezeControlRotationDefinition).VariableID.Value = 0xffffffff;
  (this->ControlRotationDefinition).VariableID.Value = 0xffffffff;
  local_78[0] = -0x71;
  local_78[1] = '4';
  local_78[2] = '#';
  local_78[3] = 'n';
  local_78[4] = '\x0f';
  local_78[5] = 'F';
  local_78[6] = '\x0e';
  local_78[7] = ')';
  local_78[8] = -0x80;
  local_78[9] = -0x13;
  local_78[10] = '2';
  local_78[0xb] = -0x6c;
  local_78[0xc] = -0xe;
  local_78[0xd] = '\x03';
  local_78[0xe] = -0x36;
  local_78[0xf] = -0x19;
  local_78[0x10] = -0x26;
  local_78[0x11] = '+';
  local_78[0x12] = '\x14';
  local_78[0x13] = -0x49;
  local_78[0x14] = -0x5c;
  local_78[0x15] = 'E';
  local_78[0x16] = 'u';
  local_78[0x17] = 'g';
  local_78[0x18] = '{';
  local_78[0x19] = -0x30;
  local_78[0x1a] = 'l';
  local_78[0x1b] = -0x50;
  local_78[0x1c] = -0x77;
  local_78[0x1d] = '\x1f';
  local_78[0x1e] = '-';
  local_78[0x1f] = 'q';
  local_78[0x20] = -0x65;
  local_78[0x21] = '\x14';
  local_78[0x22] = -0x44;
  local_78[0x23] = -0x26;
  local_78[0x24] = '\x17';
  local_78[0x25] = 'I';
  local_78[0x26] = '}';
  local_78[0x27] = -0x22;
  local_78[0x28] = -0x15;
  local_78[0x29] = '~';
  local_78[0x2a] = '\f';
  local_78[0x2b] = -0x7e;
  local_78[0x2c] = 'l';
  local_78[0x2d] = -0x7c;
  local_78[0x2e] = -0x57;
  local_78[0x2f] = -0x1e;
  local_78[0x30] = -0x6c;
  local_78[0x31] = 'j';
  local_78[0x32] = -0x41;
  local_78[0x33] = 'V';
  local_78[0x34] = 'H';
  local_78[0x35] = 'F';
  local_78[0x36] = -0x4d;
  local_78[0x37] = -0x79;
  local_78[0x38] = '\x1b';
  local_78[0x39] = '9';
  local_78[0x3a] = -0x5c;
  local_78[0x3b] = -0x7c;
  local_78[0x3c] = 'a';
  local_78[0x3d] = 'p';
  local_78[0x3e] = -0x2e;
  local_78[0x3f] = -0x26;
  local_78[0x40] = -0x73;
  local_78[0x41] = -0x7e;
  local_78[0x42] = -0x49;
  local_78[0x43] = 'g';
  local_78[0x44] = '\a';
  local_78[0x45] = 'I';
  local_78[0x46] = 'E';
  local_78[0x47] = -0x3a;
  local_78[0x48] = '\r';
  local_78[0x49] = -0x4c;
  local_78[0x4a] = -0x42;
  local_78[0x4b] = -0x6e;
  local_78[0x4c] = -0x74;
  local_78[0x4d] = -0x7d;
  local_78[0x4e] = -0x74;
  local_78[0x4f] = -0x15;
  local_78[0x50] = '>';
  local_78[0x51] = -0x3e;
  local_78[0x52] = -0x13;
  local_78[0x53] = '9';
  local_78[0x54] = 'A';
  local_78[0x55] = '@';
  local_78[0x56] = -0xe;
  local_78[0x57] = 'p';
  local_78[0x58] = -0x2a;
  local_78[0x59] = '{';
  local_78[0x5a] = '\x1b';
  local_78[0x5b] = -0x69;
  local_78[0x5c] = -0x2f;
  local_78[0x5d] = '@';
  local_78[0x5e] = -10;
  local_78[0x5f] = -0x80;
  local_78[0x60] = -0x5c;
  local_78[0x61] = -4;
  local_78[0x62] = -0x4b;
  local_78[99] = '*';
  local_78[100] = 'L';
  local_78[0x65] = 'I';
  local_78[0x66] = ',';
  local_78[0x67] = -0x2a;
  local_78[0x68] = -7;
  local_78[0x69] = -0x38;
  local_78[0x6a] = '\0';
  local_78[0x6b] = -0x49;
  local_78[0x6c] = -0x18;
  local_78[0x6d] = -0x28;
  local_78[0x6e] = -0x2e;
  local_78[0x6f] = -0x74;
  ::FString::FString(&local_88,L"Yaw");
  uVar1 = CityHash64(local_78,0x10);
  (this->YawDefinition).VariableID.Value = (uint)uVar1;
  (this->YawDefinition).VariableType = Double;
  (this->YawDefinition).bIsInput = true;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"Pitch");
  uVar1 = CityHash64(local_78 + 0x10,0x10);
  (this->PitchDefinition).VariableID.Value = (uint)uVar1;
  (this->PitchDefinition).VariableType = Double;
  (this->PitchDefinition).bIsInput = true;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"Roll");
  uVar1 = CityHash64(local_78 + 0x20,0x10);
  (this->RollDefinition).VariableID.Value = (uint)uVar1;
  (this->RollDefinition).VariableType = Double;
  (this->RollDefinition).bIsInput = true;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"Zoom");
  uVar1 = CityHash64(local_78 + 0x30,0x10);
  (this->ZoomDefinition).VariableID.Value = (uint)uVar1;
  (this->ZoomDefinition).VariableType = Double;
  (this->ZoomDefinition).bIsInput = true;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"YawPitch");
  uVar1 = CityHash64(local_78 + 0x40,0x10);
  (this->YawPitchDefinition).VariableID.Value = (uint)uVar1;
  (this->YawPitchDefinition).VariableType = Vector2d;
  (this->YawPitchDefinition).bIsInput = true;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"FreezeControlRotation");
  uVar1 = CityHash64(local_78 + 0x50,0x10);
  (this->FreezeControlRotationDefinition).VariableID.Value = (uint)uVar1;
  (this->FreezeControlRotationDefinition).VariableType = Boolean;
  (this->FreezeControlRotationDefinition).bIsInput = true;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"ControlRotation");
  uVar1 = CityHash64(local_78 + 0x60,0x10);
  (this->ControlRotationDefinition).VariableID.Value = (uint)uVar1;
  (this->ControlRotationDefinition).VariableType = Rotator3d;
  (this->ControlRotationDefinition).bIsInput = true;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// Get @ 14d555e70

FBuiltInCameraVariables * __cdecl UE::Cameras::FBuiltInCameraVariables::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FBuiltInCameraVariables(&::Instance);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetDefinition @ 14d557d90

FCameraVariableDefinition * __thiscall
UE::Cameras::FBuiltInCameraVariables::GetDefinition
          (FBuiltInCameraVariables *this,EBuiltInDoubleCameraVariable param_1)

{
  if (param_1 == Yaw) {
    return &this->YawDefinition;
  }
  if (param_1 == Pitch) {
    return &this->PitchDefinition;
  }
  if (param_1 == Roll) {
    return &this->RollDefinition;
  }
  if (param_1 != Zoom) {
    return &::Invalid;
  }
  return &this->ZoomDefinition;
}

// GetDefinition @ 14d557dd0

FCameraVariableDefinition * __thiscall
UE::Cameras::FBuiltInCameraVariables::GetDefinition
          (FBuiltInCameraVariables *this,EBuiltInRotator3dCameraVariable param_1)

{
  FCameraVariableDefinition *pFVar1;
  
  pFVar1 = &::Invalid;
  if (param_1 == ControlRotation) {
    pFVar1 = &this->ControlRotationDefinition;
  }
  return pFVar1;
}

// GetDefinition @ 14d557df0

FCameraVariableDefinition * __thiscall
UE::Cameras::FBuiltInCameraVariables::GetDefinition
          (FBuiltInCameraVariables *this,EBuiltInVector2dCameraVariable param_1)

{
  FCameraVariableDefinition *pFVar1;
  
  pFVar1 = &::Invalid;
  if (param_1 == YawPitch) {
    pFVar1 = &this->YawPitchDefinition;
  }
  return pFVar1;
}

