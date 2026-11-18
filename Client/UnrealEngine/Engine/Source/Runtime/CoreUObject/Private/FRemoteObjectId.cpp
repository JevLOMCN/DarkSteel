// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// FRemoteObjectId @ 1421b30f0

FRemoteObjectId * __thiscall
FRemoteObjectId::FRemoteObjectId(FRemoteObjectId *this,UObjectBase *param_1)

{
  (this->field0_0x0).Id = 0;
  return this;
}

// Compare @ 1421c2600

long64 __thiscall FRemoteObjectId::Compare(FRemoteObjectId *this,FRemoteObjectId param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1.field0_0x0 >> 0x36;
  uVar3 = param_1.field0_0x0._4_4_ >> 0x16;
  FRemoteServerId::VerifyComparableServerIds((uint)((this->field0_0x0).Id >> 0x36),uVar3);
  uVar1 = (this->field0_0x0).Id;
  uVar2 = uVar1 >> 0x36;
  if ((uint)(uVar1 >> 0x36) == 0x3fd) {
    uVar2 = (ulonglong)FRemoteServerId::GlobalServerId.Id;
  }
  if (uVar3 == 0x3fd) {
    uVar4 = (ulonglong)FRemoteServerId::GlobalServerId.Id;
  }
  return (uVar2 << 0x35 | uVar1 >> 1 & 0x1fffffffffffff) -
         (uVar4 << 0x35 | (ulonglong)param_1.field0_0x0 >> 1 & 0x1fffffffffffff);
}

// FromString @ 1421cc410

FRemoteObjectId __cdecl FRemoteObjectId::FromString(TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRemoteObjectId FVar4;
  TStringView<wchar_t> *in_RDX;
  TStringView<wchar_t> local_res10;
  wchar_t *local_res20;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = in_RDX->DataPtr;
  local_18.Size = in_RDX->Size;
  local_18._12_4_ = *(undefined4 *)&in_RDX->field_0xc;
  iVar3 = UE::String::FindFirstChar(&local_18,L'-',CaseSensitive);
  if (iVar3 == -1) {
    local_res20 = (wchar_t *)0x0;
    ::LexFromString((ulong64 *)&local_res20,in_RDX);
    if (((ulonglong)local_res20 & 0xffc0000000000000) != 0) {
      param_1->DataPtr = local_res20;
      return (FRemoteObjectId)(FRemoteObjectId_u_0)param_1;
    }
    param_1->DataPtr = (wchar_t *)0x0;
  }
  else {
    local_28.DataPtr = in_RDX->DataPtr + (iVar3 + 1);
    local_28.Size = in_RDX->Size - (iVar3 + 1);
    FRemoteServerId::FromString(&local_res10);
    local_res10._8_8_ = 0;
    ::LexFromString((ulong64 *)&local_res10.Size,&local_28);
    param_1->DataPtr =
         (wchar_t *)
         (((ulonglong)(uint)local_res10.DataPtr << 0x35 | local_res10._8_8_ & 0x1fffffffffffff) * 2)
    ;
    if (0x3ff < (uint)local_res10.DataPtr) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2664264158983225613>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                         ,0x10d,"(uint64_t)InServerId.Id <= MAX_REMOTE_OBJECT_SERVER_ID");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4.field0_0x0 = (FRemoteObjectId_u_0)(*pcVar1)();
        return (FRemoteObjectId)FVar4.field0_0x0;
      }
    }
  }
  return (FRemoteObjectId)(FRemoteObjectId_u_0)param_1;
}

// Generate @ 1421cd510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRemoteObjectId __cdecl
FRemoteObjectId::Generate(UObjectBase *param_1,wchar_t *param_2,EInternalObjectFlags param_3)

{
  wchar_t *pwVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  int iVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  FString *pFVar11;
  void *pvVar12;
  ulong64 uVar13;
  wchar_t *pwVar14;
  undefined4 in_register_00000084;
  uint in_R9D;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined4 local_res8 [2];
  TStringBuilderBase<wchar_t> local_c8;
  FName local_a8;
  FString local_a0;
  code *local_90;
  undefined4 *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res8[0] = 0;
  if (((GIsInitialLoad) || ((in_R9D >> 0x19 & 1) != 0)) || ((*(uint *)(param_2 + 4) & 0x20) != 0)) {
LAB_1421cd700:
    param_1->_padding_ = 0;
    if ((param_2 == (wchar_t *)0x0) ||
       (*(UObjectBaseUtility **)(param_2 + 0x10) == (UObjectBaseUtility *)0x0)) {
      pFVar11 = ::FString::FString(&local_50,L"");
      pFVar16 = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar15 = (pFVar11->Data).ArrayNum;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      local_60.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
    }
    else {
      pFVar11 = UObjectBaseUtility::GetPathName
                          (*(UObjectBaseUtility **)(param_2 + 0x10),&local_60,(UObject *)0x0);
      pFVar16 = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar15 = (pFVar11->Data).ArrayNum;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_a0,(wchar_t *)CONCAT44(in_register_00000084,param_3));
    local_c8.End = (wchar_t *)0x0;
    local_c8.bIsDynamic = false;
    local_c8.bIsExternal = false;
    iVar6 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar6 = 0;
    }
    local_c8.Base = (wchar_t *)0x0;
    local_c8.CurPos = (wchar_t *)0x0;
    if (0 < iVar6) {
      iVar6 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar6 = 0;
      }
      uVar13 = (longlong)iVar6 * 2;
      if (uVar13 != 0) {
        TStringBuilderBase<wchar_t>::Extend(&local_c8,(longlong)iVar6);
      }
      if (iVar6 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(local_c8.CurPos,pFVar16,uVar13);
        local_c8.CurPos = (wchar_t *)((longlong)pvVar12 + uVar13);
      }
      if (local_c8.End < local_c8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
      }
      *local_c8.CurPos = L':';
      local_c8.CurPos = local_c8.CurPos + 1;
    }
    FVar5.Data = local_a0.Data.AllocatorInstance.Data;
    iVar15 = local_a0.Data.ArrayNum + -1;
    if (local_a0.Data.ArrayNum == 0) {
      iVar15 = 0;
    }
    uVar13 = (ulong64)iVar15;
    if (local_c8.End < local_c8.CurPos + uVar13) {
      TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar13);
    }
    if (iVar15 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_c8.CurPos,FVar5.Data,uVar13 * 2);
      local_c8.CurPos = (wchar_t *)((longlong)pvVar12 + uVar13 * 2);
    }
    uVar13 = CityHash64((char *)local_c8.Base,
                        (int)((longlong)local_c8.CurPos - (longlong)local_c8.Base >> 1) * 2);
    param_1->_padding_ = (uVar13 & 0x1fffffffffffff | 0xffc0000000000000) * 2;
    if (5 < (byte)LogRemoteObject._0_1_) {
      ToString((FRemoteObjectId *)param_1,&local_40,Default);
      if (local_c8.End < local_c8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
      }
      *local_c8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
    local_70.Data.AllocatorInstance.Data = pFVar16;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_88 = local_res8;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar7);
    if (((pFVar8[9] != (FTlsAutoCleanup)0x0) ||
        ((pFVar8[0x2f] != (FTlsAutoCleanup)0x0 && (0 < *(int *)((longlong)pFVar8[0x2f] + 0xc))))) ||
       ((*(uint *)(param_2 + 4) >> 0x13 & 1) != 0)) {
      bVar4 = false;
      pwVar14 = param_2;
      do {
        lVar2 = *(longlong *)(pwVar14 + 8);
        if ((*(uint *)(pwVar14 + 4) & 0x20) != 0) goto LAB_1421cd700;
        pUVar9 = Z_Construct_UClass_UStruct_NoRegister();
        if (pUVar9 != (UClass *)0x0) {
          iVar15 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar15) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar15 * 8) !=
              &pUVar9->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_1421cd700;
        }
        pwVar1 = pwVar14 + 4;
        pwVar14 = *(wchar_t **)(pwVar14 + 0x10);
        if ((*(uint *)pwVar1 >> 0x1d & 1) != 0) {
          bVar4 = true;
        }
      } while (pwVar14 != (wchar_t *)0x0);
      if (!bVar4) goto LAB_1421cd700;
    }
    param_1->_padding_ = 0;
    LOCK();
    UNLOCK();
    uVar10 = (ulonglong)UE::RemoteObject::Private::RemoteObjectSerialNumber & 0x1fffffffffffff;
    UE::RemoteObject::Private::RemoteObjectSerialNumber =
         (atomic<unsigned___int64>)
         ((longlong)UE::RemoteObject::Private::RemoteObjectSerialNumber + 1);
    param_1->_padding_ = (uVar10 | 0xffa0000000000000) * 2;
    if ((byte)LogRemoteObject._0_1_ < 6) {
      return (FRemoteObjectId)(FRemoteObjectId_u_0)param_1;
    }
    ToString((FRemoteObjectId *)param_1,&local_70,Default);
    if (param_2 != (wchar_t *)0x0) {
      local_a8 = *(FName *)(param_2 + 0xc);
      ::FName::ToString(&local_a8,&local_80);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
    if ((param_2 != (wchar_t *)0x0) &&
       (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return (FRemoteObjectId)(FRemoteObjectId_u_0)param_1;
}

// NetSerialize @ 1421d6400

bool __thiscall
FRemoteObjectId::NetSerialize
          (FRemoteObjectId *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRemoteServerId FVar5;
  uint uVar6;
  FRemoteObjectId_u_0 FVar7;
  ulonglong uVar8;
  FRemoteObjectId_u_0 FStackX_8;
  
  FVar7._s_0 = (FRemoteObjectId_u_0_s_0)(this->field0_0x0).Id;
  if ((param_1->field_0x28 & 4) != 0) {
    FVar5.Id = (uint)((ulonglong)FVar7 >> 0x36);
    FStackX_8._s_0 = FVar7._s_0;
    if (((FVar5.Id == 0x3fd) &&
        (FVar5.Id = FRemoteServerId::GlobalServerId.Id, FRemoteServerId::GlobalServerId.Id == 0x3fd)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                                 ,0x9d,
                                 L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                                ), FVar5 = FRemoteServerId::GlobalServerId, bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar7.Id = (ulonglong)FVar5.Id << 0x36 | FVar7.Id & 0x3ffffffffffffe;
    if ((0x3ff < FVar5.Id) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2664264158983225613>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                           ,0x10d,"(uint64_t)InServerId.Id <= MAX_REMOTE_OBJECT_SERVER_ID"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FStackX_8 = FVar7;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((FRemoteObjectId_u_0 *)plVar1[1] < (FRemoteObjectId_u_0 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&FStackX_8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&FStackX_8.Id);
    }
  }
  else {
    FStackX_8 = (FRemoteObjectId_u_0)((FRemoteObjectId_u_0 *)*plVar1)->Id;
    *plVar1 = *plVar1 + 8;
  }
  if (((uint)((ulonglong)FStackX_8 >> 0x36) == 0x3fd) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalizedId.GetServerId().Id != (uint32)ERemoteServerIdConstants::Local",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                         ,0x443,L"Local server id should never be serialized"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FVar7 = FStackX_8;
  if ((param_1->field_0x28 & 1) != 0) {
    uVar8 = FStackX_8.Id >> 0x36;
    uVar6 = (uint)((ulonglong)FStackX_8 >> 0x36);
    if ((uVar6 == 0x3fd) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalizedId.GetServerId().Id != (uint32)ERemoteServerIdConstants::Local"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                           ,0x44a,L"Local server id should never be serialized"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (uVar6 == FRemoteServerId::GlobalServerId.Id) {
      uVar8 = 0x3fd;
    }
    (this->field0_0x0).Id = uVar8 << 0x36 | FVar7.Id & 0x3ffffffffffffe;
  }
  return true;
}

// Serialize @ 1421e6aa0

bool __thiscall FRemoteObjectId::Serialize(FRemoteObjectId *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRemoteServerId FVar5;
  uint uVar6;
  FRemoteObjectId_u_0 FVar7;
  ulonglong uVar8;
  FRemoteObjectId_u_0 local_res8;
  
  FVar7._s_0 = (FRemoteObjectId_u_0_s_0)(this->field0_0x0).Id;
  if ((param_1->field_0x28 & 4) != 0) {
    FVar5.Id = (uint)((ulonglong)FVar7 >> 0x36);
    local_res8._s_0 = FVar7._s_0;
    if (((FVar5.Id == 0x3fd) &&
        (FVar5.Id = FRemoteServerId::GlobalServerId.Id, FRemoteServerId::GlobalServerId.Id == 0x3fd)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                                 ,0x9d,
                                 L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                                ), FVar5 = FRemoteServerId::GlobalServerId, bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar7.Id = (ulonglong)FVar5.Id << 0x36 | FVar7.Id & 0x3ffffffffffffe;
    if ((0x3ff < FVar5.Id) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2664264158983225613>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                           ,0x10d,"(uint64_t)InServerId.Id <= MAX_REMOTE_OBJECT_SERVER_ID"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_res8 = FVar7;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((FRemoteObjectId_u_0 *)plVar1[1] < (FRemoteObjectId_u_0 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_res8.Id);
    }
  }
  else {
    local_res8 = (FRemoteObjectId_u_0)((FRemoteObjectId_u_0 *)*plVar1)->Id;
    *plVar1 = *plVar1 + 8;
  }
  if (((uint)((ulonglong)local_res8 >> 0x36) == 0x3fd) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalizedId.GetServerId().Id != (uint32)ERemoteServerIdConstants::Local",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                         ,0x443,L"Local server id should never be serialized"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FVar7 = local_res8;
  if ((param_1->field_0x28 & 1) != 0) {
    uVar8 = local_res8.Id >> 0x36;
    uVar6 = (uint)((ulonglong)local_res8 >> 0x36);
    if ((uVar6 == 0x3fd) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalizedId.GetServerId().Id != (uint32)ERemoteServerIdConstants::Local"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                           ,0x44a,L"Local server id should never be serialized"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (uVar6 == FRemoteServerId::GlobalServerId.Id) {
      uVar8 = 0x3fd;
    }
    (this->field0_0x0).Id = uVar8 << 0x36 | FVar7.Id & 0x3ffffffffffffe;
  }
  return true;
}

// ToString @ 1421e9a20

/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __thiscall
FRemoteObjectId::ToString
          (FRemoteObjectId *this,FString *__return_storage_ptr__,ERemoteIdToStringVerbosity param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  FString *pFVar8;
  FRemoteObjectStub *pFVar9;
  UClass *pUVar10;
  ERemoteIdToStringVerbosity EVar11;
  FRemoteServerId local_res18 [2];
  FRemoteServerId local_res20 [2];
  FString local_128;
  FString local_118;
  FString local_108;
  FRemoteObjectTables local_f8;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (param_1 == Default) {
    EVar11 = FullNameAttributes;
    if (GRemoteIdToStringVerbosity < 5) {
      EVar11 = GRemoteIdToStringVerbosity;
    }
    param_1 = Id;
    if (1 < (int)EVar11) {
      param_1 = EVar11;
    }
  }
  if ((int)param_1 < 2) {
    local_res18[0].Id = (uint)((this->field0_0x0).Id >> 0x36);
    FRemoteServerId::ToString(local_res18,&local_90);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s-%llu");
    goto LAB_1421e9f71;
  }
  bVar6 = false;
  bVar5 = false;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  pUVar7 = StaticFindObjectFastInternal
                     (*(FRemoteObjectId *)&(this->field0_0x0)._s_0,RF_NoFlags,Borrowed);
  if (pUVar7 == (UObject *)0x0) {
    FRemoteObjectPathName::FRemoteObjectPathName
              ((FRemoteObjectPathName *)&local_f8,*(FRemoteObjectId *)&(this->field0_0x0)._s_0);
    if (local_f8.Names.ArrayNum == 0) {
      ::FString::operator=(&local_128,L"Unknown object");
    }
    else {
      bVar6 = true;
      if (param_1 == Name) {
        if ((local_f8.Names.ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar2)();
          return pFVar8;
        }
        local_c8 = *(FName *)local_f8.Names.AllocatorInstance.Data;
        pFVar8 = ::FName::ToString(&local_c8,&local_60);
        if (&local_128 != pFVar8) {
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          local_128.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          local_128.Data.ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      else if (param_1 == PathName) {
        UE::RemoteObject::Private::RemotePathNameToString<FRemoteObjectPathName>
                  (&local_a0,(FRemoteObjectPathName *)&local_f8,&local_f8,0);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        local_128.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
        local_128.Data.ArrayMax = local_a0.Data.ArrayMax;
        local_128.Data.ArrayNum = local_a0.Data.ArrayNum;
      }
      else if ((param_1 == FullName) || (param_1 == FullNameAttributes)) {
        pFVar9 = UE::RemoteObject::Private::FRemoteObjectMaps::FindRemoteObjectStub
                           (UE::RemoteObject::Private::ObjectMaps,
                            *(FRemoteObjectId *)&(this->field0_0x0)._s_0);
        if ((pFVar9 == (FRemoteObjectStub *)0x0) ||
           (pUVar7 = (UObject *)(pFVar9->Class).PathNameOrClass, pUVar7 == (UObject *)0x0)) {
LAB_1421e9cc0:
          pUVar7 = (UObject *)0x0;
        }
        else if ((~(byte)pUVar7 & 1) == 0) {
          pUVar7 = UE::RemoteObject::Private::ResolveRemotePathName<FRemoteObjectPathName>
                             ((FRemoteObjectPathName *)((ulonglong)pUVar7 & 0xfffffffffffffffe),
                              (FRemoteObjectTables *)((ulonglong)pUVar7 & 0xfffffffffffffffe));
          if (pUVar7 != (UObject *)0x0) {
            pUVar10 = Z_Construct_UClass_UClass_NoRegister();
            iVar1 = (int)pUVar10->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar10->_padding_)) goto LAB_1421e9cc3;
          }
          goto LAB_1421e9cc0;
        }
LAB_1421e9cc3:
        UE::RemoteObject::Private::RemotePathNameToString<FRemoteObjectPathName>
                  (&local_b0,(FRemoteObjectPathName *)&local_f8,&local_f8,0);
        if (pUVar7 == (UObject *)0x0) {
          ::FString::FString(&local_108,L"None");
        }
        else {
          local_d0.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
          local_d0.Number = *(uint *)&pUVar7->field_0x1c;
          ::FName::ToString(&local_d0,&local_108);
        }
        ::FString::PrintfImpl(&local_118,L"%s %s");
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        uVar3 = local_118.Data._8_8_;
        local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        uVar4 = local_118.Data._8_8_;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = (int)uVar3;
        local_118.Data.ArrayMax = SUB84(uVar3,4);
        local_128.Data.ArrayNum = local_118.Data.ArrayNum;
        local_128.Data.ArrayMax = local_118.Data.ArrayMax;
        local_118.Data._8_8_ = uVar4;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
    }
    bVar5 = bVar6;
    if (local_f8.RemoteIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.RemoteIds.AllocatorInstance.Data);
    }
LAB_1421e9e8c:
    if (local_f8.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Names.AllocatorInstance.Data);
    }
LAB_1421e9e96:
    if (4 < (int)param_1) {
      bVar6 = UE::RemoteObject::Handle::IsRemote(*(FRemoteObjectId *)&(this->field0_0x0)._s_0);
      if (bVar6) {
        ::FString::AppendChars(&local_128,L" (remote)",9);
      }
      ::FString::AppendChars(&local_128,L" (owned)",8);
      if (bVar5) {
        ::FString::AppendChars(&local_128,L" (stub)",7);
      }
    }
  }
  else if (param_1 == Name) {
    local_d8.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
    local_d8.Number = *(uint *)&pUVar7->field_0x1c;
    ::FName::ToString(&local_d8,&local_c0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_128.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    local_128.Data.ArrayMax = local_c0.Data.ArrayMax;
    local_128.Data.ArrayNum = local_c0.Data.ArrayNum;
  }
  else {
    if (param_1 != PathName) {
      if ((param_1 == FullName) || (param_1 == FullNameAttributes)) {
        pFVar8 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)pUVar7,&local_80,(UObject *)0x0,None);
        local_f8.Names.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
        bVar5 = bVar6;
        if (&local_128 != pFVar8) {
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          local_128.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          local_128.Data.ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
          local_f8.Names.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
        }
        goto LAB_1421e9e8c;
      }
      goto LAB_1421e9e96;
    }
    pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_70,(UObject *)0x0);
    if (&local_128 != pFVar8) {
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      local_128.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_128.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  local_res20[0].Id = (uint)((this->field0_0x0).Id >> 0x36);
  FRemoteServerId::ToString(local_res20,&local_50);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s-%llu %s");
  local_90.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
    local_90.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
  }
LAB_1421e9f71:
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

