// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 2

// GetActionDataObject @ 14e664e10

TSharedPtr<FJsonObject,1> * __thiscall
UE::Interchange::FJsonFBXLoadSourceCmd::GetActionDataObject
          (FJsonFBXLoadSourceCmd *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  TSharedPtr<FJsonObject,1> *pTVar6;
  FString *pFVar7;
  longlong lVar8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TSharedRef<FJsonObject,1> local_38;
  FString local_28;
  
  pTVar5 = MakeShared<FJsonObject,1>(&local_38);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  if ((char)this->_padding_ == '\0') {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3563086482006605691>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Public\\InterchangeDispatcherTask.h"
                       ,0x85,"bIsDataInitialize");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_88.Data.ArrayNum = (int)this->_padding_;
  lVar8 = (longlong)local_88.Data.ArrayNum;
  _Src = (void *)this->_padding_;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  pFVar7 = FJsonLoadSourceCmd::GetSourceFilenameJsonKey(&local_28);
  FJsonObject::SetStringField(pFVar2,pFVar7,&local_88);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  bVar4 = this->bConvertScene;
  ::FString::FString(&local_78,ConvertSceneJsonKey);
  FJsonObject::SetBoolField(pFVar2,&local_78,bVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  bVar4 = this->bForceFrontXAxis;
  ::FString::FString(&local_68,ForceFrontXAxisJsonKey);
  FJsonObject::SetBoolField(pFVar2,&local_68,bVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  bVar4 = this->bConvertSceneUnit;
  ::FString::FString(&local_58,ConvertSceneUnitJsonKey);
  FJsonObject::SetBoolField(pFVar2,&local_58,bVar4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  bVar4 = this->bKeepFbxNamespace;
  ::FString::FString(&local_48,KeepFbxNamespaceJsonKey);
  FJsonObject::SetBoolField(pFVar2,&local_48,bVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsActionDataObjectValid @ 14e666270

bool __thiscall
UE::Interchange::FJsonFBXLoadSourceCmd::IsActionDataObjectValid
          (FJsonFBXLoadSourceCmd *this,FJsonObject *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  TStringView<wchar_t> local_18;
  
  iVar4 = 0;
  local_18.DataPtr = ConvertSceneJsonKey;
  local_18.Size = 0;
  if (ConvertSceneJsonKey != (wchar_t *)0x0) {
    sVar3 = wcslen(ConvertSceneJsonKey);
    local_18.Size = (int)sVar3;
  }
  bVar1 = FJsonObject::TryGetBoolField(param_1,&local_18,&this->bConvertScene);
  if (bVar1) {
    iVar2 = 0;
    local_18.DataPtr = ForceFrontXAxisJsonKey;
    if (ForceFrontXAxisJsonKey != (wchar_t *)0x0) {
      sVar3 = wcslen(ForceFrontXAxisJsonKey);
      iVar2 = (int)sVar3;
    }
    local_18.Size = iVar2;
    bVar1 = FJsonObject::TryGetBoolField(param_1,&local_18,&this->bForceFrontXAxis);
    if (bVar1) {
      iVar2 = 0;
      local_18.DataPtr = ConvertSceneUnitJsonKey;
      if (ConvertSceneUnitJsonKey != (wchar_t *)0x0) {
        sVar3 = wcslen(ConvertSceneUnitJsonKey);
        iVar2 = (int)sVar3;
      }
      local_18.Size = iVar2;
      bVar1 = FJsonObject::TryGetBoolField(param_1,&local_18,&this->bConvertSceneUnit);
      if (bVar1) {
        local_18.DataPtr = KeepFbxNamespaceJsonKey;
        if (KeepFbxNamespaceJsonKey != (wchar_t *)0x0) {
          sVar3 = wcslen(KeepFbxNamespaceJsonKey);
          iVar4 = (int)sVar3;
        }
        local_18.Size = iVar4;
        bVar1 = FJsonObject::TryGetBoolField(param_1,&local_18,&this->bKeepFbxNamespace);
        return bVar1;
      }
    }
  }
  return false;
}

