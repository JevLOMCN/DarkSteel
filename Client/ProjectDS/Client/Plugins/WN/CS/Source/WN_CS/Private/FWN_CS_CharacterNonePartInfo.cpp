// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 2

// StaticStruct @ 14a69d8f0

UScriptStruct * __cdecl FWN_CS_CharacterNonePartInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterNonePartInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_CharacterNonePartInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_CharacterNonePartInfo,(UObject *)pUVar1,
                         L"WN_CS_CharacterNonePartInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterNonePartInfo.OuterSingleton;
}

// operator= @ 14a6a2fd0

FWN_CS_CharacterNonePartInfo * __thiscall
FWN_CS_CharacterNonePartInfo::operator=
          (FWN_CS_CharacterNonePartInfo *this,FWN_CS_CharacterNonePartInfo *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->LightInfoArray).ArrayMax;
    piVar1 = &(this->LightInfoArray).ArrayMax;
    _Src = (param_1->LightInfoArray).AllocatorInstance.Data;
    iVar3 = (param_1->LightInfoArray).ArrayNum;
    (this->LightInfoArray).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->LightInfoArray).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x60);
    }
  }
  return this;
}

