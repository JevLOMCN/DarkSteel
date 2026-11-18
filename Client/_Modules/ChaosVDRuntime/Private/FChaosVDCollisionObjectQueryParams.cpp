// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c8b60

UScriptStruct * __cdecl FChaosVDCollisionObjectQueryParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionObjectQueryParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCollisionObjectQueryParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams,
                         (UObject *)pUVar1,L"ChaosVDCollisionObjectQueryParams");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCollisionObjectQueryParams.OuterSingleton;
}

// Serialize @ 1436dbbd0

bool __thiscall
FChaosVDCollisionObjectQueryParams::Serialize
          (FChaosVDCollisionObjectQueryParams *this,FArchive *param_1)

{
  uchar *puVar1;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ObjectTypesToQuery,1);
    }
    else {
      this->ObjectTypesToQuery = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->IgnoreMask,1);
    }
    else {
      this->IgnoreMask = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

