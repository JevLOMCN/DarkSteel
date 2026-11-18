// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// StaticStruct @ 14f09f590

UScriptStruct * __cdecl FSourceEffectEQSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectEQSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSourceEffectEQSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectEQSettings,(UObject *)pUVar1,
                         L"SourceEffectEQSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSourceEffectEQSettings.OuterSingleton;
}

// operator= @ 14f0c12c0

FSourceEffectEQSettings * __thiscall
FSourceEffectEQSettings::operator=(FSourceEffectEQSettings *this,FSourceEffectEQSettings *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->EQBands).ArrayMax;
    piVar1 = &(this->EQBands).ArrayMax;
    _Src = (param_1->EQBands).AllocatorInstance.Data;
    iVar3 = (param_1->EQBands).ArrayNum;
    (this->EQBands).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->EQBands).AllocatorInstance.Data,_Src,(longlong)iVar3 << 4);
    }
  }
  return this;
}

