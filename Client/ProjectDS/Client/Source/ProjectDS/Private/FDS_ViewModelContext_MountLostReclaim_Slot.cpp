// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b69fbb0

UScriptStruct * __cdecl FDS_ViewModelContext_MountLostReclaim_Slot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MountLostReclaim_Slot.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MountLostReclaim_Slot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_MountLostReclaim_Slot,
                         (UObject *)pUVar1,L"DS_ViewModelContext_MountLostReclaim_Slot");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MountLostReclaim_Slot.OuterSingleton
  ;
}

// GetContext @ 14beedef0

TSharedPtr<FDS_ViewModelContext_MountLostReclaim_Slot,1> * __cdecl
FDS_ViewModelContext_MountLostReclaim_Slot::GetContext
          (TSharedPtr<FDS_ViewModelContext_MountLostReclaim_Slot,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_MountLostReclaim_Slot *pFVar3;
  FDS_ViewModelContext_MountLostReclaim_Slot *pFVar4;
  TSharedPtr<FDS_ViewModelContext_MountLostReclaim_Slot,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext_MountLostReclaim_Slot *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = ::operator_new(0x28);
  pFVar4 = (FDS_ViewModelContext_MountLostReclaim_Slot *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_MountLostReclaim_Slot *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_MountLostReclaim_Slot__6B_;
    pFVar3->LostListUID = 0;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_MountLostReclaim_Slot *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountLostReclaim_Slot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_MountLostReclaim_Slot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_MountLostReclaim_Slot,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (__return_storage_ptr__->Object != (FDS_ViewModelContext_MountLostReclaim_Slot *)0x0) {
    *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = 0x16d;
  }
  return __return_storage_ptr__;
}

