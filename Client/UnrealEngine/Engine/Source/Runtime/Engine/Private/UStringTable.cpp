// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 147d591d0

UClass * __cdecl UStringTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStringTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StringTable",
               &Z_Registration_Info_UClass_UStringTable.InnerSingleton,
               StaticRegisterNativesUStringTable,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStringTable>,InternalVTableHelperCtorCaller<UStringTable>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStringTable.InnerSingleton;
}

// UStringTable @ 147d7a9e0

UStringTable * __thiscall UStringTable::UStringTable(UStringTable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStringTable__6B_;
  (this->StringTable).Object = (FStringTable *)0x0;
  (this->StringTable).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->StringTableId).ComparisonIndex = 0;
  (this->StringTableId).Number = 0;
  return this;
}

// UStringTable @ 147d7aa20

UStringTable * __thiscall UStringTable::UStringTable(UStringTable *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  UStringTable *pUVar8;
  FString *pFVar9;
  FStringTableEngineBridge *pFVar10;
  FStringTableRegistry *this_00;
  TSharedRef<FStringTable,1> *pTVar11;
  wchar_t *pwVar12;
  TArray<TObjectPtr<UStringTable>,TSizedDefaultAllocator<32>_> *pTVar13;
  FStringTable *pFVar14;
  FTextKey local_res8 [2];
  FName local_res10;
  UStringTable *local_58;
  FString local_50;
  FString local_40;
  TSharedRef<FStringTable,1> local_30;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UStringTable__6B_;
  pTVar7 = ::operator_new(0x120);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FStringTable *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFStringTable___00_SharedPointerInternals__6B_;
    FStringTable::FStringTable((FStringTable *)(pTVar7 + 1));
    pFVar14 = (FStringTable *)(pTVar7 + 1);
    if (pFVar14 == (FStringTable *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UStringTable *)(*pcVar4)();
        return pUVar8;
      }
      goto LAB_147d7ab22;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = (longlong *)pFVar14->_padding_;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_147d7ab22:
  (this->StringTable).Object = pFVar14;
  (this->StringTable).SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_40,(UObject *)0x0);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&this->StringTableId,pwVar12);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if ((this->StringTable).Object == (FStringTable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UStringTable *)(*pcVar4)();
      return pUVar8;
    }
  }
  FStringTable::SetOwnerAsset((this->StringTable).Object,this);
  if ((this->StringTable).Object == (FStringTable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UStringTable *)(*pcVar4)();
      return pUVar8;
    }
  }
  FStringTable::IsLoaded((this->StringTable).Object,(this->_padding_ & 0x1400) == 0);
  if ((this->StringTable).Object == (FStringTable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UStringTable *)(*pcVar4)();
      return pUVar8;
    }
  }
  local_res10 = (FName)this->_padding_;
  pFVar14 = (this->StringTable).Object;
  ::FName::ToString(&local_res10,&local_50);
  FTextKey::FTextKey(local_res8,&local_50);
  FStringTable::SetNamespace(pFVar14,local_res8);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  bVar5 = UObject::IsAsset((UObject *)this);
  if (bVar5) {
    bVar5 = UE::StringTable::Private::ShouldAutoRegister(this->StringTableId);
    if (bVar5) {
      pFVar10 = FStringTableEngineBridge::Get();
      lpCriticalSection = &pFVar10->KeepAliveStringTablesCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pTVar13 = &pFVar10->KeepAliveStringTables;
      local_58 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      pFVar3 = (pTVar13->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
         ((FScriptContainerElement *)&local_58 <
          pFVar3 + (longlong)(pFVar10->KeepAliveStringTables).ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pUVar8 = (UStringTable *)(*pcVar4)();
          return pUVar8;
        }
      }
      iVar6 = (pFVar10->KeepAliveStringTables).ArrayNum;
      piVar1 = &(pFVar10->KeepAliveStringTables).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar13->AllocatorInstance,piVar1);
      }
      pFVar3 = (pTVar13->AllocatorInstance).Data;
      (pFVar10->KeepAliveStringTables).ArrayNum = iVar6 + 1;
      *(UStringTable **)(pFVar3 + (longlong)iVar6 * 8) = local_58;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UStringTable *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_58);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this_00 = FStringTableRegistry::Get();
      pTVar11 = TSharedPtr<FStringTable,1>::ToSharedRef(&this->StringTable,&local_30);
      FStringTableRegistry::RegisterStringTable(this_00,this->StringTableId,pTVar11);
    }
  }
  return this;
}

// ~UStringTable @ 147d7bd70

void __thiscall UStringTable::~UStringTable(UStringTable *this)

{
  this->_padding_ = (longlong)&___7UStringTable__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StringTable).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// FinishDestroy @ 147d9d4a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UStringTable::FinishDestroy(UStringTable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FStringTableEngineBridge *pFVar1;
  FStringTableRegistry *this_00;
  TObjectPtr<UStringTable>_u_0 local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->_padding_ & 0x10) == 0) {
    pFVar1 = FStringTableEngineBridge::Get();
    lpCriticalSection = &pFVar1->KeepAliveStringTablesCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8.DebugPtr = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UStringTable>,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&pFVar1->KeepAliveStringTables,(TObjectPtr<UStringTable> *)&local_res8.ObjectPtr,
               Default);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((uint)this->_padding_ >> 0xe & 1) == 0) {
      this_00 = FStringTableRegistry::Get();
      FStringTableRegistry::UnregisterStringTable(this_00,this->StringTableId);
    }
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->StringTable != (TSharedPtr<FStringTable,1> *)&local_18) {
    (this->StringTable).Object = (FStringTable *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StringTable).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetMutableStringTable @ 147da6970

TSharedRef<FStringTable,1> * __thiscall
UStringTable::GetMutableStringTable
          (UStringTable *this,TSharedRef<FStringTable,1> *__return_storage_ptr__)

{
  TSharedPtr<FStringTable,1>::ToSharedRef(&this->StringTable,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147da86b0

UClass * __cdecl UStringTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStringTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StringTable",
               &Z_Registration_Info_UClass_UStringTable.InnerSingleton,
               StaticRegisterNativesUStringTable,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStringTable>,InternalVTableHelperCtorCaller<UStringTable>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStringTable.InnerSingleton;
}

// GetStringTable @ 147da95b0

TSharedRef<FStringTable_const_,1> * __thiscall
UStringTable::GetStringTable
          (UStringTable *this,TSharedRef<FStringTable_const_,1> *__return_storage_ptr__)

{
  FStringTable *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FStringTable_const_,1> *pTVar5;
  
  if ((this->StringTable).Object == (FStringTable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<FStringTable_const_,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->StringTable).Object;
  pTVar2 = (this->StringTable).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FStringTable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<FStringTable_const_,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetStringTableId @ 147da9660

FName __thiscall UStringTable::GetStringTableId(UStringTable *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->StringTableId;
  return in_RDX;
}

// InitializeEngineBridge @ 147dacdf0

void __cdecl UStringTable::InitializeEngineBridge(void)

{
  IStringTableEngineBridge::InstancePtr =
       (IStringTableEngineBridge *)FStringTableEngineBridge::Get();
  return;
}

// OnPluginUnloaded @ 147db88b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl UStringTable::OnPluginUnloaded(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  void *pvVar2;
  FStringTableEngineBridge *pFVar3;
  ulong64 uVar4;
  int iVar5;
  undefined1 auStack_288 [32];
  wchar_t **local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  undefined8 uStack_250;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  pvVar2 = FGenericPlatformString::Memcpy(local_228,&u__,2);
  pwVar1 = param_1->DataPtr;
  iVar5 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar5;
  local_248.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
  if (local_248.End < local_248.CurPos + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,uVar4);
  }
  if (iVar5 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_248.CurPos,pwVar1,uVar4 * 2);
    local_248.CurPos = (wchar_t *)((longlong)pvVar2 + uVar4 * 2);
  }
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  pvVar2 = FGenericPlatformString::Memcpy(local_248.CurPos,&u__,2);
  local_248.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
  pFVar3 = FStringTableEngineBridge::Get();
  local_268 = &local_258;
  uStack_260 = (undefined4)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
  uStack_250 = CONCAT44(uStack_25c,uStack_260);
  local_258 = local_248.Base;
  TArray<TObjectPtr<UStringTable>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_FStringTableEngineBridge::UnregisterForGCUnderPath_::__l2::<lambda_1>_>
            (&pFVar3->KeepAliveStringTables,(<lambda_1> *)&local_268,Default);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return;
}

// PostLoad @ 147db93b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall UStringTable::PostLoad(UStringTable *this)

{
  code *pcVar1;
  bool bVar2;
  
  UObject::PostLoad((UObject *)this);
  if ((this->StringTable).Object == (FStringTable *)0x0) {
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
  FStringTable::IsLoaded((this->StringTable).Object,true);
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateApplicationBase::InvalidateAllWidgets
              (FSlateApplicationBase::CurrentBaseApplication.Object,false);
    return;
  }
  return;
}

// Rename @ 147dbd910

bool __thiscall
UStringTable::Rename(UStringTable *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FStringTableRegistry *pFVar4;
  FString *pFVar5;
  TSharedRef<FStringTable,1> *pTVar6;
  wchar_t *pwVar7;
  FName local_28;
  TSharedRef<FStringTable,1> local_20;
  
  bVar1 = UObject::Rename((UObject *)this,param_1,param_2,param_3);
  if (bVar1) {
    pFVar4 = FStringTableRegistry::Get();
    bVar2 = FStringTableRegistry::UnregisterStringTable(pFVar4,this->StringTableId);
    if ((!bVar2) ||
       (bVar3 = UE::StringTable::Private::ShouldAutoRegister(this->StringTableId), bVar3)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pFVar5 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this,(FString *)&local_20,(UObject *)0x0);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_28,pwVar7);
    this->StringTableId = local_28;
    if (local_20.Object != (FStringTable *)0x0) {
      FMemory::Free(local_20.Object);
    }
    if ((bVar2) &&
       ((bVar3 || (bVar2 = UE::StringTable::Private::ShouldAutoRegister(this->StringTableId), bVar2)
        ))) {
      pFVar4 = FStringTableRegistry::Get();
      pTVar6 = TSharedPtr<FStringTable,1>::ToSharedRef(&this->StringTable,&local_20);
      FStringTableRegistry::RegisterStringTable(pFVar4,this->StringTableId,pTVar6);
    }
  }
  return bVar1;
}

// Serialize @ 147dbf040

void __thiscall UStringTable::Serialize(UStringTable *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((this->StringTable).Object == (FStringTable *)0x0) {
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
  FStringTable::Serialize((this->StringTable).Object,param_1);
  return;
}

// Serialize @ 147dbf0a0

void __thiscall UStringTable::Serialize(UStringTable *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar3);
  if ((this->StringTable).Object == (FStringTable *)0x0) {
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
  FStringTable::Serialize((this->StringTable).Object,pFVar3);
  return;
}

// StaticRegisterNativesUStringTable @ 147dc43a0

void __cdecl UStringTable::StaticRegisterNativesUStringTable(void)

{
  return;
}

