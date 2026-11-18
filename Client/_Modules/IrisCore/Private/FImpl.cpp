// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 32

// FImpl @ 1441f85b0

FImpl * __thiscall UDataStreamManager::FImpl::FImpl(FImpl *this)

{
  (this->NetExports).ExportRecord.Head = 0;
  (this->NetExports).ExportRecord.Tail = 0;
  (this->NetExports).ExportRecord.IndexMask = 0;
  (this->NetExports).ExportRecord.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetExports).ExportRecord.Storage.ArrayNum = 0;
  (this->NetExports).ExportRecord.Storage.ArrayMax = 0;
  (this->NetExports).NetHandleExports.Head = 0;
  (this->NetExports).NetHandleExports.Tail = 0;
  (this->NetExports).NetHandleExports.IndexMask = 0;
  (this->NetExports).NetHandleExports.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NetExports).NetHandleExports.Storage.ArrayNum = 0;
  (this->NetExports).NetHandleExports.Storage.ArrayMax = 0;
  (this->NetExports).NetTokenExports.Head = 0;
  (this->NetExports).NetTokenExports.Tail = 0;
  (this->NetExports).NetTokenExports.IndexMask = 0;
  (this->NetExports).NetTokenExports.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->NetExports).NetTokenExports.Storage.ArrayNum = 0;
  (this->NetExports).NetTokenExports.Storage.ArrayMax = 0;
  *(undefined8 *)&(this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.Elements = 0;
  *(undefined8 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.Elements.field_0x20 = 0;
  *(undefined4 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.Elements.field_0x34 = 0;
  *(undefined4 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.Elements.field_0x30 =
       0xffffffff;
  (this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->NetExports).AcknowledgedExports.AcknowledgedExportedHandles.HashSize = 0;
  *(undefined8 *)&(this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.Elements = 0;
  *(undefined8 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.Elements.field_0x20 = 0;
  *(undefined4 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.Elements.field_0x34 = 0;
  *(undefined4 *)
   &(this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.Elements.field_0x30 =
       0xffffffff;
  (this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->NetExports).AcknowledgedExports.AcknowledgedExportedNetTokens.HashSize = 0;
  (this->Streams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Streams).ArrayNum = 0;
  (this->Streams).ArrayMax = 0;
  (this->StreamSendStatus).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamSendStatus).ArrayNum = 0;
  (this->StreamSendStatus).ArrayMax = 0;
  (this->StreamState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamState).ArrayNum = 0;
  (this->StreamState).ArrayMax = 0;
  (this->RecordStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordStorage).ArrayNum = 0;
  (this->RecordStorage).ArrayMax = 0;
  (this->Records).Head = 0;
  (this->Records).Tail = 0;
  (this->Records).IndexMask = 0;
  (this->Records).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Records).Storage.ArrayNum = 0;
  (this->Records).Storage.ArrayMax = 0;
  (this->InitParameters).NetExports = (FNetExports *)0x0;
  (this->InitParameters).Name.ComparisonIndex = 0;
  (this->InitParameters).Name.Number = 0;
  (this->InitParameters).ReplicationSystemId = 0;
  (this->InitParameters).ConnectionId = 0;
  (this->InitParameters).PacketWindowSize = 0;
  (this->InitParameters).DataStreamManager = (UDataStreamManager *)0x0;
  this->DirtyStreamsMask = 0;
  return this;
}

// ~FImpl @ 1441f9a60

void __thiscall UDataStreamManager::FImpl::~FImpl(FImpl *this)

{
  FScriptContainerElement *pFVar1;
  
  TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
  ~TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
            (&this->Records);
  DestructItems<UDataStreamManager::FImpl::FRecord,int>
            ((FRecord *)(this->RecordStorage).AllocatorInstance.Data,(this->RecordStorage).ArrayNum)
  ;
  pFVar1 = (this->RecordStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamSendStatus).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Streams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Net::Private::FNetExports::~FNetExports(&this->NetExports);
  return;
}

// operator() @ 1441fa880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UDataStreamManager::FImpl::HandleReceivedStreamState'::__l2::<lambda_1>::operator()(void *this)

{
  FNetSerializationContext *this_00;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FName local_res8;
  
  if (1 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  this_00 = *(FNetSerializationContext **)((longlong)this + 0x18);
  pFVar4 = ::FName::FName(&local_res8,L"Invalid DataStreamState");
  FVar1 = *pFVar4;
  UE::Net::FNetSerializationContext::SetBitStreamOverflow(this_00);
  UE::Net::FNetErrorContext::SetError(&this_00->ErrorContext,FVar1);
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1760097754182320809>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                     ,0x2a9,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// AddReferencedObjects @ 1441fb500

void __thiscall
UDataStreamManager::FImpl::AddReferencedObjects(FImpl *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->Streams).AllocatorInstance.Data,(this->Streams).ArrayNum,0,0);
  return;
}

// BeginWrite @ 1441fbee0

EWriteResult __thiscall
UDataStreamManager::FImpl::BeginWrite(FImpl *this,FBeginWriteParameters *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  EWriteResult EVar4;
  longlong lVar5;
  longlong lVar6;
  EWriteResult EVar7;
  
  lVar6 = (longlong)(this->Streams).ArrayNum;
  if (lVar6 == 0) {
    return NoData;
  }
  pFVar1 = (this->StreamSendStatus).AllocatorInstance.Data;
  EVar7 = -(uint)(this->DirtyStreamsMask != 0) & HasMoreData;
  pFVar2 = (this->Streams).AllocatorInstance.Data;
  lVar5 = 0;
  do {
    if (pFVar1[lVar5] != (FScriptContainerElement)0x0) {
      plVar3 = *(longlong **)(pFVar2 + lVar5 * 8);
      EVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3,param_1);
      if ((EVar7 == HasMoreData) || (EVar7 = EVar4, EVar4 == HasMoreData)) {
        EVar7 = HasMoreData;
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != lVar6);
  return EVar7;
}

// CloseStream @ 1442011e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataStreamManager::FImpl::CloseStream(FImpl *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  UObject *pUVar3;
  code *pcVar4;
  EDataStreamState EVar5;
  bool bVar6;
  uint uVar7;
  UClass *this_00;
  FName *pFVar8;
  FName *pFVar9;
  FScriptContainerElement *pFVar10;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res10 = param_1;
  this_00 = UDataStreamDefinitions::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar9 = *(FName **)(pUVar3 + 1);
  pFVar8 = pFVar9 + (longlong)*(int *)&pUVar3[1].field_0x8 * 4;
  do {
    if (pFVar9 == pFVar8) {
LAB_14420123e:
      if ((byte)LogIris._0_1_ < 3) {
        return;
      }
      ::FName::GetPlainNameString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
LAB_1442015ad:
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return;
    }
    if (local_res10 == *pFVar9) {
      if (pFVar9 != (FName *)0x0) {
        if (*(char *)((longlong)&pFVar9[3].ComparisonIndex.Value + 2) == '\0') {
          if ((byte)LogIris._0_1_ < 3) {
            return;
          }
          ::FName::GetPlainNameString(&local_res10,&local_48);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        }
        else {
          pFVar10 = (this->Streams).AllocatorInstance.Data;
          pFVar1 = pFVar10 + (longlong)(this->Streams).ArrayNum * 8;
          for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 8) {
            if ((*(longlong *)pFVar10 != 0) &&
               (local_res10.ComparisonIndex.Value.Value == *(uint *)(*(longlong *)pFVar10 + 0x18)))
            {
              uVar2 = pFVar9[3].Number;
              EVar5 = GetStreamState(this,uVar2);
              if (EVar5 != PendingCreate) {
                if ((EVar5 != WaitOnCreateConfirmation) && (EVar5 != Open)) {
                  return;
                }
                SetStreamState(this,uVar2,PendingClose);
                return;
              }
              uVar7 = 0;
              if ((int)uVar2 < (this->StreamState).ArrayNum) {
                uVar7 = ~uVar2 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              switch((this->StreamState).AllocatorInstance.Data[(int)uVar2]) {
              case (FScriptContainerElement)0x0:
              case (FScriptContainerElement)0x1:
              case (FScriptContainerElement)0x2:
              case (FScriptContainerElement)0x5:
                if (5 < (byte)LogIris._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                }
                uVar7 = 0;
                if ((int)uVar2 < (this->StreamState).ArrayNum) {
                  uVar7 = ~uVar2 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (this->StreamState).AllocatorInstance.Data[(int)uVar2] =
                     (FScriptContainerElement)0x0;
                this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar2 & 0x1f);
                break;
              default:
                if (5 < (byte)LogIris._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                }
                bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<1760097754182320789>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                                   ,0x295,"false");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              DestroyStream(this,uVar2);
              return;
            }
          }
          if ((byte)LogIris._0_1_ < 3) {
            return;
          }
          ::FName::GetPlainNameString(&local_res10,&local_38);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        }
        goto LAB_1442015ad;
      }
      goto LAB_14420123e;
    }
    pFVar9 = pFVar9 + 4;
  } while( true );
}

// CreateStream @ 144206120

/* WARNING: Enum "Type": Some values do not have unique names */

ECreateDataStreamResult __thiscall
UDataStreamManager::FImpl::CreateStream(FImpl *this,FName param_1,ECreateDataStreamFlags param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  ECreateDataStreamResult EVar3;
  UClass *this_00;
  FDataStreamDefinition *pFVar4;
  FDataStreamDefinition *pFVar5;
  FScriptContainerElement *pFVar6;
  FName local_res10;
  FString local_18;
  
  pFVar6 = (this->Streams).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Streams).ArrayNum * 8;
  while( true ) {
    local_res10 = param_1;
    if (pFVar6 == pFVar1) {
      this_00 = UDataStreamDefinitions::StaticClass();
      if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_00);
      }
      pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
      pFVar5 = *(FDataStreamDefinition **)(pUVar2 + 1);
      pFVar4 = pFVar5 + *(int *)&pUVar2[1].field_0x8;
      while( true ) {
        if (pFVar5 == pFVar4) {
          return Error_MissingDefinition;
        }
        if (local_res10 == pFVar5->DataStreamName) break;
        pFVar5 = pFVar5 + 1;
      }
      EVar3 = CreateStreamFromDefinition(this,pFVar5,param_2);
      return EVar3;
    }
    if ((*(longlong *)pFVar6 != 0) &&
       (param_1.ComparisonIndex.Value.Value == *(uint *)(*(longlong *)pFVar6 + 0x18))) break;
    pFVar6 = pFVar6 + 8;
  }
  if (2 < (byte)LogIris._0_1_) {
    ::FName::GetPlainNameString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return Error_Duplicate;
}

// CreateStreamFromDefinition @ 144206280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ECreateDataStreamResult __thiscall
UDataStreamManager::FImpl::CreateStreamFromDefinition
          (FImpl *this,FDataStreamDefinition *param_1,ECreateDataStreamFlags param_2)

{
  uint uVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  ECreateDataStreamResult EVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FScriptContainerElement FVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStackY_178 [32];
  FName local_130;
  FScriptContainerElement *local_128;
  FName *local_120;
  undefined1 local_118 [8];
  FString local_110;
  FString local_100;
  FNetExports *local_f0;
  FName FStack_e8;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  UDataStreamManager *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_1->Class).field0_0x0.DebugPtr == (UClass *)0x0) {
    return Error_InvalidDefinition;
  }
  uVar1 = param_1->StreamIndex;
  lVar20 = (longlong)(int)uVar1;
  if (uVar1 == 0xffffffff) {
    return Error_InvalidDefinition;
  }
  if (0x1f < uVar1) {
    return Error_TooManyStreams;
  }
  piVar13 = &(this->Streams).ArrayNum;
  uVar18 = uVar1 + 1;
  iVar16 = *piVar13;
  if (iVar16 < (int)uVar18) {
    iVar16 = uVar18 - iVar16;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar16,&(this->Streams).AllocatorInstance,piVar13,
                       &(this->Streams).ArrayMax);
    memset((this->Streams).AllocatorInstance.Data + (longlong)iVar7 * 8,0,(longlong)iVar16 << 3);
    piVar13 = &(this->StreamSendStatus).ArrayNum;
    iVar16 = *piVar13;
    if (iVar16 < (int)uVar18) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar18 - iVar16,&(this->StreamSendStatus).AllocatorInstance,piVar13,
                         &(this->StreamSendStatus).ArrayMax);
      memset((this->StreamSendStatus).AllocatorInstance.Data + iVar7,0,
             (longlong)(int)(uVar18 - iVar16));
    }
    else {
      if ((int)uVar18 < 0) goto LAB_144206a6b;
      if ((int)uVar18 < iVar16) {
        uVar17 = iVar16 - uVar18;
        if (((int)(uVar17 | uVar18) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        if (uVar17 != 0) {
          pFVar14 = (this->StreamSendStatus).AllocatorInstance.Data + (int)uVar18;
          iVar16 = (*piVar13 - uVar17) - uVar18;
          if (iVar16 != 0) {
            memmove(pFVar14,pFVar14 + (int)uVar17,(longlong)iVar16);
          }
          *piVar13 = *piVar13 - uVar17;
        }
      }
    }
    piVar13 = &(this->StreamState).ArrayNum;
    iVar16 = *piVar13;
    if (iVar16 < (int)uVar18) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar18 - iVar16,&(this->StreamState).AllocatorInstance,piVar13,
                         &(this->StreamState).ArrayMax);
      memset((this->StreamState).AllocatorInstance.Data + iVar7,0,(longlong)(int)(uVar18 - iVar16));
    }
    else {
      if ((int)uVar18 < 0) {
LAB_144206a6b:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if ((int)uVar18 < iVar16) {
        uVar17 = iVar16 - uVar18;
        if (((int)(uVar17 | uVar18) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        if (uVar17 != 0) {
          pFVar14 = (this->StreamState).AllocatorInstance.Data + (int)uVar18;
          iVar16 = (*piVar13 - uVar17) - uVar18;
          if (iVar16 != 0) {
            memmove(pFVar14,pFVar14 + (int)uVar17,(longlong)iVar16);
          }
          *piVar13 = *piVar13 - uVar17;
        }
      }
    }
  }
  bVar4 = param_1->bDynamicCreate;
  uVar18 = 0;
  if ((bVar4 == false) || ((param_2 & RegisterIfStreamIsDynamic) == None)) {
    FVar8 = MakeUniqueObjectName
                      ((UObject *)local_118,(UClass *)0x0,
                       (FName)(param_1->Class).field0_0x0.ObjectPtr.field0_0x0,
                       (param_1->DataStreamName).ComparisonIndex.Value);
    pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
    FVar8 = *(FName *)FVar8;
    pUVar9 = GetTransientPackage();
    if (FVar8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar9,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar10 = UDataStream::StaticClass();
    CheckIsClassChildOf_Internal(pUVar10,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar2);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar9;
    local_c8._16_8_ = FVar8;
    pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar15 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    uVar19 = ~uVar1 >> 0x1f;
    uVar17 = uVar18;
    if ((int)uVar1 < (this->Streams).ArrayNum) {
      uVar17 = uVar19;
    }
    if ((uVar17 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    local_128 = (this->Streams).AllocatorInstance.Data + lVar20 * 8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    *(UObject **)local_128 = pUVar11;
    FVar12 = (FScriptContainerElement)param_1->DefaultSendStatus;
    uVar17 = uVar18;
    if ((int)uVar1 < (this->StreamSendStatus).ArrayNum) {
      uVar17 = uVar19;
    }
    if ((uVar17 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    (this->StreamSendStatus).AllocatorInstance.Data[lVar20] = FVar12;
    uVar17 = uVar18;
    if ((int)uVar1 < (this->StreamState).ArrayNum) {
      uVar17 = uVar19;
    }
    if ((uVar17 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    FVar12 = (FScriptContainerElement)0x3;
    if (bVar4 != false) {
      FVar12 = (FScriptContainerElement)0x1;
    }
    (this->StreamState).AllocatorInstance.Data[lVar20] = FVar12;
    if (bVar4 != false) {
      this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar1 & 0x1f);
    }
    if (5 < (byte)LogIris._0_1_) {
      if ((int)uVar1 < (this->StreamState).ArrayNum) {
        uVar18 = uVar19;
      }
      if ((uVar18 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      ::FName::ToString(&param_1->DataStreamName,&local_100);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    uVar19 = ~uVar1 >> 0x1f;
    uVar17 = 0;
    if ((int)uVar1 < (this->Streams).ArrayNum) {
      uVar17 = uVar19;
    }
    if ((uVar17 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    *(undefined8 *)((this->Streams).AllocatorInstance.Data + lVar20 * 8) = 0;
    uVar17 = uVar18;
    if ((int)uVar1 < (this->StreamSendStatus).ArrayNum) {
      uVar17 = uVar19;
    }
    if ((uVar17 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    (this->StreamSendStatus).AllocatorInstance.Data[lVar20] = (FScriptContainerElement)0x0;
    uVar17 = uVar18;
    if ((int)uVar1 < (this->StreamState).ArrayNum) {
      uVar17 = uVar19;
    }
    if ((uVar17 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    (this->StreamState).AllocatorInstance.Data[lVar20] = (FScriptContainerElement)0x0;
    pUVar11 = (UObject *)0x0;
    if (5 < (byte)LogIris._0_1_) {
      if ((int)uVar1 < (this->StreamState).ArrayNum) {
        uVar18 = uVar19;
      }
      if ((uVar18 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      ::FName::ToString(&param_1->DataStreamName,&local_110);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      pUVar11 = (UObject *)0x0;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        return Success;
      }
    }
  }
  local_130 = param_1->DataStreamName;
  if ((pUVar11 != (UObject *)0x0) && ((*(uint *)&pUVar11->field_0x8 >> 0x1e & 1) == 0)) {
    local_f0 = (this->InitParameters).NetExports;
    local_e0 = (this->InitParameters).ReplicationSystemId;
    uStack_dc = (this->InitParameters).ConnectionId;
    uStack_d8 = (this->InitParameters).PacketWindowSize;
    uStack_d4 = *(undefined4 *)&(this->InitParameters).field_0x1c;
    local_d0 = (this->InitParameters).DataStreamManager;
    FStack_e8 = local_130;
    (**(code **)(*(longlong *)pUVar11 + 0x2b0))(pUVar11,&local_f0);
    FVar8.ComparisonIndex.Value = *(uint *)&pUVar11[1].field_0x8;
    FVar8.Number = *(uint *)&pUVar11[1].field_0xc;
    if (FVar8 != local_130) {
      local_120 = &local_130;
      `UDataStreamManager::FImpl::InitStream'::__l5::<lambda_1>::operator()(&local_120);
    }
  }
  return Success;
}

// CreateStreamFromIndex @ 144206a80

/* WARNING: Enum "Type": Some values do not have unique names */

ECreateDataStreamResult __thiscall
UDataStreamManager::FImpl::CreateStreamFromIndex(FImpl *this,int param_1)

{
  UObject *pUVar1;
  ECreateDataStreamResult EVar2;
  UClass *this_00;
  FDataStreamDefinition *pFVar3;
  FDataStreamDefinition *pFVar4;
  
  this_00 = UDataStreamDefinitions::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1[1].field_0x10 == '\0') {
    if (2 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  else {
    pFVar4 = *(FDataStreamDefinition **)(pUVar1 + 1);
    pFVar3 = pFVar4 + *(int *)&pUVar1[1].field_0x8;
    if (pFVar4 != pFVar3) {
      do {
        if (param_1 == pFVar4->StreamIndex) {
          EVar2 = CreateStreamFromDefinition(this,pFVar4,None);
          return EVar2;
        }
        pFVar4 = pFVar4 + 1;
      } while (pFVar4 != pFVar3);
      return Error_MissingDefinition;
    }
  }
  return Error_MissingDefinition;
}

// Deinit @ 144206b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDataStreamManager::FImpl::Deinit(FImpl *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObjectBase *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FUObjectItem *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [16];
  
  uVar7 = (this->Records).Head - (this->Records).Tail;
  uVar8 = (ulonglong)uVar7;
  if (uVar7 != 0) {
    do {
      if (((this->Records).Head == (this->Records).Tail) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ProcessPacketDeliveryStatus
                (this,Discard,
                 *(FDataStreamRecord **)
                  ((this->Records).Storage.AllocatorInstance.Data +
                  (ulonglong)((this->Records).IndexMask & (this->Records).Tail) * 8));
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  pFVar9 = (this->Streams).AllocatorInstance.Data;
  iVar2 = (this->Streams).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  do {
    if ((this->Streams).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDataStream>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar9 == pFVar1) {
      (this->Streams).ArrayNum = 0;
      if ((this->Streams).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->Streams).AllocatorInstance,0,&(this->Streams).ArrayMax);
      }
      (this->StreamSendStatus).ArrayNum = 0;
      if ((this->StreamSendStatus).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->StreamSendStatus).AllocatorInstance,0,
                   &(this->StreamSendStatus).ArrayMax);
      }
      (this->StreamState).ArrayNum = 0;
      if ((this->StreamState).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->StreamState).AllocatorInstance,0,&(this->StreamState).ArrayMax);
      }
      return;
    }
    this_00 = *(UObjectBase **)pFVar9;
    if ((this_00 != (UObjectBase *)0x0) && ((this_00->ObjectFlags >> 0x1e & 1) == 0)) {
      (**(code **)(this_00->_padding_ + 0x2b8))(this_00);
      pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
      pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      do {
        lVar3 = (pFVar6->field0_0x0).FlagsAndRefCount;
        uVar7 = (uint)((ulonglong)lVar3 >> 0x20);
        if ((uVar7 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar6 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar3 == (pFVar6->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar6->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar3 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar5);
      pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      FUObjectItem::ClearRootFlags(pFVar6,Async);
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// DestroyStream @ 144207dd0

void __thiscall UDataStreamManager::FImpl::DestroyStream(FImpl *this,uint param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = (longlong)(int)param_1;
  uVar6 = ~param_1 >> 0x1f;
  uVar5 = 0;
  uVar3 = uVar5;
  if ((int)param_1 < (this->Streams).ArrayNum) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(UObjectBaseUtility **)((this->Streams).AllocatorInstance.Data + lVar4 * 8);
  if ((this_00 != (UObjectBaseUtility *)0x0) && ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) == 0)) {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00);
    UObjectBaseUtility::MarkAsGarbage(this_00);
    uVar3 = uVar5;
    if ((int)param_1 < (this->Streams).ArrayNum) {
      uVar3 = uVar6;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined8 *)((this->Streams).AllocatorInstance.Data + lVar4 * 8) = 0;
    if ((int)param_1 < (this->StreamState).ArrayNum) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->StreamState).AllocatorInstance.Data[lVar4] = (FScriptContainerElement)0x0;
    uVar3 = 0;
    if ((int)param_1 < (this->StreamSendStatus).ArrayNum) {
      uVar3 = uVar6;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->StreamSendStatus).AllocatorInstance.Data[lVar4] = (FScriptContainerElement)0x0;
  }
  return;
}

// EndWrite @ 144208450

void __thiscall UDataStreamManager::FImpl::EndWrite(FImpl *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(this->Streams).ArrayNum;
  lVar3 = 0;
  pFVar1 = (this->Streams).AllocatorInstance.Data;
  pFVar2 = (this->StreamSendStatus).AllocatorInstance.Data;
  if (lVar4 != 0) {
    do {
      if (pFVar2[lVar3] != (FScriptContainerElement)0x0) {
        (**(code **)(**(longlong **)(pFVar1 + lVar3 * 8) + 0x2d8))();
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar4);
  }
  return;
}

// GetNetExports @ 14420acd0

FNetExports * __thiscall UDataStreamManager::FImpl::GetNetExports(FImpl *this)

{
  return &this->NetExports;
}

// GetSendStatus @ 14420d540

/* WARNING: Enum "Type": Some values do not have unique names */

EDataStreamSendStatus __thiscall UDataStreamManager::FImpl::GetSendStatus(FImpl *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EDataStreamSendStatus EVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10 [3];
  FString local_18;
  
  pFVar1 = (this->Streams).AllocatorInstance.Data;
  pFVar7 = pFVar1;
  do {
    local_res10[0] = param_1;
    if (pFVar7 == pFVar1 + (longlong)(this->Streams).ArrayNum * 8) {
LAB_14420d586:
      if (3 < (byte)LogIris._0_1_) {
        ::FName::GetPlainNameString(local_res10,&local_18);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return Pause;
    }
    if ((*(longlong *)pFVar7 != 0) &&
       (param_1.ComparisonIndex.Value.Value == *(uint *)(*(longlong *)pFVar7 + 0x18))) {
      uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
      if (uVar6 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar6 < (this->StreamSendStatus).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        return (EDataStreamSendStatus)(this->StreamSendStatus).AllocatorInstance.Data[(int)uVar6];
      }
      goto LAB_14420d586;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetStreamState @ 14420dc50

EDataStreamState __thiscall UDataStreamManager::FImpl::GetStreamState(FImpl *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  EDataStreamState EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((int)param_1 < (this->StreamState).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (EDataStreamState)(this->StreamState).AllocatorInstance.Data[(int)param_1];
}

// GetStreamState @ 14420dcd0

EDataStreamState __thiscall UDataStreamManager::FImpl::GetStreamState(FImpl *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  EDataStreamState EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar1 = (this->Streams).AllocatorInstance.Data;
  pFVar4 = pFVar1;
  while( true ) {
    if (pFVar4 == pFVar1 + (longlong)(this->Streams).ArrayNum * 8) {
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
  EVar2 = GetStreamState(this,uVar3);
  return EVar2;
}

// HandleReceivedStreamState @ 14420dfe0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDataStreamManager::FImpl::HandleReceivedStreamState
          (FImpl *this,FNetSerializationContext *param_1,uint param_2,EDataStreamState param_3)

{
  longlong *plVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  ECreateDataStreamResult EVar6;
  UClass *this_00;
  FDataStreamDefinition *pFVar7;
  uint uVar8;
  FStaticBasicLogRecord *pFVar9;
  FDataStreamDefinition *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  EDataStreamState local_res8 [8];
  uint local_res10;
  uint local_res18 [2];
  EDataStreamState local_res20 [8];
  EDataStreamState *local_78;
  EDataStreamState *local_70;
  uint *local_68;
  FNetSerializationContext *local_60;
  FImpl *local_58;
  
  uVar12 = 0;
  uVar8 = uVar12;
  if ((int)param_2 < (this->Streams).ArrayNum) {
    uVar8 = ~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar1 = *(longlong **)((this->Streams).AllocatorInstance.Data + (longlong)(int)param_2 * 8);
  local_res8[0] = GetStreamState(this,local_res18[0]);
  uVar8 = local_res18[0];
  local_78 = local_res8;
  local_70 = local_res20;
  local_68 = local_res18;
  uVar14 = 0;
  uVar13 = 0;
  uVar11 = 0;
  local_60 = param_1;
  local_58 = this;
  if (local_res20[0] == Invalid) {
    if (local_res8[0] == Invalid) {
      return;
    }
    if (local_res8[0] == WaitOnCreateConfirmation) {
      SetStreamState(this,local_res18[0],PendingClose);
      uVar8 = local_res18[0];
      lVar15 = (longlong)(int)local_res18[0];
      uVar13 = ~local_res18[0];
      uVar12 = uVar14;
      if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
        uVar12 = uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
      default:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1760097754182320789>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                           ,0x295,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      case (FScriptContainerElement)0x4:
      case (FScriptContainerElement)0x5:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        uVar12 = uVar14;
        if ((int)uVar8 < (this->StreamState).ArrayNum) {
          uVar12 = uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->StreamState).AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x5;
        this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar8 & 0x1f);
      }
      uVar8 = local_res18[0];
      lVar15 = (longlong)(int)local_res18[0];
      local_res10 = ~local_res18[0] >> 0x1f;
      if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
        uVar14 = local_res10;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
      case (FScriptContainerElement)0x0:
      case (FScriptContainerElement)0x1:
      case (FScriptContainerElement)0x2:
      case (FScriptContainerElement)0x5:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        if ((int)uVar8 < (this->StreamState).ArrayNum) {
          uVar11 = local_res10;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->StreamState).AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x0;
        this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar8 & 0x1f);
        break;
      default:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1760097754182320789>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                           ,0x295,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      DestroyStream(this,local_res18[0]);
      return;
    }
    if (local_res8[0] == WaitOnCloseConfirmation) {
      lVar15 = (longlong)(int)local_res18[0];
      uVar12 = ~local_res18[0];
      if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
        uVar11 = uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
      case (FScriptContainerElement)0x0:
      case (FScriptContainerElement)0x1:
      case (FScriptContainerElement)0x2:
      case (FScriptContainerElement)0x5:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        if ((int)uVar8 < (this->StreamState).ArrayNum) {
          uVar13 = uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->StreamState).AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x0;
        this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar8 & 0x1f);
        DestroyStream(this,local_res18[0]);
        return;
      }
      if (5 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1760097754182320789>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                         ,0x295,"false");
      if (!bVar4) {
        DestroyStream(this,local_res18[0]);
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_14420e69a;
  }
  if (local_res20[0] == PendingCreate) {
    if (local_res8[0] != Invalid) {
      if (local_res8[0] != WaitOnCreateConfirmation) goto LAB_14420e69a;
      lVar15 = (longlong)(int)local_res18[0];
      uVar12 = ~local_res18[0];
      if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
        uVar11 = uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
      default:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1760097754182320789>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                           ,0x295,"false");
        if (!bVar4) {
          return;
        }
        goto code_r0x00014420ebff;
      case (FScriptContainerElement)0x2:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        if ((int)uVar8 < (this->StreamState).ArrayNum) {
          uVar14 = uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      case (FScriptContainerElement)0x3:
      case (FScriptContainerElement)0x4:
        return;
      }
LAB_14420e7ca:
      lVar15 = (longlong)(int)uVar8;
      (this->StreamState).AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x3;
LAB_14420e3c7:
      this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << ((uint)lVar15 & 0x1f);
      return;
    }
    this_00 = UDataStreamDefinitions::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar2[1].field_0x10 == '\0') {
      if (2 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
    else {
      pFVar10 = *(FDataStreamDefinition **)(pUVar2 + 1);
      pFVar7 = pFVar10 + *(int *)&pUVar2[1].field_0x8;
      for (; pFVar10 != pFVar7; pFVar10 = pFVar10 + 1) {
        if (uVar8 == pFVar10->StreamIndex) {
          EVar6 = CreateStreamFromDefinition(this,pFVar10,None);
          if (EVar6 == Success) {
            return;
          }
          break;
        }
      }
    }
    uVar8 = local_res18[0];
    lVar15 = (longlong)(int)local_res18[0];
    uVar13 = ~local_res18[0];
    uVar12 = uVar11;
    if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
      uVar12 = uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
    case (FScriptContainerElement)0x0:
    case (FScriptContainerElement)0x1:
    case (FScriptContainerElement)0x2:
    case (FScriptContainerElement)0x5:
      if (5 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      if ((int)uVar8 < (this->StreamState).ArrayNum) {
        uVar11 = uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->StreamState).AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x0;
      goto LAB_14420e3c7;
    default:
    }
  }
  else if (local_res20[0] == Open) {
    if (local_res8[0] != WaitOnCreateConfirmation) {
      if (local_res8[0] == Open) {
        return;
      }
      goto LAB_14420e69a;
    }
    lVar15 = (longlong)(int)local_res18[0];
    uVar13 = ~local_res18[0];
    uVar12 = uVar11;
    if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
      uVar12 = uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
    default:
      break;
    case (FScriptContainerElement)0x2:
      if (5 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      if ((int)uVar8 < (this->StreamState).ArrayNum) {
        uVar11 = uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14420e7ca;
    case (FScriptContainerElement)0x3:
    case (FScriptContainerElement)0x4:
      return;
    }
  }
  else {
    if (local_res20[0] == PendingClose) {
      if (local_res8[0] == PendingCreate) {
        SetStreamState(this,local_res18[0],WaitOnCreateConfirmation);
LAB_14420e45c:
        SetStreamState(this,local_res18[0],PendingClose);
        return;
      }
      if ((byte)(local_res8[0] - WaitOnCreateConfirmation) < 2) goto LAB_14420e45c;
      if (local_res8[0] != PendingClose) {
        if (local_res8[0] != WaitOnCloseConfirmation) goto LAB_14420e69a;
        goto LAB_14420e432;
      }
      lVar15 = (longlong)(int)local_res18[0];
      uVar8 = uVar13;
      if ((int)local_res18[0] < (this->Streams).ArrayNum) {
        uVar8 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar5 = (**(code **)(**(longlong **)((this->Streams).AllocatorInstance.Data + lVar15 * 8) +
                          0x2f0))();
      uVar8 = local_res18[0];
      if (cVar5 == '\0') {
        if ((byte)LogIris._0_1_ < 6) goto LAB_14420e432;
        if (local_res8[0] < Count) {
          pFVar9 = &::LOG_Static;
        }
        else {
          pFVar9 = &::LOG_Static;
        }
        goto LAB_14420e40c;
      }
      lVar15 = (longlong)(int)local_res18[0];
      uVar12 = ~local_res18[0];
      if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
        uVar13 = uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
      case (FScriptContainerElement)0x4:
      case (FScriptContainerElement)0x5:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        if ((int)uVar8 < (this->StreamState).ArrayNum) {
          uVar11 = uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_14420e3bb;
      }
    }
    else {
      if (local_res20[0] != WaitOnCloseConfirmation) {
LAB_14420e69a:
        `UDataStreamManager::FImpl::HandleReceivedStreamState'::__l2::<lambda_1>::operator()
                  (&local_78);
        return;
      }
      if (local_res8[0] == WaitOnCloseConfirmation) {
        lVar15 = (longlong)(int)local_res18[0];
        uVar11 = ~local_res18[0];
        uVar13 = uVar12;
        if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
          uVar13 = uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
        case (FScriptContainerElement)0x0:
        case (FScriptContainerElement)0x1:
        case (FScriptContainerElement)0x2:
        case (FScriptContainerElement)0x5:
          goto switchD_14420e14f_caseD_0;
        default:
          if (5 < (byte)LogIris._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          }
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1760097754182320789>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                             ,0x295,"false");
          if (!bVar4) {
            DestroyStream(this,local_res18[0]);
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_res8[0] != PendingClose) goto LAB_14420e69a;
      cVar5 = (**(code **)(*plVar1 + 0x2f0))(plVar1);
      uVar8 = local_res18[0];
      if (cVar5 == '\0') {
        if ((byte)LogIris._0_1_ < 6) goto LAB_14420e432;
        pFVar9 = &::LOG_Static;
LAB_14420e40c:
        UE::Logging::Private::BasicLog<6>(pFVar9,(FLogCategoryBase *)&LogIris);
LAB_14420e432:
        this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (local_res18[0] & 0x1f);
        return;
      }
      lVar15 = (longlong)(int)local_res18[0];
      uVar11 = ~local_res18[0];
      uVar12 = uVar13;
      if ((int)local_res18[0] < (this->StreamState).ArrayNum) {
        uVar12 = uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      switch((this->StreamState).AllocatorInstance.Data[lVar15]) {
      case (FScriptContainerElement)0x4:
      case (FScriptContainerElement)0x5:
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        if ((int)uVar8 < (this->StreamState).ArrayNum) {
          uVar13 = uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14420e3bb:
        (this->StreamState).AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x5;
        goto LAB_14420e3c7;
      }
    }
  }
  if (5 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1760097754182320789>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                     ,0x295,"false");
  if (!bVar4) {
    return;
  }
code_r0x00014420ebff:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
switchD_14420e14f_caseD_0:
  if (5 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  if ((int)uVar8 < (this->StreamState).ArrayNum) {
    uVar12 = uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->StreamState).AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x0;
  this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar8 & 0x1f);
  DestroyStream(this,local_res18[0]);
  return;
}

// HasAcknowledgedAllReliableData @ 14420f240

bool __thiscall UDataStreamManager::FImpl::HasAcknowledgedAllReliableData(FImpl *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Streams).AllocatorInstance.Data;
  iVar2 = (this->Streams).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if ((this->Streams).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataStream>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) {
      return true;
    }
    pUVar3 = *(UObject **)pFVar5;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14420f29e;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_14420f29e:
      cVar4 = (**(code **)(*(longlong *)pUVar3 + 0x2f0))(pUVar3);
      if (cVar4 == '\0') {
        return false;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// Init @ 14420f560

void __thiscall UDataStreamManager::FImpl::Init(FImpl *this,FInitParameters *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  FVar1 = param_1->Name;
  (this->InitParameters).NetExports = param_1->NetExports;
  (this->InitParameters).Name = FVar1;
  uVar2 = param_1->ConnectionId;
  uVar3 = param_1->PacketWindowSize;
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  (this->InitParameters).ReplicationSystemId = param_1->ReplicationSystemId;
  (this->InitParameters).ConnectionId = uVar2;
  (this->InitParameters).PacketWindowSize = uVar3;
  *(undefined4 *)&(this->InitParameters).field_0x1c = uVar4;
  (this->InitParameters).DataStreamManager = param_1->DataStreamManager;
  (this->InitParameters).NetExports = &this->NetExports;
  InitRecordStorage(this);
  InitStreams(this);
  return;
}

// InitRecordStorage @ 14420f910

void __thiscall UDataStreamManager::FImpl::InitRecordStorage(FImpl *this)

{
  int *piVar1;
  TArray<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UDataStreamManager::FImpl::FRecord,TSizedDefaultAllocator<32>_> *this_00;
  TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> *this_01
  ;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulong64 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> local_48
  ;
  
  uVar3 = (this->InitParameters).PacketWindowSize;
  this_00 = &this->RecordStorage;
  iVar12 = (this->RecordStorage).ArrayNum;
  piVar1 = &(this->RecordStorage).ArrayNum;
  if (iVar12 < (int)uVar3) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,uVar3 - iVar12,&this_00->AllocatorInstance,piVar1,
                       &(this->RecordStorage).ArrayMax);
    DefaultConstructItems<UDataStreamManager::FImpl::FRecord,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x58,uVar3 - iVar12);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar12) {
      uVar14 = iVar12 - uVar3;
      if (((int)(uVar14 | uVar3) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar14 != 0) {
        TArray<UDataStreamManager::FImpl::FRecord,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar3,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,&this_00->AllocatorInstance,*piVar1,&(this->RecordStorage).ArrayMax);
      }
    }
  }
  uVar14 = 0;
  local_48.Head = 0;
  local_48.Tail = 0;
  local_48.IndexMask = 0;
  local_48.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Storage.ArrayNum = 0;
  local_48.Storage.ArrayMax = 0;
  iVar12 = 0;
  if (uVar3 != 0) {
    TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
    SetCapacity(&local_48,(ulonglong)uVar3);
    iVar12 = local_48.Storage.ArrayNum;
  }
  _Src.Data = local_48.Storage.AllocatorInstance.Data;
  this_01 = &this->Records;
  this_01->Head = local_48.Head;
  pTVar2 = &(this->Records).Storage;
  (this->Records).Tail = local_48.Tail;
  (this->Records).IndexMask = local_48.IndexMask;
  if (pTVar2 != &local_48.Storage) {
    iVar8 = (this->Records).Storage.ArrayMax;
    piVar1 = &(this->Records).Storage.ArrayMax;
    (this->Records).Storage.ArrayNum = iVar12;
    if ((iVar12 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,iVar8,&pTVar2->AllocatorInstance,iVar12,piVar1);
      if (iVar12 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src.Data,(longlong)iVar12 << 3);
      }
    }
  }
  uVar13 = local_48.Head - local_48.Tail;
  if ((0xffffffff < (ulonglong)uVar13 + (ulonglong)local_48.Tail) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_48.Tail = local_48.Tail + uVar13;
  local_48.Storage._8_8_ = local_48.Storage._8_8_ & 0xffffffff00000000;
  if (local_48.Storage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Storage.AllocatorInstance.Data);
  }
  if (uVar3 != 0) {
    do {
      uVar11 = (ulonglong)(this_01->Head - (this->Records).Tail) + 1;
      if ((ulonglong)(longlong)(this->Records).Storage.ArrayNum < uVar11) {
        TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>::
        SetCapacity(this_01,uVar11);
      }
      uVar13 = this_01->Head;
      uVar4 = (this->Records).IndexMask;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      this_01->Head = uVar13 + 1;
      uVar9 = 0;
      if ((int)uVar14 < (this->RecordStorage).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar10 = (longlong)(int)uVar14;
      uVar14 = uVar14 + 1;
      *(FScriptContainerElement **)(pFVar5 + (ulonglong)(uVar4 & uVar13) * 8) =
           (this_00->AllocatorInstance).Data + lVar10 * 0x58;
    } while (uVar14 != uVar3);
  }
  uVar3 = (this->Records).Tail;
  if ((0xffffffff < (ulonglong)(this_01->Head - uVar3) + (ulonglong)uVar3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01->Head = 0;
  this_01->Tail = 0;
  return;
}

// InitStream @ 14420fd20

void __thiscall
UDataStreamManager::FImpl::InitStream(FImpl *this,UDataStream *param_1,FName param_2)

{
  FName *local_res10;
  FName local_res18 [2];
  FNetExports *local_38;
  FName FStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  UDataStreamManager *local_18;
  
  if ((param_1 != (UDataStream *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    local_38 = (this->InitParameters).NetExports;
    local_28 = (this->InitParameters).ReplicationSystemId;
    uStack_24 = (this->InitParameters).ConnectionId;
    uStack_20 = (this->InitParameters).PacketWindowSize;
    uStack_1c = *(undefined4 *)&(this->InitParameters).field_0x1c;
    local_18 = (this->InitParameters).DataStreamManager;
    local_res18[0] = param_2;
    FStack_30 = param_2;
    (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&local_38);
    if ((param_1->DataStreamInitParameters).Name != local_res18[0]) {
      local_res10 = local_res18;
      `UDataStreamManager::FImpl::InitStream'::__l5::<lambda_1>::operator()(&local_res10);
    }
  }
  return;
}

// InitStreams @ 14420fdb0

void __thiscall UDataStreamManager::FImpl::InitStreams(FImpl *this)

{
  int iVar1;
  UDataStreamDefinitions *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *this_01;
  ulonglong uVar5;
  FName *pFVar6;
  ForAnyElementType FVar7;
  FName *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  this_01 = UDataStreamDefinitions::StaticClass();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  this_00 = (UDataStreamDefinitions *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  UDataStreamDefinitions::FixupDefinitions(this_00);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,0x20,&local_28,0,(int *)((longlong)&local_20 + 4));
  iVar1 = (this_00->DataStreamDefinitions).ArrayNum;
  pFVar6 = (FName *)(this_00->DataStreamDefinitions).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this_00->DataStreamDefinitions).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDataStreamDefinition_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    iVar4 = (int)local_20;
    if (pFVar6 == pFVar8) break;
    if ((*(char *)((longlong)&pFVar6[3].ComparisonIndex.Value + 1) != '\0') ||
       (*(char *)((longlong)&pFVar6[3].ComparisonIndex.Value + 2) != '\0')) {
      if ((local_28.Data <= pFVar6) &&
         ((pFVar6 < (FName *)(local_28.Data + (longlong)local_20._4_4_ * 8) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)))) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (int)local_20;
      if ((int)local_20 == local_20._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_28,(int *)((longlong)&local_20 + 4));
      }
      local_20 = CONCAT44(local_20._4_4_,iVar4 + 1);
      *(FName *)(local_28.Data + (longlong)iVar4 * 8) = *pFVar6;
    }
    pFVar6 = pFVar6 + 4;
  }
  uVar5 = (ulonglong)(int)local_20;
  pFVar6 = (FName *)(local_28.Data + uVar5 * 8);
  FVar7.Data = local_28.Data;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((FName *)FVar7.Data == pFVar6) break;
    CreateStream(this,*(FName *)FVar7.Data,RegisterIfStreamIsDynamic);
    uVar5 = local_20 & 0xffffffff;
    FVar7.Data = FVar7.Data + 8;
  }
  if ((FName *)local_28.Data != (FName *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// MarkStreamStateDirty @ 1442129e0

void __thiscall UDataStreamManager::FImpl::MarkStreamStateDirty(FImpl *this,uint param_1)

{
  this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (param_1 & 0x1f);
  return;
}

// ProcessPacketDeliveryStatus @ 144214050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDataStreamManager::FImpl::ProcessPacketDeliveryStatus
          (FImpl *this,EPacketDeliveryStatus param_1,FDataStreamRecord *param_2)

{
  TArray<UDataStream::EDataStreamState,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FDataStreamRecord *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FDataStreamRecord *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  
  if (((this->Records).Head == (this->Records).Tail) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Offset < Count()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                          ,0x4c,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = *(FDataStreamRecord **)
            ((this->Records).Storage.AllocatorInstance.Data +
            (ulonglong)((this->Records).IndexMask & (this->Records).Tail) * 8);
  if ((pFVar6 != param_2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Record == InRecord",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                          ,899,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UE::Net::Private::FNetExports::ProcessPacketDeliveryStatus(&this->NetExports,param_1);
  uVar2 = (this->Streams).ArrayNum;
  uVar14 = 0;
  pFVar7 = (this->Streams).AllocatorInstance.Data;
  uVar15 = 1;
  uVar3 = *(uint *)(pFVar6 + 0x50);
  uVar4 = *(uint *)(pFVar6 + 0x54);
  if (uVar2 != 0) {
    do {
      uVar13 = (uint)uVar14;
      if (((uVar4 & uVar15) != 0) && (param_1 == Lost)) {
        pTVar1 = &this->StreamState;
        if (5 < (byte)LogIris._0_1_) {
          uVar11 = 0;
          if ((int)uVar13 < (this->StreamState).ArrayNum) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        uVar16 = ~uVar13 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar13 < (this->StreamState).ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar5 = (this->StreamState).ArrayNum;
        if ((pTVar1->AllocatorInstance).Data[(int)uVar13] == (FScriptContainerElement)0x2) {
          uVar11 = 0;
          if ((int)uVar13 < iVar5) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          switch((pTVar1->AllocatorInstance).Data[(int)uVar13]) {
          case (FScriptContainerElement)0x0:
          case (FScriptContainerElement)0x2:
            if (5 < (byte)LogIris._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            }
            uVar11 = 0;
            if ((int)uVar13 < (this->StreamState).ArrayNum) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (this->StreamState).AllocatorInstance.Data[(int)uVar13] = (FScriptContainerElement)0x1;
            this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar13 & 0x1f);
            break;
          default:
            if (5 < (byte)LogIris._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            }
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<1760097754182320789>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                                ,0x295,"false");
            if (bVar10) {
code_r0x000144214606:
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        else {
          uVar11 = 0;
          if ((int)uVar13 < iVar5) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((pTVar1->AllocatorInstance).Data[(int)uVar13] == (FScriptContainerElement)0x5) {
            uVar11 = 0;
            if ((int)uVar13 < (this->StreamState).ArrayNum) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            switch((pTVar1->AllocatorInstance).Data[(int)uVar13]) {
            default:
              if (5 < (byte)LogIris._0_1_) {
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              }
              bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1760097754182320789>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                                  ,0x295,"false");
              if (bVar10) goto code_r0x000144214606;
              break;
            case (FScriptContainerElement)0x2:
            case (FScriptContainerElement)0x3:
            case (FScriptContainerElement)0x4:
            case (FScriptContainerElement)0x5:
              if (5 < (byte)LogIris._0_1_) {
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              }
              uVar11 = 0;
              if ((int)uVar13 < (this->StreamState).ArrayNum) {
                uVar11 = ~uVar13 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              (this->StreamState).AllocatorInstance.Data[(int)uVar13] = (FScriptContainerElement)0x4
              ;
              this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar13 & 0x1f);
            }
          }
        }
        this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar13 & 0x1f);
      }
      if ((uVar3 & uVar15) != 0) {
        plVar8 = *(longlong **)(pFVar7 + uVar14 * 8);
        if (plVar8 == (longlong *)0x0) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1760097754182321064>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                              ,0x3a8,"DataStream");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else {
          pcVar9 = *(code **)(*plVar8 + 0x2e8);
          uVar11 = 0;
          if ((int)uVar13 < *(int *)(pFVar6 + 0x48)) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar12 = pFVar6;
          if (*(FDataStreamRecord **)(pFVar6 + 0x40) != (FDataStreamRecord *)0x0) {
            pFVar12 = *(FDataStreamRecord **)(pFVar6 + 0x40);
          }
          (*pcVar9)(plVar8,param_1,*(undefined8 *)(pFVar12 + (longlong)(int)uVar13 * 8));
        }
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar15 = uVar15 * 2;
    } while (uVar13 + 1 != uVar2);
  }
  uVar2 = (this->Records).Tail;
  if ((this->Records).Head == uVar2) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_1638566698149740322>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                        ,0xde,"Count() > 0");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    (this->Records).Tail = uVar2 + 1;
  }
  return;
}

// ReadData @ 144214fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataStreamManager::FImpl::ReadData(FImpl *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  this_00 = param_1->BitStreamReader;
  uVar6 = UE::Net::FNetBitStreamReader::ReadBits(this_00,5);
  uVar6 = uVar6 + 1;
  uVar7 = UE::Net::FNetBitStreamReader::ReadBits(this_00,uVar6);
  uVar13 = 1;
  uVar10 = 1;
  uVar8 = UE::Net::FNetBitStreamReader::ReadBits(this_00,1);
  uVar11 = 0;
  uVar9 = 0;
  if ((uVar8 & 1) != 0) {
    uVar9 = UE::Net::FNetBitStreamReader::ReadBits(this_00,uVar6);
  }
  if (((param_1->ErrorContext).Error == (FName)0x0) &&
     (bVar5 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(param_1),
     FVar4 = UE::Net::GNetError_BitStreamError, !bVar5)) {
    if (((uint)(this->Streams).ArrayNum < uVar6) || ((uVar7 == 0 && ((uVar8 & 1) == 0)))) {
      UE::Net::FNetSerializationContext::SetBitStreamOverflow(param_1);
      UE::Net::FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
    }
    else {
      pFVar1 = (this->Streams).AllocatorInstance.Data;
      if (((uVar8 & 1) != 0) && (uVar12 = uVar11, uVar6 != 0)) {
        do {
          if ((uVar9 & uVar10) != 0) {
            uVar8 = UE::Net::FNetBitStreamReader::ReadBits(this_00,4);
            if ((param_1->ErrorContext).Error != (FName)0x0) {
              return;
            }
            bVar5 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(param_1);
            if (bVar5) {
              return;
            }
            if (5 < (byte)LogIris._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            }
            HandleReceivedStreamState(this,param_1,(uint)uVar12,(EDataStreamState)uVar8);
          }
          uVar8 = (uint)uVar12 + 1;
          uVar12 = (ulonglong)uVar8;
          uVar10 = uVar10 * 2;
        } while (uVar8 != uVar6);
      }
      if (uVar6 != 0) {
        do {
          if ((uVar7 & uVar13) != 0) {
            plVar2 = *(longlong **)(pFVar1 + uVar11 * 8);
            if (plVar2 == (longlong *)0x0) {
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<1760097754182321011>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                                 ,0x373,"DataStream");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              (**(code **)(*plVar2 + 0x2e0))();
            }
            if ((param_1->ErrorContext).Error != (FName)0x0) {
              return;
            }
            bVar5 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(param_1);
            if (bVar5) {
              return;
            }
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar13 = uVar13 * 2;
        } while (uVar10 != uVar6);
      }
    }
  }
  return;
}

// SetSendStatus @ 14421b600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDataStreamManager::FImpl::SetSendStatus(FImpl *this,FName param_1,EDataStreamSendStatus param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FName local_res10;
  FString local_18;
  
  pFVar1 = (this->Streams).AllocatorInstance.Data;
  pFVar6 = pFVar1;
  do {
    local_res10 = param_1;
    if (pFVar6 == pFVar1 + (longlong)(this->Streams).ArrayNum * 8) {
LAB_14421b64b:
      if (3 < (byte)LogIris._0_1_) {
        ::FName::GetPlainNameString(&local_res10,&local_18);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    if ((*(longlong *)pFVar6 != 0) &&
       (param_1.ComparisonIndex.Value.Value == *(uint *)(*(longlong *)pFVar6 + 0x18))) {
      uVar5 = (uint)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
      if (uVar5 != 0xffffffff) {
        uVar4 = 0;
        if ((int)uVar5 < (this->StreamSendStatus).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->StreamSendStatus).AllocatorInstance.Data[(int)uVar5] =
             (FScriptContainerElement)param_2;
        return;
      }
      goto LAB_14421b64b;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// SetStreamState @ 14421b880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDataStreamManager::FImpl::SetStreamState(FImpl *this,uint param_1,EDataStreamState param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1 < (this->StreamState).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
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
  switch((this->StreamState).AllocatorInstance.Data[(int)param_1]) {
  case (FScriptContainerElement)0x0:
    if (param_2 < WaitOnCreateConfirmation) {
LAB_14421b97c:
      if (5 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      uVar3 = 0;
      if ((int)param_1 < (this->StreamState).ArrayNum) {
        uVar3 = ~param_1 >> 0x1f;
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
      (this->StreamState).AllocatorInstance.Data[(int)param_1] = (FScriptContainerElement)param_2;
      this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (param_1 & 0x1f);
      return;
    }
    break;
  case (FScriptContainerElement)0x1:
    if ((param_2 & ~WaitOnCreateConfirmation) == Invalid) goto LAB_14421b97c;
    break;
  case (FScriptContainerElement)0x2:
    if ((param_2 != WaitOnCreateConfirmation) && (param_2 < WaitOnCloseConfirmation))
    goto LAB_14421b97c;
    break;
  case (FScriptContainerElement)0x3:
    if (param_2 == PendingClose) goto LAB_14421b97c;
    goto LAB_14421b936;
  case (FScriptContainerElement)0x4:
    if ((byte)(param_2 - PendingClose) < 2) goto LAB_14421b97c;
LAB_14421b936:
    if (param_2 == Open) {
      return;
    }
    break;
  case (FScriptContainerElement)0x5:
    if (((param_2 & ~WaitOnCloseConfirmation) == Invalid) && (param_2 != PendingCreate))
    goto LAB_14421b97c;
  }
  if (5 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1760097754182320789>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                     ,0x295,"false");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Update @ 14421c5b0

void __thiscall UDataStreamManager::FImpl::Update(FImpl *this,FUpdateParameters *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Streams).AllocatorInstance.Data;
  iVar2 = (this->Streams).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Streams).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataStream>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
      (**(code **)(*plVar3 + 0x2c0))(plVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// WriteData @ 14421cd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EWriteResult __thiscall
UDataStreamManager::FImpl::WriteData
          (FImpl *this,FNetSerializationContext *param_1,FDataStreamRecord **param_2)

{
  TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_> *this_00
  ;
  FScriptContainerElement FVar1;
  FNetRefHandle_u_0 FVar2;
  TArray<FDataStreamRecord_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  ForElementType<FDataStreamRecord_const_*> FVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FNetRefHandle_u_0 FVar12;
  FNetRefHandle_u_0 FVar13;
  FNetRefHandle_u_0 FVar14;
  FNetRefHandle_u_0 *pFVar15;
  EDataStreamState EVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  EWriteResult EVar21;
  EWriteResult EVar22;
  FNetRefHandle_u_0 *pFVar23;
  FNetSerializationContext *pFVar24;
  FScriptContainerElement *pFVar25;
  ulong64 uVar26;
  ulonglong uVar27;
  uint uVar28;
  size_t _Size;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  FNetSerializationContext *pFVar33;
  uint uVar34;
  undefined1 auStackY_978 [32];
  char local_938 [4];
  uint local_934;
  uint local_930;
  FScriptContainerElement *local_928;
  FNetSerializationContext *local_920;
  longlong local_918;
  FNetBitStreamWriter local_910;
  EWriteResult local_8f0;
  uint local_8ec;
  longlong *local_8e8;
  FScriptContainerElement *local_8e0;
  ForAnyElementType local_8d8;
  int local_8d0;
  int local_8cc;
  FNetBitStreamWriter local_8c8;
  ForElementType<FDataStreamRecord_const_*> local_8a8;
  longlong **local_8a0;
  FName local_898;
  FDataStreamRecord **local_890;
  FExportScope local_888;
  FString local_868;
  TArray<FDataStreamRecord_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_858;
  uint local_808;
  uint local_804;
  FBatchExports local_800;
  FNetRefHandle_u_0 local_3b8;
  FName FStack_3b0;
  undefined8 local_a0;
  FNetBitStreamWriter *local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_978;
  uVar19 = (this->Streams).ArrayNum;
  if (0 < (int)uVar19) {
    local_934 = uVar19;
    local_920 = param_1;
    local_890 = param_2;
    if ((ulonglong)((this->Records).Head - (this->Records).Tail) !=
        (longlong)(this->Records).Storage.ArrayNum) {
      UE::Net::Private::FNetExports::InitExportRecordForPacket(&this->NetExports);
      uVar27 = 0;
      local_800.HandlesExportedInCurrentBatch.ArrayMax = 0x20;
      local_888.ExportContext.AcknowledgedExports = &(this->NetExports).AcknowledgedExports;
      local_800.HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Net::FNetRefHandle>)0x0;
      local_888.ExportContext.BatchExports = &local_800;
      uVar34 = 0;
      local_800.HandlesExportedInCurrentBatch.ArrayNum = 0;
      local_888.OldExportContext = param_1->ExportContext;
      param_1->ExportContext = &local_888.ExportContext;
      local_800.NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Net::FNetToken>)0x0;
      local_800.NetTokensExportedInCurrentBatch.ArrayNum = 0;
      local_800.NetTokensExportedInCurrentBatch.ArrayMax = 0x20;
      local_800.ReferencesPendingExportInCurrentBatch.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Net::FNetObjectReference>)0x0;
      local_800.ReferencesPendingExportInCurrentBatch.ArrayNum = 0;
      local_800.ReferencesPendingExportInCurrentBatch.ArrayMax = 0x20;
      local_800.NetTokensPendingExportInCurrentBatch.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Net::FNetToken>)0x0;
      local_800.NetTokensPendingExportInCurrentBatch.ArrayNum = 0;
      local_800.NetTokensPendingExportInCurrentBatch.ArrayMax = 0x20;
      local_858.AllocatorInstance.SecondaryData = (ForElementType<FDataStreamRecord_const_*>)0x0;
      local_858.ArrayNum = 0;
      local_858.ArrayMax = 8;
      local_888.Context = param_1;
      TArray<FDataStreamRecord_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
      SetNumZeroed(&local_858,uVar19,Default);
      local_8a8 = (ForElementType<FDataStreamRecord_const_*>)&local_858;
      if (local_858.AllocatorInstance.SecondaryData !=
          (ForElementType<FDataStreamRecord_const_*>)0x0) {
        local_8a8 = local_858.AllocatorInstance.SecondaryData;
      }
      UE::Net::FNetBitStreamWriter::CreateSubstream(param_1->BitStreamWriter,&local_910,0xffffffff);
      UE::Net::FNetBitStreamWriter::WriteBits(&local_910,0,5);
      UE::Net::FNetBitStreamWriter::WriteBits(&local_910,0,uVar19);
      uVar31 = this->DirtyStreamsMask;
      local_938[0] = uVar31 != 0;
      local_930 = 1;
      local_8ec = uVar31;
      UE::Net::FNetBitStreamWriter::WriteBits(&local_910,(uint)(byte)local_938[0],1);
      if (local_938[0] != '\0') {
        UE::Net::FNetBitStreamWriter::WriteBits(&local_910,this->DirtyStreamsMask,uVar19);
      }
      local_8e0 = (this->Streams).AllocatorInstance.Data;
      local_928 = (this->StreamSendStatus).AllocatorInstance.Data;
      EVar21 = (EWriteResult)(uVar31 != 0);
      local_8f0 = (EWriteResult)(uVar31 != 0);
      uVar19 = 0;
      if (uVar31 != 0) {
        local_8d0 = (this->StreamState).ArrayNum;
        _Size = (size_t)local_8d0;
        pFVar25 = (this->StreamState).AllocatorInstance.Data;
        local_8d8.Data = (FScriptContainerElement *)0x0;
        if (local_8d0 == 0) {
          local_8cc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_8d0,0,&local_8d8,local_8d0,&local_8cc);
          memcpy(local_8d8.Data,pFVar25,_Size);
        }
        uVar31 = 1;
        uVar32 = uVar27;
        uVar20 = local_934;
        do {
          uVar30 = (uint)uVar32;
          if ((this->DirtyStreamsMask & uVar31) != 0) {
            EVar16 = GetStreamState(this,uVar30);
            UE::Net::FNetBitStreamWriter::WriteBits(&local_910,(uint)EVar16,4);
            if (5 < (byte)LogIris._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            }
            if (EVar16 == PendingCreate) {
              uVar20 = uVar19;
              if ((int)uVar30 < (this->StreamState).ArrayNum) {
                uVar20 = ~uVar30 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar4 = (code *)swi(3);
                EVar21 = (*pcVar4)();
                return EVar21;
              }
              switch((this->StreamState).AllocatorInstance.Data[(int)uVar30]) {
              default:
                if (5 < (byte)LogIris._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                }
                bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<1760097754182320789>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                                    ,0x295,"false");
                uVar20 = local_934;
                if (bVar17) {
code_r0x00014421d3d0:
                  pcVar4 = (code *)swi(3);
                  EVar21 = (*pcVar4)();
                  return EVar21;
                }
                break;
              case (FScriptContainerElement)0x1:
                if (5 < (byte)LogIris._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                }
                uVar20 = uVar19;
                if ((int)uVar30 < (this->StreamState).ArrayNum) {
                  uVar20 = ~uVar30 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar4 = (code *)swi(3);
                  EVar21 = (*pcVar4)();
                  return EVar21;
                }
                (this->StreamState).AllocatorInstance.Data[(int)uVar30] =
                     (FScriptContainerElement)0x2;
LAB_14421d1a2:
                this->DirtyStreamsMask = this->DirtyStreamsMask | 1 << (uVar30 & 0x1f);
                uVar20 = local_934;
              }
            }
            else {
              uVar20 = local_934;
              if (EVar16 == PendingClose) {
                uVar28 = ~uVar30 >> 0x1f;
                uVar20 = uVar34;
                if ((int)uVar30 < (this->Streams).ArrayNum) {
                  uVar20 = uVar28;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar4 = (code *)swi(3);
                  EVar21 = (*pcVar4)();
                  return EVar21;
                }
                lVar29 = (longlong)(int)uVar30;
                cVar18 = (**(code **)(**(longlong **)
                                        ((this->Streams).AllocatorInstance.Data + lVar29 * 8) +
                                     0x2f0))();
                uVar20 = local_934;
                if (cVar18 != '\0') {
                  uVar20 = uVar34;
                  if ((int)uVar30 < (this->StreamState).ArrayNum) {
                    uVar20 = uVar28;
                  }
                  if ((uVar20 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    EVar21 = (*pcVar4)();
                    return EVar21;
                  }
                  switch((this->StreamState).AllocatorInstance.Data[lVar29]) {
                  default:
                    if (5 < (byte)LogIris._0_1_) {
                      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                    }
                    bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<1760097754182320789>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                                        ,0x295,"false");
                    uVar20 = local_934;
                    if (bVar17) goto code_r0x00014421d3d0;
                    break;
                  case (FScriptContainerElement)0x4:
                  case (FScriptContainerElement)0x5:
                    if (5 < (byte)LogIris._0_1_) {
                      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                    }
                    uVar20 = uVar34;
                    if ((int)uVar30 < (this->StreamState).ArrayNum) {
                      uVar20 = uVar28;
                    }
                    if ((uVar20 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar4 = (code *)swi(3);
                      EVar21 = (*pcVar4)();
                      return EVar21;
                    }
                    (this->StreamState).AllocatorInstance.Data[lVar29] =
                         (FScriptContainerElement)0x5;
                    goto LAB_14421d1a2;
                  }
                }
              }
            }
          }
          EVar21 = local_8f0;
          uVar32 = (ulonglong)(uVar30 + 1);
          uVar31 = uVar31 * 2;
        } while (uVar30 + 1 != uVar20);
        param_1 = local_920;
        if (local_8d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8d8.Data);
          param_1 = local_920;
        }
      }
      uVar34 = 1;
      pFVar25 = local_928;
      uVar32 = uVar27;
      if (local_910.OverflowBitCount == 0) {
        do {
          uVar20 = (uint)uVar32;
          uVar31 = (uint)uVar27;
          local_8e8 = *(longlong **)(local_8e0 + uVar27 * 8);
          if (pFVar25[uVar27] != (FScriptContainerElement)0x0) {
            uVar30 = uVar19;
            if ((int)uVar31 < (this->StreamState).ArrayNum) {
              uVar30 = ~uVar31 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar4 = (code *)swi(3);
              EVar21 = (*pcVar4)();
              return EVar21;
            }
            FVar1 = (this->StreamState).AllocatorInstance.Data[(int)uVar31];
            if ((FVar1 == (FScriptContainerElement)0x3) ||
               (pFVar25 = local_928, FVar1 == (FScriptContainerElement)0x4)) {
              UE::Net::FNetBitStreamWriter::CreateSubstream(&local_910,&local_8c8,0xffffffff);
              lVar29 = 6;
              pFVar15 = &local_3b8;
              pFVar33 = local_920;
              do {
                pFVar24 = pFVar33;
                pFVar23 = pFVar15;
                FVar2 = *(FNetRefHandle_u_0 *)&(pFVar24->ErrorContext).Error;
                FVar12 = (FNetRefHandle_u_0)(pFVar24->ReadJournal).Entries[0].Name;
                FVar13 = (pFVar24->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
                pFVar33 = (FNetSerializationContext *)&(pFVar24->ReadJournal).Entries[4].BitOffset;
                *pFVar23 = (pFVar24->ErrorContext).ObjectHandle.field0_0x0;
                pFVar23[1] = FVar2;
                FVar2 = *(FNetRefHandle_u_0 *)&(pFVar24->ReadJournal).Entries[0].BitOffset;
                FVar14 = (FNetRefHandle_u_0)(pFVar24->ReadJournal).Entries[1].Name;
                pFVar23[2] = FVar12;
                pFVar23[3] = FVar13;
                FVar12 = (pFVar24->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
                FVar13 = *(FNetRefHandle_u_0 *)&(pFVar24->ReadJournal).Entries[1].BitOffset;
                pFVar23[4] = FVar2;
                pFVar23[5] = FVar14;
                FVar2 = (FNetRefHandle_u_0)(pFVar24->ReadJournal).Entries[2].Name;
                FVar14 = (pFVar24->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
                pFVar23[6] = FVar12;
                pFVar23[7] = FVar13;
                FVar12 = *(FNetRefHandle_u_0 *)&(pFVar24->ReadJournal).Entries[2].BitOffset;
                FVar13 = (FNetRefHandle_u_0)(pFVar24->ReadJournal).Entries[3].Name;
                pFVar23[8] = FVar2;
                pFVar23[9] = FVar14;
                FVar2 = (pFVar24->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
                FVar14 = *(FNetRefHandle_u_0 *)&(pFVar24->ReadJournal).Entries[3].BitOffset;
                pFVar23[10] = FVar12;
                pFVar23[0xb] = FVar13;
                FVar12 = (FNetRefHandle_u_0)(pFVar24->ReadJournal).Entries[4].Name;
                FVar13 = (pFVar24->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
                pFVar23[0xc] = FVar2;
                pFVar23[0xd] = FVar14;
                pFVar23[0xe] = FVar12;
                pFVar23[0xf] = FVar13;
                lVar29 = lVar29 + -1;
                pFVar15 = pFVar23 + 0x10;
              } while (lVar29 != 0);
              FVar2 = (FNetRefHandle_u_0)(pFVar24->ReadJournal).Entries[5].Name;
              local_918 = 0;
              FVar12 = (pFVar24->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
              FVar13 = *(FNetRefHandle_u_0 *)&(pFVar24->ReadJournal).Entries[5].BitOffset;
              pFVar23[0x10] = *(FNetRefHandle_u_0 *)pFVar33;
              pFVar23[0x11] = FVar2;
              FVar2 = (FNetRefHandle_u_0)(pFVar24->ReadJournal).Entries[6].Name;
              FVar14 = (pFVar24->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
              pFVar23[0x12] = FVar12;
              pFVar23[0x13] = FVar13;
              FVar12 = *(FNetRefHandle_u_0 *)&(pFVar24->ReadJournal).Entries[6].BitOffset;
              FVar13 = (FNetRefHandle_u_0)(pFVar24->ReadJournal).Entries[7].Name;
              pFVar23[0x14] = FVar2;
              pFVar23[0x15] = FVar14;
              uVar5 = *(undefined4 *)&(pFVar24->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
              uVar6 = *(undefined4 *)
                       ((longlong)&(pFVar24->ReadJournal).Entries[7].NetRefHandle.field0_0x0 + 4);
              uVar34 = (pFVar24->ReadJournal).Entries[7].BitOffset;
              uVar7 = *(undefined4 *)&(pFVar24->ReadJournal).Entries[7].field_0x14;
              pFVar23[0x16] = FVar12;
              pFVar23[0x17] = FVar13;
              uVar8 = *(undefined4 *)&(pFVar24->ReadJournal).Entries[8].Name;
              uVar9 = *(undefined4 *)((longlong)&(pFVar24->ReadJournal).Entries[8].Name + 4);
              uVar10 = *(undefined4 *)&(pFVar24->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
              uVar11 = *(undefined4 *)
                        ((longlong)&(pFVar24->ReadJournal).Entries[8].NetRefHandle.field0_0x0 + 4);
              FVar2 = *(FNetRefHandle_u_0 *)&(pFVar24->ReadJournal).Entries[8].BitOffset;
              *(undefined4 *)(pFVar23 + 0x18) = uVar5;
              *(undefined4 *)((longlong)pFVar23 + 0xc4) = uVar6;
              *(uint *)(pFVar23 + 0x19) = uVar34;
              *(undefined4 *)((longlong)pFVar23 + 0xcc) = uVar7;
              *(undefined4 *)(pFVar23 + 0x1a) = uVar8;
              *(undefined4 *)((longlong)pFVar23 + 0xd4) = uVar9;
              *(undefined4 *)(pFVar23 + 0x1b) = uVar10;
              *(undefined4 *)((longlong)pFVar23 + 0xdc) = uVar11;
              pFVar23[0x1c] = FVar2;
              local_98 = &local_8c8;
              local_a0 = 0;
              EVar22 = (**(code **)(*local_8e8 + 0x2d0))(local_8e8,&local_3b8,&local_918);
              if ((EVar22 == NoData) || (FStack_3b0 != (FName)0x0)) {
                if (local_918 != 0) {
                  local_898 = *(FName *)(local_8e8 + 3);
                  ::FName::GetPlainNameString(&local_898,&local_868);
                  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SubRecord == nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\DataStream\\DataStreamManager.cpp"
                                      ,0x1cc,
                                      L"DataStream \'%s\' provided a record despite errors or returning NoData."
                                     );
                  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_868.Data.AllocatorInstance.Data);
                  }
                  if (bVar17) {
                    pcVar4 = (code *)swi(3);
                    EVar21 = (*pcVar4)();
                    return EVar21;
                  }
                }
                UE::Net::FNetBitStreamWriter::DiscardSubstream(&local_910,&local_8c8);
                pFVar33 = local_920;
                if (FStack_3b0 != (FName)0x0) {
                  UE::Net::FNetErrorContext::SetError(&local_920->ErrorContext,FStack_3b0);
                  UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter(&local_8c8);
                  break;
                }
              }
              else {
                if (local_8c8.BufferBitPosition == local_8c8.BufferBitStartOffset) {
                  if (local_918 != 0) {
                    local_8a0 = &local_8e8;
                    `UDataStreamManager::FImpl::WriteData'::__l78::<lambda_2>::operator()
                              (&local_8a0);
                  }
                }
                else {
                  uVar32 = (ulonglong)(uVar20 | local_930);
                  *(longlong *)(uVar27 * 8 + (longlong)local_8a8) = local_918;
                }
                UE::Net::FNetBitStreamWriter::CommitSubstream(&local_910,&local_8c8);
                if ((EVar21 == HasMoreData) || (EVar21 = EVar22, EVar22 == HasMoreData)) {
                  EVar21 = HasMoreData;
                }
              }
              UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter(&local_8c8);
              pFVar25 = local_928;
              uVar34 = local_930;
            }
          }
          uVar20 = (uint)uVar32;
          uVar34 = uVar34 * 2;
          uVar27 = (ulonglong)(uVar31 + 1);
          pFVar33 = local_920;
          local_930 = uVar34;
        } while (uVar31 + 1 != local_934);
        uVar19 = local_934;
        if ((uVar20 == 0) && (local_8ec == 0)) {
          UE::Net::FNetBitStreamWriter::DiscardSubstream(pFVar33->BitStreamWriter,&local_910);
          EVar21 = NoData;
        }
        else {
          UE::Net::FNetBitStreamWriter::Seek(&local_910,0);
          UE::Net::FNetBitStreamWriter::WriteBits(&local_910,uVar19 - 1,5);
          UE::Net::FNetBitStreamWriter::WriteBits(&local_910,uVar20,uVar19);
          UE::Net::FNetBitStreamWriter::Seek
                    (&local_910,local_910.BufferBitPosition - local_910.BufferBitStartOffset);
          UE::Net::FNetBitStreamWriter::CommitSubstream(pFVar33->BitStreamWriter,&local_910);
          local_804 = this->DirtyStreamsMask;
          this_00 = &this->Records;
          this->DirtyStreamsMask = 0;
          uVar26 = (ulonglong)(this_00->Head - (this->Records).Tail) + 1;
          local_808 = uVar20;
          if ((ulonglong)(longlong)(this->Records).Storage.ArrayNum < uVar26) {
            TResizableCircularQueue<UDataStreamManager::FImpl::FRecord_*,TSizedDefaultAllocator<32>_>
            ::SetCapacity(this_00,uVar26);
          }
          uVar27 = (ulonglong)((this->Records).IndexMask & this_00->Head);
          this_00->Head = this_00->Head + 1;
          pFVar25 = (this->Records).Storage.AllocatorInstance.Data;
          _Dst = *(TArray<FDataStreamRecord_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   **)(pFVar25 + uVar27 * 8);
          if (_Dst != &local_858) {
            if (local_858.AllocatorInstance.SecondaryData ==
                (ForElementType<FDataStreamRecord_const_*>)0x0) {
              memmove(_Dst,&local_858,0x40);
            }
            FVar3 = (_Dst->AllocatorInstance).SecondaryData;
            if (FVar3 != (ForElementType<FDataStreamRecord_const_*>)0x0) {
              FMemory::Free((void *)FVar3);
            }
            (_Dst->AllocatorInstance).SecondaryData = local_858.AllocatorInstance.SecondaryData;
            local_858.AllocatorInstance.SecondaryData =
                 (ForElementType<FDataStreamRecord_const_*>)0x0;
            _Dst->ArrayNum = local_858.ArrayNum;
            _Dst->ArrayMax = local_858.ArrayMax;
            local_858.ArrayNum = 0;
            local_858.ArrayMax = 8;
          }
          *(uint *)_Dst[1].AllocatorInstance.InlineData = local_808;
          *(uint *)(_Dst[1].AllocatorInstance.InlineData + 4) = local_804;
          *local_890 = *(FDataStreamRecord **)(pFVar25 + uVar27 * 8);
          UE::Net::Private::FNetExports::CommitExportsToRecord(&this->NetExports,&local_888);
          UE::Net::Private::FNetExports::PushExportRecordForPacket(&this->NetExports);
        }
      }
      else {
        UE::Net::FNetBitStreamWriter::DiscardSubstream(param_1->BitStreamWriter,&local_910);
        EVar21 = NoData;
      }
      UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter(&local_910);
      if (local_858.AllocatorInstance.SecondaryData !=
          (ForElementType<FDataStreamRecord_const_*>)0x0) {
        FMemory::Free((void *)local_858.AllocatorInstance.SecondaryData);
      }
      (local_888.Context)->ExportContext = local_888.OldExportContext;
      if (local_800.NetTokensPendingExportInCurrentBatch.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)local_800.NetTokensPendingExportInCurrentBatch.AllocatorInstance.
                              SecondaryData);
      }
      if (local_800.ReferencesPendingExportInCurrentBatch.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetObjectReference>)0x0) {
        FMemory::Free((void *)local_800.ReferencesPendingExportInCurrentBatch.AllocatorInstance.
                              SecondaryData);
      }
      if (local_800.NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)local_800.NetTokensExportedInCurrentBatch.AllocatorInstance.
                              SecondaryData);
      }
      if (local_800.HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData ==
          (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        return EVar21;
      }
      FMemory::Free((void *)local_800.HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData)
      ;
      return EVar21;
    }
    `UDataStreamManager::FImpl::WriteData'::__l8::<lambda_1>::operator()(local_938);
  }
  return NoData;
}

// operator() @ 1504b27e0

bool __thiscall `UDataStreamManager::FImpl::InitStream'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1760097754182321308>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1760097754182321308>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b2847;
    }
  }
  bVar2 = false;
LAB_1504b2847:
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

// operator() @ 1504b2b30

bool __thiscall `UDataStreamManager::FImpl::WriteData'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1760097754182320486>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1760097754182320486>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b2c70

bool __thiscall `UDataStreamManager::FImpl::WriteData'::__l78::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1760097754182320610>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::GetPlainNameString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1760097754182320610>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b2ce8;
    }
  }
  bVar2 = false;
LAB_1504b2ce8:
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

