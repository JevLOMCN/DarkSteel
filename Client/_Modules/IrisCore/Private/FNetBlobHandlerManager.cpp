// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// FNetBlobHandlerManager @ 144229370

FNetBlobHandlerManager * __thiscall
UE::Net::Private::FNetBlobHandlerManager::FNetBlobHandlerManager(FNetBlobHandlerManager *this)

{
  this->_padding_ = (longlong)&___7FNetBlobHandlerManager_Private_Net_UE__6B_;
  (this->Handlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Handlers).ArrayNum = 0;
  (this->Handlers).ArrayMax = 0;
  return this;
}

// AddConnection @ 14422db70

void __thiscall
UE::Net::Private::FNetBlobHandlerManager::AddConnection(FNetBlobHandlerManager *this,uint param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  this_00 = (FWeakObjectPtr *)(this->Handlers).AllocatorInstance.Data;
  iVar2 = (this->Handlers).ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->Handlers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UNetBlobHandler,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(this_00);
      (**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,param_1);
    }
    this_00 = this_00 + 1;
  }
  return;
}

// CreateNetBlob @ 1442356e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<UE::Net::FNetBlob> __thiscall
UE::Net::Private::FNetBlobHandlerManager::CreateNetBlob
          (FNetBlobHandlerManager *this,FNetBlobCreationInfo *param_1)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRefCountPtr<UE::Net::FNetBlob> TVar6;
  UObject *pUVar7;
  uint *in_R8;
  undefined1 local_res8 [8];
  FNetBlobCreationInfo local_res18;
  
  if (((uint)(this->Handlers).ArrayNum <= *in_R8) &&
     (bVar4 = `UE::Net::Private::FNetBlobHandlerManager::CreateNetBlob'::__l3::<lambda_1>::
              operator()(local_res8), !bVar4)) {
    param_1->Type = 0;
    param_1->Flags = None;
    return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
  }
  uVar2 = *in_R8;
  uVar5 = 0;
  if ((int)uVar2 < (this->Handlers).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6.Reference = (FNetBlob *)(*pcVar3)();
    return (TRefCountPtr<UE::Net::FNetBlob>)TVar6.Reference;
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                               ((this->Handlers).AllocatorInstance.Data + (longlong)(int)uVar2 * 8))
  ;
  if (pUVar7 == (UObject *)0x0) {
    if (2 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    param_1->Type = 0;
    param_1->Flags = None;
    return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
  }
  (*(code *)**(undefined8 **)(pUVar7 + 1))();
  if (((local_res18 != (FNetBlobCreationInfo)0x0) &&
      (*(uint *)((longlong)local_res18 + 8) != *in_R8)) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4547929797308710981>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobHandlerManager.cpp"
                         ,0x45,
                         "!Blob.IsValid() || (Blob->GetCreationInfo().Type == CreationInfo.Type)"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6.Reference = (FNetBlob *)(*pcVar3)();
    return (TRefCountPtr<UE::Net::FNetBlob>)TVar6.Reference;
  }
  *param_1 = local_res18;
  if ((local_res18 != (FNetBlobCreationInfo)0x0) &&
     (*(int *)((longlong)local_res18 + 0x28) = *(int *)((longlong)local_res18 + 0x28) + 1,
     local_res18 != (FNetBlobCreationInfo)0x0)) {
    plVar1 = (longlong *)((longlong)local_res18 + 0x28);
    *(int *)plVar1 = *(int *)plVar1 + -1;
    if (*(int *)plVar1 == 0) {
      (**(code **)(*(longlong *)local_res18 + 0x20))(local_res18,1);
    }
  }
  return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
}

// Init @ 144240160

void __thiscall UE::Net::Private::FNetBlobHandlerManager::Init(FNetBlobHandlerManager *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *this_00;
  uint uVar8;
  
  this_00 = UNetBlobHandlerDefinitions::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((0x7f < *(int *)&pUVar3[1].field_0x8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlobHandlerDefinitions->NetBlobHandlerDefinitions.Num() < 128",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobHandlerManager.cpp"
                         ,0x14,
                         L"Excessive amount of NetBlobHandlers: %d. This breaks net serialization.")
     , bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Handlers).ArrayNum;
  piVar1 = &(this->Handlers).ArrayNum;
  uVar2 = *(uint *)&pUVar3[1].field_0x8;
  if (iVar7 < (int)uVar2) {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar2 - iVar7,&(this->Handlers).AllocatorInstance,piVar1,
                       &(this->Handlers).ArrayMax);
    memset((this->Handlers).AllocatorInstance.Data + (longlong)iVar6 * 8,0,
           (longlong)(int)(uVar2 - iVar7) << 3);
    return;
  }
  if (-1 < (int)uVar2) {
    if ((int)uVar2 < iVar7) {
      uVar8 = iVar7 - uVar2;
      if (((int)(uVar8 | uVar2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (this->Handlers).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
        iVar7 = (*piVar1 - uVar2) - uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
        }
        *piVar1 = *piVar1 - uVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&(this->Handlers).AllocatorInstance,*piVar1,&(this->Handlers).ArrayMax);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// OnNetBlobReceived @ 144246ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetBlobHandlerManager::OnNetBlobReceived
          (FNetBlobHandlerManager *this,FNetSerializationContext *param_1,
          TRefCountPtr<UE::Net::FNetBlob> *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  
  if (param_2->Reference != (FNetBlob *)0x0) {
    uVar1 = (this->Handlers).ArrayNum;
    uVar2 = (param_2->Reference->CreationInfo).Type;
    if (uVar2 < uVar1) {
      uVar6 = 0;
      if ((int)uVar2 < (int)uVar1) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this->Handlers).AllocatorInstance.Data +
                                   (longlong)(int)uVar2 * 8));
      if (pUVar7 == (UObject *)0x0) {
        if (2 < (byte)LogIris._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
      }
      else {
        (**(code **)(*(longlong *)(pUVar7 + 1) + 8))(pUVar7 + 1,param_1,param_2);
      }
    }
    else {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4547929797308710995>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobHandlerManager.cpp"
                         ,0x53,"CreationInfo.Type < uint32(Handlers.Num())");
      FVar4 = GNetError_UnsupportedNetBlob;
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
    }
  }
  return;
}

// RegisterHandler @ 14424bec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetBlobHandlerManager::RegisterHandler
          (FNetBlobHandlerManager *this,UNetBlobHandler *param_1)

{
  FName *pFVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UNetBlobHandler *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  UClass *this_00;
  FString *pFVar10;
  uint uVar11;
  FName *this_01;
  UNetBlobHandler *local_res10;
  UNetBlobHandler **local_res18;
  FName local_res20;
  UNetBlobHandler *local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 == (UNetBlobHandler *)0x0) {
    return false;
  }
  local_res10 = param_1;
  if (param_1->NetBlobType != 0xffffffff) {
    local_res18 = &local_res10;
    bVar6 = `UE::Net::Private::FNetBlobHandlerManager::RegisterHandler'::__l6::<lambda_1>::
            operator()(&local_res18);
    if (!bVar6) {
      return false;
    }
  }
  local_res20 = *(FName *)(local_res10->_padding_ + 0x18);
  ::FName::ToString(&local_res20,&local_58);
  this_00 = UNetBlobHandlerDefinitions::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar8 = *(int *)&pUVar2[1].field_0x8;
  this_01 = *(FName **)(pUVar2 + 1);
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar1 = this_01 + iVar8;
  do {
    if (this_01 == pFVar1) {
      if (2 < (byte)LogIris._0_1_) {
        local_70 = *(FName *)(local_res10->_padding_ + 0x18);
        ::FName::ToString(&local_70,&local_68);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = false;
LAB_14424c054:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return bVar6;
    }
    pFVar10 = ::FName::ToString(this_01,&local_48);
    iVar8 = (pFVar10->Data).ArrayNum;
    if (iVar8 == local_58.Data.ArrayNum) {
      if (iVar8 < 2) {
        bVar6 = true;
      }
      else {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                           (wchar_t *)local_58.Data.AllocatorInstance.Data);
        bVar6 = iVar8 == 0;
      }
    }
    else {
      bVar6 = local_58.Data.ArrayNum + iVar8 == 1;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pUVar5 = local_res10;
    if (bVar6) {
      uVar11 = (uint)((longlong)this_01 - *(longlong *)(pUVar2 + 1) >> 3);
      local_res10->NetBlobType = uVar11;
      uVar9 = 0;
      if ((int)uVar11 < (this->Handlers).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar3 = (this->Handlers).AllocatorInstance.Data;
      local_78 = pUVar5;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UNetBlobHandler *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)(pFVar3 + (longlong)(int)uVar11 * 8),(FObjectPtr)&local_78);
      bVar6 = true;
      goto LAB_14424c054;
    }
    this_01 = this_01 + 1;
  } while( true );
}

// RemoveConnection @ 14424dab0

void __thiscall
UE::Net::Private::FNetBlobHandlerManager::RemoveConnection
          (FNetBlobHandlerManager *this,uint param_1)

{
  return;
}

// operator() @ 1504b3730

bool __thiscall
`UE::Net::Private::FNetBlobHandlerManager::CreateNetBlob'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4547929797308710967>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4547929797308710967>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b38e0

bool __thiscall
`UE::Net::Private::FNetBlobHandlerManager::RegisterHandler'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4547929797308710943>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4547929797308710943>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b395c;
    }
  }
  bVar2 = false;
LAB_1504b395c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

