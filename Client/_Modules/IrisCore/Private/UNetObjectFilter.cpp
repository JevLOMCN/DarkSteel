// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 23

// StaticClass @ 14421ef40

UClass * __cdecl UNetObjectFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilter",
               &Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton,
               StaticRegisterNativesUNetObjectFilter,0x60,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectFilter>,
               InternalVTableHelperCtorCaller<UNetObjectFilter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton;
}

// UNetObjectFilter @ 14422a300

UNetObjectFilter * __thiscall UNetObjectFilter::UNetObjectFilter(UNetObjectFilter *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UNetObjectFilter__6B_;
  (this->FilteredObjects).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredObjects).Storage.ArrayNum = 0;
  (this->FilteredObjects).Storage.ArrayMax = 0;
  (this->FilteredObjects).BitCount = 0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->FilterTraits = None;
  (this->FilteringInfos).DataPtr = (FNetObjectFilteringInfo *)0x0;
  (this->FilteringInfos).ArrayNum = 0;
  return this;
}

// UNetObjectFilter @ 14422a350

UNetObjectFilter * __thiscall
UNetObjectFilter::UNetObjectFilter(UNetObjectFilter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetObjectFilter__6B_;
  (this->FilteredObjects).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredObjects).Storage.ArrayNum = 0;
  (this->FilteredObjects).Storage.ArrayMax = 0;
  (this->FilteredObjects).BitCount = 0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->FilterTraits = None;
  (this->FilteringInfos).DataPtr = (FNetObjectFilteringInfo *)0x0;
  (this->FilteringInfos).ArrayNum = 0;
  return this;
}

// ~UNetObjectFilter @ 14422b4a0

void __thiscall UNetObjectFilter::~UNetObjectFilter(UNetObjectFilter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetObjectFilter__6B_;
  pFVar1 = (this->FilteredObjects).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddConnection @ 14422de70

void __thiscall UNetObjectFilter::AddConnection(UNetObjectFilter *this,uint param_1)

{
  return;
}

// AddObject @ 14422e870

bool __thiscall
UNetObjectFilter::AddObject
          (UNetObjectFilter *this,uint param_1,FNetObjectFilterAddObjectParams *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Filtering\\NetObjectFilter.h"
             ,0xc2,L"Pure virtual not implemented (%s)");
  return false;
}

// Deinit @ 144236300

void __thiscall UNetObjectFilter::Deinit(UNetObjectFilter *this)

{
  uint uStack_c;
  
  (**(code **)(this->_padding_ + 0x300))();
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->FilteringInfos).DataPtr = (FNetObjectFilteringInfo *)0x0;
  *(ulonglong *)&(this->FilteringInfos).ArrayNum = (ulonglong)uStack_c << 0x20;
  return;
}

// Filter @ 1442389d0

void __thiscall UNetObjectFilter::Filter(UNetObjectFilter *this,FNetObjectFilteringParams *param_1)

{
  return;
}

// GetFilteringInfo @ 14423c500

FNetObjectFilteringInfo * __thiscall
UNetObjectFilter::GetFilteringInfo(UNetObjectFilter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNetObjectFilteringInfo *pFVar4;
  
  if ((param_1 < (this->FilteredObjects).BitCount) &&
     ((*(uint *)((this->FilteredObjects).Storage.AllocatorInstance.Data +
                (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0)) {
    uVar3 = 0;
    if ((int)param_1 < (this->FilteringInfos).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNetObjectFilteringInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (this->FilteringInfos).DataPtr + (int)param_1;
  }
  return (FNetObjectFilteringInfo *)0x0;
}

// GetObjectIndex @ 14423d0e0

uint __thiscall UNetObjectFilter::GetObjectIndex(UNetObjectFilter *this,FNetRefHandle param_1)

{
  uint uVar1;
  
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (this->NetRefHandleManager,param_1);
  return uVar1;
}

// GetPrivateStaticClass @ 14423e210

UClass * __cdecl UNetObjectFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilter",
               &Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton,
               StaticRegisterNativesUNetObjectFilter,0x60,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectFilter>,
               InternalVTableHelperCtorCaller<UNetObjectFilter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilter.InnerSingleton;
}

// Init @ 144240e20

void __thiscall UNetObjectFilter::Init(UNetObjectFilter *this,FNetObjectFilterInitParams *param_1)

{
  UReplicationSystem *this_00;
  code *pcVar1;
  bool bVar2;
  FReplicationSystemInternal *pFVar3;
  FScriptContainerElement *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  UE::Net::FNetBitArray::Init(&this->FilteredObjects,param_1->CurrentMaxInternalIndex);
  this_00 = (param_1->ReplicationSystem).field0_0x0.DebugPtr;
  if (this_00 == (UReplicationSystem *)0x0) {
    local_18 = (FScriptContainerElement *)0x0;
    iStack_10 = 0;
  }
  else {
    pFVar3 = UReplicationSystem::GetReplicationSystemInternal(this_00);
    local_18 = (pFVar3->Filtering).NetObjectFilteringInfos.AllocatorInstance.Data;
    iStack_10 = (pFVar3->Filtering).NetObjectFilteringInfos.ArrayNum;
    if ((iStack_10 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->FilteringInfos).DataPtr = (FNetObjectFilteringInfo *)local_18;
  *(ulonglong *)&(this->FilteringInfos).ArrayNum = CONCAT44(uStack_c,iStack_10);
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal
                     ((param_1->ReplicationSystem).field0_0x0.DebugPtr);
  this->NetRefHandleManager = &pFVar3->NetRefHandleManager;
                    /* WARNING: Could not recover jumptable at 0x000144240ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))(this,param_1);
  return;
}

// MaxInternalNetRefIndexIncreased @ 144244b70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNetObjectFilter::MaxInternalNetRefIndexIncreased
          (UNetObjectFilter *this,uint param_1,TArrayView<FNetObjectFilteringInfo,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  (this->FilteredObjects).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->FilteredObjects).Storage,param_1 + 0x1f >> 5,No);
  uVar2 = (this->FilteredObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->FilteredObjects).Storage.AllocatorInstance.Data +
             (longlong)(this->FilteredObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  uVar4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar5 = param_2->ArrayNum;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  lVar3 = this->_padding_;
  *(undefined4 *)&(this->FilteringInfos).DataPtr = *(undefined4 *)&param_2->DataPtr;
  *(undefined4 *)((longlong)&(this->FilteringInfos).DataPtr + 4) = uVar4;
  (this->FilteringInfos).ArrayNum = iVar5;
  *(undefined4 *)&(this->FilteringInfos).field_0xc = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000144244be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x308))(this,param_1);
  return;
}

// OnDeinit @ 144245bb0

void __thiscall UNetObjectFilter::OnDeinit(UNetObjectFilter *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Filtering\\NetObjectFilter.h"
             ,0xf7,L"Pure virtual not implemented (%s)");
  return;
}

// OnInit @ 144245ec0

void __thiscall UNetObjectFilter::OnInit(UNetObjectFilter *this,FNetObjectFilterInitParams *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Filtering\\NetObjectFilter.h"
             ,0xf4,L"Pure virtual not implemented (%s)");
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144246a50

void __thiscall
UNetObjectFilter::OnMaxInternalNetRefIndexIncreased(UNetObjectFilter *this,uint param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Filtering\\NetObjectFilter.h"
             ,0xfa,L"Pure virtual not implemented (%s)");
  return;
}

// PostFilter @ 144246fe0

void __thiscall
UNetObjectFilter::PostFilter(UNetObjectFilter *this,FNetObjectPostFilteringParams *param_1)

{
  return;
}

// PreFilter @ 144247350

void __thiscall
UNetObjectFilter::PreFilter(UNetObjectFilter *this,FNetObjectPreFilteringParams *param_1)

{
  return;
}

// PrintDebugInfoForObject @ 144248450

FString * __thiscall
UNetObjectFilter::PrintDebugInfoForObject
          (UNetObjectFilter *this,FString *__return_storage_ptr__,FDebugInfoParams *param_1,
          uint param_2)

{
  ::FName::ToString(&param_1->FilterName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RemoveConnection @ 14424deb0

void __thiscall UNetObjectFilter::RemoveConnection(UNetObjectFilter *this,uint param_1)

{
  return;
}

// RemoveObject @ 14424f290

void __thiscall
UNetObjectFilter::RemoveObject(UNetObjectFilter *this,uint param_1,FNetObjectFilteringInfo *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\Filtering\\NetObjectFilter.h"
             ,0xc5,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUNetObjectFilter @ 1442548f0

void __cdecl UNetObjectFilter::StaticRegisterNativesUNetObjectFilter(void)

{
  return;
}

// UpdateObjects @ 14425a7e0

void __thiscall
UNetObjectFilter::UpdateObjects(UNetObjectFilter *this,FNetObjectFilterUpdateParams *param_1)

{
  return;
}

