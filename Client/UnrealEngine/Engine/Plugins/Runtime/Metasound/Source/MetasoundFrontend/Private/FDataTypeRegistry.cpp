// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 60

// ~FDataTypeRegistry @ 14ad9dc10

void __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::~FDataTypeRegistry
          (FDataTypeRegistry *this)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RegistryObjectMapMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RegistryMapMutex);
  *(undefined4 *)&(this->RegisteredObjectClasses).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredObjectClasses).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredObjectClasses);
  *(undefined4 *)&(this->RegisteredDataTypes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredDataTypes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredDataTypes);
  return;
}

// CreateConstructorInputNode @ 14ada9ad0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateConstructorInputNode
          (FDataTypeRegistry *this,FName *param_1,FInputNodeConstructorParams *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->NodeName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xc0))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorInputNode @ 14ada9b30

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateConstructorInputNode(FDataTypeRegistry *this,FName *param_1,FNodeData *param_2)

{
  code *pcVar1;
  IDataTypeRegistryEntry *pIVar2;
  FNodeData *pFVar3;
  FNodeData *in_R9;
  FNodeData local_88;
  
  pIVar2 = FindDataTypeEntry(this,&param_2->Name);
  if (pIVar2 == (IDataTypeRegistryEntry *)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    FNodeData::~FNodeData(in_R9);
  }
  else {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0xb8);
    pFVar3 = FNodeData::FNodeData(&local_88,in_R9);
    (*pcVar1)(pIVar2,param_1,pFVar3);
    FNodeData::~FNodeData(in_R9);
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14ada9bd0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateConstructorOutputNode
          (FDataTypeRegistry *this,FName *param_1,FDefaultNamedVertexNodeConstructorParams *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->NodeName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xe0))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14ada9c30

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateConstructorOutputNode(FDataTypeRegistry *this,FName *param_1,FNodeData *param_2)

{
  code *pcVar1;
  IDataTypeRegistryEntry *pIVar2;
  FNodeData *pFVar3;
  FNodeData *in_R9;
  FNodeData local_88;
  
  pIVar2 = FindDataTypeEntry(this,&param_2->Name);
  if (pIVar2 == (IDataTypeRegistryEntry *)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    FNodeData::~FNodeData(in_R9);
  }
  else {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0xd8);
    pFVar3 = FNodeData::FNodeData(&local_88,in_R9);
    (*pcVar1)(pIVar2,param_1,pFVar3);
    FNodeData::~FNodeData(in_R9);
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateDataChannel @ 14ada9cd0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateDataChannel
          (FDataTypeRegistry *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FName *param_1,FOperatorSettings *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x158))(pIVar1,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateDataReference @ 14ada9d30

TOptional<Metasound::FAnyDataReference> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateDataReference(FDataTypeRegistry *this,
                   TOptional<Metasound::FAnyDataReference> *__return_storage_ptr__,FName *param_1,
                   EDataReferenceAccessType param_2,FLiteral *param_3,FOperatorSettings *param_4)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x148))(pIVar1,__return_storage_ptr__,param_2,param_3,param_4);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateDefaultLiteral @ 14ada9da0

FLiteral * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateDefaultLiteral(FDataTypeRegistry *this,FLiteral *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  IDataTypeRegistryEntry *pIVar4;
  longlong lVar5;
  FLiteral *pFVar6;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar4 = FindDataTypeEntry(this,param_1);
  if (pIVar4 == (IDataTypeRegistryEntry *)0x0) {
    FLiteral::CreateInvalid(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  lVar5 = (**(code **)((longlong)*pIVar4 + 8))(pIVar4);
  if (*(char *)(lVar5 + 0x28) != '\0') {
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,&local_18);
    if (local_18 != (longlong *)0x0) {
      if ((local_18 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FLiteral *)(*pcVar1)();
        return pFVar6;
      }
      uVar3 = (**(code **)(*local_18 + 0x18))();
      *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = uVar3;
      (__return_storage_ptr__->Value).TypeIndex = '\x02';
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  FLiteral::GetDefaultForType(__return_storage_ptr__,*(ELiteralType *)(lVar5 + 0x18));
  return __return_storage_ptr__;
}

// CreateInputNode @ 14adad210

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateInputNode
          (FDataTypeRegistry *this,FName *param_1,FInputNodeConstructorParams *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->NodeName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xb0))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputNode @ 14adad270

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateInputNode
          (FDataTypeRegistry *this,FName *param_1,FNodeData *param_2)

{
  code *pcVar1;
  IDataTypeRegistryEntry *pIVar2;
  FNodeData *pFVar3;
  FNodeData *in_R9;
  FNodeData local_88;
  
  pIVar2 = FindDataTypeEntry(this,&param_2->Name);
  if (pIVar2 == (IDataTypeRegistryEntry *)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    FNodeData::~FNodeData(in_R9);
  }
  else {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0xa8);
    pFVar3 = FNodeData::FNodeData(&local_88,in_R9);
    (*pcVar1)(pIVar2,param_1,pFVar3);
    FNodeData::~FNodeData(in_R9);
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateLiteralFromUObject @ 14adad640

FLiteral * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateLiteralFromUObject
          (FDataTypeRegistry *this,FLiteral *__return_storage_ptr__,FName *param_1,UObject *param_2)

{
  longlong local_18;
  longlong local_10;
  
  (**(code **)(this->_padding_ + 0x78))(this,&local_18);
  (__return_storage_ptr__->Value)._padding_ = local_18;
  (__return_storage_ptr__->Value)._padding_ = local_10;
  local_10 = 0;
  local_18 = 0;
  (__return_storage_ptr__->Value).TypeIndex = '\x05';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// CreateLiteralFromUObjectArray @ 14adad690

/* WARNING: Enum "Type": Some values do not have unique names */

FLiteral * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateLiteralFromUObjectArray
          (FDataTypeRegistry *this,FLiteral *__return_storage_ptr__,FName *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  IDataTypeRegistryEntry *pIVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  FStaticBasicLogRecord *pFVar11;
  FName FVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  FString local_98;
  FScriptContainerElement *local_88;
  FString local_80;
  longlong local_70;
  FSharedReferencer<1> local_68;
  FName local_60;
  IDataTypeRegistryEntry *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  ::FName::ToString(param_1,&local_98);
  ::FString::PrintfImpl
            (&local_80,L"Metasound::FDataTypeRegistry::CreateLiteralFromUObjectArray Type:%s");
  FVar12 = (FName)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar12 = (FName)local_80.Data.AllocatorInstance.Data;
  }
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar12);
  }
  if ((FName)local_80.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(param_1,&local_98);
  ::FString::PrintfImpl
            (&local_80,L"Metasound::FDataTypeRegistry::CreateLiteralFromUObjectArray Type:%s");
  FVar12 = (FName)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar12 = (FName)local_80.Data.AllocatorInstance.Data;
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar12,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDataTypeRegistry.cpp"
               ,0x439);
  }
  if ((FName)local_80.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  pIVar7 = FindDataTypeEntry(this,param_1);
  if (pIVar7 == (IDataTypeRegistryEntry *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_98);
      pFVar11 = &::LOG_Static;
LAB_14adad804:
      UE::Logging::Private::BasicLog<2>(pFVar11,(FLogCategoryBase *)&LogMetaSound);
      FVar12 = (FName)local_98.Data.AllocatorInstance.Data;
LAB_14adad817:
      if (FVar12 != (FName)0x0) {
        FMemory::Free((void *)FVar12);
      }
    }
  }
  else {
    lVar8 = (**(code **)((longlong)*pIVar7 + 8))();
    if ((*(char *)(lVar8 + 0x26) != '\0') || (*(char *)(lVar8 + 0x27) != '\0')) {
      CreateElementTypeNameFromArrayTypeName((FName)&local_60);
      local_58 = FindDataTypeEntry(this,&local_60);
      if (local_58 != (IDataTypeRegistryEntry *)0x0) {
        iVar1 = param_2->ArrayNum;
        pFVar14 = (param_2->AllocatorInstance).Data;
        local_50 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pFVar13 = pFVar14 + (longlong)iVar1 * 8;
        local_88 = pFVar13;
        while( true ) {
          if (param_2->ArrayNum != iVar1) {
            `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_a0);
          }
          FVar4.Data = local_b0.Data;
          if (pFVar14 == pFVar13) break;
          lVar8 = *(longlong *)pFVar14;
          (**(code **)(this->_padding_ + 0x78))(this,&local_70,&local_60,lVar8);
          plVar9 = (longlong *)(**(code **)((longlong)*local_58 + 0x150))(local_58,local_48,lVar8);
          if (&local_70 != plVar9) {
            local_70 = *plVar9;
            *plVar9 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_68,(FSharedReferencer<1> *)(plVar9 + 1));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
          if ((local_70 == 0) && (lVar8 != 0)) {
            lVar2 = *local_50;
            if ((*(int *)(lVar2 + 0x9d4c) <
                 `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                 _thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::
                                     __l2::_thread_safe_static_guard_0__),
               `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
               _thread_safe_static_guard_0__ == -1)) {
              pwVar10 = FCommandLine::Get();
              bVar5 = FParse::Param(pwVar10,L"nosound");
              if (bVar5) {
                pwVar10 = FCommandLine::Get();
                bVar5 = FParse::Param(pwVar10,L"enablesound");
                if (bVar5) goto LAB_14adadb89;
                `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                bHasNoAudioOnCommandline = true;
              }
              else {
LAB_14adadb89:
                `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                bHasNoAudioOnCommandline = false;
              }
              _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::
                                   __l2::_thread_safe_static_guard_0__);
            }
            if ((*(int *)(lVar2 + 0x9d4c) <
                 `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                 _thread_safe_static_guard_1__) &&
               (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::
                                     __l2::_thread_safe_static_guard_1__),
               `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
               _thread_safe_static_guard_1__ == -1)) {
              if ((FApp::bIsBenchmarking == false) &&
                 ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)
                  ))) {
                `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                bApplicationTypeDoesNotRenderAudio = false;
              }
              else {
                `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                bApplicationTypeDoesNotRenderAudio = true;
              }
              _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::
                                   __l2::_thread_safe_static_guard_1__);
            }
            pFVar13 = local_88;
            if (((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                  bApplicationTypeDoesNotRenderAudio == false) &&
                (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                 bHasNoAudioOnCommandline == false)) && (1 < (byte)LogMetaSound._0_1_)) {
              local_80.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(lVar8 + 0x18);
              ::FName::ToString((FName *)&local_80,&local_98);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              pFVar13 = local_88;
              if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
                pFVar13 = local_88;
              }
            }
          }
          iVar6 = (int)local_a8;
          if ((int)local_a8 == local_a8._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_b0,(int *)((longlong)&local_a8 + 4));
          }
          local_a8 = CONCAT44(local_a8._4_4_,iVar6 + 1);
          *(longlong *)(local_b0.Data + (longlong)iVar6 * 0x10) = local_70;
          *(TReferenceControllerBase<1> **)(local_b0.Data + (longlong)iVar6 * 0x10 + 8) =
               local_68.ReferenceController;
          local_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_70 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          pFVar14 = pFVar14 + 8;
        }
        local_b0.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Value)._padding_ = (longlong)FVar4.Data;
        *(int *)&(__return_storage_ptr__->Value)._padding_ = (int)local_a8;
        *(int *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = local_a8._4_4_;
        (__return_storage_ptr__->Value).TypeIndex = '\v';
        local_a8 = 0;
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>((TSharedPtr<Audio::IProxyData,1> *)0x0,0)
        ;
        goto LAB_14adadae8;
      }
      if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14adad821;
      ::FName::ToString(&local_60,&local_80);
      ::FName::ToString(param_1,&local_98);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      FVar12 = (FName)local_80.Data.AllocatorInstance.Data;
      if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
        FVar12 = (FName)local_80.Data.AllocatorInstance.Data;
      }
      goto LAB_14adad817;
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_98);
      pFVar11 = &::LOG_Static;
      goto LAB_14adad804;
    }
  }
LAB_14adad821:
  (__return_storage_ptr__->Value)._padding_ = (longlong)local_b0.Data;
  *(int *)&(__return_storage_ptr__->Value)._padding_ = (int)local_a8;
  *(int *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = local_a8._4_4_;
  (__return_storage_ptr__->Value).TypeIndex = '\v';
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>((TSharedPtr<Audio::IProxyData,1> *)0x0,0);
LAB_14adadae8:
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// CreateLiteralNode @ 14adadbf0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateLiteralNode
          (FDataTypeRegistry *this,FName *param_1,FDefaultLiteralNodeConstructorParams *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->NodeName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xe8))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14adb1580

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateOutputNode
          (FDataTypeRegistry *this,FName *param_1,FDefaultNamedVertexNodeConstructorParams *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->NodeName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xd0))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputNode @ 14adb15e0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateOutputNode
          (FDataTypeRegistry *this,FName *param_1,FNodeData *param_2)

{
  code *pcVar1;
  IDataTypeRegistryEntry *pIVar2;
  FNodeData *pFVar3;
  FNodeData *in_R9;
  FNodeData local_88;
  
  pIVar2 = FindDataTypeEntry(this,&param_2->Name);
  if (pIVar2 == (IDataTypeRegistryEntry *)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    FNodeData::~FNodeData(in_R9);
  }
  else {
    pcVar1 = *(code **)((longlong)*pIVar2 + 200);
    pFVar3 = FNodeData::FNodeData(&local_88,in_R9);
    (*pcVar1)(pIVar2,param_1,pFVar3);
    FNodeData::~FNodeData(in_R9);
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateProxyFromUObject @ 14adb1ce0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IProxyData,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateProxyFromUObject
          (FDataTypeRegistry *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FName *param_1,UObject *param_2)

{
  bool bVar1;
  bool bVar2;
  IDataTypeRegistryEntry *pIVar3;
  TSharedPtr<Audio::IProxyData,1> *pTVar4;
  wchar_t *pwVar5;
  FName FVar6;
  int *piVar7;
  bool bVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  ::FName::ToString(param_1,&local_38);
  ::FString::PrintfImpl(&local_48,L"Metasound::FDataTypeRegistry::CreateProxyFromUObject Type:%s");
  FVar6 = (FName)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6 = (FName)local_48.Data.AllocatorInstance.Data;
  }
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar6);
  }
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(param_1,&local_38);
  ::FString::PrintfImpl(&local_48,L"Metasound::FDataTypeRegistry::CreateProxyFromUObject Type:%s");
  FVar6 = (FName)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6 = (FName)local_48.Data.AllocatorInstance.Data;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar6,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDataTypeRegistry.cpp"
               ,0x3e5);
  }
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pIVar3 = FindDataTypeEntry(this,param_1);
  if (pIVar3 == (IDataTypeRegistryEntry *)0x0) goto LAB_14adb1f46;
  pTVar4 = (TSharedPtr<Audio::IProxyData,1> *)
           (**(code **)((longlong)*pIVar3 + 0x150))(pIVar3,&local_38,param_2);
  if (__return_storage_ptr__ != pTVar4) {
    __return_storage_ptr__->Object = pTVar4->Object;
    pTVar4->Object = (IProxyData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&pTVar4->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_38.Data.ArrayMax,local_38.Data.ArrayNum))
  ;
  if (__return_storage_ptr__->Object == (IProxyData *)0x0) {
    if (param_2 == (UObject *)0x0) goto LAB_14adb1f46;
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar7 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                   _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      pwVar5 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar5,L"nosound");
      if (bVar2) {
        pwVar5 = FCommandLine::Get();
        bVar2 = FParse::Param(pwVar5,L"enablesound");
        if (bVar2) goto LAB_14adb1fdf;
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
             = true;
      }
      else {
LAB_14adb1fdf:
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
             = false;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if ((*piVar7 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                   _thread_safe_static_guard_1__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                             _thread_safe_static_guard_1__),
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__ == -1)) {
      if ((FApp::bIsBenchmarking == false) &&
         ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = false;
      }
      else {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = true;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__);
    }
    if (((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
          bApplicationTypeDoesNotRenderAudio != false) ||
        (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
         bHasNoAudioOnCommandline != false)) || ((byte)LogMetaSound._0_1_ < 2)) goto LAB_14adb1f46;
    local_48.Data.AllocatorInstance.Data._0_4_ = *(uint *)&param_2->field_0x18;
    local_48.Data.AllocatorInstance.Data._4_4_ = *(uint *)&param_2->field_0x1c;
    ::FName::ToString((FName *)&local_48,&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  else {
    if ((byte)LogMetaSound._0_1_ < 7) goto LAB_14adb1f46;
    local_48.Data.AllocatorInstance.Data._0_4_ = *(uint *)&param_2->field_0x18;
    local_48.Data.AllocatorInstance.Data._4_4_ = *(uint *)&param_2->field_0x1c;
    ::FName::ToString((FName *)&local_48,&local_38);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14adb1f46:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// CreateReceiveNode @ 14adb2040

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateReceiveNode
          (FDataTypeRegistry *this,FName *param_1,FNodeInitData *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->InstanceName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xf0))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14adb2120

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateVariableAccessorNode(FDataTypeRegistry *this,FName *param_1,FNodeInitData *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->InstanceName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x130))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableAccessorNode @ 14adb2180

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateVariableAccessorNode(FDataTypeRegistry *this,FName *param_1,FNodeData *param_2)

{
  code *pcVar1;
  IDataTypeRegistryEntry *pIVar2;
  FNodeData *pFVar3;
  FNodeData *in_R9;
  FNodeData local_88;
  
  pIVar2 = FindDataTypeEntry(this,&param_2->Name);
  if (pIVar2 == (IDataTypeRegistryEntry *)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    FNodeData::~FNodeData(in_R9);
  }
  else {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x128);
    pFVar3 = FNodeData::FNodeData(&local_88,in_R9);
    (*pcVar1)(pIVar2,param_1,pFVar3);
    FNodeData::~FNodeData(in_R9);
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14adb2220

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateVariableDeferredAccessorNode(FDataTypeRegistry *this,FName *param_1,FNodeInitData *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->InstanceName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x140))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableDeferredAccessorNode @ 14adb2280

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateVariableDeferredAccessorNode(FDataTypeRegistry *this,FName *param_1,FNodeData *param_2)

{
  code *pcVar1;
  IDataTypeRegistryEntry *pIVar2;
  FNodeData *pFVar3;
  FNodeData *in_R9;
  FNodeData local_88;
  
  pIVar2 = FindDataTypeEntry(this,&param_2->Name);
  if (pIVar2 == (IDataTypeRegistryEntry *)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    FNodeData::~FNodeData(in_R9);
  }
  else {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x138);
    pFVar3 = FNodeData::FNodeData(&local_88,in_R9);
    (*pcVar1)(pIVar2,param_1,pFVar3);
    FNodeData::~FNodeData(in_R9);
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14adb2320

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateVariableMutatorNode(FDataTypeRegistry *this,FName *param_1,FNodeInitData *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->InstanceName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x120))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableMutatorNode @ 14adb2380

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
CreateVariableMutatorNode(FDataTypeRegistry *this,FName *param_1,FNodeData *param_2)

{
  code *pcVar1;
  IDataTypeRegistryEntry *pIVar2;
  FNodeData *pFVar3;
  FNodeData *in_R9;
  FNodeData local_88;
  
  pIVar2 = FindDataTypeEntry(this,&param_2->Name);
  if (pIVar2 == (IDataTypeRegistryEntry *)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    FNodeData::~FNodeData(in_R9);
  }
  else {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x118);
    pFVar3 = FNodeData::FNodeData(&local_88,in_R9);
    (*pcVar1)(pIVar2,param_1,pFVar3);
    FNodeData::~FNodeData(in_R9);
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14adb2420

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateVariableNode
          (FDataTypeRegistry *this,FName *param_1,FDefaultLiteralNodeConstructorParams *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,&param_2->NodeName);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,param_1);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14adb2480

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::CreateVariableNode
          (FDataTypeRegistry *this,FName *param_1,FLiteral *param_2,FNodeData *param_3)

{
  code *pcVar1;
  IDataTypeRegistryEntry *pIVar2;
  FNodeData *pFVar3;
  FNodeData *in_stack_00000028;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  FNodeData local_b0;
  
  pIVar2 = FindDataTypeEntry(this,(FName *)param_2);
  if (pIVar2 != (IDataTypeRegistryEntry *)0x0) {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x108);
    pFVar3 = FNodeData::FNodeData(&local_b0,in_stack_00000028);
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_c8,
               (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)param_3);
    (*pcVar1)(pIVar2,param_1,&local_c8,pFVar3);
    FLiteral::~FLiteral((FLiteral *)param_3);
    FNodeData::~FNodeData(in_stack_00000028);
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  FLiteral::~FLiteral((FLiteral *)param_3);
  FNodeData::~FNodeData(in_stack_00000028);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// FindDataTypeEntry @ 14adb8d70

/* WARNING: Enum "Type": Some values do not have unique names */

IDataTypeRegistryEntry * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::FindDataTypeEntry
          (FDataTypeRegistry *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  IDataTypeRegistryEntry *pIVar3;
  TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *pTVar4;
  FString local_18;
  
  lpCriticalSection = &this->RegistryMapMutex;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IDataTypeRegistryEntry *)(*pcVar1)();
    return pIVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
                   *)&this->RegisteredDataTypes,*param_1);
  if (pTVar4 == (TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pIVar3 = (IDataTypeRegistryEntry *)0x0;
  }
  else {
    pIVar3 = pTVar4->Object;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pIVar3;
}

// FindDataTypeRegistryEntry @ 14adb8e60

/* WARNING: Enum "Type": Some values do not have unique names */

IDataTypeRegistryEntry * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
FindDataTypeRegistryEntry(FDataTypeRegistry *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  IDataTypeRegistryEntry *pIVar3;
  TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *pTVar4;
  FString FStack_18;
  
  lpCriticalSection = &this->RegistryMapMutex;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IDataTypeRegistryEntry *)(*pcVar1)();
    return pIVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
                   *)&this->RegisteredDataTypes,*param_1);
  if (pTVar4 == (TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_1,&FStack_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
    pIVar3 = (IDataTypeRegistryEntry *)0x0;
  }
  else {
    pIVar3 = pTVar4->Object;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pIVar3;
}

// GetConstructorInputClassMetadata @ 14adbd6b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetConstructorInputClassMetadata
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FNodeClassMetadata *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetConstructorOutputClassMetadata @ 14adbd700

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetConstructorOutputClassMetadata
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x60))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FNodeClassMetadata *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetDataTypeInfo @ 14adbda00

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::GetDataTypeInfo
          (FDataTypeRegistry *this,FName *param_1,FDataTypeRegistryInfo *param_2)

{
  IDataTypeRegistryEntry *pIVar1;
  FDataTypeRegistryInfo *pFVar2;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    pFVar2 = (FDataTypeRegistryInfo *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1);
    FDataTypeRegistryInfo::operator=(param_2,pFVar2);
    return true;
  }
  return false;
}

// GetDataTypeInfo @ 14adbda40

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::GetDataTypeInfo
          (FDataTypeRegistry *this,UObject *param_1,FDataTypeRegistryInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  FName *pFVar5;
  IDataTypeRegistryEntry *pIVar6;
  FDataTypeRegistryInfo *pFVar7;
  UClass *pUVar8;
  
  if (param_1 != (UObject *)0x0) {
    lpCriticalSection = &this->RegistryObjectMapMutex;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar8 = *(UClass **)&param_1->field_0x10;
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar8 != pUVar4) {
      do {
        pFVar5 = TMapBase<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
                 ::Find((TMapBase<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
                         *)&this->RegisteredObjectClasses,pUVar8);
        if ((pFVar5 != (FName *)0x0) &&
           (pIVar6 = FindDataTypeEntry(this,pFVar5), pIVar6 != (IDataTypeRegistryEntry *)0x0)) {
          pFVar7 = (FDataTypeRegistryInfo *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6);
          if ((pFVar7->bIsExplicit == false) || (pUVar8 == *(UClass **)&param_1->field_0x10)) {
            FDataTypeRegistryInfo::operator=(param_2,pFVar7);
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
            return bVar2;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return bVar2;
        }
        pUVar8 = (UClass *)pUVar8->_padding_;
        pUVar4 = Z_Construct_UClass_UObject_NoRegister();
      } while (pUVar8 != pUVar4);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return false;
}

// GetDesiredLiteralType @ 14adbe770

ELiteralType __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetDesiredLiteralType(FDataTypeRegistry *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  ELiteralType EVar3;
  IDataTypeRegistryEntry *pIVar4;
  longlong lVar5;
  
  pIVar4 = FindDataTypeEntry(this,param_1);
  if (pIVar4 == (IDataTypeRegistryEntry *)0x0) {
    return Invalid;
  }
  lVar5 = (**(code **)((longlong)*pIVar4 + 8))(pIVar4);
  if (*(ELiteralType *)(lVar5 + 0x18) != Invalid) {
    return *(ELiteralType *)(lVar5 + 0x18);
  }
  if (*(char *)(lVar5 + 0x26) != '\0') {
    return UObjectProxyArray;
  }
  if (*(char *)(lVar5 + 0x1f) != '\0') {
    return UObjectProxy;
  }
  if ((*(char *)(lVar5 + 0x28) == '\0') || (*(char *)(lVar5 + 0x1c) == '\0')) {
    if (*(char *)(lVar5 + 0x25) != '\0') {
      return StringArray;
    }
    if (*(char *)(lVar5 + 0x24) != '\0') {
      return FloatArray;
    }
    if (*(char *)(lVar5 + 0x23) != '\0') {
      return IntegerArray;
    }
    if (*(char *)(lVar5 + 0x22) != '\0') {
      return BooleanArray;
    }
    if (*(char *)(lVar5 + 0x1e) != '\0') {
      return String;
    }
    if (*(char *)(lVar5 + 0x1d) != '\0') {
      return Float;
    }
    if (*(char *)(lVar5 + 0x1c) == '\0') {
      if (*(char *)(lVar5 + 0x1b) != '\0') {
        return Boolean;
      }
      if (*(char *)(lVar5 + 0x21) != '\0') {
        return NoneArray;
      }
      if (*(char *)(lVar5 + 0x1a) != '\0') {
        return None;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDataTypeRegistry.cpp"
                         ,0x6e,L"");
      if (!bVar2) {
        return Invalid;
      }
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return Integer;
}

// GetEnumInterfaceForDataType @ 14adbe9b0

TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetEnumInterfaceForDataType
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IEnumDataTypeInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetFrontendConstructorInputClass @ 14adbeb20

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendConstructorInputClass
          (FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x30))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetFrontendConstructorOutputClass @ 14adbeb90

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendConstructorOutputClass
          (FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetFrontendInputClass @ 14adbec00

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendInputClass(FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetFrontendLiteralClass @ 14adbec70

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendLiteralClass(FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetFrontendOutputClass @ 14adbece0

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendOutputClass(FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x48))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetFrontendVariableAccessorClass @ 14adbed50

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendVariableAccessorClass
          (FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x88))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetFrontendVariableClass @ 14adbedc0

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendVariableClass(FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x68))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetFrontendVariableDeferredAccessorClass @ 14adbee30

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendVariableDeferredAccessorClass
          (FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x98))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetFrontendVariableMutatorClass @ 14adbeea0

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetFrontendVariableMutatorClass
          (FDataTypeRegistry *this,FName *param_1,FMetasoundFrontendClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FName FVar3;
  FMetasoundFrontendVersionNumber FVar4;
  IDataTypeRegistryEntry *pIVar5;
  longlong lVar6;
  
  pIVar5 = FindDataTypeEntry(this,param_1);
  if (pIVar5 != (IDataTypeRegistryEntry *)0x0) {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    (param_2->ID).A = (int)uVar1;
    (param_2->ID).B = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->ID).C = (int)uVar2;
    (param_2->ID).D = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FName *)(lVar6 + 0x20);
    (param_2->Metadata).ClassName.Namespace = *(FName *)(lVar6 + 0x18);
    (param_2->Metadata).ClassName.Name = FVar3;
    FVar4 = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
    (param_2->Metadata).ClassName.Variant = *(FName *)(lVar6 + 0x28);
    (param_2->Metadata).Version = FVar4;
    uVar1 = *(undefined8 *)(lVar6 + 0x38);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    (param_2->Metadata).Type = (char)uVar1;
    (param_2->Metadata).field_0x21 = (char)((ulonglong)uVar1 >> 8);
    (param_2->Metadata).AccessFlags = (short)((ulonglong)uVar1 >> 0x10);
    (param_2->Metadata).ChangeID.A = (int)((ulonglong)uVar1 >> 0x20);
    (param_2->Metadata).ChangeID.B = (int)uVar2;
    (param_2->Metadata).ChangeID.C = (int)((ulonglong)uVar2 >> 0x20);
    (param_2->Metadata).ChangeID.D = *(uint *)(lVar6 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              (&param_2->Interface,(FMetasoundFrontendClassInterface *)(lVar6 + 0x50));
    return true;
  }
  return false;
}

// GetInputClassMetadata @ 14adbf230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetInputClassMetadata
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FNodeClassMetadata *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetLiteralAssignmentFunction @ 14adc0670

_func___cdecl_void_FOperatorSettings_ptr_FLiteral_ptr_FAnyDataReference_ptr * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetLiteralAssignmentFunction(FDataTypeRegistry *this,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  _func___cdecl_void_FOperatorSettings_ptr_FLiteral_ptr_FAnyDataReference_ptr *p_Var2;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014adc068f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    p_Var2 = (_func___cdecl_void_FOperatorSettings_ptr_FLiteral_ptr_FAnyDataReference_ptr *)
             (**(code **)((longlong)*pIVar1 + 0x100))(pIVar1,*(code **)((longlong)*pIVar1 + 0x100));
    return p_Var2;
  }
  return (_func___cdecl_void_FOperatorSettings_ptr_FLiteral_ptr_FAnyDataReference_ptr *)0x0;
}

// GetOutputClassMetadata @ 14adc20f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetOutputClassMetadata
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FNodeClassMetadata *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetRawAssignmentFunction @ 14adc2940

TUniqueFunction<void___cdecl(void_const_*,void_*)> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetRawAssignmentFunction(FDataTypeRegistry *this,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  TUniqueFunction<void___cdecl(void_const_*,void_*)> *pTVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
             GetRawAssignmentFunction'::__l2::_dynamic_atexit_destructor_for__NoOp__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014adc299b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TUniqueFunction<void___cdecl(void_const_*,void_*)> *)
             (**(code **)((longlong)*pIVar1 + 0xf8))(pIVar1,*(code **)((longlong)*pIVar1 + 0xf8));
    return pTVar2;
  }
  return &NoOp;
}

// GetRegisteredDataTypeNames @ 14adc29f0

void __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetRegisteredDataTypeNames
          (FDataTypeRegistry *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->RegistryMapMutex;
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
  TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
              *)&this->RegisteredDataTypes,param_1);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetUClassForDataType @ 14adc3650

UClass * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetUClassForDataType(FDataTypeRegistry *this,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  longlong lVar2;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
    return *(UClass **)(lVar2 + 0x30);
  }
  return (UClass *)0x0;
}

// GetVariableAccessorClassMetadata @ 14adc3aa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetVariableAccessorClassMetadata
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FNodeClassMetadata *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetVariableClassMetadata @ 14adc3af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetVariableClassMetadata
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FNodeClassMetadata *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetVariableDeferredAccessorClassMetadata @ 14adc3b40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetVariableDeferredAccessorClassMetadata
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FNodeClassMetadata *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetVariableMutatorClassMetadata @ 14adc3b90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
GetVariableMutatorClassMetadata
          (FDataTypeRegistry *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,FName *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  
  pIVar1 = FindDataTypeEntry(this,param_1);
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FNodeClassMetadata *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsLiteralTypeSupported @ 14adc7540

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
IsLiteralTypeSupported(FDataTypeRegistry *this,FName *param_1,ELiteralType param_2)

{
  char cVar1;
  IDataTypeRegistryEntry *pIVar2;
  longlong lVar3;
  
  pIVar2 = FindDataTypeEntry(this,param_1);
  if (pIVar2 != (IDataTypeRegistryEntry *)0x0) {
    lVar3 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    switch(param_2) {
    case None:
      return (bool)*(undefined1 *)(lVar3 + 0x1a);
    case Boolean:
      return (bool)*(undefined1 *)(lVar3 + 0x1b);
    case Integer:
      return (bool)*(undefined1 *)(lVar3 + 0x1c);
    case Float:
      return (bool)*(undefined1 *)(lVar3 + 0x1d);
    case String:
      return (bool)*(undefined1 *)(lVar3 + 0x1e);
    case UObjectProxy:
      if (*(char *)(lVar3 + 0x1f) != '\0') {
        return true;
      }
      cVar1 = *(char *)(lVar3 + 0x20);
      break;
    case NoneArray:
      return (bool)*(undefined1 *)(lVar3 + 0x21);
    case BooleanArray:
      return (bool)*(undefined1 *)(lVar3 + 0x22);
    case IntegerArray:
      return (bool)*(undefined1 *)(lVar3 + 0x23);
    case FloatArray:
      return (bool)*(undefined1 *)(lVar3 + 0x24);
    case StringArray:
      return (bool)*(undefined1 *)(lVar3 + 0x25);
    case UObjectProxyArray:
      if (*(char *)(lVar3 + 0x26) != '\0') {
        return true;
      }
      cVar1 = *(char *)(lVar3 + 0x27);
      break;
    default:
      goto switchD_14adc757f_caseD_c;
    }
    if (cVar1 != '\0') {
      return true;
    }
  }
switchD_14adc757f_caseD_c:
  return false;
}

// IsLiteralTypeSupported @ 14adc7650

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
IsLiteralTypeSupported(FDataTypeRegistry *this,FName *param_1,EMetasoundFrontendLiteralType param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ELiteralType EVar1;
  undefined1 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x58);
  EVar1 = GetMetasoundLiteralType(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014adc7691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(this,param_1,EVar1);
  return (bool)uVar2;
}

// IsRegistered @ 14adc78a0

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::IsRegistered
          (FDataTypeRegistry *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  
  lpCriticalSection = &this->RegistryMapMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar1 = *param_1;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->RegisteredDataTypes).field_0x8 !=
      *(int *)&(this->RegisteredDataTypes).field_0x34) {
    puVar7 = *(undefined1 **)&(this->RegisteredDataTypes).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RegisteredDataTypes).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->RegisteredDataTypes).field_0x48 - 1U &
                              FVar1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)((longlong)iVar6 * 0x20 + *(longlong *)&this->RegisteredDataTypes) == FVar1)
        goto LAB_14adc794d;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&this->RegisteredDataTypes);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_14adc794d:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar6 != -1;
}

// IsUObjectProxyFactory @ 14adc7d10

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
IsUObjectProxyFactory(FDataTypeRegistry *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  FName *pFVar5;
  IDataTypeRegistryEntry *pIVar6;
  longlong lVar7;
  UClass *pUVar8;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  lpCriticalSection = &this->RegistryObjectMapMutex;
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
  pUVar8 = *(UClass **)&param_1->field_0x10;
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  if (pUVar8 != pUVar4) {
    do {
      pFVar5 = TMapBase<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
               ::Find((TMapBase<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
                       *)&this->RegisteredObjectClasses,pUVar8);
      if (pFVar5 != (FName *)0x0) {
        pIVar6 = FindDataTypeEntry(this,pFVar5);
        if (pIVar6 != (IDataTypeRegistryEntry *)0x0) {
          lVar7 = (**(code **)((longlong)*pIVar6 + 8))(pIVar6);
          if ((*(char *)(lVar7 + 0x29) == '\0') || (pUVar8 == *(UClass **)&param_1->field_0x10)) {
            bVar2 = true;
            goto LAB_14adc7dc5;
          }
          break;
        }
      }
      pUVar8 = (UClass *)pUVar8->_padding_;
      pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    } while (pUVar8 != pUVar4);
  }
  bVar2 = false;
LAB_14adc7dc5:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// IsValidUObjectForDataType @ 14adc7f70

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
IsValidUObjectForDataType(FDataTypeRegistry *this,FName *param_1,UObject *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  FName *pFVar6;
  TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *pTVar7;
  longlong lVar8;
  UClass *pUVar9;
  undefined8 local_78;
  FText local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_3c;
  
  local_78 = 0;
  FText::FText(&local_70);
  local_60 = 0xc;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_4a = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x20))(this,param_1,&local_78);
  if ((cVar2 != '\0') && ((local_60._7_1_ != '\0' || ((char)local_58 != '\0')))) {
    if (param_2 == (UObject *)0x0) {
      bVar3 = true;
      goto LAB_14adc811f;
    }
    lpCriticalSection = &this->RegistryObjectMapMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &this->RegistryMapMutex;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    pUVar9 = *(UClass **)&param_2->field_0x10;
    while( true ) {
      pUVar5 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar9 == pUVar5) break;
      pFVar6 = TMapBase<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
               ::Find((TMapBase<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
                       *)&this->RegisteredObjectClasses,pUVar9);
      if (pFVar6 != (FName *)0x0) {
        if ((*pFVar6 == *param_1) && (pUVar9 == *(UClass **)&param_2->field_0x10)) {
LAB_14adc80df:
          bVar3 = true;
        }
        else {
          pTVar7 = TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
                   ::Find((TMapBase<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>_>
                           *)&this->RegisteredDataTypes,*pFVar6);
          if (pTVar7 == (TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1> *)0x0) {
LAB_14adc80cc:
            if (*pFVar6 != *param_1) goto LAB_14adc80d4;
            goto LAB_14adc80df;
          }
          lVar8 = (**(code **)((longlong)*pTVar7->Object + 8))();
          if (*(char *)(lVar8 + 0x29) == '\0') goto LAB_14adc80cc;
          bVar3 = false;
        }
        if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        }
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        goto LAB_14adc811f;
      }
LAB_14adc80d4:
      pUVar9 = (UClass *)pUVar9->_padding_;
    }
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  bVar3 = false;
LAB_14adc811f:
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// IterateDataTypeInfo @ 14adc81f0

void __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::
IterateDataTypeInfo(FDataTypeRegistry *this,
                   TFunctionRef<void___cdecl(Metasound::Frontend::FDataTypeRegistryInfo_const_&)>
                   *param_1)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->RegistryMapMutex;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = *(int *)&(this->RegisteredDataTypes).field_0x28;
  puVar1 = &(this->RegisteredDataTypes).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->RegisteredDataTypes).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14adc82df;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14adc82df:
  uVar10 = *(uint *)&(this->RegisteredDataTypes).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RegisteredDataTypes).field_0x8 -
                       *(int *)&(this->RegisteredDataTypes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->RegisteredDataTypes).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->RegisteredDataTypes).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14adc83e0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14adc83e0:
  while( true ) {
    if (*(int *)&(this->RegisteredDataTypes).field_0x8 -
        *(int *)&(this->RegisteredDataTypes).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar8 = (**(code **)(**(longlong **)
                           ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
                           *(longlong *)&this->RegisteredDataTypes) + 8))();
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,uVar8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RegisterDataType @ 14adcc2f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::RegisterDataType
          (FDataTypeRegistry *this,
          TUniquePtr<Metasound::Frontend::IDataTypeRegistryEntry,TDefaultDelete<Metasound::Frontend::IDataTypeRegistryEntry>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  IDataTypeRegistryEntry *pIVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  longlong lVar9;
  INodeClassRegistry *pIVar10;
  undefined8 *puVar11;
  FNodeClassInfo *pFVar12;
  undefined1 *puVar13;
  FLLMScope local_res10 [2];
  TPairInitializer<UClass_const_*_const_&,FName_const_&> local_res18;
  IDataTypeRegistryEntry *local_498;
  TReferenceControllerBase<1> *local_490;
  FName local_488;
  undefined8 *local_480;
  undefined8 *local_478;
  undefined8 *local_470;
  undefined8 *local_468;
  undefined8 *local_460;
  undefined8 *local_458;
  undefined8 *local_450;
  undefined8 *local_448;
  undefined8 *local_440;
  FName local_438;
  FName *local_430;
  longlong local_428;
  FMemScope local_420;
  longlong *local_418;
  FName *local_410;
  FName *local_408;
  IDataTypeRegistryEntry **local_400;
  FString local_3f8;
  undefined1 local_3e8 [36];
  undefined1 local_3c4 [36];
  undefined1 local_3a0 [36];
  undefined1 local_37c [36];
  undefined1 local_358 [36];
  undefined1 local_334 [36];
  undefined1 local_310 [36];
  undefined1 local_2ec [36];
  undefined1 local_2c8 [36];
  FNodeClassInfo local_2a4;
  FNodeClassInfo local_260;
  FNodeClassInfo local_21c;
  FNodeClassInfo local_1d8;
  FNodeClassInfo local_194;
  FNodeClassInfo local_150;
  FNodeClassInfo local_10c;
  FNodeClassInfo local_c8;
  FNodeClassInfo local_84;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_438 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_420,&local_438,true);
  pIVar1 = param_1->Ptr;
  bVar4 = false;
  if (pIVar1 != (IDataTypeRegistryEntry *)0x0) {
    param_1->Ptr = (IDataTypeRegistryEntry *)0x0;
    local_498 = pIVar1;
    local_490 = ::operator_new(0x18);
    if (local_490 != (TReferenceControllerBase<1> *)0x0) {
      local_490->SharedReferenceCount = (atomic<int>)0x1;
      local_490->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VIDataTypeRegistryEntry_Frontend_Metasound__U__DefaultDeleter_VIDataTypeRegistryEntry_Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      local_490->WeakReferenceCount = (atomic<int>)0x1;
      local_490[1]._padding_ = (longlong)pIVar1;
    }
    pFVar8 = (FName *)(**(code **)((longlong)*local_498 + 8))();
    lpCriticalSection = &this->RegistryMapMutex;
    local_488 = *pFVar8;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &this->RegistryObjectMapMutex;
    if ((lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    FVar3 = local_488;
    uVar6 = ::GetTypeHash(local_488.ComparisonIndex.Value);
    if (*(int *)&(this->RegisteredDataTypes).field_0x8 !=
        *(int *)&(this->RegisteredDataTypes).field_0x34) {
      puVar13 = *(undefined1 **)&(this->RegisteredDataTypes).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->RegisteredDataTypes).field_0x38;
      }
      iVar7 = *(int *)(puVar13 +
                      (ulonglong)
                      (*(int *)&(this->RegisteredDataTypes).field_0x48 - 1U & FVar3.Number + uVar6)
                      * 4);
      if (iVar7 != -1) {
        do {
          if (*(FName *)((longlong)iVar7 * 0x20 + *(longlong *)&this->RegisteredDataTypes) == FVar3)
          {
            local_430 = &local_488;
            bVar4 = `Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::
                    FDataTypeRegistry::RegisterDataType'::__l7::<lambda_1>::operator()(&local_430);
            if (!bVar4) {
              if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
                LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
              }
              if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
                LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              }
              bVar4 = false;
              goto LAB_14adccb95;
            }
            break;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this->RegisteredDataTypes);
        } while (iVar7 != -1);
      }
    }
    lVar9 = (**(code **)((longlong)*local_498 + 8))();
    local_428 = *(longlong *)(lVar9 + 0x30);
    if (local_428 != 0) {
      local_418 = &local_428;
      local_410 = &local_488;
      TSet<TTuple<UClass_const_*,FName>,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UClass_const_*_const_&,FName_const_&>_>
                ((TSet<TTuple<UClass_const_*,FName>,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>,FDefaultSetAllocator>
                  *)&this->RegisteredObjectClasses,&local_res18,(bool *)&local_418);
    }
    local_408 = &local_488;
    local_400 = &local_498;
    TSet<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_const_&>_>
              ((TSet<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>,FDefaultSetAllocator>
                *)&this->RegisteredDataTypes,
               (TPairInitializer<FName_const_&,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_const_&>
                *)&local_res18.Value,(bool *)&local_408);
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pIVar10 = INodeClassRegistry::Get();
    if (pIVar10 == (INodeClassRegistry *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7192317994402315546>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDataTypeRegistry.cpp"
                         ,0x2e6,"nullptr != NodeRegistry");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      lVar9 = (**(code **)((longlong)*local_498 + 8))();
      if (*(char *)(lVar9 + 0x19) != '\0') {
        pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
        puVar11 = ::operator_new(0x60);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          *puVar11 = &
                     ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
          *puVar11 = &
                     ___7FInputNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          puVar11[10] = local_498;
          puVar11[0xb] = local_490;
          if (local_490 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_490->SharedReferenceCount =
                 (atomic<int>)((int)local_490->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x20))();
          pFVar12 = FNodeClassInfo::FNodeClassInfo
                              (&local_2a4,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
          FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
        }
        local_480 = puVar11;
        (*pcVar2)(pIVar10,local_3e8,&local_480);
        if (local_480 != (undefined8 *)0x0) {
          (**(code **)*local_480)(local_480,1);
        }
        pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
        puVar11 = ::operator_new(0x60);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          *puVar11 = &
                     ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
          *puVar11 = &
                     ___7FOutputNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          puVar11[10] = local_498;
          puVar11[0xb] = local_490;
          if (local_490 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_490->SharedReferenceCount =
                 (atomic<int>)((int)local_490->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x48))();
          pFVar12 = FNodeClassInfo::FNodeClassInfo
                              (&local_260,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
          FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
        }
        local_478 = puVar11;
        (*pcVar2)(pIVar10,local_3c4,&local_478);
        if (local_478 != (undefined8 *)0x0) {
          (**(code **)*local_478)(local_478,1);
        }
        pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
        puVar11 = ::operator_new(0x60);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          *puVar11 = &
                     ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
          *puVar11 = &
                     ___7FLiteralNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          puVar11[10] = local_498;
          puVar11[0xb] = local_490;
          if (local_490 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_490->SharedReferenceCount =
                 (atomic<int>)((int)local_490->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x40))();
          pFVar12 = FNodeClassInfo::FNodeClassInfo
                              (&local_21c,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
          FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
        }
        local_470 = puVar11;
        (*pcVar2)(pIVar10,local_3a0,&local_470);
        if (local_470 != (undefined8 *)0x0) {
          (**(code **)*local_470)(local_470,1);
        }
        pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
        puVar11 = ::operator_new(0x60);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          *puVar11 = &
                     ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
          *puVar11 = &
                     ___7FVariableNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          puVar11[10] = local_498;
          puVar11[0xb] = local_490;
          if (local_490 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_490->SharedReferenceCount =
                 (atomic<int>)((int)local_490->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x68))();
          pFVar12 = FNodeClassInfo::FNodeClassInfo
                              (&local_1d8,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
          FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
        }
        local_468 = puVar11;
        (*pcVar2)(pIVar10,local_37c,&local_468);
        if (local_468 != (undefined8 *)0x0) {
          (**(code **)*local_468)(local_468,1);
        }
        pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
        puVar11 = ::operator_new(0x60);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          *puVar11 = &
                     ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
          *puVar11 = &
                     ___7FVariableMutatorNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          puVar11[10] = local_498;
          puVar11[0xb] = local_490;
          if (local_490 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_490->SharedReferenceCount =
                 (atomic<int>)((int)local_490->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x78))();
          pFVar12 = FNodeClassInfo::FNodeClassInfo
                              (&local_194,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
          FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
        }
        local_460 = puVar11;
        (*pcVar2)(pIVar10,local_358,&local_460);
        if (local_460 != (undefined8 *)0x0) {
          (**(code **)*local_460)(local_460,1);
        }
        pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
        puVar11 = ::operator_new(0x60);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          *puVar11 = &
                     ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
          *puVar11 = &
                     ___7FVariableAccessorNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          puVar11[10] = local_498;
          puVar11[0xb] = local_490;
          if (local_490 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_490->SharedReferenceCount =
                 (atomic<int>)((int)local_490->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x88))();
          pFVar12 = FNodeClassInfo::FNodeClassInfo
                              (&local_150,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
          FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
        }
        local_458 = puVar11;
        (*pcVar2)(pIVar10,local_334,&local_458);
        if (local_458 != (undefined8 *)0x0) {
          (**(code **)*local_458)(local_458,1);
        }
        pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
        puVar11 = ::operator_new(0x60);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          *puVar11 = &
                     ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
          *puVar11 = &
                     ___7FVariableDeferredAccessorNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
          ;
          puVar11[10] = local_498;
          puVar11[0xb] = local_490;
          if (local_490 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_490->SharedReferenceCount =
                 (atomic<int>)((int)local_490->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x98))();
          pFVar12 = FNodeClassInfo::FNodeClassInfo
                              (&local_10c,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
          FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
        }
        local_450 = puVar11;
        (*pcVar2)(pIVar10,local_310,&local_450);
        if (local_450 != (undefined8 *)0x0) {
          (**(code **)*local_450)(local_450,1);
        }
        lVar9 = (**(code **)((longlong)*local_498 + 8))();
        if (*(char *)(lVar9 + 0x2c) != '\0') {
          pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
          puVar11 = ::operator_new(0x60);
          if (puVar11 == (undefined8 *)0x0) {
            puVar11 = (undefined8 *)0x0;
          }
          else {
            *puVar11 = &
                       ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
            ;
            FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
            *puVar11 = &
                       ___7FConstructorInputNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
            ;
            puVar11[10] = local_498;
            puVar11[0xb] = local_490;
            if (local_490 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_490->SharedReferenceCount =
                   (atomic<int>)((int)local_490->SharedReferenceCount + 1);
              UNLOCK();
            }
            lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x30))();
            pFVar12 = FNodeClassInfo::FNodeClassInfo
                                (&local_c8,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
            FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
          }
          local_448 = puVar11;
          (*pcVar2)(pIVar10,local_2ec,&local_448);
          if (local_448 != (undefined8 *)0x0) {
            (**(code **)*local_448)(local_448,1);
          }
          pcVar2 = *(code **)((longlong)*pIVar10 + 0x30);
          puVar11 = ::operator_new(0x60);
          if (puVar11 == (undefined8 *)0x0) {
            puVar11 = (undefined8 *)0x0;
          }
          else {
            *puVar11 = &
                       ___7FDataTypeNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
            ;
            FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(puVar11 + 1));
            *puVar11 = &
                       ___7FConstructorOutputNodeRegistryEntry_MetasoundFrontendDataTypeRegistryPrivate_Frontend_Metasound__6B_
            ;
            puVar11[10] = local_498;
            puVar11[0xb] = local_490;
            if (local_490 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_490->SharedReferenceCount =
                   (atomic<int>)((int)local_490->SharedReferenceCount + 1);
              UNLOCK();
            }
            lVar9 = (**(code **)(*(longlong *)puVar11[10] + 0x58))();
            pFVar12 = FNodeClassInfo::FNodeClassInfo
                                (&local_84,(FMetasoundFrontendClassMetadata *)(lVar9 + 0x18));
            FNodeClassInfo::operator=((FNodeClassInfo *)(puVar11 + 1),pFVar12);
          }
          local_440 = puVar11;
          (*pcVar2)(pIVar10,local_2c8,&local_440);
          if (local_440 != (undefined8 *)0x0) {
            (**(code **)*local_440)(local_440,1);
          }
        }
      }
    }
    if (5 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_488,&local_3f8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = true;
LAB_14adccb95:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_490);
  }
  FMemScope::~FMemScope(&local_420);
  FLLMScope::~FLLMScope(local_res10);
  return bVar4;
}

// operator() @ 15055d470

bool __thiscall
`Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FDataTypeRegistry::RegisterDataType'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7192317994402315562>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7192317994402315562>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055d4d7;
    }
  }
  bVar2 = false;
LAB_15055d4d7:
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

