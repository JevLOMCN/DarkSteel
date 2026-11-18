// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// StaticStruct @ 142459f80

UScriptStruct * __cdecl FTypeface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTypeface.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FTypeface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypeface,(UObject *)pUVar1,L"Typeface");
  }
  return Z_Registration_Info_UScriptStruct_FTypeface.OuterSingleton;
}

// operator= @ 14247a1a0

FTypeface * __thiscall FTypeface::operator=(FTypeface *this,FTypeface *param_1)

{
  int *piVar1;
  int iVar2;
  FTypefaceEntry *pFVar3;
  
  if (this != param_1) {
    DestructItems<FTypefaceEntry,int>
              ((FTypefaceEntry *)(this->Fonts).AllocatorInstance.Data,(this->Fonts).ArrayNum);
    iVar2 = (param_1->Fonts).ArrayNum;
    piVar1 = &(this->Fonts).ArrayMax;
    pFVar3 = (FTypefaceEntry *)(param_1->Fonts).AllocatorInstance.Data;
    (this->Fonts).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FTypefaceEntry,FTypefaceEntry,int>
              ((this->Fonts).AllocatorInstance.Data,pFVar3,iVar2);
  }
  return this;
}

// AppendFont @ 142480730

FTypeface * __thiscall
FTypeface::AppendFont
          (FTypeface *this,FName *param_1,FString *param_2,EFontHinting param_3,
          EFontLoadingPolicy param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName *pFVar4;
  FString local_18;
  
  iVar3 = (this->Fonts).ArrayNum;
  piVar1 = &(this->Fonts).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Fonts).ArrayNum = iVar3 + 1;
  local_18.Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  pFVar4 = (FName *)((this->Fonts).AllocatorInstance.Data + (longlong)iVar3 * 0x30);
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_18.Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  *pFVar4 = *param_1;
  FFontData::FFontData((FFontData *)(pFVar4 + 1),&local_18,param_3,param_4,0);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

