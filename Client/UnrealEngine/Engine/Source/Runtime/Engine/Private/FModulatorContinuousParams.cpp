// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148678310

UScriptStruct * __cdecl FModulatorContinuousParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModulatorContinuousParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FModulatorContinuousParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModulatorContinuousParams,(UObject *)pUVar1,
                         L"ModulatorContinuousParams");
  }
  return Z_Registration_Info_UScriptStruct_FModulatorContinuousParams.OuterSingleton;
}

// GetValue @ 1486c9140

float __thiscall
FModulatorContinuousParams::GetValue(FModulatorContinuousParams *this,FActiveSound *param_1)

{
  uchar uVar1;
  IParameterTransmitter *pIVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  FString *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  TSharedPtr<Audio::IProxyData,1> *local_38;
  undefined8 local_30;
  
  pIVar2 = (param_1->InstanceTransmitter).Object;
  local_c8 = 0;
  fVar6 = 0.0;
  local_c0 = 0.0;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = (FString *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_38 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
  local_30 = 0;
  cVar3 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,this->ParameterName,&local_c8);
  if (cVar3 == '\0') {
    local_c0 = this->Default;
  }
  uVar1 = (this->ParamMode).Value;
  fVar5 = local_c0;
  if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      local_c0 = (float)((uint)local_c0 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    fVar5 = this->MinInput;
    fVar4 = this->MaxInput;
    if (fVar5 < fVar4) {
      fVar6 = (this->MaxOutput - this->MinOutput) / (fVar4 - fVar5);
    }
    if (local_c0 <= fVar4) {
      fVar4 = local_c0;
    }
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar5 = (fVar4 - fVar5) * fVar6 + this->MinOutput;
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_38,(int)local_30);
  if (local_38 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return fVar5;
}

