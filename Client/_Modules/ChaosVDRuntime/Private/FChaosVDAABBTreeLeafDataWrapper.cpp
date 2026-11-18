// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436cb140

UScriptStruct * __cdecl FChaosVDAABBTreeLeafDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper,(UObject *)pUVar1
                         ,L"ChaosVDAABBTreeLeafDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper.OuterSingleton;
}

// Serialize @ 1436daaf0

bool __thiscall
FChaosVDAABBTreeLeafDataWrapper::Serialize(FChaosVDAABBTreeLeafDataWrapper *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    TArrayPrivateFriend::Serialize<FChaosVDAABBTreePayloadBoundsElement,TSizedDefaultAllocator<32>_>
              (param_1,&this->Elements);
    UE::Math::operator<<(param_1,&this->Bounds);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

