// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// FMetaSoundParameterTransmitter @ 14af3ceb0

FMetaSoundParameterTransmitter * __thiscall
Metasound::FMetaSoundParameterTransmitter::FMetaSoundParameterTransmitter
          (FMetaSoundParameterTransmitter *this,FInitParams *param_1)

{
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (param_1->DefaultParams).AllocatorInstance.Data;
  (param_1->DefaultParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->DefaultParams).ArrayNum;
  local_18.ArrayMax = (param_1->DefaultParams).ArrayMax;
  (param_1->DefaultParams).ArrayNum = 0;
  (param_1->DefaultParams).ArrayMax = 0;
  Audio::FParameterTransmitterBase::FParameterTransmitterBase
            ((FParameterTransmitterBase *)this,&local_18);
  this->_padding_ = (longlong)&___7FMetaSoundParameterTransmitter_Metasound__6B_;
  this->InstanceID = param_1->InstanceID;
  this->DebugMetaSoundName = param_1->DebugMetaSoundName;
  (this->AvailableParameterNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableParameterNames).AllocatorInstance.Data =
       (param_1->ValidParameterNames).AllocatorInstance.Data;
  (param_1->ValidParameterNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableParameterNames).ArrayNum = (param_1->ValidParameterNames).ArrayNum;
  (this->AvailableParameterNames).ArrayMax = (param_1->ValidParameterNames).ArrayMax;
  (param_1->ValidParameterNames).ArrayNum = 0;
  (param_1->ValidParameterNames).ArrayMax = 0;
  (this->DataChannel).Object = (param_1->DataChannel).Object;
  (this->DataChannel).SharedReferenceCount.ReferenceController =
       (param_1->DataChannel).SharedReferenceCount.ReferenceController;
  (param_1->DataChannel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->DataChannel).Object =
       (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)0x0;
  return this;
}

// ~FMetaSoundParameterTransmitter @ 14af42d10

void __thiscall
Metasound::FMetaSoundParameterTransmitter::~FMetaSoundParameterTransmitter
          (FMetaSoundParameterTransmitter *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataChannel).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->AvailableParameterNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FParameterTransmitterBase::~FParameterTransmitterBase((FParameterTransmitterBase *)this);
  return;
}

// AddAvailableParameter @ 14af4f710

void __thiscall
Metasound::FMetaSoundParameterTransmitter::AddAvailableParameter
          (FMetaSoundParameterTransmitter *this,FName param_1)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName local_res10 [3];
  
  pFVar2 = (FName *)(this->AvailableParameterNames).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= local_res10) && (local_res10 < pFVar2 + (this->AvailableParameterNames).ArrayMax))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AvailableParameterNames).ArrayNum;
  piVar1 = &(this->AvailableParameterNames).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->AvailableParameterNames).AllocatorInstance,piVar1);
  }
  (this->AvailableParameterNames).ArrayNum = iVar5 + 1;
  *(FName *)((this->AvailableParameterNames).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}

// CreateSendAddressFromEnvironment @ 14af76920

FSendAddress * __cdecl
Metasound::FMetaSoundParameterTransmitter::CreateSendAddressFromEnvironment
          (FSendAddress *__return_storage_ptr__,FMetasoundEnvironment *param_1,FName *param_2,
          FName *param_3)

{
  IMetasoundEnvironmentVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar4;
  FSendAddress *pFVar5;
  void *pvVar6;
  void *pvVar7;
  IMetasoundEnvironmentVariable IVar8;
  FName local_res8;
  FName local_res10;
  
  IVar8 = (IMetasoundEnvironmentVariable)0xffffffffffffffff;
  FLazyName::Resolve(&CoreInterface::Environment::InstanceID);
  pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&param_1->Variables,local_res10);
  if (pTVar4 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&param_1->Variables,local_res10);
    if (pTVar4 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSendAddress *)(*pcVar2)();
        return pFVar5;
      }
    }
    pIVar1 = pTVar4->Ptr;
    pvVar6 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    if (pvVar6 == pvVar7) {
      FLazyName::Resolve(&CoreInterface::Environment::InstanceID);
      pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
               ::Find(&param_1->Variables,local_res8);
      if (pTVar4 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                     *)0x0) {
        pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                 ::Find(&param_1->Variables,local_res8);
        if (pTVar4 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                       *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x148,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FSendAddress *)(*pcVar2)();
            return pFVar5;
          }
        }
        pIVar1 = pTVar4->Ptr;
        pvVar6 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
        pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
        if (pvVar6 == pvVar7) {
          pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                   ::Find(&param_1->Variables,local_res8);
          if (pTVar4 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                         *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x148,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FSendAddress *)(*pcVar2)();
              return pFVar5;
            }
          }
          pIVar1 = pTVar4->Ptr;
          pvVar6 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
          pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
          if (pvVar6 != pvVar7) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsEnvironmentVariableOfType<Type>(InVar)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                               ,0xaa,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FSendAddress *)(*pcVar2)();
              return pFVar5;
            }
          }
          IVar8 = pIVar1[2];
          goto LAB_14af76b2a;
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1845334588512010475>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                         ,0xeb,"Contains<VarType>(InVariableName)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSendAddress *)(*pcVar2)();
        return pFVar5;
      }
      IVar8 = (IMetasoundEnvironmentVariable)0x0;
      goto LAB_14af76b2a;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5765192931371647206>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundParameterTransmitter.cpp"
                     ,0xe6,"InEnvironment.Contains<uint64>(CoreInterface::Environment::InstanceID)")
  ;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FSendAddress *)(*pcVar2)();
    return pFVar5;
  }
LAB_14af76b2a:
  __return_storage_ptr__->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  __return_storage_ptr__->ChannelName = *param_2;
  __return_storage_ptr__->DataType = *param_3;
  __return_storage_ptr__->InstanceID = (ulong64)IVar8;
  return __return_storage_ptr__;
}

// CreateSendAddressFromInstanceID @ 14af76bb0

FSendAddress * __cdecl
Metasound::FMetaSoundParameterTransmitter::CreateSendAddressFromInstanceID
          (FSendAddress *__return_storage_ptr__,ulong64 param_1,FName *param_2,FName *param_3)

{
  __return_storage_ptr__->InstanceID = param_1;
  __return_storage_ptr__->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  __return_storage_ptr__->ChannelName = *param_2;
  __return_storage_ptr__->DataType = *param_3;
  return __return_storage_ptr__;
}

// RemoveAvailableParameter @ 14afb5160

void __thiscall
Metasound::FMetaSoundParameterTransmitter::RemoveAvailableParameter
          (FMetaSoundParameterTransmitter *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FName local_res10;
  
  pFVar2 = (FName *)(this->AvailableParameterNames).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar2 <= &local_res10) &&
      (&local_res10 < pFVar2 + (this->AvailableParameterNames).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->AvailableParameterNames).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (FName *)(this->AvailableParameterNames).AllocatorInstance.Data;
    bVar4 = *pFVar2 != local_res10;
    lVar6 = 0;
    FVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (pFVar2[lVar6] != FVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + iVar9,pFVar2 + iVar7,(longlong)(iVar8 - iVar7) << 3);
          FVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->AvailableParameterNames).ArrayNum = iVar9;
  }
  return;
}

// SetParameterWithLiteral @ 14afbdba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::FMetaSoundParameterTransmitter::SetParameterWithLiteral
          (FMetaSoundParameterTransmitter *this,FName param_1,FLiteral *param_2)

{
  TTypeCompatibleBytes<Metasound::FMetaSoundParameterTransmitter::FParameter> *pTVar1;
  FName *pFVar2;
  TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *pTVar3;
  ulong64 uVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  undefined1 uVar8;
  FString *pFVar9;
  atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*> aVar10;
  wchar_t *pwVar11;
  FName *pFVar12;
  FName local_res10 [2];
  undefined1 auStack_a8 [32];
  ulong64 local_88;
  FScriptContainerElement *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FName local_48;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar12 = (FName *)(this->AvailableParameterNames).AllocatorInstance.Data;
  pFVar2 = pFVar12 + (this->AvailableParameterNames).ArrayNum;
  while( true ) {
    local_res10[0] = param_1;
    if (pFVar12 == pFVar2) {
      if ((MetaSoundParameterEnableWarningOnIgnoredParameterCVar != 0) &&
         (2 < (byte)LogMetaSound._0_1_)) {
        pFVar9 = ::LexToString(&local_58,param_2);
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        uVar4 = this->InstanceID;
        ::FName::ToString(&this->DebugMetaSoundName,&local_68);
        ::FName::ToString(local_res10,&local_78);
        local_88 = uVar4;
        local_80 = (FScriptContainerElement *)pwVar11;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      return false;
    }
    if (*pFVar12 == param_1) break;
    pFVar12 = pFVar12 + 1;
  }
  pTVar3 = (this->DataChannel).Object;
  if (pTVar3 != (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)0x0) {
    local_48 = param_1;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&param_2->Value);
    aVar10 = (atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*>
              )pTVar3->First;
    if (aVar10 == (atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*>
                   )pTVar3->TailCopy) {
      aVar10 = (atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*>
                )pTVar3->First;
      pTVar3->TailCopy = (FNode *)pTVar3->Tail;
      if (aVar10 == pTVar3->Tail) {
        aVar10 = (atomic<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::FNode_*>
                  )FMemory::Malloc(0x28,8);
        pTVar1 = (TTypeCompatibleBytes<Metasound::FMetaSoundParameterTransmitter::FParameter> *)
                 ((longlong)aVar10 + 8);
        pTVar1->Pad[0] = '\0';
        pTVar1->Pad[1] = '\0';
        pTVar1->Pad[2] = '\0';
        pTVar1->Pad[3] = '\0';
        pTVar1->Pad[4] = '\0';
        pTVar1->Pad[5] = '\0';
        pTVar1->Pad[6] = '\0';
        pTVar1->Pad[7] = '\0';
        puVar6 = (uchar *)((longlong)aVar10 + 0x10);
        puVar6[0] = '\0';
        puVar6[1] = '\0';
        puVar6[2] = '\0';
        puVar6[3] = '\0';
        puVar6[4] = '\0';
        puVar6[5] = '\0';
        puVar6[6] = '\0';
        puVar6[7] = '\0';
        puVar6 = (uchar *)((longlong)aVar10 + 0x18);
        puVar6[0] = '\0';
        puVar6[1] = '\0';
        puVar6[2] = '\0';
        puVar6[3] = '\0';
        puVar6[4] = '\0';
        puVar6[5] = '\0';
        puVar6[6] = '\0';
        puVar6[7] = '\0';
        puVar6 = (uchar *)((longlong)aVar10 + 0x20);
        puVar6[0] = '\0';
        puVar6[1] = '\0';
        puVar6[2] = '\0';
        puVar6[3] = '\0';
        puVar6[4] = '\0';
        puVar6[5] = '\0';
        puVar6[6] = '\0';
        puVar6[7] = '\0';
      }
      else {
        pTVar3->First = *(FNode **)aVar10;
      }
    }
    else {
      pTVar3->First = *(FNode **)aVar10;
    }
    *(undefined8 *)aVar10 = 0;
    *(FName *)((TTypeCompatibleBytes<Metasound::FMetaSoundParameterTransmitter::FParameter> *)
              ((longlong)aVar10 + 8))->Pad = local_48;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)((longlong)aVar10 + 0x10),&local_40);
    pTVar3->Head->Next = aVar10;
    pTVar3->Head = (FNode *)aVar10;
    LOCK();
    pTVar3->NumElems = (atomic<int>)((int)pTVar3->NumElems + 1);
    UNLOCK();
    if ((0xc < local_40.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  return true;
}

// SetParameters @ 14afbdde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::FMetaSoundParameterTransmitter::SetParameters
          (FMetaSoundParameterTransmitter *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FLiteral *pFVar8;
  FAudioParameter *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_98 [32];
  FLiteral local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  bVar3 = IsInAudioThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundParameterTransmitter.cpp"
                         ,0x126,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = Audio::FParameterTransmitterBase::IsVirtualized((FParameterTransmitterBase *)this);
  if (bVar3) {
    bVar3 = SetVirtualizedParameters(this,param_1);
  }
  else {
    uVar11 = param_1->ArrayNum - 1;
    bVar3 = true;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 * 0xa0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar9 = (FAudioParameter *)((param_1->AllocatorInstance).Data + lVar12);
        FVar1 = pFVar9->ParamName;
        pFVar8 = Frontend::ConvertParameterToLiteral(&local_60,pFVar9);
        bVar5 = SetParameterWithLiteral(this,FVar1,pFVar8);
        uVar10 = (ulonglong)local_60.Value.TypeIndex;
        if ((0xc < local_60.Value.TypeIndex) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(&local_60);
        if (!bVar5) {
          uVar7 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_1,uVar11);
          bVar3 = false;
        }
        lVar12 = lVar12 + -0xa0;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    if (param_1->ArrayNum != 0) {
      bVar5 = Audio::FParameterTransmitterBase::SetParameters
                        ((FParameterTransmitterBase *)this,param_1);
      bVar3 = (bool)(bVar3 & bVar5);
    }
    pFVar9 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
    if (param_1->ArrayMax < 0) {
      DestructItems<FAudioParameter,int>(pFVar9,param_1->ArrayNum);
      param_1->ArrayNum = 0;
      if (param_1->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      }
    }
    else {
      DestructItems<FAudioParameter,int>(pFVar9,param_1->ArrayNum);
      param_1->ArrayNum = 0;
    }
  }
  return bVar3;
}

// SetVirtualizedParameters @ 14afbe250

bool __thiscall
Metasound::FMetaSoundParameterTransmitter::SetVirtualizedParameters
          (FMetaSoundParameterTransmitter *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  FAudioParameter *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  bVar3 = IsInAudioThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundParameterTransmitter.cpp"
                         ,0x10a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar9 = param_1->ArrayNum;
  bVar3 = true;
  uVar8 = iVar9 - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 0xa0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((param_1->AllocatorInstance).Data[lVar7 + 0x80] == (FScriptContainerElement)0xc) {
        uVar6 = 0;
        if (iVar9 <= param_1->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_1,uVar8,1);
      }
      iVar9 = iVar9 + -1;
      lVar7 = lVar7 + -0xa0;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if (param_1->ArrayNum != 0) {
    bVar3 = Audio::FParameterTransmitterBase::SetParameters
                      ((FParameterTransmitterBase *)this,param_1);
  }
  pFVar1 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FAudioParameter,int>(pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    return bVar3;
  }
  DestructItems<FAudioParameter,int>(pFVar1,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  return bVar3;
}

