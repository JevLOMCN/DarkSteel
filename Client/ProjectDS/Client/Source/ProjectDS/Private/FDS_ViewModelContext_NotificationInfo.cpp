// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5ee3f0

UScriptStruct * __cdecl FDS_ViewModelContext_NotificationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NotificationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NotificationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_NotificationInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_NotificationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NotificationInfo.OuterSingleton;
}

// ~FDS_ViewModelContext_NotificationInfo @ 14b5f79c0

void __thiscall
FDS_ViewModelContext_NotificationInfo::~FDS_ViewModelContext_NotificationInfo
          (FDS_ViewModelContext_NotificationInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NotificationMessageText).FormatArgs.AllocatorInstance.Data,
             (this->NotificationMessageText).FormatArgs.ArrayNum);
  pFVar1 = (this->NotificationMessageText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NotificationMessageText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickNotificationSlot);
  pvVar2 = *(void **)&(this->OnClickNotificationSlot).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickNotificationSlot);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

