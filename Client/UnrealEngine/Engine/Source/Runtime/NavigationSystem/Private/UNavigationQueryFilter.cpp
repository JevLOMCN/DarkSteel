// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 15

// StaticClass @ 146d62260

UClass * __cdecl UNavigationQueryFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationQueryFilter",
               &Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton,
               StaticRegisterNativesUNavigationQueryFilter,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavigationQueryFilter>,
               InternalVTableHelperCtorCaller<UNavigationQueryFilter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton;
}

// UNavigationQueryFilter @ 146d769a0

UNavigationQueryFilter * __thiscall
UNavigationQueryFilter::UNavigationQueryFilter(UNavigationQueryFilter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavigationQueryFilter__6B_;
  (this->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Areas).ArrayNum = 0;
  (this->Areas).ArrayMax = 0;
  (this->IncludeFlags).field0_0x0.Packed = 0;
  (this->ExcludeFlags).field0_0x0.Packed = 0;
  return this;
}

// UNavigationQueryFilter @ 146d769e0

UNavigationQueryFilter * __thiscall
UNavigationQueryFilter::UNavigationQueryFilter
          (UNavigationQueryFilter *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->bInstantiateForQuerier = 0;
  this->bIsMetaFilter = 0;
  this->_padding_ = (longlong)&___7UNavigationQueryFilter__6B_;
  (this->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Areas).ArrayNum = 0;
  (this->Areas).ArrayMax = 0;
  (this->IncludeFlags).field0_0x0.Packed = 0xffff;
  (this->ExcludeFlags).field0_0x0.Packed = 0;
  return this;
}

// ~UNavigationQueryFilter @ 146d78f30

void __thiscall UNavigationQueryFilter::~UNavigationQueryFilter(UNavigationQueryFilter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNavigationQueryFilter__6B_;
  pFVar1 = (this->Areas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddEnteringCostOverride @ 146d81890

void __thiscall
UNavigationQueryFilter::AddEnteringCostOverride
          (UNavigationQueryFilter *this,TSubclassOf<UNavArea> param_1,float param_2)

{
  TArray<FNavigationFilterArea,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  UObject *local_res8;
  UObject *local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  uVar6 = FindAreaOverride(this,(TSubclassOf<UNavArea>)&local_res8);
  if (uVar6 == 0xffffffff) {
    local_3c = 0;
    local_34 = 0;
    local_40 = 0x3f800000;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    local_48 = *(UObject **)param_1.Class.field0_0x0;
    pTVar1 = &this->Areas;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->Areas).ArrayMax * 0x18))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = (this->Areas).ArrayNum;
    piVar2 = &(this->Areas).ArrayMax;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    (this->Areas).ArrayNum = uVar6 + 1;
    lVar8 = (longlong)(int)uVar6;
    *(UObject **)(pFVar3 + lVar8 * 0x18) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48);
    }
    uVar7 = *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10);
    *(undefined4 *)(pFVar3 + lVar8 * 0x18 + 8) = local_40;
    *(undefined4 *)(pFVar3 + lVar8 * 0x18 + 0xc) = (undefined4)local_3c;
    uVar9 = local_3c._4_4_ & 1;
    *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) = uVar9 | uVar7 & 0xfffffffe;
    *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) = uVar9 | uVar7 & 0xfffffffc | local_3c._4_4_ & 2;
    *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) =
         uVar9 | uVar7 & 0xfffffff8 | local_3c._4_4_ & 2 | local_3c._4_4_ & 4;
  }
  uVar7 = 0;
  if ((int)uVar6 < (this->Areas).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Areas).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 0x10;
  *(uint *)pFVar3 = *(uint *)pFVar3 | 4;
  uVar7 = 0;
  if ((int)uVar6 < (this->Areas).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(float *)((this->Areas).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 0xc) = param_2;
  return;
}

// AddExcludedArea @ 146d81b00

void __thiscall
UNavigationQueryFilter::AddExcludedArea(UNavigationQueryFilter *this,TSubclassOf<UNavArea> param_1)

{
  TArray<FNavigationFilterArea,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  UObject *local_res8;
  UObject *local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  uVar6 = FindAreaOverride(this,(TSubclassOf<UNavArea>)&local_res8);
  if (uVar6 == 0xffffffff) {
    local_2c = 0;
    local_24 = 0;
    local_30 = 0x3f800000;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    local_38 = *(UObject **)param_1.Class.field0_0x0;
    pTVar1 = &this->Areas;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Areas).ArrayMax * 0x18))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = (this->Areas).ArrayNum;
    piVar2 = &(this->Areas).ArrayMax;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    (this->Areas).ArrayNum = uVar6 + 1;
    lVar7 = (longlong)(int)uVar6;
    *(UObject **)(pFVar3 + lVar7 * 0x18) = local_38;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38);
    }
    uVar9 = *(uint *)(pFVar3 + lVar7 * 0x18 + 0x10);
    *(undefined4 *)(pFVar3 + lVar7 * 0x18 + 8) = local_30;
    *(undefined4 *)(pFVar3 + lVar7 * 0x18 + 0xc) = (undefined4)local_2c;
    uVar8 = local_2c._4_4_ & 1;
    *(uint *)(pFVar3 + lVar7 * 0x18 + 0x10) = uVar8 | uVar9 & 0xfffffffe;
    *(uint *)(pFVar3 + lVar7 * 0x18 + 0x10) = uVar8 | uVar9 & 0xfffffffc | local_2c._4_4_ & 2;
    *(uint *)(pFVar3 + lVar7 * 0x18 + 0x10) =
         uVar8 | uVar9 & 0xfffffff8 | local_2c._4_4_ & 2 | local_2c._4_4_ & 4;
  }
  uVar9 = 0;
  if ((int)uVar6 < (this->Areas).ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Areas).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 0x10;
  *(uint *)pFVar3 = *(uint *)pFVar3 | 1;
  return;
}

// AddTravelCostOverride @ 146d83d30

void __thiscall
UNavigationQueryFilter::AddTravelCostOverride
          (UNavigationQueryFilter *this,TSubclassOf<UNavArea> param_1,float param_2)

{
  TArray<FNavigationFilterArea,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  UObject *local_res8;
  UObject *local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  uVar6 = FindAreaOverride(this,(TSubclassOf<UNavArea>)&local_res8);
  if (uVar6 == 0xffffffff) {
    local_3c = 0;
    local_34 = 0;
    local_40 = 0x3f800000;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    local_48 = *(UObject **)param_1.Class.field0_0x0;
    pTVar1 = &this->Areas;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->Areas).ArrayMax * 0x18))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = (this->Areas).ArrayNum;
    piVar2 = &(this->Areas).ArrayMax;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    (this->Areas).ArrayNum = uVar6 + 1;
    lVar8 = (longlong)(int)uVar6;
    *(UObject **)(pFVar3 + lVar8 * 0x18) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48);
    }
    uVar7 = *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10);
    *(undefined4 *)(pFVar3 + lVar8 * 0x18 + 8) = local_40;
    *(undefined4 *)(pFVar3 + lVar8 * 0x18 + 0xc) = (undefined4)local_3c;
    uVar9 = local_3c._4_4_ & 1;
    *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) = uVar9 | uVar7 & 0xfffffffe;
    *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) = uVar9 | uVar7 & 0xfffffffc | local_3c._4_4_ & 2;
    *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) =
         uVar9 | uVar7 & 0xfffffff8 | local_3c._4_4_ & 2 | local_3c._4_4_ & 4;
  }
  uVar7 = 0;
  if ((int)uVar6 < (this->Areas).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Areas).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 0x10;
  *(uint *)pFVar3 = *(uint *)pFVar3 | 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->Areas).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(float *)((this->Areas).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 8) = param_2;
  return;
}

// FindAreaOverride @ 146d95670

int __thiscall
UNavigationQueryFilter::FindAreaOverride(UNavigationQueryFilter *this,TSubclassOf<UNavArea> param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = 0;
  if (0 < (this->Areas).ArrayNum) {
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (this->Areas).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->Areas).AllocatorInstance.Data;
      lVar8 = *(longlong *)(pFVar1 + lVar10);
      if ((lVar8 == 0) || (pUVar6 = UNavArea::StaticClass(), pUVar6 == (UClass *)0x0)) {
LAB_146d9572a:
        lVar8 = 0;
      }
      else {
        iVar5 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar8 + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_146d9572a;
        lVar8 = *(longlong *)(pFVar1 + lVar10);
      }
      lVar7 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar7 == 0) || (pUVar6 = UNavArea::StaticClass(), pUVar6 == (UClass *)0x0)) {
LAB_146d95767:
        lVar7 = 0;
      }
      else {
        iVar5 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_146d95767;
        lVar7 = *(longlong *)param_1.Class.field0_0x0;
      }
      if (lVar8 == lVar7) {
        return uVar9;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar9 < (this->Areas).ArrayNum);
  }
  return -1;
}

// GetPrivateStaticClass @ 146da0d20

UClass * __cdecl UNavigationQueryFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationQueryFilter",
               &Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton,
               StaticRegisterNativesUNavigationQueryFilter,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavigationQueryFilter>,
               InternalVTableHelperCtorCaller<UNavigationQueryFilter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton;
}

// GetQueryFilter @ 146da10d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FNavigationQueryFilter_const_,1> * __thiscall
UNavigationQueryFilter::GetQueryFilter
          (UNavigationQueryFilter *this,
          TSharedPtr<FNavigationQueryFilter_const_,1> *__return_storage_ptr__,
          ANavigationData *param_1,UObject *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  bool bVar5;
  UClass *pUVar6;
  UNavigationQueryFilter *this_00;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar7;
  TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_> *pTVar8;
  UClass *pUVar9;
  FSharedReferencer<1> FVar10;
  FNavigationQueryFilter *pFVar11;
  FSharedReferencer<1> FStack_a0;
  TObjectPtr<UClass>_u_0 local_98;
  TSharedPtr<FNavigationQueryFilter,1> local_90;
  UClass *local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  UClass **local_68;
  FNavigationQueryFilter **local_60;
  FNavigationQueryFilter *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((((this->bIsMetaFilter != 0) && (param_2 != (UObject *)0x0)) &&
      ((**(code **)(this->_padding_ + 0x2b8))(this,&local_98,param_2), TVar4 = local_98,
      local_98.DebugPtr != (UClass *)0x0)) && (pUVar6 = StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (local_98.DebugPtr != (UClass *)0x0)) {
      this_00 = TSubclassOf<UNavigationQueryFilter>::GetDefaultObject
                          ((TSubclassOf<UNavigationQueryFilter> *)&local_98.ObjectPtr);
      if ((this_00 == (UNavigationQueryFilter *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefFilterOb",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavFilters\\NavigationQueryFilter.cpp"
                             ,0x1f,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FNavigationQueryFilter_const_,1> *)(*pcVar3)();
        return pTVar7;
      }
      if (this_00->bIsMetaFilter == 0) {
        GetQueryFilter(this_00,__return_storage_ptr__,param_1,param_2);
        return __return_storage_ptr__;
      }
    }
  }
  if (this->bInstantiateForQuerier == 0) {
    pUVar6 = (UClass *)this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 != (UClass *)0x0) goto LAB_146da1201;
LAB_146da122f:
      pUVar6 = (UClass *)0x0;
    }
    else {
      if (pUVar6 == (UClass *)0x0) goto LAB_146da122f;
      UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_146da1201:
      pUVar9 = StaticClass();
      if (pUVar9 == (UClass *)0x0) goto LAB_146da122f;
      iVar1 = (int)pUVar9->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_146da122f;
    }
    pTVar8 = TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
                     *)&param_1->QueryFilters,pUVar6);
    if (pTVar8 == (TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_> *)0x0) {
      FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = (FNavigationQueryFilter *)0x0;
    }
    else {
      FVar10.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar8->field_0x10;
      pFVar11 = *(FNavigationQueryFilter **)&pTVar8->field_0x8;
      if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar10.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    local_30 = 0;
    local_38 = 0;
    FStack_a0.ReferenceController = FVar10.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar11 != (FNavigationQueryFilter *)0x0) goto LAB_146da13d2;
  }
  else {
    local_40 = 0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_48 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pTVar2 = (param_1->DefaultQueryFilter).SharedReferenceCount.ReferenceController;
  pFVar11 = (param_1->DefaultQueryFilter).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar11 == (FNavigationQueryFilter *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FNavigationQueryFilter_const_,1> *)(*pcVar3)();
    return pTVar7;
  }
  FNavigationQueryFilter::GetCopy(pFVar11,&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  (**(code **)(this->_padding_ + 0x2b0))(this,param_1,param_2,local_90.Object);
  local_70.ReferenceController = local_90.SharedReferenceCount.ReferenceController;
  if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  FVar10.ReferenceController = FStack_a0.ReferenceController;
  if (this->bInstantiateForQuerier == 0) {
    local_58 = local_90.Object;
    pTStack_50 = FStack_a0.ReferenceController;
    if (FStack_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar6 = (UClass *)this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 != (UClass *)0x0) goto LAB_146da1360;
LAB_146da138e:
      local_80 = (UClass *)0x0;
    }
    else {
      if (pUVar6 == (UClass *)0x0) goto LAB_146da138e;
      UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_146da1360:
      pUVar9 = StaticClass();
      if (pUVar9 == (UClass *)0x0) goto LAB_146da138e;
      iVar1 = (int)pUVar9->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      local_80 = pUVar6;
      if (!bVar5) goto LAB_146da138e;
    }
    local_68 = &local_80;
    local_60 = &local_58;
    TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_*_&&,TSharedPtr<FNavigationQueryFilter_const_,1>_const_&>_>
              ((TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
                *)&param_1->QueryFilters,
               (TPairInitializer<UClass_*_&&,TSharedPtr<FNavigationQueryFilter_const_,1>_const_&> *)
               &stack0x00000008,(bool *)&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  pFVar11 = local_90.Object;
LAB_146da13d2:
  __return_storage_ptr__->Object = pFVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetQueryFilter @ 146da1410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FNavigationQueryFilter_const_,1> * __cdecl
UNavigationQueryFilter::GetQueryFilter
          (TSharedPtr<FNavigationQueryFilter_const_,1> *__return_storage_ptr__,
          ANavigationData *param_1,UObject *param_2,TSubclassOf<UNavigationQueryFilter> param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNavigationQueryFilter *this;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar6;
  
  lVar2 = *(longlong *)param_3.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_3.Class.field0_0x0 != 0)) {
      this = TSubclassOf<UNavigationQueryFilter>::GetDefaultObject
                       ((TSubclassOf<UNavigationQueryFilter> *)param_3.Class.field0_0x0);
      if ((this == (UNavigationQueryFilter *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefFilterOb",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavFilters\\NavigationQueryFilter.cpp"
                             ,0x71,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FNavigationQueryFilter_const_,1> *)(*pcVar3)();
        return pTVar6;
      }
      GetQueryFilter(this,__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FNavigationQueryFilter *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetQueryFilter @ 146da14f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FNavigationQueryFilter_const_,1> * __cdecl
UNavigationQueryFilter::GetQueryFilter
          (TSharedPtr<FNavigationQueryFilter_const_,1> *__return_storage_ptr__,
          ANavigationData *param_1,TSubclassOf<UNavigationQueryFilter> param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNavigationQueryFilter *this;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar6;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
      this = TSubclassOf<UNavigationQueryFilter>::GetDefaultObject
                       ((TSubclassOf<UNavigationQueryFilter> *)param_2.Class.field0_0x0);
      if ((this == (UNavigationQueryFilter *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefFilterOb",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavFilters\\NavigationQueryFilter.cpp"
                             ,100,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FNavigationQueryFilter_const_,1> *)(*pcVar3)();
        return pTVar6;
      }
      GetQueryFilter(this,__return_storage_ptr__,param_1,(UObject *)0x0);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FNavigationQueryFilter *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSimpleFilterForAgent @ 146da2550

TSubclassOf<UNavigationQueryFilter> __thiscall
UNavigationQueryFilter::GetSimpleFilterForAgent(UNavigationQueryFilter *this,UObject *param_1)

{
  *(undefined8 *)param_1 = 0;
  return (TSubclassOf<UNavigationQueryFilter>)(TObjectPtr<UClass>)param_1;
}

// InitializeFilter @ 146da3d40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNavigationQueryFilter::InitializeFilter
          (UNavigationQueryFilter *this,ANavigationData *param_1,UObject *param_2,
          FNavigationQueryFilter *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  uint *puVar9;
  uchar uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  
  fVar5 = __real_3f800000;
  uVar12 = 0;
  if (0 < (this->Areas).ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->Areas).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Areas).AllocatorInstance.Data;
      lVar3 = *(longlong *)(pFVar2 + lVar11);
      if ((lVar3 == 0) || (pUVar8 = UNavArea::StaticClass(), pUVar8 == (UClass *)0x0)) {
LAB_146da3e2c:
        pUVar8 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_146da3e2c;
        pUVar8 = *(UClass **)(pFVar2 + lVar11);
      }
      puVar9 = (uint *)TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                       ::Find((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                               *)&param_1->AreaClassToIdMap,pUVar8);
      if ((puVar9 != (uint *)0x0) && (uVar7 = *puVar9, uVar7 != 0xffffffff)) {
        uVar10 = (uchar)uVar7;
        if ((*(uint *)(pFVar2 + lVar11 + 0x10) & 1) == 0) {
          if ((*(uint *)(pFVar2 + lVar11 + 0x10) & 2) != 0) {
            fVar13 = *(float *)(pFVar2 + lVar11 + 8);
            if (*(float *)(pFVar2 + lVar11 + 8) <= fVar5) {
              fVar13 = fVar5;
            }
            if (((uVar7 != (uVar7 & 0xff)) || ((int)uVar7 < 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IntFitsIn<OutType>(In)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                   ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FNavigationQueryFilter::SetAreaCost(param_3,uVar10,fVar13);
          }
          if (((byte)pFVar2[lVar11 + 0x10] & 4) != 0) {
            fVar13 = *(float *)(pFVar2 + lVar11 + 0xc);
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
            if (((uVar7 != (uVar7 & 0xff)) || ((int)uVar7 < 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IntFitsIn<OutType>(In)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                   ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FNavigationQueryFilter::SetFixedAreaEnteringCost(param_3,uVar10,fVar13);
          }
        }
        else {
          if (((uVar7 != (uVar7 & 0xff)) || ((int)uVar7 < 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FNavigationQueryFilter::SetExcludedArea(param_3,uVar10);
        }
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar12 < (this->Areas).ArrayNum);
  }
  FNavigationQueryFilter::SetIncludeFlags(param_3,(this->IncludeFlags).field0_0x0.Packed);
  FNavigationQueryFilter::SetExcludeFlags(param_3,(this->ExcludeFlags).field0_0x0.Packed);
  return;
}

// StaticRegisterNativesUNavigationQueryFilter @ 146dbaa50

void __cdecl UNavigationQueryFilter::StaticRegisterNativesUNavigationQueryFilter(void)

{
  return;
}

