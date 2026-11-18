// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// GetIgnoreBoundsForEditorFocus @ 147839c40

bool __thiscall UShapeComponent::GetIgnoreBoundsForEditorFocus(UShapeComponent *this)

{
  return true;
}

// IsNavigationRelevant`adjustor{592}' @ 1478408dc

/* [thunk]:public: virtual bool __cdecl UShapeComponent::IsNavigationRelevant`adjustor{592}'
   (void)const __ptr64 */

bool __thiscall UShapeComponent::IsNavigationRelevant_adjustor_592__(UShapeComponent *this)

{
  bool bVar1;
  
  bVar1 = IsNavigationRelevant((UShapeComponent *)&this[-1].field_0x320);
  return bVar1;
}

// ShouldCollideWhenPlacing @ 14786f290

bool __thiscall UShapeComponent::ShouldCollideWhenPlacing(UShapeComponent *this)

{
  int iVar1;
  
  if (this->bShouldCollideWhenPlacing == '\0') {
    iVar1 = (**(code **)(*(longlong *)this + 0x5e0))();
    if (iVar1 == 0) {
      return false;
    }
  }
  return true;
}

// StaticClass @ 147875880

UClass * __cdecl UShapeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UShapeComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ShapeComponent",
               &Z_Registration_Info_UClass_UShapeComponent.InnerSingleton,
               StaticRegisterNativesUShapeComponent,0x570,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UShapeComponent>,InternalVTableHelperCtorCaller<UShapeComponent>,
               aFStackX_8,UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShapeComponent.InnerSingleton;
}

// AddShapeToGeomArray<FKBoxElem> @ 14791c960

void __thiscall UShapeComponent::AddShapeToGeomArray<FKBoxElem>(UShapeComponent *this)

{
  int *piVar1;
  UBodySetup *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_78 [25];
  FScriptContainerElement local_5f;
  undefined4 local_58;
  undefined1 *local_50;
  TVector<double>_u_0 local_48;
  double local_30;
  double dStack_28;
  double local_20;
  float local_18;
  float local_14;
  float local_10;
  
  local_78[0x18] = local_78[0x18] | 1;
  pUVar2 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  local_78._16_4_ = 0;
  local_50 = local_78;
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_20 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  local_78._20_4_ = 1;
  local_5f = (FScriptContainerElement)0x3;
  local_58 = 6;
  local_78._0_8_ = &___7FKBoxElem__6B_;
  local_30 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_28 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_18 = 1.0;
  local_14 = 1.0;
  local_10 = 1.0;
  pFVar6 = (pUVar2->AggGeom).BoxElems.AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)local_78) &&
     ((FScriptContainerElement *)local_78 <
      pFVar6 + (longlong)(pUVar2->AggGeom).BoxElems.ArrayMax * 0x70)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pUVar2->AggGeom).BoxElems.ArrayNum;
  piVar1 = &(pUVar2->AggGeom).BoxElems.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&(pUVar2->AggGeom).BoxElems.AllocatorInstance,piVar1);
  }
  (pUVar2->AggGeom).BoxElems.ArrayNum = iVar5 + 1;
  pFVar6 = (pUVar2->AggGeom).BoxElems.AllocatorInstance.Data + (longlong)iVar5 * 0x70;
  *(undefined ***)pFVar6 = &___7FKShapeElem__6B_;
  *(undefined4 *)(pFVar6 + 8) = local_78._8_4_;
  *(ulonglong *)(pFVar6 + 0xc) = CONCAT44(local_78._16_4_,local_78._12_4_);
  *(undefined4 *)(pFVar6 + 0x14) = local_78._20_4_;
  pFVar6[0x18] = (FScriptContainerElement)
                 ((byte)pFVar6[0x18] ^ ((byte)pFVar6[0x18] ^ local_78[0x18]) & 1);
  pFVar6[0x19] = local_5f;
  *(undefined4 *)(pFVar6 + 0x20) = 6;
  *(FScriptContainerElement **)(pFVar6 + 0x28) = pFVar6;
  *(undefined ***)pFVar6 = &___7FKBoxElem__6B_;
  *(double *)(pFVar6 + 0x30) = local_48._s_0.X;
  *(double *)(pFVar6 + 0x38) = local_48._s_0.Y;
  *(double *)(pFVar6 + 0x40) = local_48._s_0.Z;
  *(double *)(pFVar6 + 0x48) = local_30;
  *(double *)(pFVar6 + 0x50) = dStack_28;
  *(double *)(pFVar6 + 0x58) = local_20;
  *(float *)(pFVar6 + 0x60) = local_18;
  *(float *)(pFVar6 + 100) = local_14;
  *(float *)(pFVar6 + 0x68) = local_10;
  FKBoxElem::~FKBoxElem((FKBoxElem *)local_78);
  return;
}

// AddShapeToGeomArray<FKSphereElem> @ 14791cb40

void __thiscall UShapeComponent::AddShapeToGeomArray<FKSphereElem>(UShapeComponent *this)

{
  int *piVar1;
  UBodySetup *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_58 [25];
  FScriptContainerElement local_3f;
  undefined4 local_38;
  undefined1 *local_30;
  TVector<double>_u_0 local_28;
  float local_10;
  
  local_58[0x18] = local_58[0x18] | 1;
  pUVar2 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  local_58._16_4_ = 0;
  local_58._20_4_ = 0;
  local_30 = local_58;
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_58._8_4_ = 0;
  local_58._12_4_ = 0;
  local_3f = (FScriptContainerElement)0x3;
  local_38 = 6;
  local_58._0_8_ = &___7FKSphereElem__6B_;
  local_10 = 1.0;
  pFVar6 = (pUVar2->AggGeom).SphereElems.AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)local_58) &&
     ((FScriptContainerElement *)local_58 <
      pFVar6 + (longlong)(pUVar2->AggGeom).SphereElems.ArrayMax * 0x50)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pUVar2->AggGeom).SphereElems.ArrayNum;
  piVar1 = &(pUVar2->AggGeom).SphereElems.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)&pUVar2->AggGeom,piVar1);
  }
  (pUVar2->AggGeom).SphereElems.ArrayNum = iVar5 + 1;
  pFVar6 = (pUVar2->AggGeom).SphereElems.AllocatorInstance.Data + (longlong)iVar5 * 0x50;
  *(undefined ***)pFVar6 = &___7FKShapeElem__6B_;
  *(undefined4 *)(pFVar6 + 8) = local_58._8_4_;
  *(ulonglong *)(pFVar6 + 0xc) = CONCAT44(local_58._16_4_,local_58._12_4_);
  *(undefined4 *)(pFVar6 + 0x14) = local_58._20_4_;
  pFVar6[0x18] = (FScriptContainerElement)
                 ((byte)pFVar6[0x18] ^ ((byte)pFVar6[0x18] ^ local_58[0x18]) & 1);
  pFVar6[0x19] = local_3f;
  *(undefined4 *)(pFVar6 + 0x20) = 6;
  *(FScriptContainerElement **)(pFVar6 + 0x28) = pFVar6;
  *(undefined ***)pFVar6 = &___7FKSphereElem__6B_;
  *(double *)(pFVar6 + 0x30) = local_28._s_0.X;
  *(double *)(pFVar6 + 0x38) = local_28._s_0.Y;
  *(double *)(pFVar6 + 0x40) = local_28._s_0.Z;
  *(float *)(pFVar6 + 0x48) = local_10;
  FKSphereElem::~FKSphereElem((FKSphereElem *)local_58);
  return;
}

// AddShapeToGeomArray<FKSphylElem> @ 14791ccd0

void __thiscall UShapeComponent::AddShapeToGeomArray<FKSphylElem>(UShapeComponent *this)

{
  int *piVar1;
  UBodySetup *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_78 [25];
  FScriptContainerElement local_5f;
  undefined4 local_58;
  undefined1 *local_50;
  TVector<double>_u_0 local_48;
  double local_30;
  double dStack_28;
  double local_20;
  float local_18;
  float local_14;
  
  local_78[0x18] = local_78[0x18] | 1;
  pUVar2 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  local_78._16_4_ = 0;
  local_50 = local_78;
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_20 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  local_78._20_4_ = 2;
  local_5f = (FScriptContainerElement)0x3;
  local_58 = 6;
  local_78._0_8_ = &___7FKSphylElem__6B_;
  local_30 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_28 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_18 = 1.0;
  local_14 = 1.0;
  pFVar6 = (pUVar2->AggGeom).SphylElems.AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)local_78) &&
     ((FScriptContainerElement *)local_78 <
      pFVar6 + (longlong)(pUVar2->AggGeom).SphylElems.ArrayMax * 0x68)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pUVar2->AggGeom).SphylElems.ArrayNum;
  piVar1 = &(pUVar2->AggGeom).SphylElems.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&(pUVar2->AggGeom).SphylElems.AllocatorInstance,piVar1);
  }
  (pUVar2->AggGeom).SphylElems.ArrayNum = iVar5 + 1;
  pFVar6 = (pUVar2->AggGeom).SphylElems.AllocatorInstance.Data + (longlong)iVar5 * 0x68;
  *(undefined ***)pFVar6 = &___7FKShapeElem__6B_;
  *(undefined4 *)(pFVar6 + 8) = local_78._8_4_;
  *(ulonglong *)(pFVar6 + 0xc) = CONCAT44(local_78._16_4_,local_78._12_4_);
  *(undefined4 *)(pFVar6 + 0x14) = local_78._20_4_;
  pFVar6[0x18] = (FScriptContainerElement)
                 ((byte)pFVar6[0x18] ^ ((byte)pFVar6[0x18] ^ local_78[0x18]) & 1);
  pFVar6[0x19] = local_5f;
  *(undefined4 *)(pFVar6 + 0x20) = 6;
  *(FScriptContainerElement **)(pFVar6 + 0x28) = pFVar6;
  *(undefined ***)pFVar6 = &___7FKSphylElem__6B_;
  *(double *)(pFVar6 + 0x30) = local_48._s_0.X;
  *(double *)(pFVar6 + 0x38) = local_48._s_0.Y;
  *(double *)(pFVar6 + 0x40) = local_48._s_0.Z;
  *(double *)(pFVar6 + 0x48) = local_30;
  *(double *)(pFVar6 + 0x50) = dStack_28;
  *(double *)(pFVar6 + 0x58) = local_20;
  *(float *)(pFVar6 + 0x60) = local_18;
  *(float *)(pFVar6 + 100) = local_14;
  FKSphylElem::~FKSphylElem((FKSphylElem *)local_78);
  return;
}

// CreateShapeBodySetupIfNeeded<FKBoxElem> @ 14791eeb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UShapeComponent::CreateShapeBodySetupIfNeeded<FKBoxElem>(UShapeComponent *this)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBodySetup *pUVar6;
  FUObjectItem *pFVar7;
  FUObjectCluster *pFVar8;
  FScriptContainerElement *pFVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  UBodySetup *local_res18;
  UShapeComponent *local_res20;
  undefined1 local_b8 [25];
  FScriptContainerElement local_9f;
  undefined4 local_98;
  undefined1 *local_90;
  TVector<double>_u_0 local_88;
  double local_70;
  double dStack_68;
  double local_60;
  float local_58;
  float local_54;
  float local_50;
  FSingleParticlePhysicsProxy *local_48;
  code *local_40;
  UShapeComponent **local_38;
  
  pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  if ((pUVar6 == (UBodySetup *)0x0) || (((uint)pUVar6->_padding_ >> 0x1e & 1) != 0)) {
    local_res10 = 0;
    pUVar6 = NewObject<UBodySetup>
                       ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->ShapeBodySetup).field0_0x0.DebugPtr = pUVar6;
    if (*(int *)&this->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
      pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar7,RootSet);
    }
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)(this->ShapeBodySetup).field0_0x0.DebugPtr,
               (UObjectBaseUtility *)this,false);
    pFVar7 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)&((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_
                                + 4));
    if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3a) & 1) != 0) &&
       (pFVar8 = FUObjectClusterContainer::GetObjectCluster
                           (&GUObjectClusters,
                            (UObjectBaseUtility *)(this->ShapeBodySetup).field0_0x0.DebugPtr),
       pFVar8 != (FUObjectCluster *)0x0)) {
      pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,
                          *(int *)((longlong)
                                   &((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar7,Async);
    }
    local_b8[0x18] = local_b8[0x18] | 1;
    local_b8._8_4_ = 0;
    local_b8._12_4_ = 0;
    local_b8._16_4_ = 0;
    *(undefined1 *)((longlong)&((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_ + 1) = 2;
    local_90 = local_b8;
    pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
    local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b8._20_4_ = 1;
    local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_60 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_9f = (FScriptContainerElement)0x3;
    local_98 = 6;
    local_b8._0_8_ = &___7FKBoxElem__6B_;
    local_70 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_68 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_58 = 1.0;
    local_54 = 1.0;
    local_50 = 1.0;
    pFVar9 = (pUVar6->AggGeom).BoxElems.AllocatorInstance.Data;
    if (((pFVar9 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 <
         pFVar9 + (longlong)(pUVar6->AggGeom).BoxElems.ArrayMax * 0x70)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (pUVar6->AggGeom).BoxElems.ArrayNum;
    piVar1 = &(pUVar6->AggGeom).BoxElems.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,&(pUVar6->AggGeom).BoxElems.AllocatorInstance,piVar1);
    }
    (pUVar6->AggGeom).BoxElems.ArrayNum = iVar5 + 1;
    pFVar9 = (pUVar6->AggGeom).BoxElems.AllocatorInstance.Data + (longlong)iVar5 * 0x70;
    *(undefined ***)pFVar9 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar9 + 8) = local_b8._8_4_;
    *(ulonglong *)(pFVar9 + 0xc) = CONCAT44(local_b8._16_4_,local_b8._12_4_);
    *(undefined4 *)(pFVar9 + 0x14) = local_b8._20_4_;
    pFVar9[0x18] = (FScriptContainerElement)
                   ((byte)pFVar9[0x18] ^ ((byte)pFVar9[0x18] ^ local_b8[0x18]) & 1);
    pFVar9[0x19] = local_9f;
    *(undefined4 *)(pFVar9 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar9 + 0x28) = pFVar9;
    *(undefined ***)pFVar9 = &___7FKBoxElem__6B_;
    *(double *)(pFVar9 + 0x30) = local_88._s_0.X;
    *(double *)(pFVar9 + 0x38) = local_88._s_0.Y;
    *(double *)(pFVar9 + 0x40) = local_88._s_0.Z;
    *(double *)(pFVar9 + 0x48) = local_70;
    *(double *)(pFVar9 + 0x50) = dStack_68;
    *(double *)(pFVar9 + 0x58) = local_60;
    *(float *)(pFVar9 + 0x60) = local_58;
    *(float *)(pFVar9 + 100) = local_54;
    *(float *)(pFVar9 + 0x68) = local_50;
    FKBoxElem::~FKBoxElem((FKBoxElem *)local_b8);
    ((this->ShapeBodySetup).field0_0x0.DebugPtr)->bNeverNeedsCookedCollisionData = '\x01';
    this->bUseArchetypeBodySetup = '\0';
    pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UBodySetup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    *(int *)&this->field_0x390 = local_res8.ObjectIndex;
    *(int *)&this->field_0x394 = local_res8.ObjectSerialNumber;
    bVar4 = FBodyInstance::IsValidBodyInstance((FBodyInstance *)&this->field_0x390);
    if (bVar4) {
      local_38 = &local_res20;
      local_40 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UShapeComponent::CreateShapeBodySetupIfNeeded<FKBoxElem>'::__l15::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                 ::Call;
      local_res20 = this;
      local_48 = FBodyInstance::GetPhysicsActorWeldRoot((FBodyInstance *)&this->field_0x390);
      FPhysInterface_Chaos::ExecuteWrite
                (&local_48,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 &local_40);
    }
  }
  return;
}

// CreateShapeBodySetupIfNeeded<FKSphereElem> @ 14791f270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UShapeComponent::CreateShapeBodySetupIfNeeded<FKSphereElem>(UShapeComponent *this)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBodySetup *pUVar6;
  FUObjectItem *pFVar7;
  FUObjectCluster *pFVar8;
  FScriptContainerElement *pFVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  UBodySetup *local_res18;
  UShapeComponent *local_res20;
  FSingleParticlePhysicsProxy *local_98;
  code *local_90;
  UShapeComponent **local_88;
  undefined1 local_80 [25];
  FScriptContainerElement local_67;
  undefined4 local_60;
  undefined1 *local_58;
  TVector<double>_u_0 local_50;
  float local_38;
  
  pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  if ((pUVar6 == (UBodySetup *)0x0) || (((uint)pUVar6->_padding_ >> 0x1e & 1) != 0)) {
    local_res10 = 0;
    pUVar6 = NewObject<UBodySetup>
                       ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->ShapeBodySetup).field0_0x0.DebugPtr = pUVar6;
    if (*(int *)&this->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
      pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar7,RootSet);
    }
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)(this->ShapeBodySetup).field0_0x0.DebugPtr,
               (UObjectBaseUtility *)this,false);
    pFVar7 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)&((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_
                                + 4));
    if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3a) & 1) != 0) &&
       (pFVar8 = FUObjectClusterContainer::GetObjectCluster
                           (&GUObjectClusters,
                            (UObjectBaseUtility *)(this->ShapeBodySetup).field0_0x0.DebugPtr),
       pFVar8 != (FUObjectCluster *)0x0)) {
      pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,
                          *(int *)((longlong)
                                   &((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar7,Async);
    }
    local_80[0x18] = local_80[0x18] | 1;
    local_80._8_4_ = 0;
    local_80._12_4_ = 0;
    local_80._16_4_ = 0;
    local_80._20_4_ = 0;
    *(undefined1 *)((longlong)&((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_ + 1) = 2;
    local_58 = local_80;
    pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
    local_50._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_50._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_67 = (FScriptContainerElement)0x3;
    local_50._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_60 = 6;
    local_80._0_8_ = &___7FKSphereElem__6B_;
    local_38 = 1.0;
    pFVar9 = (pUVar6->AggGeom).SphereElems.AllocatorInstance.Data;
    if (((pFVar9 <= (FScriptContainerElement *)local_80) &&
        ((FScriptContainerElement *)local_80 <
         pFVar9 + (longlong)(pUVar6->AggGeom).SphereElems.ArrayMax * 0x50)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (pUVar6->AggGeom).SphereElems.ArrayNum;
    piVar1 = &(pUVar6->AggGeom).SphereElems.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,(ForAnyElementType *)&pUVar6->AggGeom,piVar1);
    }
    (pUVar6->AggGeom).SphereElems.ArrayNum = iVar5 + 1;
    pFVar9 = (pUVar6->AggGeom).SphereElems.AllocatorInstance.Data + (longlong)iVar5 * 0x50;
    *(undefined ***)pFVar9 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar9 + 8) = local_80._8_4_;
    *(ulonglong *)(pFVar9 + 0xc) = CONCAT44(local_80._16_4_,local_80._12_4_);
    *(undefined4 *)(pFVar9 + 0x14) = local_80._20_4_;
    pFVar9[0x18] = (FScriptContainerElement)
                   ((byte)pFVar9[0x18] ^ (local_80[0x18] ^ (byte)pFVar9[0x18]) & 1);
    pFVar9[0x19] = local_67;
    *(undefined4 *)(pFVar9 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar9 + 0x28) = pFVar9;
    *(undefined ***)pFVar9 = &___7FKSphereElem__6B_;
    *(double *)(pFVar9 + 0x30) = local_50._s_0.X;
    *(double *)(pFVar9 + 0x38) = local_50._s_0.Y;
    *(double *)(pFVar9 + 0x40) = local_50._s_0.Z;
    *(float *)(pFVar9 + 0x48) = local_38;
    FKSphereElem::~FKSphereElem((FKSphereElem *)local_80);
    ((this->ShapeBodySetup).field0_0x0.DebugPtr)->bNeverNeedsCookedCollisionData = '\x01';
    this->bUseArchetypeBodySetup = '\0';
    pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UBodySetup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    *(int *)&this->field_0x390 = local_res8.ObjectIndex;
    *(int *)&this->field_0x394 = local_res8.ObjectSerialNumber;
    bVar4 = FBodyInstance::IsValidBodyInstance((FBodyInstance *)&this->field_0x390);
    if (bVar4) {
      local_88 = &local_res20;
      local_90 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UShapeComponent::CreateShapeBodySetupIfNeeded<FKSphereElem>'::__l15::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                 ::Call;
      local_res20 = this;
      local_98 = FBodyInstance::GetPhysicsActorWeldRoot((FBodyInstance *)&this->field_0x390);
      FPhysInterface_Chaos::ExecuteWrite
                (&local_98,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 &local_90);
    }
  }
  return;
}

// CreateShapeBodySetupIfNeeded<FKSphylElem> @ 14791f5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UShapeComponent::CreateShapeBodySetupIfNeeded<FKSphylElem>(UShapeComponent *this)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBodySetup *pUVar6;
  FUObjectItem *pFVar7;
  FUObjectCluster *pFVar8;
  FScriptContainerElement *pFVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  UBodySetup *local_res18;
  UShapeComponent *local_res20;
  undefined1 local_a8 [25];
  FScriptContainerElement local_8f;
  undefined4 local_88;
  undefined1 *local_80;
  TVector<double>_u_0 local_78;
  double local_60;
  double dStack_58;
  double local_50;
  float local_48;
  float local_44;
  FSingleParticlePhysicsProxy *local_40;
  code *local_38;
  UShapeComponent **local_30;
  
  pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  if ((pUVar6 == (UBodySetup *)0x0) || (((uint)pUVar6->_padding_ >> 0x1e & 1) != 0)) {
    local_res10 = 0;
    pUVar6 = NewObject<UBodySetup>
                       ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->ShapeBodySetup).field0_0x0.DebugPtr = pUVar6;
    if (*(int *)&this->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
      pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar7,RootSet);
    }
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)(this->ShapeBodySetup).field0_0x0.DebugPtr,
               (UObjectBaseUtility *)this,false);
    pFVar7 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)&((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_
                                + 4));
    if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3a) & 1) != 0) &&
       (pFVar8 = FUObjectClusterContainer::GetObjectCluster
                           (&GUObjectClusters,
                            (UObjectBaseUtility *)(this->ShapeBodySetup).field0_0x0.DebugPtr),
       pFVar8 != (FUObjectCluster *)0x0)) {
      pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,
                          *(int *)((longlong)
                                   &((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar7,Async);
    }
    local_a8[0x18] = local_a8[0x18] | 1;
    local_a8._8_4_ = 0;
    local_a8._12_4_ = 0;
    local_a8._16_4_ = 0;
    *(undefined1 *)((longlong)&((this->ShapeBodySetup).field0_0x0.DebugPtr)->_padding_ + 1) = 2;
    local_80 = local_a8;
    pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
    local_78._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_78._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8._20_4_ = 2;
    local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_50 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_8f = (FScriptContainerElement)0x3;
    local_88 = 6;
    local_a8._0_8_ = &___7FKSphylElem__6B_;
    local_60 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_58 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_48 = 1.0;
    local_44 = 1.0;
    pFVar9 = (pUVar6->AggGeom).SphylElems.AllocatorInstance.Data;
    if (((pFVar9 <= (FScriptContainerElement *)local_a8) &&
        ((FScriptContainerElement *)local_a8 <
         pFVar9 + (longlong)(pUVar6->AggGeom).SphylElems.ArrayMax * 0x68)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (pUVar6->AggGeom).SphylElems.ArrayNum;
    piVar1 = &(pUVar6->AggGeom).SphylElems.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,&(pUVar6->AggGeom).SphylElems.AllocatorInstance,piVar1);
    }
    (pUVar6->AggGeom).SphylElems.ArrayNum = iVar5 + 1;
    pFVar9 = (pUVar6->AggGeom).SphylElems.AllocatorInstance.Data + (longlong)iVar5 * 0x68;
    *(undefined ***)pFVar9 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar9 + 8) = local_a8._8_4_;
    *(ulonglong *)(pFVar9 + 0xc) = CONCAT44(local_a8._16_4_,local_a8._12_4_);
    *(undefined4 *)(pFVar9 + 0x14) = local_a8._20_4_;
    pFVar9[0x18] = (FScriptContainerElement)
                   ((byte)pFVar9[0x18] ^ ((byte)pFVar9[0x18] ^ local_a8[0x18]) & 1);
    pFVar9[0x19] = local_8f;
    *(undefined4 *)(pFVar9 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar9 + 0x28) = pFVar9;
    *(undefined ***)pFVar9 = &___7FKSphylElem__6B_;
    *(double *)(pFVar9 + 0x30) = local_78._s_0.X;
    *(double *)(pFVar9 + 0x38) = local_78._s_0.Y;
    *(double *)(pFVar9 + 0x40) = local_78._s_0.Z;
    *(double *)(pFVar9 + 0x48) = local_60;
    *(double *)(pFVar9 + 0x50) = dStack_58;
    *(double *)(pFVar9 + 0x58) = local_50;
    *(float *)(pFVar9 + 0x60) = local_48;
    *(float *)(pFVar9 + 100) = local_44;
    FKSphylElem::~FKSphylElem((FKSphylElem *)local_a8);
    ((this->ShapeBodySetup).field0_0x0.DebugPtr)->bNeverNeedsCookedCollisionData = '\x01';
    this->bUseArchetypeBodySetup = '\0';
    pUVar6 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UBodySetup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    *(int *)&this->field_0x390 = local_res8.ObjectIndex;
    *(int *)&this->field_0x394 = local_res8.ObjectSerialNumber;
    bVar4 = FBodyInstance::IsValidBodyInstance((FBodyInstance *)&this->field_0x390);
    if (bVar4) {
      local_30 = &local_res20;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UShapeComponent::CreateShapeBodySetupIfNeeded<FKSphylElem>'::__l15::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                 ::Call;
      local_res20 = this;
      local_40 = FBodyInstance::GetPhysicsActorWeldRoot((FBodyInstance *)&this->field_0x390);
      FPhysInterface_Chaos::ExecuteWrite
                (&local_40,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 &local_38);
    }
  }
  return;
}

// SetShapeToNewGeom<FKBoxElem> @ 147927420

void __thiscall
UShapeComponent::SetShapeToNewGeom<FKBoxElem>
          (UShapeComponent *this,FPhysicsShapeReference_Chaos *param_1)

{
  FScriptContainerElement *pFVar1;
  UBodySetup *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pUVar2 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  if ((pUVar2->AggGeom).BoxElems.ArrayNum < 1) {
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
  pFVar3 = (pUVar2->AggGeom).BoxElems.AllocatorInstance.Data;
  pFVar1 = pFVar3 + 0x20;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\PhysicsInterfaceTypesCore.h"
                       ,0xf4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)pFVar1 = 6;
  *(FScriptContainerElement **)(pFVar3 + 0x28) = pFVar3;
  FChaosEngineInterface::SetUserData(param_1,pFVar1);
  return;
}

// SetShapeToNewGeom<FKSphereElem> @ 1479274e0

void __thiscall
UShapeComponent::SetShapeToNewGeom<FKSphereElem>
          (UShapeComponent *this,FPhysicsShapeReference_Chaos *param_1)

{
  FScriptContainerElement *pFVar1;
  UBodySetup *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pUVar2 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  if ((pUVar2->AggGeom).SphereElems.ArrayNum < 1) {
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
  pFVar3 = (pUVar2->AggGeom).SphereElems.AllocatorInstance.Data;
  pFVar1 = pFVar3 + 0x20;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\PhysicsInterfaceTypesCore.h"
                       ,0xf4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)pFVar1 = 6;
  *(FScriptContainerElement **)(pFVar3 + 0x28) = pFVar3;
  FChaosEngineInterface::SetUserData(param_1,pFVar1);
  return;
}

// SetShapeToNewGeom<FKSphylElem> @ 1479275a0

void __thiscall
UShapeComponent::SetShapeToNewGeom<FKSphylElem>
          (UShapeComponent *this,FPhysicsShapeReference_Chaos *param_1)

{
  FScriptContainerElement *pFVar1;
  UBodySetup *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pUVar2 = (this->ShapeBodySetup).field0_0x0.DebugPtr;
  if ((pUVar2->AggGeom).SphylElems.ArrayNum < 1) {
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
  pFVar3 = (pUVar2->AggGeom).SphylElems.AllocatorInstance.Data;
  pFVar1 = pFVar3 + 0x20;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\PhysicsInterfaceTypesCore.h"
                       ,0xf4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)pFVar1 = 6;
  *(FScriptContainerElement **)(pFVar3 + 0x28) = pFVar3;
  FChaosEngineInterface::SetUserData(param_1,pFVar1);
  return;
}

// UShapeComponent @ 14792aeb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UShapeComponent * __thiscall
UShapeComponent::UShapeComponent(UShapeComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->ShapeBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->AreaClassOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UShapeComponent @ 14792af30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UShapeComponent * __thiscall
UShapeComponent::UShapeComponent(UShapeComponent *this,FObjectInitializer *param_1)

{
  byte bVar1;
  void *pvVar2;
  bool bVar3;
  ulonglong uVar4;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  uVar4 = (ulonglong)_tls_index;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pvVar2 = ThreadLocalStoragePointer;
  (this->ShapeBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->AreaClassOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CollisionProfileName,L"OverlapAllDynamic");
      _Init_thread_footer(&::_TSS0);
    }
  }
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,CollisionProfileName,true);
  this->field_0x398 = this->field_0x398 | 0x20;
  this->field_0x1a9 = this->field_0x1a9 | 8;
  this->field_0x27e = this->field_0x27e & 0xdf;
  this->field_0x280 = this->field_0x280 | 2;
  this->bShouldCollideWhenPlacing = '\0';
  (this->ShapeColor).field0_0x0.Bits = 0xffdf959d;
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  this->bUseArchetypeBodySetup = '\0';
  this->field_0x9a = this->field_0x9a | 0x80;
  this->field_0x27a = this->field_0x27a | 0x80;
  bVar1 = this->field_0x554;
  this->field_0x285 = 1;
  (this->AreaClassOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->field_0x554 = !bVar3 << 4 | bVar1 & 0xfb | 8;
  return this;
}

// ~UShapeComponent @ 14792d0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UShapeComponent::~UShapeComponent(UShapeComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// operator() @ 14792e520

void __thiscall
`UShapeComponent::CreateShapeBodySetupIfNeeded<FKBoxElem>'::__l15::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  FPhysicsShapeReference_Chaos *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  FBodyInstance::GetAllShapes_AssumesLocked((FBodyInstance *)(*(longlong *)this + 0x390),&local_38);
  iVar4 = local_38.ArrayNum;
  uVar6 = (ulonglong)local_38.ArrayNum;
  pFVar7 = (FPhysicsShapeReference_Chaos *)(local_38.AllocatorInstance.Data + uVar6 * 0x10);
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FPhysicsShapeReference_Chaos *)FVar8.Data == pFVar7) break;
    bVar5 = FBodyInstance::IsShapeBoundToBody
                      ((FBodyInstance *)(*(longlong *)this + 0x390),
                       (FPhysicsShapeReference_Chaos *)FVar8.Data);
    if (bVar5) {
      lVar2 = *(longlong *)(*(longlong *)this + 0x548);
      if (*(int *)(lVar2 + 0x50) < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x48);
      puVar1 = (undefined4 *)(lVar2 + 0x20);
      if (puVar1 == (undefined4 *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\PhysicsInterfaceTypesCore.h"
                           ,0xf4,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *puVar1 = 6;
      *(longlong *)(lVar2 + 0x28) = lVar2;
      FChaosEngineInterface::SetUserData((FPhysicsShapeReference_Chaos *)FVar8.Data,puVar1);
    }
    uVar6 = local_38._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x10;
  }
  if ((FPhysicsShapeReference_Chaos *)local_38.AllocatorInstance.Data !=
      (FPhysicsShapeReference_Chaos *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14792e690

void __thiscall
`UShapeComponent::CreateShapeBodySetupIfNeeded<FKSphereElem>'::__l15::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  FPhysicsShapeReference_Chaos *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  FBodyInstance::GetAllShapes_AssumesLocked((FBodyInstance *)(*(longlong *)this + 0x390),&local_38);
  iVar4 = local_38.ArrayNum;
  uVar6 = (ulonglong)local_38.ArrayNum;
  pFVar7 = (FPhysicsShapeReference_Chaos *)(local_38.AllocatorInstance.Data + uVar6 * 0x10);
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FPhysicsShapeReference_Chaos *)FVar8.Data == pFVar7) break;
    bVar5 = FBodyInstance::IsShapeBoundToBody
                      ((FBodyInstance *)(*(longlong *)this + 0x390),
                       (FPhysicsShapeReference_Chaos *)FVar8.Data);
    if (bVar5) {
      lVar2 = *(longlong *)(*(longlong *)this + 0x548);
      if (*(int *)(lVar2 + 0x40) < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x38);
      puVar1 = (undefined4 *)(lVar2 + 0x20);
      if (puVar1 == (undefined4 *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\PhysicsInterfaceTypesCore.h"
                           ,0xf4,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *puVar1 = 6;
      *(longlong *)(lVar2 + 0x28) = lVar2;
      FChaosEngineInterface::SetUserData((FPhysicsShapeReference_Chaos *)FVar8.Data,puVar1);
    }
    uVar6 = local_38._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x10;
  }
  if ((FPhysicsShapeReference_Chaos *)local_38.AllocatorInstance.Data !=
      (FPhysicsShapeReference_Chaos *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14792e800

void __thiscall
`UShapeComponent::CreateShapeBodySetupIfNeeded<FKSphylElem>'::__l15::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  FPhysicsShapeReference_Chaos *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  FBodyInstance::GetAllShapes_AssumesLocked((FBodyInstance *)(*(longlong *)this + 0x390),&local_38);
  iVar4 = local_38.ArrayNum;
  uVar6 = (ulonglong)local_38.ArrayNum;
  pFVar7 = (FPhysicsShapeReference_Chaos *)(local_38.AllocatorInstance.Data + uVar6 * 0x10);
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FPhysicsShapeReference_Chaos *)FVar8.Data == pFVar7) break;
    bVar5 = FBodyInstance::IsShapeBoundToBody
                      ((FBodyInstance *)(*(longlong *)this + 0x390),
                       (FPhysicsShapeReference_Chaos *)FVar8.Data);
    if (bVar5) {
      lVar2 = *(longlong *)(*(longlong *)this + 0x548);
      if (*(int *)(lVar2 + 0x60) < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x58);
      puVar1 = (undefined4 *)(lVar2 + 0x20);
      if (puVar1 == (undefined4 *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\PhysicsInterfaceTypesCore.h"
                           ,0xf4,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *puVar1 = 6;
      *(longlong *)(lVar2 + 0x28) = lVar2;
      FChaosEngineInterface::SetUserData((FPhysicsShapeReference_Chaos *)FVar8.Data,puVar1);
    }
    uVar6 = local_38._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x10;
  }
  if ((FPhysicsShapeReference_Chaos *)local_38.AllocatorInstance.Data !=
      (FPhysicsShapeReference_Chaos *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// CalcBounds @ 147935fe0

TBoxSphereBounds<double,double> * __thiscall
UShapeComponent::CalcBounds
          (UShapeComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBoxSphereBounds<double,double> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false && \"Subclass needs to Implement this\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ShapeComponent.cpp"
                     ,0x5b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TBoxSphereBounds<double,double> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14793e0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UShapeComponent::CreateSceneProxy(UShapeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FPrimitiveSceneProxy *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false && \"Subclass needs to Implement this\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ShapeComponent.cpp"
                     ,0x55,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPrimitiveSceneProxy *)(*pcVar1)();
    return pFVar3;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DoCustomNavigableGeometryExport @ 147940290

bool __thiscall
UShapeComponent::DoCustomNavigableGeometryExport
          (UShapeComponent *this,FNavigableGeometryExport *param_1)

{
  return (bool)(~((byte)this->field_0x304 >> 2) & 1);
}

// GetBodySetup @ 147945720

UBodySetup * __thiscall UShapeComponent::GetBodySetup(UShapeComponent *this)

{
  (**(code **)(*(longlong *)this + 0xa90))();
  return (this->ShapeBodySetup).field0_0x0.DebugPtr;
}

// GetDesiredAreaClass @ 147948da0

TSubclassOf<UNavAreaBase> __thiscall UShapeComponent::GetDesiredAreaClass(UShapeComponent *this)

{
  TSubclassOf<UNavAreaBase> TVar1;
  TObjectPtr<UClass> in_RDX;
  UClass *pUVar2;
  
  if (this->bUseSystemDefaultObstacleAreaClass == '\0') {
    pUVar2 = (this->AreaClassOverride).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  else {
    TVar1 = FNavigationSystem::GetDefaultObstacleArea();
    pUVar2 = *(UClass **)TVar1.Class.field0_0x0;
  }
  *(UClass **)in_RDX.field0_0x0 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return (TSubclassOf<UNavAreaBase>)in_RDX.field0_0x0;
}

// GetNavigationData @ 14794aa60

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
UShapeComponent::GetNavigationData(UShapeComponent *this,FNavigationRelevantData *param_1)

{
  TSubclassOf<UNavAreaBase> TVar1;
  UObject *pUVar2;
  undefined8 local_res8 [2];
  UObject *local_res18 [2];
  
  UPrimitiveComponent::GetNavigationData((UPrimitiveComponent *)this,param_1);
  if ((this->field_0x304 & 4) != 0) {
    local_res8[0] = 0;
    if ((this->field_0x304 & 8) == 0) {
      pUVar2 = *(UObject **)&this->field_0x308;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    }
    else {
      TVar1 = FNavigationSystem::GetDefaultObstacleArea();
      pUVar2 = *(UObject **)TVar1.Class.field0_0x0;
    }
    local_res18[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FCompositeNavModifier::CreateAreaModifiers
              (&param_1->Modifiers,(UPrimitiveComponent *)&this[-1].field_0x320,
               (TSubclassOf<UNavAreaBase>)local_res18,(TSubclassOf<UNavAreaBase>)local_res8);
  }
  return;
}

// GetPrivateStaticClass @ 14794c6a0

UClass * __cdecl UShapeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShapeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ShapeComponent",
               &Z_Registration_Info_UClass_UShapeComponent.InnerSingleton,
               StaticRegisterNativesUShapeComponent,0x570,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UShapeComponent>,InternalVTableHelperCtorCaller<UShapeComponent>,
               local_res8,UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShapeComponent.InnerSingleton;
}

// IsNavigationRelevant @ 1479564a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UShapeComponent::IsNavigationRelevant(UShapeComponent *this)

{
  bool bVar1;
  
  if ((this->bDynamicObstacle == '\0') || (-1 < (char)this->field_0x9a)) {
    bVar1 = UPrimitiveComponent::IsNavigationRelevant((UPrimitiveComponent *)this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// Serialize @ 1479662c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UShapeComponent::Serialize(UShapeComponent *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      FBodyInstance::FixupData((FBodyInstance *)&this->field_0x390,(UObject *)this);
    }
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if ((iVar2 < 0x18) && ((char)this->field_0x27f < '\0')) {
    this->field_0x277 = 1;
  }
  return;
}

// Serialize @ 1479662d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UShapeComponent::Serialize(UShapeComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  return;
}

// SetAreaClassOverride @ 147967270

void __thiscall
UShapeComponent::SetAreaClassOverride(UShapeComponent *this,TSubclassOf<UNavAreaBase> param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->AreaClassOverride).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  this->bUseSystemDefaultObstacleAreaClass = '\0';
  return;
}

// SetLineThickness @ 1479685d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UShapeComponent::SetLineThickness(UShapeComponent *this,float param_1)

{
  this->LineThickness = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetUseSystemDefaultObstacleAreaClass @ 14796cda0

void __thiscall UShapeComponent::SetUseSystemDefaultObstacleAreaClass(UShapeComponent *this)

{
  this->bUseSystemDefaultObstacleAreaClass = '\x01';
  return;
}

// StaticRegisterNativesUShapeComponent @ 1479708c0

void __cdecl UShapeComponent::StaticRegisterNativesUShapeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UShapeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBodySetup @ 147976eb0

void __thiscall UShapeComponent::UpdateBodySetup(UShapeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false && \"Subclass needs to Implement this\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ShapeComponent.cpp"
                     ,0x61,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execSetLineThickness @ 14798a100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UShapeComponent::execSetLineThickness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x22].field_0x10 = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

