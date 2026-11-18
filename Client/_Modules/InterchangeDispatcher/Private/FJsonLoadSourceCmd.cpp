// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 6

// FromJson @ 14e664170

bool __thiscall
UE::Interchange::FJsonLoadSourceCmd::FromJson(FJsonLoadSourceCmd *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  TSharedPtr<FJsonObject,1> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  FString *pFVar10;
  undefined8 *puVar11;
  FJsonObject *pFVar12;
  bool bVar13;
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
  
  pTVar9 = TJsonStringReader<wchar_t>::Create(&local_b8,param_1);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar9->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  bVar13 = false;
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
  bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_138,None);
  if (bVar5) {
    bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_138,&local_158);
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
    if ((bVar5) && (local_158.Object != (FJsonObject *)0x0)) {
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      if ((local_158.Object == (FJsonObject *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar12 = local_158.Object;
      pFVar10 = IJsonCmdBase::GetCommandIDJsonKey(&local_98);
      local_f8 = (pFVar10->Data).AllocatorInstance.Data;
      iVar8 = (pFVar10->Data).ArrayNum;
      iVar7 = 0;
      iStack_f0 = iVar8 + -1;
      if (iVar8 == 0) {
        iStack_f0 = iVar7;
      }
      local_a8._12_4_ = uStack_ec;
      local_a8.Size = iStack_f0;
      local_a8.DataPtr = (wchar_t *)local_f8;
      bVar5 = FJsonObject::TryGetStringField(pFVar12,&local_a8,&local_148);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        puVar11 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_88);
        if (local_148.Data.ArrayNum == *(int *)(puVar11 + 1)) {
          if (1 < local_148.Data.ArrayNum) {
            iVar8 = wcscmp((wchar_t *)local_148.Data.AllocatorInstance.Data,(wchar_t *)*puVar11);
            bVar13 = iVar8 != 0;
          }
        }
        else {
          bVar13 = local_148.Data.ArrayNum + *(int *)(puVar11 + 1) != 1;
        }
        if (local_88[0] != (void *)0x0) {
          FMemory::Free(local_88[0]);
        }
        if (bVar13) goto LAB_14e664545;
        if ((local_158.Object == (FJsonObject *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar12 = local_158.Object;
        pFVar10 = IJsonCmdBase::GetTranslatorIDJsonKey(&local_68);
        local_e8 = (pFVar10->Data).AllocatorInstance.Data;
        iVar8 = (pFVar10->Data).ArrayNum;
        iStack_e0 = iVar8 + -1;
        if (iVar8 == 0) {
          iStack_e0 = iVar7;
        }
        local_78._12_4_ = uStack_dc;
        local_78.Size = iStack_e0;
        local_78.DataPtr = (wchar_t *)local_e8;
        bVar13 = FJsonObject::TryGetStringField(pFVar12,&local_78,&this->TranslatorID);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (!bVar13) goto LAB_14e664545;
        local_res18[0] = (TSharedPtr<FJsonObject,1> *)0x0;
        if ((local_158.Object == (FJsonObject *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar12 = local_158.Object;
        pFVar10 = IJsonCmdBase::GetCommandDataJsonKey(&local_48);
        local_d8 = (pFVar10->Data).AllocatorInstance.Data;
        iVar8 = (pFVar10->Data).ArrayNum;
        iStack_d0 = iVar8 + -1;
        if (iVar8 == 0) {
          iStack_d0 = iVar7;
        }
        local_58._12_4_ = uStack_cc;
        local_58.Size = iStack_d0;
        local_58.DataPtr = (wchar_t *)local_d8;
        bVar13 = FJsonObject::TryGetObjectField(pFVar12,&local_58,local_res18);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (!bVar13) goto LAB_14e664545;
        pFVar12 = TSharedPtr<FJsonObject,1>::operator->(local_res18[0]);
        pFVar10 = GetSourceFilenameJsonKey(&local_28);
        local_c8 = (pFVar10->Data).AllocatorInstance.Data;
        iVar8 = (pFVar10->Data).ArrayNum;
        iStack_c0 = iVar8 + -1;
        if (iVar8 == 0) {
          iStack_c0 = iVar7;
        }
        local_38._12_4_ = uStack_bc;
        local_38.Size = iStack_c0;
        local_38.DataPtr = (wchar_t *)local_c8;
        bVar13 = FJsonObject::TryGetStringField(pFVar12,&local_38,&this->SourceFilename);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        pTVar4 = local_res18[0];
        if (!bVar13) goto LAB_14e664545;
        pcVar3 = *(code **)(this->_padding_ + 0x30);
        if ((local_res18[0]->Object == (FJsonObject *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar6 = (*pcVar3)(this,pTVar4->Object);
        *(undefined1 *)&this->_padding_ = uVar6;
      }
      else {
LAB_14e664545:
        uVar6 = 0;
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      goto LAB_14e664221;
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
  uVar6 = 0;
LAB_14e664221:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar6;
}

// FromJson @ 14e664c00

bool __thiscall
UE::Interchange::FJsonLoadSourceCmd::JsonResultParser::FromJson
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
      goto LAB_14e664cac;
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
LAB_14e664cac:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar4;
}

// GetActionDataObject @ 14e665100

TSharedPtr<FJsonObject,1> * __thiscall
UE::Interchange::FJsonLoadSourceCmd::GetActionDataObject
          (FJsonLoadSourceCmd *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FJsonObject,1> *pTVar4;
  TSharedPtr<FJsonObject,1> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  FString local_38;
  TSharedRef<FJsonObject,1> local_28;
  FString local_18;
  
  pTVar4 = MakeShared<FJsonObject,1>(&local_28);
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  this_00 = __return_storage_ptr__->Object;
  if ((char)this->_padding_ == '\0') {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3563086482006605691>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Public\\InterchangeDispatcherTask.h"
                       ,0x85,"bIsDataInitialize");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_38.Data.ArrayNum = (this->SourceFilename).Data.ArrayNum;
  lVar7 = (longlong)local_38.Data.ArrayNum;
  _Src = (this->SourceFilename).Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  pFVar6 = GetSourceFilenameJsonKey(&local_18);
  FJsonObject::SetStringField(this_00,pFVar6,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSourceFilenameJsonKey @ 14e665be0

FString * __cdecl
UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
                          ::__l2::Key,L"SourceFile");
      atexit(`UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey'::__l2::
             _dynamic_atexit_destructor_for__Key__);
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  _Src = `public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
         ::__l2::Key.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
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

// ToJson @ 14e669b30

FString * __thiscall
UE::Interchange::FJsonLoadSourceCmd::ToJson
          (FJsonLoadSourceCmd *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this_00;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  FString *pFVar6;
  FString local_b8;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_a8;
  TSharedPtr<FJsonObject,1> local_98;
  TSharedPtr<FJsonObject,1> local_88;
  TSharedRef<FJsonObject,1> local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  if ((char)this->_padding_ == '\0') {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7654341662386159644>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcherTask.cpp"
                       ,0x1c,"bIsDataInitialize");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar5 = MakeShared<FJsonObject,1>(&local_78);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this_00 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
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
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 8))(this,local_58);
  pFVar6 = IJsonCmdBase::GetCommandIDJsonKey(&local_68);
  FJsonObject::SetStringField(this_00,pFVar6,pFVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
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
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x10))(this,local_38);
  pFVar6 = IJsonCmdBase::GetTranslatorIDJsonKey(&local_48);
  FJsonObject::SetStringField(this_00,pFVar6,pFVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  (**(code **)(this->_padding_ + 0x28))(this,&local_98);
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
  pFVar4 = IJsonCmdBase::GetCommandDataJsonKey(&local_28);
  FJsonObject::SetObjectField(this_00,pFVar4,&local_98);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_a8,&local_b8,0);
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
  local_88.Object = this_00;
  local_88.SharedReferenceCount.ReferenceController = pTVar1;
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_88,&local_a8,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_b8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_b8.Data.ArrayMax;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ToJson @ 14e66a3d0

FString * __thiscall
UE::Interchange::FJsonLoadSourceCmd::JsonResultParser::ToJson
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

