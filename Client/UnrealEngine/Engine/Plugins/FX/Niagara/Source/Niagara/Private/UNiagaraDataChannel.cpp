// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 17

// StaticClass @ 149078b10

UClass * __cdecl UNiagaraDataChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel",
               &Z_Registration_Info_UClass_UNiagaraDataChannel.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel,0x70,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannel>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel.InnerSingleton;
}

// UNiagaraDataChannel @ 1490b23e0

UNiagaraDataChannel * __thiscall
UNiagaraDataChannel::UNiagaraDataChannel(UNiagaraDataChannel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bKeepPreviousFrameData = true;
  this->bEnforceTickGroupReadWriteOrder = false;
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  (this->FinalWriteTickGroup).Value = '\x03';
  (this->ChannelVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelVariables).ArrayNum = 0;
  (this->ChannelVariables).ArrayMax = 0;
  (this->LayoutInfo).Object = (FNiagaraDataChannelLayoutInfo *)0x0;
  (this->LayoutInfo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bVerboseLogging = false;
  FRenderCommandFence::FRenderCommandFence(&this->RTFence);
  FInstancedStruct::FInstancedStruct(&(this->TransientAccessContext).AccessContext);
  return this;
}

// UNiagaraDataChannel @ 1490b2440

UNiagaraDataChannel * __thiscall
UNiagaraDataChannel::UNiagaraDataChannel(UNiagaraDataChannel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bKeepPreviousFrameData = true;
  this->bEnforceTickGroupReadWriteOrder = false;
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  (this->FinalWriteTickGroup).Value = '\x03';
  (this->ChannelVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelVariables).ArrayNum = 0;
  (this->ChannelVariables).ArrayMax = 0;
  (this->LayoutInfo).Object = (FNiagaraDataChannelLayoutInfo *)0x0;
  (this->LayoutInfo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bVerboseLogging = false;
  FRenderCommandFence::FRenderCommandFence(&this->RTFence);
  FInstancedStruct::FInstancedStruct(&(this->TransientAccessContext).AccessContext);
  return this;
}

// ~UNiagaraDataChannel @ 1490b8510

void __thiscall UNiagaraDataChannel::~UNiagaraDataChannel(UNiagaraDataChannel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  FInstancedStruct::Reset(&(this->TransientAccessContext).AccessContext);
  FRenderCommandFence::~FRenderCommandFence(&this->RTFence);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LayoutInfo).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->ChannelVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1490ccc50

void __thiscall UNiagaraDataChannel::BeginDestroy(UNiagaraDataChannel *this)

{
  UObject::BeginDestroy((UObject *)this);
  LOCK();
  INiagaraModule::bDataChannelRefreshRequested = (atomic<bool>)0x1;
  UNLOCK();
  FRenderCommandFence::BeginFence(&this->RTFence,RenderThread);
  return;
}

// CreateGameData @ 1490e75c0

TSharedPtr<FNiagaraDataChannelGameData,1> * __thiscall
UNiagaraDataChannel::CreateGameData
          (UNiagaraDataChannel *this,
          TSharedPtr<FNiagaraDataChannelGameData,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FNiagaraDataChannelGameData *pFVar10;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_18;
  
  pTVar6 = GetLayoutInfo(this,&local_18);
  pTVar7 = ::operator_new(0x50);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FNiagaraDataChannelGameData *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    ((FNiagaraDataChannelGameData *)(pTVar7 + 1))->_padding_ = 0;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraDataChannelGameData___00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
    FNiagaraDataChannelGameData::Init((FNiagaraDataChannelGameData *)(pTVar7 + 1),pTVar6);
    pFVar10 = (FNiagaraDataChannelGameData *)(pTVar7 + 1);
    pTVar9 = pTVar7;
    if (pFVar10 == (FNiagaraDataChannelGameData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_1490e76e9;
    }
  }
  if (((pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
     (*(int *)(pFVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar10->_padding_;
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
      pFVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_1490e76e9:
  __return_storage_ptr__->Object = pFVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateHandler @ 1490e7730

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
UNiagaraDataChannel::CreateHandler(UNiagaraDataChannel *this,UWorld *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannel.h"
             ,0x4c,L"Pure virtual not implemented (%s)");
  return (UNiagaraDataChannelHandler *)0x0;
}

// GetAccessContextType @ 1491024c0

TNDCAccessContextType __thiscall
UNiagaraDataChannel::GetAccessContextType(UNiagaraDataChannel *this)

{
  UPackage *pUVar1;
  UScriptStruct *in_RDX;
  
  if (Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContextLegacy,(UObject *)pUVar1,
                         L"NDCAccessContextLegacy");
  }
  TNDCAccessContextType::TNDCAccessContextType
            ((TNDCAccessContextType *)in_RDX,
             Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton);
  return (TNDCAccessContextType)in_RDX;
}

// GetAsset @ 149102cf0

UNiagaraDataChannelAsset * __thiscall UNiagaraDataChannel::GetAsset(UNiagaraDataChannel *this)

{
  int iVar1;
  UNiagaraDataChannelAsset *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UNiagaraDataChannelAsset *)this->_padding_;
  if (pUVar2 == (UNiagaraDataChannelAsset *)0x0) {
    pFVar4 = GetTypeName<UNiagaraDataChannelAsset>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = UNiagaraDataChannelAsset::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<UNiagaraDataChannelAsset>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetLayoutInfo @ 149105d60

TSharedPtr<FNiagaraDataChannelLayoutInfo,1> * __thiscall
UNiagaraDataChannel::GetLayoutInfo
          (UNiagaraDataChannel *this,
          TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar7;
  FNiagaraDataChannelLayoutInfo *pFVar8;
  FNiagaraDataChannelLayoutInfo *local_28;
  FSharedReferencer<1> local_20;
  
  if ((this->LayoutInfo).Object != (FNiagaraDataChannelLayoutInfo *)0x0) goto LAB_149105ed8;
  pTVar6 = ::operator_new(0x118);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FNiagaraDataChannelLayoutInfo *)&DAT_00000010;
LAB_149105e11:
    if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
       (*(int *)(pFVar8->_padding_ + 8) < 1)) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8->_padding_ = (longlong)pFVar8;
      if (pTVar6 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar8->_padding_;
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
        pFVar8->_padding_ = (longlong)pTVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraDataChannelLayoutInfo___00_SharedPointerInternals__6B_
    ;
    FNiagaraDataChannelLayoutInfo::FNiagaraDataChannelLayoutInfo
              ((FNiagaraDataChannelLayoutInfo *)(pTVar6 + 1),this);
    pFVar8 = (FNiagaraDataChannelLayoutInfo *)(pTVar6 + 1);
    if (pFVar8 != (FNiagaraDataChannelLayoutInfo *)0x0) goto LAB_149105e11;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar8;
  local_20.ReferenceController = pTVar6;
  if (&this->LayoutInfo != (TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *)&local_28) {
    (this->LayoutInfo).Object = pFVar8;
    local_28 = (FNiagaraDataChannelLayoutInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LayoutInfo).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_149105ed8:
  __return_storage_ptr__->Object = (this->LayoutInfo).Object;
  pTVar6 = (this->LayoutInfo).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149108030

UClass * __cdecl UNiagaraDataChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel",
               &Z_Registration_Info_UClass_UNiagaraDataChannel.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel,0x70,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannel>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel.InnerSingleton;
}

// GetTransientAccessContext @ 14910b4b0

FNDCAccessContextInst * __thiscall
UNiagaraDataChannel::GetTransientAccessContext(UNiagaraDataChannel *this)

{
  code *pcVar1;
  bool bVar2;
  FNDCAccessContextInst *pFVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannel.h"
                       ,0x94,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNDCAccessContextInst *)(*pcVar1)();
      return pFVar3;
    }
  }
  puVar4 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b0))(this,local_res8);
  FInstancedStruct::InitializeAs
            (&(this->TransientAccessContext).AccessContext,(UScriptStruct *)*puVar4,(uchar *)0x0);
  return &this->TransientAccessContext;
}

// IsReadyForFinishDestroy @ 149117b10

bool __thiscall UNiagaraDataChannel::IsReadyForFinishDestroy(UNiagaraDataChannel *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->RTFence);
  return bVar1;
}

// IsValid @ 1491186e0

bool __thiscall UNiagaraDataChannel::IsValid(UNiagaraDataChannel *this)

{
  int iVar1;
  FNiagaraDataChannelLayoutInfo *pFVar2;
  
  pFVar2 = (this->LayoutInfo).Object;
  if ((((pFVar2 != (FNiagaraDataChannelLayoutInfo *)0x0) &&
       (iVar1 = (this->ChannelVariables).ArrayNum, 0 < iVar1)) &&
      ((pFVar2->CompiledData).Variables.ArrayNum == iVar1)) &&
     ((pFVar2->CompiledDataGPU).Variables.ArrayNum == iVar1)) {
    return true;
  }
  return false;
}

// PostInitProperties @ 14911f750

void __thiscall UNiagaraDataChannel::PostInitProperties(UNiagaraDataChannel *this)

{
  UObject::PostInitProperties((UObject *)this);
  LOCK();
  INiagaraModule::bDataChannelRefreshRequested = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// PostLoad @ 149120b20

void __thiscall UNiagaraDataChannel::PostLoad(UNiagaraDataChannel *this)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_18;
  
  UObject::PostLoad((UObject *)this);
  GetLayoutInfo(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b0))(this,local_res8);
  FInstancedStruct::InitializeAs
            (&(this->TransientAccessContext).AccessContext,(UScriptStruct *)*puVar1,(uchar *)0x0);
  LOCK();
  INiagaraModule::bDataChannelRefreshRequested = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// StaticRegisterNativesUNiagaraDataChannel @ 149139c80

void __cdecl UNiagaraDataChannel::StaticRegisterNativesUNiagaraDataChannel(void)

{
  return;
}

