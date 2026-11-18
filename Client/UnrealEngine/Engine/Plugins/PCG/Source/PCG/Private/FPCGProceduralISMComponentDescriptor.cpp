// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149729690

UScriptStruct * __cdecl FPCGProceduralISMComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGProceduralISMComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGProceduralISMComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGProceduralISMComponentDescriptor,
                         (UObject *)pUVar1,L"PCGProceduralISMComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FPCGProceduralISMComponentDescriptor.OuterSingleton;
}

// operator= @ 14973f560

FPCGProceduralISMComponentDescriptor * __thiscall
FPCGProceduralISMComponentDescriptor::operator=
          (FPCGProceduralISMComponentDescriptor *this,FPCGSoftISMComponentDescriptor *param_1)

{
  FProceduralISMComponentDescriptor::operator=
            ((FProceduralISMComponentDescriptor *)this,(FSoftISMComponentDescriptor *)param_1);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->ComponentTags,&param_1->ComponentTags)
  ;
  return this;
}

// operator== @ 14973f820

bool __thiscall
FPCGProceduralISMComponentDescriptor::operator==
          (FPCGProceduralISMComponentDescriptor *this,FPCGProceduralISMComponentDescriptor *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = FProceduralISMComponentDescriptor::operator==
                    ((FProceduralISMComponentDescriptor *)this,
                     (FProceduralISMComponentDescriptor *)param_1);
  if ((bVar2) &&
     (iVar1 = (this->ComponentTags).ArrayNum, iVar1 == (param_1->ComponentTags).ArrayNum)) {
    bVar2 = CompareItems<FName,int>
                      ((FName *)(this->ComponentTags).AllocatorInstance.Data,
                       (FName *)(param_1->ComponentTags).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

