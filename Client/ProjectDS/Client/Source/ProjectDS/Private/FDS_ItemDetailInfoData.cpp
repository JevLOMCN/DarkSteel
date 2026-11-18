// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b4d0270

UScriptStruct * __cdecl FDS_ItemDetailInfoData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemDetailInfoData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ItemDetailInfoData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ItemDetailInfoData,(UObject *)pUVar1,
                         L"DS_ItemDetailInfoData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ItemDetailInfoData.OuterSingleton;
}

// GetWindowWidgetType @ 14bb112b0

EDS_WindowWidget __cdecl FDS_ItemDetailInfoData::GetWindowWidgetType(EDS_ItemDetailInfoType param_1)

{
  EDS_WindowWidget EVar1;
  
  if ((param_1 == Normal) || (EVar1 = ItemDetailInfoComparison, param_1 != Comparison)) {
    EVar1 = ItemDetailInfo;
  }
  return EVar1;
}

// Reset @ 14bb32a70

void __thiscall FDS_ItemDetailInfoData::Reset(FDS_ItemDetailInfoData *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->ItemTID = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->ItemData).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->ItemData_Comparison).WeakPtr = local_res8;
  this->PopupType = FocusPopup;
  this->Init = false;
  return;
}

