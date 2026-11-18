// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FAsyncStoreLoader @ 141e84230

FAsyncStoreLoader * __thiscall
FixedTagPrivate::FAsyncStoreLoader::FAsyncStoreLoader(FAsyncStoreLoader *this)

{
  FStore *pFVar1;
  
  pFVar1 = FStoreManager::CreateAndRegister(&GStores);
  (this->Store).Reference = pFVar1;
  if (pFVar1 != (FStore *)0x0) {
    LOCK();
    (pFVar1->RefCount).Counter = (pFVar1->RefCount).Counter + 1;
    UNLOCK();
  }
  (this->Order).bIsSet = false;
  return this;
}

// operator() @ 141e8cfb0

void __thiscall
`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>::operator()
          (void *this)

{
  TSerializer<22> local_e8;
  TArrayView<FixedTagPrivate::FMarshalledText,int> local_c8;
  FArchiveState local_b8;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_18 = 0x7fffffffffffffff;
  local_28 = 0;
  local_20 = this;
  FArchiveState::SetIsLoading(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_e8.Ar = (FArchive *)&local_b8;
  local_e8.Scratch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Scratch.Data.ArrayNum = 0;
  local_e8.Scratch.Data.ArrayMax = 0;
  local_c8.DataPtr = *(FMarshalledText **)(*(longlong *)((longlong)this + 0x10) + 0xa0);
  local_c8._8_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0xa8);
  FixedTagPrivate::TSerializer<22>::LoadViewData<FixedTagPrivate::FMarshalledText>
            (&local_e8,&local_c8);
  FArchive::~FArchive((FArchive *)&local_b8);
  return;
}

// LoadFinalData @ 141eabd80

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FixedTagPrivate::FStore_const_> __thiscall
FixedTagPrivate::FAsyncStoreLoader::LoadFinalData
          (FAsyncStoreLoader *this,FArchive *param_1,Type param_2)

{
  FStore *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TRefCountPtr<FixedTagPrivate::FStore_const_> TVar5;
  undefined4 in_register_00000084;
  int in_R9D;
  TSerializer<22> *local_res8;
  TSerializer<22> *local_38;
  void *local_30 [2];
  TSerializer<22> local_20;
  
  if ((this->Order).bIsSet == false) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    if ((in_R9D != 0x16) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeaderVersion == FAssetRegistryVersion::LatestVersion",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x565,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar5.Reference = (FStore *)(*pcVar2)();
      return (TRefCountPtr<FixedTagPrivate::FStore_const_>)TVar5.Reference;
    }
    local_20.Scratch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20.Scratch.Data.ArrayNum = 0;
    local_20.Scratch.Data.ArrayMax = 0;
    local_20.Ar = (FArchive *)CONCAT44(in_register_00000084,param_2);
    if (((this->Order).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar5.Reference = (FStore *)(*pcVar2)();
      return (TRefCountPtr<FixedTagPrivate::FStore_const_>)TVar5.Reference;
    }
    pFVar1 = (this->Store).Reference;
    if ((this->Order).TypedValue == TextFirst) {
      local_res8 = &local_20;
      VisitViews<2,FixedTagPrivate::FStore_&,_FixedTagPrivate::TSerializer<22>::LoadFinalData_::__l5::<lambda_1>_>
                (pFVar1,(<lambda_1> *)&local_res8);
    }
    else {
      local_38 = &local_20;
      VisitViews<0,FixedTagPrivate::FStore_&,_FixedTagPrivate::TSerializer<22>::LoadFinalData_::__l7::<lambda_2>_>
                (pFVar1,(<lambda_2> *)&local_38);
    }
    uVar4 = TSerializer<22>::LoadItem<unsigned_int>(&local_20);
    if (uVar4 != 0x87654321) {
      if (2 < (byte)LogAssetDataTags._0_1_) {
        (**(code **)(*(longlong *)&(local_20.Ar)->field_0x0 + 0x18))(local_20.Ar,local_30);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FixedTagPrivate::TSerializer<22>::LoadFinalData(FixedTagPrivate::FStore&___ptr64,FixedTagPrivate::ELoadOrder)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogAssetDataTags);
        if (local_30[0] != (void *)0x0) {
          FMemory::Free(local_30[0]);
        }
      }
      FArchiveState::SetError((FArchiveState *)local_20.Ar);
    }
    if (local_20.Scratch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Scratch.Data.AllocatorInstance.Data);
    }
    pFVar1 = (this->Store).Reference;
    *(FStore **)param_1 = pFVar1;
    if (pFVar1 != (FStore *)0x0) {
      LOCK();
      (pFVar1->RefCount).Counter = (pFVar1->RefCount).Counter + 1;
      UNLOCK();
      return (TRefCountPtr<FixedTagPrivate::FStore_const_>)(FStore *)param_1;
    }
  }
  return (TRefCountPtr<FixedTagPrivate::FStore_const_>)(FStore *)param_1;
}

// ReadInitialDataAndKickLoad @ 141eb0bc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __thiscall
FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad
          (FAsyncStoreLoader *this,TFuture<void> *__return_storage_ptr__,FArchive *param_1,
          uint param_2,Type param_3)

{
  TOptional<FixedTagPrivate::ELoadOrder> *pTVar1;
  FThreadSafeCounter *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TRefCountPtr<FixedTagPrivate::FStore> TVar6;
  bool bVar7;
  uint uVar8;
  TFuture<void> *pTVar9;
  TOptional<FixedTagPrivate::ELoadOrder> TVar10;
  FMarshalledText *pFVar11;
  FMarshalledText *pFVar12;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  <lambda_1> local_98;
  TSerializer<22> local_80;
  TSerializer<22> local_68;
  TUniqueFunction<void___cdecl(void)> local_48;
  
  if ((param_3 != LatestVersion) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("HeaderVersion == FAssetRegistryVersion::LatestVersion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x54c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TFuture<void> *)(*pcVar5)();
    return pTVar9;
  }
  local_80.Scratch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Scratch.Data.ArrayNum = 0;
  local_80.Scratch.Data.ArrayMax = 0;
  local_80.Ar = param_1;
  TVar10 = TSerializer<22>::LoadHeader(&local_80,(FStore *)&stack0x00000008);
  pTVar1 = &this->Order;
  if (TVar10 != (TOptional<FixedTagPrivate::ELoadOrder>)pTVar1) {
    if (*(char *)((longlong)TVar10 + 4) == '\0') {
      if ((this->Order).bIsSet != false) {
        (this->Order).bIsSet = false;
      }
    }
    else {
      pTVar1->TypedValue = *(ELoadOrder *)TVar10;
      (this->Order).bIsSet = true;
    }
  }
  if (local_80.Scratch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Scratch.Data.AllocatorInstance.Data);
  }
  if (((this->Order).bIsSet == true) && (pTVar1->TypedValue == TextFirst)) {
    local_68.Scratch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Scratch.Data.ArrayNum = 0;
    local_68.Scratch.Data.ArrayMax = 0;
    local_68.Ar = param_1;
    uVar8 = TSerializer<22>::LoadItem<unsigned_int>(&local_68);
    local_a0._0_4_ = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    if ((int)uVar8 < 1) {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar8,&local_a8,(int *)&local_a0,(int *)((longlong)&local_a0 + 4));
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a8.Data,(longlong)(int)local_a0);
    if ((int)local_a0 != 0) {
      local_98.Data.AllocatorInstance.Data = local_a8.Data;
      local_98.Data.ArrayMax = local_a0._4_4_;
      local_98.OutStore.Reference = (this->Store).Reference;
      local_48._0_8_ = 0;
      local_48._40_8_ = 0;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (int)local_a0;
      local_a0 = 0;
      if (local_98.OutStore.Reference != (FStore *)0x0) {
        LOCK();
        ((local_98.OutStore.Reference)->RefCount).Counter =
             ((local_98.OutStore.Reference)->RefCount).Counter + 1;
        UNLOCK();
      }
      Async<_FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad_::__l15::<lambda_1>_>
                (__return_storage_ptr__,TaskGraph,&local_98,&local_48);
      TVar6.Reference = local_98.OutStore.Reference;
      if (local_98.OutStore.Reference != (FStore *)0x0) {
        LOCK();
        pFVar2 = &(local_98.OutStore.Reference)->RefCount;
        iVar3 = pFVar2->Counter;
        pFVar2->Counter = pFVar2->Counter + -1;
        UNLOCK();
        if (iVar3 == 1) {
          EnterCriticalSection((LPCRITICAL_SECTION)&GStores);
          if ((0x3fff < (TVar6.Reference)->Index) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Store.Index < Capacity",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                                 ,0x19e,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TFuture<void> *)(*pcVar5)();
            return pTVar9;
          }
          if ((GStores.Data[(TVar6.Reference)->Index] != TVar6.Reference) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Data[Store.Index] == &Store",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                                 ,0x19f,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TFuture<void> *)(*pcVar5)();
            return pTVar9;
          }
          GStores.Data[(TVar6.Reference)->Index] = (FStore *)0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)&GStores);
          if ((TVar6.Reference)->Data != (void *)0x0) {
            pFVar11 = ((TVar6.Reference)->Texts).DataPtr;
            pFVar12 = pFVar11 + (int)*(undefined8 *)&((TVar6.Reference)->Texts).ArrayNum;
            for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 1) {
              pFVar4 = (pFVar11->String).Data.AllocatorInstance.Data;
              if (pFVar4 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar4);
              }
            }
            FMemory::Free((TVar6.Reference)->Data);
          }
          ::operator_delete(TVar6.Reference,200);
        }
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_a8.Data);
      return __return_storage_ptr__;
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

