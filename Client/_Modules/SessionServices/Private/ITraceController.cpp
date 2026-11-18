// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 2

// ~ITraceController @ 148ceedd0

void __thiscall ITraceController::~ITraceController(ITraceController *this)

{
  return;
}

// Create @ 148cf0840

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ITraceController,1> * __cdecl
ITraceController::Create
          (TSharedPtr<ITraceController,1> *__return_storage_ptr__,TSharedPtr<IMessageBus,1> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  FTraceController *this;
  TSharedPtr<ITraceController,1> *pTVar3;
  FTraceController *pFVar4;
  FTraceController *pFVar5;
  TRawPtrProxy<FTraceController> local_res8;
  TSharedRef<IMessageBus,1> local_18;
  
  pFVar4 = (FTraceController *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  this = ::operator_new(0x100);
  pFVar5 = pFVar4;
  if (this != (FTraceController *)0x0) {
    if ((param_1->Object == (IMessageBus *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<ITraceController,1> *)(*pcVar1)();
      return pTVar3;
    }
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    local_18.Object = param_1->Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_18.Object == (IMessageBus *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<ITraceController,1> *)(*pcVar1)();
      return pTVar3;
    }
    pFVar4 = FTraceController::FTraceController(this,&local_18);
    pFVar5 = (FTraceController *)&DAT_00000001;
  }
  local_res8.Object = pFVar4;
  TSharedPtr<ITraceController,1>::TSharedPtr<ITraceController,1><FTraceController>
            (__return_storage_ptr__,&local_res8);
  if (pFVar5 != (FTraceController *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

