// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5de4d0

UScriptStruct * __cdecl FDS_ViewModelContext_ItemDetailInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ItemDetailInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ItemDetailInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_ItemDetailInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_ItemDetailInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_ItemDetailInfo.OuterSingleton;
}

// FDS_ViewModelContext_ItemDetailInfo @ 14b5e9460

FDS_ViewModelContext_ItemDetailInfo * __thiscall
FDS_ViewModelContext_ItemDetailInfo::FDS_ViewModelContext_ItemDetailInfo
          (FDS_ViewModelContext_ItemDetailInfo *this)

{
  undefined8 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemDetailInfo__6B_;
  this->ItemTID = 0;
  local_res8 = 0;
  (this->ItemData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ItemData_Comparison).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemData_Comparison).WeakPtr,(FObjectPtr)&local_res8);
  this->InfoType = Normal;
  this->PopupType = FocusPopup;
  this->bCloseWindow = false;
  *(undefined8 *)&this->OnClickCloseDelegate = 0;
  *(undefined8 *)&(this->OnClickCloseDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickCloseDelegate).field_0x10 = 0;
  return this;
}

