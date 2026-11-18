// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 46

// StaticClass @ 148aa2860

UClass * __cdecl UWorldPartitionRuntimeCell::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCell",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCell,0xb0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCell>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton;
}

// UWorldPartitionRuntimeCell @ 148ab55e0

UWorldPartitionRuntimeCell * __thiscall
UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell
          (UWorldPartitionRuntimeCell *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->DataLayers).bIsFirstDataLayerExternal = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCell__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  (this->DataLayers).DataLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayers).DataLayers.ArrayNum = 0;
  (this->DataLayers).DataLayers.ArrayMax = 0;
  (this->ContentBundleID).A = 0;
  (this->ContentBundleID).B = 0;
  (this->ContentBundleID).C = 0;
  (this->ContentBundleID).D = 0;
  (this->CellGuid).A = 0;
  (this->CellGuid).B = 0;
  (this->CellGuid).C = 0;
  (this->CellGuid).D = 0;
  (this->SourceCellGuid).A = 0;
  (this->SourceCellGuid).B = 0;
  (this->SourceCellGuid).C = 0;
  (this->SourceCellGuid).D = 0;
  (this->RuntimeCellData).field0_0x0.DebugPtr = (UWorldPartitionRuntimeCellData *)0x0;
  return this;
}

// UWorldPartitionRuntimeCell @ 148ab5660

UWorldPartitionRuntimeCell * __thiscall
UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell
          (UWorldPartitionRuntimeCell *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsAlwaysLoaded = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCell__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  (this->DataLayers).DataLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayers).DataLayers.ArrayNum = 0;
  (this->DataLayers).DataLayers.ArrayMax = 0;
  (this->ContentBundleID).A = 0;
  (this->ContentBundleID).B = 0;
  (this->ContentBundleID).C = 0;
  (this->ContentBundleID).D = 0;
  (this->CellGuid).A = 0;
  (this->CellGuid).B = 0;
  (this->CellGuid).C = 0;
  (this->CellGuid).D = 0;
  (this->SourceCellGuid).A = 0;
  (this->SourceCellGuid).B = 0;
  (this->SourceCellGuid).C = 0;
  (this->SourceCellGuid).D = 0;
  (this->RuntimeCellData).field0_0x0.DebugPtr = (UWorldPartitionRuntimeCellData *)0x0;
  this->EffectiveWantedState = Unloaded;
  (this->DataLayers).bIsFirstDataLayerExternal = false;
  this->DebugStreamingPriority = -1.0;
  this->EffectiveWantedStateEpoch = 0x7fffffff;
  return this;
}

// ~UWorldPartitionRuntimeCell @ 148ab7520

void __thiscall
UWorldPartitionRuntimeCell::~UWorldPartitionRuntimeCell(UWorldPartitionRuntimeCell *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCell__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  pFVar1 = (this->DataLayers).DataLayers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IWorldPartitionCookPackageObject__6B_;
  this->_padding_ = (longlong)&___7IWorldPartitionCell__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 148abf090

void __thiscall UWorldPartitionRuntimeCell::Activate(UWorldPartitionRuntimeCell *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0xfe,L"Pure virtual not implemented (%s)");
  return;
}

// CanAddToWorld @ 148ac1dd0

bool __thiscall UWorldPartitionRuntimeCell::CanAddToWorld(UWorldPartitionRuntimeCell *this)

{
  return false;
}

// CanUnload @ 148ac1f30

bool __thiscall UWorldPartitionRuntimeCell::CanUnload(UWorldPartitionRuntimeCell *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0xfd,L"Pure virtual not implemented (%s)");
  return true;
}

// ContainsDataLayer @ 148ac2650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UWorldPartitionRuntimeCell::ContainsDataLayer
          (UWorldPartitionRuntimeCell *this,UDataLayerAsset *param_1)

{
  undefined1 uVar1;
  UWorld *this_00;
  UWorldPartition *this_01;
  UDataLayerManager *this_02;
  AWorldDataLayers *this_03;
  UDataLayerInstance *pUVar2;
  
  if ((int)this->_padding_ != 0) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x78))();
    this_01 = UWorld::GetWorldPartition(this_00);
    this_02 = UWorldPartition::GetDataLayerManager(this_01);
    if (this_02 != (UDataLayerManager *)0x0) {
      this_03 = UDataLayerManager::GetWorldDataLayers(this_02);
      if (this_03 == (AWorldDataLayers *)0x0) {
        pUVar2 = (UDataLayerInstance *)0x0;
      }
      else {
        pUVar2 = AWorldDataLayers::GetDataLayerInstance(this_03,param_1);
      }
      if (pUVar2 != (UDataLayerInstance *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac26b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(this->_padding_ + 0x20))(this);
        return (bool)uVar1;
      }
    }
  }
  return false;
}

// ContainsDataLayer @ 148ac26d0

bool __thiscall
UWorldPartitionRuntimeCell::ContainsDataLayer
          (UWorldPartitionRuntimeCell *this,UDataLayerInstance *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [32];
  
  plVar2 = (longlong *)(**(code **)(param_1->_padding_ + 800))(param_1,local_res8);
  plVar3 = (longlong *)this->_padding_;
  plVar1 = plVar3 + (int)this->_padding_;
  if (plVar3 != plVar1) {
    do {
      if (*plVar3 == *plVar2) {
        return true;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return false;
}

// Deactivate @ 148ac4180

void __thiscall UWorldPartitionRuntimeCell::Deactivate(UWorldPartitionRuntimeCell *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0xff,L"Pure virtual not implemented (%s)");
  return;
}

// GetActors @ 148acaf10

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionRuntimeCell::GetActors
          (UWorldPartitionRuntimeCell *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0x10c,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCellBounds @ 148acb230

TBox<double> * __thiscall
UWorldPartitionRuntimeCell::GetCellBounds
          (UWorldPartitionRuntimeCell *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)(**(longlong **)&(this->CellGuid).B + 0x2f0))();
  return __return_storage_ptr__;
}

// GetCellEffectiveWantedState @ 148acb3a0

EDataLayerRuntimeState __thiscall
UWorldPartitionRuntimeCell::GetCellEffectiveWantedState
          (UWorldPartitionRuntimeCell *this,FWorldPartitionStreamingContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EDataLayerRuntimeState EVar4;
  
  if ((this->DataLayers).DataLayers.ArrayNum == 0) {
    this->EffectiveWantedState = Activated;
    return this->EffectiveWantedState;
  }
  if (param_1->bIsValid == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                       ,0xb0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  iVar1 = param_1->DataLayerEffectiveStates->UpdateEpoch;
  if (this->EffectiveWantedStateEpoch == iVar1) {
    EVar4 = this->EffectiveWantedState;
  }
  else {
    EVar4 = FWorldPartitionStreamingContext::ResolveDataLayerRuntimeState(param_1,&this->DataLayers)
    ;
    this->EffectiveWantedState = EVar4;
    this->EffectiveWantedStateEpoch = iVar1;
  }
  return EVar4;
}

// GetContentBounds @ 148accb30

TBox<double> * __thiscall
UWorldPartitionRuntimeCell::GetContentBounds(UWorldPartitionRuntimeCell *this)

{
  TBox<double> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148accb3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TBox<double> *)(**(code **)(**(longlong **)&(this->CellGuid).B + 0x2e8))();
  return pTVar1;
}

// GetContentBundleID @ 148accb60

FGuid * __thiscall UWorldPartitionRuntimeCell::GetContentBundleID(UWorldPartitionRuntimeCell *this)

{
  return &this->ContentBundleID;
}

// GetCurrentState @ 148accb70

EWorldPartitionRuntimeCellState __thiscall
UWorldPartitionRuntimeCell::GetCurrentState(UWorldPartitionRuntimeCell *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0x101,L"Pure virtual not implemented (%s)");
  return Unloaded;
}

// GetDataLayerInstances @ 148accc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionRuntimeCell::GetDataLayerInstances
          (UWorldPartitionRuntimeCell *this,
          TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void *_Src;
  UWorld *this_00;
  UWorldPartition *this_01;
  UDataLayerManager *this_02;
  AWorldDataLayers *this_03;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar6 = (FScriptContainerElement *)0x0;
  if ((int)this->_padding_ != 0) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x78))();
    this_01 = UWorld::GetWorldPartition(this_00);
    this_02 = UWorldPartition::GetDataLayerManager(this_01);
    if (this_02 != (UDataLayerManager *)0x0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_class_TArray<UDataLayerInstance_const*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UDataLayerManager::GetDataLayerInstances<FName>(TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_class_TArray<UDataLayerInstance_const*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UDataLayerManager::GetDataLayerInstances<FName>(TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_class_TArray<UDataLayerInstance_const*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UDataLayerManager::GetDataLayerInstances<FName>(TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          atexit(`UDataLayerManager::GetDataLayerInstances<FName>'::__l2::
                 _dynamic_atexit_destructor_for__EmptyArray__);
          _Init_thread_footer(&`public:_class_TArray<UDataLayerInstance_const*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_UDataLayerManager::GetDataLayerInstances<FName>(TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      this_03 = UDataLayerManager::GetWorldDataLayers(this_02);
      _Src = _EmptyArray;
      if (this_03 == (AWorldDataLayers *)0x0) {
        lVar5 = (longlong)DAT_15525d6c8;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = DAT_15525d6c8;
        if (DAT_15525d6c8 == 0) {
          local_38.ArrayNum = 0;
          local_38.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,DAT_15525d6c8,0,&local_38.AllocatorInstance,DAT_15525d6c8,
                     &local_38.ArrayMax);
          memcpy(local_38.AllocatorInstance.Data,_Src,lVar5 << 3);
        }
        pTVar4 = &local_38;
        bVar3 = false;
        bVar2 = true;
      }
      else {
        pTVar4 = AWorldDataLayers::GetDataLayerInstances
                           (this_03,&local_18,
                            (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_);
        bVar3 = true;
        bVar2 = false;
      }
      pFVar6 = (pTVar4->AllocatorInstance).Data;
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = pTVar4->ArrayNum;
      local_28.ArrayMax = pTVar4->ArrayMax;
      pTVar4->ArrayNum = 0;
      pTVar4->ArrayMax = 0;
      if (bVar2) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
      if (bVar3) {
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
      bVar2 = false;
      pTVar4 = &local_28;
      goto LAB_148accd75;
    }
  }
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pTVar4 = &local_38;
  bVar3 = false;
  bVar2 = true;
LAB_148accd75:
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar4->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = pFVar6;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  if (bVar2) {
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDataLayerManager @ 148acce10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerManager * __thiscall
UWorldPartitionRuntimeCell::GetDataLayerManager(UWorldPartitionRuntimeCell *this)

{
  UWorld *this_00;
  UWorldPartition *this_01;
  UDataLayerManager *pUVar1;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x78))(&this->_padding_);
  this_01 = UWorld::GetWorldPartition(this_00);
  pUVar1 = UWorldPartition::GetDataLayerManager(this_01);
  return pUVar1;
}

// GetDataLayers @ 148acce40

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionRuntimeCell::GetDataLayers(UWorldPartitionRuntimeCell *this)

{
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetDebugColor @ 148acce50

FLinearColor * __thiscall
UWorldPartitionRuntimeCell::GetDebugColor
          (UWorldPartitionRuntimeCell *this,FLinearColor *__return_storage_ptr__,
          EWorldPartitionRuntimeCellVisualizeMode param_1)

{
  FLinearColor_u_0 FVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
      ::__l2::DefaultColor.field0_0x0._s_0.R = FLinearColor::Black.field0_0x0._s_0.R;
      `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
      ::__l2::DefaultColor.field0_0x0._s_0.B = FLinearColor::Black.field0_0x0._s_0.B;
      `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
      ::__l2::DefaultColor.field0_0x0._s_0.G = FLinearColor::Black.field0_0x0._s_0.G;
      `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
      ::__l2::DefaultColor.field0_0x0._s_0.A = 0.25;
      _Init_thread_footer(&`public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar1._s_0.G = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                 ::__l2::DefaultColor.field0_0x0._s_0.G;
  FVar1._s_0.R = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                 ::__l2::DefaultColor.field0_0x0._s_0.R;
  FVar1._s_0.B = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                 ::__l2::DefaultColor.field0_0x0._s_0.B;
  FVar1._s_0.A = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                 ::__l2::DefaultColor.field0_0x0._s_0.A;
  __return_storage_ptr__->field0_0x0 = FVar1;
  return __return_storage_ptr__;
}

// GetDebugName @ 148acd420

FString * __thiscall
UWorldPartitionRuntimeCell::GetDebugName
          (UWorldPartitionRuntimeCell *this,FString *__return_storage_ptr__)

{
  (**(code **)(**(longlong **)&(this->CellGuid).B + 0x308))();
  return __return_storage_ptr__;
}

// GetExternalDataLayer @ 148acd540

FName __thiscall UWorldPartitionRuntimeCell::GetExternalDataLayer(UWorldPartitionRuntimeCell *this)

{
  FName in_RDX;
  
  FDataLayerInstanceNames::GetExternalDataLayer((FDataLayerInstanceNames *)&this->_padding_);
  return in_RDX;
}

// GetExternalDataLayerInstance @ 148acd570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UExternalDataLayerInstance * __thiscall
UWorldPartitionRuntimeCell::GetExternalDataLayerInstance(UWorldPartitionRuntimeCell *this)

{
  int iVar1;
  longlong *plVar2;
  UWorld *this_00;
  UWorldPartition *this_01;
  UDataLayerManager *this_02;
  FName *pFVar3;
  AWorldDataLayers *this_03;
  UExternalDataLayerInstance *pUVar4;
  UClass *pUVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x40))(this,local_res8);
  if (*plVar2 != 0) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x78))(this);
    this_01 = UWorld::GetWorldPartition(this_00);
    this_02 = UWorldPartition::GetDataLayerManager(this_01);
    if (this_02 != (UDataLayerManager *)0x0) {
      pFVar3 = (FName *)(**(code **)(this->_padding_ + 0x40))(this,local_res10);
      this_03 = UDataLayerManager::GetWorldDataLayers(this_02);
      if ((this_03 != (AWorldDataLayers *)0x0) &&
         (pUVar4 = (UExternalDataLayerInstance *)
                   AWorldDataLayers::GetDataLayerInstance(this_03,pFVar3),
         pUVar4 != (UExternalDataLayerInstance *)0x0)) {
        pUVar5 = Z_Construct_UClass_UExternalDataLayerInstance_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          return pUVar4;
        }
      }
    }
  }
  return (UExternalDataLayerInstance *)0x0;
}

// GetLevel @ 148acdcc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall UWorldPartitionRuntimeCell::GetLevel(UWorldPartitionRuntimeCell *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0x100,L"Pure virtual not implemented (%s)");
  return (ULevel *)0x0;
}

// GetLevelPackageName @ 148acdd30

FName __thiscall UWorldPartitionRuntimeCell::GetLevelPackageName(UWorldPartitionRuntimeCell *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetOuterWorld @ 148ace9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWorldPartitionRuntimeCell::GetOuterWorld(UWorldPartitionRuntimeCell *this)

{
  uint *this_00;
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UWorld *pUVar4;
  
  this_00 = &this[-1].CellGuid.D;
  pUVar2 = URuntimeHashExternalStreamingObjectBase::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar2);
  if (pUVar3 == (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar4 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar2);
    return pUVar4;
  }
  pUVar4 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)(pUVar3 + 6));
  if (pUVar4 != (UWorld *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar4;
    }
  }
  return (UWorld *)0x0;
}

// GetOwningWorld @ 148aceaf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWorldPartitionRuntimeCell::GetOwningWorld(UWorldPartitionRuntimeCell *this)

{
  uint *this_00;
  UClass *pUVar1;
  URuntimeHashExternalStreamingObjectBase *this_01;
  UWorld *pUVar2;
  UWorldPartition *this_02;
  
  this_00 = &this[-1].CellGuid.D;
  pUVar1 = URuntimeHashExternalStreamingObjectBase::StaticClass();
  this_01 = (URuntimeHashExternalStreamingObjectBase *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar1);
  if (this_01 != (URuntimeHashExternalStreamingObjectBase *)0x0) {
    pUVar2 = URuntimeHashExternalStreamingObjectBase::GetOwningWorld(this_01);
    return pUVar2;
  }
  pUVar1 = Z_Construct_UClass_UWorldPartition_NoRegister();
  this_02 = (UWorldPartition *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar1);
  pUVar2 = UWorldPartition::GetWorld(this_02);
  return pUVar2;
}

// GetPrivateStaticClass @ 148acf650

UClass * __cdecl UWorldPartitionRuntimeCell::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCell",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCell,0xb0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCell>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton;
}

// GetStreamingStatus @ 148ad1980

EStreamingStatus __thiscall
UWorldPartitionRuntimeCell::GetStreamingStatus(UWorldPartitionRuntimeCell *this)

{
  return LEVEL_Unloaded;
}

// HasAnyDataLayer @ 148ad2070

bool __thiscall
UWorldPartitionRuntimeCell::HasAnyDataLayer
          (UWorldPartitionRuntimeCell *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  bool bVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(**(code **)(this->_padding_ + 0x38))();
  bVar1 = Algo::
          NoneOf<TArray<FName,TSizedDefaultAllocator<32>_>,_UWorldPartitionRuntimeCell::HasAnyDataLayer_::__l2::<lambda_1>_>
                    (pTVar2,(<lambda_1>)param_1);
  return !bVar1;
}

// HasContentBundle @ 148ad20a0

bool __thiscall UWorldPartitionRuntimeCell::HasContentBundle(UWorldPartitionRuntimeCell *this)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(longlong *)&this[-1].CellGuid.D + 800))(&this[-1].CellGuid.D);
  return ((piVar1[3] != 0 || piVar1[2] != 0) || piVar1[1] != 0) || *piVar1 != 0;
}

// IsAddedToWorld @ 148ad3d40

bool __thiscall UWorldPartitionRuntimeCell::IsAddedToWorld(UWorldPartitionRuntimeCell *this)

{
  return false;
}

// IsAlwaysLoaded @ 148ad3d50

bool __thiscall UWorldPartitionRuntimeCell::IsAlwaysLoaded(UWorldPartitionRuntimeCell *this)

{
  return this->bIsAlwaysLoaded;
}

// IsDebugShown @ 148ad3ff0

bool __thiscall UWorldPartitionRuntimeCell::IsDebugShown(UWorldPartitionRuntimeCell *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *pFVar9;
  longlong local_res8;
  
  uVar7 = (**(code **)(this->_padding_ + 0x318))();
  if (FWorldPartitionDebugHelper::DebugStreamingStatusFilter.Elements._8_4_ ==
      FWorldPartitionDebugHelper::DebugStreamingStatusFilter.Elements._52_4_) {
LAB_148ad4081:
    if (FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._8_4_ !=
        FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._52_4_) {
      if ((this->DataLayers).DataLayers.ArrayNum == 0) {
        local_res8 = 0;
        uVar7 = ::GetTypeHash((FNameEntryId)0x0);
        if (FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._8_4_ !=
            FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._52_4_) {
          FVar8 = (ForElementType<FSetElementId>)0x154c708e8;
          if (FWorldPartitionDebugHelper::DebugDataLayerFilter.Hash.SecondaryData !=
              (ForElementType<FSetElementId>)0x0) {
            FVar8 = FWorldPartitionDebugHelper::DebugDataLayerFilter.Hash.SecondaryData;
          }
          for (iVar2 = *(int *)((longlong)FVar8 +
                               (ulonglong)
                               (FWorldPartitionDebugHelper::DebugDataLayerFilter.HashSize - 1U &
                               (int)((ulonglong)local_res8 >> 0x20) + uVar7) * 4); iVar2 != -1;
              iVar2 = *(int *)(FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._0_8_ + 8 +
                              (longlong)iVar2 * 0x10)) {
            if (*(longlong *)
                 (FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._0_8_ +
                 (longlong)iVar2 * 0x10) == local_res8) {
              bVar5 = false;
              goto LAB_148ad411b;
            }
          }
        }
      }
      bVar5 = true;
LAB_148ad411b:
      pFVar9 = (this->DataLayers).DataLayers.AllocatorInstance.Data;
      iVar2 = (this->DataLayers).DataLayers.ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->DataLayers).DataLayers.ArrayNum != iVar2) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (pFVar9 == pFVar1) break;
        lVar4 = *(longlong *)pFVar9;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
        if (FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._8_4_ !=
            FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._52_4_) {
          FVar8 = (ForElementType<FSetElementId>)0x154c708e8;
          if (FWorldPartitionDebugHelper::DebugDataLayerFilter.Hash.SecondaryData !=
              (ForElementType<FSetElementId>)0x0) {
            FVar8 = FWorldPartitionDebugHelper::DebugDataLayerFilter.Hash.SecondaryData;
          }
          for (iVar3 = *(int *)((longlong)FVar8 +
                               (ulonglong)
                               (FWorldPartitionDebugHelper::DebugDataLayerFilter.HashSize - 1U &
                               (int)((ulonglong)lVar4 >> 0x20) + uVar7) * 4); iVar3 != -1;
              iVar3 = *(int *)(FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._0_8_ + 8 +
                              (longlong)iVar3 * 0x10)) {
            if (*(longlong *)
                 (FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements._0_8_ +
                 (longlong)iVar3 * 0x10) == lVar4) goto LAB_148ad41bf;
          }
        }
        pFVar9 = pFVar9 + 8;
      }
      if (bVar5) {
        return false;
      }
    }
LAB_148ad41bf:
    if (((FWorldPartitionDebugHelper::bCanDrawContentBundles != false) ||
        ((((this->ContentBundleID).D == 0 && (this->ContentBundleID).C == 0) &&
         (this->ContentBundleID).B == 0) && (this->ContentBundleID).A == 0)) &&
       (cVar6 = (**(code **)(((this->RuntimeCellData).field0_0x0.DebugPtr)->_padding_ + 0x300))(),
       cVar6 != '\0')) {
      return true;
    }
  }
  else {
    FVar8 = (ForElementType<FSetElementId>)0x154c70898;
    if (FWorldPartitionDebugHelper::DebugStreamingStatusFilter.Hash.SecondaryData !=
        (ForElementType<FSetElementId>)0x0) {
      FVar8 = FWorldPartitionDebugHelper::DebugStreamingStatusFilter.Hash.SecondaryData;
    }
    for (iVar2 = *(int *)((longlong)FVar8 +
                         (ulonglong)
                         (FWorldPartitionDebugHelper::DebugStreamingStatusFilter.HashSize - 1U &
                         uVar7) * 4); iVar2 != -1;
        iVar2 = *(int *)(FWorldPartitionDebugHelper::DebugStreamingStatusFilter.Elements._0_8_ + 4 +
                        (longlong)iVar2 * 0xc)) {
      if (*(uint *)(FWorldPartitionDebugHelper::DebugStreamingStatusFilter.Elements._0_8_ +
                   (longlong)iVar2 * 0xc) == uVar7) goto LAB_148ad4081;
    }
  }
  return false;
}

// IsLoading @ 148ad45d0

bool __thiscall UWorldPartitionRuntimeCell::IsLoading(UWorldPartitionRuntimeCell *this)

{
  return false;
}

// IsSpatiallyLoaded @ 148ad4680

bool __thiscall UWorldPartitionRuntimeCell::IsSpatiallyLoaded(UWorldPartitionRuntimeCell *this)

{
  return this->bIsSpatiallyLoaded;
}

// Load @ 148ad4fc0

void __thiscall UWorldPartitionRuntimeCell::Load(UWorldPartitionRuntimeCell *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0xfb,L"Pure virtual not implemented (%s)");
  return;
}

// SetIsAlwaysLoaded @ 148adb270

void __thiscall
UWorldPartitionRuntimeCell::SetIsAlwaysLoaded(UWorldPartitionRuntimeCell *this,bool param_1)

{
  this->bIsAlwaysLoaded = param_1;
  return;
}

// SetIsSpatiallyLoaded @ 148adb2a0

void __thiscall
UWorldPartitionRuntimeCell::SetIsSpatiallyLoaded(UWorldPartitionRuntimeCell *this,bool param_1)

{
  this->bIsSpatiallyLoaded = param_1;
  return;
}

// SetStreamingPriority @ 148adb3f0

void __thiscall
UWorldPartitionRuntimeCell::SetStreamingPriority(UWorldPartitionRuntimeCell *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0x107,L"Pure virtual not implemented (%s)");
  return;
}

// ShouldServerWaitForClientLevelVisibility @ 148adb530

bool __thiscall
UWorldPartitionRuntimeCell::ShouldServerWaitForClientLevelVisibility
          (UWorldPartitionRuntimeCell *this)

{
  return true;
}

// SortCompare @ 148adb540

int __thiscall
UWorldPartitionRuntimeCell::SortCompare
          (UWorldPartitionRuntimeCell *this,UWorldPartitionRuntimeCell *param_1)

{
  UWorldPartitionRuntimeCellData *pUVar1;
  int iVar2;
  
  pUVar1 = (this->RuntimeCellData).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x000148adb551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pUVar1->_padding_ + 0x2e0))
                    (pUVar1,(param_1->RuntimeCellData).field0_0x0.DebugPtr);
  return iVar2;
}

// StaticRegisterNativesUWorldPartitionRuntimeCell @ 148adb8a0

void __cdecl UWorldPartitionRuntimeCell::StaticRegisterNativesUWorldPartitionRuntimeCell(void)

{
  return;
}

// Unload @ 148add040

void __thiscall UWorldPartitionRuntimeCell::Unload(UWorldPartitionRuntimeCell *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeCell.h"
             ,0xfc,L"Pure virtual not implemented (%s)");
  return;
}

// _getUObject @ 148ae2110

UObject * __thiscall UWorldPartitionRuntimeCell::_getUObject(UWorldPartitionRuntimeCell *this)

{
  return (UObject *)&this[-1].CellGuid.D;
}

// _getUObject`adjustor{8}' @ 148ae211c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWorldPartitionRuntimeCell::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UWorldPartitionRuntimeCell::_getUObject_adjustor_8__(UWorldPartitionRuntimeCell *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWorldPartitionRuntimeCell *)&this[-1].RuntimeCellData);
  return (UObject *)pUVar1;
}

