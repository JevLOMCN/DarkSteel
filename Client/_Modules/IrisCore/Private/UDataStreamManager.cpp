// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 25

// StaticClass @ 1441f2690

UClass * __cdecl UDataStreamManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStreamManager",
               &Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton,
               StaticRegisterNativesUDataStreamManager,0x58,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataStreamManager>,
               InternalVTableHelperCtorCaller<UDataStreamManager>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton;
}

// UDataStreamManager @ 1441f9140

UDataStreamManager * __thiscall UDataStreamManager::UDataStreamManager(UDataStreamManager *this)

{
  TPimplPtr<UDataStreamManager::FImpl,0> *pTVar1;
  FImpl *pFVar2;
  FObjectInitializer *pFVar3;
  UDataStreamManager **ppUVar4;
  UDataStreamManager **ppUVar5;
  longlong local_18 [2];
  
  pFVar3 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar3);
  ppUVar5 = (UDataStreamManager **)0x0;
  pTVar1 = &this->Impl;
  this->_padding_ = (longlong)&___7UDataStreamManager__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  pTVar1->Ptr = (FImpl *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    ppUVar4 = ::operator_new(0x1b0);
    if (ppUVar4 != (UDataStreamManager **)0x0) {
      ppUVar4[1] = (UDataStreamManager *)0x0;
      *ppUVar4 = (UDataStreamManager *)
                 UE::Core::Private::PimplPtr::DeleterFunc<UDataStreamManager::FImpl>;
      ppUVar4[2] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 3) = 0;
      ppUVar4[4] = (UDataStreamManager *)0x0;
      ppUVar4[5] = (UDataStreamManager *)0x0;
      ppUVar4[6] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 7) = 0;
      ppUVar4[8] = (UDataStreamManager *)0x0;
      ppUVar4[9] = (UDataStreamManager *)0x0;
      ppUVar4[10] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 0xb) = 0;
      ppUVar4[0xc] = (UDataStreamManager *)0x0;
      ppUVar4[0xd] = (UDataStreamManager *)0x0;
      ppUVar4[0xf] = (UDataStreamManager *)0x0;
      ppUVar4[0x10] = (UDataStreamManager *)0x0;
      ppUVar4[0x13] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 0x14) = 0;
      *(undefined4 *)((longlong)ppUVar4 + 0xa4) = 0x80;
      *(undefined4 *)(ppUVar4 + 0x15) = 0xffffffff;
      *(undefined4 *)((longlong)ppUVar4 + 0xac) = 0;
      ppUVar4[0x17] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 0x18) = 0;
      ppUVar4[0x19] = (UDataStreamManager *)0x0;
      ppUVar4[0x1a] = (UDataStreamManager *)0x0;
      ppUVar4[0x1d] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 0x1e) = 0;
      *(undefined4 *)((longlong)ppUVar4 + 0xf4) = 0x80;
      *(undefined4 *)(ppUVar4 + 0x1f) = 0xffffffff;
      *(undefined4 *)((longlong)ppUVar4 + 0xfc) = 0;
      ppUVar4[0x21] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 0x22) = 0;
      ppUVar4[0x23] = (UDataStreamManager *)0x0;
      ppUVar4[0x24] = (UDataStreamManager *)0x0;
      ppUVar4[0x25] = (UDataStreamManager *)0x0;
      ppUVar4[0x26] = (UDataStreamManager *)0x0;
      ppUVar4[0x27] = (UDataStreamManager *)0x0;
      ppUVar4[0x28] = (UDataStreamManager *)0x0;
      ppUVar4[0x29] = (UDataStreamManager *)0x0;
      ppUVar4[0x2a] = (UDataStreamManager *)0x0;
      ppUVar4[0x2b] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 0x2c) = 0;
      ppUVar4[0x2d] = (UDataStreamManager *)0x0;
      ppUVar4[0x2e] = (UDataStreamManager *)0x0;
      ppUVar4[0x2f] = (UDataStreamManager *)0x0;
      ppUVar4[0x30] = (UDataStreamManager *)0x0;
      ppUVar4[0x31] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 0x32) = 0;
      ppUVar4[0x33] = (UDataStreamManager *)0x0;
      *(undefined4 *)(ppUVar4 + 0x34) = 0;
      ppUVar5 = ppUVar4;
    }
    if ((TPimplPtr<UDataStreamManager::FImpl,0> *)local_18 == pTVar1) {
      if ((FImpl *)(ppUVar5 + 2) == (FImpl *)0x0) {
        return this;
      }
    }
    else {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (FImpl *)(ppUVar5 + 2);
      if (pFVar2 == (FImpl *)0x0) {
        return this;
      }
      ppUVar5 = &pFVar2[-1].InitParameters.DataStreamManager;
    }
    (*(code *)*ppUVar5)();
  }
  return this;
}

// UDataStreamManager @ 1441f9330

UDataStreamManager * __thiscall
UDataStreamManager::UDataStreamManager(UDataStreamManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataStreamManager__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Impl).Ptr = (FImpl *)0x0;
  return this;
}

// ~UDataStreamManager @ 1441f9f00

void __thiscall UDataStreamManager::~UDataStreamManager(UDataStreamManager *this)

{
  FImpl *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataStreamManager__6B_;
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FImpl *)0x0) {
    (*(code *)pFVar1[-1].InitParameters.DataStreamManager)
              (&pFVar1[-1].InitParameters.DataStreamManager);
  }
  this->_padding_ = (longlong)&___7UDataStream__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 1441fb540

void __cdecl UDataStreamManager::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UDataStreamManager>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    lVar2 = *(longlong *)(param_1 + 2);
    if (lVar2 != 0) {
      (**(code **)(param_2->_padding_ + 0x90))
                (param_2,*(undefined8 *)(lVar2 + 0x108),*(undefined4 *)(lVar2 + 0x110),0,0);
    }
    return;
  }
  pFVar4 = GetTypeName<UDataStreamManager>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// BeginWrite @ 1441fbfa0

EWriteResult __thiscall
UDataStreamManager::BeginWrite(UDataStreamManager *this,FBeginWriteParameters *param_1)

{
  FImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  EWriteResult EVar5;
  longlong lVar6;
  longlong lVar7;
  EWriteResult EVar8;
  
  pFVar1 = (this->Impl).Ptr;
  lVar7 = (longlong)(pFVar1->Streams).ArrayNum;
  if (lVar7 == 0) {
    return NoData;
  }
  pFVar2 = (pFVar1->StreamSendStatus).AllocatorInstance.Data;
  pFVar3 = (pFVar1->Streams).AllocatorInstance.Data;
  EVar8 = -(uint)(pFVar1->DirtyStreamsMask != 0) & HasMoreData;
  lVar6 = 0;
  do {
    if (pFVar2[lVar6] != (FScriptContainerElement)0x0) {
      plVar4 = *(longlong **)(pFVar3 + lVar6 * 8);
      EVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4,param_1);
      if ((EVar8 == HasMoreData) || (EVar8 = EVar5, EVar5 == HasMoreData)) {
        EVar8 = HasMoreData;
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != lVar7);
  return EVar8;
}

// CloseStream @ 1442015e0

void __thiscall UDataStreamManager::CloseStream(UDataStreamManager *this,FName param_1)

{
  FImpl::CloseStream((this->Impl).Ptr,param_1);
  return;
}

// CreateStream @ 144206260

ECreateDataStreamResult __thiscall
UDataStreamManager::CreateStream(UDataStreamManager *this,FName param_1)

{
  ECreateDataStreamResult EVar1;
  
  EVar1 = FImpl::CreateStream((this->Impl).Ptr,param_1,None);
  return EVar1;
}

// Deinit @ 144206e40

void __thiscall UDataStreamManager::Deinit(UDataStreamManager *this)

{
  FImpl::Deinit((this->Impl).Ptr);
  return;
}

// EndWrite @ 1442084d0

void __thiscall UDataStreamManager::EndWrite(UDataStreamManager *this)

{
  FImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  
  pFVar1 = (this->Impl).Ptr;
  lVar4 = 0;
  lVar5 = (longlong)(pFVar1->Streams).ArrayNum;
  pFVar2 = (pFVar1->Streams).AllocatorInstance.Data;
  pFVar3 = (pFVar1->StreamSendStatus).AllocatorInstance.Data;
  if (lVar5 != 0) {
    do {
      if (pFVar3[lVar4] != (FScriptContainerElement)0x0) {
        (**(code **)(**(longlong **)(pFVar2 + lVar4 * 8) + 0x2d8))();
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar5);
  }
  return;
}

// GetNetExports @ 14420ace0

FNetExports * __thiscall UDataStreamManager::GetNetExports(UDataStreamManager *this)

{
  return &((this->Impl).Ptr)->NetExports;
}

// GetPrivateStaticClass @ 14420bba0

UClass * __cdecl UDataStreamManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStreamManager",
               &Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton,
               StaticRegisterNativesUDataStreamManager,0x58,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataStreamManager>,
               InternalVTableHelperCtorCaller<UDataStreamManager>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamManager.InnerSingleton;
}

// GetSendStatus @ 14420d670

/* WARNING: Enum "Type": Some values do not have unique names */

EDataStreamSendStatus __thiscall
UDataStreamManager::GetSendStatus(UDataStreamManager *this,FName param_1)

{
  FImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EDataStreamSendStatus EVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  FString local_18;
  
  pFVar1 = (this->Impl).Ptr;
  pFVar2 = (pFVar1->Streams).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    local_res8 = param_1;
    if (pFVar8 == pFVar2 + (longlong)(pFVar1->Streams).ArrayNum * 8) {
LAB_14420d6b6:
      if (3 < (byte)LogIris._0_1_) {
        ::FName::GetPlainNameString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return Pause;
    }
    if ((*(longlong *)pFVar8 != 0) &&
       (param_1.ComparisonIndex.Value.Value == *(uint *)(*(longlong *)pFVar8 + 0x18))) {
      uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
      if (uVar7 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar7 < (pFVar1->StreamSendStatus).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        return (EDataStreamSendStatus)(pFVar1->StreamSendStatus).AllocatorInstance.Data[(int)uVar7];
      }
      goto LAB_14420d6b6;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetStream @ 14420da70

UDataStream * __thiscall UDataStreamManager::GetStream(UDataStreamManager *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  FImpl *pFVar2;
  UDataStream *pUVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = (this->Impl).Ptr;
  pFVar4 = (pFVar2->Streams).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(pFVar2->Streams).ArrayNum * 8;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return (UDataStream *)0x0;
    }
    pUVar3 = *(UDataStream **)pFVar4;
    if ((pUVar3 != (UDataStream *)0x0) &&
       (param_1.ComparisonIndex.Value.Value == (uint)pUVar3->_padding_)) break;
    pFVar4 = pFVar4 + 8;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return pUVar3;
}

// GetStream @ 14420dad0

UDataStream * __thiscall UDataStreamManager::GetStream(UDataStreamManager *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  FImpl *pFVar2;
  UDataStream *pUVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = (this->Impl).Ptr;
  pFVar4 = (pFVar2->Streams).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(pFVar2->Streams).ArrayNum * 8;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return (UDataStream *)0x0;
    }
    pUVar3 = *(UDataStream **)pFVar4;
    if ((pUVar3 != (UDataStream *)0x0) &&
       (param_1.ComparisonIndex.Value.Value == (uint)pUVar3->_padding_)) break;
    pFVar4 = pFVar4 + 8;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return pUVar3;
}

// GetStreamState @ 14420dd30

EDataStreamState __thiscall
UDataStreamManager::GetStreamState(UDataStreamManager *this,FName param_1)

{
  FImpl *this_00;
  FScriptContainerElement *pFVar1;
  EDataStreamState EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  
  this_00 = (this->Impl).Ptr;
  pFVar1 = (this_00->Streams).AllocatorInstance.Data;
  pFVar4 = pFVar1;
  while( true ) {
    if (pFVar4 == pFVar1 + (longlong)(this_00->Streams).ArrayNum * 8) {
      return Invalid;
    }
    if ((*(longlong *)pFVar4 != 0) &&
       (param_1.ComparisonIndex.Value.Value == *(uint *)(*(longlong *)pFVar4 + 0x18))) break;
    pFVar4 = pFVar4 + 8;
  }
  uVar3 = (uint)((longlong)pFVar4 - (longlong)pFVar1 >> 3);
  if (uVar3 == 0xffffffff) {
    return Invalid;
  }
  EVar2 = FImpl::GetStreamState(this_00,uVar3);
  return EVar2;
}

// HasAcknowledgedAllReliableData @ 14420f310

bool __thiscall UDataStreamManager::HasAcknowledgedAllReliableData(UDataStreamManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImpl *pFVar3;
  UObject *pUVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Impl).Ptr;
  pFVar6 = (pFVar3->Streams).AllocatorInstance.Data;
  iVar2 = (pFVar3->Streams).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  do {
    if ((pFVar3->Streams).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataStream>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) {
      return true;
    }
    pUVar4 = *(UObject **)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UObject *)0x0) goto LAB_14420f36f;
    }
    else if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
LAB_14420f36f:
      cVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2f0))(pUVar4);
      if (cVar5 == '\0') {
        return false;
      }
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// Init @ 14420f860

void __thiscall UDataStreamManager::Init(UDataStreamManager *this,FInitParameters *param_1)

{
  FImpl *this_00;
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  this_00 = (this->Impl).Ptr;
  FVar1 = param_1->Name;
  uVar2 = param_1->ReplicationSystemId;
  uVar3 = param_1->ConnectionId;
  uVar4 = param_1->PacketWindowSize;
  uVar5 = *(undefined4 *)&param_1->field_0x1c;
  (this_00->InitParameters).NetExports = param_1->NetExports;
  (this_00->InitParameters).Name = FVar1;
  (this_00->InitParameters).ReplicationSystemId = uVar2;
  (this_00->InitParameters).ConnectionId = uVar3;
  (this_00->InitParameters).PacketWindowSize = uVar4;
  *(undefined4 *)&(this_00->InitParameters).field_0x1c = uVar5;
  (this_00->InitParameters).DataStreamManager = this;
  (this_00->InitParameters).NetExports = &this_00->NetExports;
  FImpl::InitRecordStorage(this_00);
  FImpl::InitStreams(this_00);
  return;
}

// IsKnownStreamDefinition @ 144211bc0

bool __cdecl UDataStreamManager::IsKnownStreamDefinition(FName param_1)

{
  UObject *pUVar1;
  UClass *this;
  FName *pFVar2;
  FName *pFVar3;
  
  this = UDataStreamDefinitions::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar2 = *(FName **)(pUVar1 + 1);
  pFVar3 = pFVar2 + (longlong)*(int *)&pUVar1[1].field_0x8 * 4;
  for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 4) {
    if (param_1 == *pFVar2) goto LAB_144211c12;
  }
  pFVar2 = (FName *)0x0;
LAB_144211c12:
  return pFVar2 != (FName *)0x0;
}

// ProcessPacketDeliveryStatus @ 1442149d0

void __thiscall
UDataStreamManager::ProcessPacketDeliveryStatus
          (UDataStreamManager *this,EPacketDeliveryStatus param_1,FDataStreamRecord *param_2)

{
  FImpl::ProcessPacketDeliveryStatus((this->Impl).Ptr,param_1,param_2);
  return;
}

// ReadData @ 144215260

void __thiscall
UDataStreamManager::ReadData(UDataStreamManager *this,FNetSerializationContext *param_1)

{
  FImpl::ReadData((this->Impl).Ptr,param_1);
  return;
}

// SetSendStatus @ 14421b740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDataStreamManager::SetSendStatus
          (UDataStreamManager *this,FName param_1,EDataStreamSendStatus param_2)

{
  FImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FString local_18;
  
  pFVar1 = (this->Impl).Ptr;
  pFVar2 = (pFVar1->Streams).AllocatorInstance.Data;
  pFVar7 = pFVar2;
  do {
    local_res8 = param_1;
    if (pFVar7 == pFVar2 + (longlong)(pFVar1->Streams).ArrayNum * 8) {
LAB_14421b78c:
      if (3 < (byte)LogIris._0_1_) {
        ::FName::GetPlainNameString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    if ((*(longlong *)pFVar7 != 0) &&
       (param_1.ComparisonIndex.Value.Value == *(uint *)(*(longlong *)pFVar7 + 0x18))) {
      uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 3);
      if (uVar6 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar6 < (pFVar1->StreamSendStatus).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pFVar1->StreamSendStatus).AllocatorInstance.Data[(int)uVar6] =
             (FScriptContainerElement)param_2;
        return;
      }
      goto LAB_14421b78c;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// StaticRegisterNativesUDataStreamManager @ 14421be00

void __cdecl UDataStreamManager::StaticRegisterNativesUDataStreamManager(void)

{
  return;
}

// Update @ 14421c650

void __thiscall UDataStreamManager::Update(UDataStreamManager *this,FUpdateParameters *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImpl *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Impl).Ptr;
  pFVar5 = (pFVar3->Streams).AllocatorInstance.Data;
  iVar2 = (pFVar3->Streams).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->Streams).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataStream>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    plVar4 = *(longlong **)pFVar5;
    if ((plVar4 != (longlong *)0x0) && ((*(uint *)(plVar4 + 1) >> 0x1e & 1) == 0)) {
      (**(code **)(*plVar4 + 0x2c0))(plVar4,param_1);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// WriteData @ 14421d940

EWriteResult __thiscall
UDataStreamManager::WriteData
          (UDataStreamManager *this,FNetSerializationContext *param_1,FDataStreamRecord **param_2)

{
  EWriteResult EVar1;
  
  EVar1 = FImpl::WriteData((this->Impl).Ptr,param_1,param_2);
  return EVar1;
}

