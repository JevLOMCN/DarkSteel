// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 7

// ~FNetworkNode @ 14e6611f0

void __thiscall UE::Interchange::FNetworkNode::~FNetworkNode(FNetworkNode *this)

{
  FScriptContainerElement *pFVar1;
  ISocketSubsystem *pIVar2;
  FName local_res8 [4];
  
  this->_padding_ = (longlong)&___7FNetworkNode_Interchange_UE__6B_;
  if (this->ConnectedSocket != (FSocket *)0x0) {
    (**(code **)(this->ConnectedSocket->_padding_ + 0x10))();
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
    pIVar2 = ISocketSubsystem::Get(local_res8);
    (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,this->ConnectedSocket);
    this->ConnectedSocket = (FSocket *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SendReceiveCriticalSection);
  pFVar1 = (this->IncommingMessage).Content.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14e6618a0

bool __thiscall
`UE::Interchange::FNetworkNode::SendMessage'::__l2::<lambda_1>::operator()
          (void *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int local_res10 [2];
  
  uVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  uVar4 = 0;
  bVar5 = 1;
  do {
    if (uVar1 <= uVar4) {
      if (uVar4 != uVar1) {
        return false;
      }
      return true;
    }
    local_res10[0] = 0;
    bVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x60))
                      (*(longlong **)(*(longlong *)this + 8),pFVar2 + uVar4,uVar1 - uVar4,
                       local_res10);
    uVar4 = uVar4 + local_res10[0];
    bVar5 = bVar5 & bVar3;
  } while (bVar5 != 0);
  return false;
}

// CloseSocket @ 14e662690

void __thiscall UE::Interchange::FNetworkNode::CloseSocket(FNetworkNode *this,FSocket **param_1)

{
  ISocketSubsystem *pIVar1;
  FName local_res10 [3];
  
  if (*param_1 != (FSocket *)0x0) {
    (**(code **)((*param_1)->_padding_ + 0x10))();
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    pIVar1 = ISocketSubsystem::Get(local_res10);
    (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,*param_1);
    *param_1 = (FSocket *)0x0;
  }
  return;
}

// CreateInternalSocket @ 14e662bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FSocket * __thiscall
UE::Interchange::FNetworkNode::CreateInternalSocket(FNetworkNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FNameEntryId FVar4;
  ISocketSubsystem *pIVar5;
  FSocket *pFVar6;
  undefined8 *puVar7;
  undefined4 extraout_var;
  wchar_t *pwVar8;
  undefined8 local_res18;
  FName local_res20;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar5 = ISocketSubsystem::Get(&local_res20);
  (**(code **)(pIVar5->_padding_ + 0x90))(pIVar5,&local_38);
  (**(code **)(*local_38 + 0x78))();
  local_res18 = 0;
  cVar2 = (**(code **)(*local_38 + 0x98))();
  if (cVar2 == '\0') {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7243443124725350607>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcherNetworking.cpp"
                       ,0xcf,"InternetAddress->IsValid()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FSocket *)(*pcVar1)();
      return pFVar6;
    }
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*local_38 + 0xa8))(local_38,local_40);
    local_res18 = *puVar7;
  }
  pcVar1 = *(code **)(pIVar5->_padding_ + 0x18);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar8);
  FVar4 = FNameEntryId::FromValidEName((int)&local_res18 - DoubleProperty);
  local_48 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Value);
  local_44 = 0;
  pFVar6 = (FSocket *)(*pcVar1)(pIVar5,&local_48,&local_28,&local_res18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((3 < (byte)LogInterchangeDispatcher._0_1_) && (pFVar6 == (FSocket *)0x0)) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return pFVar6;
}

// IsConnected @ 14e666410

bool __thiscall UE::Interchange::FNetworkNode::IsConnected(FNetworkNode *this)

{
  int iVar1;
  
  if (this->ConnectedSocket != (FSocket *)0x0) {
    iVar1 = (**(code **)(this->ConnectedSocket->_padding_ + 0x88))();
    if (iVar1 == 1) {
      return true;
    }
  }
  return false;
}

// ReceiveMessage @ 14e666cc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Interchange::FNetworkNode::ReceiveMessage
          (FNetworkNode *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  FSocket *pFVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  int iVar5;
  FStaticBasicLogRecord *pFVar6;
  bool bVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  size_t _Size;
  uint uVar9;
  uint local_res8 [2];
  FMessageHeader local_res20 [2];
  int *piVar10;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  uint local_1e8;
  uint local_1e4 [3];
  void *local_1d8;
  undefined8 local_1d0;
  FArchiveState local_1c8;
  undefined8 local_138;
  void **local_130;
  undefined8 local_128;
  FArchiveState local_118;
  undefined8 local_88;
  ForAnyElementType *local_80;
  undefined8 local_78;
  undefined8 local_60 [5];
  
  lpCriticalSection = &this->SendReceiveCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bReadError == false) {
    pFVar2 = this->ConnectedSocket;
    if (pFVar2 == (FSocket *)0x0) {
      if (3 < (byte)LogInterchangeDispatcher._0_1_) {
        pFVar6 = &::LOG_Static;
        goto LAB_14e666d27;
      }
    }
    else {
      (**(code **)(pFVar2->_padding_ + 0xa0))(pFVar2,1);
      pFVar2 = this->ConnectedSocket;
      if (pFVar2 != (FSocket *)0x0) {
        cVar4 = (**(code **)(pFVar2->_padding_ + 0x80))
                          (pFVar2,0,(longlong)(param_2 * __real_416312d000000000));
        if (cVar4 != '\0') {
          if ((this->IncommingMessage).Header.ByteSize < 0) {
            if (*(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c
                        ) < ::_TSS0) {
              _Init_thread_header(&::_TSS0);
              if (::_TSS0 == -1) {
                local_res20[0].ByteSize = -1;
                local_1d8 = (void *)0x0;
                local_1c8._padding_ = 0;
                local_1c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
                local_1d0 = 0;
                local_1c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
                local_1c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
                local_1e4[1] = 0;
                local_1e4[2] = 0;
                local_1c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
                local_1c8._40_8_ = 0;
                local_1c8.ArSerializingDefaults = 0;
                local_1c8.ArPortFlags = 0;
                local_1c8.ArMaxSerializeSize = 0;
                local_1c8.ArUEVer.FileVersionUE4 = 0;
                local_1c8.ArUEVer.FileVersionUE5 = 0;
                local_1c8.ArLicenseeUEVer = 0;
                local_1c8.ArEngineVer.Major = 0;
                local_1c8.ArEngineVer.Minor = 0;
                local_1c8.ArEngineVer.Patch = 0;
                local_1c8.ArEngineVer._6_2_ = 0;
                local_1c8.ArEngineVer.Changelist = 0;
                local_1c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
                local_1c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
                local_1c8.SavePackageData = (FArchiveSavePackageData *)0x0;
                local_1c8.SerializedProperty = (FProperty *)0x0;
                local_1c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
                local_1c8.bCustomVersionsAreReset = false;
                local_1c8._129_7_ = 0;
                local_1c8.NextProxy = (FArchiveState *)0x0;
                FArchiveState::FArchiveState(&local_1c8);
                local_138 = 0;
                local_1c8._padding_ =
                     (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
                local_130 = &local_1d8;
                local_128 = 0;
                FArchiveState::SetIsSaving(&local_1c8,true);
                (**(code **)(local_1c8._padding_ + 0x108))(&local_1c8,0);
                local_1c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
                Interchange::operator<<((FArchive *)&local_1c8,local_res20);
                uVar1 = (uint)local_1d0;
                FArchive::~FArchive((FArchive *)&local_1c8);
                if (local_1d8 != (void *)0x0) {
                  FMemory::Free(local_1d8);
                }
                HeaderByteSize = uVar1;
                _Init_thread_footer(&::_TSS0);
              }
            }
            cVar4 = (**(code **)(this->ConnectedSocket->_padding_ + 0x40))
                              (this->ConnectedSocket,&local_1e8);
            if (cVar4 != '\0') {
              _Size = (size_t)(int)HeaderByteSize;
              if (HeaderByteSize <= local_1e8) {
                local_1f8.Data = (FScriptContainerElement *)0x0;
                local_1f0 = 0;
                piVar10 = (int *)&local_1f0;
                iVar5 = Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (1,1,HeaderByteSize,&local_1f8,piVar10,
                                   (int *)((longlong)&local_1f0 + 4));
                memset(local_1f8.Data + iVar5,0,_Size);
                local_res8[0] = 0xffffffff;
                cVar4 = (**(code **)(this->ConnectedSocket->_padding_ + 0x70))
                                  (this->ConnectedSocket,local_1f8.Data,local_1f0 & 0xffffffff,
                                   local_res8,(ulonglong)piVar10 & 0xffffffff00000000);
                if ((cVar4 == '\0') || (local_res8[0] != HeaderByteSize)) {
                  if (3 < (byte)LogInterchangeDispatcher._0_1_) {
                    Logging::Private::BasicLog<4>
                              (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
                  }
                  this->bReadError = true;
                }
                else {
                  local_118._padding_ = 0;
                  local_118.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
                  local_118.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
                  local_118.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
                  local_118.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
                  local_118._40_8_ = 0;
                  local_118.ArSerializingDefaults = 0;
                  local_118.ArPortFlags = 0;
                  local_118.ArMaxSerializeSize = 0;
                  local_118.ArUEVer.FileVersionUE4 = 0;
                  local_118.ArUEVer.FileVersionUE5 = 0;
                  local_118.ArLicenseeUEVer = 0;
                  local_118.ArEngineVer.Major = 0;
                  local_118.ArEngineVer.Minor = 0;
                  local_118.ArEngineVer.Patch = 0;
                  local_118.ArEngineVer._6_2_ = 0;
                  local_118.ArEngineVer.Changelist = 0;
                  local_118.CustomVersionContainer = (FCustomVersionContainer *)0x0;
                  local_118.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
                  local_118.SavePackageData = (FArchiveSavePackageData *)0x0;
                  local_118.SerializedProperty = (FProperty *)0x0;
                  local_118.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
                  local_118.bCustomVersionsAreReset = false;
                  local_118._129_7_ = 0;
                  local_118.NextProxy = (FArchiveState *)0x0;
                  FArchiveState::FArchiveState(&local_118);
                  local_88 = 0;
                  local_118._padding_ = (longlong)&___7FMemoryReader__6B_;
                  local_80 = &local_1f8;
                  local_78 = 0x7fffffffffffffff;
                  FArchiveState::SetIsLoading(&local_118,true);
                  (**(code **)(local_118._padding_ + 0x108))(&local_118,0);
                  Interchange::operator<<((FArchive *)&local_118,&(this->IncommingMessage).Header);
                  uVar1 = (this->IncommingMessage).Header.ByteSize;
                  if (uVar1 < 0x100001) {
                    if ((this->IncommingMessage).Content.ArrayMax < (int)uVar1) {
                      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (1,1,uVar1,&(this->IncommingMessage).Content.AllocatorInstance,
                                 (this->IncommingMessage).Content.ArrayNum,
                                 &(this->IncommingMessage).Content.ArrayMax);
                    }
                    FArchive::~FArchive((FArchive *)&local_118);
                    if (local_1f8.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1f8.Data);
                    }
                    if (-1 < (this->IncommingMessage).Header.ByteSize) goto LAB_14e666f99;
                    goto LAB_14e666d2c;
                  }
                  if (3 < (byte)LogInterchangeDispatcher._0_1_) {
                    Logging::Private::BasicLog<4>
                              (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
                  }
                  this->bReadError = true;
                  FArchive::~FArchive((FArchive *)&local_118);
                }
                if (local_1f8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1f8.Data);
                }
              }
            }
          }
          else {
LAB_14e666f99:
            cVar4 = (**(code **)(this->ConnectedSocket->_padding_ + 0x40))
                              (this->ConnectedSocket,local_1e4);
            if (cVar4 != '\0') {
              iVar5 = (this->IncommingMessage).Content.ArrayNum;
              piVar10 = &(this->IncommingMessage).Content.ArrayNum;
              uVar9 = (this->IncommingMessage).Header.ByteSize - iVar5;
              uVar1 = uVar9;
              if ((int)local_1e4[0] < (int)uVar9) {
                uVar1 = local_1e4[0];
              }
              pFVar3 = (this->IncommingMessage).Content.AllocatorInstance.Data;
              Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar1,&(this->IncommingMessage).Content.AllocatorInstance,piVar10,
                         &(this->IncommingMessage).Content.ArrayMax);
              local_res8[0] = 0xffffffff;
              (**(code **)(this->ConnectedSocket->_padding_ + 0x70))
                        (this->ConnectedSocket,pFVar3 + iVar5,uVar1,local_res8,
                         (ulonglong)piVar10 & 0xffffffff00000000);
              if (local_res8[0] == uVar1) {
                if (local_res8[0] == uVar9) {
                  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                            (param_1,&(this->IncommingMessage).Content);
                  (this->IncommingMessage).Header.ByteSize = -1;
                  pTVar8 = &(this->IncommingMessage).Content;
                  if (pTVar8 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_60) {
                    pFVar3 = (pTVar8->AllocatorInstance).Data;
                    if (pFVar3 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar3);
                    }
                    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                    (this->IncommingMessage).Content.ArrayNum = 0;
                    (this->IncommingMessage).Content.ArrayMax = 0;
                  }
                  bVar7 = true;
                  goto LAB_14e666d2e;
                }
              }
              else {
                this->bReadError = true;
                if (3 < (byte)LogInterchangeDispatcher._0_1_) {
                  pFVar6 = &::LOG_Static;
                  goto LAB_14e666d27;
                }
              }
            }
          }
        }
      }
    }
  }
  else if (3 < (byte)LogInterchangeDispatcher._0_1_) {
    pFVar6 = &::LOG_Static;
LAB_14e666d27:
    Logging::Private::BasicLog<4>(pFVar6,(FLogCategoryBase *)&LogInterchangeDispatcher);
  }
LAB_14e666d2c:
  bVar7 = false;
LAB_14e666d2e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar7;
}

// SendMessage @ 14e667be0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Interchange::FNetworkNode::SendMessage
          (FNetworkNode *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  FStaticBasicLogRecord *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  int local_res8 [2];
  FMessageHeader local_res20 [2];
  void *local_118;
  undefined8 local_110;
  undefined8 local_108;
  FNetworkNode *local_100;
  FArchiveState local_f8;
  undefined8 local_68;
  void **local_60;
  undefined8 local_58;
  
  lpCriticalSection = &this->SendReceiveCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bWriteError == false) {
    if (this->ConnectedSocket == (FSocket *)0x0) {
      if (3 < (byte)LogInterchangeDispatcher._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
        bVar5 = false;
        goto LAB_14e667e7d;
      }
    }
    else {
      iVar6 = (**(code **)(this->ConnectedSocket->_padding_ + 0x88))();
      if (iVar6 == 2) {
        if (3 < (byte)LogInterchangeDispatcher._0_1_) {
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher)
          ;
          bVar5 = false;
          goto LAB_14e667e7d;
        }
      }
      else {
        cVar3 = (**(code **)(this->ConnectedSocket->_padding_ + 0x80))
                          (this->ConnectedSocket,1,(longlong)(param_2 * __real_416312d000000000));
        if (cVar3 != '\0') {
          (**(code **)(this->ConnectedSocket->_padding_ + 0xa0))(this->ConnectedSocket,0);
          uVar9 = 0;
          local_f8._padding_ = 0;
          local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          local_118 = (void *)0x0;
          local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
          local_110 = 0;
          local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
          local_f8._40_8_ = 0;
          local_108 = 0;
          local_f8.ArSerializingDefaults = 0;
          local_f8.ArPortFlags = 0;
          local_f8.ArMaxSerializeSize = 0;
          local_f8.ArUEVer.FileVersionUE4 = 0;
          local_f8.ArUEVer.FileVersionUE5 = 0;
          local_f8.ArLicenseeUEVer = 0;
          local_f8.ArEngineVer.Major = 0;
          local_f8.ArEngineVer.Minor = 0;
          local_f8.ArEngineVer.Patch = 0;
          local_f8.ArEngineVer._6_2_ = 0;
          local_f8.ArEngineVer.Changelist = 0;
          local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
          local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
          local_f8.SerializedProperty = (FProperty *)0x0;
          local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          local_f8.bCustomVersionsAreReset = false;
          local_f8._129_7_ = 0;
          local_f8.NextProxy = (FArchiveState *)0x0;
          local_100 = this;
          FArchiveState::FArchiveState(&local_f8);
          local_68 = 0;
          local_f8._padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          local_60 = &local_118;
          local_58 = 0;
          FArchiveState::SetIsSaving(&local_f8,true);
          (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
          local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
          local_res20[0].ByteSize = param_1->ArrayNum;
          Interchange::operator<<((FArchive *)&local_f8,local_res20);
          pvVar1 = local_118;
          uVar2 = (uint)local_110;
          bVar10 = 1;
          do {
            uVar8 = (uint)uVar9;
            if (uVar2 <= uVar8) {
              if (uVar8 == uVar2) {
                bVar5 = `UE::Interchange::FNetworkNode::SendMessage'::__l2::<lambda_1>::operator()
                                  (&local_100,param_1);
                if (bVar5) {
                  bVar5 = true;
                  goto LAB_14e667e4c;
                }
                if ((byte)LogInterchangeDispatcher._0_1_ < 4) goto LAB_14e667e40;
                pFVar7 = &::LOG_Static;
                goto LAB_14e667e34;
              }
              break;
            }
            local_res8[0] = 0;
            bVar4 = (**(code **)(this->ConnectedSocket->_padding_ + 0x60))
                              (this->ConnectedSocket,uVar9 + (longlong)pvVar1,uVar2 - uVar8,
                               local_res8);
            uVar9 = (ulonglong)(uVar8 + local_res8[0]);
            bVar10 = bVar10 & bVar4;
          } while (bVar10 != 0);
          if (3 < (byte)LogInterchangeDispatcher._0_1_) {
            pFVar7 = &::LOG_Static;
LAB_14e667e34:
            Logging::Private::BasicLog<4>(pFVar7,(FLogCategoryBase *)&LogInterchangeDispatcher);
          }
LAB_14e667e40:
          this->bWriteError = true;
          bVar5 = false;
LAB_14e667e4c:
          FArchive::~FArchive((FArchive *)&local_f8);
          if (local_118 != (void *)0x0) {
            FMemory::Free(local_118);
          }
          goto LAB_14e667e7d;
        }
        if (3 < (byte)LogInterchangeDispatcher._0_1_) {
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher)
          ;
        }
      }
    }
  }
  else if (3 < (byte)LogInterchangeDispatcher._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    bVar5 = false;
    goto LAB_14e667e7d;
  }
  bVar5 = false;
LAB_14e667e7d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar5;
}

