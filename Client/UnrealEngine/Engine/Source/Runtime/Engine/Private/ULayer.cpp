// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147e43a30

UClass * __cdecl ULayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Layer",&Z_Registration_Info_UClass_ULayer.InnerSingleton,
               StaticRegisterNativesULayer,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULayer>,InternalVTableHelperCtorCaller<ULayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULayer.InnerSingleton;
}

// ULayer @ 147e55450

ULayer * __thiscall ULayer::ULayer(ULayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULayer__6B_;
  (this->LayerName).ComparisonIndex = 0;
  (this->LayerName).Number = 0;
  (this->ActorStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorStats).ArrayNum = 0;
  (this->ActorStats).ArrayMax = 0;
  return this;
}

// ULayer @ 147e55490

ULayer * __thiscall ULayer::ULayer(ULayer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULayer__6B_;
  (this->LayerName).ComparisonIndex = 0;
  (this->LayerName).Number = 0;
  this->bIsVisible = 1;
  (this->ActorStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorStats).ArrayNum = 0;
  (this->ActorStats).ArrayMax = 0;
  return this;
}

// ~ULayer @ 147e57740

void __thiscall ULayer::~ULayer(ULayer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULayer__6B_;
  pFVar1 = (this->ActorStats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddToStats @ 147e5c0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULayer::AddToStats(ULayer *this,AActor *param_1)

{
  TArray<FLayerActorStats,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UObject *pUVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  UObject *local_28;
  undefined4 local_20;
  
  iVar5 = (this->ActorStats).ArrayNum;
  pTVar1 = &this->ActorStats;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  pUVar3 = (UObject *)param_1->_padding_;
  pFVar7 = pFVar6 + (longlong)iVar5 * 0x10;
  while( true ) {
    if ((this->ActorStats).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FLayerActorStats,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) {
      local_20 = 1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      local_28 = pUVar3;
      if (((pFVar6 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 <
           pFVar6 + (longlong)(this->ActorStats).ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar5 = (this->ActorStats).ArrayNum;
      piVar2 = &(this->ActorStats).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,piVar2);
      }
      pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      (this->ActorStats).ArrayNum = iVar5 + 1;
      *(UObject **)pFVar6 = local_28;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28);
      }
      *(undefined4 *)(pFVar6 + 8) = local_20;
      return;
    }
    if (*(UObject **)pFVar6 == (UObject *)0x0) {
      bVar8 = pUVar3 == (UObject *)0x0;
    }
    else {
      bVar8 = *(UObject **)pFVar6 == pUVar3;
    }
    if (bVar8) break;
    pFVar6 = pFVar6 + 0x10;
  }
  *(int *)(pFVar6 + 8) = *(int *)(pFVar6 + 8) + 1;
  return;
}

// ClearActorStats @ 147e5fdd0

void __thiscall ULayer::ClearActorStats(ULayer *this)

{
  int *piVar1;
  
  piVar1 = &(this->ActorStats).ArrayMax;
  (this->ActorStats).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ActorStats).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetActorStats @ 147e66da0

TArray<FLayerActorStats,TSizedDefaultAllocator<32>_> * __thiscall
ULayer::GetActorStats(ULayer *this)

{
  return &this->ActorStats;
}

// GetLayerName @ 147e67ee0

FName __thiscall ULayer::GetLayerName(ULayer *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->LayerName;
  return in_RDX;
}

// GetPrivateStaticClass @ 147e699b0

UClass * __cdecl ULayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Layer",&Z_Registration_Info_UClass_ULayer.InnerSingleton,
               StaticRegisterNativesULayer,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULayer>,InternalVTableHelperCtorCaller<ULayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULayer.InnerSingleton;
}

// IsVisible @ 147e6e5a0

bool __thiscall ULayer::IsVisible(ULayer *this)

{
  return this->bIsVisible;
}

// RemoveFromStats @ 147e79f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULayer::RemoveFromStats(ULayer *this,AActor *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar2 = param_1->_padding_;
  uVar10 = 0;
  if ((this->ActorStats).ArrayNum < 1) {
    return false;
  }
  lVar12 = 0;
  while( true ) {
    uVar11 = ~uVar10 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar10 < (this->ActorStats).ArrayNum) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar8 = (this->ActorStats).AllocatorInstance.Data;
    lVar3 = *(longlong *)(pFVar8 + lVar12);
    if (lVar3 == 0) {
      bVar5 = lVar2 == 0;
    }
    else {
      bVar5 = lVar3 == lVar2;
    }
    if (bVar5) break;
    uVar10 = uVar10 + 1;
    lVar12 = lVar12 + 0x10;
    if ((this->ActorStats).ArrayNum <= (int)uVar10) {
      return false;
    }
  }
  pFVar8 = pFVar8 + lVar12 + 8;
  *(int *)pFVar8 = *(int *)pFVar8 + -1;
  if (*(int *)pFVar8 == 0) {
    uVar7 = 0;
    if ((int)uVar10 < (this->ActorStats).ArrayNum) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar8 = (this->ActorStats).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
    iVar9 = (this->ActorStats).ArrayNum + ~uVar10;
    if (iVar9 != 0) {
      memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar9 << 4);
    }
    piVar1 = &(this->ActorStats).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->ActorStats).AllocatorInstance,(this->ActorStats).ArrayNum,
               &(this->ActorStats).ArrayMax);
  }
  return true;
}

// SetLayerName @ 147e7e510

void __thiscall ULayer::SetLayerName(ULayer *this,FName param_1)

{
  this->LayerName = param_1;
  return;
}

// SetVisible @ 147e7ec00

void __thiscall ULayer::SetVisible(ULayer *this,bool param_1)

{
  this->bIsVisible = 0;
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 | (uint)param_1;
  return;
}

// StaticRegisterNativesULayer @ 147e82280

void __cdecl ULayer::StaticRegisterNativesULayer(void)

{
  return;
}

