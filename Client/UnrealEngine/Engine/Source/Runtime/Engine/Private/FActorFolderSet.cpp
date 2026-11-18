// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147e43f50

UScriptStruct * __cdecl FActorFolderSet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorFolderSet.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorFolderSet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorFolderSet,(UObject *)pUVar1,
                         L"ActorFolderSet");
  }
  return Z_Registration_Info_UScriptStruct_FActorFolderSet.OuterSingleton;
}

// Add @ 147e5ab90

void __thiscall FActorFolderSet::Add(FActorFolderSet *this,UActorFolder *param_1)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UActorFolder> local_res8;
  UActorFolder *local_res10;
  
  if (param_1 == (UActorFolder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InActorFolder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                       ,0xdd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res10 = param_1;
  TSet<TObjectPtr<UActorFolder>,DefaultKeyFuncs<TObjectPtr<UActorFolder>,0>,FDefaultSetAllocator>::
  Emplace<TObjectPtr<UActorFolder>_>(&this->ActorFolders,&local_res8,(bool *)&local_res10);
  return;
}

