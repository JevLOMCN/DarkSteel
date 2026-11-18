// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 1

// Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141e0b1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TSharedPtr<FJsonObject,1> *param_1,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_38;
  TSharedPtr<FJsonObject,1> local_28;
  
  pTVar4 = ::operator_new(0x38);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_38.Object = ___xmm_00000000000000000000000000000010;
    local_38.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5 = ::operator_new(0x30);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4[2]._padding_ = 0x10;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      local_28.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      local_28.Object = param_1->Object;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar5 + 1),&local_28);
      if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      pTVar4[2]._padding_ = (longlong)(pTVar5 + 1);
      *(TReferenceControllerBase<1> **)&pTVar4[2].SharedReferenceCount = pTVar5;
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      pTVar6 = pTVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_38.Object = (FElement *)(pTVar4 + 1);
    *(undefined2 *)&pTVar4[3]._padding_ = 0;
    local_38.SharedReferenceCount.ReferenceController = pTVar4;
    if (local_38.Object == (FElement *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  bVar2 = Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_38,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return bVar2;
}

