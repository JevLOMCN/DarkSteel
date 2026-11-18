// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 14

// FOnDemandHostGroup @ 1445874c0

FOnDemandHostGroup * __thiscall
UE::IoStore::FOnDemandHostGroup::FOnDemandHostGroup
          (FOnDemandHostGroup *this,TSharedPtr<UE::IoStore::FOnDemandHostGroup::FImpl,1> *param_1)

{
  (this->Impl).Object = param_1->Object;
  (this->Impl).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FImpl *)0x0;
  return this;
}

// FOnDemandHostGroup @ 1445874f0

FOnDemandHostGroup * __thiscall
UE::IoStore::FOnDemandHostGroup::FOnDemandHostGroup(FOnDemandHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FOnDemandHostGroup *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = ::operator_new(0x28);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->Impl).Object = (FImpl *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImpl_FOnDemandHostGroup_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar3[2]._padding_ + 4) = 0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[2]._padding_ = 0xffffffff;
    if ((FImpl *)(pTVar3 + 1) == (FImpl *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FOnDemandHostGroup *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->Impl).Object = (FImpl *)(pTVar3 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return this;
}

// ~FOnDemandHostGroup @ 144587960

void __thiscall UE::IoStore::FOnDemandHostGroup::~FOnDemandHostGroup(FOnDemandHostGroup *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Impl).SharedReferenceCount.ReferenceController);
  return;
}

// Create @ 14458aa80

/* WARNING: Enum "Type": Some values do not have unique names */

TIoStatusOr<UE::IoStore::FOnDemandHostGroup> * __cdecl
UE::IoStore::FOnDemandHostGroup::Create
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *__return_storage_ptr__,
          TArrayView<FAnsiString_const_,int> *param_1)

{
  FImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FIoStatus *pFVar9;
  TSharedRef<UE::IoStore::FOnDemandHostGroup::FImpl,1> *pTVar10;
  FString *pFVar11;
  TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FAnsiString *pFVar14;
  FAnsiString *pFVar15;
  FString local_b8;
  TStringView<char> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TSharedRef<UE::IoStore::FOnDemandHostGroup::FImpl,1> local_78;
  FString local_68;
  FIoStatus local_58;
  FIoStatus local_48 [2];
  
  iVar8 = param_1->ArrayNum;
  if (iVar8 == 0) {
    local_98.Size = 0x11;
    local_98.DataPtr = L"No URLs specified";
    pFVar9 = FIoStatus::FIoStatus(&local_58,InvalidParameter,&local_98);
    TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::TIoStatusOr<UE::IoStore::FOnDemandHostGroup>
              (__return_storage_ptr__,pFVar9);
    return __return_storage_ptr__;
  }
  pTVar10 = MakeShared<UE::IoStore::FOnDemandHostGroup::FImpl,1>(&local_78);
  pTVar13 = (pTVar10->SharedReferenceCount).ReferenceController;
  pFVar1 = pTVar10->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pFVar15 = param_1->DataPtr;
  pFVar14 = pFVar15 + iVar8;
LAB_14458ab38:
  do {
    if (pFVar15 == pFVar14) {
      if (pFVar1 == (FImpl *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar3)();
          return pTVar12;
        }
      }
      pFVar1->PrimaryIndex = 0;
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(FImpl **)(__return_storage_ptr__->Value).Pad = pFVar1;
      *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Value).Pad + 8) = pTVar13;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
LAB_14458adb2:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      return __return_storage_ptr__;
    }
    iVar8 = (pFVar15->Data).ArrayNum;
    pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
    local_a8.Size = iVar8 + -1;
    if (iVar8 == 0) {
      local_a8.Size = 0;
    }
    if ((0 < local_a8.Size) &&
       (pFVar2[(longlong)local_a8.Size + -1] == (FScriptContainerElement)0x2f)) {
      local_a8.Size = local_a8.Size + -1;
    }
    iVar8 = local_a8.Size;
    iVar7 = local_a8.Size;
    if (4 < local_a8.Size) {
      iVar7 = 4;
    }
    iVar6 = 0;
    if (0 < iVar7) {
      iVar6 = iVar7;
    }
    local_a8.DataPtr = (char *)pFVar2;
    if (iVar6 != 4) {
LAB_14458ab9f:
      if (5 < iVar8) {
        iVar8 = 5;
      }
      iVar7 = 0;
      if (0 < iVar8) {
        iVar7 = iVar8;
      }
      if (iVar7 == 5) {
        iVar8 = FGenericPlatformStricmp::Strnicmp("https",(char *)pFVar2,5);
        if (iVar8 == 0) goto LAB_14458abdf;
      }
      local_88.DataPtr = (wchar_t *)0x0;
      local_88.Size = 0;
      pFVar9 = FIoStatus::FIoStatus(local_48,InvalidParameter,&local_88);
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      if (pFVar9->ErrorCode == Ok) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InStatus.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                           ,0x102,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar3)();
          return pTVar12;
        }
      }
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,pFVar9);
      FIoStatus::~FIoStatus(pFVar9);
      goto LAB_14458adb2;
    }
    iVar7 = FGenericPlatformStricmp::Strnicmp("http",(char *)pFVar2,4);
    if (iVar7 != 0) goto LAB_14458ab9f;
LAB_14458abdf:
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    pFVar11 = ::FString::ConstructFromPtrSize(&local_68,local_a8.DataPtr,local_a8.Size);
    if (&local_b8 != pFVar11) {
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      local_b8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_b8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar5 = IoStore::Private::ShouldSkipUrl(&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      if (4 < (byte)LogIas._0_1_) {
        Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&>
                  ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_a8);
        pFVar15 = pFVar15 + 1;
        goto LAB_14458ab38;
      }
    }
    else {
      if (pFVar1 == (FImpl *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar3)();
          return pTVar12;
        }
      }
      iVar8 = (pFVar1->HostUrls).ArrayNum;
      piVar4 = &(pFVar1->HostUrls).ArrayMax;
      if (iVar8 == *piVar4) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)pFVar1,piVar4);
      }
      (pFVar1->HostUrls).ArrayNum = iVar8 + 1;
      FAnsiString::FAnsiString
                ((FAnsiString *)((pFVar1->HostUrls).AllocatorInstance.Data + (longlong)iVar8 * 0x10)
                 ,pFVar15);
    }
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// Create @ 14458ae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TIoStatusOr<UE::IoStore::FOnDemandHostGroup> * __cdecl
UE::IoStore::FOnDemandHostGroup::Create
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *__return_storage_ptr__,
          TArrayView<FString_const_,int> *param_1)

{
  ushort uVar1;
  FImpl *pFVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FIoStatus *pFVar8;
  TSharedRef<UE::IoStore::FOnDemandHostGroup::FImpl,1> *pTVar9;
  TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *pTVar10;
  FAnsiString *pFVar11;
  FString *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  FString *pFVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStack_1a8 [32];
  FString local_188;
  TReferenceControllerBase<1> *local_178;
  TStringView<wchar_t> local_170;
  FString *local_160;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TSharedRef<UE::IoStore::FOnDemandHostGroup::FImpl,1> local_138;
  FAnsiString local_128;
  FString local_118;
  FIoStatus local_108;
  FAnsiString local_f8;
  FIoStatus local_e8;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  iVar16 = param_1->ArrayNum;
  if (iVar16 == 0) {
    local_158.Size = 0x11;
    local_158.DataPtr = L"No URLs specified";
    pFVar8 = FIoStatus::FIoStatus(&local_108,InvalidParameter,&local_158);
    TIoStatusOr<UE::IoStore::FOnDemandHostGroup>::TIoStatusOr<UE::IoStore::FOnDemandHostGroup>
              (__return_storage_ptr__,pFVar8);
  }
  else {
    pTVar9 = MakeShared<UE::IoStore::FOnDemandHostGroup::FImpl,1>(&local_138);
    pTVar13 = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar9->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_178 = pTVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    pFVar20 = param_1->DataPtr;
    local_160 = pFVar20 + iVar16;
    if (pFVar20 != local_160) {
      do {
        pFVar17 = (FScriptContainerElement *)0x0;
        iVar16 = (pFVar20->Data).ArrayNum;
        pFVar22 = (pFVar20->Data).AllocatorInstance.Data;
        iVar21 = 0;
        pFVar14 = (FScriptContainerElement *)(ulonglong)(iVar16 - 1);
        if (iVar16 == 0) {
          pFVar14 = pFVar17;
        }
        local_170.Size = (int)pFVar14;
        if ((0 < local_170.Size) &&
           (*(short *)(pFVar22 + ((longlong)local_170.Size + -1) * 2) == 0x2f)) {
          local_170.Size = local_170.Size + -1;
        }
        local_58.Data = (FScriptContainerElement *)0x0;
        local_170.DataPtr = (wchar_t *)pFVar22;
        if (pFVar22 == (FScriptContainerElement *)0x0) {
          local_50 = (FScriptContainerElement *)0x0;
          local_48 = 0;
        }
        else {
          pFVar14 = pFVar17;
          local_48 = local_170.Size;
          if ((0 < local_170.Size) &&
             (*(short *)(pFVar22 + ((longlong)local_170.Size + -1) * 2) == 0)) {
            pFVar14 = (FScriptContainerElement *)&DAT_00000001;
            local_48 = local_170.Size + -1;
          }
          uVar15 = (int)pFVar14 + local_48;
          if (0x80 < uVar15) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar15,1);
          }
          FVar18.Data = local_d8;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar18.Data = local_58.Data;
          }
          bVar5 = false;
          lVar19 = (longlong)(int)uVar15;
          pFVar14 = pFVar17;
          local_50 = FVar18.Data;
          if (0 < (int)uVar15) {
            do {
              uVar1 = *(ushort *)(pFVar22 + (longlong)pFVar14 * 2);
              pFVar14[FVar18.Data] = SUB21(uVar1,0);
              pFVar14 = pFVar14 + 1;
              bVar5 = (bool)(bVar5 | 0x7f < uVar1);
            } while ((longlong)pFVar14 < lVar19);
            pFVar14 = pFVar17;
            if (bVar5) {
              do {
                if (0x7f < *(ushort *)(pFVar22 + (longlong)pFVar14 * 2)) {
                  FVar18.Data[(longlong)pFVar14] = (FScriptContainerElement)0x3f;
                }
                pFVar14 = pFVar14 + 1;
              } while ((longlong)pFVar14 < lVar19);
            }
          }
          if ((FVar18.Data + lVar19 == (FScriptContainerElement *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar3)();
            return pTVar10;
          }
        }
        pFVar11 = FAnsiString::ConstructFromPtrSize(&local_128,(char *)local_50,local_48);
        pFVar22 = pFVar17;
        if (&local_f8 != pFVar11) {
          pFVar17 = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar21 = (pFVar11->Data).ArrayNum;
          pFVar22 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
        if (iVar21 == 0) {
LAB_14458b26f:
          local_148.DataPtr = (wchar_t *)0x0;
          local_148.Size = 0;
          pFVar8 = FIoStatus::FIoStatus(&local_e8,InvalidParameter,&local_148);
          FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
          if ((pFVar8->ErrorCode == Ok) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!InStatus.IsOk()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                                 ,0x102,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar3)();
            return pTVar10;
          }
          FIoStatus::operator=(&__return_storage_ptr__->StatusValue,pFVar8);
          FIoStatus::~FIoStatus(pFVar8);
          pTVar13 = local_178;
          if (pFVar17 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar17);
            pTVar13 = local_178;
          }
          goto LAB_14458b22e;
        }
        iVar16 = iVar21 + -1;
        iVar7 = iVar16;
        if (4 < iVar16) {
          iVar7 = 4;
        }
        iVar6 = 0;
        if (0 < iVar7) {
          iVar6 = iVar7;
        }
        if ((iVar6 != 4) ||
           (iVar7 = FGenericPlatformStricmp::Strnicmp("http",(char *)pFVar17,4), iVar7 != 0)) {
          if (5 < iVar16) {
            iVar16 = 5;
          }
          iVar7 = 0;
          if (0 < iVar16) {
            iVar7 = iVar16;
          }
          if ((iVar7 != 5) ||
             (iVar16 = FGenericPlatformStricmp::Strnicmp("https",(char *)pFVar17,5), iVar16 != 0))
          goto LAB_14458b26f;
        }
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        pFVar12 = ::FString::ConstructFromPtrSize(&local_118,local_170.DataPtr,local_170.Size);
        if (&local_188 != pFVar12) {
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          local_188.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_188.Data.ArrayNum = (pFVar12->Data).ArrayNum;
          local_188.Data.ArrayMax = (pFVar12->Data).ArrayMax;
          (pFVar12->Data).ArrayNum = 0;
          (pFVar12->Data).ArrayMax = 0;
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        bVar5 = IoStore::Private::ShouldSkipUrl(&local_188);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          if (4 < (byte)LogIas._0_1_) {
            Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<wchar_t>_&>
                      ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_170);
          }
          if (pFVar17 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar17);
          }
        }
        else {
          if ((pFVar2 == (FImpl *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar3)();
            return pTVar10;
          }
          iVar16 = (pFVar2->HostUrls).ArrayNum;
          piVar4 = &(pFVar2->HostUrls).ArrayMax;
          if (iVar16 == *piVar4) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)pFVar2,piVar4);
          }
          (pFVar2->HostUrls).ArrayNum = iVar16 + 1;
          lVar19 = (longlong)iVar16;
          pFVar14 = (pFVar2->HostUrls).AllocatorInstance.Data;
          *(FScriptContainerElement **)(pFVar14 + lVar19 * 0x10) = pFVar17;
          *(int *)(pFVar14 + lVar19 * 0x10 + 8) = iVar21;
          *(int *)(pFVar14 + lVar19 * 0x10 + 0xc) = (int)pFVar22;
        }
        pFVar20 = pFVar20 + 1;
        pTVar13 = local_178;
      } while (pFVar20 != local_160);
    }
    if ((pFVar2 == (FImpl *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar3)();
      return pTVar10;
    }
    pFVar2->PrimaryIndex = 0;
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(FImpl **)(__return_storage_ptr__->Value).Pad = pFVar2;
    *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Value).Pad + 8) = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
LAB_14458b22e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  return __return_storage_ptr__;
}

// Create @ 14458b300

TIoStatusOr<UE::IoStore::FOnDemandHostGroup> * __cdecl
UE::IoStore::FOnDemandHostGroup::Create
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *__return_storage_ptr__,
          TStringView<char> *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *pTVar10;
  FAnsiString *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  FAnsiString *pFVar14;
  TStringView<wchar_t> local_58;
  FIoStatus local_48;
  FAnsiString local_38;
  
  iVar7 = param_1->Size;
  if ((0 < iVar7) && (param_1->DataPtr[(longlong)iVar7 + -1] == '/')) {
    param_1->Size = iVar7 + -1;
  }
  iVar7 = param_1->Size;
  pcVar1 = param_1->DataPtr;
  iVar6 = iVar7;
  if (4 < iVar7) {
    iVar6 = 4;
  }
  iVar13 = 0;
  if (0 < iVar6) {
    iVar13 = iVar6;
  }
  if ((iVar13 != 4) || (iVar6 = FGenericPlatformStricmp::Strnicmp("http",pcVar1,4), iVar6 != 0)) {
    if (5 < iVar7) {
      iVar7 = 5;
    }
    iVar6 = 0;
    if (0 < iVar7) {
      iVar6 = iVar7;
    }
    if ((iVar6 != 5) || (iVar7 = FGenericPlatformStricmp::Strnicmp("https",pcVar1,5), iVar7 != 0)) {
      local_58.DataPtr = (wchar_t *)0x0;
      local_58.Size = 0;
      FIoStatus::FIoStatus(&local_48,InvalidParameter,&local_58);
      FIoStatus::~FIoStatus(&local_48);
    }
  }
  pTVar9 = ::operator_new(0x28);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12 = pTVar9 + 1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImpl_FOnDemandHostGroup_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar9[2]._padding_ + 4) = 0;
    pTVar9[1]._padding_ = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar9[2]._padding_ = 0xffffffff;
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar4)();
      return pTVar10;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)(*pcVar4)();
      return pTVar10;
    }
  }
  aVar8 = pTVar12->SharedReferenceCount;
  if (aVar8 == pTVar12->WeakReferenceCount) {
    aVar8 = (atomic<int>)
            Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pTVar12,(int *)&pTVar12->WeakReferenceCount);
  }
  uVar2 = *(undefined8 *)&param_1->Size;
  pcVar1 = param_1->DataPtr;
  pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
  pFVar14 = (FAnsiString *)((longlong)(int)aVar8 * 0x10 + pTVar12->_padding_);
  (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->Data).ArrayNum = 0;
  (pFVar14->Data).ArrayMax = 0;
  pFVar11 = FAnsiString::ConstructFromPtrSize(&local_38,pcVar1,(int)uVar2);
  if (pFVar14 != pFVar11) {
    pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar14->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar14->Data).ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar14->Data).ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)&pTVar12[1]._padding_ = 0;
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
  *(TReferenceControllerBase<1> **)(__return_storage_ptr__->Value).Pad = pTVar12;
  *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Value).Pad + 8) = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Create @ 14458b570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<UE::IoStore::FOnDemandHostGroup> * __cdecl
UE::IoStore::FOnDemandHostGroup::Create
          (TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar1;
  FAnsiString *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 auStack_108 [32];
  TStringView<char> local_e8;
  FAnsiString local_d8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar1 = StringCast<char,128,wchar_t>(&local_c8,param_1->DataPtr,param_1->Size);
  pFVar2 = FAnsiString::ConstructFromPtrSize
                     ((FAnsiString *)&local_e8,pTVar1->Ptr,pTVar1->StringLength);
  pFVar3 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  if (&local_d8 != pFVar2) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_e8.DataPtr != (char *)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  local_e8.Size = iVar4 + -1;
  if (iVar4 == 0) {
    local_e8.Size = 0;
  }
  local_e8.DataPtr = (char *)pFVar3;
  Create(__return_storage_ptr__,&local_e8);
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  return __return_storage_ptr__;
}

// CycleHost @ 14458b7f0

TStringView<char> * __thiscall
UE::IoStore::FOnDemandHostGroup::CycleHost
          (FOnDemandHostGroup *this,TStringView<char> *__return_storage_ptr__,int *param_1)

{
  int iVar1;
  FImpl *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TStringView<char> *pTVar7;
  undefined8 *puVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  int local_10;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TStringView<char> *)(*pcVar3)();
      return pTVar7;
    }
  }
  uVar9 = (*param_1 + 1) % (((this->Impl).Object)->HostUrls).ArrayNum;
  *param_1 = uVar9;
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TStringView<char> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pFVar2 = (this->Impl).Object;
  if ((pFVar2->HostUrls).ArrayNum == 0) {
    puVar8 = &local_28;
    uStack_20 = 0;
    local_28 = 0;
  }
  else {
    if (pFVar2 == (FImpl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStringView<char> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar2 = (this->Impl).Object;
    uVar6 = 0;
    if ((int)uVar9 < (pFVar2->HostUrls).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStringView<char> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar10 = (pFVar2->HostUrls).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    local_18 = *(undefined8 *)pFVar10;
    iVar1 = *(int *)(pFVar10 + 8);
    local_10 = iVar1 + -1;
    if (iVar1 == 0) {
      local_10 = 0;
    }
    puVar8 = &local_18;
  }
  uVar4 = puVar8[1];
  __return_storage_ptr__->DataPtr = (char *)*puVar8;
  *(undefined8 *)&__return_storage_ptr__->Size = uVar4;
  return __return_storage_ptr__;
}

// Host @ 14458e9d0

TStringView<char> * __thiscall
UE::IoStore::FOnDemandHostGroup::Host
          (FOnDemandHostGroup *this,TStringView<char> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FImpl *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TStringView<char> *pTVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  int local_10;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TStringView<char> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pFVar2 = (this->Impl).Object;
  if ((pFVar2->HostUrls).ArrayNum == 0) {
    puVar8 = &local_28;
    uStack_20 = 0;
    local_28 = 0;
  }
  else {
    if (pFVar2 == (FImpl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStringView<char> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar2 = (this->Impl).Object;
    uVar6 = 0;
    if (param_1 < (pFVar2->HostUrls).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStringView<char> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar9 = (pFVar2->HostUrls).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    local_18 = *(undefined8 *)pFVar9;
    iVar1 = *(int *)(pFVar9 + 8);
    local_10 = iVar1 + -1;
    if (iVar1 == 0) {
      local_10 = 0;
    }
    puVar8 = &local_18;
  }
  uVar4 = puVar8[1];
  __return_storage_ptr__->DataPtr = (char *)*puVar8;
  *(undefined8 *)&__return_storage_ptr__->Size = uVar4;
  return __return_storage_ptr__;
}

// Hosts @ 14458eb00

TArrayView<FAnsiString_const_,int> * __thiscall
UE::IoStore::FOnDemandHostGroup::Hosts
          (FOnDemandHostGroup *this,TArrayView<FAnsiString_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  FImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FAnsiString_const_,int> *pTVar5;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FAnsiString_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Impl).Object;
  iVar1 = (pFVar2->HostUrls).ArrayNum;
  __return_storage_ptr__->DataPtr = (FAnsiString *)(pFVar2->HostUrls).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FAnsiString_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsEmpty @ 14458f0d0

bool __thiscall UE::IoStore::FOnDemandHostGroup::IsEmpty(FOnDemandHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (((this->Impl).Object)->HostUrls).ArrayNum == 0;
}

// PrimaryHost @ 1445925c0

TStringView<char> * __thiscall
UE::IoStore::FOnDemandHostGroup::PrimaryHost
          (FOnDemandHostGroup *this,TStringView<char> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  FImpl *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TStringView<char> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TStringView<char> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (this->Impl).Object;
  if (pFVar3->PrimaryIndex == -1) {
    *(undefined8 *)&__return_storage_ptr__->Size = 0;
    __return_storage_ptr__->DataPtr = (char *)0x0;
    return __return_storage_ptr__;
  }
  if (pFVar3 == (FImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TStringView<char> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (this->Impl).Object;
  if (-1 < pFVar3->PrimaryIndex) {
    if (pFVar3 == (FImpl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TStringView<char> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar3 = (this->Impl).Object;
    if (pFVar3 == (FImpl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TStringView<char> *)(*pcVar4)();
        return pTVar7;
      }
    }
    if (pFVar3->PrimaryIndex < (((this->Impl).Object)->HostUrls).ArrayNum) goto LAB_1445926d1;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Impl->PrimaryIndex >= 0 && Impl->PrimaryIndex < Impl->HostUrls.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\OnDemandHostGroup.cpp"
                     ,0x83,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TStringView<char> *)(*pcVar4)();
    return pTVar7;
  }
LAB_1445926d1:
  if ((this->Impl).Object == (FImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TStringView<char> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (this->Impl).Object;
  if (pFVar3 == (FImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TStringView<char> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar1 = ((this->Impl).Object)->PrimaryIndex;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar3->HostUrls).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TStringView<char> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar9 = (pFVar3->HostUrls).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
  __return_storage_ptr__->DataPtr = *(char **)pFVar9;
  iVar2 = *(int *)(pFVar9 + 8);
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  __return_storage_ptr__->Size = iVar8;
  return __return_storage_ptr__;
}

// PrimaryHostIndex @ 1445927d0

int __thiscall UE::IoStore::FOnDemandHostGroup::PrimaryHostIndex(FOnDemandHostGroup *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->Impl).Object != (FImpl *)0x0) {
    return ((this->Impl).Object)->PrimaryIndex;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return ((this->Impl).Object)->PrimaryIndex;
}

// SetPrimaryHost @ 1445933c0

void __thiscall
UE::IoStore::FOnDemandHostGroup::SetPrimaryHost(FOnDemandHostGroup *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < 0) {
    if (param_1 == -1) goto LAB_144593434;
  }
  else {
    if (((this->Impl).Object == (FImpl *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 < (((this->Impl).Object)->HostUrls).ArrayNum) goto LAB_144593434;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index >= 0 && Index < Impl->HostUrls.Num() || Index == INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\OnDemandHostGroup.cpp"
                     ,0x7b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_144593434:
  if (((this->Impl).Object == (FImpl *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ((this->Impl).Object)->PrimaryIndex = param_1;
  return;
}

