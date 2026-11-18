// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b4614e0

UScriptStruct * __cdecl FDS_SlotInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_SlotInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_SlotInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_SlotInfo,(UObject *)pUVar1,L"DS_SlotInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_SlotInfo.OuterSingleton;
}

// GetSlotInfo<FDS_ItemSlotInfo> @ 14bcdba60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDS_ItemSlotInfo * __thiscall FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>(FDS_SlotInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_ItemSlotInfo *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDS_SlotInfoBase *pFVar5;
  FDS_SlotInfo local_18;
  
  if ((this->SlotInfo).Object != (FDS_SlotInfoBase *)0x0) {
    return (FDS_ItemSlotInfo *)(this->SlotInfo).Object;
  }
  local_18.SlotInfo.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (local_18.SlotInfo.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    local_18.SlotInfo.Object = ___xmm_00000000000000000000000000000010;
    pFVar5 = (FDS_SlotInfoBase *)&DAT_00000010;
    local_18.SlotInfo.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    (local_18.SlotInfo.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    pFVar5 = (FDS_SlotInfoBase *)(local_18.SlotInfo.SharedReferenceCount.ReferenceController + 1);
    (local_18.SlotInfo.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)0x1;
    (local_18.SlotInfo.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFDS_ItemSlotInfo___00_SharedPointerInternals__6B_;
    local_18.SlotInfo.SharedReferenceCount.ReferenceController[1]._padding_ =
         (longlong)&___7FDS_ItemSlotInfo__6B_;
    *(undefined8 *)&local_18.SlotInfo.SharedReferenceCount.ReferenceController[1].WeakReferenceCount
         = 0;
    *(undefined8 *)
     ((longlong)&local_18.SlotInfo.SharedReferenceCount.ReferenceController[2]._padding_ + 4) = 0;
    *(undefined1 *)
     ((longlong)&local_18.SlotInfo.SharedReferenceCount.ReferenceController[3]._padding_ + 1) = 0;
    *(undefined4 *)
     ((longlong)&local_18.SlotInfo.SharedReferenceCount.ReferenceController[3]._padding_ + 4) = 0;
    local_18.SlotInfo.SharedReferenceCount.ReferenceController[3].SharedReferenceCount =
         (atomic<int>)0x0;
    local_18.SlotInfo.SharedReferenceCount.ReferenceController[3].WeakReferenceCount =
         (atomic<int>)0x0;
    local_18.SlotInfo.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    if (pFVar5 == (FDS_SlotInfoBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FDS_ItemSlotInfo *)(*pcVar1)();
        return pFVar3;
      }
    }
    LOCK();
    (local_18.SlotInfo.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SlotInfo.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
    pTVar4 = local_18.SlotInfo.SharedReferenceCount.ReferenceController;
    local_18.SlotInfo.Object = pFVar5;
  }
  if (this != &local_18) {
    (this->SlotInfo).Object = pFVar5;
    local_18.SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SlotInfo).SharedReferenceCount,&local_18.SlotInfo.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SlotInfo.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (FDS_ItemSlotInfo *)(this->SlotInfo).Object;
}

