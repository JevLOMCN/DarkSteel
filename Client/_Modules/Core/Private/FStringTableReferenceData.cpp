// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// ~FStringTableReferenceData @ 1417394d0

void __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::~FStringTableReferenceData
          (FStringTableReferenceData *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  int iVar3;
  atomic<int> aVar4;
  TDisplayStringPtr<FString_const_> TVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DataCS);
  TVar5 = this->DisplayString;
  if (TVar5 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar3 = *(int *)TVar5;
    *(int *)TVar5 = *(int *)TVar5 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if (*(void **)((longlong)TVar5 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)TVar5 + 8));
      }
      ::operator_delete((void *)TVar5,0x18);
    }
  }
  pTVar6 = (this->StringTableEntry).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// operator() @ 14173ba30

void __thiscall
`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::
<lambda_1>::operator()(void *this,FName param_1,FName param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FStringTableReferenceData *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int *local_res8;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14173ba70;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    this_00 = *(FStringTableReferenceData **)this;
    if (this_00 != (FStringTableReferenceData *)0x0) {
      lpCriticalSection = &this_00->DataCS;
      if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((this_00->TableId != param_1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("This->TableId == InRequestedTableId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                             ,0xa9c,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (param_2 != (FName)0x0) {
        this_00->TableId = param_2;
      }
      this_00->LoadingPhase = Loaded;
      FTextHistory_StringTableEntry::FStringTableReferenceData::ResolveDisplayString(this_00,true);
      if (local_res8 != (int *)0x0) {
        LOCK();
        iVar1 = *local_res8;
        *local_res8 = *local_res8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          if (*(void **)(local_res8 + 2) != (void *)0x0) {
            FMemory::Free(*(void **)(local_res8 + 2));
          }
          ::operator_delete(local_res8,0x18);
        }
      }
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
LAB_14173ba70:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// CollectStringTableAssetReferences @ 14174c1c0

void __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::CollectStringTableAssetReferences
          (FStringTableReferenceData *this,FStructuredArchiveRecord param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FArchive *pFVar7;
  FSlotBase local_res10;
  undefined8 local_28 [2];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((pFVar7->field_0x2b & 1) != 0) {
    lpCriticalSection = &this->DataCS;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar3 = this->TableId;
    if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
      (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x28))
                (IStringTableEngineBridge::InstancePtr,&this->TableId,local_res10.StructuredArchive)
      ;
    }
    if (this->TableId != FVar3) {
      if (&this->StringTableEntry != (TWeakPtr<FStringTableEntry_const_,1> *)local_28) {
        pTVar4 = (this->StringTableEntry).WeakReferenceCount.ReferenceController;
        (this->StringTableEntry).Object = (FStringTableEntry *)0x0;
        (this->StringTableEntry).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      UE::Text::Private::TDisplayStringPtr<FString_const_>::Reset(&this->DisplayString);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
    (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x30))
              (IStringTableEngineBridge::InstancePtr,this->TableId,(this->Key).Index,pFVar7);
  }
  return;
}

// ConditionalBeginAssetLoad @ 14174d380

/* WARNING: Removing unreachable block (ram,0x00014174d632) */

void __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad
          (FStringTableReferenceData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  char cVar5;
  atomic<int> aVar6;
  void *this_00;
  undefined ***pppuVar7;
  TReferenceControllerBase<1> *pTVar8;
  FStringTableReferenceData *pFVar9;
  undefined **local_68;
  FStringTableReferenceData *local_60;
  TReferenceControllerBase<1> *local_58;
  undefined ***local_50;
  code *local_48 [2];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  bVar4 = FInternationalization::IsAvailable();
  if (!bVar4) {
    return;
  }
  if ('\0' < (char)IStringTableEngineBridge::DeferFindOrLoad) {
    return;
  }
  if ((IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) &&
     (cVar5 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 8))(), cVar5 == '\0'))
  {
    return;
  }
  lpCriticalSection = &this->DataCS;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->LoadingPhase != PendingLoad) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014174d42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  FVar1 = this->TableId;
  this->LoadingPhase = Loading;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar9 = (FStringTableReferenceData *)0x0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14174d484;
      }
      LOCK();
      aVar6 = pTVar8->SharedReferenceCount;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    pFVar9 = (FStringTableReferenceData *)this->_padding_;
  }
LAB_14174d484:
  if ((pFVar9 != this) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pFVar9 == (FStringTableReferenceData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_60 = pFVar9;
  local_58 = pTVar8;
  bVar4 = FInternationalization::IsAvailable();
  if ((bVar4) && ((char)IStringTableEngineBridge::DeferFindOrLoad < '\x01')) {
    if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
      cVar5 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 8))();
      if (cVar5 == '\0') goto LAB_14174d56c;
      goto LAB_14174d592;
    }
  }
  else {
LAB_14174d56c:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanFindOrLoadStringTableAsset()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\StringTableCore.h"
                       ,0xf3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14174d592:
    if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
      local_20 = 0;
      pcVar2 = *(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x10);
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::<lambda_1>,void,FName,FName>
                    ::Call;
      pppuVar7 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar7 = local_50;
      }
      (*(code *)**pppuVar7)(pppuVar7,local_38);
      (*pcVar2)(IStringTableEngineBridge::InstancePtr,FVar1,local_48);
      goto LAB_14174d63c;
    }
  }
  UE::Core::Private::Function::CheckCallable
            (UE::Core::Private::Function::
             TFunctionRefCaller<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::<lambda_1>,void,FName,FName>
             ::Call);
  pppuVar7 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar7 = local_50;
  }
  this_00 = (void *)(*(code *)(*pppuVar7)[1])();
  `FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::
  <lambda_1>::operator()(this_00,FVar1,FVar1);
LAB_14174d63c:
  pppuVar7 = &local_68;
  if (local_50 != (undefined ***)0x0) {
    pppuVar7 = local_50;
  }
  (*(code *)(*pppuVar7)[2])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// GetKey @ 14175e5e0

FTextKey __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::GetKey(FStringTableReferenceData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *in_RDX;
  
  lpCriticalSection = &this->DataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FTextKey)iVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *in_RDX = (this->Key).Index;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (FTextKey)(int)in_RDX;
}

// GetTableId @ 141761230

FName __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::GetTableId
          (FStringTableReferenceData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  lpCriticalSection = &this->DataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(FName *)in_RDX = this->TableId;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return in_RDX;
}

// GetTableIdAndKey @ 1417612d0

void __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::GetTableIdAndKey
          (FStringTableReferenceData *this,FName *param_1,FTextKey *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->DataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *param_1 = this->TableId;
  param_2->Index = (this->Key).Index;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetTextId @ 141761690

FTextId __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::GetTextId(FStringTableReferenceData *this)

{
  code *pcVar1;
  bool bVar2;
  FTextId FVar3;
  FTextId in_RDX;
  TSharedPtr<FStringTableEntry_const_,1> local_18;
  
  ResolveStringTableEntry(this,&local_18);
  if (local_18.Object == (FStringTableEntry *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined8 *)in_RDX = 0xffffffffffffffff;
    return in_RDX;
  }
  if (local_18.Object == (FStringTableEntry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FTextId)(*pcVar1)();
      return FVar3;
    }
  }
  *(FTextId *)in_RDX = (local_18.Object)->DisplayStringId;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return in_RDX;
}

// Initialize @ 141766190

void __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::Initialize
          (FStringTableReferenceData *this,FName param_1,FTextKey *param_2,
          EStringTableLoadingPolicy param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int *local_res8;
  int *local_res10;
  
  this->TableId = param_1;
  (this->Key).Index = param_2->Index;
  FStringTableRedirects::RedirectTableIdAndKey(&this->TableId,&this->Key);
  if (param_3 == Find) {
    this->LoadingPhase = Loaded;
    ResolveDisplayString(this,true);
LAB_14176629e:
    if (local_res8 != (int *)0x0) {
      LOCK();
      iVar1 = *local_res8;
      *local_res8 = *local_res8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)(local_res8 + 2) != (void *)0x0) {
          FMemory::Free(*(void **)(local_res8 + 2));
        }
        ::operator_delete(local_res8,0x18);
        return;
      }
    }
  }
  else {
    if (param_3 == FindOrFullyLoad) {
      bVar3 = FInternationalization::IsAvailable();
      if ((bVar3) && ((char)IStringTableEngineBridge::DeferFindOrLoad < '\x01')) {
        if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
          cVar4 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 8))();
          if (cVar4 == '\0') goto LAB_1417662db;
        }
        this->LoadingPhase = Loaded;
        bVar3 = FInternationalization::IsAvailable();
        if ((bVar3) && ((char)IStringTableEngineBridge::DeferFindOrLoad < '\x01')) {
          if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
            cVar4 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 8))();
            if (cVar4 == '\0') goto LAB_14176624d;
            goto LAB_141766273;
          }
        }
        else {
LAB_14176624d:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CanFindOrLoadStringTableAsset()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\StringTableCore.h"
                             ,0x108,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
LAB_141766273:
          if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
            (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x18))
                      (IStringTableEngineBridge::InstancePtr,&this->TableId);
          }
        }
        ResolveDisplayString(this,true);
        local_res8 = local_res10;
        goto LAB_14176629e;
      }
    }
LAB_1417662db:
    this->LoadingPhase = PendingLoad;
    ConditionalBeginAssetLoad(this);
  }
  return;
}

// IsIdentical @ 141766de0

bool __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::IsIdentical
          (FStringTableReferenceData *this,FStringTableReferenceData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->DataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lpCriticalSection_00 = &param_1->DataCS;
  if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  if ((this->TableId == param_1->TableId) && ((this->Key).Index == (param_1->Key).Index)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// ResolveDisplayString @ 141777760

TDisplayStringPtr<FString_const_> __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::ResolveDisplayString
          (FStringTableReferenceData *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  TDisplayStringPtr<FString_const_> TVar2;
  code *pcVar3;
  longlong lVar4;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> TVar5;
  bool bVar6;
  TDisplayStringPtr<FString_const_> TVar7;
  FTextLocalizationManager *this_00;
  undefined7 in_register_00000011;
  char in_R8B;
  FString local_res8;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> local_res20;
  TSharedPtr<FStringTableEntry_const_,1> local_38;
  
  TVar7._1_7_ = in_register_00000011;
  TVar7._0_1_ = param_1;
  ResolveStringTableEntry(this,&local_38);
  if ((local_38.Object == (FStringTableEntry *)0x0) ||
     ((this->DisplayString != (TDisplayStringPtr<FString_const_>)0x0 && (in_R8B == '\0'))))
  goto LAB_1417778a1;
  if ((local_38.Object == (FStringTableEntry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar7 = (TDisplayStringPtr<FString_const_>)(*pcVar3)();
    return TVar7;
  }
  if ((TextLocalizationManager::DisplayStringSupport == 0) ||
     (TextLocalizationManager::DisplayStringSupport == 1)) {
LAB_14177781f:
    this_00 = FTextLocalizationManager::Get();
    local_res8.Data.AllocatorInstance.Data._0_4_ = ((local_38.Object)->DisplayStringId).Key.Index;
    local_res8.Data.ArrayNum = ((local_38.Object)->DisplayStringId).Namespace.Index;
    FTextLocalizationManager::GetDisplayString
              (this_00,(FTextKey *)&local_res20,(FTextKey *)&local_res8.Data.ArrayNum,&local_res8);
  }
  else {
    if (TextLocalizationManager::DisplayStringSupport != 2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                         ,0x2b7,L"Unknown EDisplayStringSupport!");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar7 = (TDisplayStringPtr<FString_const_>)(*pcVar3)();
        return TVar7;
      }
      goto LAB_14177781f;
    }
    local_res20.Reference = (FRefCountedDisplayString *)0x0;
  }
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
            ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)&this->DisplayString,
             &local_res20);
  TVar5.Reference = local_res20.Reference;
  if (local_res20.Reference != (FRefCountedDisplayString *)0x0) {
    LOCK();
    lVar4 = (local_res20.Reference)->_padding_;
    *(int *)&(local_res20.Reference)->_padding_ = (int)(local_res20.Reference)->_padding_ + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      pFVar1 = ((local_res20.Reference)->DisplayString).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(TVar5.Reference,0x18);
    }
  }
LAB_1417778a1:
  *(undefined8 *)TVar7 = 0;
  TVar2 = this->DisplayString;
  *(TDisplayStringPtr<FString_const_> *)TVar7 = TVar2;
  if (TVar2 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    *(int *)TVar2 = *(int *)TVar2 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return TVar7;
}

// ResolveStringTableEntry @ 141777970

TSharedPtr<FStringTableEntry_const_,1> * __thiscall
FTextHistory_StringTableEntry::FStringTableReferenceData::ResolveStringTableEntry
          (FStringTableReferenceData *this,
          TSharedPtr<FStringTableEntry_const_,1> *__return_storage_ptr__)

{
  TWeakPtr<FStringTableEntry_const_,1> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar2;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> TVar8;
  atomic<int> aVar9;
  TSharedPtr<FStringTableEntry_const_,1> *pTVar10;
  FStringTableRegistry *pFVar11;
  TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *pTVar12;
  FSharedReferencer<1> FVar13;
  FStringTableEntry *pFVar14;
  FSharedReferencer<1> FVar15;
  FName *pFVar16;
  FStringTableEntry *pFVar17;
  bool bVar18;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> local_res18;
  FName *local_res20;
  FSharedReferencer<1> local_70;
  TSharedPtr<FStringTable_const_,1> local_68;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  undefined8 local_48 [2];
  
  local_70.ReferenceController = (this->StringTableEntry).WeakReferenceCount.ReferenceController;
  pTVar1 = &this->StringTableEntry;
  pFVar14 = (FStringTableEntry *)0x0;
  pFVar17 = pFVar14;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = (local_70.ReferenceController)->SharedReferenceCount;
    do {
      pFVar17 = (FStringTableEntry *)0x0;
      if (aVar3 == (atomic<int>)0x0) {
        local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1417779d4;
      }
      LOCK();
      aVar9 = (local_70.ReferenceController)->SharedReferenceCount;
      bVar18 = aVar3 == aVar9;
      if (bVar18) {
        (local_70.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar18);
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      pFVar17 = pTVar1->Object;
    }
  }
LAB_1417779d4:
  FVar15.ReferenceController = local_70.ReferenceController;
  if (pFVar17 == (FStringTableEntry *)0x0) {
    ConditionalBeginAssetLoad(this);
LAB_1417779ed:
    lpCriticalSection = &this->DataCS;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FStringTableEntry_const_,1> *)(*pcVar6)();
      return pTVar10;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pTVar1 != (TWeakPtr<FStringTableEntry_const_,1> *)local_48) {
      pTVar4 = (this->StringTableEntry).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FStringTableEntry *)0x0;
      (this->StringTableEntry).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    FVar13.ReferenceController = FVar15.ReferenceController;
    if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      LOCK();
      paVar2 = &(FVar15.ReferenceController)->SharedReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(FVar15.ReferenceController)->_padding_)();
        LOCK();
        paVar2 = &(FVar15.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((FVar15.ReferenceController)->_padding_ + 8))(FVar15.ReferenceController,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_res18.Reference = (FRefCountedDisplayString *)0x0;
    TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
              ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)&this->DisplayString,
               &local_res18);
    TVar8.Reference = local_res18.Reference;
    if (local_res18.Reference != (FRefCountedDisplayString *)0x0) {
      LOCK();
      lVar7 = (local_res18.Reference)->_padding_;
      *(int *)&(local_res18.Reference)->_padding_ = (int)(local_res18.Reference)->_padding_ + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        pFVar5 = ((local_res18.Reference)->DisplayString).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        ::operator_delete(TVar8.Reference,0x18);
      }
    }
    if (this->LoadingPhase != Loaded) {
      __return_storage_ptr__->Object = (FStringTableEntry *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_141777b02:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      goto LAB_141777cea;
    }
    pFVar11 = FStringTableRegistry::Get();
    local_res20 = &this->TableId;
    FStringTableRegistry::FindStringTable(pFVar11,&local_68,this->TableId);
    FVar15.ReferenceController = FVar13.ReferenceController;
    pFVar16 = &this->TableId;
    if (local_68.Object != (FStringTable *)0x0) {
      if ((local_68.Object == (FStringTable *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FStringTableEntry_const_,1> *)(*pcVar6)();
        return pTVar10;
      }
      if ((local_68.Object)->bIsLoaded == false) {
        __return_storage_ptr__->Object = (FStringTableEntry *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        goto LAB_141777b02;
      }
      lpCriticalSection_00 = &(local_68.Object)->KeyMappingCS;
      if ((lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FStringTableEntry_const_,1> *)(*pcVar6)();
        return pTVar10;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pTVar12 = TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                        *)&(local_68.Object)->KeysToEntries,&this->Key);
      if (pTVar12 == (TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *)0x0) {
        local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar14 = (FStringTableEntry *)0x0;
      }
      else {
        local_50.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar12->field_0x10;
        pFVar14 = *(FStringTableEntry **)&pTVar12->field_0x8;
        if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_50.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.ReferenceController);
      if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_70,&local_50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.ReferenceController);
      FVar15.ReferenceController = local_70.ReferenceController;
      pFVar16 = local_res20;
    }
    pTVar1->Object = pFVar14;
    if (FVar15.ReferenceController !=
        (this->StringTableEntry).WeakReferenceCount.ReferenceController) {
      if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar15.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar15.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->StringTableEntry).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->StringTableEntry).WeakReferenceCount.ReferenceController = FVar15.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    if ((((pFVar17->OwnerTable).Object == (FStringTable *)0x0) ||
        (pTVar4 = (pFVar17->OwnerTable).WeakReferenceCount.ReferenceController,
        pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1))
    goto LAB_1417779ed;
    pFVar16 = &this->TableId;
    pFVar14 = pFVar17;
  }
  if (pFVar14 == (FStringTableEntry *)0x0) {
    pFVar11 = FStringTableRegistry::Get();
    FStringTableRegistry::LogMissingStringTableEntry(pFVar11,*pFVar16,&this->Key);
  }
  __return_storage_ptr__->Object = pFVar14;
  FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar15.ReferenceController;
LAB_141777cea:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  return __return_storage_ptr__;
}

