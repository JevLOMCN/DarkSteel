// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149854c40

UScriptStruct * __cdecl FPCGWorldVolumetricQueryParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldVolumetricQueryParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGWorldVolumetricQueryParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams,(UObject *)pUVar1,
                         L"PCGWorldVolumetricQueryParams");
  }
  return Z_Registration_Info_UScriptStruct_FPCGWorldVolumetricQueryParams.OuterSingleton;
}

// Initialize @ 1498cb270

void __thiscall FPCGWorldVolumetricQueryParams::Initialize(FPCGWorldVolumetricQueryParams *this)

{
  longlong *this_00;
  int iVar1;
  FName *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  FName FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_38;
  
  this_00 = &this->_padding_;
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
    return;
  }
  PCGHelpers::GetStringArrayFromCommaSeparatedList(&TStack_38,(FString *)&this->_padding_);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
  iVar1 = TStack_38.ArrayNum;
  pFVar5 = TStack_38.AllocatorInstance.Data + (longlong)TStack_38.ArrayNum * 0x10;
  FVar4.Data = TStack_38.AllocatorInstance.Data;
  while( true ) {
    if (TStack_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&FStackX_8)
      ;
    }
    if (FVar4.Data == pFVar5) break;
    iVar3 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(aFStackX_18,iVar3,*(wchar_t **)FVar4.Data,FNAME_Add);
    FStackX_8 = *pFVar2;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,&FStackX_10,
               (bool *)&FStackX_8);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)TStack_38.AllocatorInstance.Data,TStack_38.ArrayNum);
  if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_38.AllocatorInstance.Data);
  }
  return;
}

// PostSerialize @ 1498d29e0

void __thiscall
FPCGWorldVolumetricQueryParams::PostSerialize
          (FPCGWorldVolumetricQueryParams *this,FArchive *param_1)

{
  return;
}

