// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FNavigationDirtyElement @ 14737b100

FNavigationDirtyElement * __thiscall
FNavigationDirtyElement::FNavigationDirtyElement
          (FNavigationDirtyElement *this,FNavigationDirtyElement *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar4;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  byte bVar13;
  
  (this->ExplicitAreasToDirty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ExplicitAreasToDirty).ArrayMax;
  iVar3 = (param_1->ExplicitAreasToDirty).ArrayNum;
  _Src = (param_1->ExplicitAreasToDirty).AllocatorInstance.Data;
  (this->ExplicitAreasToDirty).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->ExplicitAreasToDirty).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x38);
  }
  (this->NavigationElement).Object = (param_1->NavigationElement).Object;
  pTVar4 = (param_1->NavigationElement).SharedReferenceCount.ReferenceController;
  (this->NavigationElement).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  dVar5 = (param_1->PrevBounds).Min.field0_0x0._s_0.Y;
  (this->PrevBounds).Min.field0_0x0._s_0.X = (param_1->PrevBounds).Min.field0_0x0._s_0.X;
  (this->PrevBounds).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->PrevBounds).Max.field0_0x0._s_0.X;
  (this->PrevBounds).Min.field0_0x0._s_0.Z = (param_1->PrevBounds).Min.field0_0x0._s_0.Z;
  (this->PrevBounds).Max.field0_0x0._s_0.X = dVar5;
  dVar5 = (param_1->PrevBounds).Max.field0_0x0._s_0.Z;
  (this->PrevBounds).Max.field0_0x0._s_0.Y = (param_1->PrevBounds).Max.field0_0x0._s_0.Y;
  (this->PrevBounds).Max.field0_0x0._s_0.Z = dVar5;
  uVar6 = (param_1->PrevBounds).Pad[0];
  uVar7 = (param_1->PrevBounds).Pad[1];
  uVar8 = (param_1->PrevBounds).Pad[2];
  uVar9 = (param_1->PrevBounds).Pad[3];
  uVar10 = (param_1->PrevBounds).Pad[4];
  uVar11 = (param_1->PrevBounds).Pad[5];
  uVar12 = (param_1->PrevBounds).Pad[6];
  (this->PrevBounds).IsValid = (param_1->PrevBounds).IsValid;
  (this->PrevBounds).Pad[0] = uVar6;
  (this->PrevBounds).Pad[1] = uVar7;
  (this->PrevBounds).Pad[2] = uVar8;
  (this->PrevBounds).Pad[3] = uVar9;
  (this->PrevBounds).Pad[4] = uVar10;
  (this->PrevBounds).Pad[5] = uVar11;
  (this->PrevBounds).Pad[6] = uVar12;
  this->FlagsOverride = param_1->FlagsOverride;
  this->PrevFlags = param_1->PrevFlags;
  bVar13 = (this->bHasPrevData ^ param_1->bHasPrevData) & 1 ^ this->field_0x5a;
  this->field_0x5a = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x5a) & 2 ^ bVar13;
  this->field_0x5a = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x5a) & 4 ^ bVar13;
  this->field_0x5a = bVar13;
  this->field_0x5a = (bVar13 ^ param_1->field_0x5a) & 8 ^ bVar13;
  return this;
}

// FNavigationDirtyElement @ 14737b210

FNavigationDirtyElement * __thiscall
FNavigationDirtyElement::FNavigationDirtyElement
          (FNavigationDirtyElement *this,TSharedRef<FNavigationElement_const_,1> *param_1,
          ENavigationDirtyFlag param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  byte bVar2;
  
  (this->ExplicitAreasToDirty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplicitAreasToDirty).ArrayNum = 0;
  (this->ExplicitAreasToDirty).ArrayMax = 0;
  (this->NavigationElement).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->NavigationElement).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->PrevBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->PrevBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->PrevBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->PrevBounds).IsValid = '\0';
  (this->PrevBounds).Pad[0] = '\0';
  (this->PrevBounds).Pad[1] = '\0';
  (this->PrevBounds).Pad[2] = '\0';
  (this->PrevBounds).Pad[3] = '\0';
  (this->PrevBounds).Pad[4] = '\0';
  (this->PrevBounds).Pad[5] = '\0';
  (this->PrevBounds).Pad[6] = '\0';
  bVar2 = this->field_0x5a;
  this->FlagsOverride = param_2;
  this->PrevFlags = None;
  this->bHasPrevData = '\0';
  this->bInvalidRequest = '\0';
  if ((param_3) && (((this->NavigationElement).Object)->bIsFromLevelVisibilityChange != false)) {
    bVar2 = bVar2 & 0xfc | 4;
    this->field_0x5a = bVar2;
  }
  else {
    bVar2 = bVar2 & 0xf8;
    this->field_0x5a = bVar2;
    if (!param_3) goto LAB_14737b2b6;
  }
  if (((this->NavigationElement).Object)->bIsInBaseNavigationData != false) {
    this->field_0x5a = bVar2 & 0xf7 | 8;
    return this;
  }
LAB_14737b2b6:
  this->field_0x5a = bVar2 & 0xf7;
  return this;
}

// FNavigationDirtyElement @ 14737b2d0

FNavigationDirtyElement * __thiscall
FNavigationDirtyElement::FNavigationDirtyElement
          (FNavigationDirtyElement *this,TSharedRef<FNavigationElement_const_,1> *param_1,
          bool param_2)

{
  FNavigationDirtyElement(this,param_1,None,param_2);
  return this;
}

// FNavigationDirtyElement @ 14737b300

FNavigationDirtyElement * __thiscall
FNavigationDirtyElement::FNavigationDirtyElement(FNavigationDirtyElement *this,UObject *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  FNavigationDirtyElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FNavigationElement *pFVar11;
  FPrivateToken local_res8;
  
  pTVar8 = ::operator_new(0x130);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pFVar11 = (FNavigationElement *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFNavigationElement___00_SharedPointerInternals__6B_;
    FNavigationElement::FNavigationElement
              ((FNavigationElement *)(pTVar8 + 1),local_res8,param_1,0xffffffffffffffff);
    pFVar11 = (FNavigationElement *)(pTVar8 + 1);
    pTVar10 = pTVar8;
    if (pFVar11 == (FNavigationElement *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FNavigationDirtyElement *)(*pcVar6)();
        return pFVar9;
      }
      goto LAB_14737b40b;
    }
  }
  if (((*(longlong *)&pFVar11->field_0x0 == 0) || (*(longlong *)&pFVar11->field_0x8 == 0)) ||
     (*(int *)(*(longlong *)&pFVar11->field_0x8 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FNavigationElement **)&pFVar11->field_0x0 = pFVar11;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar11->field_0x8) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar11->field_0x8;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar11->field_0x8 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14737b40b:
  paVar2 = &pTVar10->SharedReferenceCount;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  (this->NavigationElement).Object = pFVar11;
  (this->ExplicitAreasToDirty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplicitAreasToDirty).ArrayNum = 0;
  (this->ExplicitAreasToDirty).ArrayMax = 0;
  (this->NavigationElement).SharedReferenceCount.ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  (this->PrevBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->PrevBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->PrevBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->PrevBounds).IsValid = '\0';
  *(undefined8 *)(this->PrevBounds).Pad = 0;
  this->bHasPrevData = '\0';
  this->bIsInBaseNavmesh = '\0';
  this->bIsFromVisibilityChange = '\0';
  this->bInvalidRequest = '\0';
  this->PrevFlags = None;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return this;
}

// FNavigationDirtyElement @ 14737b490

FNavigationDirtyElement * __thiscall
FNavigationDirtyElement::FNavigationDirtyElement
          (FNavigationDirtyElement *this,UObject *param_1,INavRelevantInterface *param_2,int param_3
          ,bool param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FNavigationDirtyElement *pFVar7;
  FNavigationElement *pFVar8;
  FPrivateToken local_res8;
  TSharedRef<FNavigationElement_const_,1> local_38;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FNavigationElement *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFNavigationElement___00_SharedPointerInternals__6B_;
    FNavigationElement::FNavigationElement
              ((FNavigationElement *)(pTVar6 + 1),local_res8,param_1,0xffffffffffffffff);
    pFVar8 = (FNavigationElement *)(pTVar6 + 1);
    if (pFVar8 == (FNavigationElement *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FNavigationDirtyElement *)(*pcVar4)();
        return pFVar7;
      }
      goto LAB_14737b597;
    }
  }
  if (((*(longlong *)pFVar8 == 0) || (*(longlong *)&pFVar8->field_0x8 == 0)) ||
     (*(int *)(*(longlong *)&pFVar8->field_0x8 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FNavigationElement **)pFVar8 = pFVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pFVar8->field_0x8) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar8->field_0x8;
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
      *(TReferenceControllerBase<1> **)&pFVar8->field_0x8 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14737b597:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar8;
  local_38.SharedReferenceCount.ReferenceController = pTVar6;
  FNavigationDirtyElement(this,&local_38,(ENavigationDirtyFlag)param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// FNavigationDirtyElement @ 14737b600

FNavigationDirtyElement * __thiscall
FNavigationDirtyElement::FNavigationDirtyElement(FNavigationDirtyElement *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FNavigationDirtyElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 *puVar9;
  FNavigationElement *pFVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  pTVar6 = ::operator_new(0x130);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FNavigationElement *)&DAT_00000010;
LAB_14737b789:
    if (((*(longlong *)&pFVar10->field_0x0 == 0) || (*(longlong *)&pFVar10->field_0x8 == 0)) ||
       (*(int *)(*(longlong *)&pFVar10->field_0x8 + 8) < 1)) {
      puVar9 = &pFVar10->field_0x8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FNavigationElement **)&pFVar10->field_0x0 = pFVar10;
      if (pTVar8 != *(TReferenceControllerBase<1> **)puVar9) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = *(longlong **)puVar9;
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
        *(TReferenceControllerBase<1> **)puVar9 = pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14737b7f1;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    local_res8 = 0;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFNavigationElement___00_SharedPointerInternals__6B_;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[6].SharedReferenceCount,(FObjectPtr)&local_res8);
    pTVar6[7]._padding_ = -1;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    local_res10 = 0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[7].SharedReferenceCount,(FObjectPtr)&local_res10);
    pTVar6[8] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_res18 = 0;
    pTVar6[9] = (TReferenceControllerBase<1>)
                UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    pTVar6[10] = (TReferenceControllerBase<1>)
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    pTVar6[0xb] = (TReferenceControllerBase<1>)
                  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    pTVar6[0xc] = (TReferenceControllerBase<1>)
                  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    pTVar6[0xd] = (TReferenceControllerBase<1>)
                  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    *(undefined1 *)&pTVar6[0x11]._padding_ = 0;
    pTVar6[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x11].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[0x11].SharedReferenceCount,(FObjectPtr)&local_res18);
    *(undefined4 *)&pTVar6[0x12]._padding_ = 0;
    *(undefined2 *)((longlong)&pTVar6[0x12]._padding_ + 4) = 0x100;
    bVar5 = FNavigationSystem::IsInBaseNavmesh((UObject *)0x0);
    pFVar10 = (FNavigationElement *)(pTVar6 + 1);
    *(bool *)((longlong)&pTVar6[0x12]._padding_ + 6) = bVar5;
    *(undefined1 *)((longlong)&pTVar6[0x12]._padding_ + 7) = 0;
    pTVar8 = pTVar6;
    if (pFVar10 != (FNavigationElement *)0x0) goto LAB_14737b789;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNavigationDirtyElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  LOCK();
  pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
  UNLOCK();
LAB_14737b7f1:
  (this->ExplicitAreasToDirty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplicitAreasToDirty).ArrayNum = 0;
  (this->ExplicitAreasToDirty).ArrayMax = 0;
  (this->NavigationElement).Object = pFVar10;
  (this->NavigationElement).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->PrevBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->PrevBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->PrevBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->PrevBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->PrevBounds).IsValid = '\0';
  *(undefined8 *)(this->PrevBounds).Pad = 0;
  this->bHasPrevData = '\0';
  this->bIsInBaseNavmesh = '\0';
  this->bIsFromVisibilityChange = '\0';
  this->bInvalidRequest = '\0';
  this->PrevFlags = None;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return this;
}

// operator= @ 14737e3b0

FNavigationDirtyElement * __thiscall
FNavigationDirtyElement::operator=(FNavigationDirtyElement *this,FNavigationDirtyElement *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar5;
  FNavigationElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  double dVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  byte bVar16;
  
  if (this != param_1) {
    iVar3 = (this->ExplicitAreasToDirty).ArrayMax;
    piVar1 = &(this->ExplicitAreasToDirty).ArrayMax;
    _Src = (param_1->ExplicitAreasToDirty).AllocatorInstance.Data;
    iVar4 = (param_1->ExplicitAreasToDirty).ArrayNum;
    (this->ExplicitAreasToDirty).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar4,iVar3,(ForAnyElementType *)this,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((this->ExplicitAreasToDirty).AllocatorInstance.Data,_Src,(longlong)iVar4 * 0x38);
      }
    }
  }
  pTVar5 = (param_1->NavigationElement).SharedReferenceCount.ReferenceController;
  pFVar6 = (param_1->NavigationElement).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (this->NavigationElement).SharedReferenceCount.ReferenceController;
  (this->NavigationElement).Object = pFVar6;
  (this->NavigationElement).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  dVar8 = (param_1->PrevBounds).Min.field0_0x0._s_0.Y;
  (this->PrevBounds).Min.field0_0x0._s_0.X = (param_1->PrevBounds).Min.field0_0x0._s_0.X;
  (this->PrevBounds).Min.field0_0x0._s_0.Y = dVar8;
  dVar8 = (param_1->PrevBounds).Max.field0_0x0._s_0.X;
  (this->PrevBounds).Min.field0_0x0._s_0.Z = (param_1->PrevBounds).Min.field0_0x0._s_0.Z;
  (this->PrevBounds).Max.field0_0x0._s_0.X = dVar8;
  dVar8 = (param_1->PrevBounds).Max.field0_0x0._s_0.Z;
  (this->PrevBounds).Max.field0_0x0._s_0.Y = (param_1->PrevBounds).Max.field0_0x0._s_0.Y;
  (this->PrevBounds).Max.field0_0x0._s_0.Z = dVar8;
  uVar9 = (param_1->PrevBounds).Pad[0];
  uVar10 = (param_1->PrevBounds).Pad[1];
  uVar11 = (param_1->PrevBounds).Pad[2];
  uVar12 = (param_1->PrevBounds).Pad[3];
  uVar13 = (param_1->PrevBounds).Pad[4];
  uVar14 = (param_1->PrevBounds).Pad[5];
  uVar15 = (param_1->PrevBounds).Pad[6];
  (this->PrevBounds).IsValid = (param_1->PrevBounds).IsValid;
  (this->PrevBounds).Pad[0] = uVar9;
  (this->PrevBounds).Pad[1] = uVar10;
  (this->PrevBounds).Pad[2] = uVar11;
  (this->PrevBounds).Pad[3] = uVar12;
  (this->PrevBounds).Pad[4] = uVar13;
  (this->PrevBounds).Pad[5] = uVar14;
  (this->PrevBounds).Pad[6] = uVar15;
  this->FlagsOverride = param_1->FlagsOverride;
  this->PrevFlags = param_1->PrevFlags;
  bVar16 = (this->bHasPrevData ^ param_1->bHasPrevData) & 1 ^ this->field_0x5a;
  this->field_0x5a = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x5a) & 2 ^ bVar16;
  this->field_0x5a = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x5a) & 4 ^ bVar16;
  this->field_0x5a = bVar16;
  this->field_0x5a = (bVar16 ^ param_1->field_0x5a) & 8 ^ bVar16;
  return this;
}

// operator== @ 14737eee0

bool __thiscall FNavigationDirtyElement::operator==(FNavigationDirtyElement *this,UObject **param_1)

{
  FNavigationElement *pFVar1;
  UObject *pUVar2;
  FWeakObjectPtr FVar3;
  ulong64 uVar4;
  UObject *local_res8;
  FWeakObjectPtr local_28 [2];
  FWeakObjectPtr local_18;
  
  pFVar1 = (this->NavigationElement).Object;
  pUVar2 = *param_1;
  FVar3 = (pFVar1->OwnerUObject).WeakPtr;
  uVar4 = pFVar1->SubElementId;
  local_18 = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_28[0].ObjectIndex = 0;
  local_28[0].ObjectSerialNumber = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(local_28,(FObjectPtr)&local_res8);
  if (((FVar3.ObjectIndex == local_28[0].ObjectIndex) &&
      (local_18.ObjectSerialNumber == local_28[0].ObjectSerialNumber)) &&
     (uVar4 == 0xffffffffffffffff)) {
    return true;
  }
  return false;
}

