// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 3

// ReceivePayload @ 143114640

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FNFSMessageHeader::ReceivePayload(FArrayReader *param_1,FSimpleAbstractSocket *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar7;
  FNFSMessageHeader local_d8;
  ForAnyElementType local_c8;
  int local_c0 [2];
  FArchiveState local_b8;
  undefined8 local_28;
  ForAnyElementType *local_20;
  undefined8 local_18;
  bool bVar5;
  bool bVar6;
  
  bVar6 = false;
  bVar4 = false;
  bVar5 = false;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xc,&local_c8,local_c0,local_c0 + 1);
  *(undefined8 *)(local_c8.Data + iVar2) = 0;
  *(undefined4 *)(local_c8.Data + iVar2 + 8) = 0;
  cVar1 = (**(code **)*param_2)(param_2,local_c8.Data,0xc);
  if (cVar1 == '\0') {
    if (1 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
  }
  else {
    local_b8._padding_ = 0;
    local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_b8._40_8_ = 0;
    local_b8.ArSerializingDefaults = 0;
    local_b8.ArPortFlags = 0;
    local_b8.ArMaxSerializeSize = 0;
    local_b8.ArUEVer.FileVersionUE4 = 0;
    local_b8.ArUEVer.FileVersionUE5 = 0;
    local_b8.ArLicenseeUEVer = 0;
    local_b8.ArEngineVer.Major = 0;
    local_b8.ArEngineVer.Minor = 0;
    local_b8.ArEngineVer.Patch = 0;
    local_b8.ArEngineVer._6_2_ = 0;
    local_b8.ArEngineVer.Changelist = 0;
    local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_b8.SerializedProperty = (FProperty *)0x0;
    local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_b8.bCustomVersionsAreReset = false;
    local_b8._129_7_ = 0;
    local_b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_b8);
    local_28 = 0;
    local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_20 = &local_c8;
    local_18 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_b8,true);
    (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
    local_d8.Magic = (**(code **)((longlong)*param_2 + 0x10))(param_2);
    local_d8.PayloadSize = 0;
    local_d8.PayloadCrc = 0;
    ::operator<<((FArchive *)&local_b8,&local_d8);
    uVar3 = (**(code **)((longlong)*param_2 + 0x10))(param_2);
    bVar4 = bVar6;
    if (local_d8.Magic == uVar3) {
      bVar4 = bVar5;
      if (local_d8.PayloadSize == 0) {
        bVar4 = bVar6;
        if (1 < (byte)LogSockets._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
          bVar4 = bVar5;
        }
      }
      else {
        param_1->field_0x2a = param_1->field_0x2a & 0xfe;
        param_1->field_0x2a = param_1->field_0x2a | local_b8.ArForceByteSwapping;
        iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,local_d8.PayloadSize,(ForAnyElementType *)&param_1->field_0x98,
                           (int *)&param_1->field_0xa0,(int *)&param_1->field_0xa4);
        lVar7 = (longlong)iVar2;
        *(longlong *)&param_1->field_0x90 = lVar7;
        cVar1 = (**(code **)*param_2)(param_2,*(longlong *)&param_1->field_0x98 + lVar7);
        if (cVar1 == '\0') {
          if (1 < (byte)LogSockets._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
          }
        }
        else {
          uVar3 = FCrc::MemCrc_DEPRECATED
                            ((void *)(*(longlong *)&param_1->field_0x98 + lVar7),
                             local_d8.PayloadSize,0);
          if (local_d8.PayloadCrc == uVar3) {
            bVar4 = true;
          }
          else if (1 < (byte)LogSockets._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
          }
        }
      }
    }
    else if (1 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
    FArchive::~FArchive((FArchive *)&local_b8);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return bVar4;
}

// SendPayloadAndReceiveResponse @ 143115f10

bool __cdecl
FNFSMessageHeader::SendPayloadAndReceiveResponse
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FArrayReader *param_2,
          FSimpleAbstractSocket *param_3)

{
  bool bVar1;
  
  bVar1 = WrapAndSendPayload(param_1,param_3);
  if (!bVar1) {
    return false;
  }
  bVar1 = ReceivePayload(param_2,param_3);
  return bVar1;
}

// WrapAndSendPayload @ 143118e10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FNFSMessageHeader::WrapAndSendPayload
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FSimpleAbstractSocket *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FNFSMessageHeader local_d8;
  FArchiveState local_c8;
  undefined8 local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_30;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_20;
  
  local_d8.Magic = (**(code **)((longlong)*param_2 + 0x10))(param_2);
  local_d8.PayloadSize = param_1->ArrayNum;
  if (local_d8.PayloadSize == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\NetworkMessage.h"
                       ,0xc4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_d8.PayloadCrc =
       FCrc::MemCrc_DEPRECATED((param_1->AllocatorInstance).Data,param_1->ArrayNum,0);
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_30 = &local_20;
  local_28 = 0;
  FArchiveState::SetIsSaving(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  ::operator<<((FArchive *)&local_c8,&local_d8);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
  Append<unsigned_char,TSizedDefaultAllocator<32>_>(&local_20,param_1);
  cVar4 = (**(code **)((longlong)*param_2 + 8))
                    (param_2,local_20.AllocatorInstance.Data,local_20._8_8_ & 0xffffffff);
  if (cVar4 == '\0') {
    if (1 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_c8);
  return bVar2;
}

