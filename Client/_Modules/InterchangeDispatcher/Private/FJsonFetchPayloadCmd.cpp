// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 5

// FromJson @ 14e663dc0

bool __thiscall
UE::Interchange::FJsonFetchPayloadCmd::FromJson(FJsonFetchPayloadCmd *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar8;
  FString *pFVar9;
  undefined8 *puVar10;
  FJsonObject *pFVar11;
  bool bVar12;
  TSharedPtr<FJsonObject,1> *local_res18 [2];
  TSharedPtr<FJsonObject,1> local_158;
  FString local_148;
  StackState local_138;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  void *local_88 [2];
  TStringView<wchar_t> local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  pTVar8 = TJsonStringReader<wchar_t>::Create(&local_b8,param_1);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  bVar12 = false;
  local_138.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Identifier.Data.ArrayNum = 0;
  local_138.Identifier.Data.ArrayMax = 0;
  local_138.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Object = (FJsonObject *)0x0;
  local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_138.Array.ArrayNum = 0;
  local_138.Array.ArrayMax = 0;
  local_138.Object.Object = (FJsonObject *)0x0;
  local_138.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_138,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_138,&local_158);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data,
               local_138.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_138.Array.AllocatorInstance.Data);
    }
    if (local_138.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_158.Object != (FJsonObject *)0x0)) {
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      if ((local_158.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar11 = local_158.Object;
      pFVar9 = IJsonCmdBase::GetCommandIDJsonKey(&local_98);
      local_f8 = (pFVar9->Data).AllocatorInstance.Data;
      iVar7 = (pFVar9->Data).ArrayNum;
      iVar6 = 0;
      iStack_f0 = iVar7 + -1;
      if (iVar7 == 0) {
        iStack_f0 = iVar6;
      }
      local_a8._12_4_ = uStack_ec;
      local_a8.Size = iStack_f0;
      local_a8.DataPtr = (wchar_t *)local_f8;
      bVar4 = FJsonObject::TryGetStringField(pFVar11,&local_a8,&local_148);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_88);
        if (local_148.Data.ArrayNum == *(int *)(puVar10 + 1)) {
          if (1 < local_148.Data.ArrayNum) {
            iVar7 = wcscmp((wchar_t *)local_148.Data.AllocatorInstance.Data,(wchar_t *)*puVar10);
            bVar12 = iVar7 != 0;
          }
        }
        else {
          bVar12 = local_148.Data.ArrayNum + *(int *)(puVar10 + 1) != 1;
        }
        if (local_88[0] != (void *)0x0) {
          FMemory::Free(local_88[0]);
        }
        if (bVar12) goto LAB_14e66414e;
        if ((local_158.Object == (FJsonObject *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = local_158.Object;
        pFVar9 = IJsonCmdBase::GetTranslatorIDJsonKey(&local_68);
        local_e8 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_e0 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_e0 = iVar6;
        }
        local_78._12_4_ = uStack_dc;
        local_78.Size = iStack_e0;
        local_78.DataPtr = (wchar_t *)local_e8;
        bVar12 = FJsonObject::TryGetStringField(pFVar11,&local_78,&this->TranslatorID);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e66414e;
        local_res18[0] = (TSharedPtr<FJsonObject,1> *)0x0;
        if ((local_158.Object == (FJsonObject *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = local_158.Object;
        pFVar9 = IJsonCmdBase::GetCommandDataJsonKey(&local_48);
        local_d8 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_d0 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_d0 = iVar6;
        }
        local_58._12_4_ = uStack_cc;
        local_58.Size = iStack_d0;
        local_58.DataPtr = (wchar_t *)local_d8;
        bVar12 = FJsonObject::TryGetObjectField(pFVar11,&local_58,local_res18);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e66414e;
        pFVar11 = TSharedPtr<FJsonObject,1>::operator->(local_res18[0]);
        pFVar9 = GetPayloadKeyJsonKey(&local_28);
        local_c8 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_c0 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_c0 = iVar6;
        }
        local_38._12_4_ = uStack_bc;
        local_38.Size = iStack_c0;
        local_38.DataPtr = (wchar_t *)local_c8;
        bVar12 = FJsonObject::TryGetStringField(pFVar11,&local_38,&this->PayloadKey);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e66414e;
        *(undefined1 *)&this->_padding_ = 1;
        bVar12 = true;
      }
      else {
LAB_14e66414e:
        bVar12 = false;
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      goto LAB_14e663e71;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data,
               local_138.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_138.Array.AllocatorInstance.Data);
    }
    if (local_138.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Identifier.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = false;
LAB_14e663e71:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar12;
}

// FromJson @ 14e664a30

bool __thiscall
UE::Interchange::FJsonFetchPayloadCmd::JsonResultParser::FromJson
          (JsonResultParser *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  FJsonObject *this_00;
  bool bVar4;
  undefined1 uVar5;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar6;
  TSharedPtr<FJsonObject,1> local_98;
  StackState local_88;
  FString local_50;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_28;
  TStringView<wchar_t> local_18;
  
  pTVar6 = TJsonStringReader<wchar_t>::Create(&local_28,param_1);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_88.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Identifier.Data.ArrayNum = 0;
  local_88.Identifier.Data.ArrayMax = 0;
  local_88.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Object = (FJsonObject *)0x0;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_88.Array.ArrayNum = 0;
  local_88.Array.ArrayMax = 0;
  local_88.Object.Object = (FJsonObject *)0x0;
  local_88.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_88,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_88,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data,
               local_88.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_88.Array.AllocatorInstance.Data);
    }
    if (local_88.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_98.Object != (FJsonObject *)0x0)) {
      if ((local_98.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      this_00 = local_98.Object;
      ::FString::FString(&local_50,L"ResultFile");
      local_38 = local_50.Data.AllocatorInstance.Data;
      iStack_30 = local_50.Data.ArrayNum + -1;
      if (local_50.Data.ArrayNum == 0) {
        iStack_30 = 0;
      }
      local_18._12_4_ = uStack_2c;
      local_18.Size = iStack_30;
      local_18.DataPtr = (wchar_t *)local_50.Data.AllocatorInstance.Data;
      bVar4 = FJsonObject::TryGetStringField(this_00,&local_18,&this->ResultFilename);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      goto LAB_14e664adc;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data,
               local_88.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_88.Array.AllocatorInstance.Data);
    }
    if (local_88.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Identifier.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
LAB_14e664adc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar4;
}

// GetPayloadKeyJsonKey @ 14e6659e0

FString * __cdecl
UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
                          ::__l2::Key,L"PayloadKey");
      atexit(`UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey'::__l2::
             _dynamic_atexit_destructor_for__Key__);
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  _Src = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
         ::__l2::Key.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
       ::__l2::Key.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// ToJson @ 14e669730

FString * __thiscall
UE::Interchange::FJsonFetchPayloadCmd::ToJson
          (FJsonFetchPayloadCmd *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  FJsonObject *this_01;
  bool bVar3;
  FString *pFVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  FString local_f8;
  FString local_e8;
  TSharedPtr<FJsonObject,1> local_d8;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_c8;
  TSharedPtr<FJsonObject,1> local_b8;
  TSharedRef<FJsonObject,1> local_a8;
  TSharedRef<FJsonObject,1> local_98;
  FString local_88;
  void *local_78 [2];
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  
  if ((char)this->_padding_ == '\0') {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7654341662386159745>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcherTask.cpp"
                       ,0x81,"bIsDataInitialize");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar5 = MakeShared<FJsonObject,1>(&local_a8);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this_00 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  pTVar5 = MakeShared<FJsonObject,1>(&local_98);
  local_d8.Object = pTVar5->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 8))(this,local_78);
  pFVar6 = IJsonCmdBase::GetCommandIDJsonKey(&local_88);
  FJsonObject::SetStringField(this_00,pFVar6,pFVar4);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x10))(this,local_58);
  pFVar6 = IJsonCmdBase::GetTranslatorIDJsonKey(&local_68);
  FJsonObject::SetStringField(this_00,pFVar6,pFVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (local_d8.Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_01 = local_d8.Object;
  if ((char)this->_padding_ == '\0') {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3563086482006605615>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Public\\InterchangeDispatcherTask.h"
                       ,0xd1,"bIsDataInitialize");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_e8.Data.ArrayNum = (this->PayloadKey).Data.ArrayNum;
  lVar7 = (longlong)local_e8.Data.ArrayNum;
  _Src = (this->PayloadKey).Data.AllocatorInstance.Data;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_e8.Data.ArrayNum == 0) {
    local_e8.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,local_e8.Data.ArrayNum,
               &local_e8.Data.ArrayMax);
    memcpy(local_e8.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  pFVar4 = GetPayloadKeyJsonKey(&local_48);
  FJsonObject::SetStringField(this_01,pFVar4,&local_e8);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = IJsonCmdBase::GetCommandDataJsonKey(&local_38);
  FJsonObject::SetObjectField(this_00,pFVar4,&local_d8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_c8,&local_f8,0);
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Object = this_00;
  local_b8.SharedReferenceCount.ReferenceController = pTVar1;
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_b8,&local_c8,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_f8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_f8.Data.ArrayMax;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ToJson @ 14e66a1a0

FString * __thiscall
UE::Interchange::FJsonFetchPayloadCmd::JsonResultParser::ToJson
          (JsonResultParser *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FJsonObject,1> *pTVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_78;
  FString local_68;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_58;
  FString local_48;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<FJsonObject,1> local_28;
  
  pTVar4 = MakeShared<FJsonObject,1>(&local_28);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  this_00 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_68.Data.ArrayNum = (this->ResultFilename).Data.ArrayNum;
  lVar6 = (longlong)local_68.Data.ArrayNum;
  _Src = (this->ResultFilename).Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  ::FString::FString(&local_48,L"ResultFile");
  FJsonObject::SetStringField(this_00,&local_48,&local_68);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_58,&local_78,0);
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = this_00;
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_38,&local_58,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

