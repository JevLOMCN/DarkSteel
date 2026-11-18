// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 3

// FromJson @ 14e663970

bool __thiscall
UE::Interchange::FJsonFetchMeshPayloadCmd::FromJson(FJsonFetchMeshPayloadCmd *this,FString *param_1)

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
  TSharedPtr<FJsonObject,1> local_198;
  FString local_188;
  FString local_178;
  StackState local_168;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  void *local_a8 [2];
  TStringView<wchar_t> local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  pTVar8 = TJsonStringReader<wchar_t>::Create(&local_d8,param_1);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  bVar12 = false;
  local_168.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Identifier.Data.ArrayNum = 0;
  local_168.Identifier.Data.ArrayMax = 0;
  local_168.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Object = (FJsonObject *)0x0;
  local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_168.Array.ArrayNum = 0;
  local_168.Array.ArrayMax = 0;
  local_168.Object.Object = (FJsonObject *)0x0;
  local_168.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_168,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_168,&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data,
               local_168.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_168.Array.AllocatorInstance.Data);
    }
    if (local_168.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_198.Object != (FJsonObject *)0x0)) {
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Data.ArrayNum = 0;
      local_188.Data.ArrayMax = 0;
      if ((local_198.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar11 = local_198.Object;
      pFVar9 = IJsonCmdBase::GetCommandIDJsonKey(&local_b8);
      local_128 = (pFVar9->Data).AllocatorInstance.Data;
      iVar7 = (pFVar9->Data).ArrayNum;
      iVar6 = 0;
      iStack_120 = iVar7 + -1;
      if (iVar7 == 0) {
        iStack_120 = iVar6;
      }
      local_c8._12_4_ = uStack_11c;
      local_c8.Size = iStack_120;
      local_c8.DataPtr = (wchar_t *)local_128;
      bVar4 = FJsonObject::TryGetStringField(pFVar11,&local_c8,&local_188);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_a8);
        if (local_188.Data.ArrayNum == *(int *)(puVar10 + 1)) {
          if (1 < local_188.Data.ArrayNum) {
            iVar7 = wcscmp((wchar_t *)local_188.Data.AllocatorInstance.Data,(wchar_t *)*puVar10);
            bVar12 = iVar7 != 0;
          }
        }
        else {
          bVar12 = local_188.Data.ArrayNum + *(int *)(puVar10 + 1) != 1;
        }
        if (local_a8[0] != (void *)0x0) {
          FMemory::Free(local_a8[0]);
        }
        if (bVar12) goto LAB_14e663d9f;
        if ((local_198.Object == (FJsonObject *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = local_198.Object;
        pFVar9 = IJsonCmdBase::GetTranslatorIDJsonKey(&local_88);
        local_118 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_110 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_110 = iVar6;
        }
        local_98._12_4_ = uStack_10c;
        local_98.Size = iStack_110;
        local_98.DataPtr = (wchar_t *)local_118;
        bVar12 = FJsonObject::TryGetStringField(pFVar11,&local_98,(FString *)&this->_padding_);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e663d9f;
        local_res18[0] = (TSharedPtr<FJsonObject,1> *)0x0;
        if ((local_198.Object == (FJsonObject *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = local_198.Object;
        pFVar9 = IJsonCmdBase::GetCommandDataJsonKey(&local_68);
        local_108 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_100 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_100 = iVar6;
        }
        local_78._12_4_ = uStack_fc;
        local_78.Size = iStack_100;
        local_78.DataPtr = (wchar_t *)local_108;
        bVar12 = FJsonObject::TryGetObjectField(pFVar11,&local_78,local_res18);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e663d9f;
        pFVar11 = TSharedPtr<FJsonObject,1>::operator->(local_res18[0]);
        pFVar9 = FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(&local_48);
        local_f8 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_f0 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_f0 = iVar6;
        }
        local_58._12_4_ = uStack_ec;
        local_58.Size = iStack_f0;
        local_58.DataPtr = (wchar_t *)local_f8;
        bVar12 = FJsonObject::TryGetStringField(pFVar11,&local_58,(FString *)&this->_padding_);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e663d9f;
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = 0;
        local_178.Data.ArrayMax = 0;
        pFVar11 = TSharedPtr<FJsonObject,1>::operator->(local_res18[0]);
        pFVar9 = GetMeshGlobalTransformJsonKey(&local_28);
        local_e8 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_e0 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_e0 = iVar6;
        }
        local_38._12_4_ = uStack_dc;
        local_38.Size = iStack_e0;
        local_38.DataPtr = (wchar_t *)local_e8;
        bVar12 = FJsonObject::TryGetStringField(pFVar11,&local_38,&local_178);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if ((bVar12) &&
           (bVar12 = UE::Math::TTransform<double>::InitFromString
                               (&this->MeshGlobalTransform,&local_178), bVar12)) {
          *(undefined1 *)&this->_padding_ = 1;
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
      }
      else {
LAB_14e663d9f:
        bVar12 = false;
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      goto LAB_14e663a23;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data,
               local_168.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_168.Array.AllocatorInstance.Data);
    }
    if (local_168.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Identifier.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = false;
LAB_14e663a23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar12;
}

// GetMeshGlobalTransformJsonKey @ 14e6654a0

FString * __cdecl
UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey
          (FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
                          ::__l2::Key,L"GlobalMeshTransform");
      atexit(`UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey'::__l2::
             _dynamic_atexit_destructor_for__Key__);
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  _Src = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
         ::__l2::Key.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
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

// ToJson @ 14e669230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Interchange::FJsonFetchMeshPayloadCmd::ToJson
          (FJsonFetchMeshPayloadCmd *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this_00;
  void *_Src;
  code *pcVar2;
  FJsonObject *pFVar3;
  bool bVar4;
  FString *pFVar5;
  TSharedRef<FJsonObject,1> *pTVar6;
  FString *pFVar7;
  longlong lVar8;
  undefined1 auStackY_1d8 [32];
  FString local_198;
  TSharedPtr<FJsonObject,1> local_188;
  FString local_178;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_168;
  TSharedPtr<FJsonObject,1> local_158;
  TSharedRef<FJsonObject,1> local_148;
  TSharedRef<FJsonObject,1> local_138;
  FString local_128;
  void *local_118 [2];
  FString local_108;
  void *local_f8 [2];
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((char)this->_padding_ == '\0') {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7654341662386159843>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcherTask.cpp"
                       ,0xe3,"bIsDataInitialize");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar6 = MakeShared<FJsonObject,1>(&local_148);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  this_00 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  pTVar6 = MakeShared<FJsonObject,1>(&local_138);
  local_188.Object = pTVar6->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 8))(this,local_118);
  pFVar7 = IJsonCmdBase::GetCommandIDJsonKey(&local_128);
  FJsonObject::SetStringField(this_00,pFVar7,pFVar5);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118[0] != (void *)0x0) {
    FMemory::Free(local_118[0]);
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x10))(this,local_f8);
  pFVar7 = IJsonCmdBase::GetTranslatorIDJsonKey(&local_108);
  FJsonObject::SetStringField(this_00,pFVar7,pFVar5);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8[0] != (void *)0x0) {
    FMemory::Free(local_f8[0]);
  }
  if (local_188.Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar3 = local_188.Object;
  if ((char)this->_padding_ == '\0') {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3563086482006605615>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Public\\InterchangeDispatcherTask.h"
                       ,0xd1,"bIsDataInitialize");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_178.Data.ArrayNum = (int)this->_padding_;
  lVar8 = (longlong)local_178.Data.ArrayNum;
  _Src = (void *)this->_padding_;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_178.Data.ArrayNum == 0) {
    local_178.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_178.Data.ArrayNum,0,(ForAnyElementType *)&local_178,local_178.Data.ArrayNum
               ,&local_178.Data.ArrayMax);
    memcpy(local_178.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  pFVar5 = FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(&local_e8);
  FJsonObject::SetStringField(pFVar3,pFVar5,&local_178);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_188.Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar3 = local_188.Object;
  if ((char)this->_padding_ == '\0') {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3563086482006605553>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Public\\InterchangeDispatcherTask.h"
                       ,0x10f,"bIsDataInitialize");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_a8.Rotation.XY.m128d_f64[0] = (this->MeshGlobalTransform).Rotation.XY.m128d_f64[0];
  local_a8.Rotation.XY.m128d_f64[1] = (this->MeshGlobalTransform).Rotation.XY.m128d_f64[1];
  local_a8.Rotation.ZW.m128d_f64[0] = (this->MeshGlobalTransform).Rotation.ZW.m128d_f64[0];
  local_a8.Rotation.ZW.m128d_f64[1] = (this->MeshGlobalTransform).Rotation.ZW.m128d_f64[1];
  local_a8.Translation.XY.m128d_f64[0] = (this->MeshGlobalTransform).Translation.XY.m128d_f64[0];
  local_a8.Translation.XY.m128d_f64[1] = (this->MeshGlobalTransform).Translation.XY.m128d_f64[1];
  local_a8.Translation.ZW.m128d_f64[0] = (this->MeshGlobalTransform).Translation.ZW.m128d_f64[0];
  local_a8.Translation.ZW.m128d_f64[1] = (this->MeshGlobalTransform).Translation.ZW.m128d_f64[1];
  local_a8.Scale3D.XY.m128d_f64[0] = (this->MeshGlobalTransform).Scale3D.XY.m128d_f64[0];
  local_a8.Scale3D.XY.m128d_f64[1] = (this->MeshGlobalTransform).Scale3D.XY.m128d_f64[1];
  local_a8.Scale3D.ZW.m128d_f64[0] = (this->MeshGlobalTransform).Scale3D.ZW.m128d_f64[0];
  local_a8.Scale3D.ZW.m128d_f64[1] = (this->MeshGlobalTransform).Scale3D.ZW.m128d_f64[1];
  pFVar5 = UE::Math::TTransform<double>::ToString(&local_a8,&local_c8);
  pFVar7 = GetMeshGlobalTransformJsonKey(&local_d8);
  FJsonObject::SetStringField(pFVar3,pFVar7,pFVar5);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = IJsonCmdBase::GetCommandDataJsonKey(&local_b8);
  FJsonObject::SetObjectField(this_00,pFVar5,&local_188);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_168,&local_198,0);
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
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
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
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
  local_158.Object = this_00;
  local_158.SharedReferenceCount.ReferenceController = pTVar1;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_158,&local_168,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_198.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_198.Data.ArrayMax;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

