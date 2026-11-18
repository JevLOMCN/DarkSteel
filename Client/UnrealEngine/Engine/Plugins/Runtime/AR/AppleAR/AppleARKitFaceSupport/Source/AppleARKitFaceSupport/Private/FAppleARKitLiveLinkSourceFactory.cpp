// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 4

// CreateLiveLinkLocalFileWriter @ 14d286320

TSharedPtr<IARKitBlendShapePublisher,1> * __cdecl
FAppleARKitLiveLinkSourceFactory::CreateLiveLinkLocalFileWriter
          (TSharedPtr<IARKitBlendShapePublisher,1> *__return_storage_ptr__)

{
  int iVar1;
  FAppleARKitLiveLinkFileWriterCsv *this;
  FAppleARKitLiveLinkFileWriterJson *pFVar2;
  ForAnyElementType FVar3;
  IARKitBlendShapePublisher *pIVar4;
  FString local_28;
  TSharedPtr<IARKitBlendShapePublisher,1> local_18;
  
  __return_storage_ptr__->Object = (IARKitBlendShapePublisher *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_28,L"None");
  FConfigCacheIni::GetString
            (GConfig,L"/Script/AppleARKit.AppleARKitSettings",L"FaceTrackingFileWriterType",
             &local_28,&GEngineIni);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,L"None");
  if (iVar1 == 0) goto LAB_14d28646d;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,L"CSV");
  if (iVar1 == 0) {
    this = ::operator_new(0x78);
    if (this != (FAppleARKitLiveLinkFileWriterCsv *)0x0) {
      pFVar2 = (FAppleARKitLiveLinkFileWriterJson *)
               FAppleARKitLiveLinkFileWriterCsv::FAppleARKitLiveLinkFileWriterCsv(this);
      goto LAB_14d2863f5;
    }
LAB_14d286403:
    pFVar2 = (FAppleARKitLiveLinkFileWriterJson *)0x0;
LAB_14d286405:
    pIVar4 = (IARKitBlendShapePublisher *)0x0;
  }
  else {
    pFVar2 = ::operator_new(0x78);
    if (pFVar2 == (FAppleARKitLiveLinkFileWriterJson *)0x0) goto LAB_14d286403;
    pFVar2 = FAppleARKitLiveLinkFileWriterJson::FAppleARKitLiveLinkFileWriterJson(pFVar2);
LAB_14d2863f5:
    if (pFVar2 == (FAppleARKitLiveLinkFileWriterJson *)0x0) goto LAB_14d286405;
    pIVar4 = (IARKitBlendShapePublisher *)&pFVar2->_padding_;
  }
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAppleARKitLiveLinkFileWriter__U__DefaultDeleter_VFAppleARKitLiveLinkFileWriter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar2;
  }
  if (__return_storage_ptr__ != &local_18) {
    __return_storage_ptr__->Object = pIVar4;
    local_18.Object = (IARKitBlendShapePublisher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
LAB_14d28646d:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateLiveLinkRemotePublisher @ 14d2864a0

TSharedPtr<IARKitBlendShapePublisher,1> * __cdecl
FAppleARKitLiveLinkSourceFactory::CreateLiveLinkRemotePublisher
          (TSharedPtr<IARKitBlendShapePublisher,1> *__return_storage_ptr__,FString *param_1)

{
  __return_storage_ptr__->Object = (IARKitBlendShapePublisher *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateLiveLinkSource @ 14d2864c0

TSharedPtr<ILiveLinkSourceARKit,1> * __cdecl
FAppleARKitLiveLinkSourceFactory::CreateLiveLinkSource
          (TSharedPtr<ILiveLinkSourceARKit,1> *__return_storage_ptr__,
          FAppleARKitLiveLinkConnectionSettings *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FAppleARKitLiveLinkSource *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  TSharedRef<FAppleARKitLiveLinkSource,1> *pTVar7;
  TSharedPtr<ILiveLinkSourceARKit,1> *pTVar8;
  longlong *plVar9;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<FAppleARKitLiveLinkSource,1> local_38;
  undefined1 local_28 [16];
  
  pIVar5 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,ILiveLinkClient::ModularFeatureName);
  if (iVar4 < 1) {
    __return_storage_ptr__->Object = (ILiveLinkSourceARKit *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pIVar5 = IModularFeatures::Get();
  lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,ILiveLinkClient::ModularFeatureName,0);
  plVar9 = (longlong *)(lVar6 + -8);
  if (lVar6 == 0) {
    plVar9 = (longlong *)0x0;
  }
  pTVar7 = MakeShared<FAppleARKitLiveLinkSource,1,FAppleARKitLiveLinkConnectionSettings_const_&>
                     (&local_38,param_1);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  this = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (this == (FAppleARKitLiveLinkSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TSharedPtr<ILiveLinkSourceARKit,1> *)(*pcVar2)();
      return pTVar8;
    }
  }
  FAppleARKitLiveLinkSource::InitializeRemoteListener(this);
  pcVar2 = *(code **)(*plVar9 + 8);
  local_48 = &this->_padding_;
  if (this == (FAppleARKitLiveLinkSource *)0x0) {
    local_48 = (longlong *)0x0;
  }
  local_40 = pTVar1;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    (*pcVar2)(plVar9,local_28,&local_48);
    __return_storage_ptr__->Object = (ILiveLinkSourceARKit *)this;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    (*pcVar2)();
    __return_storage_ptr__->Object = (ILiveLinkSourceARKit *)this;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// CreateLiveLinkSource @ 14d286620

TSharedPtr<ILiveLinkSourceARKit,1> * __cdecl
FAppleARKitLiveLinkSourceFactory::CreateLiveLinkSource
          (TSharedPtr<ILiveLinkSourceARKit,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  FAppleARKitLiveLinkSource *pFVar5;
  FAppleARKitLiveLinkSource *pFVar6;
  FAppleARKitLiveLinkSource *pFVar7;
  TRawPtrProxy<FAppleARKitLiveLinkSource> local_res10;
  TSharedPtr<ILiveLinkSourceARKit,1> local_48;
  FAppleARKitLiveLinkSource *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [16];
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (iVar2 < 1) {
    __return_storage_ptr__->Object = (ILiveLinkSourceARKit *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pIVar3 = IModularFeatures::Get();
  lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
  pFVar6 = (FAppleARKitLiveLinkSource *)0x0;
  pFVar7 = (FAppleARKitLiveLinkSource *)(lVar4 + -8);
  if (lVar4 == 0) {
    pFVar7 = pFVar6;
  }
  pFVar5 = ::operator_new(0xa0);
  local_res10.Object = pFVar6;
  if (pFVar5 != (FAppleARKitLiveLinkSource *)0x0) {
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ =
         (longlong)&FAppleARKitLiveLinkSource::_vftable__for__IARKitBlendShapePublisher__;
    pFVar5->_padding_ = (longlong)&FAppleARKitLiveLinkSource::_vftable__for__ILiveLinkSource__;
    pFVar5->Client = (ILiveLinkClient *)0x0;
    (pFVar5->SourceGuid).A = 0;
    (pFVar5->SourceGuid).B = 0;
    (pFVar5->SourceGuid).C = 0;
    (pFVar5->SourceGuid).D = 0;
    pFVar5->LastFramePublished = 0;
    *(undefined8 *)&pFVar5->BlendShapePerDeviceMap = 0;
    *(undefined8 *)&(pFVar5->BlendShapePerDeviceMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar5->BlendShapePerDeviceMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar5->BlendShapePerDeviceMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar5->BlendShapePerDeviceMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar5->BlendShapePerDeviceMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar5->BlendShapePerDeviceMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar5->BlendShapePerDeviceMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar5->BlendShapePerDeviceMap).field_0x48 = 0;
    (pFVar5->RemoteListener).Ptr = (FAppleARKitLiveLinkRemoteListener *)0x0;
    (pFVar5->ConnectionSettings).Port = 0x2b67;
    local_res10.Object = pFVar5;
  }
  TSharedPtr<ILiveLinkSourceARKit,1>::TSharedPtr<ILiveLinkSourceARKit,1><FAppleARKitLiveLinkSource>
            (&local_48,&local_res10);
  local_30 = local_48.SharedReferenceCount.ReferenceController;
  pcVar1 = *(code **)(pFVar7->_padding_ + 8);
  local_38 = (FAppleARKitLiveLinkSource *)&(local_48.Object)->field_0x8;
  if (local_48.Object == (ILiveLinkSourceARKit *)0x0) {
    local_38 = pFVar6;
  }
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar7,local_28,&local_38);
  __return_storage_ptr__->Object = local_48.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

