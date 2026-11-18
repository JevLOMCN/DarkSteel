// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14758c2c0

UScriptStruct * __cdecl FSmartNameContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSmartNameContainer.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSmartNameContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameContainer,(UObject *)pUVar1,
                         L"SmartNameContainer");
  }
  return Z_Registration_Info_UScriptStruct_FSmartNameContainer.OuterSingleton;
}

// AddContainer @ 1475b1590

FSmartNameMapping * __thiscall
FSmartNameContainer::AddContainer(FSmartNameContainer *this,FName param_1)

{
  FSmartNameMapping *pFVar1;
  TKeyInitializer<FName_const_&> local_res8;
  FName local_res10;
  FName *local_res18;
  
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
  pFVar1 = TMapBase<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>_>
           ::Find((TMapBase<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>_>
                   *)this,local_res10);
  if (pFVar1 == (FSmartNameMapping *)0x0) {
    local_res18 = &local_res10;
    TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
                *)this,&local_res8,(bool *)&local_res18);
    pFVar1 = (FSmartNameMapping *)
             (*(longlong *)&this->NameMappings + (longlong)(int)local_res8.Key * 0x80 + 8);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
  return pFVar1;
}

// GetContainer @ 1475d3550

FSmartNameMapping * __thiscall
FSmartNameContainer::GetContainer(FSmartNameContainer *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  undefined1 *puVar3;
  FSmartNameMapping *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->NameMappings).field_0x8 != *(int *)&(this->NameMappings).field_0x34) {
    puVar3 = *(undefined1 **)&(this->NameMappings).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->NameMappings).field_0x38;
    }
    uVar1 = *(uint *)(puVar3 + (ulonglong)
                               (*(int *)&(this->NameMappings).field_0x48 - 1U &
                               param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x80 + *(longlong *)&this->NameMappings);
        if (*pFVar2 == param_1) {
          pFVar4 = (FSmartNameMapping *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FSmartNameMapping *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[0xf].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSmartNameMapping *)0x0;
}

// GetContainerInternal @ 1475d3560

FSmartNameMapping * __thiscall
FSmartNameContainer::GetContainerInternal(FSmartNameContainer *this,FName *param_1)

{
  FSmartNameMapping *pFVar1;
  
  pFVar1 = TMapBase<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>_>
           ::Find((TMapBase<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>_>
                   *)this,*param_1);
  return pFVar1;
}

// GetContainerInternal @ 1475d3570

FSmartNameMapping * __thiscall
FSmartNameContainer::GetContainerInternal(FSmartNameContainer *this,FName *param_1)

{
  FSmartNameMapping *pFVar1;
  
  pFVar1 = TMapBase<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>_>
           ::Find((TMapBase<FName,FSmartNameMapping,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>_>
                   *)this,*param_1);
  return pFVar1;
}

// PostLoad @ 1475e9f80

void __thiscall FSmartNameContainer::PostLoad(FSmartNameContainer *this)

{
  return;
}

// Serialize @ 1475f9ca0

void __thiscall
FSmartNameContainer::Serialize(FSmartNameContainer *this,FArchive *param_1,bool param_2)

{
  TSetPrivateFriend::
  Serialize<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
                      *)this);
  return;
}

