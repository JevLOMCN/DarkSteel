// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b7604f0

UClass * __cdecl UDS_WindowGroupInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WindowGroupInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WindowGroupInfo",
               &Z_Registration_Info_UClass_UDS_WindowGroupInfo.InnerSingleton,
               StaticRegisterNativesUDS_WindowGroupInfo,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WindowGroupInfo>,
               InternalVTableHelperCtorCaller<UDS_WindowGroupInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WindowGroupInfo.InnerSingleton;
}

// UDS_WindowGroupInfo @ 14b7646a0

UDS_WindowGroupInfo * __thiscall
UDS_WindowGroupInfo::UDS_WindowGroupInfo(UDS_WindowGroupInfo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->WindowGroupID = None;
  this->TestID = 0;
  this->_padding_ = (longlong)&___7UDS_WindowGroupInfo__6B_;
  (this->WindowGroupTableRow).ID = None;
  (this->WindowGroupTableRow)._padding_ = (longlong)&___7FDS_WindowGroupTableRow__6B_;
  (this->WindowGroupTableRow).DataStage = 0;
  ::FString::FString(&(this->WindowGroupTableRow).Version,L"");
  (this->WindowGroupTableRow).ID_WindowWidget.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WindowGroupTableRow).ID_WindowWidget.ArrayNum = 0;
  (this->WindowGroupTableRow).ID_WindowWidget.ArrayMax = 0;
  (this->WindowGroupTableRow).TestID = 0;
  (this->WindowIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowIDArray).ArrayNum = 0;
  (this->WindowIDArray).ArrayMax = 0;
  (this->WindowInfoListInGroup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowInfoListInGroup).ArrayNum = 0;
  (this->WindowInfoListInGroup).ArrayMax = 0;
  this->bIsAsyncLoading = false;
  (this->OpenWindowGroupCallback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenWindowGroupCallback).ArrayNum = 0;
  (this->OpenWindowGroupCallback).ArrayMax = 0;
  return this;
}

// UDS_WindowGroupInfo @ 14b764730

UDS_WindowGroupInfo * __thiscall
UDS_WindowGroupInfo::UDS_WindowGroupInfo(UDS_WindowGroupInfo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->WindowGroupID = None;
  this->TestID = 0;
  this->_padding_ = (longlong)&___7UDS_WindowGroupInfo__6B_;
  (this->WindowGroupTableRow).ID = None;
  (this->WindowGroupTableRow)._padding_ = (longlong)&___7FDS_WindowGroupTableRow__6B_;
  (this->WindowGroupTableRow).DataStage = 0;
  ::FString::FString(&(this->WindowGroupTableRow).Version,L"");
  (this->WindowGroupTableRow).ID_WindowWidget.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WindowGroupTableRow).ID_WindowWidget.ArrayNum = 0;
  (this->WindowGroupTableRow).ID_WindowWidget.ArrayMax = 0;
  (this->WindowGroupTableRow).TestID = 0;
  (this->WindowIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowIDArray).ArrayNum = 0;
  (this->WindowIDArray).ArrayMax = 0;
  (this->WindowInfoListInGroup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowInfoListInGroup).ArrayNum = 0;
  (this->WindowInfoListInGroup).ArrayMax = 0;
  this->bIsAsyncLoading = false;
  (this->OpenWindowGroupCallback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenWindowGroupCallback).ArrayNum = 0;
  (this->OpenWindowGroupCallback).ArrayMax = 0;
  return this;
}

// ~UDS_WindowGroupInfo @ 14b7652d0

void __thiscall UDS_WindowGroupInfo::~UDS_WindowGroupInfo(UDS_WindowGroupInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_WindowGroupInfo__6B_;
  DestructItems<TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
              *)(this->OpenWindowGroupCallback).AllocatorInstance.Data,
             (this->OpenWindowGroupCallback).ArrayNum);
  pFVar1 = (this->OpenWindowGroupCallback).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowInfoListInGroup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowIDArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowGroupTableRow).ID_WindowWidget.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowGroupTableRow).Version.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WindowGroupTableRow)._padding_ = (longlong)&___7FTableRowBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b7669c0

UClass * __cdecl UDS_WindowGroupInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WindowGroupInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WindowGroupInfo",
               &Z_Registration_Info_UClass_UDS_WindowGroupInfo.InnerSingleton,
               StaticRegisterNativesUDS_WindowGroupInfo,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WindowGroupInfo>,
               InternalVTableHelperCtorCaller<UDS_WindowGroupInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WindowGroupInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_WindowGroupInfo @ 14b766d50

void __cdecl UDS_WindowGroupInfo::StaticRegisterNativesUDS_WindowGroupInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_WindowGroupInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRequestOpenWindowCallback @ 14b767cf0

void __cdecl
UDS_WindowGroupInfo::execRequestOpenWindowCallback(UObject *param_1,FFrame *param_2,void *param_3)

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
  RequestOpenWindowCallback((UDS_WindowGroupInfo *)param_1,local_res10);
  return;
}

// Clear @ 14bb54a30

void __thiscall UDS_WindowGroupInfo::Clear(UDS_WindowGroupInfo *this)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  FDestructionSentinel local_38;
  
  pTVar2 = &this->OpenWindowGroupCallback;
  this->bIsAsyncLoading = false;
  this_00 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->OpenWindowGroupCallback).ArrayNum;
  pFVar3 = this_00 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->OpenWindowGroupCallback).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    if ((*(int *)(this_00 + 0x10) != 0) && (*(undefined8 **)(this_00 + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(this_00 + 8))();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(this_00 + 8),0,0,0x10);
      *(undefined4 *)(this_00 + 0x10) = 0;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    this_00 = this_00 + 0x18;
  }
  DestructItems<TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
              *)(pTVar2->AllocatorInstance).Data,(this->OpenWindowGroupCallback).ArrayNum);
  piVar1 = &(this->OpenWindowGroupCallback).ArrayMax;
  (this->OpenWindowGroupCallback).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  return;
}

// GetIntKey @ 14bb66700

int __thiscall UDS_WindowGroupInfo::GetIntKey(UDS_WindowGroupInfo *this)

{
  uint uVar1;
  
  uVar1 = (uint)this->WindowGroupID;
  if (this->WindowGroupID == None) {
    uVar1 = this->TestID;
  }
  return uVar1;
}

// InitInfo @ 14bb6b970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WindowGroupInfo::InitInfo(UDS_WindowGroupInfo *this)

{
  TArray<EDS_WindowWidget,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UClass *pUVar8;
  UEnum *pUVar9;
  UObject *pUVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  TArray<TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar16;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8 [8];
  FScriptContainerElement *local_1d0;
  uint local_1c8;
  FWeakObjectPtr local_1c0;
  UDS_WindowGroupInfo *local_1b8;
  FString local_1b0;
  FString local_1a0;
  UDS_WindowManager *local_190;
  TStringView<wchar_t> local_188;
  wchar_t *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1b8 = this;
  local_190 = UDS_WindowManager::GetInst();
  if (local_190 == (UDS_WindowManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_WindowGroupInfo::InitInfo",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x379,L"windowMng is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    uVar3 = (this->WindowGroupTableRow).ID_WindowWidget.ArrayNum;
    pTVar1 = &this->WindowIDArray;
    piVar2 = &(this->WindowIDArray).ArrayMax;
    (this->WindowIDArray).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar2 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&pTVar1->AllocatorInstance,(this->WindowIDArray).ArrayNum,piVar2);
    }
    pTVar16 = &this->WindowInfoListInGroup;
    piVar14 = &(this->WindowInfoListInGroup).ArrayMax;
    (this->WindowInfoListInGroup).ArrayNum = 0;
    if (*piVar14 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar16->AllocatorInstance,0,piVar14);
    }
    if (*piVar14 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,&pTVar16->AllocatorInstance,(this->WindowInfoListInGroup).ArrayNum,
                 piVar14);
    }
    local_1c8 = (local_1b8->WindowGroupTableRow).ID_WindowWidget.ArrayNum;
    uVar12 = (ulonglong)(int)local_1c8;
    pFVar15 = (local_1b8->WindowGroupTableRow).ID_WindowWidget.AllocatorInstance.Data;
    pFVar13 = pFVar15 + uVar12 * 4;
    local_1d0 = pFVar13;
    while( true ) {
      piVar14 = &(this->WindowInfoListInGroup).ArrayMax;
      if ((local_1b8->WindowGroupTableRow).ID_WindowWidget.ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<enum_EDS_WindowWidget,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1d8);
      }
      if (pFVar15 == pFVar13) break;
      iVar6 = *(int *)pFVar15;
      if ((iVar6 == 0) ||
         ((bVar4 = UDS_GameInstance::GetIsDungeonPlayBuild(), bVar4 &&
          ((((iVar6 == 0x2716 || (iVar6 == 0x75)) || (iVar6 == 0x40d)) || (iVar6 == 0x419)))))) {
LAB_14bb6bcb7:
        pFVar15 = pFVar15 + 4;
        uVar12 = (ulonglong)local_1c8;
      }
      else {
        UDS_WindowManager::GetWindowInfo(local_190,(int)&local_1c0);
        bVar4 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
        if (bVar4) {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 != (UDS_LogManager *)0x0) {
            pUVar7 = UDS_LogManager::GetInst();
            iStack_170 = 0x22;
            local_178 = L"/Script/ProjectDS.EDS_WindowWidget";
            pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
            local_188._12_4_ = uStack_16c;
            local_188.Size = iStack_170;
            local_188.DataPtr = local_178;
            pUVar9 = (UEnum *)StaticFindObject(pUVar8,(UObject *)0x0,&local_188,None);
            if (pUVar9 == (UEnum *)0x0) {
              ::FString::FString(&local_1b0,L"Invalid WindowID");
            }
            else {
              UEnum::GetNameStringByValue(pUVar9,&local_1b0,(longlong)iVar6);
            }
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_WindowGroupInfo::InitInfo",0x1d,Yes);
            UDS_LogManager::PrintLog
                      (pUVar7,1,Warning,local_158.Ptr,0x39d,L"info is nullptr. %s(%d)");
            FVar11.Data = local_1b0.Data.AllocatorInstance.Data;
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
              FVar11.Data = local_1b0.Data.AllocatorInstance.Data;
            }
LAB_14bb6bca4:
            pFVar13 = local_1d0;
            if (FVar11.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar11.Data);
              pFVar13 = local_1d0;
            }
          }
          goto LAB_14bb6bcb7;
        }
        pUVar10 = FWeakObjectPtr::Get(&local_1c0);
        if (pUVar10[2].field_0x1 != '\x01') {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 != (UDS_LogManager *)0x0) {
            pUVar7 = UDS_LogManager::GetInst();
            iStack_160 = 0x22;
            local_168 = L"/Script/ProjectDS.EDS_WindowWidget";
            pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
            local_188._12_4_ = uStack_15c;
            local_188.Size = iStack_160;
            local_188.DataPtr = local_168;
            pUVar9 = (UEnum *)StaticFindObject(pUVar8,(UObject *)0x0,&local_188,None);
            if (pUVar9 == (UEnum *)0x0) {
              ::FString::FString(&local_1a0,L"Invalid WindowID");
            }
            else {
              UEnum::GetNameStringByValue(pUVar9,&local_1a0,(longlong)iVar6);
            }
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_WindowGroupInfo::InitInfo",0x1d,Yes);
            UDS_LogManager::PrintLog
                      (pUVar7,1,Warning,local_158.Ptr,0x3a3,L"WindowInstanceType is not One. %s(%d)"
                      );
            FVar11.Data = local_1a0.Data.AllocatorInstance.Data;
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
              FVar11.Data = local_1a0.Data.AllocatorInstance.Data;
            }
            goto LAB_14bb6bca4;
          }
          goto LAB_14bb6bcb7;
        }
        iVar5 = (this->WindowIDArray).ArrayNum;
        if (iVar5 == *piVar2) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->WindowIDArray).ArrayNum = iVar5 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) = iVar6;
        iVar6 = (this->WindowInfoListInGroup).ArrayNum;
        if (iVar6 == *piVar14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar16->AllocatorInstance,piVar14);
        }
        pFVar15 = pFVar15 + 4;
        (this->WindowInfoListInGroup).ArrayNum = iVar6 + 1;
        *(FWeakObjectPtr *)((pTVar16->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_1c0;
        uVar12 = (ulonglong)local_1c8;
      }
    }
  }
  return;
}

// RequestOpenWindowCallback @ 14bb84db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WindowGroupInfo::RequestOpenWindowCallback(UDS_WindowGroupInfo *this,UDS_UserWidget *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType _Src;
  bool bVar6;
  char cVar7;
  int iVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  FScriptContainerElement *this_00;
  longlong lVar12;
  FWeakObjectPtr *pFVar13;
  TArray<TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  FWeakObjectPtr local_1a0;
  undefined8 local_198;
  ForAnyElementType local_190;
  undefined8 local_188;
  FDestructionSentinel local_180;
  FWeakObjectPtr local_168;
  undefined4 local_160;
  undefined4 local_15c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar4 = (this->WindowInfoListInGroup).ArrayNum;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&local_190,0,(int *)((longlong)&local_188 + 4));
  }
  pFVar13 = (FWeakObjectPtr *)(this->WindowInfoListInGroup).AllocatorInstance.Data;
  iVar5 = (this->WindowInfoListInGroup).ArrayNum;
  pFVar2 = pFVar13 + iVar5;
  while( true ) {
    if ((this->WindowInfoListInGroup).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1a8);
    }
    if (pFVar13 == pFVar2) {
      this->bIsAsyncLoading = false;
      pTVar14 = &this->OpenWindowGroupCallback;
      iVar5 = (this->OpenWindowGroupCallback).ArrayNum;
      this_00 = (pTVar14->AllocatorInstance).Data;
      pFVar3 = this_00 + (longlong)iVar5 * 0x18;
      goto LAB_14bb84f81;
    }
    local_1a0 = *pFVar13;
    bVar6 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_1a0,(void *)0x0);
    if ((bVar6) && (pUVar9 = UDS_LogManager::GetInst(), pUVar9 != (UDS_LogManager *)0x0)) {
      pUVar9 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_WindowGroupInfo::RequestOpenWindowCallback",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_158.Ptr,0x3e3,L"Invalid WindowInfoListInGroup.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    pUVar10 = FWeakObjectPtr::Get(&local_1a0);
    bVar6 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&pUVar10[5].field_0x10,
                       (void *)0x0);
    if (bVar6) break;
    pUVar10 = FWeakObjectPtr::Get(&local_1a0);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar10[5].field_0x10);
    iVar8 = (int)local_188;
    if ((int)local_188 == local_188._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_190,(int *)((longlong)&local_188 + 4));
    }
    pFVar13 = pFVar13 + 1;
    local_188 = CONCAT44(local_188._4_4_,iVar8 + 1);
    *(UObject **)(local_190.Data + (longlong)iVar8 * 8) = pUVar10;
  }
  goto LAB_14bb85143;
LAB_14bb84f81:
  if ((this->OpenWindowGroupCallback).ArrayNum != iVar5) {
    `TCheckedPointerIterator<TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(local_1a8);
  }
  if (this_00 != pFVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&local_180);
    if (((*(int *)&this_00[0x10].field_0x0 == 0) ||
        (*(longlong **)&this_00[8].field_0x0 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(**(longlong **)&this_00[8].field_0x0 + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_180);
LAB_14bb85102:
      this_00 = this_00 + 0x18;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_180);
      _Src.Data = local_190.Data;
      lVar12 = (longlong)(int)local_188;
      local_1a0.ObjectIndex = 0;
      local_1a0.ObjectSerialNumber = 0;
      local_198 = CONCAT44(local_198._4_4_,(int)local_188);
      if ((int)local_188 == 0) {
        local_198 = local_188 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(int)local_188,0,(ForAnyElementType *)&local_1a0,(int)local_188,
                   (int *)((longlong)&local_198 + 4));
        memcpy((void *)local_1a0,_Src.Data,lVar12 << 3);
      }
      plVar11 = (longlong *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)&local_180);
      if (*(int *)&this_00[0x10].field_0x0 != 0) {
        plVar11 = *(longlong **)&this_00[8].field_0x0;
      }
      local_168 = local_1a0;
      local_160 = (undefined4)local_198;
      local_15c = local_198._4_4_;
      local_198 = 0;
      local_1a0.ObjectIndex = 0;
      local_1a0.ObjectSerialNumber = 0;
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_168);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_180);
      if (local_1a0 != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_1a0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_180);
      if ((*(int *)&this_00[0x10].field_0x0 != 0) &&
         (*(undefined8 **)&this_00[8].field_0x0 != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)&this_00[8].field_0x0)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)(this_00 + 8),0,0,0x10);
        *(undefined4 *)&this_00[0x10].field_0x0 = 0;
      }
      if (local_180.bDestroyed != false) goto LAB_14bb85102;
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      this_00 = this_00 + 0x18;
    }
    goto LAB_14bb84f81;
  }
  DestructItems<TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
              *)(pTVar14->AllocatorInstance).Data,(this->OpenWindowGroupCallback).ArrayNum);
  piVar1 = &(this->OpenWindowGroupCallback).ArrayMax;
  (this->OpenWindowGroupCallback).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar14->AllocatorInstance,0,piVar1);
  }
LAB_14bb85143:
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  return;
}

// Toggle @ 14bb92ac0

bool __thiscall UDS_WindowGroupInfo::Toggle(UDS_WindowGroupInfo *this,bool param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  UObject *pUVar6;
  UDS_GameInstance *this_00;
  UClass *pUVar7;
  UDS_ManagerBase *pUVar8;
  FWeakObjectPtr *pFVar9;
  FWeakObjectPtr local_res8;
  bool local_res10 [8];
  
  iVar2 = (this->WindowInfoListInGroup).ArrayNum;
  pFVar9 = (FWeakObjectPtr *)(this->WindowInfoListInGroup).AllocatorInstance.Data;
  pFVar1 = pFVar9 + iVar2;
  local_res10[0] = param_1;
  do {
    if ((this->WindowInfoListInGroup).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar9 == pFVar1) {
      if (local_res10[0] == false) {
        Clear(this);
      }
      return true;
    }
    local_res8 = *pFVar9;
    bVar4 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar4) {
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      cVar5 = (**(code **)(*(longlong *)pUVar6 + 0x2b8))(pUVar6);
      if (cVar5 != '\0') {
        this_00 = UDS_GameInstance::GetInst();
        if (this_00 != (UDS_GameInstance *)0x0) {
          pUVar7 = Z_Construct_UClass_UDS_WindowManager_NoRegister();
          pUVar8 = UDS_GameInstance::GetManager(this_00,(FName)pUVar7->_padding_);
          if (pUVar8 == (UDS_ManagerBase *)0x0) {
LAB_14bb92b93:
            pUVar8 = (UDS_ManagerBase *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UDS_WindowManager_NoRegister();
            iVar3 = (int)pUVar7->_padding_;
            if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar3) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar7->_padding_)) goto LAB_14bb92b93;
          }
          if (pUVar8 != (UDS_ManagerBase *)0x0) {
            pUVar6 = FWeakObjectPtr::Get(&local_res8);
            TMulticastDelegate<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&pUVar8[9]._padding_,*(EDS_WindowWidget *)(pUVar6 + 1),local_res10);
          }
        }
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

