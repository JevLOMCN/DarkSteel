// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// FDS_ReadPacketRunner @ 14bb4c5d0

FDS_ReadPacketRunner * __thiscall
FDS_ReadPacketRunner::FDS_ReadPacketRunner(FDS_ReadPacketRunner *this,FSocket *param_1)

{
  this->Socket = param_1;
  this->_padding_ = (longlong)&___7FDS_ReadPacketRunner__6B_;
  (this->SocketBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketBuffer).ArrayNum = 0;
  (this->SocketBuffer).ArrayMax = 0;
  (this->ReceiveBuffer).Ptr = (RingBuf<unsigned_char,131068> *)0x0;
  return this;
}

// ClearSocket @ 14bb55330

void __thiscall FDS_ReadPacketRunner::ClearSocket(FDS_ReadPacketRunner *this)

{
  this->Socket = (FSocket *)0x0;
  return;
}

// Run @ 14bb86b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FDS_ReadPacketRunner::Run(FDS_ReadPacketRunner *this)

{
  int *piVar1;
  RingBuf<unsigned_char,131068> *pRVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  atomic<unsigned___int64> aVar12;
  atomic<unsigned___int64> aVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  FSharedReferencer<1> FVar17;
  ForAnyElementType FVar18;
  size_t sVar19;
  int *piVar20;
  TReferenceControllerBase<1> *pTVar21;
  ulonglong uVar22;
  FSharedReferencer<1> FVar23;
  UDS_NetworkManager *this_00;
  atomic<unsigned___int64> aVar24;
  undefined1 auStackY_6d8 [32];
  uchar local_688 [8];
  TArray<FDS_ServerMessage,TSizedDefaultAllocator<32>_> local_680;
  int local_670;
  int local_66c;
  FDS_ServerMessage local_668;
  UDS_NetworkManager *local_650;
  FDS_ServerMessage local_648;
  undefined8 local_630;
  FSharedReferencer<1> local_628;
  undefined8 local_620;
  FSharedReferencer<1> local_618;
  ArrayInputStream local_610;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  local_650 = UDS_NetworkManager::GetInst();
  if (local_650 == (UDS_NetworkManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_5e8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_5e8,"FDS_ReadPacketRunner::Run",0x19,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_5e8.Ptr,0x15,L"netMng is nullptr.");
    FVar18.Data = (FScriptContainerElement *)local_5e8._padding_;
  }
  else {
    aVar12 = (atomic<unsigned___int64>)::operator_new(0x20010);
    aVar24 = (atomic<unsigned___int64>)0x0;
    aVar13 = aVar24;
    if (aVar12 != (atomic<unsigned___int64>)0x0) {
      *(atomic<unsigned___int64> *)((longlong)aVar12 + 0x20000) = (atomic<unsigned___int64>)0x0;
      *(atomic<unsigned___int64> *)((longlong)aVar12 + 0x20008) = (atomic<unsigned___int64>)0x0;
      aVar13 = aVar12;
    }
    aVar12 = (atomic<unsigned___int64>)(this->ReceiveBuffer).Ptr;
    if (aVar12 != aVar13) {
      (this->ReceiveBuffer).Ptr = (RingBuf<unsigned_char,131068> *)aVar13;
      ::operator_delete((void *)aVar12,0x20010);
    }
    if ((this->SocketBuffer).ArrayMax < 0x7fff) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x7fff,&(this->SocketBuffer).AllocatorInstance,(this->SocketBuffer).ArrayNum,
                 &(this->SocketBuffer).ArrayMax);
    }
    this_00 = local_650;
    local_680.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_680.ArrayNum = 0;
    local_680.ArrayMax = 0;
    bVar5 = UDS_NetworkManager::ValidPacketProcessor(local_650);
    fVar4 = __real_3a83126f;
    if (bVar5) {
LAB_14bb86c92:
      piVar20 = &(this->SocketBuffer).ArrayMax;
      if (this->Socket != (FSocket *)0x0) {
        iVar9 = (this->SocketBuffer).ArrayNum;
        piVar1 = &(this->SocketBuffer).ArrayNum;
        if (iVar9 < 0x7fff) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,0x7fff - iVar9,&(this->SocketBuffer).AllocatorInstance,piVar1,
                             piVar20);
          memset((this->SocketBuffer).AllocatorInstance.Data + iVar7,0,(longlong)(0x7fff - iVar9));
        }
        else if (0x7fff < iVar9) {
          iVar9 = iVar9 + -0x7fff;
          if (iVar9 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return uVar8;
            }
          }
          else if (iVar9 == 0) goto LAB_14bb86d7f;
          pFVar16 = (this->SocketBuffer).AllocatorInstance.Data + 0x7fff;
          iVar7 = (*piVar1 - iVar9) + -0x7fff;
          if (iVar7 != 0) {
            memmove(pFVar16,pFVar16 + iVar9,(longlong)iVar7);
          }
          iVar9 = (this->SocketBuffer).ArrayNum - iVar9;
          (this->SocketBuffer).ArrayNum = iVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&(this->SocketBuffer).AllocatorInstance,iVar9,piVar20);
        }
LAB_14bb86d7f:
        local_66c = 0;
        cVar6 = (**(code **)(this->Socket->_padding_ + 0x70))
                          (this->Socket,(this->SocketBuffer).AllocatorInstance.Data,0x7fff,
                           &local_66c);
        if (cVar6 == '\0') {
          if (local_66c != 0) goto LAB_14bb86f1b;
          local_648.Msg.Object = (Message *)0x0;
          local_648.Msg.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_648.ProtoType = cVar6;
          if (((local_680.AllocatorInstance.Data <= &local_648) &&
              (&local_648 <
               (FDS_ServerMessage *)
               (local_680.AllocatorInstance.Data + (longlong)local_680.ArrayMax * 0x18))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return uVar8;
          }
          iVar9 = local_680.ArrayNum;
          if (local_680.ArrayNum == local_680.ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_680.AllocatorInstance,&local_680.ArrayMax);
          }
          lVar14 = (longlong)iVar9;
          local_680.ArrayNum = iVar9 + 1;
          local_680.AllocatorInstance.Data[lVar14 * 0x18].field_0x0 = local_648.ProtoType;
          *(Message **)(local_680.AllocatorInstance.Data + lVar14 * 0x18 + 8) = local_648.Msg.Object
          ;
          *(TReferenceControllerBase<1> **)(local_680.AllocatorInstance.Data + lVar14 * 0x18 + 0x10)
               = local_648.Msg.SharedReferenceCount.ReferenceController;
          if (local_648.Msg.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_648.Msg.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_648.Msg.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar5 = UDS_NetworkManager::TryPushServerMessages(this_00,&local_680);
          if (bVar5) {
            DestructItems<FDS_ServerMessage,int>
                      ((FDS_ServerMessage *)local_680.AllocatorInstance.Data,local_680.ArrayNum);
            bVar5 = local_680.ArrayMax != 0;
            local_680._8_8_ = (ulonglong)(uint)local_680.ArrayMax << 0x20;
            if (bVar5) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,&local_680.AllocatorInstance,0,&local_680.ArrayMax);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_648.Msg.SharedReferenceCount.ReferenceController);
        }
        else {
          pRVar2 = (this->ReceiveBuffer).Ptr;
          lVar14 = -1;
          uVar22 = (ulonglong)local_66c;
          pFVar16 = (this->SocketBuffer).AllocatorInstance.Data;
          aVar13 = pRVar2->_w;
          if ((ulonglong)pRVar2->_r <= (ulonglong)aVar13) {
            lVar14 = 0x1fffb;
          }
          if (uVar22 <= (ulonglong)((lVar14 - (longlong)aVar13) + (longlong)pRVar2->_r)) {
            aVar12 = (atomic<unsigned___int64>)((longlong)aVar13 + uVar22);
            if ((ulonglong)aVar12 < 0x1fffd) {
              memcpy(pRVar2->_data + (longlong)aVar13,pFVar16,uVar22);
              aVar13 = aVar24;
              if (aVar12 != (atomic<unsigned___int64>)0x1fffc) {
                aVar13 = aVar12;
              }
            }
            else {
              sVar19 = 0x1fffc - (longlong)aVar13;
              memcpy(pRVar2->_data + (longlong)aVar13,pFVar16,sVar19);
              memcpy(pRVar2,pFVar16 + sVar19,uVar22 - sVar19);
              aVar13 = (atomic<unsigned___int64>)(uVar22 - sVar19);
            }
            pRVar2->_w = aVar13;
            do {
              pRVar2 = (this->ReceiveBuffer).Ptr;
              local_670 = 0;
              aVar13 = pRVar2->_r;
              uVar22 = (longlong)pRVar2->_w - (longlong)aVar13;
              if ((ulonglong)pRVar2->_w < (ulonglong)aVar13) {
                uVar22 = uVar22 + 0x1fffc;
              }
              if (uVar22 < 4) {
LAB_14bb87681:
                FWindowsPlatformProcess::Sleep(fVar4);
                goto LAB_14bb87689;
              }
              if ((longlong)aVar13 + 4U < 0x1fffd) {
                local_670 = *(int *)(pRVar2->_data + (longlong)aVar13);
              }
              else {
                sVar19 = -(longlong)aVar13 + 0x1fffc;
                memcpy(&local_670,pRVar2->_data + (longlong)aVar13,sVar19);
                memcpy(&stack0x0001f98c + -(longlong)aVar13,pRVar2,4 - sVar19);
              }
              iVar9 = local_670;
              if (local_670 == 0) goto LAB_14bb87681;
              pRVar2 = (this->ReceiveBuffer).Ptr;
              aVar13 = pRVar2->_r;
              aVar12 = pRVar2->_w;
              uVar22 = (longlong)aVar12 - (longlong)aVar13;
              if ((ulonglong)aVar12 < (ulonglong)aVar13) {
                uVar22 = uVar22 + 0x1fffc;
              }
              if (uVar22 < local_670 + 4) goto LAB_14bb87681;
              pRVar2 = (this->ReceiveBuffer).Ptr;
              aVar13 = pRVar2->_r;
              uVar22 = (longlong)pRVar2->_w - (longlong)aVar13;
              if ((ulonglong)pRVar2->_w < (ulonglong)aVar13) {
                uVar22 = uVar22 + 0x1fffc;
              }
              if (3 < uVar22) {
                lVar14 = -0x1fff8;
                if ((longlong)aVar13 + 4U < 0x1fffc) {
                  lVar14 = 4;
                }
                pRVar2->_r = (atomic<unsigned___int64>)(lVar14 + (longlong)aVar13);
              }
              pRVar2 = (this->ReceiveBuffer).Ptr;
              local_688[0] = '\0';
              aVar13 = pRVar2->_r;
              lVar14 = (longlong)pRVar2->_w - (longlong)aVar13;
              if ((ulonglong)pRVar2->_w < (ulonglong)aVar13) {
                lVar14 = lVar14 + 0x1fffc;
              }
              if (lVar14 == 0) {
                pUVar11 = UDS_LogManager::GetInst();
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  local_288._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_288,"FDS_ReadPacketRunner::Run",0x19,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,local_288.Ptr,0x6a,L"SERIN Failed to read protoType")
                  ;
                  if ((void *)local_288._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_288._padding_);
                  }
                }
                goto LAB_14bb87689;
              }
              if ((longlong)aVar13 + 1U < 0x1fffd) {
                local_688[0] = pRVar2->_data[(longlong)aVar13];
                aVar12 = aVar24;
                if (aVar13 != (atomic<unsigned___int64>)0x1fffb) {
                  aVar12 = (atomic<unsigned___int64>)((longlong)aVar13 + 1U);
                }
              }
              else {
                sVar19 = -(longlong)aVar13 + 0x1fffc;
                memcpy(local_688,pRVar2->_data + (longlong)aVar13,sVar19);
                aVar12 = (atomic<unsigned___int64>)(1 - sVar19);
                memcpy(&stack0x0001f974 + -(longlong)aVar13,pRVar2,(size_t)aVar12);
              }
              pRVar2->_r = aVar12;
              iVar7 = (this->SocketBuffer).ArrayNum;
              if (iVar7 < 0x7fff) {
                iVar10 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (1,1,0x7fff - iVar7,&(this->SocketBuffer).AllocatorInstance,
                                    &(this->SocketBuffer).ArrayNum,&(this->SocketBuffer).ArrayMax);
                memset((this->SocketBuffer).AllocatorInstance.Data + iVar10,0,
                       (longlong)(0x7fff - iVar7));
              }
              else if (0x7fff < iVar7) {
                iVar7 = iVar7 + -0x7fff;
                if (iVar7 < 0) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    );
                  if (bVar5) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return uVar8;
                  }
                }
                else if (iVar7 == 0) goto LAB_14bb87224;
                pFVar16 = (this->SocketBuffer).AllocatorInstance.Data + 0x7fff;
                iVar10 = ((this->SocketBuffer).ArrayNum - iVar7) + -0x7fff;
                if (iVar10 != 0) {
                  memmove(pFVar16,pFVar16 + iVar7,(longlong)iVar10);
                }
                piVar20 = &(this->SocketBuffer).ArrayNum;
                *piVar20 = *piVar20 - iVar7;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,&(this->SocketBuffer).AllocatorInstance,(this->SocketBuffer).ArrayNum
                           ,&(this->SocketBuffer).ArrayMax);
              }
LAB_14bb87224:
              bVar5 = lockfree::spsc::RingBuf<unsigned_char,131068>::Read
                                ((this->ReceiveBuffer).Ptr,
                                 (uchar *)(this->SocketBuffer).AllocatorInstance.Data,
                                 (ulonglong)(iVar9 - 1U));
              if (!bVar5) {
                pUVar11 = UDS_LogManager::GetInst();
                if (pUVar11 != (UDS_LogManager *)0x0) {
                  pUVar11 = UDS_LogManager::GetInst();
                  local_3a8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_3a8,"FDS_ReadPacketRunner::Run",0x19,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar11,1,Warning,local_3a8.Ptr,0x74,
                             L"SERIN Failed to read packet payload. Size=%d");
                  if ((void *)local_3a8._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_3a8._padding_);
                  }
                }
                goto LAB_14bb87689;
              }
              local_668.Msg.Object = (Message *)0x0;
              local_668.Msg.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_668.ProtoType = local_688[0];
              if (local_688[0] == 'b') {
                pTVar15 = ::operator_new(0x40);
                if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
                  local_628.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                  pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000010;
                }
                else {
                  pTVar15->SharedReferenceCount = (atomic<int>)0x1;
                  pTVar15->WeakReferenceCount = (atomic<int>)0x1;
                  pTVar15->_padding_ =
                       (longlong)
                       &
                       ___7__TIntrusiveReferenceController_VServerMessagesTwoway_server_msg_twoway___00_SharedPointerInternals__6B_
                  ;
                  server_msg_twoway::ServerMessagesTwoway::ServerMessagesTwoway
                            ((ServerMessagesTwoway *)(pTVar15 + 1),(Arena *)0x0);
                  pTVar21 = pTVar15 + 1;
                  pTVar15[1]._padding_ = (longlong)&___7ServerMessagesTwoway_server_msg_twoway__6B_;
                  if ((pTVar21 == (TReferenceControllerBase<1> *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InObject != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x246,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return uVar8;
                  }
                  LOCK();
                  pTVar15->SharedReferenceCount =
                       (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
                  UNLOCK();
                  local_628.ReferenceController = pTVar15;
                }
                FVar23.ReferenceController = local_628.ReferenceController;
                local_630 = 0;
                local_668.Msg.Object = (Message *)pTVar21;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&local_668.Msg.SharedReferenceCount,&local_628);
                FVar17.ReferenceController = local_628.ReferenceController;
              }
              else {
                pTVar15 = ::operator_new(0x30);
                if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
                  local_618.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                  pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000010;
                }
                else {
                  pTVar15->SharedReferenceCount = (atomic<int>)0x1;
                  pTVar15->WeakReferenceCount = (atomic<int>)0x1;
                  pTVar15->_padding_ =
                       (longlong)
                       &
                       ___7__TIntrusiveReferenceController_VServerMessages_server_msg___00_SharedPointerInternals__6B_
                  ;
                  server_msg::ServerMessages::ServerMessages
                            ((ServerMessages *)(pTVar15 + 1),(Arena *)0x0);
                  pTVar21 = pTVar15 + 1;
                  pTVar15[1]._padding_ = (longlong)&___7ServerMessages_server_msg__6B_;
                  if ((pTVar21 == (TReferenceControllerBase<1> *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InObject != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x246,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return uVar8;
                  }
                  LOCK();
                  pTVar15->SharedReferenceCount =
                       (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
                  UNLOCK();
                  local_618.ReferenceController = pTVar15;
                }
                FVar23.ReferenceController = local_618.ReferenceController;
                local_620 = 0;
                local_668.Msg.Object = (Message *)pTVar21;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&local_668.Msg.SharedReferenceCount,&local_618);
                FVar17.ReferenceController = local_618.ReferenceController;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar17.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar23.ReferenceController);
              google::protobuf::io::ArrayInputStream::ArrayInputStream
                        (&local_610,(this->SocketBuffer).AllocatorInstance.Data,iVar9 - 1U,-1);
              if (((TReferenceControllerBase<1> *)local_668.Msg.Object ==
                   (TReferenceControllerBase<1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return uVar8;
              }
              bVar5 = google::protobuf::MessageLite::ParseFromZeroCopyStream
                                ((MessageLite *)local_668.Msg.Object,
                                 (ZeroCopyInputStream *)&local_610);
              if (!bVar5) goto LAB_14bb874ea;
              if (((local_680.AllocatorInstance.Data <= &local_668) &&
                  (&local_668 <
                   (FDS_ServerMessage *)
                   (local_680.AllocatorInstance.Data + (longlong)local_680.ArrayMax * 0x18))) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return uVar8;
              }
              iVar9 = local_680.ArrayNum;
              if (local_680.ArrayNum == local_680.ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_680.AllocatorInstance,&local_680.ArrayMax);
              }
              lVar14 = (longlong)iVar9;
              local_680.ArrayNum = iVar9 + 1;
              local_680.AllocatorInstance.Data[lVar14 * 0x18].field_0x0 = local_668.ProtoType;
              *(Message **)(local_680.AllocatorInstance.Data + lVar14 * 0x18 + 8) =
                   local_668.Msg.Object;
              *(TReferenceControllerBase<1> **)
               (local_680.AllocatorInstance.Data + lVar14 * 0x18 + 0x10) =
                   local_668.Msg.SharedReferenceCount.ReferenceController;
              if (local_668.Msg.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_668.Msg.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_668.Msg.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_668.Msg.SharedReferenceCount.ReferenceController);
            } while( true );
          }
LAB_14bb86f1b:
          FWindowsPlatformProcess::Sleep(fVar4);
        }
        goto LAB_14bb876e2;
      }
    }
LAB_14bb87710:
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_ReadPacketRunner::Run",0x19,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_168.Ptr,0x99,L"FDS_ReadPacketRunner Exited.")
      ;
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    DestructItems<FDS_ServerMessage,int>
              ((FDS_ServerMessage *)local_680.AllocatorInstance.Data,local_680.ArrayNum);
    FVar18.Data = local_680.AllocatorInstance.Data;
  }
  if ((FDS_ServerMessage *)FVar18.Data != (FDS_ServerMessage *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  return 0;
LAB_14bb874ea:
  pUVar11 = UDS_LogManager::GetInst();
  if (pUVar11 != (UDS_LogManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    local_4c8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4c8,"FDS_ReadPacketRunner::Run",0x19,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_4c8.Ptr,0x88,L"SERIN Protobuf parse failed. protoType=%d");
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_668.Msg.SharedReferenceCount.ReferenceController);
LAB_14bb87689:
  if ((local_680.ArrayNum != 0) &&
     (bVar5 = UDS_NetworkManager::TryPushServerMessages(local_650,&local_680), bVar5)) {
    DestructItems<FDS_ServerMessage,int>
              ((FDS_ServerMessage *)local_680.AllocatorInstance.Data,local_680.ArrayNum);
    bVar5 = local_680.ArrayMax != 0;
    local_680._8_8_ = (ulonglong)(uint)local_680.ArrayMax << 0x20;
    if (bVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_680.AllocatorInstance,0,&local_680.ArrayMax);
    }
  }
LAB_14bb876e2:
  bVar5 = UDS_NetworkManager::ValidPacketProcessor(local_650);
  this_00 = local_650;
  if (!bVar5) goto LAB_14bb87710;
  goto LAB_14bb86c92;
}

