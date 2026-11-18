// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// StaticStruct @ 14a89d780

UScriptStruct * __cdecl FPoseSearchInteractionAvailabilityEx::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailabilityEx.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailabilityEx.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchInteractionAvailabilityEx,
                         (UObject *)pUVar1,L"PoseSearchInteractionAvailabilityEx");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAvailabilityEx.OuterSingleton;
}

// GetPoseHistory @ 14a92bdf0

IPoseHistory * __thiscall
FPoseSearchInteractionAvailabilityEx::GetPoseHistory
          (FPoseSearchInteractionAvailabilityEx *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FAnimNode_PoseSearchHistoryCollector_Base *this_00;
  FPoseHistory *pFVar5;
  IPoseHistory *pIVar6;
  
  pIVar6 = this->PoseHistory;
  if (pIVar6 == (IPoseHistory *)0x0) {
    if (param_1 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        this_00 = UPoseSearchLibrary::FindPoseHistoryNode
                            (this->PoseHistoryName,(UAnimInstance *)param_1);
        if (this_00 != (FAnimNode_PoseSearchHistoryCollector_Base *)0x0) {
          pFVar5 = FAnimNode_PoseSearchHistoryCollector_Base::GetPoseHistory(this_00);
          return (IPoseHistory *)pFVar5;
        }
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                       ,0x6b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (IPoseHistory *)(*pcVar2)();
      return pIVar6;
    }
    pIVar6 = (IPoseHistory *)0x0;
  }
  return pIVar6;
}

// GetPoseHistoryName @ 14a92be90

FString * __thiscall
FPoseSearchInteractionAvailabilityEx::GetPoseHistoryName
          (FPoseSearchInteractionAvailabilityEx *this,FString *__return_storage_ptr__)

{
  if (this->PoseHistory != (IPoseHistory *)0x0) {
    ::FString::FString(__return_storage_ptr__,"HistoryProvider");
    return __return_storage_ptr__;
  }
  ::FName::ToString(&this->PoseHistoryName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

