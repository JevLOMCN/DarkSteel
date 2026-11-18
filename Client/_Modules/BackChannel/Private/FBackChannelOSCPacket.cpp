// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 3

// ~FBackChannelOSCPacket @ 14e7f3830

void __thiscall FBackChannelOSCPacket::~FBackChannelOSCPacket(FBackChannelOSCPacket *this)

{
  *this = (FBackChannelOSCPacket)&___7FBackChannelOSCPacket__6B_;
  return;
}

// CreateFromBuffer @ 14e7f5420

TSharedPtr<FBackChannelOSCPacket,1> * __cdecl
FBackChannelOSCPacket::CreateFromBuffer
          (TSharedPtr<FBackChannelOSCPacket,1> *__return_storage_ptr__,void *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBackChannelOSCBundle *pFVar5;
  TSharedPtr<FBackChannelOSCPacket,1> *pTVar6;
  size_t sVar7;
  TSharedPtr<FBackChannelOSCMessage,1> *pTVar8;
  int *piVar9;
  TRawPtrProxy<FBackChannelOSCBundle> local_res10;
  TSharedPtr<FBackChannelOSCBundle,1> local_38;
  TSharedPtr<FBackChannelOSCMessage,1> local_28;
  
  if (param_1 != (void *)0x0) {
    if (param_2 < 7) {
      if (param_2 < 0) goto LAB_14e7f564e;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp(param_1,"#bundle");
      if (iVar4 == 0) {
        pFVar5 = ::operator_new(0x28);
        local_res10.Object = (FBackChannelOSCBundle *)0x0;
        if (pFVar5 != (FBackChannelOSCBundle *)0x0) {
          (pFVar5->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar5->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
          (pFVar5->Elements).ArrayNum = 0;
          (pFVar5->Elements).ArrayMax = 0;
          pFVar5->Mode = Read;
          local_res10.Object = pFVar5;
        }
        TSharedPtr<FBackChannelOSCBundle,1>::
        TSharedPtr<FBackChannelOSCBundle,1><FBackChannelOSCBundle>(&local_38,&local_res10);
        iVar4 = strcmp(param_1,FBackChannelOSCBundle::BundleHeader);
        if ((iVar4 != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("FCStringAnsi::Strcmp(Header, BundleHeader) == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCBundle.cpp"
                               ,0x7a,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FBackChannelOSCPacket,1> *)(*pcVar2)();
          return pTVar6;
        }
        sVar7 = strlen(FBackChannelOSCBundle::BundleHeader);
        if ((local_38.Object == (FBackChannelOSCBundle *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FBackChannelOSCPacket,1> *)(*pcVar2)();
          return pTVar6;
        }
        piVar9 = (int *)((longlong)((int)sVar7 + 1) + 8 + (longlong)param_1);
        (local_38.Object)->TimeTag = 0;
        do {
          if ((int *)((longlong)param_1 + (longlong)param_2) <= piVar9) goto LAB_14e7f55b7;
          iVar4 = *piVar9;
          if ((local_38.Object == (FBackChannelOSCBundle *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TSharedPtr<FBackChannelOSCPacket,1> *)(*pcVar2)();
            return pTVar6;
          }
          FBackChannelOSCBundle::AddElement(local_38.Object,piVar9 + 1,iVar4);
          piVar9 = (int *)((longlong)(piVar9 + 1) + (longlong)iVar4);
        } while (piVar9 <= (int *)((longlong)param_1 + (longlong)param_2));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("pData <= pDataEnd",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCBundle.cpp"
                           ,0x8d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FBackChannelOSCPacket,1> *)(*pcVar2)();
          return pTVar6;
        }
LAB_14e7f55b7:
        __return_storage_ptr__->Object = (FBackChannelOSCPacket *)local_38.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_38.SharedReferenceCount.ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
    }
    iVar4 = FGenericPlatformStricmp::Strnicmp(param_1,"",0);
    if (iVar4 == 0) {
      pTVar8 = FBackChannelOSCMessage::CreateFromBuffer(&local_28,param_1,param_2);
      __return_storage_ptr__->Object = (FBackChannelOSCPacket *)pTVar8->Object;
      pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
LAB_14e7f564e:
  __return_storage_ptr__->Object = (FBackChannelOSCPacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetType @ 14e7f6a90

OSCPacketType __cdecl FBackChannelOSCPacket::GetType(void *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (void *)0x0) {
    return Invalid;
  }
  if (param_2 < 7) {
    if (param_2 < 0) {
      return Invalid;
    }
  }
  else {
    iVar1 = FGenericPlatformStricmp::Stricmp(param_1,"#bundle");
    if (iVar1 == 0) {
      return Bundle;
    }
  }
  iVar1 = FGenericPlatformStricmp::Strnicmp(param_1,"",0);
  return (OSCPacketType)(iVar1 == 0);
}

