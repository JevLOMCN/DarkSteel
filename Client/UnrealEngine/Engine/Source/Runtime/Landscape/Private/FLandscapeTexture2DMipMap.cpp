// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// StaticStruct @ 145faddc0

UScriptStruct * __cdecl FLandscapeTexture2DMipMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeTexture2DMipMap.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeTexture2DMipMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap,(UObject *)pUVar1,
                         L"LandscapeTexture2DMipMap");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeTexture2DMipMap.OuterSingleton;
}

// Serialize @ 145fc7cc0

void __thiscall
FLandscapeTexture2DMipMap::Serialize
          (FLandscapeTexture2DMipMap *this,FArchive *param_1,UObject *param_2,uint param_3)

{
  TBulkData<unsigned_char> *this_00;
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->SizeX = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->SizeY;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bCompressed);
  this_00 = &this->BulkData;
  if ((param_1->field_0x28 & 4) == 0) {
    FBulkData::Serialize((FBulkData *)this_00,param_1,param_2,false,1,None);
  }
  else {
    uVar3 = FBulkData::GetBulkDataFlags((FBulkData *)this_00);
    FBulkData::SetBulkDataFlags((FBulkData *)this_00,param_3);
    FBulkData::Serialize((FBulkData *)this_00,param_1,param_2,false,1,None);
    FBulkData::ResetBulkDataFlags((FBulkData *)this_00,uVar3);
  }
  return;
}

