// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// operator== @ 145e47980

bool __thiscall FGenericShaderStat::operator==(FGenericShaderStat *this,FGenericShaderStat *param_1)

{
  bool bVar1;
  
  if (this->StatName == param_1->StatName) {
    bVar1 = ::operator==(&this->Value,&param_1->Value);
    if (((bVar1) && (this->Flags == param_1->Flags)) && (this->TagName == param_1->TagName)) {
      return true;
    }
  }
  return false;
}

// operator< @ 145e47de0

bool __thiscall FGenericShaderStat::operator<(FGenericShaderStat *this,FGenericShaderStat *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = ::FName::Compare(&this->StatName,&param_1->StatName);
  if (iVar2 == 0) {
    bVar1 = ::operator==(&this->Value,&param_1->Value);
    if (bVar1) {
      bVar1 = this->Flags < param_1->Flags;
      if (this->Flags == param_1->Flags) {
        iVar2 = ::FName::Compare(&this->TagName,&param_1->TagName);
        bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
      }
    }
    else {
      bVar1 = ::operator<(&this->Value,&param_1->Value);
    }
    return bVar1;
  }
  return SUB41((uint)iVar2 >> 0x1f,0);
}

// StreamArchive @ 145e70110

void __thiscall FGenericShaderStat::StreamArchive(FGenericShaderStat *this,FArchive *param_1)

{
  EFlags *pEVar1;
  FName *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->TagName);
    }
    else {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_18);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
      this->StatName = *pFVar2;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_28);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
      this->TagName = *pFVar2;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    ::FName::ToString(&this->StatName,&local_28);
    ::operator<<(param_1,&local_28);
    ::FName::ToString(&this->TagName,&local_18);
    ::operator<<(param_1,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  operator<<<bool,float,int,unsigned_int,FString>(param_1,&this->Value);
  pEVar1 = (EFlags *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar1 + 1 <= (EFlags *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->Flags = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e70296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Flags,1);
  return;
}

