// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 16

// StaticStruct @ 14907db80

UScriptStruct * __cdecl FNDCIsland::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCIsland.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCIsland.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCIsland,(UObject *)pUVar1,L"NDCIsland");
  }
  return Z_Registration_Info_UScriptStruct_FNDCIsland.OuterSingleton;
}

// FNDCIsland @ 1490b0cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNDCIsland * __thiscall FNDCIsland::FNDCIsland(FNDCIsland *this)

{
  (this->Owner).field0_0x0.DebugPtr = (UNiagaraDataChannelHandler_Islands *)0x0;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  (this->SpawnedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnedComponents).ArrayNum = 0;
  (this->SpawnedComponents).ArrayMax = 0;
  (this->Data).Object = (FNiagaraDataChannelData *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FNDCIsland @ 1490b7350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNDCIsland::~FNDCIsland(FNDCIsland *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->SpawnedComponents).AllocatorInstance.Data;
  iVar2 = (this->SpawnedComponents).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SpawnedComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    plVar3 = *(longlong **)pFVar5;
    if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
      (**(code **)(*plVar3 + 0xae0))();
    }
    pFVar5 = pFVar5 + 8;
  }
  piVar1 = &(this->SpawnedComponents).ArrayMax;
  (this->SpawnedComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SpawnedComponents).AllocatorInstance,0,piVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->SpawnedComponents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// BeginFrame @ 1490cce40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNDCIsland::BeginFrame(FNDCIsland *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Data).Object == (FNiagaraDataChannelData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraDataChannelData::BeginFrame
            ((this->Data).Object,(UNiagaraDataChannelHandler *)(this->Owner).field0_0x0.DebugPtr);
  return;
}

// Contains @ 1490d71b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNDCIsland::Contains(FNDCIsland *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = (this->Bounds).Origin.field0_0x0._s_0.Y;
  dVar9 = (this->Bounds).Origin.field0_0x0._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (this->Bounds).Origin.field0_0x0._s_0.X;
  dVar3 = dVar9 - (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dVar9 = dVar9 + (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dVar4 = dVar10 - (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar10 = dVar10 + (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = dVar2 - (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  dVar2 = dVar2 + (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  dVar8 = 0.0;
  if ((dVar6 < dVar5) || (dVar5 = dVar2, dVar2 < dVar6)) {
    dVar8 = (dVar6 - dVar5) * (dVar6 - dVar5);
  }
  if ((dVar7 < dVar4) || (dVar4 = dVar10, dVar10 < dVar7)) {
    dVar8 = dVar8 + (dVar7 - dVar4) * (dVar7 - dVar4);
  }
  if ((dVar1 < dVar3) || (dVar3 = dVar9, dVar9 < dVar1)) {
    dVar8 = dVar8 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  return dVar8 <= 0.0;
}

// DebugDrawBounds @ 1490e8190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNDCIsland::DebugDrawBounds(FNDCIsland *this)

{
  UNiagaraDataChannelHandler_Islands *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = (this->Owner).field0_0x0.DebugPtr;
  pUVar2 = (UWorld *)(**(code **)(pUVar1->_padding_ + 0x180))(pUVar1);
  DrawDebugBox(pUVar2,&(this->Bounds).Origin,&(this->Bounds).BoxExtent,
               &UE::Math::TQuat<double>::Identity,&FColor::Red,false,__real_bf800000,'\0',0.0);
  return;
}

// DistanceToPoint @ 1490ec360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

double __thiscall FNDCIsland::DistanceToPoint(FNDCIsland *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (this->Bounds).Origin.field0_0x0._s_0.X;
  dVar5 = 0.0;
  dVar8 = (this->Bounds).Origin.field0_0x0._s_0.Y;
  dVar6 = (this->Bounds).Origin.field0_0x0._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = dVar6 - (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dVar6 = dVar6 + (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dVar3 = dVar8 - (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar8 = dVar8 + (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar4 = dVar7 - (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  dVar7 = dVar7 + (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  if ((dVar1 < dVar4) || (dVar4 = dVar7, dVar7 < dVar1)) {
    dVar5 = (dVar1 - dVar4) * (dVar1 - dVar4);
  }
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  if ((dVar7 < dVar3) || (dVar3 = dVar8, dVar8 < dVar7)) {
    dVar5 = dVar5 + (dVar7 - dVar3) * (dVar7 - dVar3);
  }
  dVar7 = (param_1->field0_0x0)._s_0.Z;
  if ((dVar7 < dVar2) || (dVar2 = dVar6, dVar6 < dVar7)) {
    dVar5 = dVar5 + (dVar7 - dVar2) * (dVar7 - dVar2);
  }
  return dVar5;
}

// EndFrame @ 1490ef710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNDCIsland::EndFrame(FNDCIsland *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Data).Object == (FNiagaraDataChannelData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraDataChannelData::EndFrame
            ((this->Data).Object,(UNiagaraDataChannelHandler *)(this->Owner).field0_0x0.DebugPtr);
  return;
}

// Init @ 149112d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNDCIsland::Init(FNDCIsland *this,UNiagaraDataChannelHandler_Islands *param_1)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar5;
  UNiagaraDataChannel *pUVar6;
  UNiagaraDataChannel_Islands *pUVar7;
  TSharedPtr<FNiagaraDataChannelData,1> local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UNiagaraDataChannelHandler_Islands *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Owner).field0_0x0.DebugPtr = param_1;
  pTVar5 = UNiagaraDataChannelHandler::CreateData((UNiagaraDataChannelHandler *)param_1,&local_18);
  if (&this->Data != pTVar5) {
    (this->Data).Object = pTVar5->Object;
    pTVar5->Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&pTVar5->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pUVar6 = (UNiagaraDataChannel *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)&((this->Owner).field0_0x0.DebugPtr)->_padding_);
  if (pUVar6 == (UNiagaraDataChannel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                       ,0x3a,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar7 = CastChecked<UNiagaraDataChannel_Islands,UNiagaraDataChannel_const_>(pUVar6);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->Bounds).Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = (pUVar7->InitialExtents).field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = (pUVar7->InitialExtents).field0_0x0._s_0.X;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar2;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = (pUVar7->InitialExtents).field0_0x0._s_0.Z;
  return;
}

// Intersects @ 1491172e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNDCIsland::Intersects(FNDCIsland *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  
  dVar1 = (this->Bounds).Origin.field0_0x0._s_0.X;
  dVar2 = (param_1->BoxExtent).field0_0x0._s_0.X;
  dVar3 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar4 = (this->Bounds).Origin.field0_0x0._s_0.Z;
  dVar5 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar6 = (this->Bounds).Origin.field0_0x0._s_0.Y;
  if ((((dVar2 + (param_1->Origin).field0_0x0._s_0.X <
         dVar1 - (this->Bounds).BoxExtent.field0_0x0._s_0.X) ||
       (dVar1 + (this->Bounds).BoxExtent.field0_0x0._s_0.X <
        (param_1->Origin).field0_0x0._s_0.X - dVar2)) ||
      ((param_1->BoxExtent).field0_0x0._s_0.Y + dVar5 <
       dVar6 - (this->Bounds).BoxExtent.field0_0x0._s_0.Y)) ||
     (((dVar6 + (this->Bounds).BoxExtent.field0_0x0._s_0.Y <
        dVar5 - (param_1->BoxExtent).field0_0x0._s_0.Y ||
       ((param_1->BoxExtent).field0_0x0._s_0.Z + dVar3 <
        dVar4 - (this->Bounds).BoxExtent.field0_0x0._s_0.Z)) ||
      (dVar4 + (this->Bounds).BoxExtent.field0_0x0._s_0.Z <
       dVar3 - (param_1->BoxExtent).field0_0x0._s_0.Z)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}

// IsBeingUsed @ 149117410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall FNDCIsland::IsBeingUsed(FNDCIsland *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->SpawnedComponents).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->SpawnedComponents).ArrayNum * 8;
  for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 8) {
    if (((*(longlong *)pFVar4 == 0) || ((*(uint *)(*(longlong *)pFVar4 + 8) >> 0x1e & 1) != 0)) ||
       (bVar3 = UNiagaraComponent::IsComplete(*(UNiagaraComponent **)pFVar4), bVar3))
    goto LAB_14911745b;
  }
  pFVar4 = (FScriptContainerElement *)0x0;
LAB_14911745b:
  if (((this->Data).Object != (FNiagaraDataChannelData *)0x0) &&
     (((pTVar2 = (this->Data).SharedReferenceCount.ReferenceController,
       pTVar2 == (TReferenceControllerBase<1> *)0x0 ||
       (pTVar2->SharedReferenceCount != (atomic<int>)0x1)) ||
      (pFVar4 == (FScriptContainerElement *)0x0)))) {
    return true;
  }
  return false;
}

// IsHandlerSystem @ 149117690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNDCIsland::IsHandlerSystem(FNDCIsland *this,USceneComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->SpawnedComponents).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->SpawnedComponents).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(USceneComponent **)pFVar2 == (USceneComponent *)0x0) {
      bVar3 = param_1 == (USceneComponent *)0x0;
    }
    else {
      bVar3 = *(USceneComponent **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// OnAcquired @ 149119570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNDCIsland::OnAcquired(FNDCIsland *this,TVector<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  FNiagaraDataChannelData *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  int iVar20;
  UNiagaraDataChannel *pUVar21;
  UNiagaraDataChannel_Islands *this_00;
  TVector<float> *pTVar22;
  FStreamableHandle *pFVar23;
  TObjectPtr<UObject_const_>_u_0 TVar24;
  UNiagaraComponent *this_01;
  FScriptContainerElement *pFVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar30 [16];
  UNiagaraComponent *local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  uint local_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  double local_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  undefined1 local_200;
  undefined7 uStack_1ff;
  TObjectPtr<UObject_const_>_u_0 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  TVector<float> local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  
  pUVar21 = (UNiagaraDataChannel *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)&((this->Owner).field0_0x0.DebugPtr)->_padding_);
  if ((pUVar21 == (UNiagaraDataChannel *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ret",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                          ,0x3a,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = CastChecked<UNiagaraDataChannel_Islands,UNiagaraDataChannel_const_>(pUVar21);
  if (this_00->Mode == AlignedStatic) {
    local_b8 = (this_00->MaxExtents).field0_0x0._s_0.X;
    dStack_b0 = (this_00->MaxExtents).field0_0x0._s_0.Y;
    local_260 = (this_00->MaxExtents).field0_0x0._s_0.X;
    dStack_258 = (this_00->MaxExtents).field0_0x0._s_0.Y;
    local_a0 = (this_00->MaxExtents).field0_0x0._s_0.X;
    dStack_98 = (this_00->MaxExtents).field0_0x0._s_0.Y;
    local_a8 = (this_00->MaxExtents).field0_0x0._s_0.Z;
    local_250 = (this_00->MaxExtents).field0_0x0._s_0.Z;
    local_90 = (this_00->MaxExtents).field0_0x0._s_0.Z;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_90;
    local_248 = (this_00->PerElementExtents).field0_0x0._s_0.X;
    dStack_240 = (this_00->PerElementExtents).field0_0x0._s_0.Y;
    local_238 = (this_00->PerElementExtents).field0_0x0._s_0.Z;
    auVar28._0_8_ = dStack_b0 + dStack_b0;
    auVar28._8_8_ = dStack_b0;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = (param_1->field0_0x0)._s_0.Y / auVar28._0_8_;
    auVar30 = roundpd(in_XMM4,auVar27,1);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = (param_1->field0_0x0)._s_0.Z / (local_a8 + local_a8);
    auVar29 = roundpd(auVar28,auVar29,1);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (param_1->field0_0x0)._s_0.X / (local_b8 + local_b8);
    auVar27 = roundpd(auVar26,auVar8,1);
    (this->Bounds).Origin.field0_0x0._s_0.X = auVar27._0_8_ * (local_b8 + local_b8) + local_a0;
    (this->Bounds).Origin.field0_0x0._s_0.Y = auVar30._0_8_ * auVar28._0_8_ + dStack_98;
    (this->Bounds).Origin.field0_0x0._s_0.Z = auVar29._0_8_ * (local_a8 + local_a8) + local_90;
    (this->Bounds).BoxExtent.field0_0x0._s_0.X = local_260 + local_248;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Y = dStack_258 + dStack_240;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Z = local_250 + local_238;
  }
  else {
    dVar9 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    (this->Bounds).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Y = dVar9;
    (this->Bounds).Origin.field0_0x0._s_0.Z = dVar3;
    dVar3 = (this_00->InitialExtents).field0_0x0._s_0.Y;
    (this->Bounds).BoxExtent.field0_0x0._s_0.X = (this_00->InitialExtents).field0_0x0._s_0.X;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar3;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Z = (this_00->InitialExtents).field0_0x0._s_0.Z;
  }
  if (((this->Data).Object == (FNiagaraDataChannelData *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_188._s_0.X = (this->Bounds).Origin.field0_0x0._s_0.X;
  local_188._s_0.Y = (this->Bounds).Origin.field0_0x0._s_0.Y;
  pFVar5 = (this->Data).Object;
  local_188._s_0.Z = (this->Bounds).Origin.field0_0x0._s_0.Z;
  pTVar22 = TLargeWorldRenderScalar<double>::GetTileFor
                      (&local_c8,(TVector<double> *)&local_188._s_0);
  uStack_224 = _UNK_15066df7c;
  uStack_228 = _UNK_15066df78;
  uVar14 = __xmm_80000000000000008000000000000000._4_4_;
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  local_200 = 1;
  *(undefined8 *)&(pFVar5->LwcTile).field0_0x0 = *(undefined8 *)&pTVar22->field0_0x0;
  (pFVar5->LwcTile).field0_0x0._s_0.Z = (pTVar22->field0_0x0)._s_0.Z;
  uVar4 = *(undefined8 *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 0x10);
  local_230 = *(uint *)&(this->Bounds).BoxExtent.field0_0x0 ^ uVar13;
  uStack_22c = *(uint *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 4) ^ uVar14;
  uStack_228 = *(uint *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 8) ^ uStack_228;
  uStack_224 = *(uint *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 0xc) ^ uStack_224;
  local_220 = (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar14,(uint)uVar4 ^ uVar13);
  dStack_208 = (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dStack_218 = (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  dStack_210 = (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  bVar19 = IsInGameThread();
  if ((!bVar19) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Islands.cpp"
                          ,0x29,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (NDCIslands_Local::BlockAsyncLoadOnUse != 0) {
    pFVar23 = (this_00->AsyncLoadHandle).Object;
    if (((pFVar23 != (FStreamableHandle *)0x0) && (pFVar23->bCanceled == false)) &&
       (pFVar23->bReleased == false)) {
      pFVar23 = TSharedPtr<FStreamableHandle,1>::operator->(&this_00->AsyncLoadHandle);
      FStreamableHandle::WaitUntilComplete(pFVar23,0.0,true);
      UNiagaraDataChannel_Islands::PostLoadSystems(this_00);
    }
  }
  iVar20 = (this_00->SystemsInternal).ArrayNum;
  pFVar25 = (this_00->SystemsInternal).AllocatorInstance.Data;
  if ((iVar20 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar18 = dStack_208;
  dVar17 = dStack_210;
  dVar9 = dStack_218;
  dVar3 = local_220;
  uVar16 = _UNK_150689688;
  uVar15 = ___xmm_3ff00000000000003ff0000000000000;
  uVar4 = __real_3ff0000000000000;
  pFVar2 = pFVar25 + (longlong)iVar20 * 8;
  if (pFVar25 != pFVar2) {
    uVar12 = CONCAT71(uStack_1ff,local_200);
    dVar10 = (double)CONCAT44(uStack_22c,local_230);
    dVar11 = (double)CONCAT44(uStack_224,uStack_228);
    do {
      if (*(UObject **)pFVar25 != (UObject *)0x0) {
        local_1a0 = 0;
        local_1f8.DebugPtr = (UObject *)0x0;
        uStack_1f0 = 0;
        local_1c0 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_1e8 = *(undefined4 *)&(this->Bounds).Origin.field0_0x0;
        uStack_1e4 = *(undefined4 *)((longlong)&(this->Bounds).Origin.field0_0x0 + 4);
        uStack_1e0 = *(undefined4 *)((longlong)&(this->Bounds).Origin.field0_0x0 + 8);
        uStack_1dc = *(undefined4 *)((longlong)&(this->Bounds).Origin.field0_0x0 + 0xc);
        local_198 = 0;
        local_1d0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        dStack_1c8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_190 = 0x2000001;
        local_1d8 = (this->Bounds).Origin.field0_0x0._s_0.Z;
        local_1a8 = uVar4;
        local_1b8 = uVar15;
        uStack_1b0 = uVar16;
        local_18c = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar25);
        }
        uStack_1f0 = *(undefined8 *)pFVar25;
        TVar24.DebugPtr =
             (UObject *)(**(code **)(((this->Owner).field0_0x0.DebugPtr)->_padding_ + 0x180))();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar24.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar24.DebugPtr);
        }
        local_1f8.DebugPtr = TVar24.DebugPtr;
        this_01 = UNiagaraFunctionLibrary::SpawnSystemAtLocationWithParams
                            ((FFXSystemSpawnParameters *)&local_1f8.ObjectPtr);
        if (this_01 != (UNiagaraComponent *)0x0) {
          local_268 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          pFVar6 = (this->SpawnedComponents).AllocatorInstance.Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_268) &&
              ((FScriptContainerElement *)&local_268 <
               pFVar6 + (longlong)(this->SpawnedComponents).ArrayMax * 8)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar20 = (this->SpawnedComponents).ArrayNum;
          piVar1 = &(this->SpawnedComponents).ArrayMax;
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->SpawnedComponents).AllocatorInstance,piVar1);
          }
          (this->SpawnedComponents).ArrayNum = iVar20 + 1;
          *(UNiagaraComponent **)
           ((this->SpawnedComponents).AllocatorInstance.Data + (longlong)iVar20 * 8) = local_268;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_268 != (UNiagaraComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_268);
          }
          local_108._s_0.Z = dVar3;
          dStack_f0 = dVar9;
          local_e8 = dVar17;
          dStack_e0 = dVar18;
          local_108._s_0.X = dVar10;
          local_108._s_0.Y = dVar11;
          local_d8 = uVar12;
          UNiagaraComponent::SetSystemFixedBounds(this_01,(TBox<double> *)&local_108._s_0);
          (**(code **)(this_01->_padding_ + 0x2b8))(this_01,0);
        }
      }
      pFVar25 = pFVar25 + 8;
    } while (pFVar25 != pFVar2);
  }
  if (this_00->Mode == Dynamic) {
    local_168._s_0.X = (this_00->MaxExtents).field0_0x0._s_0.X;
    local_168._s_0.Y = (this_00->MaxExtents).field0_0x0._s_0.Y;
    local_168._s_0.Z = (this_00->MaxExtents).field0_0x0._s_0.Z;
    local_148._s_0.X = (this_00->PerElementExtents).field0_0x0._s_0.X;
    local_148._s_0.Y = (this_00->PerElementExtents).field0_0x0._s_0.Y;
    local_148._s_0.Z = (this_00->PerElementExtents).field0_0x0._s_0.Z;
    local_128._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_128._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_128._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    bVar19 = TryGrow(this,(TVector<double> *)&local_128._s_0,(TVector<double> *)&local_148._s_0,
                     (TVector<double> *)&local_168._s_0);
    if ((!bVar19) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<220773903268577664>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Islands.cpp"
                            ,0x180,
                            "TryGrow(Location, Channel->GetPerElementExtents(), Channel->GetMaxExtents())"
                           ), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}

// OnReleased @ 14911a5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNDCIsland::OnReleased(FNDCIsland *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Data != (TSharedPtr<FNiagaraDataChannelData,1> *)&local_18) {
    (this->Data).Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pFVar3 = (this->SpawnedComponents).AllocatorInstance.Data;
  iVar2 = (this->SpawnedComponents).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SpawnedComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0xae0))();
    pFVar3 = pFVar3 + 8;
  }
  (this->SpawnedComponents).ArrayNum = 0;
  if ((this->SpawnedComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SpawnedComponents).AllocatorInstance,0,
               &(this->SpawnedComponents).ArrayMax);
  }
  return;
}

// Tick @ 14913a820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNDCIsland::Tick(FNDCIsland *this,ETickingGroup *param_1)

{
  FScriptContainerElement *pFVar1;
  UNiagaraComponent *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (((this->Data).Object == (FNiagaraDataChannelData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = FNiagaraDataChannelData::ConsumePublishRequests
                    ((this->Data).Object,
                     (UNiagaraDataChannelHandler *)(this->Owner).field0_0x0.DebugPtr,param_1);
  if (0 < iVar4) {
    pFVar5 = (this->SpawnedComponents).AllocatorInstance.Data;
    iVar4 = (this->SpawnedComponents).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->SpawnedComponents).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      this_00 = *(UNiagaraComponent **)pFVar5;
      bVar3 = UNiagaraComponent::IsComplete(this_00);
      if (bVar3) {
        (**(code **)(this_00->_padding_ + 0x2b8))(this_00,0);
      }
      pFVar5 = pFVar5 + 8;
    }
  }
  return;
}

// TryGrow @ 14913d7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
FNDCIsland::TryGrow(FNDCIsland *this,TVector<double> *param_1,TVector<double> *param_2,
                   TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UNiagaraComponent *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined7 uStack_147;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  double local_c8;
  
  dVar1 = (this->Bounds).Origin.field0_0x0._s_0.X;
  dVar22 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar2 = (this->Bounds).Origin.field0_0x0._s_0.Y;
  dVar3 = (this->Bounds).Origin.field0_0x0._s_0.Z;
  dVar18 = (this->Bounds).BoxExtent.field0_0x0._s_0.Z + dVar3;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar11 = dVar5 + dVar4;
  dVar10 = (param_1->field0_0x0)._s_0.Y + dVar6;
  dVar5 = dVar5 - dVar4;
  dVar9 = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  if (dVar11 <= dVar18) {
    dVar11 = dVar18;
  }
  dVar19 = (this->Bounds).BoxExtent.field0_0x0._s_0.Y + (this->Bounds).Origin.field0_0x0._s_0.Y;
  dVar18 = (param_1->field0_0x0)._s_0.Y - dVar6;
  if (dVar10 <= dVar19) {
    dVar10 = dVar19;
  }
  dVar19 = (this->Bounds).BoxExtent.field0_0x0._s_0.X + (this->Bounds).Origin.field0_0x0._s_0.X;
  if (dVar9 <= dVar19) {
    dVar9 = dVar19;
  }
  dVar19 = (this->Bounds).Origin.field0_0x0._s_0.Z - (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  if (dVar19 <= dVar5) {
    dVar5 = dVar19;
  }
  dVar19 = (this->Bounds).Origin.field0_0x0._s_0.Y - (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  if (dVar19 <= dVar18) {
    dVar18 = dVar19;
  }
  dVar19 = dVar1 - (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  if (dVar19 <= dVar22) {
    dVar22 = dVar19;
  }
  dVar19 = (param_2->field0_0x0)._s_0.X;
  if (((((dVar1 + (param_3->field0_0x0)._s_0.X + dVar19 < dVar9) ||
        (dVar2 + (param_3->field0_0x0)._s_0.Y + dVar6 < dVar10)) ||
       (dVar3 + (param_3->field0_0x0)._s_0.Z + dVar4 < dVar11)) ||
      ((dVar22 < ((this->Bounds).Origin.field0_0x0._s_0.X - (param_3->field0_0x0)._s_0.X) - dVar19
       || (dVar18 < (dVar2 - (param_3->field0_0x0)._s_0.Y) - dVar6)))) ||
     (dVar5 < (dVar3 - (param_3->field0_0x0)._s_0.Z) - dVar4)) {
    bVar12 = false;
  }
  else {
    dVar10 = dVar10 - (this->Bounds).Origin.field0_0x0._s_0.Y;
    dVar22 = dVar22 - (this->Bounds).Origin.field0_0x0._s_0.X;
    dVar18 = dVar18 - (this->Bounds).Origin.field0_0x0._s_0.Y;
    dVar11 = dVar11 - (this->Bounds).Origin.field0_0x0._s_0.Z;
    dVar5 = dVar5 - (this->Bounds).Origin.field0_0x0._s_0.Z;
    local_c8 = (this->Bounds).Origin.field0_0x0._s_0.Z;
    dVar4 = (this->Bounds).Origin.field0_0x0._s_0.X;
    dVar6 = (this->Bounds).Origin.field0_0x0._s_0.Y;
    uVar16 = 0;
    dVar9 = dVar9 - (this->Bounds).Origin.field0_0x0._s_0.X;
    dVar2 = dVar10 - dVar18;
    dVar1 = dVar9 - dVar22;
    dVar3 = dVar11 - dVar5;
    dVar24 = dVar1 * __real_3fe0000000000000;
    dVar23 = dVar2 * __real_3fe0000000000000;
    dVar19 = dVar3 * __real_3fe0000000000000;
    (this->Bounds).Origin.field0_0x0._s_0.X = dVar24 + dVar22;
    (this->Bounds).Origin.field0_0x0._s_0.Y = dVar23 + dVar18;
    auVar20._0_8_ = dVar19 + dVar5;
    auVar20._8_8_ = 0;
    (this->Bounds).Origin.field0_0x0._s_0.Z = auVar20._0_8_;
    (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar24;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar23;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar19;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3) * __real_3fd0000000000000;
    auVar21 = sqrtpd(auVar20,auVar21);
    (this->Bounds).SphereRadius = auVar21._0_8_;
    dVar1 = (this->Bounds).Origin.field0_0x0._s_0.Y;
    (this->Bounds).Origin.field0_0x0._s_0.X = dVar4 + (this->Bounds).Origin.field0_0x0._s_0.X;
    dVar2 = (this->Bounds).Origin.field0_0x0._s_0.Z;
    (this->Bounds).Origin.field0_0x0._s_0.Y = dVar6 + dVar1;
    (this->Bounds).Origin.field0_0x0._s_0.Z = local_c8 + dVar2;
    while ((-1 < (int)uVar16 && ((int)uVar16 < (this->SpawnedComponents).ArrayNum))) {
      if ((int)uVar16 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
      }
      this_00 = *(UNiagaraComponent **)
                 ((this->SpawnedComponents).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
      if ((this_00 == (UNiagaraComponent *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0)) {
        uVar14 = 0;
        if ((int)uVar16 < (this->SpawnedComponents).ArrayNum) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
        }
        iVar17 = (this->SpawnedComponents).ArrayNum;
        pFVar7 = (this->SpawnedComponents).AllocatorInstance.Data;
        iVar15 = ~uVar16 + iVar17;
        if (1 < iVar15) {
          iVar15 = 1;
        }
        if (iVar15 != 0) {
          memmove(pFVar7 + (longlong)(int)uVar16 * 8,pFVar7 + (longlong)(iVar17 - iVar15) * 8,
                  (longlong)iVar15 << 3);
        }
        iVar17 = (this->SpawnedComponents).ArrayNum + -1;
        (this->SpawnedComponents).ArrayNum = iVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->SpawnedComponents).AllocatorInstance,iVar17,
                   &(this->SpawnedComponents).ArrayMax);
      }
      else {
        local_e8 = CONCAT71(uStack_147,1);
        local_118._s_0.X = dVar22;
        local_118._s_0.Y = dVar18;
        local_118._s_0.Z = dVar5;
        dStack_100 = dVar9;
        local_f8 = dVar10;
        dStack_f0 = dVar11;
        UNiagaraComponent::SetSystemFixedBounds(this_00,(TBox<double> *)&local_118._s_0);
        local_138._s_0.X = (this->Bounds).Origin.field0_0x0._s_0.X;
        local_138._s_0.Y = (this->Bounds).Origin.field0_0x0._s_0.Y;
        local_138._s_0.Z = (this->Bounds).Origin.field0_0x0._s_0.Z;
        USceneComponent::SetWorldLocation
                  ((USceneComponent *)this_00,(TVector<double> *)&local_138._s_0,false,
                   (FHitResult *)0x0,None);
        uVar16 = uVar16 + 1;
      }
    }
    bVar12 = true;
  }
  return bVar12;
}

