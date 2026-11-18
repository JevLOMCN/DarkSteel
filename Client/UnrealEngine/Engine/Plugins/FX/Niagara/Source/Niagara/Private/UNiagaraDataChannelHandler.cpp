// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 29

// StaticClass @ 14907a110

UClass * __cdecl UNiagaraDataChannelHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler,0x98,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannelHandler>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler.InnerSingleton;
}

// UNiagaraDataChannelHandler @ 1490b2500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler * __thiscall
UNiagaraDataChannelHandler::UNiagaraDataChannelHandler
          (UNiagaraDataChannelHandler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler__6B_;
  (this->DataChannel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Writer).field0_0x0.DebugPtr = (UNiagaraDataChannelWriter *)0x0;
  (this->Reader).field0_0x0.DebugPtr = (UNiagaraDataChannelReader *)0x0;
  (this->WeakDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakDataArray).ArrayNum = 0;
  (this->WeakDataArray).ArrayMax = 0;
  this->OwningWorld = (FNiagaraWorldManager *)0x0;
  this->CurrentTG = TG_PrePhysics;
  FRenderCommandFence::FRenderCommandFence(&this->RTFence);
  (this->ChannelSubscriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelSubscriptions).ArrayNum = 0;
  (this->ChannelSubscriptions).ArrayMax = 0;
  this->SubscriberTokens = 0;
  FInstancedStruct::FInstancedStruct(&(this->TransientAccessContext).AccessContext);
  (this->AccessContextType).AccessContextStruct = (UScriptStruct *)0x0;
  return this;
}

// UNiagaraDataChannelHandler @ 1490b2580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler * __thiscall
UNiagaraDataChannelHandler::UNiagaraDataChannelHandler
          (UNiagaraDataChannelHandler *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler__6B_;
  (this->DataChannel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Writer).field0_0x0.DebugPtr = (UNiagaraDataChannelWriter *)0x0;
  (this->Reader).field0_0x0.DebugPtr = (UNiagaraDataChannelReader *)0x0;
  (this->WeakDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakDataArray).ArrayNum = 0;
  (this->WeakDataArray).ArrayMax = 0;
  this->OwningWorld = (FNiagaraWorldManager *)0x0;
  this->CurrentTG = TG_PrePhysics;
  FRenderCommandFence::FRenderCommandFence(&this->RTFence);
  (this->ChannelSubscriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelSubscriptions).ArrayNum = 0;
  (this->ChannelSubscriptions).ArrayMax = 0;
  this->SubscriberTokens = 0;
  FInstancedStruct::FInstancedStruct(&(this->TransientAccessContext).AccessContext);
  (this->AccessContextType).AccessContextStruct = (UScriptStruct *)0x0;
  return this;
}

// ~UNiagaraDataChannelHandler @ 1490b8580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::~UNiagaraDataChannelHandler(UNiagaraDataChannelHandler *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler__6B_;
  FInstancedStruct::Reset(&(this->TransientAccessContext).AccessContext);
  DestructItems<UNiagaraDataChannelHandler::FChannelSubscription,int>
            ((FChannelSubscription *)(this->ChannelSubscriptions).AllocatorInstance.Data,
             (this->ChannelSubscriptions).ArrayNum);
  pFVar1 = (this->ChannelSubscriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->RTFence);
  DestructItems<TWeakPtr<FNiagaraDataChannelData,1>,int>
            ((TWeakPtr<FNiagaraDataChannelData,1> *)(this->WeakDataArray).AllocatorInstance.Data,
             (this->WeakDataArray).ArrayNum);
  pFVar1 = (this->WeakDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1490ccc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraDataChannelHandler::BeginDestroy(UNiagaraDataChannelHandler *this)

{
  UObject::BeginDestroy((UObject *)this);
  (**(code **)(this->_padding_ + 0x2b8))(this);
  FRenderCommandFence::BeginFence(&this->RTFence,RenderThread);
  return;
}

// BeginFrame @ 1490cdb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::BeginFrame(UNiagaraDataChannelHandler *this,float param_1)

{
  TArray<TWeakPtr<FNiagaraDataChannelData,1>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  this->CurrentTG = TG_PrePhysics;
  this_00 = &this->WeakDataArray;
  for (uVar6 = 0; (-1 < (int)uVar6 && ((int)uVar6 < (this->WeakDataArray).ArrayNum));
      uVar6 = uVar6 + 1) {
    if ((int)uVar6 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this_00->AllocatorInstance).Data;
    if (((*(longlong *)(pFVar1 + (longlong)(int)uVar6 * 0x10) == 0) ||
        (lVar2 = *(longlong *)(pFVar1 + (longlong)(int)uVar6 * 0x10 + 8), lVar2 == 0)) ||
       (*(int *)(lVar2 + 8) < 1)) {
      uVar5 = 0;
      if ((int)uVar6 < (this->WeakDataArray).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TArray<TWeakPtr<FNiagaraDataChannelData,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (this_00,uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_00->AllocatorInstance,(this->WeakDataArray).ArrayNum,
                 &(this->WeakDataArray).ArrayMax);
      uVar6 = uVar6 - 1;
    }
  }
  return;
}

// Cleanup @ 1490d2dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UNiagaraDataChannelHandler::Cleanup(UNiagaraDataChannelHandler *this)

{
  UNiagaraDataChannelReader *pUVar1;
  UNiagaraDataChannelWriter *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FUObjectItem *pFVar6;
  uint uVar7;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  pUVar1 = (this->Reader).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraDataChannelReader *)0x0) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pUVar1->Data != (TSharedPtr<FNiagaraDataChannelData,1> *)&local_38) {
      (pUVar1->Data).Object = (FNiagaraDataChannelData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pUVar1->Data).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    (this->Reader).field0_0x0.DebugPtr = (UNiagaraDataChannelReader *)0x0;
  }
  pUVar2 = (this->Writer).field0_0x0.DebugPtr;
  if (pUVar2 != (UNiagaraDataChannelWriter *)0x0) {
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pUVar2->Data != (TSharedPtr<FNiagaraDataChannelGameData,1> *)&local_28) {
      (pUVar2->Data).Object = (FNiagaraDataChannelGameData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pUVar2->Data).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    (this->Writer).field0_0x0.DebugPtr = (UNiagaraDataChannelWriter *)0x0;
  }
  if ((this->_padding_ & 0x10) == 0) {
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_MirroredGarbage);
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
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
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar6,Async);
  }
  return;
}

// CreateData @ 1490e6da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedPtr<FNiagaraDataChannelData,1> * __thiscall
UNiagaraDataChannelHandler::CreateData
          (UNiagaraDataChannelHandler *this,
          TSharedPtr<FNiagaraDataChannelData,1> *__return_storage_ptr__)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FNiagaraDataChannelData *pFVar10;
  FNiagaraDataChannelData *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar6 = ::operator_new(0x170);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FNiagaraDataChannelData *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraDataChannelData___00_SharedPointerInternals__6B_
    ;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[8]._padding_ = 0;
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[9]._padding_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    pTVar6[9].SharedReferenceCount =
         (atomic<int>)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 10),4000);
    pTVar6[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pFVar10 = (FNiagaraDataChannelData *)(pTVar6 + 1);
    pTVar6[0xd]._padding_ = 0;
    pTVar6[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x16]._padding_ = 0;
    pTVar6[0x16].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x16].WeakReferenceCount = (atomic<int>)0x8;
    pTVar8 = pTVar6;
    if (pFVar10 == (FNiagaraDataChannelData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FNiagaraDataChannelData,1> *)(*pcVar3)();
        return pTVar7;
      }
      goto LAB_1490e6f3f;
    }
  }
  if (((pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
     (*(int *)(pFVar10->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = (longlong *)pFVar10->_padding_;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      pFVar10->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_1490e6f3f:
  __return_storage_ptr__->Object = pFVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  local_28 = __return_storage_ptr__->Object;
  local_20 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = (this->WeakDataArray).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar9 + (longlong)(this->WeakDataArray).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FNiagaraDataChannelData,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar5 = (this->WeakDataArray).ArrayNum;
  piVar1 = &(this->WeakDataArray).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->WeakDataArray).AllocatorInstance,piVar1);
  }
  (this->WeakDataArray).ArrayNum = iVar5 + 1;
  pFVar9 = (this->WeakDataArray).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FNiagaraDataChannelData **)pFVar9 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FNiagaraDataChannelData *)0x0;
  if (__return_storage_ptr__->Object == (FNiagaraDataChannelData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FNiagaraDataChannelData,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  FNiagaraDataChannelData::Init(__return_storage_ptr__->Object,this);
  return __return_storage_ptr__;
}

// EndFrame @ 1490f0620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraDataChannelHandler::EndFrame(UNiagaraDataChannelHandler *this,float param_1)

{
  return;
}

// FindData @ 1490f8f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedPtr<FNiagaraDataChannelData,1> * __thiscall
UNiagaraDataChannelHandler::FindData
          (UNiagaraDataChannelHandler *this,
          TSharedPtr<FNiagaraDataChannelData,1> *__return_storage_ptr__,
          FNDCAccessContextInst *param_1,ENiagaraResourceAccess param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  UObject *pUVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  UPackage *pUVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  UObject *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  uint local_28;
  
  if (((param_1->AccessContext).StructMemory == (uchar *)0x0) ||
     ((param_1->AccessContext).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    __return_storage_ptr__->Object = (FNiagaraDataChannelData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  VerifyAccessContext(this,param_1);
  puVar4 = (param_1->AccessContext).StructMemory;
  pUVar5 = (param_1->AccessContext).ScriptStruct.field0_0x0.DebugPtr;
  if ((puVar4 != (uchar *)0x0) && (pUVar5 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContextLegacy,(UObject *)pUVar11,
                           L"NDCAccessContextLegacy");
      if (Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1490f907a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton)->
                 _padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton)->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      pUVar6 = *(UObject **)puVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      uVar1 = *(undefined8 *)(puVar4 + 0x20);
      uVar12 = *(undefined4 *)(puVar4 + 0x10);
      uVar8 = *(undefined4 *)(puVar4 + 0x14);
      uVar13 = *(undefined4 *)(puVar4 + 0x18);
      uVar9 = *(undefined4 *)(puVar4 + 0x1c);
      pcVar7 = *(code **)(this->_padding_ + 0x2e0);
      uVar3 = *(uint *)(puVar4 + 0x28);
      local_48 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_28 = local_28 ^ (uVar3 ^ local_28) & 1;
      local_40 = uVar12;
      uStack_3c = uVar8;
      uStack_38 = uVar13;
      uStack_34 = uVar9;
      local_30 = uVar1;
      (*pcVar7)(this,__return_storage_ptr__,&local_48,param_2,uVar12,uVar13);
      return __return_storage_ptr__;
    }
  }
LAB_1490f907a:
  __return_storage_ptr__->Object = (FNiagaraDataChannelData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindData @ 1490f90b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedPtr<FNiagaraDataChannelData,1> * __thiscall
UNiagaraDataChannelHandler::FindData
          (UNiagaraDataChannelHandler *this,
          TSharedPtr<FNiagaraDataChannelData,1> *__return_storage_ptr__,
          FNiagaraDataChannelSearchParameters *param_1,ENiagaraResourceAccess param_2)

{
  TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr> *this_00;
  int iVar1;
  UObjectBaseUtility *this_01;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  if (1 < (byte)LogNiagara._0_1_) {
    this_00 = &this->DataChannel;
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar3 = *(UObject **)&pUVar3->field_0x20;
      if (pUVar3 == (UObject *)0x0) {
        pFVar5 = GetTypeName<UNiagaraDataChannelAsset>(&local_30);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar6);
      }
      pUVar4 = UNiagaraDataChannelAsset::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pFVar5 = GetTypeName<UNiagaraDataChannelAsset>(&local_20);
        pwVar6 = L"";
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar5 = GetFullNameForCastLogError<UObject>(&local_30,pUVar3);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar6,pwVar7);
      }
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      this_01 = *(UObjectBaseUtility **)&pUVar3->field_0x20;
      if (this_01 == (UObjectBaseUtility *)0x0) {
        pFVar5 = GetTypeName<UNiagaraDataChannelAsset>(&local_30);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar6);
      }
      pUVar4 = UNiagaraDataChannelAsset::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pFVar5 = GetTypeName<UNiagaraDataChannelAsset>(&local_30);
        pwVar6 = L"";
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar5 = GetFullNameForCastLogError<UObject>(&local_20,(UObject *)this_01);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar6,pwVar7);
      }
      pFVar5 = UObjectBaseUtility::GetPathName(this_01,&local_50,(UObject *)0x0);
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString>
                ((FLogCategoryBase *)&LogNiagara,&::LOG_Static,pFVar5);
    }
    else {
      pFVar5 = ::FString::FString(&local_40,L"");
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString>
                ((FLogCategoryBase *)&LogNiagara,&::LOG_Static,pFVar5);
      local_50.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = (FNiagaraDataChannelData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetDataChannelReader @ 149104bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraDataChannelReader * __thiscall
UNiagaraDataChannelHandler::GetDataChannelReader(UNiagaraDataChannelHandler *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataChannelReader *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->Reader).field0_0x0.DebugPtr == (UNiagaraDataChannelReader *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UNiagaraDataChannelReader::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar3 = (UNiagaraDataChannelReader *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNiagaraDataChannelReader *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Reader).field0_0x0.DebugPtr = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pUVar3->Owner).field0_0x0.DebugPtr = this;
    pUVar3 = (this->Reader).field0_0x0.DebugPtr;
  }
  else {
    pUVar3 = (this->Reader).field0_0x0.DebugPtr;
  }
  return pUVar3;
}

// GetDataChannelWriter @ 149104ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraDataChannelWriter * __thiscall
UNiagaraDataChannelHandler::GetDataChannelWriter(UNiagaraDataChannelHandler *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataChannelWriter *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->Writer).field0_0x0.DebugPtr == (UNiagaraDataChannelWriter *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UNiagaraDataChannelWriter::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar3 = (UNiagaraDataChannelWriter *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNiagaraDataChannelWriter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Writer).field0_0x0.DebugPtr = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pUVar3->Owner).field0_0x0.DebugPtr = this;
    pUVar3 = (this->Writer).field0_0x0.DebugPtr;
  }
  else {
    pUVar3 = (this->Writer).field0_0x0.DebugPtr;
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 149108190

UClass * __cdecl UNiagaraDataChannelHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler,0x98,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannelHandler>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler.InnerSingleton;
}

// Init @ 149113c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::Init(UNiagaraDataChannelHandler *this,UNiagaraDataChannel *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  UNiagaraDataChannel *local_res8;
  undefined1 local_res10 [8];
  
  if (param_1 == (UNiagaraDataChannel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelHandler.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->DataChannel).WeakPtr,(FObjectPtr)&local_res8);
  puVar3 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_res10);
  (this->AccessContextType).AccessContextStruct = (UScriptStruct *)*puVar3;
  return;
}

// IsReadyForFinishDestroy @ 149117b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelHandler::IsReadyForFinishDestroy(UNiagaraDataChannelHandler *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->RTFence);
  return bVar1;
}

// NotifySubscribers @ 1491190a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::NotifySubscribers
          (UNiagaraDataChannelHandler *this,FNiagaraDataChannelData *param_1,int param_2,int param_3
          )

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UNiagaraDataChannelReader *pUVar5;
  UObject *pUVar6;
  FNiagaraDataChannelData **ppFVar7;
  UFunction *pUVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  FNiagaraDataChannelData *local_108;
  FSharedReferencer<1> FStack_100;
  int local_f8;
  longlong local_f0;
  longlong local_e8;
  UNiagaraDataChannelReader *local_e0;
  undefined8 local_d8;
  int local_d0;
  FDestructionSentinel local_c8;
  FMRSWRecursiveAccessDetector local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  uint local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  FNiagaraDataChannelData *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FReadAccessScope local_58;
  
  if (((param_3 != 0) && ((this->ChannelSubscriptions).ArrayNum != 0)) && (-1 < param_2)) {
    pUVar5 = GetDataChannelReader(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UNiagaraDataChannelReader *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_f8 = param_3 + -1 + param_2;
    uVar14 = (this->ChannelSubscriptions).ArrayNum - 1;
    if (-1 < (int)uVar14) {
      local_f0 = (longlong)(int)uVar14;
      lVar11 = local_f0 * 0x58;
      do {
        uVar13 = ~uVar14 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar14 < (this->ChannelSubscriptions).ArrayNum) {
          uVar4 = uVar13;
        }
        local_e8 = lVar11;
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
        pFVar12 = (this->ChannelSubscriptions).AllocatorInstance.Data + lVar11;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar12,&local_58);
        if ((*(longlong *)&pFVar12[0x10].field_0x0 == 0) ||
           (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar12 + 8),true),
           pUVar6 == (UObject *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
          uVar4 = 0;
          if ((int)uVar14 < (this->ChannelSubscriptions).ArrayNum) {
            uVar4 = uVar13;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar12 = (this->ChannelSubscriptions).AllocatorInstance.Data + local_e8;
          FInstancedStruct::Reset((FInstancedStruct *)(pFVar12 + 0x40));
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)pFVar12);
          iVar9 = (this->ChannelSubscriptions).ArrayNum + ~uVar14;
          if (iVar9 != 0) {
            memmove(pFVar12,pFVar12 + 0x58,(longlong)iVar9 * 0x58);
          }
          piVar1 = &(this->ChannelSubscriptions).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,&(this->ChannelSubscriptions).AllocatorInstance,
                     (this->ChannelSubscriptions).ArrayNum,&(this->ChannelSubscriptions).ArrayMax);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
          local_108 = (FNiagaraDataChannelData *)0x0;
          FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if ((*(longlong *)&pFVar12[0x48].field_0x0 == 0) ||
             (*(longlong *)&pFVar12[0x40].field_0x0 == 0)) {
            local_b0.State = *(atomic<unsigned___int64> *)&pFVar12[0x18].field_0x0;
            pcVar2 = *(code **)(this->_padding_ + 0x2e0);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_b0.State != (atomic<unsigned___int64>)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_b0.State);
            }
            local_a8 = *(undefined4 *)&pFVar12[0x20].field_0x0;
            uStack_a4 = *(undefined4 *)(pFVar12 + 0x24);
            uStack_a0 = *(undefined4 *)&pFVar12[0x28].field_0x0;
            uStack_9c = *(undefined4 *)(pFVar12 + 0x2c);
            local_98 = *(undefined8 *)&pFVar12[0x30].field_0x0;
            local_90 = local_90 ^ (local_90 ^ *(uint *)&pFVar12[0x38].field_0x0) & 1;
            ppFVar7 = (FNiagaraDataChannelData **)(*pcVar2)(this,local_78,&local_b0,0);
            pTVar10 = local_70;
            if (&local_108 != ppFVar7) {
              local_108 = *ppFVar7;
              *ppFVar7 = (FNiagaraDataChannelData *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&FStack_100,(FSharedReferencer<1> *)(ppFVar7 + 1));
              pTVar10 = local_70;
            }
          }
          else {
            ppFVar7 = (FNiagaraDataChannelData **)
                      (**(code **)(this->_padding_ + 0x2d8))(this,local_88);
            pTVar10 = local_80;
            if (&local_108 != ppFVar7) {
              local_108 = *ppFVar7;
              *ppFVar7 = (FNiagaraDataChannelData *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&FStack_100,(FSharedReferencer<1> *)(ppFVar7 + 1));
              pTVar10 = local_80;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          if (local_108 == param_1) {
            if (FStack_100.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_100.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_100.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68 = (pUVar5->Data).Object;
            pTStack_60 = (pUVar5->Data).SharedReferenceCount.ReferenceController;
            (pUVar5->Data).Object = local_108;
            (pUVar5->Data).SharedReferenceCount.ReferenceController = FStack_100.ReferenceController
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_60);
            local_e0 = (UNiagaraDataChannelReader *)0x0;
            local_d8 = 0;
            local_d0 = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UNiagaraDataChannelReader *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            local_d8 = CONCAT44(local_f8,param_2);
            local_e0 = pUVar5;
            local_d0 = param_3;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar12,
                       (FWriteAccessScope *)&local_c8);
            bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar12 + 8));
            if ((!bVar3) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Object.IsValid() != false",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                                   ,0x1bb,
                                   L"ProcessDelegate() called with no object bound to delegate!"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((*(longlong *)&pFVar12[0x10].field_0x0 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FunctionName != NAME_None",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                                   ,0x1bc,L"ProcessDelegate() called with no function name set!"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar12 + 8));
            pUVar8 = UObject::FindFunctionChecked(pUVar6,*(FName *)(pFVar12 + 0x10));
            if (local_c8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
            }
            (**(code **)(*(longlong *)pUVar6 + 0x260))(pUVar6,pUVar8,&local_e0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_100.ReferenceController);
        }
        local_f0 = local_f0 + -1;
        lVar11 = local_e8 + -0x58;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
  }
  return;
}

// OnComputeDispatchInterfaceDestroyed @ 14911a030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::OnComputeDispatchInterfaceDestroyed
          (UNiagaraDataChannelHandler *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FNiagaraGpuComputeDispatchInterface *local_res10;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  local_res10 = param_1;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                         ,0x99,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->WeakDataArray).ArrayNum;
  pFVar10 = (this->WeakDataArray).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->WeakDataArray).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FNiagaraDataChannelData,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      if (pFVar10 == pFVar9) {
        return;
      }
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      pTVar8 = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14911a0d1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar10 = pFVar10 + 0x10;
    }
    aVar5 = pTVar2->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14911a0d1;
      LOCK();
      aVar7 = pTVar2->SharedReferenceCount;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    lVar3 = *(longlong *)pFVar10;
    pTVar8 = pTVar2;
    if (lVar3 == 0) goto LAB_14911a0d1;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((undefined8 *)(lVar3 + 0x48) != &local_28) {
      *(undefined8 *)(lVar3 + 0x48) = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar3 + 0x50),&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// StaticRegisterNativesUNiagaraDataChannelHandler @ 149139ca0

void __cdecl UNiagaraDataChannelHandler::StaticRegisterNativesUNiagaraDataChannelHandler(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SubscribeToDataChannelUpdates @ 14913a3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::SubscribeToDataChannelUpdates
          (UNiagaraDataChannelHandler *this,FOnNewNiagaraDataChannelPublish *param_1,
          FNiagaraDataChannelSearchParameters *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  USceneComponent *pUVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FOnNewNiagaraDataChannelPublish *this_00;
  
  bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  if (bVar6) {
    this->SubscriberTokens = this->SubscriberTokens + 1;
    piVar1 = &(this->ChannelSubscriptions).ArrayMax;
    *param_3 = this->SubscriberTokens;
    iVar7 = (this->ChannelSubscriptions).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->ChannelSubscriptions).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->ChannelSubscriptions).AllocatorInstance.Data;
    (this->ChannelSubscriptions).ArrayNum = iVar7 + 1;
    this_00 = (FOnNewNiagaraDataChannelPublish *)(pFVar3 + (longlong)iVar7 * 0x58);
    DefaultConstructItems<UNiagaraDataChannelHandler::FChannelSubscription,int>(this_00,1);
    *(int *)&this_00[3].field_0x8 = this->SubscriberTokens;
    FOnNewNiagaraDataChannelPublish::operator=(this_00,param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (param_2->OwningComponent).field0_0x0.DebugPtr, pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    *(TObjectPtr<USceneComponent>_u_0 *)(this_00 + 1) = (param_2->OwningComponent).field0_0x0;
    dVar5 = (param_2->Location).field0_0x0._s_0.Y;
    uVar2 = *(uint *)&this_00[2].field_0x8;
    *(double *)&this_00[1].field_0x8 = (param_2->Location).field0_0x0._s_0.X;
    *(double *)&this_00[1].field_0x10 = dVar5;
    *(double *)(this_00 + 2) = (param_2->Location).field0_0x0._s_0.Z;
    *(uint *)&this_00[2].field_0x8 =
         *(uint *)&this_00[2].field_0x8 ^ (uVar2 ^ param_2->bOverrideLocation) & 1;
  }
  else {
    *param_3 = -1;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SubscribeToDataChannelUpdates_WithContext @ 14913a4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::SubscribeToDataChannelUpdates_WithContext
          (UNiagaraDataChannelHandler *this,FOnNewNiagaraDataChannelPublish *param_1,
          FNDCAccessContextInst *param_2,int *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FOnNewNiagaraDataChannelPublish *this_00;
  
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  if (bVar3) {
    this->SubscriberTokens = this->SubscriberTokens + 1;
    piVar1 = &(this->ChannelSubscriptions).ArrayMax;
    *param_3 = this->SubscriberTokens;
    iVar4 = (this->ChannelSubscriptions).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->ChannelSubscriptions).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->ChannelSubscriptions).AllocatorInstance.Data;
    (this->ChannelSubscriptions).ArrayNum = iVar4 + 1;
    this_00 = (FOnNewNiagaraDataChannelPublish *)(pFVar2 + (longlong)iVar4 * 0x58);
    DefaultConstructItems<UNiagaraDataChannelHandler::FChannelSubscription,int>(this_00,1);
    *(int *)&this_00[3].field_0x8 = this->SubscriberTokens;
    FOnNewNiagaraDataChannelPublish::operator=(this_00,param_1);
    if ((FNDCAccessContextInst *)&this_00[2].field_0x10 != param_2) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)&this_00[2].field_0x10,
                 (param_2->AccessContext).ScriptStruct.field0_0x0.DebugPtr,
                 (param_2->AccessContext).StructMemory);
    }
  }
  else {
    *param_3 = -1;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// Tick @ 14913aff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::Tick
          (UNiagaraDataChannelHandler *this,float param_1,ETickingGroup param_2)

{
  this->CurrentTG = param_2;
  return;
}

// UnsubscribeFromDataChannelUpdates @ 14913ee10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::UnsubscribeFromDataChannelUpdates
          (UNiagaraDataChannelHandler *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->ChannelSubscriptions).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->ChannelSubscriptions).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      if (*(int *)((this->ChannelSubscriptions).AllocatorInstance.Data + lVar5 + 0x50) == *param_1)
      {
        uVar3 = 0;
        if ((int)uVar4 < (this->ChannelSubscriptions).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<UNiagaraDataChannelHandler::FChannelSubscription,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->ChannelSubscriptions,uVar4);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,&(this->ChannelSubscriptions).AllocatorInstance,
                   (this->ChannelSubscriptions).ArrayNum,&(this->ChannelSubscriptions).ArrayMax);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x58;
    } while ((int)uVar4 < (this->ChannelSubscriptions).ArrayNum);
  }
  return;
}

// VerifyAccessContext @ 14914af30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler::VerifyAccessContext
          (UNiagaraDataChannelHandler *this,FNDCAccessContextInst *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  longlong *plVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FName local_res8;
  undefined1 local_res18 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->DataChannel).WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    plVar6 = (longlong *)(**(code **)(*(longlong *)pUVar5 + 0x2b0))(pUVar5,local_res18);
    pUVar2 = (param_1->AccessContext).ScriptStruct.field0_0x0.DebugPtr;
    lVar3 = *plVar6;
    if ((pUVar2 != (UScriptStruct *)0x0) && (lVar3 != 0)) {
      if (((int)pUVar2->_padding_ < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)(pUVar2->_padding_ + (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30))
      {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
    }
    if (2 < (byte)LogNiagara._0_1_) {
      if (pUVar2 == (UScriptStruct *)0x0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_48);
      }
      if (lVar3 == 0) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        local_res8 = *(FName *)(lVar3 + 0x18);
        ::FName::ToString(&local_res8,&local_58);
      }
      pUVar5 = FWeakObjectPtr::Get(&(this->DataChannel).WeakPtr);
      pUVar5 = *(UObject **)&pUVar5->field_0x20;
      if (pUVar5 == (UObject *)0x0) {
        pFVar8 = GetTypeName<UNiagaraDataChannelAsset>(&local_28);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar9);
      }
      pUVar7 = UNiagaraDataChannelAsset::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        pFVar8 = GetTypeName<UNiagaraDataChannelAsset>(&local_28);
        pwVar9 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UObject>(&local_18,pUVar5);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar9,pwVar10);
      }
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
      local_res8.Number = *(uint *)&pUVar5->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString,FString>
                ((FLogCategoryBase *)&LogNiagara,&::LOG_Static,&local_38,&local_58,&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// execGetDataChannelReader @ 14914e950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelHandler::execGetDataChannelReader(UObject *param_1,FFrame *param_2,void *param_3)

{
  UNiagaraDataChannelReader *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetDataChannelReader((UNiagaraDataChannelHandler *)param_1);
  *(UNiagaraDataChannelReader **)param_3 = pUVar1;
  return;
}

// execGetDataChannelWriter @ 14914e990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelHandler::execGetDataChannelWriter(UObject *param_1,FFrame *param_2,void *param_3)

{
  UNiagaraDataChannelWriter *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetDataChannelWriter((UNiagaraDataChannelHandler *)param_1);
  *(UNiagaraDataChannelWriter **)param_3 = pUVar1;
  return;
}

// execSubscribeToDataChannelUpdates @ 1491573c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelHandler::execSubscribeToDataChannelUpdates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  USceneComponent *local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  uint local_80;
  FOnNewNiagaraDataChannelPublish local_78;
  TObjectPtr<USceneComponent>_u_0 local_60;
  double local_58;
  double dStack_50;
  double local_48;
  uint local_40;
  FReadAccessScope local_38;
  
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0 = 0;
  local_a8 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_80 = local_80 & 0xfffffffe;
  local_a0 = (USceneComponent *)0x0;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60.DebugPtr = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  local_78._0_8_ = 0;
  local_40 = local_40 & 0xfffffffe | local_80 & 1;
  local_58 = local_98;
  dStack_50 = dStack_90;
  local_48 = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_38);
  local_78._8_8_ = local_b0;
  local_78._16_8_ = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  SubscribeToDataChannelUpdates
            ((UNiagaraDataChannelHandler *)param_1,&local_78,
             (FNiagaraDataChannelSearchParameters *)&local_60.ObjectPtr,piVar2);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// execSubscribeToDataChannelUpdates_WithContext @ 149157590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelHandler::execSubscribeToDataChannelUpdates_WithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FInstancedStruct *pFVar1;
  FProperty *pFVar2;
  int *piVar3;
  FInstancedStruct *pFVar4;
  int local_res10 [2];
  FInstancedStruct local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  undefined8 local_60;
  undefined8 local_58;
  FOnNewNiagaraDataChannelPublish local_50;
  FReadAccessScope local_38;
  
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60 = 0;
  local_58 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FInstancedStruct::FInstancedStruct(&local_78);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_78;
  if (pFVar1 != (FInstancedStruct *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_50._0_8_ = 0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_68,&local_38);
  local_50._8_8_ = local_60;
  local_50._16_8_ = local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  SubscribeToDataChannelUpdates_WithContext
            ((UNiagaraDataChannelHandler *)param_1,&local_50,(FNDCAccessContextInst *)pFVar4,piVar3)
  ;
  FInstancedStruct::Reset(&local_78);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// execUnsubscribeFromDataChannelUpdates @ 149157cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelHandler::execUnsubscribeFromDataChannelUpdates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnsubscribeFromDataChannelUpdates((UNiagaraDataChannelHandler *)param_1,piVar2);
  return;
}

