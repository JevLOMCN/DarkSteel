// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 11

// FSourceControlInitSettings @ 146b00130

FSourceControlInitSettings * __thiscall
FSourceControlInitSettings::FSourceControlInitSettings
          (FSourceControlInitSettings *this,EBehavior param_1)

{
  this->OverrideBehavior = param_1;
  *(undefined8 *)&this->Settings = 0;
  *(undefined8 *)&(this->Settings).field_0x8 = 0;
  *(undefined8 *)&(this->Settings).field_0x20 = 0;
  this->CmdLineFlags = None;
  this->ConfigBehavior = ReadWrite;
  *(undefined4 *)&(this->Settings).field_0x28 = 0;
  *(undefined4 *)&(this->Settings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Settings).field_0x34 = 0;
  *(undefined4 *)&(this->Settings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Settings).field_0x40 = 0;
  *(undefined4 *)&(this->Settings).field_0x48 = 0;
  return this;
}

// FSourceControlInitSettings @ 146b00170

FSourceControlInitSettings * __thiscall
FSourceControlInitSettings::FSourceControlInitSettings
          (FSourceControlInitSettings *this,EBehavior param_1,ECmdLineFlags param_2)

{
  this->OverrideBehavior = param_1;
  *(undefined8 *)&this->Settings = 0;
  *(undefined8 *)&(this->Settings).field_0x8 = 0;
  *(undefined8 *)&(this->Settings).field_0x20 = 0;
  this->CmdLineFlags = param_2;
  this->ConfigBehavior = ReadWrite;
  *(undefined4 *)&(this->Settings).field_0x28 = 0;
  *(undefined4 *)&(this->Settings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Settings).field_0x34 = 0;
  *(undefined4 *)&(this->Settings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Settings).field_0x40 = 0;
  *(undefined4 *)&(this->Settings).field_0x48 = 0;
  return this;
}

// AddSetting @ 146b04930

void __thiscall
FSourceControlInitSettings::AddSetting
          (FSourceControlInitSettings *this,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  FString *pFVar1;
  FString local_48;
  FString local_38;
  undefined1 local_28 [16];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar1 = ::FString::ConstructFromPtrSize
                     ((FString *)local_28,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&local_38 != pFVar1) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar1 = ::FString::ConstructFromPtrSize
                     ((FString *)local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_48 != pFVar1) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  local_28._0_8_ = &local_48;
  local_28._8_8_ = &local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->Settings,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
             (bool *)local_28);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// CanReadFromConfigFile @ 146b057a0

bool __thiscall FSourceControlInitSettings::CanReadFromConfigFile(FSourceControlInitSettings *this)

{
  return this->ConfigBehavior != None;
}

// CanWriteToConfigFile @ 146b057b0

bool __thiscall FSourceControlInitSettings::CanWriteToConfigFile(FSourceControlInitSettings *this)

{
  return this->ConfigBehavior == ReadWrite;
}

// HasOverrides @ 146b1b0e0

bool __thiscall FSourceControlInitSettings::HasOverrides(FSourceControlInitSettings *this)

{
  return *(int *)&(this->Settings).field_0x8 != *(int *)&(this->Settings).field_0x34;
}

// IsOverridden @ 146b1be10

bool __thiscall
FSourceControlInitSettings::IsOverridden
          (FSourceControlInitSettings *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  FString *pFVar2;
  
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pFVar2 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                       *)&this->Settings,uVar1,param_1);
  return pFVar2 != (FString *)0x0;
}

// OverrideSetting @ 146b21720

void __thiscall
FSourceControlInitSettings::OverrideSetting
          (FSourceControlInitSettings *this,TStringView<wchar_t> *param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pFVar3 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                       *)&this->Settings,uVar2,param_1);
  if (pFVar3 != (FString *)0x0) {
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(param_2,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
    return;
  }
  if (this->OverrideBehavior == OverrideAll) {
    ::FString::Empty(param_2);
  }
  return;
}

// SetCmdLineFlags @ 146b24800

void __thiscall
FSourceControlInitSettings::SetCmdLineFlags(FSourceControlInitSettings *this,ECmdLineFlags param_1)

{
  this->CmdLineFlags = param_1;
  return;
}

// SetConfigBehavior @ 146b24810

void __thiscall
FSourceControlInitSettings::SetConfigBehavior
          (FSourceControlInitSettings *this,EConfigBehavior param_1)

{
  this->ConfigBehavior = param_1;
  return;
}

// ShouldReadFromCmdLine @ 146b259e0

bool __thiscall FSourceControlInitSettings::ShouldReadFromCmdLine(FSourceControlInitSettings *this)

{
  return this->CmdLineFlags == ReadAll;
}

