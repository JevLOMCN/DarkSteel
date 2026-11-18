// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// StaticStruct @ 14df92d50

UScriptStruct * __cdecl FHairGroupInfoWithVisibility::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupInfoWithVisibility.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupInfoWithVisibility.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility,(UObject *)pUVar1,
                         L"HairGroupInfoWithVisibility");
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupInfoWithVisibility.OuterSingleton;
}

// FHairGroupInfoWithVisibility @ 14dfac2f0

FHairGroupInfoWithVisibility * __thiscall
FHairGroupInfoWithVisibility::FHairGroupInfoWithVisibility
          (FHairGroupInfoWithVisibility *this,FHairGroupInfoWithVisibility *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  
  plVar1 = &this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,_Src,(longlong)iVar3 << 3);
  }
  this->bIsVisible = param_1->bIsVisible;
  return this;
}

