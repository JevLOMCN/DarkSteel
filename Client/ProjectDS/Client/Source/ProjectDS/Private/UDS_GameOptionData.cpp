// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b49dc50

UClass * __cdecl UDS_GameOptionData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameOptionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameOptionData",
               &Z_Registration_Info_UClass_UDS_GameOptionData.InnerSingleton,
               StaticRegisterNativesUDS_GameOptionData,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GameOptionData>,
               InternalVTableHelperCtorCaller<UDS_GameOptionData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameOptionData.InnerSingleton;
}

// UDS_GameOptionData @ 14b49fee0

UDS_GameOptionData * __thiscall
UDS_GameOptionData::UDS_GameOptionData(UDS_GameOptionData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_GameOptionData__6B_;
  this->GameOptionID = None;
  this->ComponentType = None;
  (this->GameOptionValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameOptionValues).ArrayNum = 0;
  (this->GameOptionValues).ArrayMax = 0;
  (this->ChangedCheckGameOptionValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChangedCheckGameOptionValues).ArrayNum = 0;
  (this->ChangedCheckGameOptionValues).ArrayMax = 0;
  (this->GameOptionStringValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameOptionStringValues).ArrayNum = 0;
  (this->GameOptionStringValues).ArrayMax = 0;
  (this->ChangedCheckGameOptionStringValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ChangedCheckGameOptionStringValues).ArrayNum = 0;
  (this->ChangedCheckGameOptionStringValues).ArrayMax = 0;
  *(undefined8 *)&this->GameOptionDataChangedToVM = 0;
  *(undefined8 *)&(this->GameOptionDataChangedToVM).field_0x8 = 0;
  *(undefined8 *)&(this->GameOptionDataChangedToVM).field_0x10 = 0;
  *(undefined8 *)&this->GameOptionDataChangedFromVM = 0;
  *(undefined8 *)&(this->GameOptionDataChangedFromVM).field_0x8 = 0;
  *(undefined8 *)&(this->GameOptionDataChangedFromVM).field_0x10 = 0;
  *(undefined8 *)&this->GameOptionKeySettingClicked = 0;
  *(undefined8 *)&(this->GameOptionKeySettingClicked).field_0x8 = 0;
  *(undefined8 *)&(this->GameOptionKeySettingClicked).field_0x10 = 0;
  *(undefined8 *)&(this->GameOptionDataChangedToVM).field_0x18 = 2;
  *(undefined8 *)&(this->GameOptionDataChangedFromVM).field_0x18 = 2;
  *(undefined8 *)&(this->GameOptionKeySettingClicked).field_0x18 = 2;
  return this;
}

// ~UDS_GameOptionData @ 14b4a0a30

void __thiscall UDS_GameOptionData::~UDS_GameOptionData(UDS_GameOptionData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_GameOptionData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GameOptionKeySettingClicked).field_0x8,
             *(int *)&(this->GameOptionKeySettingClicked).field_0x10);
  pvVar1 = *(void **)&(this->GameOptionKeySettingClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GameOptionKeySettingClicked);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GameOptionDataChangedFromVM).field_0x8,
             *(int *)&(this->GameOptionDataChangedFromVM).field_0x10);
  pvVar1 = *(void **)&(this->GameOptionDataChangedFromVM).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GameOptionDataChangedFromVM);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GameOptionDataChangedToVM).field_0x8,
             *(int *)&(this->GameOptionDataChangedToVM).field_0x10);
  pvVar1 = *(void **)&(this->GameOptionDataChangedToVM).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GameOptionDataChangedToVM);
  DestructItems<FString,int>
            ((FString *)(this->ChangedCheckGameOptionStringValues).AllocatorInstance.Data,
             (this->ChangedCheckGameOptionStringValues).ArrayNum);
  pFVar2 = (this->ChangedCheckGameOptionStringValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->GameOptionStringValues).AllocatorInstance.Data,
             (this->GameOptionStringValues).ArrayNum);
  pFVar2 = (this->GameOptionStringValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ChangedCheckGameOptionValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GameOptionValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a1820

UClass * __cdecl UDS_GameOptionData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameOptionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameOptionData",
               &Z_Registration_Info_UClass_UDS_GameOptionData.InnerSingleton,
               StaticRegisterNativesUDS_GameOptionData,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GameOptionData>,
               InternalVTableHelperCtorCaller<UDS_GameOptionData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameOptionData.InnerSingleton;
}

// StaticRegisterNativesUDS_GameOptionData @ 14b4a1c70

void __cdecl UDS_GameOptionData::StaticRegisterNativesUDS_GameOptionData(void)

{
  return;
}

// UDS_GameOptionData @ 14ba91030

UDS_GameOptionData * __thiscall
UDS_GameOptionData::UDS_GameOptionData(UDS_GameOptionData *this,FObjectInitializer *param_1)

{
  int *piVar1;
  
  UObject::UObject((UObject *)this);
  this->ComponentType = None;
  this->GameOptionID = None;
  this->_padding_ = (longlong)&___7UDS_GameOptionData__6B_;
  piVar1 = &(this->GameOptionStringValues).ArrayMax;
  (this->GameOptionValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameOptionValues).ArrayNum = 0;
  (this->GameOptionValues).ArrayMax = 0;
  (this->ChangedCheckGameOptionValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChangedCheckGameOptionValues).ArrayNum = 0;
  (this->ChangedCheckGameOptionValues).ArrayMax = 0;
  (this->GameOptionStringValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameOptionStringValues).ArrayNum = 0;
  *piVar1 = 0;
  (this->ChangedCheckGameOptionStringValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ChangedCheckGameOptionStringValues).ArrayNum = 0;
  (this->ChangedCheckGameOptionStringValues).ArrayMax = 0;
  *(undefined8 *)&this->GameOptionDataChangedToVM = 0;
  *(undefined8 *)&(this->GameOptionDataChangedToVM).field_0x8 = 0;
  *(undefined8 *)&(this->GameOptionDataChangedToVM).field_0x10 = 0;
  *(undefined8 *)&(this->GameOptionDataChangedToVM).field_0x18 = 2;
  *(undefined8 *)&this->GameOptionDataChangedFromVM = 0;
  *(undefined8 *)&(this->GameOptionDataChangedFromVM).field_0x8 = 0;
  *(undefined8 *)&(this->GameOptionDataChangedFromVM).field_0x10 = 0;
  *(undefined8 *)&(this->GameOptionDataChangedFromVM).field_0x18 = 2;
  *(undefined8 *)&this->GameOptionKeySettingClicked = 0;
  *(undefined8 *)&(this->GameOptionKeySettingClicked).field_0x8 = 0;
  *(undefined8 *)&(this->GameOptionKeySettingClicked).field_0x10 = 0;
  *(undefined8 *)&(this->GameOptionKeySettingClicked).field_0x18 = 2;
  DestructItems<FString,int>((FString *)0x0,0);
  (this->GameOptionStringValues).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->GameOptionStringValues).AllocatorInstance,0,piVar1);
  }
  return this;
}

// BroadcastDataToVM @ 14ba958b0

void __thiscall UDS_GameOptionData::BroadcastDataToVM(UDS_GameOptionData *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GameOptionDataChangedToVM,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->GameOptionDataChangedToVM).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->GameOptionDataChangedToVM).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->GameOptionDataChangedToVM).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->GameOptionDataChangedToVM).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->GameOptionDataChangedToVM).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->GameOptionDataChangedToVM,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// ClickedKeySetting @ 14ba988c0

void __thiscall
UDS_GameOptionData::ClickedKeySetting
          (UDS_GameOptionData *this,EDS_GameOptionKeySettingIndex param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GameOptionKeySettingClicked,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->GameOptionKeySettingClicked).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->GameOptionKeySettingClicked).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->GameOptionKeySettingClicked).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->GameOptionKeySettingClicked).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,this,param_1), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->GameOptionKeySettingClicked).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->GameOptionKeySettingClicked,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// GetComponentType @ 14baa5ad0

EDS_ComponentType __thiscall UDS_GameOptionData::GetComponentType(UDS_GameOptionData *this)

{
  return this->ComponentType;
}

// GetGameOptionID @ 14baaa8e0

EDS_GameOptionType __thiscall UDS_GameOptionData::GetGameOptionID(UDS_GameOptionData *this)

{
  return this->GameOptionID;
}

// GetGameOptionKeyValue @ 14baaa8f0

TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> * __thiscall
UDS_GameOptionData::GetGameOptionKeyValue
          (UDS_GameOptionData *this,
          TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_GameOptionKeySettingIndex param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_28;
  undefined4 local_24 [3];
  
  uVar8 = param_1 * 2;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar1 = uVar8 + 1;
  if (((-1 < (int)uVar8) && (iVar5 = (this->GameOptionValues).ArrayNum, (int)uVar8 < iVar5)) &&
     ((int)uVar1 < iVar5)) {
    uVar7 = 0;
    if ((int)uVar8 < iVar5) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    local_28 = *(undefined4 *)
                ((this->GameOptionValues).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         local_28;
    uVar8 = 0;
    if ((int)uVar1 < (this->GameOptionValues).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_24[0] = *(undefined4 *)
                   ((this->GameOptionValues).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
    if ((pFVar2 <= (FScriptContainerElement *)local_24) &&
       ((FScriptContainerElement *)local_24 <
        pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         local_24[0];
  }
  return __return_storage_ptr__;
}

// GetGameOptionStringValue @ 14baaab40

FString * __thiscall
UDS_GameOptionData::GetGameOptionStringValue
          (UDS_GameOptionData *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->GameOptionStringValues).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->GameOptionStringValues).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    ::FString::FString(__return_storage_ptr__,
                       (FString *)
                       ((this->GameOptionStringValues).AllocatorInstance.Data +
                       (longlong)param_1 * 0x10));
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGameOptionStringValues @ 14baaabf0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UDS_GameOptionData::GetGameOptionStringValues
          (UDS_GameOptionData *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->GameOptionStringValues).ArrayNum;
  pFVar2 = (this->GameOptionStringValues).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FString,FString,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetGameOptionValue @ 14baaac80

int __thiscall UDS_GameOptionData::GetGameOptionValue(UDS_GameOptionData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->GameOptionValues).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->GameOptionValues).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->GameOptionValues).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return 0;
}

// GetGameOptionValues @ 14baaad10

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_GameOptionData::GetGameOptionValues
          (UDS_GameOptionData *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->GameOptionValues).ArrayNum;
  _Src = (this->GameOptionValues).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
  return __return_storage_ptr__;
}

// GetValueNum @ 14bab12a0

int __thiscall UDS_GameOptionData::GetValueNum(UDS_GameOptionData *this)

{
  EDS_ComponentType EVar1;
  int iVar2;
  FDS_GameOptionBaseTableRow *pFVar3;
  
  pFVar3 = FDS_GameOptionBaseTableRow::Get((longlong)(int)this->GameOptionID,true);
  if (pFVar3 == (FDS_GameOptionBaseTableRow *)0x0) {
    return 0;
  }
  EVar1 = pFVar3->ComponentType;
  iVar2 = (this->GameOptionValues).ArrayNum;
  if (EVar1 == KeySettings) {
    iVar2 = iVar2 / 2;
  }
  else if ((EVar1 == ColorButton) || (EVar1 == TextField)) {
    return (this->GameOptionStringValues).ArrayNum;
  }
  return iVar2;
}

// IsChangedOption @ 14bab6f30

bool __thiscall UDS_GameOptionData::IsChangedOption(UDS_GameOptionData *this)

{
  bool bVar1;
  int iVar2;
  
  if (this->ComponentType == TextField) {
    iVar2 = (this->GameOptionStringValues).ArrayNum;
    if ((iVar2 == (this->ChangedCheckGameOptionStringValues).ArrayNum) &&
       (bVar1 = CompareItems<FString,int>
                          ((FString *)(this->GameOptionStringValues).AllocatorInstance.Data,
                           (FString *)
                           (this->ChangedCheckGameOptionStringValues).AllocatorInstance.Data,iVar2),
       bVar1)) {
      return false;
    }
  }
  else {
    iVar2 = (this->GameOptionValues).ArrayNum;
    if (iVar2 == (this->ChangedCheckGameOptionValues).ArrayNum) {
      if ((iVar2 != 0) &&
         (iVar2 = memcmp((this->GameOptionValues).AllocatorInstance.Data,
                         (this->ChangedCheckGameOptionValues).AllocatorInstance.Data,
                         (longlong)iVar2 << 2), iVar2 != 0)) {
        return true;
      }
      return false;
    }
  }
  return true;
}

// ResetGameOption @ 14bac9f80

void __thiscall UDS_GameOptionData::ResetGameOption(UDS_GameOptionData *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_GameOptionBaseTableRow *pFVar3;
  
  pFVar3 = FDS_GameOptionBaseTableRow::Get((longlong)(int)this->GameOptionID,true);
  if (pFVar3 != (FDS_GameOptionBaseTableRow *)0x0) {
    SetDefaultGameOption(this,pFVar3);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7365020523455053799>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Option\\DS_GameOptionData.cpp"
                     ,0x19,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetDataFromVM @ 14bacb6c0

void __thiscall
UDS_GameOptionData::SetDataFromVM(UDS_GameOptionData *this,int param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  SetGameOptionValue(this,param_1,param_2);
  pFVar2 = ::FString::FString(&local_28,param_2);
  pFVar3 = ::FString::FString(&local_18,pFVar2);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>,UDS_GameOptionData_*,int,int,FString>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->GameOptionDataChangedFromVM,this,param_1,0,pFVar3);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetDataFromVM @ 14bacb740

void __thiscall UDS_GameOptionData::SetDataFromVM(UDS_GameOptionData *this,int param_1,int param_2)

{
  FString local_18;
  
  SetGameOptionValue(this,param_1,param_2);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>,UDS_GameOptionData_*,int,int,FString>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->GameOptionDataChangedFromVM,this,param_1,param_2,&local_18);
  return;
}

// SetDataToVM @ 14bacb7a0

void __thiscall
UDS_GameOptionData::SetDataToVM(UDS_GameOptionData *this,int param_1,FString *param_2)

{
  SetGameOptionValue(this,param_1,param_2);
  BroadcastDataToVM(this);
  return;
}

// SetDataToVM @ 14bacb7d0

void __thiscall UDS_GameOptionData::SetDataToVM(UDS_GameOptionData *this,int param_1,int param_2)

{
  SetGameOptionValue(this,param_1,param_2);
  BroadcastDataToVM(this);
  return;
}

// SetDefaultGameOption @ 14bacb800

void __thiscall
UDS_GameOptionData::SetDefaultGameOption
          (UDS_GameOptionData *this,FDS_GameOptionBaseTableRow *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  EDS_ComponentType EVar3;
  EDS_InputDeviceType EVar4;
  uint uVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  EDS_KeyActionType EVar10;
  UDS_InputMappingDataAsset *this_00;
  UObject *pUVar11;
  UInputAction *pUVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  UInputAction *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  EDS_KeyType local_d8;
  EDS_KeyType local_d4;
  undefined4 local_d0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FWeakObjectPtr local_a8;
  UInputAction *local_a0;
  UObject *local_98;
  UInputAction *local_90;
  UObject *local_88;
  UInputAction *local_80;
  UObject *local_78;
  FKey local_70;
  FKey local_58;
  
  if (param_1 == (FDS_GameOptionBaseTableRow *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7365020523455053792>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Option\\DS_GameOptionData.cpp"
                       ,0x20,"false");
    if (!bVar8) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->GameOptionID = param_1->ID;
  EVar3 = param_1->ComponentType;
  this->ComponentType = EVar3;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  if (EVar3 == KeySettings) {
    if ((param_1->DefaultValue).ArrayNum < 1) goto LAB_14bacbe62;
    UDS_InputMappingDataAsset::GetInst();
    bVar8 = FWeakObjectPtr::IsValid(&local_a8);
    if (bVar8) {
      ADS_PlayerController::GetPlayerController();
      bVar8 = FWeakObjectPtr::IsValid(&local_res18);
      if ((bVar8) && (param_1->Value2 != 0)) {
        this_00 = (UDS_InputMappingDataAsset *)FWeakObjectPtr::Get(&local_a8);
        UDS_InputMappingDataAsset::GetMappingContext(this_00,(EDS_InputMappingType)&local_res10);
        if (local_res10 != (UObject *)0x0) {
          if (((param_1->DefaultValue).ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          EVar10 = *(EDS_KeyActionType *)(param_1->DefaultValue).AllocatorInstance.Data;
          pUVar11 = FWeakObjectPtr::Get(&local_res18);
          pUVar12 = DS_InputUtil::GetInputAction
                              (*(UDS_InputConfig **)&pUVar11[0x30].field_0x8,EVar10);
          if (pUVar12 != (UInputAction *)0x0) {
            EVar4 = (EDS_InputDeviceType)param_1->Value1;
            local_a0 = pUVar12;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar12);
            }
            local_98 = local_res10;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res10 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res10);
            }
            DS_InputUtil::GetKey
                      (&local_58,(TObjectPtr<UInputMappingContext>)&local_98,
                       (TObjectPtr<UInputAction_const_>)&local_a0,EVar10,EVar4);
            local_d8 = DS_InputUtil::GetKeyType(&local_58);
            if (((local_f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d8) &&
                ((FScriptContainerElement *)&local_d8 <
                 local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayMax * 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = local_f8.ArrayNum;
            if (local_f8.ArrayNum == local_f8.ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
            }
            local_f8.ArrayNum = iVar9 + 1;
            *(EDS_KeyType *)(local_f8.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_d8;
            local_90 = pUVar12;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar12);
            }
            local_88 = local_res10;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res10 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res10);
            }
            DS_InputUtil::GetChordInputAction
                      ((TObjectPtr<UInputMappingContext>)&local_res20,
                       (TObjectPtr<UInputAction_const_>)&local_88,(EDS_InputDeviceType)&local_90);
            if (local_res20 == (UInputAction *)0x0) {
              local_d0[0] = 0;
              if (((local_f8.AllocatorInstance.Data <= (FScriptContainerElement *)local_d0) &&
                  ((FScriptContainerElement *)local_d0 <
                   local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayMax * 4)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar9 = local_f8.ArrayNum;
              if (local_f8.ArrayNum == local_f8.ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
              }
              local_f8.ArrayNum = iVar9 + 1;
              *(undefined4 *)(local_f8.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_d0[0];
            }
            else {
              pUVar11 = FWeakObjectPtr::Get(&local_res18);
              EVar10 = UDS_InputConfig::FindKeyActionType
                                 (*(UDS_InputConfig **)&pUVar11[0x30].field_0x8,local_res20,true);
              local_80 = local_res20;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_res20 != (UInputAction *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_res20);
              }
              local_78 = local_res10;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_res10 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_res10);
              }
              DS_InputUtil::GetKey
                        (&local_70,(TObjectPtr<UInputMappingContext>)&local_78,
                         (TObjectPtr<UInputAction_const_>)&local_80,EVar10,EVar4);
              local_d4 = DS_InputUtil::GetKeyType(&local_70);
              if (((local_f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d4) &&
                  ((FScriptContainerElement *)&local_d4 <
                   local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayMax * 4)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar9 = local_f8.ArrayNum;
              if (local_f8.ArrayNum == local_f8.ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
              }
              local_f8.ArrayNum = iVar9 + 1;
              *(EDS_KeyType *)(local_f8.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_d4;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_70.KeyDetails.SharedReferenceCount.ReferenceController);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_58.KeyDetails.SharedReferenceCount.ReferenceController);
          }
        }
      }
    }
  }
  else if (EVar3 == ColorButton) {
    uVar5 = (param_1->DefaultValue).ArrayNum;
    uVar14 = (ulonglong)uVar5;
    ::FString::FString(&local_b8,L"");
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
    DestructItems<FString,int>((FString *)local_e8.Data,(int)local_e0);
    if (local_e0._4_4_ != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar5,&local_e8,0,(int *)((longlong)&local_e0 + 4));
    }
    if (0 < (int)uVar5) {
      do {
        if (((local_e8.Data <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             local_e8.Data + (longlong)(int)local_e0._4_4_ * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (int)local_e0;
        if ((int)local_e0 == local_e0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_e8,(int *)((longlong)&local_e0 + 4));
        }
        FVar7.Data = local_b8.Data.AllocatorInstance.Data;
        pFVar13 = local_e8.Data + (longlong)iVar9 * 0x10;
        local_e0 = CONCAT44(local_e0._4_4_,iVar9 + 1);
        *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
        iVar9 = local_b8.Data.ArrayNum;
        *(int *)(pFVar13 + 8) = iVar9;
        if (iVar9 == 0) {
          *(int *)(pFVar13 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,0,(ForAnyElementType *)pFVar13,iVar9,(int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar13,FVar7.Data,(longlong)iVar9 * 2);
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar9 = 0;
    if (EVar3 == TextField) goto LAB_14bacbe62;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_f8,&param_1->DefaultValue);
  }
  iVar9 = local_f8.ArrayNum;
LAB_14bacbe62:
  FVar7.Data = local_f8.AllocatorInstance.Data;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = iVar9;
  if (iVar9 == 0) {
    local_c8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,&local_c8.AllocatorInstance,iVar9,&local_c8.ArrayMax);
    memcpy(local_c8.AllocatorInstance.Data,FVar7.Data,(longlong)iVar9 << 2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->GameOptionValues,&local_c8);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ChangedCheckGameOptionValues,&local_c8);
  BroadcastDataToVM(this);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  pTVar1 = &this->GameOptionStringValues;
  if (pTVar1 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_e8) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(this->GameOptionStringValues).ArrayNum);
    FVar7.Data = local_e8.Data;
    iVar9 = (int)local_e0;
    piVar2 = &(this->GameOptionStringValues).ArrayMax;
    (this->GameOptionStringValues).ArrayNum = (int)local_e0;
    if (((int)local_e0 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_e0,*piVar2,&pTVar1->AllocatorInstance,(int)local_e0,piVar2);
      ConstructItems<FString,FString,int>
                ((pTVar1->AllocatorInstance).Data,(FString *)FVar7.Data,iVar9);
    }
  }
  pTVar1 = &this->ChangedCheckGameOptionStringValues;
  if (pTVar1 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_e8) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,
               (this->ChangedCheckGameOptionStringValues).ArrayNum);
    FVar7.Data = local_e8.Data;
    iVar9 = (int)local_e0;
    piVar2 = &(this->ChangedCheckGameOptionStringValues).ArrayMax;
    (this->ChangedCheckGameOptionStringValues).ArrayNum = (int)local_e0;
    if (((int)local_e0 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_e0,*piVar2,&pTVar1->AllocatorInstance,(int)local_e0,piVar2);
      ConstructItems<FString,FString,int>
                ((pTVar1->AllocatorInstance).Data,(FString *)FVar7.Data,iVar9);
    }
  }
  BroadcastDataToVM(this);
  DestructItems<FString,int>((FString *)local_e8.Data,(int)local_e0);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// SetGameOptionKeyValue @ 14bacc500

void __thiscall
UDS_GameOptionData::SetGameOptionKeyValue
          (UDS_GameOptionData *this,EDS_GameOptionKeySettingIndex param_1,
          TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned_char> *paVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = param_1 * 2;
  uVar1 = uVar9 + 1;
  if (((int)uVar9 < 0) || (iVar8 = (this->GameOptionValues).ArrayNum, iVar8 <= (int)uVar9)) {
    iVar8 = 0x9f;
    paVar7 = &bGEnsureHasExecuted<_7365020523455053665>;
  }
  else if ((int)uVar1 < iVar8) {
    if (param_2->ArrayNum == 2) {
      uVar2 = *(undefined4 *)(param_2->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < (this->GameOptionValues).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(undefined4 *)((this->GameOptionValues).AllocatorInstance.Data + (longlong)(int)uVar9 * 4) =
           uVar2;
      if (param_2->ArrayNum < 2) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar2 = *(undefined4 *)((param_2->AllocatorInstance).Data + 4);
      uVar9 = 0;
      if ((int)uVar1 < (this->GameOptionValues).ArrayNum) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(undefined4 *)((this->GameOptionValues).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) =
           uVar2;
      BroadcastDataToVM(this);
      goto LAB_14bacc69d;
    }
    iVar8 = 0xa1;
    paVar7 = &bGEnsureHasExecuted<_7365020523455053663>;
  }
  else {
    iVar8 = 0xa0;
    paVar7 = &bGEnsureHasExecuted<_7365020523455053664>;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Option\\DS_GameOptionData.cpp"
                     ,iVar8,"false");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bacc69d:
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// SetGameOptionValue @ 14bacc6c0

void __thiscall
UDS_GameOptionData::SetGameOptionValue(UDS_GameOptionData *this,int param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if ((-1 < param_1) && (param_1 < (this->GameOptionStringValues).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->GameOptionStringValues).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = (param_2->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange
              ((FString *)
               ((this->GameOptionStringValues).AllocatorInstance.Data + (longlong)param_1 * 0x10),
               (wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar5);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7365020523455053675>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Option\\DS_GameOptionData.cpp"
                     ,0x95,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// SetGameOptionValue @ 14bacc7c0

void __thiscall
UDS_GameOptionData::SetGameOptionValue(UDS_GameOptionData *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->GameOptionValues).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->GameOptionValues).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
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
    *(int *)((this->GameOptionValues).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7365020523455053682>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Option\\DS_GameOptionData.cpp"
                     ,0x8e,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetGameOptionValues @ 14bacc890

void __thiscall
UDS_GameOptionData::SetGameOptionValues
          (UDS_GameOptionData *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->GameOptionStringValues,param_1);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->ChangedCheckGameOptionStringValues,param_1);
  BroadcastDataToVM(this);
  return;
}

// SetGameOptionValues @ 14bacc8d0

void __thiscall
UDS_GameOptionData::SetGameOptionValues
          (UDS_GameOptionData *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->GameOptionValues,param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ChangedCheckGameOptionValues,param_1);
  BroadcastDataToVM(this);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

