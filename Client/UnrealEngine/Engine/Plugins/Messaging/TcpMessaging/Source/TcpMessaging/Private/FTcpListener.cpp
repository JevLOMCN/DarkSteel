// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 4

// Exit @ 14eaca830

void __thiscall FTcpListener::Exit(FTcpListener *this)

{
  return;
}

// Init @ 14eacb3d0

bool __thiscall FTcpListener::Init(FTcpListener *this)

{
  FIPv4Address FVar1;
  ForAnyElementType _Src;
  FSocket *pFVar2;
  undefined2 uStack_14e;
  FString local_148;
  undefined1 local_138;
  int local_134;
  undefined1 local_130;
  undefined4 local_12c;
  int local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_117;
  FIPv4Endpoint local_114;
  FString local_108;
  undefined1 local_f8;
  int local_f4;
  undefined1 local_f0;
  int local_ec;
  int local_e8;
  undefined1 local_e4;
  int local_e0;
  undefined1 local_d8;
  undefined1 local_d7;
  FIPv4Endpoint local_d4;
  FString local_c8;
  undefined1 local_b8;
  int local_b4;
  undefined1 local_b0;
  int local_ac;
  int local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  FIPv4Endpoint local_94;
  FString local_88;
  undefined1 local_78;
  int local_74;
  undefined1 local_70;
  undefined4 local_6c;
  int local_68;
  undefined1 local_64;
  undefined4 local_60;
  FString local_58;
  FTcpSocketBuilder local_48;
  
  if (this->Socket == (FSocket *)0x0) {
    ::FString::FString(&local_58,L"FTcpListener server");
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    FVar1 = FIPv4Address::Any;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_148.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_148,local_58.Data.ArrayNum
                 ,&local_148.Data.ArrayMax);
      memcpy(local_148.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    local_98 = 0;
    local_97 = 0;
    local_124 = this->bSocketReusable;
    local_94 = (FIPv4Endpoint)CONCAT26(uStack_14e,(uint6)(uint)FVar1.field0_0x0);
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    ::FString::FString(&local_88,&local_148);
    local_d4 = this->Endpoint;
    local_78 = local_138;
    local_74 = local_134;
    local_70 = local_130;
    local_6c = local_12c;
    local_68 = local_128;
    local_64 = local_124;
    local_60 = local_120;
    local_d8 = local_98;
    local_97 = 1;
    local_d7 = 1;
    local_94 = local_d4;
    ::FString::FString(&local_c8,&local_88);
    local_b8 = local_78;
    local_b4 = local_74;
    local_a8 = local_68;
    local_a4 = local_64;
    local_a0 = local_60;
    local_118 = local_d8;
    local_117 = local_d7;
    local_114 = local_d4;
    local_b0 = 1;
    local_ac = 8;
    ::FString::FString(&local_108,&local_c8);
    local_f8 = local_b8;
    local_f4 = local_b4;
    local_f0 = local_b0;
    local_ec = local_ac;
    local_e8 = local_a8;
    local_e4 = local_a4;
    local_48.Blocking = (bool)local_118;
    local_48.Bound = (bool)local_117;
    local_48.BoundEndpoint = local_114;
    local_e0 = 0x200000;
    ::FString::FString(&local_48.Description,&local_108);
    local_48.Linger = (bool)local_f8;
    local_48.LingerTimeout = local_f4;
    local_48.Listen = (bool)local_f0;
    local_48.ListenBacklog = local_ec;
    local_48.ReceiveBufferSize = local_e8;
    local_48.Reusable = (bool)local_e4;
    local_48.SendBufferSize = local_e0;
    pFVar2 = FTcpSocketBuilder::Build(&local_48);
    this->Socket = pFVar2;
    if (local_48.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Description.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return this->Socket != (FSocket *)0x0;
}

// Run @ 14eaccd60

uint __thiscall FTcpListener::Run(FTcpListener *this)

{
  longlong lVar1;
  FSocket *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  ISocketSubsystem *pIVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  char local_res8 [8];
  undefined2 local_res10 [4];
  undefined1 local_res18 [4];
  undefined2 local_res1c;
  FName local_res20;
  FName local_b8;
  longlong *local_b0;
  TReferenceControllerBase<1> *local_a8;
  FString local_a0;
  FReadAccessScope local_90;
  FReadAccessScope local_78 [2];
  
  pFVar8 = ::FName::FName(&local_res20,L"WINDOWS");
  pIVar9 = ISocketSubsystem::Get(pFVar8);
  (**(code **)(pIVar9->_padding_ + 0x90))(pIVar9,&local_b0);
  cVar5 = this->bStopping;
  lVar1 = (this->SleepTime).Ticks;
  do {
    if (cVar5 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
      return 0;
    }
    local_res8[0] = '\0';
    cVar5 = (**(code **)(this->Socket->_padding_ + 0x38))(this->Socket,local_res8,&this->SleepTime);
    if (cVar5 == '\0') {
      lVar12 = (this->SleepTime).Ticks;
      lVar12 = lVar12 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar12),8);
      lVar13 = (lVar12 >> 0x17) - (lVar12 >> 0x3f);
      lVar12 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar13),8) + lVar13;
      FWindowsPlatformProcess::Sleep
                ((float)((int)lVar13 + ((int)(lVar12 >> 5) - (int)(lVar12 >> 0x3f)) * -0x3c));
    }
    else if (local_res8[0] == '\0') {
      if (lVar1 == 0) {
        FWindowsPlatformProcess::Sleep(0.0);
      }
    }
    else {
      pFVar2 = this->Socket;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x48);
      ::FString::FString(&local_a0,L"FTcpListener client");
      plVar10 = (longlong *)(*pcVar3)(pFVar2,local_b0,&local_a0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (plVar10 != (longlong *)0x0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->ConnectionAcceptedDelegate,&local_90);
        if (((*(int *)&(this->ConnectionAcceptedDelegate).field_0x10 == 0) ||
            (plVar11 = *(longlong **)&(this->ConnectionAcceptedDelegate).field_0x8,
            plVar11 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar11 + 0x38))(), cVar5 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_90);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_90);
          pTVar4 = local_a8;
          plVar11 = local_b0;
          if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (local_b0 == (longlong *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternetAddr.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                               ,0x3b,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return uVar7;
            }
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return uVar7;
            }
          }
          (**(code **)(*plVar11 + 0x20))(plVar11,local_res18);
          if ((plVar11 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return uVar7;
          }
          (**(code **)(*plVar11 + 0x40))(plVar11,local_res10);
          local_res1c = local_res10[0];
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->ConnectionAcceptedDelegate,local_78);
          if (*(int *)&(this->ConnectionAcceptedDelegate).field_0x10 == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)&(this->ConnectionAcceptedDelegate).field_0x8;
          }
          cVar5 = (**(code **)(*plVar11 + 0x60))(plVar11,plVar10,local_res18);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_78);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          if (cVar5 != '\0') goto LAB_14eaccfb9;
        }
        (**(code **)(*plVar10 + 0x10))(plVar10);
        pFVar8 = ::FName::FName(&local_b8,L"WINDOWS");
        pIVar9 = ISocketSubsystem::Get(pFVar8);
        (**(code **)(pIVar9->_padding_ + 0x38))(pIVar9,plVar10);
      }
    }
LAB_14eaccfb9:
    cVar5 = this->bStopping;
  } while( true );
}

// Stop @ 14eaceb70

void __thiscall FTcpListener::Stop(FTcpListener *this)

{
  this->bStopping = true;
  return;
}

