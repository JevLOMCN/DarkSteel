// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 6

// StaticStruct @ 14cfe7320

UScriptStruct * __cdecl FLiveLinkSerializedFrameData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSerializedFrameData,(UObject *)pUVar1,
                         L"LiveLinkSerializedFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.OuterSingleton;
}

// GetPayload @ 14cfec6d0

bool __thiscall
FLiveLinkSerializedFrameData::GetPayload(FLiveLinkSerializedFrameData *this,FStructOnScope *param_1)

{
  code *pcVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  size_t sVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UScriptStruct *pUVar10;
  longlong lVar11;
  void *pvVar12;
  FGCScopeGuard local_res8 [16];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  FScriptContainerElement *local_48;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  FGCScopeGuard::FGCScopeGuard(local_res8);
  pFVar6 = ::FName::ToString(&this->PayloadTypeName,&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    local_48 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_48 = (pFVar6->Data).AllocatorInstance.Data;
    iVar5 = 0;
    if (local_48 == (FScriptContainerElement *)0x0) goto LAB_14cfec71d;
  }
  sVar7 = wcslen((wchar_t *)local_48);
  iVar5 = (int)sVar7;
LAB_14cfec71d:
  pUVar8 = Z_Construct_UClass_UStruct_NoRegister();
  local_38._12_4_ = uStack_3c;
  local_38.Size = iVar5;
  local_38.DataPtr = (wchar_t *)local_48;
  pUVar9 = StaticFindObject(pUVar8,(UObject *)0x0,&local_38,None);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  if (pUVar9 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    FVar2 = local_res18;
    (**(code **)(param_1->_padding_ + 0x40))(param_1);
    (param_1->ScriptStruct).WeakPtr = FVar2;
    (**(code **)param_1->_padding_)(param_1);
    pUVar10 = (UScriptStruct *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if (((*(int *)(pUVar10->_padding_ + 0x38) < iVar5) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
         &pUVar8->_padding_)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PayloadStruct->IsA<UScriptStruct>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkCompression.cpp"
                           ,0xd5,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    lVar11 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
    if (lVar11 != 0) {
      pvVar12 = (void *)(**(code **)(param_1->_padding_ + 0x18))(param_1);
      bVar3 = PayloadDetail::DeserializeAndDecompress(pUVar10,pvVar12,this);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// GetPayload @ 14cfec870

bool __thiscall
FLiveLinkSerializedFrameData::GetPayload
          (FLiveLinkSerializedFrameData *this,UScriptStruct *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *local_38;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if (((param_1 == (UScriptStruct *)0x0) || (param_2 == (void *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPayloadType && InOutPayloadData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkCompression.cpp"
                         ,0xde,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar5 = ::FName::ToString(&this->PayloadTypeName,&local_18);
  if ((pFVar5->Data).ArrayNum == 0) {
    local_38 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_38 = (pFVar5->Data).AllocatorInstance.Data;
    iVar4 = 0;
    if (local_38 == (FScriptContainerElement *)0x0) goto LAB_14cfec8f1;
  }
  sVar6 = wcslen((wchar_t *)local_38);
  iVar4 = (int)sVar6;
LAB_14cfec8f1:
  pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
  local_28._12_4_ = uStack_2c;
  local_28.Size = iVar4;
  local_28.DataPtr = (wchar_t *)local_38;
  pUVar8 = StaticFindObject(pUVar7,(UObject *)0x0,&local_28,None);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pUVar8 != (UObject *)0x0) {
    if (((*(int *)&pUVar8[1].field_0x10 <= (int)param_1->_padding_) &&
        (*(undefined1 **)(param_1->_padding_ + (longlong)*(int *)&pUVar8[1].field_0x10 * 8) ==
         &pUVar8[1].field_0x8)) &&
       ((param_1 != (UScriptStruct *)0x0 &&
        ((param_2 != (void *)0x0 &&
         (bVar2 = PayloadDetail::DeserializeAndDecompress(param_1,param_2,this), bVar2)))))) {
      return true;
    }
  }
  return false;
}

// IsTypeChildOf @ 14cfee500

bool __thiscall
FLiveLinkSerializedFrameData::IsTypeChildOf
          (FLiveLinkSerializedFrameData *this,UScriptStruct *param_1)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar1 = ::FName::ToString(&this->PayloadTypeName,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14cfee53f;
  }
  sVar2 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar2;
LAB_14cfee53f:
  pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
  pUVar4 = StaticFindObject(pUVar3,(UObject *)0x0,&local_28,None);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pUVar4 != (UObject *)0x0) {
    if ((*(int *)&pUVar4[1].field_0x10 <= (int)param_1->_padding_) &&
       (*(undefined1 **)(param_1->_padding_ + (longlong)*(int *)&pUVar4[1].field_0x10 * 8) ==
        &pUVar4[1].field_0x8)) {
      return true;
    }
  }
  return false;
}

// SetPayload @ 14cfeff30

bool __thiscall
FLiveLinkSerializedFrameData::SetPayload
          (FLiveLinkSerializedFrameData *this,FStructOnScope *param_1,
          ELiveLinkPayloadCompressionType param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UScriptStruct *pUVar5;
  UClass *pUVar6;
  void *pvVar7;
  
  pUVar5 = (UScriptStruct *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
  pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadStruct->IsA<UScriptStruct>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkCompression.cpp"
                       ,0xbc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pvVar7 = (void *)(**(code **)(param_1->_padding_ + 0x10))(param_1);
  bVar3 = SetPayload(this,pUVar5,pvVar7,param_2);
  return bVar3;
}

// SetPayload @ 14cfeffe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

bool __thiscall
FLiveLinkSerializedFrameData::SetPayload
          (FLiveLinkSerializedFrameData *this,UScriptStruct *param_1,void *param_2,
          ELiveLinkPayloadCompressionType param_3)

{
  FLiveLinkByteArray *pFVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FString *pFVar8;
  longlong *plVar9;
  FArchiveState *this_00;
  wchar_t *pwVar10;
  undefined1 auStackY_298 [32];
  FName local_258 [2];
  FArchiveState local_248;
  undefined8 local_1b8;
  FLiveLinkByteArray *local_1b0;
  undefined8 local_1a8;
  FString local_198;
  FArchiveState local_188;
  undefined8 local_f8;
  FLiveLinkByteArray *local_f0;
  undefined8 local_e8;
  FCborStructSerializerBackend local_d8;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pwVar10 = L"";
  if (((param_1 == (UScriptStruct *)0x0) || (param_2 == (void *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPayloadType && InPayloadData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkCompression.cpp"
                         ,0xc2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_198,(UObject *)0x0);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  ::FName::FName(local_258,pwVar10);
  this->PayloadTypeName = local_258[0];
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->PayloadBytes;
  this->PayloadSize = 0;
  piVar2 = &(this->PayloadBytes).Bytes.ArrayMax;
  iVar4 = *piVar2;
  (this->PayloadBytes).Bytes.ArrayNum = 0;
  if (iVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)pFVar1,0,piVar2);
  }
  if ((param_1 != (UScriptStruct *)0x0) && (param_2 != (void *)0x0)) {
    if (this->SerializationMethod == Cbor) {
      local_188._padding_ = 0;
      local_188.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_188.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_188.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_188.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_188._40_8_ = 0;
      local_188.ArSerializingDefaults = 0;
      local_188.ArPortFlags = 0;
      local_188.ArMaxSerializeSize = 0;
      local_188.ArUEVer.FileVersionUE4 = 0;
      local_188.ArUEVer.FileVersionUE5 = 0;
      local_188.ArLicenseeUEVer = 0;
      local_188.ArEngineVer.Major = 0;
      local_188.ArEngineVer.Minor = 0;
      local_188.ArEngineVer.Patch = 0;
      local_188.ArEngineVer._6_2_ = 0;
      local_188.ArEngineVer.Changelist = 0;
      local_188.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_188.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_188.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_188.SerializedProperty = (FProperty *)0x0;
      local_188.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_188.bCustomVersionsAreReset = false;
      local_188._129_7_ = 0;
      local_188.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_188);
      local_f8 = 0;
      local_188._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      local_e8 = 0;
      local_f0 = pFVar1;
      FArchiveState::SetIsSaving(&local_188,true);
      (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
      local_188._padding_ = (longlong)&___7FMemoryWriter__6B_;
      FCborStructSerializerBackend::FCborStructSerializerBackend
                (&local_d8,(FArchive *)&local_188,Default);
      local_88._0_4_ = Serialize;
      local_88._4_4_ = Ignore;
      local_88._8_4_ = KeyValuePair;
      local_88._16_8_ = 0;
      local_50 = (longlong *)0x0;
      FStructSerializer::Serialize
                (param_2,(UStruct *)param_1,(IStructSerializerBackend *)&local_d8,
                 (FStructSerializerPolicies *)local_88);
      if (local_88._16_8_ != 0) {
        plVar9 = (longlong *)(local_88 + 0x20);
        if (local_50 != (longlong *)0x0) {
          plVar9 = local_50;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      bVar3 = local_188._41_1_;
      FCborStructSerializerBackend::~FCborStructSerializerBackend(&local_d8);
      this_00 = &local_188;
    }
    else {
      local_248._padding_ = 0;
      local_248.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_248.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_248.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_248.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_248._40_8_ = 0;
      local_248.ArSerializingDefaults = 0;
      local_248.ArPortFlags = 0;
      local_248.ArMaxSerializeSize = 0;
      local_248.ArUEVer.FileVersionUE4 = 0;
      local_248.ArUEVer.FileVersionUE5 = 0;
      local_248.ArLicenseeUEVer = 0;
      local_248.ArEngineVer.Major = 0;
      local_248.ArEngineVer.Minor = 0;
      local_248.ArEngineVer.Patch = 0;
      local_248.ArEngineVer._6_2_ = 0;
      local_248.ArEngineVer.Changelist = 0;
      local_248.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_248.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_248.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_248.SerializedProperty = (FProperty *)0x0;
      local_248.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_248.bCustomVersionsAreReset = false;
      local_248._129_7_ = 0;
      local_248.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_248);
      local_1b8 = 0;
      local_248._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      local_1a8 = 0;
      local_1b0 = pFVar1;
      FArchiveState::SetIsSaving(&local_248,true);
      (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
      local_248._padding_ = (longlong)&___7FMemoryWriter__6B_;
      FArchiveState::SetWantBinaryPropertySerialization(&local_248,true);
      UScriptStruct::SerializeItem(param_1,(FArchive *)&local_248,param_2,(void *)0x0);
      this_00 = &local_248;
      bVar3 = local_248._41_1_;
    }
    FArchive::~FArchive((FArchive *)this_00);
    if (((bVar3 >> 1 & 1) == 0) &&
       (bVar6 = PayloadDetail::TryCompressImpl(param_1,param_2,this,param_3), bVar6)) {
      return true;
    }
  }
  return false;
}

