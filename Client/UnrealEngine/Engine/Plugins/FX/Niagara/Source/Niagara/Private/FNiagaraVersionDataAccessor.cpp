// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// GetObjectVersion @ 14940f850

FNiagaraAssetVersion * __thiscall
FNiagaraVersionDataAccessor::GetObjectVersion(FNiagaraVersionDataAccessor *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraAssetVersion *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4104621595346075681>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVersionedObject.cpp"
                     ,0x21,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraAssetVersion *)(*pcVar1)();
    return pFVar3;
  }
  return &NiagaraVersionedObject::Dummy.Version;
}

// GetVersionChangeDescription @ 14940f8a0

FText * __thiscall
FNiagaraVersionDataAccessor::GetVersionChangeDescription(FNiagaraVersionDataAccessor *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4104621595346075687>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVersionedObject.cpp"
                     ,0x27,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  return &NiagaraVersionedObject::Dummy.Desc;
}

// IsDeprecated @ 14940f8f0

bool * __thiscall FNiagaraVersionDataAccessor::IsDeprecated(FNiagaraVersionDataAccessor *this)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4104621595346075693>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVersionedObject.cpp"
                     ,0x2d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pbVar3 = (bool *)(*pcVar1)();
    return pbVar3;
  }
  return &NiagaraVersionedObject::Dummy.bDeprecated;
}

// GetDeprecationMessage @ 14940f940

FText * __thiscall
FNiagaraVersionDataAccessor::GetDeprecationMessage(FNiagaraVersionDataAccessor *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4104621595346075699>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVersionedObject.cpp"
                     ,0x33,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  return &NiagaraVersionedObject::Dummy.Desc;
}

// GetUpdateScriptExecutionType @ 14940f990

ENiagaraPythonUpdateScriptReference * __thiscall
FNiagaraVersionDataAccessor::GetUpdateScriptExecutionType(FNiagaraVersionDataAccessor *this)

{
  code *pcVar1;
  bool bVar2;
  ENiagaraPythonUpdateScriptReference *pEVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4104621595346075705>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVersionedObject.cpp"
                     ,0x39,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pEVar3 = (ENiagaraPythonUpdateScriptReference *)(*pcVar1)();
    return pEVar3;
  }
  return &NiagaraVersionedObject::Dummy.Type;
}

// GetPythonUpdateScript @ 14940f9e0

FString * __thiscall
FNiagaraVersionDataAccessor::GetPythonUpdateScript(FNiagaraVersionDataAccessor *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4104621595346075711>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVersionedObject.cpp"
                     ,0x3f,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  return &NiagaraVersionedObject::Dummy.Script;
}

// GetScriptAsset @ 14940fa30

FFilePath * __thiscall
FNiagaraVersionDataAccessor::GetScriptAsset(FNiagaraVersionDataAccessor *this)

{
  code *pcVar1;
  bool bVar2;
  FFilePath *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4104621595346075717>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVersionedObject.cpp"
                     ,0x45,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFilePath *)(*pcVar1)();
    return pFVar3;
  }
  return &NiagaraVersionedObject::Dummy.Path;
}

// ~FNiagaraVersionDataAccessor @ 14942c100

void __thiscall
FNiagaraVersionDataAccessor::~FNiagaraVersionDataAccessor(FNiagaraVersionDataAccessor *this)

{
  return;
}

