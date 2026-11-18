// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ReliableHComp
// Functions: 22

// `dynamic_initializer_for_'ModuleRegistrantReliabilityHandlerComponent'' @ 140f94000

void __cdecl _dynamic_initializer_for__ModuleRegistrantReliabilityHandlerComponent__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ReliabilityHandlerComponent";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ReliabilityHandlerComponent",0x1b);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FReliabilityHandlerComponentModuleInterface>::
             InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14463c540

void * __thiscall
FPacketHandlerComponentModuleInterface::_scalar_deleting_destructor_
          (FPacketHandlerComponentModuleInterface *this,uint param_1)

{
  *this = (FPacketHandlerComponentModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14463c620

void * __thiscall
FReliabilityHandlerComponentModuleInterface::_scalar_deleting_destructor_
          (FReliabilityHandlerComponentModuleInterface *this,uint param_1)

{
  *this = (FReliabilityHandlerComponentModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ReliabilityHandlerComponent @ 14463c6d0

ReliabilityHandlerComponent * __thiscall
ReliabilityHandlerComponent::ReliabilityHandlerComponent(ReliabilityHandlerComponent *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"ReliabilityHandlerComponent");
  HandlerComponent::HandlerComponent((HandlerComponent *)this,*pFVar1);
  this->LocalPacketID = 1;
  this->LocalPacketIDACKED = 0;
  this->RemotePacketID = 0;
  this->RemotePacketIDACKED = 0;
  this->_padding_ = (longlong)&___7ReliabilityHandlerComponent__6B_;
  this->ResendResolutionTime = 0.1;
  (this->BufferedPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedPackets).ArrayNum = 0;
  (this->BufferedPackets).ArrayMax = 0;
  this->LastResendTime = 0.0;
  return this;
}

// `scalar_deleting_destructor' @ 14463c740

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ReliabilityHandlerComponent,SharedPointerInternals::DefaultDeleter<ReliabilityHandlerComponent>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<ReliabilityHandlerComponent,SharedPointerInternals::DefaultDeleter<ReliabilityHandlerComponent>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14463c780

void * __thiscall
ReliabilityHandlerComponent::_scalar_deleting_destructor_
          (ReliabilityHandlerComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BufferedPackets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  HandlerComponent::~HandlerComponent((HandlerComponent *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// CanReadUnaligned @ 14463c7d0

bool __thiscall HandlerComponent::CanReadUnaligned(HandlerComponent *this)

{
  return false;
}

// CountBytes @ 14463c7e0

void __thiscall
ReliabilityHandlerComponent::CountBytes(ReliabilityHandlerComponent *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  HandlerComponent::CountBytes((HandlerComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x30,0x30);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->BufferedPackets).ArrayNum << 3,
             (longlong)(this->BufferedPackets).ArrayMax << 3);
  pFVar5 = (this->BufferedPackets).AllocatorInstance.Data;
  iVar2 = (this->BufferedPackets).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BufferedPackets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<BufferedPacket_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x48,0x48);
      uVar4 = *(int *)(lVar3 + 8) + 7U >> 3;
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,uVar4,uVar4);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// GetReservedPacketBits @ 14463c8d0

int __thiscall ReliabilityHandlerComponent::GetReservedPacketBits(ReliabilityHandlerComponent *this)

{
  return 0x40;
}

// Incoming @ 14463c8e0

void __thiscall HandlerComponent::Incoming(HandlerComponent *this,FIncomingPacketRef *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014463c8e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))(this,param_1->Packet);
  return;
}

// Incoming @ 14463c8f0

void __thiscall
ReliabilityHandlerComponent::Incoming(ReliabilityHandlerComponent *this,FBitReader *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FString *pFVar5;
  FString *pFVar6;
  uint local_res8 [2];
  uint local_res18;
  FString local_28;
  FString local_18;
  
  if ((char)this->_padding_ == '\x03') {
    cVar3 = (**(code **)(this->_padding_ + 8))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(this->_padding_ + 0x10))(this);
      if (cVar3 != '\0') {
        pFVar5 = ::FString::FString(&local_28,L"PostReliability");
        if (GPacketAuditor != (FPacketAudit *)0x0) {
          pFVar6 = ::FString::FString(&local_18,pFVar5);
          FPacketAudit::CheckStage_Internal(GPacketAuditor,pFVar6,param_1,false);
        }
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (**(code **)(param_1->_padding_ + 0x1a0))(param_1,local_res8);
        (**(code **)(param_1->_padding_ + 0x1a0))(param_1);
        if (this->RemotePacketID + 1 != local_res18) {
          FBitReader::SetData(param_1,(uchar *)0x0,0);
          return;
        }
        this->RemotePacketID = local_res18;
        if (local_res8[0] < this->LocalPacketIDACKED) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IncomingLocalPacketIDACK >= LocalPacketIDACKED",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\ReliabilityHandlerComponent\\Private\\ReliabilityHandlerComponent.cpp"
                             ,0x6e,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        this->LocalPacketIDACKED = local_res8[0];
      }
    }
  }
  return;
}

// IncomingConnectionless @ 14463ca20

void __thiscall
HandlerComponent::IncomingConnectionless(HandlerComponent *this,FIncomingPacketRef *param_1)

{
  return;
}

// InitFaultRecovery @ 14463ca30

void __thiscall
HandlerComponent::InitFaultRecovery(HandlerComponent *this,FNetConnectionFaultRecoveryBase *param_1)

{
  return;
}

// Initialize @ 14463ca40

void __thiscall ReliabilityHandlerComponent::Initialize(ReliabilityHandlerComponent *this)

{
  (**(code **)(this->_padding_ + 0x68))(this,1);
  HandlerComponent::Initialized((HandlerComponent *)this);
  *(undefined1 *)&this->_padding_ = 3;
  return;
}

// IsValid @ 14463caa0

bool __thiscall ReliabilityHandlerComponent::IsValid(ReliabilityHandlerComponent *this)

{
  return true;
}

// NotifyAnalyticsProvider @ 14463cab0

void __thiscall HandlerComponent::NotifyAnalyticsProvider(HandlerComponent *this)

{
  return;
}

// NotifyHandshakeBegin @ 14463cac0

void __thiscall HandlerComponent::NotifyHandshakeBegin(HandlerComponent *this)

{
  return;
}

// Outgoing @ 14463cad0

void __thiscall
ReliabilityHandlerComponent::Outgoing
          (ReliabilityHandlerComponent *this,FBitWriter *param_1,FOutPacketTraits *param_2)

{
  long64 lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FString *pFVar9;
  int iVar10;
  longlong lVar11;
  FBitWriter local_e8;
  FString local_28;
  FString local_18;
  
  if ((char)this->_padding_ != '\x03') {
    return;
  }
  cVar5 = (**(code **)(this->_padding_ + 8))();
  if (((cVar5 == '\0') || (cVar5 = (**(code **)(this->_padding_ + 0x10))(this), cVar5 == '\0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsActive() && IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\ReliabilityHandlerComponent\\Private\\ReliabilityHandlerComponent.cpp"
                         ,0x39,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FBitWriter::FBitWriter(&local_e8);
  lVar11 = local_e8.Num + 1;
  if ((local_e8.Max < lVar11) && (local_e8.bAllowResize != false)) {
    lVar4 = local_e8.Max * 2;
    local_e8.Max = lVar11;
    if (lVar11 < lVar4) {
      local_e8.Max = lVar4;
    }
    iVar10 = (int)(local_e8.Max + 7 >> 3) - local_e8.Buffer.ArrayNum;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar10,&local_e8.Buffer.AllocatorInstance,&local_e8.Buffer.ArrayNum,
                       &local_e8.Buffer.ArrayMax);
    memset(local_e8.Buffer.AllocatorInstance.Data + iVar7,0,(longlong)iVar10);
    if ((local_e8.Max + 7 >> 3 != (longlong)local_e8.Buffer.ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Max+7)>>3== Buffer.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                           ,0xa5,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_e8.bAllowResize = true;
  if (((longlong)(param_1->Num + 7U & 0xfffffffffffffff8) < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Packet.GetNumBytes() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\ReliabilityHandlerComponent\\Private\\ReliabilityHandlerComponent.cpp"
                         ,0x3f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FBitWriter::SerializeIntPacked(&local_e8,&this->RemotePacketID);
  FBitWriter::SerializeIntPacked(&local_e8,&this->LocalPacketID);
  lVar1 = param_1->Num;
  if (((param_1->_padding_ & 0x200) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                         ,0x49,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FBitWriter::SerializeBits(&local_e8,(param_1->Buffer).AllocatorInstance.Data,lVar1);
  FBitWriter::operator=(param_1,&local_e8);
  pFVar8 = ::FString::FString(&local_28,L"PostReliability");
  if (GPacketAuditor != (FPacketAudit *)0x0) {
    pFVar9 = ::FString::FString(&local_18,pFVar8);
    FPacketAudit::AddStage_Internal(GPacketAuditor,pFVar9,param_1,false);
  }
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FBitWriter::~FBitWriter(&local_e8);
  return;
}

// OutgoingConnectionless @ 14463cd40

void __thiscall
HandlerComponent::OutgoingConnectionless
          (HandlerComponent *this,TSharedPtr<FInternetAddr_const_,1> *param_1,FBitWriter *param_2,
          FOutPacketTraits *param_3)

{
  return;
}

// QueuePacketForResending @ 14463cd50

void __thiscall
ReliabilityHandlerComponent::QueuePacketForResending
          (ReliabilityHandlerComponent *this,uchar *param_1,int param_2,FOutPacketTraits *param_3)

{
  TArray<BufferedPacket_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  void *_Dst;
  ulonglong _Size;
  double dVar11;
  double dVar12;
  LARGE_INTEGER local_res8;
  undefined8 *local_38 [2];
  
  pTVar1 = &this->BufferedPackets;
  puVar10 = ::operator_new(0x48);
  if (puVar10 != (undefined8 *)0x0) {
    uVar3 = this->LocalPacketID;
    this->LocalPacketID = uVar3 + 1;
    QueryPerformanceCounter(&local_res8);
    dVar11 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    dVar12 = this->ResendResolutionTime;
    *(int *)(puVar10 + 1) = param_2;
    uVar6 = *(undefined8 *)param_3;
    uVar7 = *(undefined8 *)&param_3->NumBunchBits;
    *(uint *)(puVar10 + 5) = uVar3;
    puVar10[8] = 0;
    dVar12 = dVar11 + dVar12 + __real_4170000000000000;
    *(undefined8 *)((longlong)puVar10 + 0xc) = uVar6;
    *(undefined8 *)((longlong)puVar10 + 0x14) = uVar7;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = dVar12;
    if ((param_1 == (uchar *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCopyData != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
                           ,0xca,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    _Size = (ulonglong)(param_2 + 7U >> 3);
    _Dst = operator_new__(_Size);
    *puVar10 = _Dst;
    memcpy(_Dst,param_1,_Size);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  local_38[0] = puVar10;
  if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)(this->BufferedPackets).ArrayMax * 8
      )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (this->BufferedPackets).ArrayNum;
  piVar2 = &(this->BufferedPackets).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->BufferedPackets).ArrayNum = iVar9 + 1;
  *(undefined8 **)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_38[0];
  return;
}

// Tick @ 14463cf20

void __thiscall ReliabilityHandlerComponent::Tick(ReliabilityHandlerComponent *this,float param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  BufferedPacket *this_00;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  double dVar13;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar13 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (this->ResendResolutionTime <= dVar13 - this->LastResendTime) {
    uVar10 = 0;
    this->LastResendTime = dVar13;
    uVar12 = uVar10;
    if (0 < (this->BufferedPackets).ArrayNum) {
      do {
        uVar9 = (uint)uVar10;
        uVar11 = ~uVar9 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar9 < (this->BufferedPackets).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = *(BufferedPacket **)((this->BufferedPackets).AllocatorInstance.Data + uVar12);
        if ((this_00->Id == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Packet->Id >= 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\ReliabilityHandlerComponent\\Private\\ReliabilityHandlerComponent.cpp"
                               ,0x91,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (this->LocalPacketIDACKED < this_00->Id) {
          lVar2 = this->_padding_;
          puVar7 = ::operator_new(0x10);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = this_00;
            puVar3 = *(undefined8 **)(lVar2 + 0x200);
            *(undefined8 **)(lVar2 + 0x200) = puVar7;
            *puVar3 = puVar7;
          }
        }
        else {
          if ((uVar9 != 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("i == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PacketHandlers\\ReliabilityHandlerComponent\\Private\\ReliabilityHandlerComponent.cpp"
                                 ,0x9b,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar6 = 0;
          if ((int)uVar9 < (this->BufferedPackets).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          _Dst = (this->BufferedPackets).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
          iVar8 = (this->BufferedPackets).ArrayNum + ~uVar9;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + 8,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->BufferedPackets).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->BufferedPackets).AllocatorInstance,(this->BufferedPackets).ArrayNum
                     ,&(this->BufferedPackets).ArrayMax);
          uVar9 = uVar9 - 1;
          uVar12 = uVar12 - 8;
          BufferedPacket::~BufferedPacket(this_00);
          ::operator_delete(this_00,0x48);
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar12 = uVar12 + 8;
      } while ((int)(uVar9 + 1) < (this->BufferedPackets).ArrayNum);
    }
  }
  return;
}

// IMPLEMENT_MODULE_ReliabilityHandlerComponent @ 14463d180

void __cdecl IMPLEMENT_MODULE_ReliabilityHandlerComponent(void)

{
  return;
}

