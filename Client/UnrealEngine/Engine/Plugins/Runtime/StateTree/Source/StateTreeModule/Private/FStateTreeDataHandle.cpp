// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// FStateTreeDataHandle @ 14d4b1740

FStateTreeDataHandle * __thiscall
FStateTreeDataHandle::FStateTreeDataHandle
          (FStateTreeDataHandle *this,EStateTreeDataSourceType param_1)

{
  code *pcVar1;
  FStateTreeStateHandle FVar2;
  bool bVar3;
  FStateTreeDataHandle *pFVar4;
  
  FVar2.Index = FStateTreeStateHandle::Invalid.Index;
  this->Index = 0xffff;
  (this->StateHandle).Index = FVar2.Index;
  this->Source = param_1;
  if ((param_1 == ActiveInstanceData) && (FVar2.Index == 0xffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source != EStateTreeDataSourceType::ActiveInstanceData || (Source == EStateTreeDataSourceType::ActiveInstanceData && StateHandle.IsValid())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeTypes.h"
                       ,399,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStateTreeDataHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((this->Source == ActiveInstanceDataObject) && ((this->StateHandle).Index == 0xffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source != EStateTreeDataSourceType::ActiveInstanceDataObject || (Source == EStateTreeDataSourceType::ActiveInstanceDataObject && StateHandle.IsValid())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeTypes.h"
                       ,400,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStateTreeDataHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((this->Source != GlobalParameterData) && (this->Source != ExternalGlobalParameterData)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source == EStateTreeDataSourceType::GlobalParameterData || Source == EStateTreeDataSourceType::ExternalGlobalParameterData || IsValidIndex(InIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeTypes.h"
                       ,0x191,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStateTreeDataHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// StaticStruct @ 14d527370

UScriptStruct * __cdecl FStateTreeDataHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar1,
                         L"StateTreeDataHandle");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton;
}

// FStateTreeDataHandle @ 14d52c450

FStateTreeDataHandle * __thiscall
FStateTreeDataHandle::FStateTreeDataHandle
          (FStateTreeDataHandle *this,EStateTreeDataSourceType param_1,ushort param_2,
          FStateTreeStateHandle param_3)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeDataHandle *pFVar3;
  
  this->Source = param_1;
  this->Index = param_2;
  (this->StateHandle).Index = param_3.Index;
  if ((param_1 == ActiveInstanceData) && (param_3.Index == 0xffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source != EStateTreeDataSourceType::ActiveInstanceData || (Source == EStateTreeDataSourceType::ActiveInstanceData && StateHandle.IsValid())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeTypes.h"
                       ,399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateTreeDataHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->Source == ActiveInstanceDataObject) && ((this->StateHandle).Index == 0xffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source != EStateTreeDataSourceType::ActiveInstanceDataObject || (Source == EStateTreeDataSourceType::ActiveInstanceDataObject && StateHandle.IsValid())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeTypes.h"
                       ,400,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateTreeDataHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (((this->Source != GlobalParameterData) && (this->Source != ExternalGlobalParameterData)) &&
     (param_2 == 0xffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source == EStateTreeDataSourceType::GlobalParameterData || Source == EStateTreeDataSourceType::ExternalGlobalParameterData || IsValidIndex(InIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeTypes.h"
                       ,0x191,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateTreeDataHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// Describe @ 14d52e740

FString * __thiscall
FStateTreeDataHandle::Describe(FStateTreeDataHandle *this,FString *__return_storage_ptr__)

{
  switch(this->Source) {
  case None:
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  case GlobalInstanceData:
    ::FString::PrintfImpl(__return_storage_ptr__,L"Global[%d]");
    return __return_storage_ptr__;
  case GlobalInstanceDataObject:
    ::FString::PrintfImpl(__return_storage_ptr__,L"GlobalObj[%d]");
    return __return_storage_ptr__;
  case ActiveInstanceData:
    ::FString::PrintfImpl(__return_storage_ptr__,L"Active[%d]");
    return __return_storage_ptr__;
  case ActiveInstanceDataObject:
    ::FString::PrintfImpl(__return_storage_ptr__,L"ActiveObj[%d]");
    return __return_storage_ptr__;
  case SharedInstanceData:
    ::FString::PrintfImpl(__return_storage_ptr__,L"Shared[%d]");
    return __return_storage_ptr__;
  case SharedInstanceDataObject:
    ::FString::PrintfImpl(__return_storage_ptr__,L"SharedObj[%d]");
    return __return_storage_ptr__;
  case EvaluationScopeInstanceData:
    ::FString::PrintfImpl(__return_storage_ptr__,L"EvalScope[%d]");
    return __return_storage_ptr__;
  case EvaluationScopeInstanceDataObject:
    ::FString::PrintfImpl(__return_storage_ptr__,L"EvalScopeObj[%d]");
    return __return_storage_ptr__;
  case ExecutionRuntimeData:
    ::FString::PrintfImpl(__return_storage_ptr__,L"ExecRun[%d]");
    return __return_storage_ptr__;
  case ExecutionRuntimeDataObject:
    ::FString::PrintfImpl(__return_storage_ptr__,L"ExecRunObj[%d]");
    return __return_storage_ptr__;
  case ContextData:
    ::FString::PrintfImpl(__return_storage_ptr__,L"Context[%d]");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"---");
    return __return_storage_ptr__;
  case GlobalParameterData:
    ::FString::FString(__return_storage_ptr__,L"GlobalParam");
    return __return_storage_ptr__;
  case SubtreeParameterData:
    ::FString::PrintfImpl(__return_storage_ptr__,L"SubtreeParam[%d]");
    return __return_storage_ptr__;
  case StateParameterData:
    ::FString::PrintfImpl(__return_storage_ptr__,L"LinkedParam[%d]");
    return __return_storage_ptr__;
  case ExternalGlobalParameterData:
    ::FString::FString(__return_storage_ptr__,L"ExternalGlobalParam");
    return __return_storage_ptr__;
  }
}

// IsObjectSource @ 14d531f30

bool __thiscall FStateTreeDataHandle::IsObjectSource(FStateTreeDataHandle *this)

{
  if ((this->Source != GlobalInstanceDataObject) &&
     ((this->Source - ActiveInstanceDataObject & 0xf9) != 0)) {
    return false;
  }
  return true;
}

// ToObjectSource @ 14d5345e0

FStateTreeDataHandle __thiscall FStateTreeDataHandle::ToObjectSource(FStateTreeDataHandle *this)

{
  undefined1 in_DL;
  EStateTreeDataSourceType EVar1;
  undefined7 in_register_00000011;
  
  EVar1 = this->Source;
  if (EVar1 == GlobalInstanceData) {
    EVar1 = GlobalInstanceDataObject;
  }
  else if (EVar1 == ActiveInstanceData) {
    EVar1 = ActiveInstanceDataObject;
  }
  else if (EVar1 == SharedInstanceData) {
    EVar1 = SharedInstanceDataObject;
  }
  else if (EVar1 == EvaluationScopeInstanceData) {
    EVar1 = EvaluationScopeInstanceDataObject;
  }
  else {
    if (EVar1 != ExecutionRuntimeData) {
      *(undefined4 *)CONCAT71(in_register_00000011,in_DL) = *(undefined4 *)this;
      *(ushort *)(CONCAT71(in_register_00000011,in_DL) + 4) = (this->StateHandle).Index;
      return SUB86(CONCAT71(in_register_00000011,in_DL),0);
    }
    EVar1 = ExecutionRuntimeDataObject;
  }
  FStateTreeDataHandle
            ((FStateTreeDataHandle *)CONCAT71(in_register_00000011,in_DL),EVar1,this->Index,
             (FStateTreeStateHandle)(this->StateHandle).Index);
  return SUB86((FStateTreeDataHandle *)CONCAT71(in_register_00000011,in_DL),0);
}

