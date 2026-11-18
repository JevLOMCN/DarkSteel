// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 3

// StaticStruct @ 14b2bb0c0

UScriptStruct * __cdecl FWaveTableSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWaveTableSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UScriptStruct_FWaveTableSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableSettings,(UObject *)pUVar1,
                         L"WaveTableSettings");
  }
  return Z_Registration_Info_UScriptStruct_FWaveTableSettings.OuterSingleton;
}

// GetEditSourceBounds @ 14b2bf3f0

void __thiscall
FWaveTableSettings::GetEditSourceBounds(FWaveTableSettings *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  *param_2 = 0;
  iVar1 = FWaveTableData::GetNumSamples(&this->SourceData);
  if (0 < iVar1) {
    *param_2 = iVar1;
    iVar3 = iVar1;
    if (0.0 < this->Top) {
      iVar2 = WaveTable::RatioToIndex(this->Top,iVar1);
      if (iVar2 < iVar1) {
        iVar3 = iVar2;
      }
      *param_1 = iVar3;
      *param_2 = *param_2 - iVar3;
      iVar3 = *param_2;
    }
    if (0.0 < this->Tail) {
      iVar2 = (int)((float)iVar1 * this->Tail);
      if (iVar1 + -1 < iVar2) {
        iVar2 = iVar1 + -1;
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
      iVar3 = iVar3 - iVar1;
    }
    iVar1 = 0;
    if (0 < iVar3) {
      iVar1 = iVar3;
    }
    *param_2 = iVar1;
  }
  return;
}

// GetEditSourceView @ 14b2bf4b0

TArrayView<float_const_,int> * __thiscall
FWaveTableSettings::GetEditSourceView
          (FWaveTableSettings *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (float *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

