// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 3

// FQueuedHttpRequestAddUser @ 146cb6520

FQueuedHttpRequestAddUser * __thiscall
FQueuedHttpRequestAddUser::FQueuedHttpRequestAddUser
          (FQueuedHttpRequestAddUser *this,FString *param_1,TSharedRef<IHttpRequest,1> *param_2)

{
  IHttpRequest *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FQueuedHttpRequestAddUser *pFVar7;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FJsonSerializable local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  pIVar1 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    *(undefined ***)this = &___7FQueuedHttpRequest__6B_;
    *(IHttpRequest **)&this->field_0x10 = pIVar1;
    *(undefined4 *)&this->field_0x8 = 0xc;
    *(undefined8 *)&this->field_0x18 = 0;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    *(undefined ***)this = &___7FQueuedHttpRequest__6B_;
    *(IHttpRequest **)&this->field_0x10 = pIVar1;
    *(undefined4 *)&this->field_0x8 = 0xc;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_30.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)this = &___7FQueuedHttpRequestAddUser__6B_;
  local_38 = (FJsonSerializable)&___7FNetworkReplayUserList__6B_;
  local_28 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_30,(int *)((longlong)&local_28 + 4));
  local_28 = CONCAT44(local_28._4_4_,iVar6 + 1);
  ::FString::FString((FString *)(local_30.Data + (longlong)iVar6 * 0x10),param_1);
  FJsonSerializable::ToJson(&local_38,&local_48,true);
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQueuedHttpRequestAddUser *)(*pcVar4)();
      return pFVar7;
    }
  }
  plVar3 = *(longlong **)&this->field_0x10;
  pcVar4 = *(code **)(*plVar3 + 0x60);
  ::FString::FString(&local_78,L"POST");
  (*pcVar4)(plVar3,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQueuedHttpRequestAddUser *)(*pcVar4)();
      return pFVar7;
    }
  }
  (**(code **)(**(longlong **)&this->field_0x10 + 0x90))(*(longlong **)&this->field_0x10,&local_48);
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQueuedHttpRequestAddUser *)(*pcVar4)();
      return pFVar7;
    }
  }
  plVar3 = *(longlong **)&this->field_0x10;
  pcVar4 = *(code **)(*plVar3 + 0xb0);
  ::FString::FString(&local_58,L"application/json");
  ::FString::FString(&local_68,L"Content-Type");
  (*pcVar4)(plVar3,&local_68,&local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_38 = (FJsonSerializable)&___7FNetworkReplayUserList__6B_;
  DestructItems<FString,int>((FString *)local_30.Data,(int)local_28);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FJsonSerializable::~FJsonSerializable(&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FQueuedHttpRequestAddUser @ 146cb6ce0

void __thiscall
FQueuedHttpRequestAddUser::~FQueuedHttpRequestAddUser(FQueuedHttpRequestAddUser *this)

{
  *(undefined ***)this = &___7FQueuedHttpRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  return;
}

// PreProcess @ 146cc56a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FQueuedHttpRequestAddUser::PreProcess
          (FQueuedHttpRequestAddUser *this,FHttpNetworkReplayStreamer *param_1,FString *param_2,
          FString *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString local_18;
  
  if ((param_3->Data).ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    return false;
  }
  if ((*(longlong *)&this->field_0x10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)&this->field_0x10;
  pcVar2 = *(code **)(*plVar1 + 0x68);
  ::FString::PrintfImpl(&local_18,L"%sreplay/%s/users");
  (*pcVar2)(plVar1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

