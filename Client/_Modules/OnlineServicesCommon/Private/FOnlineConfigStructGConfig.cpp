// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 9

// ~FOnlineConfigStructGConfig @ 14ee24fd0

void __thiscall
UE::Online::FOnlineConfigStructGConfig::~FOnlineConfigStructGConfig
          (FOnlineConfigStructGConfig *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->StructMembers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StructMembers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructMembers);
  return;
}

// CreateStruct @ 14eea7d20

TSharedPtr<UE::Online::IOnlineConfigStruct,1> * __cdecl
UE::Online::FOnlineConfigStructGConfig::CreateStruct
          (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *__return_storage_ptr__,FString *param_1)

{
  __return_storage_ptr__->Object = (IOnlineConfigStruct *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ParseStruct((wchar_t *)(param_1->Data).AllocatorInstance.Data,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateStructArray @ 14eea7d50

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,TSizedDefaultAllocator<32>_> * __cdecl
UE::Online::FOnlineConfigStructGConfig::CreateStructArray
          (TArray<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FString *param_1)

{
  IOnlineConfigStruct *pIVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FSharedReferencer<1> FVar4;
  FScriptContainerElement *pFVar5;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((1 < (param_1->Data).ArrayNum) &&
     (pFVar3 = (param_1->Data).AllocatorInstance.Data, *(short *)pFVar3 == 0x28)) {
    pFVar3 = pFVar3 + 2;
    while (pFVar3 != (FScriptContainerElement *)0x0) {
      if (*(wchar_t *)pFVar3 != L'(') {
        if (*(wchar_t *)pFVar3 == L')') {
          return __return_storage_ptr__;
        }
        if ((byte)LogOnlineServicesConfig._0_1_ < 3) {
          return __return_storage_ptr__;
        }
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServicesConfig);
        return __return_storage_ptr__;
      }
      local_18.Object = (IOnlineConfigStruct *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar3 = (FScriptContainerElement *)ParseStruct((wchar_t *)pFVar3,&local_18);
      pIVar1 = local_18.Object;
      FVar4.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
      if (local_18.Object != (IOnlineConfigStruct *)0x0) {
        iVar2 = __return_storage_ptr__->ArrayNum;
        if (iVar2 == __return_storage_ptr__->ArrayMax) {
          iVar2 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar2 + 1;
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
        local_18.Object = (IOnlineConfigStruct *)0x0;
        *(IOnlineConfigStruct **)pFVar5 = pIVar1;
        *(TReferenceControllerBase<1> **)(pFVar5 + 8) =
             local_18.SharedReferenceCount.ReferenceController;
        FVar4.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
    }
  }
  return __return_storage_ptr__;
}

// CreateValueArray @ 14eea7e70

/* WARNING: Removing unreachable block (ram,0x00014eea8040) */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::Online::FOnlineConfigStructGConfig::CreateValueArray
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  wchar_t wVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  FStaticBasicLogRecord *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((1 < (param_1->Data).ArrayNum) &&
     (pFVar7 = (param_1->Data).AllocatorInstance.Data, *(short *)pFVar7 == 0x28)) {
    wVar1 = *(wchar_t *)(pFVar7 + 2);
    pFVar7 = pFVar7 + 2;
    while (wVar1 != L'\0') {
      if (wVar1 == L')') {
        return __return_storage_ptr__;
      }
      uVar4 = (uint)(ushort)wVar1;
      if (wVar1 == L'\"') {
        pFVar2 = pFVar7;
        do {
          pFVar8 = pFVar2;
          if (*(wchar_t *)(pFVar8 + 2) == L'\0') {
            if ((byte)LogOnlineServicesConfig._0_1_ < 3) {
              return __return_storage_ptr__;
            }
            pFVar6 = &::LOG_Static;
            goto LAB_14eea80b1;
          }
          pFVar2 = pFVar8 + 2;
        } while (*(wchar_t *)(pFVar8 + 2) != L'\"');
        ::FString::ConstructFromPtrSize
                  (&local_38,(wchar_t *)(pFVar7 + 2),
                   (int)((longlong)(pFVar8 + 2) - (longlong)(pFVar7 + 2) >> 1));
        iVar3 = __return_storage_ptr__->ArrayNum;
        if (iVar3 == __return_storage_ptr__->ArrayMax) {
          iVar3 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar3 + 1;
        pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
        pFVar8 = pFVar8 + 4;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_38.Data.AllocatorInstance.Data;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_38.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
      }
      else {
        uVar5 = 0;
        if ((uVar4 & 0xffffffc0) == 0x40) {
          uVar5 = 0x7fffffe87fffffe;
        }
        pFVar8 = pFVar7;
        for (uVar5 = (uVar5 | -(ulonglong)(uVar4 < 0x40) & 0x3ff080000000000) >> (uVar4 & 0x3f);
            (uVar5 & 1) != 0;
            uVar5 = (uVar5 | -(ulonglong)((ushort)wVar1 < 0x40) & 0x3ff080000000000) >>
                    ((ushort)wVar1 & 0x3f)) {
          wVar1 = *(wchar_t *)(pFVar8 + 2);
          pFVar8 = pFVar8 + 2;
          uVar5 = 0;
          if (((ushort)wVar1 & 0xffffffc0) == 0x40) {
            uVar5 = 0x7fffffe87fffffe;
          }
        }
        ::FString::ConstructFromPtrSize
                  (&local_28,(wchar_t *)pFVar7,(int)((longlong)pFVar8 - (longlong)pFVar7 >> 1));
        iVar3 = __return_storage_ptr__->ArrayNum;
        if (iVar3 == __return_storage_ptr__->ArrayMax) {
          iVar3 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar3 + 1;
        pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_28.Data.AllocatorInstance.Data;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_28.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
      }
      wVar1 = *(wchar_t *)pFVar8;
      if (wVar1 == L',') {
        wVar1 = *(wchar_t *)(pFVar8 + 2);
        pFVar8 = pFVar8 + 2;
      }
      iVar3 = iswspace(wVar1);
      while (iVar3 != 0) {
        pFVar7 = pFVar8 + 2;
        pFVar8 = pFVar8 + 2;
        iVar3 = iswspace(*(wchar_t *)pFVar7);
      }
      pFVar7 = pFVar8;
      wVar1 = *(wchar_t *)pFVar8;
    }
    if (2 < (byte)LogOnlineServicesConfig._0_1_) {
      pFVar6 = &::LOG_Static;
LAB_14eea80b1:
      Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogOnlineServicesConfig);
    }
  }
  return __return_storage_ptr__;
}

// GetValue @ 14eee7aa0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Online::FOnlineConfigStructGConfig::GetValue
          (FOnlineConfigStructGConfig *this,wchar_t *param_1,
          TArray<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,TSizedDefaultAllocator<32>_> *param_2
          )

{
  FScriptContainerElement *pFVar1;
  IOnlineConfigStruct *pIVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  FSharedReferencer<1> FVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TArray<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,TSizedDefaultAllocator<32>_> local_28;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> local_18;
  
  ::FString::FString((FString *)&local_18,param_1);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if ((int)local_18.SharedReferenceCount.ReferenceController == 0) {
    pwVar4 = L"";
    iVar5 = 0;
  }
  else {
    iVar5 = (int)local_18.SharedReferenceCount.ReferenceController + -1;
    pwVar4 = (wchar_t *)local_18.Object;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar4);
  iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->StructMembers,uVar3,(FString *)&local_18);
  pTVar7 = pTVar9;
  if (iVar5 != -1) {
    pTVar7 = (TReferenceControllerBase<1> *)
             (*(longlong *)&this->StructMembers + (longlong)iVar5 * 0x28);
  }
  pTVar8 = pTVar7 + 1;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = pTVar9;
  }
  if (local_18.Object != (IOnlineConfigStruct *)0x0) {
    FMemory::Free(local_18.Object);
  }
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    iVar5 = 0;
  }
  else {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if ((1 < (int)pTVar8->SharedReferenceCount) && (*(short *)pTVar8->_padding_ == 0x28)) {
      pwVar4 = (short *)pTVar8->_padding_ + 1;
      while (pwVar4 != (wchar_t *)0x0) {
        if (*pwVar4 != L'(') {
          if ((*pwVar4 != L')') && (2 < (byte)LogOnlineServicesConfig._0_1_)) {
            Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineServicesConfig);
          }
          break;
        }
        local_18.Object = (IOnlineConfigStruct *)0x0;
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pwVar4 = ParseStruct(pwVar4,&local_18);
        pIVar2 = local_18.Object;
        FVar6.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
        if (local_18.Object != (IOnlineConfigStruct *)0x0) {
          iVar5 = local_28.ArrayNum;
          if (local_28.ArrayNum == local_28.ArrayMax) {
            iVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_28.AllocatorInstance,&local_28.ArrayMax);
          }
          local_28.ArrayNum = iVar5 + 1;
          local_18.Object = (IOnlineConfigStruct *)0x0;
          *(IOnlineConfigStruct **)
           &local_28.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 = pIVar2;
          *(TReferenceControllerBase<1> **)
           (local_28.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
               local_18.SharedReferenceCount.ReferenceController;
          FVar6.ReferenceController = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar6.ReferenceController);
      }
    }
    if (param_2 != &local_28) {
      DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>
                ((TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->AllocatorInstance).Data = local_28.AllocatorInstance.Data;
      param_2->ArrayNum = local_28.ArrayNum;
      param_2->ArrayMax = local_28.ArrayMax;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>
              ((TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)local_28.AllocatorInstance.Data,
               local_28.ArrayNum);
    if ((TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)local_28.AllocatorInstance.Data !=
        (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    iVar5 = param_2->ArrayNum;
  }
  return iVar5;
}

// GetValue @ 14eee7c80

int __thiscall
UE::Online::FOnlineConfigStructGConfig::GetValue
          (FOnlineConfigStructGConfig *this,wchar_t *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  FString *pFVar7;
  FString local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  ::FString::FString(&local_28,param_1);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar5.Data);
  iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->StructMembers,uVar2,&local_28);
  pFVar6 = (FString *)0x0;
  if (iVar4 != -1) {
    pFVar6 = (FString *)(*(longlong *)&this->StructMembers + (longlong)iVar4 * 0x28);
  }
  pFVar7 = pFVar6 + 1;
  if (pFVar6 == (FString *)0x0) {
    pFVar7 = (FString *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pFVar7 == (FString *)0x0) {
    return 0;
  }
  pTVar3 = CreateValueArray(&local_18,pFVar7);
  if (param_2 != pTVar3) {
    DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayNum = pTVar3->ArrayNum;
    param_2->ArrayMax = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return param_2->ArrayNum;
}

// GetValue @ 14eee7da0

bool __thiscall
UE::Online::FOnlineConfigStructGConfig::GetValue
          (FOnlineConfigStructGConfig *this,wchar_t *param_1,
          TSharedPtr<UE::Online::IOnlineConfigStruct,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedReferencer<1> FVar2;
  uint uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FString local_28;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> local_18;
  
  ::FString::FString(&local_28,param_1);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar5.Data);
  iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->StructMembers,uVar3,&local_28);
  puVar6 = (undefined8 *)0x0;
  if (iVar4 != -1) {
    puVar6 = (undefined8 *)(*(longlong *)&this->StructMembers + (longlong)iVar4 * 0x28);
  }
  puVar7 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (puVar7 != (undefined8 *)0x0) {
    local_18.Object = (IOnlineConfigStruct *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    ParseStruct((wchar_t *)*puVar7,&local_18);
    FVar2.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if (local_18.Object != (IOnlineConfigStruct *)0x0) {
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_18.Object;
      (param_2->SharedReferenceCount).ReferenceController =
           local_18.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return false;
}

// GetValue @ 14eee7eb0

bool __thiscall
UE::Online::FOnlineConfigStructGConfig::GetValue
          (FOnlineConfigStructGConfig *this,wchar_t *param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar3.Data);
  iVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->StructMembers,uVar1,&local_18);
  pFVar4 = (FString *)0x0;
  if (iVar2 != -1) {
    pFVar4 = (FString *)(*(longlong *)&this->StructMembers + (longlong)iVar2 * 0x28);
  }
  pFVar5 = pFVar4 + 1;
  if (pFVar4 == (FString *)0x0) {
    pFVar5 = (FString *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pFVar5 == (FString *)0x0) {
    return false;
  }
  ::FString::operator=(param_2,pFVar5);
  return true;
}

// ParseStruct @ 14eef34b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl
UE::Online::FOnlineConfigStructGConfig::ParseStruct
          (wchar_t *param_1,TSharedPtr<UE::Online::IOnlineConfigStruct,1> *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 auStackY_d8 [32];
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> local_a8;
  undefined8 local_98;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if ((*param_1 == L'\0') || (*param_1 != L'(')) {
    if (2 < (byte)LogOnlineServicesConfig._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServicesConfig);
    }
  }
  else {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    local_98 = 0x15309c738;
    pwVar6 = param_1 + 1;
    local_90._0_8_ = (FScriptContainerElement *)0x0;
    local_90._8_8_ = 0;
    local_70 = (void *)0x0;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    wVar2 = *pwVar6;
    local_68 = ___xmm_00000000ffffffff0000008000000000;
    uStack_60 = _UNK_150631d98;
    while ((wVar2 != L'\0' && (wVar2 != L')'))) {
      pwVar6 = ::`anonymous_namespace'::ParseField
                         (pwVar6,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                  *)local_90);
      if (pwVar6 == (wchar_t *)0x0) goto LAB_14eef356d;
      wVar2 = *pwVar6;
    }
    if (*pwVar6 == L')') {
      wVar2 = pwVar6[1];
      bVar11 = wVar2 == L',';
      if (bVar11) {
        wVar2 = pwVar6[2];
      }
      lVar8 = 4;
      if (!bVar11) {
        lVar8 = 2;
      }
      pwVar6 = (wchar_t *)(lVar8 + (longlong)pwVar6);
      iVar5 = iswspace(wVar2);
      while (iVar5 != 0) {
        pwVar1 = pwVar6 + 1;
        pwVar6 = pwVar6 + 1;
        iVar5 = iswspace(*pwVar1);
      }
      pTVar7 = ::operator_new(0x68);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        local_a8.Object = (IOnlineConfigStruct *)___xmm_00000000000000000000000000000010;
        pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_a8.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        pTVar7[1]._padding_ = 0x15309c738;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFOnlineConfigStructGConfig_Online_UE___00_SharedPointerInternals__6B_
        ;
        *(undefined8 *)&pTVar7[1].SharedReferenceCount.field_0x0 = 0;
        pTVar7[2]._padding_ = 0;
        pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar7[4]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar7[4]._padding_ + 4) = 0x80;
        pTVar7[4].SharedReferenceCount = (atomic<int>)0xffffffff;
        pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar7[6]._padding_ = 0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)&pTVar7[1].SharedReferenceCount,
                    (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)local_90);
        pTVar10 = pTVar7 + 1;
        if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          pwVar6 = (wchar_t *)(*pcVar3)();
          return pwVar6;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        local_a8.SharedReferenceCount.ReferenceController = pTVar7;
        pTVar9 = pTVar7;
        local_a8.Object = (IOnlineConfigStruct *)pTVar10;
      }
      if (param_2 != &local_a8) {
        param_2->Object = (IOnlineConfigStruct *)pTVar10;
        local_a8.Object = (IOnlineConfigStruct *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_a8.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      local_48 = 0;
      if (local_50 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_90,0,local_90._8_4_);
      iVar5 = SUB84(local_90._8_8_,4);
      local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
      }
      uVar4 = local_68._4_4_;
      uStack_60 = 0xffffffff;
      local_68 = (ulonglong)local_68._4_4_ << 0x20;
      if (0x80 < uVar4) {
        local_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if ((FScriptContainerElement *)local_90._0_8_ == (FScriptContainerElement *)0x0) {
        return pwVar6;
      }
      FMemory::Free((void *)local_90._0_8_);
      return pwVar6;
    }
    if (2 < (byte)LogOnlineServicesConfig._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServicesConfig);
    }
LAB_14eef356d:
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_90,0,local_90._8_4_);
    iVar5 = SUB84(local_90._8_8_,4);
    local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
    }
    uVar4 = local_68._4_4_;
    uStack_60 = 0xffffffff;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
    if (0x80 < uVar4) {
      local_68 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
  }
  return (wchar_t *)0x0;
}

