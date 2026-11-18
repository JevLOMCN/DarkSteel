// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Build @ 14bb52a30

FSocket * __thiscall FUdpSocketBuilder::Build(FUdpSocketBuilder *this)

{
  int iVar1;
  undefined4 uVar2;
  FIPv4Address_u_0 FVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  char cVar7;
  FNameEntryId FVar8;
  FName *pFVar9;
  ISocketSubsystem *pIVar10;
  FOutputDeviceRedirector *pFVar11;
  FSocket *pFVar12;
  undefined8 uVar13;
  undefined4 extraout_var;
  FSocket *pFVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  TSharedRef<FInternetAddr,1> *pTVar17;
  ulonglong uVar18;
  FSharedReferencer<1> FVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *this_00;
  uint local_res10 [2];
  FOutputDeviceRedirector *local_res18;
  undefined1 local_res20 [8];
  longlong *local_168;
  FSharedReferencer<1> FStack_160;
  longlong *local_158;
  TReferenceControllerBase<1> *local_150;
  undefined4 local_148;
  undefined4 local_144;
  FIPv4Address_u_0 local_140;
  undefined2 local_13c;
  longlong *local_138;
  TReferenceControllerBase<1> *local_130;
  longlong *local_128;
  TReferenceControllerBase<1> *local_120;
  longlong *local_118;
  TReferenceControllerBase<1> *local_110;
  undefined1 local_108 [4];
  longlong local_104;
  longlong *local_f8;
  code *local_f0;
  FScriptContainerElement *local_e8;
  undefined8 local_e0;
  FSharedReferencer<1> local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  FString local_c0;
  FName local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  FString local_90;
  FString local_80;
  FString local_70;
  TSharedRef<FInternetAddr,1> local_60;
  FString local_50;
  
  pFVar9 = ::FName::FName(&local_b0,L"WINDOWS");
  pIVar10 = ISocketSubsystem::Get(pFVar9);
  if (pIVar10 == (ISocketSubsystem *)0x0) {
    pFVar11 = GetGlobalLogSingleton();
    FOutputDevice::Log((FOutputDevice *)pFVar11,
                       L"FUdpSocketBuilder: Failed to load socket subsystem");
    return (FSocket *)0x0;
  }
  if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                         ,0x72,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FSocket *)(*pcVar4)();
    return pFVar12;
  }
  (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
            (FIPv4Endpoint::CachedSocketSubsystem,&local_158);
  (**(code **)(*local_158 + 0x18))(local_158,(this->BoundEndpoint).Address.field0_0x0.Value);
  (**(code **)(*local_158 + 0x28))(local_158,(this->BoundEndpoint).Port);
  pcVar4 = *(code **)(pIVar10->_padding_ + 0x18);
  uVar13 = (**(code **)(*local_158 + 0xa8))(local_158,local_a8);
  if ((this->Description).Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(this->Description).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_c0,pwVar20);
  FVar8 = FNameEntryId::FromValidEName((EName)local_108);
  pFVar12 = (FSocket *)0x0;
  local_148 = *(undefined4 *)CONCAT44(extraout_var,FVar8.Value);
  local_144 = 0;
  pFVar14 = (FSocket *)(*pcVar4)(pIVar10,&local_148,&local_c0,uVar13);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (pFVar14 == (FSocket *)0x0) {
    pFVar11 = GetGlobalLogSingleton();
    FOutputDevice::LogfImpl
              ((FOutputDevice *)pFVar11,L"FUdpSocketBuilder: Failed to create socket %s");
    pFVar12 = (FSocket *)0x0;
  }
  else {
    cVar7 = (**(code **)(pFVar14->_padding_ + 0xa0))(pFVar14,this->Blocking == false);
    if ((((cVar7 == '\0') ||
         (cVar7 = (**(code **)(pFVar14->_padding_ + 0xf0))(pFVar14,this->Reusable), cVar7 == '\0'))
        || (cVar7 = (**(code **)(pFVar14->_padding_ + 0xa8))(pFVar14,this->AllowBroadcast),
           cVar7 == '\0')) ||
       (cVar7 = (**(code **)(pFVar14->_padding_ + 0x100))(pFVar14,1), cVar7 == '\0')) {
      (**(code **)(pIVar10->_padding_ + 0xb8))(pIVar10);
      pFVar11 = GetGlobalLogSingleton();
      FOutputDevice::LogfImpl
                ((FOutputDevice *)pFVar11,
                 L"FUdpSocketBuilder: Failed to configure %s (blocking: %i, reusable: %i, broadcast: %i). Error code %d."
                );
      (**(code **)(pIVar10->_padding_ + 0x38))(pIVar10,pFVar14);
    }
    else if ((this->Bound == false) ||
            (cVar7 = (**(code **)(pFVar14->_padding_ + 0x20))(pFVar14,local_158), cVar7 != '\0')) {
      cVar7 = (**(code **)(pFVar14->_padding_ + 0xd8))(pFVar14,this->MulticastLoopback);
      if ((cVar7 != '\0') &&
         (cVar7 = (**(code **)(pFVar14->_padding_ + 0xe0))(pFVar14,this->MulticastTtl),
         cVar7 != '\0')) {
        pcVar4 = *(code **)(pIVar10->_padding_ + 0x88);
        puVar15 = (undefined8 *)(**(code **)(*local_158 + 0xa8))(local_158,local_a0);
        (*pcVar4)(pIVar10,&local_128,*puVar15);
        (**(code **)(*local_128 + 0x70))();
        iVar1 = (this->JoinedGroups).ArrayNum;
        uVar18 = (ulonglong)iVar1;
        this_00 = (this->JoinedGroups).AllocatorInstance.Data;
        FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_res18 = (FOutputDeviceRedirector *)CONCAT44(local_res18._4_4_,iVar1);
        local_e8 = this_00 + uVar18 * 8;
        do {
          pFVar5 = local_e8;
          if ((this->JoinedGroups).ArrayNum != (int)uVar18) {
            local_res10[0] = local_res10[0] & 0xffffff00;
            `TCheckedPointerIterator<FUdpSocketBuilder::FMulticastGroup_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res10);
          }
          if (this_00 == pFVar5) {
            FVar3 = (FIPv4Address_u_0)(this->MulticastInterface).field0_0x0.Value;
            if ((FIPv4Address_u_0)FVar3.Value != FIPv4Address::Any.field0_0x0) {
              pcVar4 = *(code **)(pFVar14->_padding_ + 0xe8);
              local_13c = 0;
              local_140 = FVar3;
              pTVar17 = FIPv4Endpoint::ToInternetAddr((FIPv4Endpoint *)&local_140._s_0,&local_60);
              cVar7 = (*pcVar4)(pFVar14,pTVar17->Object);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_60.SharedReferenceCount.ReferenceController);
              if (cVar7 == '\0') {
                (**(code **)(pIVar10->_padding_ + 0xb8))(pIVar10);
                pFVar11 = GetGlobalLogSingleton();
                FIPv4Address::ToString(&this->MulticastInterface,&local_50);
                FOutputDevice::LogfImpl
                          ((FOutputDevice *)pFVar11,
                           L"FUdpSocketBuilder: Failed to set multicast outgoing interface for %s to %s. Error code %d."
                          );
                goto LAB_14bb53075;
              }
            }
            if ((0 < this->ReceiveBufferSize) &&
               (cVar7 = (**(code **)(pFVar14->_padding_ + 0x110))
                                  (pFVar14,this->ReceiveBufferSize,local_res20), cVar7 == '\0')) {
              (**(code **)(pIVar10->_padding_ + 0xb8))(pIVar10);
              pFVar11 = GetGlobalLogSingleton();
              FOutputDevice::LogfImpl
                        ((FOutputDevice *)pFVar11,
                         L"FUdpSocketBuilder: Warning - could not set receive buffer size to %d for %s. Error code %d."
                        );
            }
            if ((0 < this->SendBufferSize) &&
               (cVar7 = (**(code **)(pFVar14->_padding_ + 0x108))
                                  (pFVar14,this->SendBufferSize,local_res20), cVar7 == '\0')) {
              (**(code **)(pIVar10->_padding_ + 0xb8))(pIVar10);
              pFVar11 = GetGlobalLogSingleton();
              FOutputDevice::LogfImpl
                        ((FOutputDevice *)pFVar11,
                         L"FUdpSocketBuilder: Warning - could not set send buffer size to %d for %s. Error code %d."
                        );
            }
            goto LAB_14bb53144;
          }
          if ((((this_00[3] == (FScriptContainerElement)0xe6) &&
               (this_00[2] == (FScriptContainerElement)0x0)) &&
              (this_00[1] == (FScriptContainerElement)0x0)) &&
             (*this_00 == (FScriptContainerElement)0x1)) {
            plVar16 = (longlong *)(**(code **)(*local_128 + 0xa8))(local_128,local_98);
            FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
            if (*plVar16 == local_104) goto LAB_14bb52dc3;
            local_d8.ReferenceController = local_120;
            if (local_120 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_120->SharedReferenceCount =
                   (atomic<int>)((int)local_120->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_168 = local_128;
            local_e0 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_160,&local_d8);
            FVar19.ReferenceController = local_d8.ReferenceController;
          }
          else {
LAB_14bb52dc3:
            uVar2 = *(undefined4 *)this_00;
            if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                                   ,0x72,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar12 = (FSocket *)(*pcVar4)();
              return pFVar12;
            }
            (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
                      (FIPv4Endpoint::CachedSocketSubsystem,&local_138);
            (**(code **)(*local_138 + 0x18))(local_138,uVar2);
            (**(code **)(*local_138 + 0x28))(local_138,0);
            local_c8.ReferenceController = local_130;
            if (local_130 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_130->SharedReferenceCount =
                   (atomic<int>)((int)local_130->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_168 = local_138;
            local_d0 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_160,&local_c8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c8.ReferenceController);
            FVar19.ReferenceController = local_130;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar19.ReferenceController);
          uVar2 = *(undefined4 *)(this_00 + 4);
          local_f0 = *(code **)(pFVar14->_padding_ + 0xb8);
          if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                                 ,0x72,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar12 = (FSocket *)(*pcVar4)();
            return pFVar12;
          }
          (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
                    (FIPv4Endpoint::CachedSocketSubsystem,&local_118);
          (**(code **)(*local_118 + 0x18))(local_118,uVar2);
          (**(code **)(*local_118 + 0x28))(local_118,0);
          local_f8 = local_118;
          if ((local_168 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar12 = (FSocket *)(*pcVar4)();
            return pFVar12;
          }
          cVar7 = (*local_f0)(pFVar14,local_168,local_f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_110);
          if (cVar7 == '\0') goto LAB_14bb52f3b;
          uVar18 = (ulonglong)local_res18 & 0xffffffff;
          this_00 = this_00 + 8;
        } while( true );
      }
      (**(code **)(pIVar10->_padding_ + 0xb8))(pIVar10);
      pFVar11 = GetGlobalLogSingleton();
      FOutputDevice::LogfImpl
                ((FOutputDevice *)pFVar11,
                 L"FUdpSocketBuilder: Failed to configure multicast for %s (loopback: %i, ttl: %i). Error code %d."
                );
      (**(code **)(pIVar10->_padding_ + 0x38))(pIVar10,pFVar14);
      pFVar12 = (FSocket *)0x0;
    }
    else {
      (**(code **)(pIVar10->_padding_ + 0xb8))(pIVar10);
      pFVar11 = GetGlobalLogSingleton();
      FIPv4Endpoint::ToString(&this->BoundEndpoint,&local_90);
      FOutputDevice::LogfImpl
                ((FOutputDevice *)pFVar11,
                 L"FUdpSocketBuilder: Failed to bind %s to %s. Error code %d.");
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      (**(code **)(pIVar10->_padding_ + 0x38))(pIVar10,pFVar14);
      pFVar12 = (FSocket *)0x0;
    }
  }
LAB_14bb53206:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  return pFVar12;
LAB_14bb52f3b:
  local_res10[0] = (**(code **)(pIVar10->_padding_ + 0xb8))(pIVar10);
  local_res18 = GetGlobalLogSingleton();
  FIPv4Address::ToString((FIPv4Address *)(this_00 + 4),&local_70);
  FIPv4Address::ToString((FIPv4Address *)this_00,&local_80);
  FOutputDevice::LogfImpl
            ((FOutputDevice *)local_res18,
             L"FUdpSocketBuilder: Failed to subscribe %s to multicast group %s on interface %s. Error code %d."
            );
  local_50.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
    local_50.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
  }
LAB_14bb53075:
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  (**(code **)(pIVar10->_padding_ + 0x38))(pIVar10,pFVar14);
  pFVar14 = (FSocket *)0x0;
LAB_14bb53144:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  pFVar12 = pFVar14;
  goto LAB_14bb53206;
}

