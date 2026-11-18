// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a071b00

UScriptStruct * __cdecl FRigVMParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMParameter.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMParameter,(UObject *)pUVar1,
                         L"RigVMParameter");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMParameter.OuterSingleton;
}

// FRigVMParameter @ 14a07a760

FRigVMParameter * __thiscall
FRigVMParameter::FRigVMParameter(FRigVMParameter *this,FRigVMParameter *param_1)

{
  UScriptStruct *pUVar1;
  
  this->Type = param_1->Type;
  this->Name = param_1->Name;
  this->RegisterIndex = param_1->RegisterIndex;
  ::FString::FString(&this->CPPType,&param_1->CPPType);
  pUVar1 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  (this->ScriptStruct).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ScriptStructPath = param_1->ScriptStructPath;
  return this;
}

// GetScriptStruct @ 14a0983a0

UScriptStruct * __thiscall FRigVMParameter::GetScriptStruct(FRigVMParameter *this)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if ((this->ScriptStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
    return (this->ScriptStruct).field0_0x0.DebugPtr;
  }
  if (this->ScriptStructPath == (FName)0x0) goto LAB_14a098450;
  pFVar1 = ::FName::ToString(&this->ScriptStructPath,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
LAB_14a0983f4:
    sVar2 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar2;
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_14a0983f4;
  }
  pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
  pUVar4 = (UScriptStruct *)StaticFindObject(pUVar3,(UObject *)0x0,&local_28,None);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ScriptStruct).field0_0x0.DebugPtr = pUVar4;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14a098450:
  return (this->ScriptStruct).field0_0x0.DebugPtr;
}

// Load @ 14a09f990

void __thiscall FRigVMParameter::Load(FRigVMParameter *this,FArchive *param_1)

{
  int *piVar1;
  ERigVMParameterType *pEVar2;
  int *piVar3;
  
  pEVar2 = (ERigVMParameterType *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMParameterType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    this->Type = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  piVar1 = &this->RegisterIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->CPPType);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ScriptStructPath);
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  return;
}

// Save @ 14a0a58a0

void __thiscall FRigVMParameter::Save(FRigVMParameter *this,FArchive *param_1)

{
  int *piVar1;
  ERigVMParameterType *pEVar2;
  int *piVar3;
  
  pEVar2 = (ERigVMParameterType *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMParameterType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    this->Type = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  piVar1 = &this->RegisterIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->CPPType);
                    /* WARNING: Could not recover jumptable at 0x00014a0a5957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ScriptStructPath);
  return;
}

// Serialize @ 14a0a63c0

void __thiscall FRigVMParameter::Serialize(FRigVMParameter *this,FArchive *param_1)

{
  int *piVar1;
  ERigVMParameterType *pEVar2;
  int *piVar3;
  int iVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (1 < iVar4) {
    if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
      if ((param_1->field_0x28 & 1) != 0) {
        pEVar2 = (ERigVMParameterType *)**(undefined8 **)&param_1->field_0x8;
        if ((ERigVMParameterType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
        }
        else {
          this->Type = *pEVar2;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
        piVar1 = &this->RegisterIndex;
        piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
        if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
          }
        }
        else {
          *piVar1 = *piVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        ::operator<<(param_1,&this->CPPType);
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ScriptStructPath);
        (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
        return;
      }
    }
    else {
      pEVar2 = (ERigVMParameterType *)**(undefined8 **)&param_1->field_0x8;
      if ((ERigVMParameterType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
      }
      else {
        this->Type = *pEVar2;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
      piVar1 = &this->RegisterIndex;
      piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
      if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
        }
      }
      else {
        *piVar1 = *piVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      ::operator<<(param_1,&this->CPPType);
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ScriptStructPath);
    }
  }
  return;
}

