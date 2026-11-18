// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FLiveTabSearch @ 1426fc230

FLiveTabSearch * __thiscall
FTabManager::FLiveTabSearch::FLiveTabSearch(FLiveTabSearch *this,FName param_1)

{
  this->SearchForTabId = param_1;
  this->_padding_ = (longlong)&___7FLiveTabSearch_FTabManager__6B_;
  return this;
}

// Search @ 142783cc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::FLiveTabSearch::Search
          (FLiveTabSearch *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabManager *param_1,
          FName param_2,TSharedRef<SDockTab,1> *param_3)

{
  FTabId local_18;
  
  local_18.InstanceId = -1;
  local_18.Flags = SaveLayout;
  local_18.TabType = this->SearchForTabId;
  if (local_18.TabType == (FName)0x0) {
    local_18.TabType = param_2;
  }
  FindExistingLiveTab(param_1,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

