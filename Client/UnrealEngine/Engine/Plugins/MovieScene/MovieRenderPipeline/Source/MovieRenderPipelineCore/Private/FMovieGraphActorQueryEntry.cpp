// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// StaticStruct @ 14dc9d3d0

UScriptStruct * __cdecl FMovieGraphActorQueryEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphActorQueryEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphActorQueryEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphActorQueryEntry,(UObject *)pUVar1,
                         L"MovieGraphActorQueryEntry");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphActorQueryEntry.OuterSingleton;
}

// operator== @ 14dcb3fe0

bool __thiscall
FMovieGraphActorQueryEntry::operator==
          (FMovieGraphActorQueryEntry *this,FMovieGraphActorQueryEntry *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(param_1->ActorToMatch).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(this->ActorToMatch).SoftObjectPtr.field_0x8);
  if ((bVar2) &&
     (iVar1 = (param_1->ComponentsToMatch).ArrayNum, iVar1 == (this->ComponentsToMatch).ArrayNum)) {
    bVar2 = CompareItems<TSoftObjectPtr<UActorComponent>,int>
                      ((TSoftObjectPtr<UActorComponent> *)
                       (param_1->ComponentsToMatch).AllocatorInstance.Data,
                       (TSoftObjectPtr<UActorComponent> *)
                       (this->ComponentsToMatch).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

