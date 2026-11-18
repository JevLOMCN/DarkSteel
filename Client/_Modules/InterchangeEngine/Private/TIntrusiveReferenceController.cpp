// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 17

// TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1><FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,TArray<UInterchangeFactoryBaseNode_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,UClass_const_*_const_&> @ 14e4ce640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1> * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>::
TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1><FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,TArray<UInterchangeFactoryBaseNode_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,UClass_const_*_const_&>
          (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>
           *this,FString *param_1,int *param_2,
          TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_3,
          TArray<UInterchangeFactoryBaseNode_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_4,UClass **param_5)

{
  uchar *puVar1;
  uchar *puVar2;
  atomic<int> aVar3;
  int iVar4;
  int iVar5;
  UClass *pUVar6;
  ForElementType<UInterchangeFactoryBaseNode_*> FVar7;
  FImportAsyncHelper *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  bool bVar11;
  TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1> *pTVar12;
  atomic<int> *paVar13;
  
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_VFTaskCreateSceneObjects_GameThread_Interchange_UE___00_SharedPointerInternals__6B_
  ;
  iVar4 = param_4->ArrayNum;
  pUVar6 = *param_5;
  FVar7 = (param_4->AllocatorInstance).SecondaryData;
  if (FVar7 != (ForElementType<UInterchangeFactoryBaseNode_*>)0x0) {
    param_4 = (TArray<UInterchangeFactoryBaseNode_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar7;
  }
  if (iVar4 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>
                 *)(*pcVar10)();
      return pTVar12;
    }
  }
  pFVar8 = param_3->Object;
  pTVar9 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    paVar13 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar13 = &pTVar9->WeakReferenceCount;
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  iVar5 = *param_2;
  *(undefined ***)(this->ObjectStorage).Pad = &___7FInterchangeTaskBase_Interchange_UE__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 8),4000);
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x40] = '\0';
  (this->ObjectStorage).Pad[0x41] = '\0';
  (this->ObjectStorage).Pad[0x42] = '\0';
  (this->ObjectStorage).Pad[0x43] = '\0';
  (this->ObjectStorage).Pad[0x44] = '\0';
  (this->ObjectStorage).Pad[0x45] = '\0';
  (this->ObjectStorage).Pad[0x46] = '\0';
  (this->ObjectStorage).Pad[0x47] = '\0';
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  (this->ObjectStorage).Pad[0x4c] = '\0';
  (this->ObjectStorage).Pad[0x4d] = '\0';
  (this->ObjectStorage).Pad[0x4e] = '\0';
  (this->ObjectStorage).Pad[0x4f] = '\0';
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  (this->ObjectStorage).Pad[0x54] = '\0';
  (this->ObjectStorage).Pad[0x55] = '\0';
  (this->ObjectStorage).Pad[0x56] = '\0';
  (this->ObjectStorage).Pad[0x57] = '\0';
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  (this->ObjectStorage).Pad[0x5c] = '\0';
  (this->ObjectStorage).Pad[0x5d] = '\0';
  (this->ObjectStorage).Pad[0x5e] = '\0';
  (this->ObjectStorage).Pad[0x5f] = '\0';
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7FTaskCreateSceneObjects_GameThread_Interchange_UE__6B_;
  (this->ObjectStorage).Pad[0x30] = 0xff;
  (this->ObjectStorage).Pad[0x31] = 0xff;
  (this->ObjectStorage).Pad[0x32] = 0xff;
  (this->ObjectStorage).Pad[0x33] = 0xff;
  (this->ObjectStorage).Pad[0x34] = 0xff;
  (this->ObjectStorage).Pad[0x35] = 0xff;
  (this->ObjectStorage).Pad[0x36] = 0xff;
  (this->ObjectStorage).Pad[0x37] = 0xff;
  ::FString::FString((FString *)((this->ObjectStorage).Pad + 0x60),param_1);
  *(FImportAsyncHelper **)((this->ObjectStorage).Pad + 0x78) = pFVar8;
  *(int *)((this->ObjectStorage).Pad + 0x70) = iVar5;
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x80) = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  puVar2 = (this->ObjectStorage).Pad + 0x88;
  puVar1 = (this->ObjectStorage).Pad + 0x94;
  *(FScriptContainerElement **)puVar2 = (FScriptContainerElement *)0x0;
  *(int *)((this->ObjectStorage).Pad + 0x90) = iVar4;
  if (iVar4 == 0) {
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,(ForAnyElementType *)puVar2,iVar4,(int *)puVar1);
    memcpy(*(FScriptContainerElement **)puVar2,param_4,(longlong)iVar4 << 3);
  }
  *(UClass **)((this->ObjectStorage).Pad + 0x98) = pUVar6;
  if (pUVar6 == (UClass *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("FactoryClass",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCreateSceneObjects.cpp"
                        ,0x21,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>
                 *)(*pcVar10)();
      return pTVar12;
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar13 = &pTVar9->WeakReferenceCount;
    aVar3 = *paVar13;
    *paVar13 = (atomic<int>)((int)*paVar13 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  return this;
}

// DestroyObject @ 14e4ea8e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FAnalyticsHelper,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FAnalyticsHelper,1> *this)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x50));
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4ea920

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TPromise<bool>,1>::DestroyObject
          (TIntrusiveReferenceController<TPromise<bool>,1> *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(this->ObjectStorage).Pad;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14e4ea980

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAsyncTaskNotification,1>::DestroyObject
          (TIntrusiveReferenceController<FAsyncTaskNotification,1> *this)

{
  FAsyncTaskNotification::~FAsyncTaskNotification((FAsyncTaskNotification *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4ea990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FImportAsyncHelper,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FImportAsyncHelper,1> *this)

{
  UE::Interchange::FImportAsyncHelper::~FImportAsyncHelper
            ((FImportAsyncHelper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4ea9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FImportResult,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FImportResult,1> *this)

{
  UE::Interchange::FImportResult::~FImportResult((FImportResult *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4ea9b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskCompletion_GameThread,1>
::DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTaskCompletion_GameThread,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4ea9f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>
           *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x88);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x80);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eaa60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskImportObjectFinalize_GameThread,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTaskImportObjectFinalize_GameThread,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eaac0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskImportObject_Async,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTaskImportObject_Async,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eab20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskImportObject_GameThread,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Interchange::FTaskImportObject_GameThread,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eab80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskParsing,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTaskParsing,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eabc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskPipeline,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTaskPipeline,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eac00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskPostImport_GameThread,1>
::DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTaskPostImport_GameThread,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eac40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskPreCompletion_GameThread,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Interchange::FTaskPreCompletion_GameThread,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eac80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskTranslator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTaskTranslator,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e4eacc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskWaitAssetCompilation_GameThread,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTaskWaitAssetCompilation_GameThread,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

