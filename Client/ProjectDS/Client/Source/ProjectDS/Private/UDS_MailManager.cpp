// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b4e4730

UClass * __cdecl UDS_MailManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailManager",
               &Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton,
               StaticRegisterNativesUDS_MailManager,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MailManager>,InternalVTableHelperCtorCaller<UDS_MailManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton;
}

// UDS_MailManager @ 14b4e8b70

UDS_MailManager * __thiscall
UDS_MailManager::UDS_MailManager(UDS_MailManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  *(undefined ***)this = &___7UDS_MailManager__6B_;
  return this;
}

// UDS_MailManager @ 14b4e8ba0

UDS_MailManager * __thiscall
UDS_MailManager::UDS_MailManager(UDS_MailManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  *(undefined ***)this = &___7UDS_MailManager__6B_;
  return this;
}

// ~UDS_MailManager @ 14b4e9b20

void __thiscall UDS_MailManager::~UDS_MailManager(UDS_MailManager *this)

{
  *(undefined ***)this = &___7UDS_MailManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb750

UClass * __cdecl UDS_MailManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailManager",
               &Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton,
               StaticRegisterNativesUDS_MailManager,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MailManager>,InternalVTableHelperCtorCaller<UDS_MailManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailManager.InnerSingleton;
}

// StaticRegisterNativesUDS_MailManager @ 14b4ec170

void __cdecl UDS_MailManager::StaticRegisterNativesUDS_MailManager(void)

{
  return;
}

// DeleteMail @ 14bb01f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MailManager::DeleteMail
          (UDS_MailManager *this,FString *param_1,EDS_MailCategoryType param_2,bool param_3)

{
  void *pvVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UDS_MailDataSet *pUVar8;
  UDS_DataSetBase *this_00;
  long64 lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FWeakObjectPtr *pFVar14;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *pTVar15;
  undefined1 auStackY_258 [32];
  undefined1 local_207;
  char local_206;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  FWeakObjectPtr local_1f0;
  undefined1 local_1e8 [8];
  ForAnyElementType local_1e0;
  int local_1d8;
  int local_1d4;
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  FWeakObjectPtr *local_1b8;
  TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_1b0;
  FString local_1a0;
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined4 local_178;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_206 = param_3;
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_1f0);
  bVar3 = FWeakObjectPtr::IsValid(&local_1f0);
  if (!bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MailManager::DeleteMail",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xc5,L"mailDataSet is invalid");
    FVar12.Data = (FScriptContainerElement *)local_158._padding_;
    goto LAB_14bb0247b;
  }
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8 = 0;
  bVar3 = false;
  pUVar7 = FWeakObjectPtr::Get(&local_1f0);
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = *(int *)&pUVar7[6].field_0x18;
  lVar11 = (longlong)local_1c8;
  pvVar1 = *(void **)&pUVar7[6].field_0x10;
  if (local_1c8 == 0) {
    local_1c4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1c8,0,&local_1d0,local_1c8,&local_1c4);
    memcpy(local_1d0.Data,pvVar1,lVar11 * 2);
  }
  pUVar8 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_1f0);
  if (param_2 == None) {
    UDS_MailDataSet::GetMailData(pUVar8,(FString *)local_190);
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_190);
    if (bVar4) {
      pUVar8 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_1f0);
      UDS_MailDataSet::RemoveMailData(pUVar8,param_1);
      iVar5 = (param_1->Data).ArrayNum;
      if (iVar5 == local_1c8) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                             (wchar_t *)local_1d0.Data);
          bVar4 = iVar5 == 0;
          goto LAB_14bb023f0;
        }
      }
      else {
        bVar4 = iVar5 + local_1c8 == 1;
LAB_14bb023f0:
        if (!bVar4) goto LAB_14bb0234e;
      }
      bVar3 = true;
    }
  }
  else {
    UDS_MailDataSet::GetSortedMailList(pUVar8,&local_1b0);
    local_1c0 = local_1b0.ArrayNum;
    uVar10 = (ulonglong)(int)local_1c0;
    pFVar14 = (FWeakObjectPtr *)(local_1b0.AllocatorInstance.Data + uVar10 * 8);
    FVar12.Data = local_1b0.AllocatorInstance.Data;
    local_1b8 = pFVar14;
    while( true ) {
      if (local_1b0.ArrayNum != (int)uVar10) {
        local_207 = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_207);
      }
      if ((FWeakObjectPtr *)FVar12.Data == pFVar14) break;
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)FVar12.Data);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar12.Data);
        local_1e0.Data = (FScriptContainerElement *)0x0;
        local_1d8 = *(int *)&pUVar7[2].field_0x10;
        lVar11 = (longlong)local_1d8;
        pvVar1 = *(void **)&pUVar7[2].field_0x8;
        if (local_1d8 == 0) {
          local_1d4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1d8,0,&local_1e0,local_1d8,&local_1d4);
          memcpy(local_1e0.Data,pvVar1,lVar11 * 2);
        }
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar12.Data);
        bVar4 = false;
        if ((pUVar7[4].field_0x12 == '\0') &&
           (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar12.Data), bVar4 = false,
           pUVar7[4].field_0x10 != '\0')) {
          bVar4 = true;
        }
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar12.Data);
        if (((pUVar7[4].field_0x12 != '\0') &&
            (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar12.Data),
            pUVar7[4].field_0x11 != '\0')) || (bVar4)) {
          if (((local_200.Data <= (FScriptContainerElement *)&local_1e0) &&
              ((FScriptContainerElement *)&local_1e0 <
               local_200.Data + (longlong)local_1f8._4_4_ * 0x10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = (int)local_1f8;
          if ((int)local_1f8 == local_1f8._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_200,(int *)((longlong)&local_1f8 + 4));
          }
          _Src.Data = local_1e0.Data;
          pFVar13 = local_200.Data + (longlong)iVar5 * 0x10;
          local_1f8 = CONCAT44(local_1f8._4_4_,iVar5 + 1);
          *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
          lVar11 = (longlong)local_1d8;
          *(int *)(pFVar13 + 8) = local_1d8;
          if (local_1d8 == 0) {
            *(int *)(pFVar13 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1d8,0,(ForAnyElementType *)pFVar13,local_1d8,(int *)(pFVar13 + 0xc)
                      );
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar13,_Src.Data,lVar11 * 2);
          }
          if (local_1d8 == local_1c8) {
            if (1 < local_1d8) {
              iVar5 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_1e0.Data,(wchar_t *)local_1d0.Data);
              bVar4 = iVar5 == 0;
              goto LAB_14bb022c2;
            }
          }
          else {
            bVar4 = local_1d8 + local_1c8 == 1;
LAB_14bb022c2:
            if (!bVar4) goto LAB_14bb022cd;
          }
          bVar3 = true;
        }
LAB_14bb022cd:
        pFVar14 = local_1b8;
        if (local_1e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data);
          pFVar14 = local_1b8;
        }
      }
      FVar12.Data = FVar12.Data + 8;
      uVar10 = (ulonglong)local_1c0;
    }
    iVar5 = (int)local_1f8;
    uVar10 = (ulonglong)(int)local_1f8;
    pFVar13 = local_200.Data + uVar10 * 0x10;
    FVar12.Data = local_200.Data;
    while( true ) {
      if ((int)uVar10 != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1e8);
      }
      if (FVar12.Data == pFVar13) break;
      pUVar8 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_1f0);
      UDS_MailDataSet::RemoveMailData(pUVar8,(FString *)FVar12.Data);
      uVar10 = local_1f8 & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x10;
    }
    if ((FWeakObjectPtr *)local_1b0.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
  }
LAB_14bb0234e:
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_1f0);
  UDS_DataSetBase::SetIsDirty(this_00,true);
  if (local_206 != '\0') {
    if (param_2 == None) {
      local_170._0_8_ = 0;
      pTVar15 = &local_170;
      local_170._8_8_ = 0;
      lVar9 = 0x28495;
      local_170._16_4_ = 0;
    }
    else {
      if ((int)local_1f8 < 1) goto LAB_14bb02421;
      local_190._8_4_ = 0;
      local_190._12_4_ = 0;
      pTVar15 = (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                 *)(local_190 + 8);
      local_180 = 0;
      lVar9 = 0x28499;
      local_178 = 0;
    }
    UDS_UIMessageManager::OpenMsgByStringUi(lVar9,Complete_None_01,pTVar15);
  }
LAB_14bb02421:
  if (bVar3) {
    pUVar8 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_1f0);
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    UDS_MailDataSet::SetSelectedMailUID(pUVar8,&local_1a0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  if (local_1d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data);
  }
  DestructItems<FString,int>((FString *)local_200.Data,(int)local_1f8);
  FVar12.Data = local_200.Data;
LAB_14bb0247b:
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// Destroyed @ 14bb02ed0

void __thiscall UDS_MailManager::Destroyed(UDS_MailManager *this)

{
  UDS_LoginEvent *pUVar1;
  
  pUVar1 = UDS_LoginEvent::GetEvent();
  if (pUVar1 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnReceiveMyCharacterInfoResponseComplete,this);
    return;
  }
  return;
}

// GetInst @ 14bb0bbe0

UDS_MailManager * __cdecl UDS_MailManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ManagerBase *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_MailManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_MailManager_NoRegister();
  pUVar3 = UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ManagerBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_MailManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UDS_MailManager *)pUVar3;
    }
  }
  return (UDS_MailManager *)0x0;
}

// Init @ 14bb13830

void __thiscall UDS_MailManager::Init(UDS_MailManager *this)

{
  FDS_EventDelegate<> *this_00;
  UDS_LoginEvent *pUVar1;
  
  pUVar1 = UDS_LoginEvent::GetEvent();
  if (pUVar1 != (UDS_LoginEvent *)0x0) {
    this_00 = &pUVar1->OnReceiveMyCharacterInfoResponseComplete;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_MailManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               this_00,(UDS_MailManager *)&stack0x00000010,(pmf_7657c9ad)this);
  }
  return;
}

// LoadMailDataDB @ 14bb176c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MailManager::LoadMailDataDB(UDS_MailManager *this)

{
  FDS_HttpRequest *pFVar1;
  FDS_HttpServer *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_MailManager *local_res10;
  FString local_48;
  TSharedRef<FDS_HttpRequest,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDS_Singleton<FDS_AuthData>::GetInst();
  pFVar2 = TDS_Singleton<FDS_HttpServer>::GetInst();
  FDS_Urls::GetMailList(&pFVar2->Urls);
  ::FString::PrintfImpl(&local_48,L"%s&player_uid=%lld&mail_category_type=%d");
  if (2 < (byte)DS_CommonLog._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
  }
  MakeShared<FDS_HttpRequest,1>(&local_38);
  pFVar1 = local_38.Object;
  ::FString::operator=(&(local_38.Object)->URL,&local_48);
  pFVar1->Verb = GET;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar1->SuccessDel,
             (FWriteAccessScope *)&local_28);
  local_10 = &(pFVar1->SuccessDel).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MailManager____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_MailManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_MailManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = OnResponseLoadMailList;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar2 = TDS_Singleton<FDS_HttpServer>::GetInst();
  local_28._0_8_ = local_38.Object;
  local_28.Accessor =
       (FMRSWRecursiveAccessDetector *)local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDS_HttpServer::Request(pFVar2,(TSharedPtr<FDS_HttpRequest,1> *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// MailItemReceived @ 14bb17a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MailManager::MailItemReceived
          (UDS_MailManager *this,FString *param_1,EDS_MailCategoryType param_2,bool param_3)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_MailDataSet *pUVar4;
  UObject *pUVar5;
  UDS_MailData *pUVar6;
  UDS_DataSetBase *this_00;
  int iVar7;
  ForAnyElementType this_01;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  FWeakObjectPtr local_150;
  TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_150);
  bVar2 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar2) {
    if (param_2 == None) {
      pUVar4 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_150);
      UDS_MailDataSet::GetMailData(pUVar4,(FString *)&local_148);
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_148);
      if (!bVar2) {
        return;
      }
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_148);
      if ((pUVar5[4].field_0x12 != '\0') && (param_3)) {
        pUVar6 = (UDS_MailData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_148);
        UDS_MailData::SetIsReward(pUVar6,true);
      }
    }
    else {
      pUVar4 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_150);
      UDS_MailDataSet::GetSortedMailList(pUVar4,&local_148);
      iVar7 = local_148.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_148.AllocatorInstance.Data + (longlong)iVar7 * 8);
      this_01.Data = local_148.AllocatorInstance.Data;
      while( true ) {
        if (local_148.ArrayNum != iVar7) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_158);
        }
        if ((FWeakObjectPtr *)this_01.Data == pFVar1) break;
        bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01.Data);
        if (bVar2) {
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
          if ((pUVar5[4].field_0x12 != '\0') && (param_3)) {
            pUVar6 = (UDS_MailData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
            UDS_MailData::SetIsReward(pUVar6,true);
          }
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
          if (pUVar5[4].field_0x10 == '\0') {
            pUVar6 = (UDS_MailData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
            UDS_MailData::SetIsRead(pUVar6,true);
          }
        }
        this_01.Data = this_01.Data + 8;
      }
      if ((FWeakObjectPtr *)local_148.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
    }
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_150);
    UDS_DataSetBase::SetIsDirty(this_00,true);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MailManager::MailItemReceived",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x93,L"mailDataSet is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// MailRead @ 14bb17c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MailManager::MailRead(UDS_MailManager *this,FString *param_1)

{
  FDS_HttpRequest *pFVar1;
  FDS_HttpServer *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_MailManager *local_res10;
  FString local_48;
  TSharedRef<FDS_HttpRequest,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDS_Singleton<FDS_AuthData>::GetInst();
  pFVar2 = TDS_Singleton<FDS_HttpServer>::GetInst();
  FDS_Urls::GetMailRead(&pFVar2->Urls);
  ::FString::PrintfImpl(&local_48,L"%s&player_uid=%lld&mail_uid=%s");
  if (2 < (byte)DS_CommonLog._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
  }
  MakeShared<FDS_HttpRequest,1>(&local_38);
  pFVar1 = local_38.Object;
  ::FString::operator=(&(local_38.Object)->URL,&local_48);
  pFVar1->Verb = GET;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar1->SuccessDel,
             (FWriteAccessScope *)&local_28);
  local_10 = &(pFVar1->SuccessDel).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MailManager____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_MailManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_MailManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = OnResponseReadMail;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar2 = TDS_Singleton<FDS_HttpServer>::GetInst();
  local_28._0_8_ = local_38.Object;
  local_28.Accessor =
       (FMRSWRecursiveAccessDetector *)local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDS_HttpServer::Request(pFVar2,(TSharedPtr<FDS_HttpRequest,1> *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// MakeJsonToMailList @ 14bb1a120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MailManager::MakeJsonToMailList(UDS_MailManager *this,FString *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MailDataSet *this_00;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_178;
  MailCategoryListResponse local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  mail::MailCategoryListResponse::MailCategoryListResponse(&local_170,(Arena *)0x0);
  local_170._padding_ = (longlong)&___7MailCategoryListResponse_mail__6B_;
  bVar1 = DS_JsonStringToProtoMessage<mail::MailCategoryListResponse>(&local_170,param_1);
  if ((!bVar1) && (pUVar2 = UDS_LogManager::GetInst(), pUVar2 != (UDS_LogManager *)0x0)) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_MailManager::MakeJsonToMailList",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,99,L"DS_JsonStringToProtoMessage failed.\n%s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_178);
  bVar1 = FWeakObjectPtr::IsValid(&local_178);
  if (bVar1) {
    this_00 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_178);
    UDS_MailDataSet::UpdateMailList(this_00,&local_170);
  }
  mail::MailCategoryListResponse::~MailCategoryListResponse(&local_170);
  return;
}

// OnResponseLoadMailList @ 14bb22860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MailManager::OnResponseLoadMailList(UDS_MailManager *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_MailDataSet *this_00;
  IHttpResponse *pIVar6;
  undefined1 auStackY_2e8 [32];
  FWeakObjectPtr local_2a8;
  void *local_2a0;
  MailCategoryListResponse local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if (param_1->Object != (IHttpResponse *)0x0) {
    iVar3 = (**(code **)((longlong)*param_1->Object + 0x58))();
    if (iVar3 == 200) {
      if ((param_1->Object == (IHttpResponse *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (FString *)(**(code **)((longlong)*param_1->Object + 0x60))();
      mail::MailCategoryListResponse::MailCategoryListResponse(&local_290,(Arena *)0x0);
      local_290._padding_ = (longlong)&___7MailCategoryListResponse_mail__6B_;
      bVar2 = DS_JsonStringToProtoMessage<mail::MailCategoryListResponse>(&local_290,pFVar4);
      if ((!bVar2) && (pUVar5 = UDS_LogManager::GetInst(), pUVar5 != (UDS_LogManager *)0x0)) {
        pUVar5 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_MailManager::MakeJsonToMailList",0x23,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_258.Ptr,99,L"DS_JsonStringToProtoMessage failed.\n%s");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
      TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_2a8);
      bVar2 = FWeakObjectPtr::IsValid(&local_2a8);
      if (bVar2) {
        this_00 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_2a8);
        UDS_MailDataSet::UpdateMailList(this_00,&local_290);
      }
      mail::MailCategoryListResponse::~MailCategoryListResponse(&local_290);
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bb22aaa;
      pUVar5 = UDS_LogManager::GetInst();
      pIVar6 = TSharedPtr<IHttpResponse,1>::operator->(param_1);
      (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MailManager::OnResponseLoadMailList",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x5a,L"OnResponseLoadMailList ErrorCode = %d");
      local_2a0 = (void *)local_138._padding_;
    }
    if (local_2a0 != (void *)0x0) {
      FMemory::Free(local_2a0);
    }
  }
LAB_14bb22aaa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnResponseReadMail @ 14bb22ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MailManager::OnResponseReadMail(UDS_MailManager *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1->Object != (IHttpResponse *)0x0) {
    iVar3 = (**(code **)((longlong)*param_1->Object + 0x58))();
    if (iVar3 != 200) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (param_1->Object == (IHttpResponse *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        (**(code **)((longlong)*param_1->Object + 0x58))();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_MailManager::OnResponseReadMail",0x23,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x8a,L"OnResponseReadMail ErrorCode = %d");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Reset @ 14bb32f20

void __thiscall UDS_MailManager::Reset(UDS_MailManager *this)

{
  return;
}

