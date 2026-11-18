// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b5b7740

UClass * __cdecl UDS_SyncServer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncServer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncServer",
               &Z_Registration_Info_UClass_UDS_SyncServer.InnerSingleton,
               StaticRegisterNativesUDS_SyncServer,200,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Game",InternalConstructor<UDS_SyncServer>,
               InternalVTableHelperCtorCaller<UDS_SyncServer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncServer.InnerSingleton;
}

// UDS_SyncServer @ 14b5bcb30

UDS_SyncServer * __thiscall
UDS_SyncServer::UDS_SyncServer(UDS_SyncServer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SyncServer__6B_;
  ::FString::FString(&this->HttpLinkAddr,"");
  this->bUseHttp = true;
  (this->ServerListArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerListArray).ArrayNum = 0;
  (this->ServerListArray).ArrayMax = 0;
  this->SelectedChannel = 0;
  *(undefined8 *)&this->HttpRequestResultDelegate = 0;
  *(undefined8 *)&(this->HttpRequestResultDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->HttpRequestResultDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ServerInfos = 0;
  *(undefined8 *)&(this->ServerInfos).field_0x8 = 0;
  *(undefined8 *)&(this->ServerInfos).field_0x20 = 0;
  *(undefined4 *)&(this->ServerInfos).field_0x28 = 0;
  *(undefined4 *)&(this->ServerInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerInfos).field_0x34 = 0;
  *(undefined4 *)&(this->ServerInfos).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ServerInfos).field_0x40 = 0;
  *(undefined4 *)&(this->ServerInfos).field_0x48 = 0;
  (this->SyncServer_TimerHandler).Handle = 0;
  return this;
}

// UDS_SyncServer @ 14b5bcbd0

UDS_SyncServer * __thiscall
UDS_SyncServer::UDS_SyncServer(UDS_SyncServer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SyncServer__6B_;
  ::FString::FString(&this->HttpLinkAddr,"");
  this->bUseHttp = true;
  (this->ServerListArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerListArray).ArrayNum = 0;
  (this->ServerListArray).ArrayMax = 0;
  this->SelectedChannel = 0;
  *(undefined8 *)&this->HttpRequestResultDelegate = 0;
  *(undefined8 *)&(this->HttpRequestResultDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->HttpRequestResultDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ServerInfos = 0;
  *(undefined8 *)&(this->ServerInfos).field_0x8 = 0;
  *(undefined8 *)&(this->ServerInfos).field_0x20 = 0;
  *(undefined4 *)&(this->ServerInfos).field_0x28 = 0;
  *(undefined4 *)&(this->ServerInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerInfos).field_0x34 = 0;
  *(undefined4 *)&(this->ServerInfos).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ServerInfos).field_0x40 = 0;
  *(undefined4 *)&(this->ServerInfos).field_0x48 = 0;
  (this->SyncServer_TimerHandler).Handle = 0;
  return this;
}

// ~UDS_SyncServer @ 14b5bdd50

void __thiscall UDS_SyncServer::~UDS_SyncServer(UDS_SyncServer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_SyncServer__6B_;
  *(undefined4 *)&(this->ServerInfos).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ServerInfos).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ServerInfos);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HttpRequestResultDelegate);
  pvVar1 = *(void **)&(this->HttpRequestResultDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HttpRequestResultDelegate);
  DestructItems<FDS_ServerInfo,int>
            ((FDS_ServerInfo *)(this->ServerListArray).AllocatorInstance.Data,
             (this->ServerListArray).ArrayNum);
  pFVar2 = (this->ServerListArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->HttpLinkAddr).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bf500

UClass * __cdecl UDS_SyncServer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncServer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncServer",
               &Z_Registration_Info_UClass_UDS_SyncServer.InnerSingleton,
               StaticRegisterNativesUDS_SyncServer,200,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Game",InternalConstructor<UDS_SyncServer>,
               InternalVTableHelperCtorCaller<UDS_SyncServer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncServer.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncServer @ 14b5c0010

void __cdecl UDS_SyncServer::StaticRegisterNativesUDS_SyncServer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_SyncServer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOpenWorldInfoWidgetCallback @ 14b5c1ce0

void __cdecl
UDS_SyncServer::execOpenWorldInfoWidgetCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OpenWorldInfoWidgetCallback((UDS_SyncServer *)param_1,local_res10);
  return;
}

// ConvertJsonToServerListInfo @ 14bbaf430

void __thiscall UDS_SyncServer::ConvertJsonToServerListInfo(UDS_SyncServer *this,FString *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  FDS_ServerInfo *pFVar4;
  code *pcVar5;
  FJsonObject *this_00;
  bool bVar6;
  uint uVar7;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_d8;
  TSharedPtr<FJsonObject,1> local_c8;
  TArray<FDS_ServerInfo,TSizedDefaultAllocator<32>_> local_b8;
  StackState local_a8;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  pTVar8 = TJsonStringReader<wchar_t>::Create(&local_48,param_1);
  pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
  pTVar3 = pTVar8->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  local_a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Identifier.Data.ArrayNum = 0;
  local_a8.Identifier.Data.ArrayMax = 0;
  local_a8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Object = (FJsonObject *)0x0;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a8.Array.ArrayNum = 0;
  local_a8.Array.ArrayMax = 0;
  local_a8.Object.Object = (FJsonObject *)0x0;
  local_a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar3,&local_a8,None);
  if (bVar6) {
    bVar6 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_a8,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
    }
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Identifier.Data.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
    }
    if ((!bVar6) ||
       ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)local_c8.Object ==
        (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)0x0)) goto LAB_14bbaf681;
    if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
          *)local_c8.Object ==
         (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = local_c8.Object;
    uStack_60 = 4;
    local_68 = L"data";
    local_38._12_4_ = uStack_5c;
    local_38.Size = 4;
    local_38.DataPtr = L"data";
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"data");
    pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>
                       ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                         *)this_00,uVar7,&local_38);
    if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0))
    goto LAB_14bbaf681;
    if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
          *)local_c8.Object ==
         (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_58 = L"data";
    uStack_50 = 4;
    local_28._12_4_ = uStack_4c;
    local_28.Size = 4;
    local_28.DataPtr = L"data";
    pTVar10 = FJsonObject::GetArrayField(local_c8.Object,&local_28);
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = pTVar10->ArrayNum;
    pTVar9 = (TSharedPtr<FJsonValue,1> *)(pTVar10->AllocatorInstance).Data;
    local_d8.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_d8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_d8.AllocatorInstance,iVar1,&local_d8.ArrayMax);
      ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                (local_d8.AllocatorInstance.Data,pTVar9,iVar1);
    }
    FJsonObjectConverter::JsonArrayToUStruct<FDS_ServerInfo>
              (&local_d8,&this->ServerListArray,0,0,false,(FText *)0x0,
               (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                *)0x0);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    FVar11.Data = local_d8.AllocatorInstance.Data;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    FVar11.Data = local_a8.Identifier.Data.AllocatorInstance.Data;
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
      FVar11.Data = local_a8.Identifier.Data.AllocatorInstance.Data;
    }
  }
  if ((TSharedPtr<FJsonValue,1> *)FVar11.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(FVar11.Data);
  }
LAB_14bbaf681:
  iVar1 = (this->ServerListArray).ArrayNum;
  pFVar4 = (FDS_ServerInfo *)(this->ServerListArray).AllocatorInstance.Data;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_b8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar1,0,&local_b8.AllocatorInstance,iVar1,&local_b8.ArrayMax);
    ConstructItems<FDS_ServerInfo,FDS_ServerInfo,int>(local_b8.AllocatorInstance.Data,pFVar4,iVar1);
  }
  ReplaceServerInfos(this,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// GetHttpRequestResultDelegate @ 14bbbc580

TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> * __thiscall
UDS_SyncServer::GetHttpRequestResultDelegate(UDS_SyncServer *this)

{
  return &this->HttpRequestResultDelegate;
}

// GetSelectedChannel @ 14bbbd060

int __thiscall UDS_SyncServer::GetSelectedChannel(UDS_SyncServer *this)

{
  return this->SelectedChannel;
}

// GetServerInfo @ 14bbbd070

FDS_ServerInfo * __thiscall
UDS_SyncServer::GetServerInfo
          (UDS_SyncServer *this,FDS_ServerInfo *__return_storage_ptr__,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  FDS_ServerInfo *pFVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar12;
  FDS_ServerInfo *pFVar11;
  
  iVar3 = *(int *)&(this->ServerInfos).field_0x34;
  iVar4 = *(int *)&(this->ServerInfos).field_0x8;
  if (iVar4 == iVar3) {
    __return_storage_ptr__->ID = 0;
    __return_storage_ptr__->RegionIndex = 0;
    (__return_storage_ptr__->Urls).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Urls).Data.ArrayNum = 0;
    (__return_storage_ptr__->Urls).Data.ArrayMax = 0;
    (__return_storage_ptr__->ServerAddr).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ServerAddr).Data.ArrayNum = 0;
    (__return_storage_ptr__->ServerAddr).Data.ArrayMax = 0;
    (__return_storage_ptr__->AiAddr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AiAddr).Data.ArrayNum = 0;
    (__return_storage_ptr__->AiAddr).Data.ArrayMax = 0;
    (__return_storage_ptr__->ServerName).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ServerName).Data.ArrayNum = 0;
    (__return_storage_ptr__->ServerName).Data.ArrayMax = 0;
    (__return_storage_ptr__->FrontEndServerIndex).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FrontEndServerIndex).ArrayNum = 0;
    (__return_storage_ptr__->FrontEndServerIndex).ArrayMax = 0;
    (__return_storage_ptr__->GameServerIndex).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameServerIndex).ArrayNum = 0;
    (__return_storage_ptr__->GameServerIndex).ArrayMax = 0;
    FDS_ServerInfo::FDS_ServerInfo(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  iVar8 = 0;
  pFVar11 = (FDS_ServerInfo *)0x0;
  if (iVar4 != iVar3) {
    puVar6 = *(undefined1 **)&(this->ServerInfos).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ServerInfos).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ServerInfos).field_0x48 - 1U & param_1) *
                              4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x78 + *(longlong *)&this->ServerInfos);
        if (*piVar5 == param_1) {
          pFVar7 = (FDS_ServerInfo *)(piVar5 + 2);
          if (piVar5 == (int *)0x0) {
            pFVar7 = pFVar11;
          }
          if (pFVar7 != (FDS_ServerInfo *)0x0) {
            FDS_ServerInfo::FDS_ServerInfo(__return_storage_ptr__,pFVar7);
            return __return_storage_ptr__;
          }
          break;
        }
        iVar3 = piVar5[0x1c];
      } while (iVar3 != -1);
    }
  }
  iVar3 = *(int *)&(this->ServerInfos).field_0x28;
  iVar4 = iVar8;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->ServerInfos).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)&(this->ServerInfos).field_0x10;
    }
    uVar10 = *puVar12;
    while (uVar10 == 0) {
      iVar9 = (int)pFVar11;
      iVar8 = iVar8 + 0x20;
      uVar10 = iVar9 + 1;
      pFVar11 = (FDS_ServerInfo *)(ulonglong)uVar10;
      iVar4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar10) goto LAB_14bbbd190;
      uVar10 = puVar12[(longlong)iVar9 + 1];
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar4 = iVar8 + -1 + (int)lVar2;
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
  }
LAB_14bbbd190:
  FDS_ServerInfo::FDS_ServerInfo
            (__return_storage_ptr__,
             (FDS_ServerInfo *)(*(longlong *)&this->ServerInfos + 8 + (longlong)iVar4 * 0x78));
  return __return_storage_ptr__;
}

// GetServerInfo @ 14bbbd1f0

FDS_ServerInfo * __thiscall
UDS_SyncServer::GetServerInfo(UDS_SyncServer *this,FDS_ServerInfo *__return_storage_ptr__)

{
  GetServerInfo(this,__return_storage_ptr__,this->SelectedChannel);
  return __return_storage_ptr__;
}

// GetServerInfoAddress @ 14bbbd220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UDS_SyncServer::GetServerInfoAddress(UDS_SyncServer *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  uint *puVar2;
  UDS_LogManager *pUVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&(this->ServerInfos).field_0x8 != *(int *)&(this->ServerInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ServerInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ServerInfos).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->ServerInfos).field_0x48 - 1U & this->SelectedChannel
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&this->ServerInfos);
        if (*puVar2 == this->SelectedChannel) {
          puVar5 = puVar2 + 2;
          if (puVar2 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            ::FString::FString(__return_storage_ptr__,(FString *)(puVar5 + 6));
            return __return_storage_ptr__;
          }
          break;
        }
        uVar1 = puVar2[0x1c];
      } while (uVar1 != 0xffffffff);
    }
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SyncServer::GetServerInfoAddress",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0xec,L"Server Index is not valid: %d");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// GetServerInfoIndex @ 14bbbd390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_SyncServer::GetServerInfoIndex(UDS_SyncServer *this)

{
  uint uVar1;
  uint *puVar2;
  UDS_LogManager *pUVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)&(this->ServerInfos).field_0x8 != *(int *)&(this->ServerInfos).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ServerInfos).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ServerInfos).field_0x38;
    }
    uVar1 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->ServerInfos).field_0x48 - 1U & this->SelectedChannel
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&this->ServerInfos);
        if (*puVar2 == this->SelectedChannel) {
          puVar4 = puVar2 + 2;
          if (puVar2 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 != (uint *)0x0) {
            return *puVar4;
          }
          break;
        }
        uVar1 = puVar2[0x1c];
      } while (uVar1 != 0xffffffff);
    }
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SyncServer::GetServerInfoIndex",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x10e,L"Server Index is not valid: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return -1;
}

// GetServerInfoName @ 14bbbd4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UDS_SyncServer::GetServerInfoName(UDS_SyncServer *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  uint *puVar2;
  UDS_LogManager *pUVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&(this->ServerInfos).field_0x8 != *(int *)&(this->ServerInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ServerInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ServerInfos).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->ServerInfos).field_0x48 - 1U & this->SelectedChannel
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&this->ServerInfos);
        if (*puVar2 == this->SelectedChannel) {
          puVar5 = puVar2 + 2;
          if (puVar2 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            ::FString::FString(__return_storage_ptr__,(FString *)(puVar5 + 0xe));
            return __return_storage_ptr__;
          }
          break;
        }
        uVar1 = puVar2[0x1c];
      } while (uVar1 != 0xffffffff);
    }
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SyncServer::GetServerInfoName",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x103,L"Server Index is not valid: %d");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// GetServerInfoURL @ 14bbbd660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UDS_SyncServer::GetServerInfoURL(UDS_SyncServer *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  uint *puVar2;
  UDS_LogManager *pUVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&(this->ServerInfos).field_0x8 != *(int *)&(this->ServerInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ServerInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ServerInfos).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->ServerInfos).field_0x48 - 1U & this->SelectedChannel
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x78 + *(longlong *)&this->ServerInfos);
        if (*puVar2 == this->SelectedChannel) {
          puVar5 = puVar2 + 2;
          if (puVar2 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            ::FString::FString(__return_storage_ptr__,(FString *)(puVar5 + 2));
            return __return_storage_ptr__;
          }
          break;
        }
        uVar1 = puVar2[0x1c];
      } while (uVar1 != 0xffffffff);
    }
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SyncServer::GetServerInfoURL",0x20,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0xf8,L"Server Index is not valid: %d");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// GetServerInfos @ 14bbbd7d0

TMap<int,FDS_ServerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>_> *
__thiscall
UDS_SyncServer::GetServerInfos
          (UDS_SyncServer *this,
          TMap<int,FDS_ServerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>_>
          *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<int,FDS_ServerInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FDS_ServerInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__,
              (TSet<TTuple<int,FDS_ServerInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>,FDefaultSetAllocator>
               *)&this->ServerInfos);
  return __return_storage_ptr__;
}

// GetServerList_Http @ 14bbbd820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SyncServer::GetServerList_Http(UDS_SyncServer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  FDS_ServerInfoGlobalTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  UEnum *this_00;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FDS_HttpServer *pFVar11;
  FDS_HttpServer *pFVar12;
  FDS_HttpRequest *pFVar13;
  undefined1 auStackY_318 [32];
  undefined1 local_2d8 [32];
  FString local_2b8;
  TSharedPtr<FDS_HttpRequest,1> local_2a8;
  FDestructionSentinel local_298;
  undefined1 *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pFVar6 = FDS_ServerInfoGlobalTableRow::Get(1,true);
  if (pFVar6 == (FDS_ServerInfoGlobalTableRow *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_SyncServer::GetServerList_Http",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0x3e,L"dataStageValueTableRow  nullptr")
    ;
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_278._padding_;
    goto LAB_14bbbdce4;
  }
  iVar3 = pFVar6->DataStage;
  this_00 = StaticEnum<enum_EDS_DataStage>();
  UEnum::GetNameStringByValue(this_00,&local_2b8,(ulonglong)(byte)iVar3);
  pTVar8 = ::operator_new(0x70);
  pFVar12 = (FDS_HttpServer *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pFVar13 = (FDS_HttpRequest *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pFVar13 = (FDS_HttpRequest *)(pTVar8 + 1);
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_HttpRequest___00_SharedPointerInternals__6B_;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[4]._padding_ = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[6].WeakReferenceCount = (atomic<int>)0x0;
    if ((pFVar13 == (FDS_HttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if ((pFVar13 == (FDS_HttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->SuccessDel,
             (FWriteAccessScope *)&local_298);
  local_280 = &(pFVar13->SuccessDel).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_280);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SyncServer____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SyncServer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_2d8._16_8_ = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SyncServer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)((longlong)local_2d8 + 0x10));
    puVar9[4] = OnResponseServerListInfo;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if ((pFVar13 == (FDS_HttpRequest *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar13->Verb = GET;
  ::FString::PrintfImpl((FString *)local_2d8,L"%s&data_stage=%s");
  if (pFVar13 == (FDS_HttpRequest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14bbbdb01:
    pFVar1 = (pFVar13->URL).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar13->URL).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_2d8._0_8_;
    local_2d8._0_8_ = (FScriptContainerElement *)0x0;
    *(undefined4 *)&(pFVar13->URL).Data.ArrayNum = local_2d8._8_4_;
    *(undefined4 *)&(pFVar13->URL).Data.ArrayMax = local_2d8._12_4_;
    local_2d8._8_4_ = 0;
    local_2d8._12_4_ = 0;
  }
  else if (pFVar13 != (FDS_HttpRequest *)local_2d8) goto LAB_14bbbdb01;
  if ((FScriptContainerElement *)local_2d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2d8._0_8_);
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if ((pFVar13 == (FDS_HttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_SyncServer::GetServerList_Http",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x4b,L"%s");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  pFVar11 = TDS_Singleton<FDS_HttpServer>::Inst;
  if (TDS_Singleton<FDS_HttpServer>::Inst == (FDS_HttpServer *)0x0) {
    pFVar11 = ::operator_new(0x1d8);
    if (pFVar11 != (FDS_HttpServer *)0x0) {
      memset(&pFVar11->Urls,0,0x1c8);
      (pFVar11->RefreshJwtTokenRequestTimerHandle).Handle = 0;
      pFVar11->_padding_ = (longlong)&___7FDS_HttpServer__6B_;
      FDS_Urls::FDS_Urls(&pFVar11->Urls);
      pFVar12 = pFVar11;
    }
    TDS_Singleton<FDS_HttpServer>::Inst = pFVar12;
    cVar5 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12);
    pFVar11 = TDS_Singleton<FDS_HttpServer>::Inst;
    if (cVar5 == '\0') {
      if (TDS_Singleton<FDS_HttpServer>::Inst != (FDS_HttpServer *)0x0) {
        (**(code **)(TDS_Singleton<FDS_HttpServer>::Inst->_padding_ + 0x18))
                  (TDS_Singleton<FDS_HttpServer>::Inst,1);
      }
      TDS_Singleton<FDS_HttpServer>::Inst = (FDS_HttpServer *)0x0;
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377064>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x28,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = &TDS_Singleton<FDS_HttpServer>::Empty;
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8.Object = pFVar13;
  local_2a8.SharedReferenceCount.ReferenceController = pTVar8;
  FDS_HttpServer::Request(pFVar11,&local_2a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14bbbdce4:
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetServerList_Table @ 14bbbdd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SyncServer::GetServerList_Table(UDS_SyncServer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  void *pvVar5;
  UDS_LogManager *pUVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_2b8 [32];
  undefined1 local_278 [16];
  atomic<unsigned___int64> local_268;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  void *local_220;
  undefined8 local_218;
  void *local_210;
  undefined8 local_208;
  TArray<FDS_DevServerListTableRow_const_*,TSizedDefaultAllocator<32>_> local_1f8;
  TPairInitializer<int_&&,FDS_ServerInfo_&&> local_1e8;
  FMRSWRecursiveAccessDetector local_1d8;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  ForAnyElementType local_190;
  int local_188;
  int local_184;
  ForAnyElementType local_180;
  int local_178;
  int local_174;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FDS_DevServerListTableRow::GetAll(&local_1f8);
  iVar7 = local_1f8.ArrayNum;
  pFVar1 = local_1f8.AllocatorInstance.Data + (longlong)iVar7 * 8;
  FVar9.Data = local_1f8.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_1f8.ArrayNum != iVar7) {
        `TCheckedPointerIterator<FDS_DevServerListTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_278);
      }
      if (FVar9.Data == pFVar1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->HttpRequestResultDelegate,&local_170);
        if ((*(int *)&(this->HttpRequestResultDelegate).field_0x10 != 0) &&
           (plVar4 = *(longlong **)&(this->HttpRequestResultDelegate).field_0x8,
           plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x68))(plVar4,1);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_170);
        if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.AllocatorInstance.Data);
        }
        return;
      }
      lVar8 = *(longlong *)FVar9.Data;
      if (lVar8 != 0) break;
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14bbbe12e;
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_SyncServer::GetServerList_Table",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_158.Ptr,0x57,L"FDS_ServerListTableRow nullptr");
      if ((void *)local_158._padding_ == (void *)0x0) goto LAB_14bbbe12e;
      FMemory::Free((void *)local_158._padding_);
      FVar9.Data = FVar9.Data + 8;
    }
    local_268 = (atomic<unsigned___int64>)0x0;
    ::FString::FString(&local_260,"");
    ::FString::FString(&local_250,"");
    ::FString::FString(&local_240,"");
    ::FString::FString(&local_230,"");
    local_268._0_4_ = *(undefined4 *)(lVar8 + 8);
    local_220 = (void *)0x0;
    local_218 = 0;
    local_210 = (void *)0x0;
    local_208 = 0;
    if (&local_260 != (FString *)(lVar8 + 0x18)) {
      iVar2 = *(int *)(lVar8 + 0x20);
      pFVar3 = (((FString *)(lVar8 + 0x18))->Data).AllocatorInstance.Data;
      local_260.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (local_260.Data.ArrayMax == 0)) {
        local_260.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_260.Data.ArrayMax,(ForAnyElementType *)&local_260,iVar2,
                   &local_260.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_260.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
        }
      }
    }
    if (&local_230 != (FString *)(lVar8 + 0x48)) {
      iVar2 = *(int *)(lVar8 + 0x50);
      pFVar3 = (((FString *)(lVar8 + 0x48))->Data).AllocatorInstance.Data;
      local_230.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (local_230.Data.ArrayMax == 0)) {
        local_230.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_230.Data.ArrayMax,(ForAnyElementType *)&local_230,iVar2,
                   &local_230.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_230.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
        }
      }
    }
    local_1e8.Value._0_4_ = local_268._0_4_;
    local_1d8.State._0_4_ = local_268._0_4_;
    local_1d8.State._4_4_ = local_268._4_4_;
    ::FString::FString(&local_1d0,&local_260);
    ::FString::FString(&local_1c0,&local_250);
    ::FString::FString(&local_1b0,&local_240);
    ::FString::FString(&local_1a0,&local_230);
    pvVar5 = local_220;
    lVar8 = (longlong)(int)local_218;
    local_190.Data = (FScriptContainerElement *)0x0;
    local_188 = (int)local_218;
    if ((int)local_218 == 0) {
      local_184 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_218,0,&local_190,(int)local_218,&local_184);
      memcpy(local_190.Data,pvVar5,lVar8 << 2);
    }
    pvVar5 = local_210;
    lVar8 = (longlong)(int)local_208;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = (int)local_208;
    if ((int)local_208 == 0) {
      local_174 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_208,0,&local_180,(int)local_208,&local_174);
      memcpy(local_180.Data,pvVar5,lVar8 << 2);
    }
    local_170.DestructionSentinel._0_8_ = &local_1e8.Value;
    local_170.DestructionSentinel.Accessor = &local_1d8;
    TSet<TTuple<int,FDS_ServerInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&&,FDS_ServerInfo_&&>_>
              ((TSet<TTuple<int,FDS_ServerInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>,FDefaultSetAllocator>
                *)&this->ServerInfos,&local_1e8,(bool *)&local_170);
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
    if (local_190.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data);
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    if (local_210 != (void *)0x0) {
      FMemory::Free(local_210);
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free(local_220);
    }
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
LAB_14bbbe12e:
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// GetUseHttp @ 14bbbe5b0

bool __thiscall UDS_SyncServer::GetUseHttp(UDS_SyncServer *this)

{
  return this->bUseHttp;
}

// GetWorldInfos @ 14bbbeaf0

TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_> *
__cdecl UDS_SyncServer::GetWorldInfos(void)

{
  return &WorldInfoMap;
}

// Load @ 14bbc56e0

void __thiscall UDS_SyncServer::Load(UDS_SyncServer *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *_Str;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  FScriptContainerElement *this_00;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  
  ::FString::FString(&FStack_58,"NonAsset/Setting/LocalSetting.cfg");
  pFVar5 = FPaths::ProjectContentDir(&FStack_48);
  ::FString::ConcatFF(&FStack_68,pFVar5,&FStack_58);
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_78,"");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (FStack_68.Data.ArrayNum != 0) {
    FVar7.Data = FStack_68.Data.AllocatorInstance.Data;
  }
  FFileHelper::LoadFileToString(&FStack_78,(wchar_t *)FVar7.Data,None,0);
  uVar10 = 0;
  TStack_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_88.ArrayNum = 0;
  TStack_88.ArrayMax = 0;
  ::FString::ParseIntoArray(&FStack_78,&TStack_88,L"\r\n",true);
  uVar8 = (ulonglong)TStack_88.ArrayNum;
  uVar11 = uVar10;
  uVar12 = uVar8;
  if (0 < TStack_88.ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar3 = 0;
      if ((int)uVar9 < (int)uVar8) {
        uVar3 = ~uVar9 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = TStack_88.AllocatorInstance.Data + uVar11;
      ::FString::RemoveSpacesInline((FString *)this_00);
      iVar4 = ::FString::Find((FString *)this_00,L"SelectedServerIndex=",0x14,IgnoreCase,FromStart,
                              -1);
      if (iVar4 != -1) {
        pFVar6 = (FScriptContainerElement *)
                 ::FString::Replace((FString *)this_00,&FStack_38,L"SelectedServerIndex=",L"",
                                    IgnoreCase);
        if (this_00 != pFVar6) {
          if (*(void **)this_00 != (void *)0x0) {
            FMemory::Free(*(void **)this_00);
          }
          *(undefined8 *)this_00 = *(undefined8 *)pFVar6;
          *(undefined8 *)pFVar6 = 0;
          *(int *)(this_00 + 8) = *(int *)(pFVar6 + 8);
          *(int *)(this_00 + 0xc) = *(int *)(pFVar6 + 0xc);
          *(undefined8 *)(pFVar6 + 8) = 0;
        }
        if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
        }
        if (*(int *)(this_00 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)this_00;
        }
        dVar13 = _wtof(_Str);
        this->SelectedChannel = (int)dVar13;
      }
      uVar8 = TStack_88._8_8_ & 0xffffffff;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 - 1;
      uVar11 = uVar11 + 0x10;
    } while (uVar12 != 0);
  }
  DestructItems<FString,int>((FString *)TStack_88.AllocatorInstance.Data,TStack_88.ArrayNum);
  if (TStack_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_88.AllocatorInstance.Data);
  }
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadSelectedServerIndex @ 14bbc56f0

void __thiscall UDS_SyncServer::LoadSelectedServerIndex(UDS_SyncServer *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *_Str;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  FScriptContainerElement *this_00;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(&local_58,"NonAsset/Setting/LocalSetting.cfg");
  pFVar5 = FPaths::ProjectContentDir(&local_48);
  ::FString::ConcatFF(&local_68,pFVar5,&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,"");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
  }
  FFileHelper::LoadFileToString(&local_78,(wchar_t *)FVar7.Data,None,0);
  uVar10 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_78,&local_88,L"\r\n",true);
  uVar8 = (ulonglong)local_88.ArrayNum;
  uVar11 = uVar10;
  uVar12 = uVar8;
  if (0 < local_88.ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar3 = 0;
      if ((int)uVar9 < (int)uVar8) {
        uVar3 = ~uVar9 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = local_88.AllocatorInstance.Data + uVar11;
      ::FString::RemoveSpacesInline((FString *)this_00);
      iVar4 = ::FString::Find((FString *)this_00,L"SelectedServerIndex=",0x14,IgnoreCase,FromStart,
                              -1);
      if (iVar4 != -1) {
        pFVar6 = (FScriptContainerElement *)
                 ::FString::Replace((FString *)this_00,&local_38,L"SelectedServerIndex=",L"",
                                    IgnoreCase);
        if (this_00 != pFVar6) {
          if (*(void **)this_00 != (void *)0x0) {
            FMemory::Free(*(void **)this_00);
          }
          *(undefined8 *)this_00 = *(undefined8 *)pFVar6;
          *(undefined8 *)pFVar6 = 0;
          *(int *)(this_00 + 8) = *(int *)(pFVar6 + 8);
          *(int *)(this_00 + 0xc) = *(int *)(pFVar6 + 0xc);
          *(undefined8 *)(pFVar6 + 8) = 0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (*(int *)(this_00 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)this_00;
        }
        dVar13 = _wtof(_Str);
        this->SelectedChannel = (int)dVar13;
      }
      uVar8 = local_88._8_8_ & 0xffffffff;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 - 1;
      uVar11 = uVar11 + 0x10;
    } while (uVar12 != 0);
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadToDataAsset @ 14bbc5980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SyncServer::LoadToDataAsset(UDS_SyncServer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  FDS_ServerInfoGlobalTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  UEnum *this_00;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FDS_HttpServer *pFVar11;
  FDS_HttpServer *pFVar12;
  FDS_HttpRequest *pFVar13;
  undefined1 auStackY_318 [32];
  undefined1 auStack_2d8 [32];
  FString FStack_2b8;
  TSharedPtr<FDS_HttpRequest,1> TStack_2a8;
  FDestructionSentinel FStack_298;
  undefined1 *puStack_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (this->bUseHttp != true) {
    GetServerList_Table(this);
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pFVar6 = FDS_ServerInfoGlobalTableRow::Get(1,true);
  if (pFVar6 == (FDS_ServerInfoGlobalTableRow *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    TStack_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_278,"UDS_SyncServer::GetServerList_Http",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,TStack_278.Ptr,0x3e,L"dataStageValueTableRow  nullptr");
    FStack_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)TStack_278._padding_;
    goto LAB_14bbbdce4;
  }
  iVar3 = pFVar6->DataStage;
  this_00 = StaticEnum<enum_EDS_DataStage>();
  UEnum::GetNameStringByValue(this_00,&FStack_2b8,(ulonglong)(byte)iVar3);
  pTVar8 = ::operator_new(0x70);
  pFVar12 = (FDS_HttpServer *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pFVar13 = (FDS_HttpRequest *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pFVar13 = (FDS_HttpRequest *)(pTVar8 + 1);
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_HttpRequest___00_SharedPointerInternals__6B_;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[4]._padding_ = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[6].WeakReferenceCount = (atomic<int>)0x0;
    if ((pFVar13 == (FDS_HttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if ((pFVar13 == (FDS_HttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->SuccessDel,
             (FWriteAccessScope *)&FStack_298);
  puStack_280 = &(pFVar13->SuccessDel).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puStack_280);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SyncServer____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SyncServer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    auStack_2d8._16_8_ = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SyncServer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)((longlong)auStack_2d8 + 0x10));
    puVar9[4] = OnResponseServerListInfo;
  }
  if (FStack_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_298.Accessor,&FStack_298);
  }
  if ((pFVar13 == (FDS_HttpRequest *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar13->Verb = GET;
  ::FString::PrintfImpl((FString *)auStack_2d8,L"%s&data_stage=%s");
  if (pFVar13 == (FDS_HttpRequest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14bbbdb01:
    pFVar1 = (pFVar13->URL).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar13->URL).Data.AllocatorInstance.Data = (FScriptContainerElement *)auStack_2d8._0_8_;
    auStack_2d8._0_8_ = (FScriptContainerElement *)0x0;
    *(undefined4 *)&(pFVar13->URL).Data.ArrayNum = auStack_2d8._8_4_;
    *(undefined4 *)&(pFVar13->URL).Data.ArrayMax = auStack_2d8._12_4_;
    auStack_2d8._8_4_ = 0;
    auStack_2d8._12_4_ = 0;
  }
  else if (pFVar13 != (FDS_HttpRequest *)auStack_2d8) goto LAB_14bbbdb01;
  if ((FScriptContainerElement *)auStack_2d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_2d8._0_8_);
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if ((pFVar13 == (FDS_HttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TStack_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_158,"UDS_SyncServer::GetServerList_Http",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_158.Ptr,0x4b,L"%s");
    if ((void *)TStack_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_158._padding_);
    }
  }
  pFVar11 = TDS_Singleton<FDS_HttpServer>::Inst;
  if (TDS_Singleton<FDS_HttpServer>::Inst == (FDS_HttpServer *)0x0) {
    pFVar11 = ::operator_new(0x1d8);
    if (pFVar11 != (FDS_HttpServer *)0x0) {
      memset(&pFVar11->Urls,0,0x1c8);
      (pFVar11->RefreshJwtTokenRequestTimerHandle).Handle = 0;
      pFVar11->_padding_ = (longlong)&___7FDS_HttpServer__6B_;
      FDS_Urls::FDS_Urls(&pFVar11->Urls);
      pFVar12 = pFVar11;
    }
    TDS_Singleton<FDS_HttpServer>::Inst = pFVar12;
    cVar5 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12);
    pFVar11 = TDS_Singleton<FDS_HttpServer>::Inst;
    if (cVar5 == '\0') {
      if (TDS_Singleton<FDS_HttpServer>::Inst != (FDS_HttpServer *)0x0) {
        (**(code **)(TDS_Singleton<FDS_HttpServer>::Inst->_padding_ + 0x18))
                  (TDS_Singleton<FDS_HttpServer>::Inst,1);
      }
      TDS_Singleton<FDS_HttpServer>::Inst = (FDS_HttpServer *)0x0;
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377064>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x28,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = &TDS_Singleton<FDS_HttpServer>::Empty;
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_2a8.Object = pFVar13;
  TStack_2a8.SharedReferenceCount.ReferenceController = pTVar8;
  FDS_HttpServer::Request(pFVar11,&TStack_2a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14bbbdce4:
  if (FStack_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnResponseServerListInfo @ 14bbcb9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_SyncServer::OnResponseServerListInfo(UDS_SyncServer *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  FTimerHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FString *pFVar5;
  UDS_LogManager *pUVar6;
  FTimerManager *pFVar7;
  FTimerData *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStackY_248 [32];
  ForAnyElementType local_200;
  int local_1f8;
  FDelegateAllocation local_1f0;
  UDS_SyncServer *local_1e0;
  FString local_1d8;
  FScriptContainerElement *local_1c8 [2];
  FString local_1b8;
  undefined1 local_1a8;
  FDelegateAllocation *local_1a0;
  FTimerUnifiedDelegate local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((param_1->Object == (IHttpResponse *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar4 = (**(code **)((longlong)*param_1->Object + 0x58))();
  if (TVar4 - Ok < 7) {
    if ((param_1->Object == (IHttpResponse *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = (FString *)(**(code **)((longlong)*param_1->Object + 0x60))(param_1->Object,local_1c8);
    ConvertJsonToServerListInfo(this,pFVar5);
    goto LAB_14bbcbe50;
  }
  EHttpResponseCodes::ResponseCodeToString(&local_1b8,TVar4);
  ::FString::PrintfImpl(&local_1d8,L"%s.%s");
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_SyncServer::OnResponseServerListInfo",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xa7,L"InResponse Error Code = %d %s");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  pFVar1 = &this->SyncServer_TimerHandler;
  if (pFVar1->Handle != 0) {
    pFVar7 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar8 = FTimerManager::FindTimer(pFVar7,pFVar1);
    if (pFVar8 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar7,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  local_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a8 = 0;
  local_1a0 = &local_1f0;
  local_1f0.DelegateSize = 0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_1f0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SyncServer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SyncServer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_1e0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SyncServer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_1e0);
    puVar9[4] = LoadToDataAsset;
  }
  pFVar7 = FDS_TimerManager::Get((UObject *)0x0);
  local_198.VariantDelegate._0_8_ = (undefined8 *)0x0;
  local_1f8 = 0;
  local_198.VariantDelegate._8_4_ = 0;
  local_200.Data = (FScriptContainerElement *)0x0;
  FVar11.Data = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  if ((local_1f0.DelegateSize != 0) &&
     (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_1f0.DelegateAllocator + 0x48))
              (local_1f0.DelegateAllocator,&local_200);
    FVar11.Data = local_200.Data;
    iVar13 = local_1f8;
  }
  local_1f8 = 0;
  local_200.Data = (FScriptContainerElement *)0x0;
  if (local_198.VariantDelegate._8_4_ == 0) {
LAB_14bbcbce0:
    if ((undefined8 *)local_198.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_198.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_198.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_198.VariantDelegate._0_8_)(local_198.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_198,0,0,0x10);
    local_198.VariantDelegate._8_4_ = 0;
    goto LAB_14bbcbce0;
  }
  local_198.VariantDelegate._0_8_ = FVar11.Data;
  local_198.VariantDelegate._8_4_ = iVar13;
  if (local_1f8 == 0) {
LAB_14bbcbd30:
    if (local_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data);
    }
  }
  else if (local_200.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_200.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_200,0,0,0x10);
    local_1f8 = 0;
    goto LAB_14bbcbd30;
  }
  local_198.VariantDelegate.TypeIndex = 1;
  FTimerManager::InternalSetTimer(pFVar7,pFVar1,&local_198,__real_40000000,false,__real_bf800000);
  uVar12 = (ulonglong)local_198.VariantDelegate.TypeIndex;
  if ((3 < local_198.VariantDelegate.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_198.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_198.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) goto LAB_14bbcbe02;
      (*(code *)**(undefined8 **)local_198.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_198,0,0,0x10);
      local_198.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_198.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free((void *)local_198.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12])(&local_198);
  }
LAB_14bbcbe02:
  if ((local_1f0.DelegateSize != 0) &&
     (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1f0,0,0,0x10);
    local_1f0.DelegateSize = 0;
  }
  local_1c8[0] = local_1d8.Data.AllocatorInstance.Data;
  if (local_1f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1f0.DelegateAllocator);
    local_1c8[0] = local_1d8.Data.AllocatorInstance.Data;
  }
LAB_14bbcbe50:
  if (local_1c8[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenWorldInfoWidget @ 14bbccba0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SyncServer::OpenWorldInfoWidget(UDS_SyncServer *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_SyncServer *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SyncServer____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SyncServer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SyncServer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OpenWorldInfoWidgetCallback;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,ServerList,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// OpenWorldInfoWidgetCallback @ 14bbccd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SyncServer::OpenWorldInfoWidgetCallback(UDS_SyncServer *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar7;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  FWeakObjectPtr local_158;
  UDS_UserWidget *local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar5 = (FDS_ViewModelContext *)0x0;
  if ((param_1 == (UDS_UserWidget *)0x0) &&
     (pUVar3 = UDS_LogManager::GetInst(), pUVar3 != (UDS_LogManager *)0x0)) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SyncServer::OpenWorldInfoWidgetCallback",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x8c,L"InContentsWidget is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (param_1->MyWindowID == ServerList) {
    pFVar4 = ::operator_new(0x20);
    pFVar7 = pFVar5;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar4->field_0x1c = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->ViewModelTemplateKey = None;
      pFVar7 = pFVar4;
    }
    local_168.Object = pFVar7;
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar7;
      pFVar5 = pFVar4;
    }
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    if ((local_168.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = local_168.Object;
    pUVar6 = FDS_ViewModelContext::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar6;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_168);
    }
    if ((local_168.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_168.Object)->ViewModelTemplateKey = Data_ServerInfo;
    local_148.Object = local_168.Object;
    local_148.SharedReferenceCount.ReferenceController =
         local_168.SharedReferenceCount.ReferenceController;
    if ((FDS_ViewModelContext *)local_168.SharedReferenceCount.ReferenceController !=
        (FDS_ViewModelContext *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_150 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_158,&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ReplaceServerInfos @ 14bbd8dc0

void __thiscall
UDS_SyncServer::ReplaceServerInfos
          (UDS_SyncServer *this,TArray<FDS_ServerInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  ForAnyElementType local_100;
  uint local_f8;
  int local_f4;
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4 [3];
  uint local_d8 [2];
  FMRSWRecursiveAccessDetector local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  ForAnyElementType local_78;
  uint local_70;
  int local_6c;
  FReadAccessScope local_68;
  
  local_res18 = param_1->ArrayNum;
  uVar7 = (ulonglong)(int)local_res18;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar13 + 0x60;
  pFVar11 = pFVar13 + uVar7 * 0x68;
  do {
    if (param_1->ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FDS_ServerInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->HttpRequestResultDelegate,&local_68);
      if ((*(int *)&(this->HttpRequestResultDelegate).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->HttpRequestResultDelegate).field_0x8,
         plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x68))(plVar5,1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      DestructItems<FDS_ServerInfo,int>
                ((FDS_ServerInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar12 = (param_1->AllocatorInstance).Data;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
      return;
    }
    uVar1 = *(uint *)pFVar13;
    uVar2 = *(uint *)(pFVar12 + -0x5c);
    ::FString::FString(&local_140,(FString *)(pFVar12 + -0x58));
    ::FString::FString(&local_130,(FString *)(pFVar12 + -0x48));
    ::FString::FString(&local_120,(FString *)(pFVar12 + -0x38));
    ::FString::FString(&local_110,(FString *)(pFVar12 + -0x28));
    local_f8 = *(uint *)(pFVar12 + -0x10);
    lVar9 = (longlong)(int)local_f8;
    pvVar3 = *(void **)(pFVar12 + -0x18);
    local_100.Data = (FScriptContainerElement *)0x0;
    if (local_f8 == 0) {
      local_f4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_f8,0,&local_100,local_f8,&local_f4);
      memcpy(local_100.Data,pvVar3,lVar9 << 2);
    }
    local_e8 = *(uint *)pFVar12;
    lVar9 = (longlong)(int)local_e8;
    pvVar3 = *(void **)(pFVar12 + -8);
    local_f0.Data = (FScriptContainerElement *)0x0;
    if (local_e8 == 0) {
      local_e4[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_e8,0,&local_f0,local_e8,local_e4);
      memcpy(local_f0.Data,pvVar3,lVar9 << 2);
    }
    if (*(int *)&(this->ServerInfos).field_0x8 != *(int *)&(this->ServerInfos).field_0x34) {
      puVar4 = *(undefined1 **)&(this->ServerInfos).field_0x40;
      puVar8 = &(this->ServerInfos).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar8 = puVar4;
      }
      iVar10 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->ServerInfos).field_0x48 - 1U & uVar1) *
                                 4);
      if (iVar10 != -1) {
        lVar9 = *(longlong *)&(this->ServerInfos).field_0x0;
        do {
          if (*(uint *)((longlong)iVar10 * 0x78 + lVar9) == uVar1) {
            if (iVar10 != -1) goto LAB_14bbd90e7;
            break;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x78 + 0x70 + lVar9);
        } while (iVar10 != -1);
      }
    }
    local_d8[0] = uVar1;
    local_d0.State._0_4_ = uVar1;
    local_d0.State._4_4_ = uVar2;
    ::FString::FString(&local_c8,&local_140);
    ::FString::FString(&local_b8,&local_130);
    ::FString::FString(&local_a8,&local_120);
    ::FString::FString(&local_98,&local_110);
    FVar6.Data = local_100.Data;
    lVar9 = (longlong)(int)local_f8;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = local_f8;
    if (local_f8 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_f8,0,&local_88,local_f8,&local_7c);
      memcpy(local_88.Data,FVar6.Data,lVar9 << 2);
    }
    FVar6.Data = local_f0.Data;
    lVar9 = (longlong)(int)local_e8;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = local_e8;
    if (local_e8 == 0) {
      local_6c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_e8,0,&local_78,local_e8,&local_6c);
      memcpy(local_78.Data,FVar6.Data,lVar9 << 2);
    }
    local_68.DestructionSentinel._0_8_ = local_d8;
    local_68.DestructionSentinel.Accessor = &local_d0;
    TSet<TTuple<int,FDS_ServerInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&&,FDS_ServerInfo_&&>_>
              ((TSet<TTuple<int,FDS_ServerInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>,FDefaultSetAllocator>
                *)&this->ServerInfos,(TPairInitializer<int_&&,FDS_ServerInfo_&&> *)&stack0x00000020,
               (bool *)&local_68);
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
LAB_14bbd90e7:
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    uVar7 = (ulonglong)local_res18;
    pFVar13 = pFVar13 + 0x68;
    pFVar12 = pFVar12 + 0x68;
  } while( true );
}

// SetSelectedChannel @ 14bbe0e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SyncServer::SetSelectedChannel(UDS_SyncServer *this,int param_1)

{
  FDS_EventDelegate<FDS_ServerInfo_const_&> *this_00;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  UDS_LogManager *pUVar11;
  UDS_LoginEvent *pUVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong lVar15;
  int *piVar16;
  undefined1 auStackY_1b8 [32];
  FDestructionSentinel local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (*(int *)&(this->ServerInfos).field_0x8 != *(int *)&(this->ServerInfos).field_0x34) {
    puVar13 = *(undefined1 **)&(this->ServerInfos).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->ServerInfos).field_0x38;
    }
    iVar8 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->ServerInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        piVar10 = (int *)((longlong)iVar8 * 0x78 + *(longlong *)&this->ServerInfos);
        if (*piVar10 == param_1) {
          piVar16 = piVar10 + 2;
          if (piVar10 == (int *)0x0) {
            piVar16 = (int *)0x0;
          }
          if (piVar16 != (int *)0x0) {
            this->SelectedChannel = param_1;
            pUVar12 = UDS_LoginEvent::GetEvent();
            if (pUVar12 != (UDS_LoginEvent *)0x0) {
              this_00 = &pUVar12->OnServerInfoChanged;
              bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
              if (bVar4) {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                           (FWriteAccessScope *)&local_178);
                puVar13 = &(pUVar12->OnServerInfoChanged).Delegate.field_0x1c;
                *(int *)puVar13 = *(int *)puVar13 + 1;
                bVar4 = false;
                uVar14 = *(int *)&(pUVar12->OnServerInfoChanged).Delegate.field_0x10 - 1;
                if (-1 < (int)uVar14) {
                  lVar15 = (longlong)(int)uVar14 << 4;
                  bVar4 = false;
                  do {
                    uVar9 = 0;
                    if ((int)uVar14 < *(int *)&(pUVar12->OnServerInfoChanged).Delegate.field_0x10) {
                      uVar9 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar9 == 0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      uVar6 = (*pcVar3)();
                      return (bool)uVar6;
                    }
                    lVar1 = *(longlong *)&(pUVar12->OnServerInfoChanged).Delegate.field_0x8;
                    if (((*(int *)(lVar15 + 8 + lVar1) == 0) ||
                        (plVar2 = *(longlong **)(lVar15 + lVar1), plVar2 == (longlong *)0x0)) ||
                       (cVar7 = (**(code **)(*plVar2 + 0x68))(), cVar7 == '\0')) {
                      bVar4 = true;
                    }
                    lVar15 = lVar15 + -0x10;
                    uVar14 = uVar14 - 1;
                  } while (-1 < (int)uVar14);
                }
                puVar13 = &(pUVar12->OnServerInfoChanged).Delegate.field_0x1c;
                *(int *)puVar13 = *(int *)puVar13 + -1;
                if (bVar4) {
                  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
                }
                if (local_178.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
                }
              }
            }
            return true;
          }
          break;
        }
        iVar8 = piVar10[0x1c];
      } while (iVar8 != -1);
    }
  }
  pUVar11 = UDS_LogManager::GetInst();
  if (pUVar11 != (UDS_LogManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_SyncServer::SetSelectedChannel",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_158.Ptr,0x11e,L"Server Index is not valid: %d")
    ;
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return false;
}

