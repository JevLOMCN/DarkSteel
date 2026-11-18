// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 24

// FNavigationDataHandler @ 146d73cb0

FNavigationDataHandler * __thiscall
FNavigationDataHandler::FNavigationDataHandler
          (FNavigationDataHandler *this,FNavigationOctreeController *param_1,
          FNavigationDirtyAreasController *param_2)

{
  this->OctreeController = param_1;
  this->DirtyAreasController = param_2;
  return this;
}

// operator() @ 146d7b360

bool __thiscall
`FNavigationDataHandler::UpdateNavOctreeParentChain'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  TSharedRef<FNavigationElement_const_,1> local_res8 [2];
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  if (**(char **)this != '\0') {
    return true;
  }
  local_18.Object = (FNavigationElement *)**(undefined8 **)((longlong)this + 8);
  local_18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 8))[1];
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FNavigationDataHandler::UnregisterElementWithNavOctree
                    (*(FNavigationDataHandler **)((longlong)this + 0x10),&local_18,0xc);
  if (bVar1) {
    FNavigationDataHandler::RegisterElementWithNavOctree
              (*(FNavigationDataHandler **)((longlong)this + 0x10),local_res8,(int)&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return (int)local_res8[0].Object != -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// AddElementToNavOctree @ 146d80c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::AddElementToNavOctree
          (FNavigationDataHandler *this,FNavigationDirtyElement *param_1)

{
  undefined1 *puVar1;
  FNavigationDirtyAreasController *pFVar2;
  FNavigationElement *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TWeakObjectPtr<UObject_const_,FWeakObjectPtr> TVar7;
  ulong64 uVar8;
  bool bVar9;
  ENavigationDirtyFlag EVar10;
  int iVar11;
  UObject *pUVar12;
  FNavigationElementHandle *pFVar13;
  FOctreeElementId2 *pFVar14;
  FNavigationOctree *pFVar15;
  undefined ***pppuVar16;
  FNavigationDirtyElement *pFVar17;
  uint uVar18;
  FNavigationOctreeController *pFVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_428 [32];
  FLLMScope local_3f0 [2];
  FString local_3e8;
  FString local_3d8;
  FName local_3c8;
  FName local_3c0;
  FWeakObjectPtr local_3b8;
  FWeakObjectPtr local_3b0;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FMemScope local_388 [2];
  TVector<double>_u_0 local_378;
  double local_360;
  double local_358;
  double local_350;
  FNavigationRelevantData *local_340;
  TReferenceControllerBase<1> *local_338;
  FNavigationElementHandle local_328;
  TVector<double>_u_0 *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  TBox<double> *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  TBox<double> *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  FLogScopedCategoryAndVerbosityOverride local_2e8;
  TArrayView<UE::Math::TBox<double>_const_,int> local_2d8;
  FString local_2c8;
  FNavigationElementHandle local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FNavigationElementHandle local_268;
  FNavigationElementHandle local_258;
  FString local_248;
  FString local_238;
  TArrayView<UE::Math::TBox<double>_const_,int> local_228;
  TArrayView<UE::Math::TBox<double>_const_,int> local_218;
  FString local_208;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  FNavigationElementHandle local_1c0 [4];
  undefined1 local_180;
  uchar auStack_17f [7];
  code *local_178 [2];
  undefined **local_168;
  FNavigationElement *local_160;
  TReferenceControllerBase<1> *local_158;
  undefined ***local_150;
  code *local_148 [2];
  undefined **local_138;
  FNavigationElement *local_130;
  TReferenceControllerBase<1> *local_128;
  undefined ***local_120;
  code *local_118 [2];
  undefined **local_108;
  FNavigationDirtyElement *local_100;
  undefined ***local_f0;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [56];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_428;
  if (((this->OctreeController->NavOctree).Object == (FNavigationOctree *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OctreeController.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                         ,0x89,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FLLMScope::FLLMScope
            (local_3f0,LLMTagDeclaration_NavigationOctree.UniqueName,false,None,Default,true);
  local_3c8 = LLMTagDeclaration_NavigationOctree.UniqueName;
  FMemScope::FMemScope(local_388,&local_3c8,true);
  if (param_1->bInvalidRequest != '\0') {
    if (param_1->bHasPrevData != 0) {
      pFVar2 = this->DirtyAreasController;
      ::FName::FName(&local_3c0,"Addition to navoctree (invalid request)");
      local_e8._s_0.X = (param_1->PrevBounds).Min.field0_0x0._s_0.X;
      local_e8._s_0.Y = (param_1->PrevBounds).Min.field0_0x0._s_0.Y;
      local_e8._s_0.Z = (param_1->PrevBounds).Min.field0_0x0._s_0.Z;
      dStack_d0 = (param_1->PrevBounds).Max.field0_0x0._s_0.X;
      local_108 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::`15'::<lambda_1>,0,0>
                   ::_vftable_;
      uStack_310 = 1;
      local_c8 = (param_1->PrevBounds).Max.field0_0x0._s_0.Y;
      dStack_c0 = (param_1->PrevBounds).Max.field0_0x0._s_0.Z;
      local_118[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FNavigationDataHandler::AddElementToNavOctree'::__l15::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
                     ::Call;
      local_318 = &local_e8;
      local_f0 = (undefined ***)0x0;
      local_2d8._12_4_ = uStack_30c;
      local_2d8.ArrayNum = 1;
      local_b8._0_1_ = (param_1->PrevBounds).IsValid;
      local_b8._1_1_ = (param_1->PrevBounds).Pad[0];
      local_b8._2_1_ = (param_1->PrevBounds).Pad[1];
      local_b8._3_1_ = (param_1->PrevBounds).Pad[2];
      local_b8._4_1_ = (param_1->PrevBounds).Pad[3];
      local_b8._5_1_ = (param_1->PrevBounds).Pad[4];
      local_b8._6_1_ = (param_1->PrevBounds).Pad[5];
      local_b8._7_1_ = (param_1->PrevBounds).Pad[6];
      local_2d8.DataPtr = (TBox<double> *)local_318;
      local_100 = param_1;
      FNavigationDirtyAreasController::AddAreas
                (pFVar2,&local_2d8,param_1->PrevFlags,
                 (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)local_118
                 ,param_1,&local_3c0);
      if (local_118[0] != (code *)0x0) {
        pppuVar16 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar16 = local_f0;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
    goto LAB_146d81813;
  }
  FNavigationOctreeElement::FNavigationOctreeElement
            ((FNavigationOctreeElement *)&local_378._s_0,&param_1->NavigationElement);
  this_00 = (param_1->NavigationElement).Object;
  local_3b8 = (this_00->OwnerUObject).WeakPtr;
  if ((local_3b8.ObjectIndex != 0) || (local_3b8.ObjectSerialNumber != 0)) {
    if (FVisualLogger::bIsRecording != 0) {
      FNavigationElement::GetPathName(this_00,&local_2c8);
      pUVar12 = FWeakObjectPtr::Get(&local_3b8);
      FVisualLogger::CategorizedLogfImpl
                (pUVar12,(FName *)&LogNavOctree.field_0x4,Verbose,
                 L"Create FNavigationOctreeElement for %s");
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogNavOctree._0_1_) {
      FNavigationElement::GetPathName(this_00,&local_208);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
    }
  }
  if (this->DirtyAreasController->bUseWorldPartitionedDynamicMode != '\0') {
    if ((param_1->bIsFromVisibilityChange == '\0') &&
       (this_00->bIsFromLevelVisibilityChange == false)) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0x20;
    }
    local_340->bLoadedData = uVar21 >> 5;
  }
  local_1f8._s_0.X = (this_00->Bounds).Min.field0_0x0._s_0.X;
  local_1f8._s_0.Y = (this_00->Bounds).Min.field0_0x0._s_0.Y;
  local_1f8._s_0.Z = (this_00->Bounds).Min.field0_0x0._s_0.Z;
  dStack_1e0 = (this_00->Bounds).Max.field0_0x0._s_0.X;
  local_1d8 = (this_00->Bounds).Max.field0_0x0._s_0.Y;
  dStack_1d0 = (this_00->Bounds).Max.field0_0x0._s_0.Z;
  local_1c8._0_1_ = (this_00->Bounds).IsValid;
  local_1c8._1_1_ = (this_00->Bounds).Pad[0];
  local_1c8._2_1_ = (this_00->Bounds).Pad[1];
  local_1c8._3_1_ = (this_00->Bounds).Pad[2];
  local_1c8._4_1_ = (this_00->Bounds).Pad[3];
  local_1c8._5_1_ = (this_00->Bounds).Pad[4];
  local_1c8._6_1_ = (this_00->Bounds).Pad[5];
  local_1c8._7_1_ = (this_00->Bounds).Pad[6];
  if (((this_00->NavigationParent).WeakPtr.ObjectIndex == 0) &&
     ((this_00->NavigationParent).WeakPtr.ObjectSerialNumber == 0)) {
    pFVar19 = this->OctreeController;
    if (((pFVar19->NavOctree).Object == (FNavigationOctree *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FNavigationOctree::AddNode
              ((pFVar19->NavOctree).Object,(TBox<double> *)&local_1f8._s_0,
               (FNavigationOctreeElement *)&local_378._s_0);
    if (5 < (byte)LogNavOctree._0_1_) {
      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                (&local_2e8,(FName)LogNavOctree._4_8_,Verbose);
      pFVar19 = this->OctreeController;
      pFVar13 = FNavigationElement::GetHandle((param_1->NavigationElement).Object,local_1c0);
      pFVar15 = (pFVar19->NavOctree).Object;
      local_2b8.OwnerUObject.WeakPtr = (pFVar13->OwnerUObject).WeakPtr;
      local_2b8.SubElementId = pFVar13->SubElementId;
      if (pFVar15 == (FNavigationOctree *)0x0) {
        pFVar14 = (FOctreeElementId2 *)0x0;
      }
      else {
        pFVar14 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                  ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                          *)&pFVar15->ElementToOctreeId,&local_2b8);
      }
      if (FVisualLogger::bIsRecording != 0) {
        if (pFVar14 != (FOctreeElementId2 *)0x0) {
          ::LexToString(&local_298,*pFVar14);
        }
        FNavigationElement::GetPathName(this_00,&local_2a8);
        local_3b0 = (this_00->OwnerUObject).WeakPtr;
        pUVar12 = FWeakObjectPtr::Get(&local_3b0);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar12,(FName *)&LogNavOctree.field_0x4,Log,L"ADD %s - %s");
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        if ((pFVar14 != (FOctreeElementId2 *)0x0) &&
           (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
      }
      if (4 < (byte)LogNavOctree._0_1_) {
        if (pFVar14 != (FOctreeElementId2 *)0x0) {
          ::LexToString(&local_278,*pFVar14);
        }
        FNavigationElement::GetPathName(this_00,&local_288);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        if ((pFVar14 != (FOctreeElementId2 *)0x0) &&
           (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
      }
      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavOctree,Verbose);
      FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_2e8);
    }
  }
  else {
    local_328.OwnerUObject.WeakPtr = (this_00->NavigationParent).WeakPtr;
    local_328.SubElementId = 0xffffffffffffffff;
    uVar18 = (local_328.OwnerUObject.WeakPtr.ObjectSerialNumber ^
             local_328.OwnerUObject.WeakPtr.ObjectIndex) + 0x18U ^ 0x7ffff;
    uVar21 = 0x9e3779d1 - uVar18 ^ uVar18 << 8;
    uVar22 = (-0x18 - uVar21) - uVar18 ^ uVar21 >> 0xd;
    uVar18 = (uVar18 - uVar22) - uVar21 ^ uVar22 >> 0xc;
    uVar21 = (uVar21 - uVar18) - uVar22 ^ uVar18 << 0x10;
    uVar22 = (uVar22 - uVar21) - uVar18 ^ uVar21 >> 5;
    uVar18 = (uVar18 - uVar22) - uVar21 ^ uVar22 >> 3;
    uVar21 = (uVar21 - uVar18) - uVar22 ^ uVar18 << 10;
    iVar11 = TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
             ::FindIndexByHash<FNavigationElementHandle>
                       (&this->OctreeController->PendingUpdates,
                        (uVar22 - uVar21) - uVar18 ^ uVar21 >> 0xf,&local_328);
    uVar8 = local_328.SubElementId;
    TVar7.WeakPtr = local_328.OwnerUObject.WeakPtr;
    pFVar19 = this->OctreeController;
    local_268.OwnerUObject.WeakPtr = local_328.OwnerUObject.WeakPtr;
    local_268.SubElementId = local_328.SubElementId;
    pFVar15 = (pFVar19->NavOctree).Object;
    if (pFVar15 == (FNavigationOctree *)0x0) {
      pFVar14 = (FOctreeElementId2 *)0x0;
    }
    else {
      pFVar14 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                        *)&pFVar15->ElementToOctreeId,&local_268);
    }
    if (iVar11 == -1) {
      if (pFVar14 == (FOctreeElementId2 *)0x0) goto LAB_146d812d9;
LAB_146d8130f:
      bVar9 = FNavigationOctreeController::IsValidElement(pFVar19,pFVar14);
      if (bVar9) {
        if (4 < (byte)LogNavOctree._0_1_) {
          pUVar12 = FWeakObjectPtr::Get(&(this_00->NavigationParent).WeakPtr);
          if (pUVar12 == (UObject *)0x0) {
            ::FString::FString(&local_3e8,L"None");
          }
          else {
            local_3a8.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
            local_3a8.Number = *(uint *)&pUVar12->field_0x1c;
            ::FName::ToString(&local_3a8,&local_3e8);
          }
          FNavigationElement::GetPathName(this_00,&local_248);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
          }
        }
        pFVar15 = TSharedPtr<FNavigationOctree,1>::operator->(&this->OctreeController->NavOctree);
        FNavigationOctree::AppendToNode
                  (pFVar15,pFVar14,&param_1->NavigationElement,(TBox<double> *)&local_1f8._s_0,
                   (FNavigationOctreeElement *)&local_378._s_0);
        goto LAB_146d81145;
      }
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_173074254177238847>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                         ,0xc1,"OctreeController.IsValidElement(*ElementId)");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      if (pFVar14 != (FOctreeElementId2 *)0x0) goto LAB_146d8130f;
      pFVar17 = (FNavigationDirtyElement *)
                ((longlong)iVar11 * 0x68 + *(longlong *)&(pFVar19->PendingUpdates).Elements);
      AddElementToNavOctree(this,pFVar17);
      pFVar17->bInvalidRequest = '\x01';
LAB_146d812d9:
      pFVar19 = this->OctreeController;
      local_258.OwnerUObject.WeakPtr = TVar7.WeakPtr;
      local_258.SubElementId = uVar8;
      pFVar15 = (pFVar19->NavOctree).Object;
      if (pFVar15 == (FNavigationOctree *)0x0) {
        pFVar14 = (FOctreeElementId2 *)0x0;
      }
      else {
        pFVar14 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                  ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                          *)&pFVar15->ElementToOctreeId,&local_258);
      }
      if (pFVar14 != (FOctreeElementId2 *)0x0) goto LAB_146d8130f;
    }
    if (2 < (byte)LogNavOctree._0_1_) {
      pUVar12 = FWeakObjectPtr::Get(&(this_00->NavigationParent).WeakPtr);
      if (pUVar12 == (UObject *)0x0) {
        ::FString::FString(&local_3d8,L"None");
      }
      else {
        local_3a0.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
        local_3a0.Number = *(uint *)&pUVar12->field_0x1c;
        ::FName::ToString(&local_3a0,&local_3d8);
      }
      FNavigationElement::GetPathName(this_00,&local_238);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_146d81145:
  EVar10 = param_1->FlagsOverride;
  if (EVar10 == None) {
    EVar10 = FNavigationRelevantData::GetDirtyFlag(local_340);
  }
  if (local_340->bShouldSkipDirtyAreaOnAddOrRemove == 0) {
    if (((((*(int *)&(local_340->VoxelData).field_0x10 == 0) &&
          (*(int *)&(local_340->CollisionData).field_0x10 == 0)) &&
         ((local_340->Modifiers).Areas.ArrayNum == 0)) &&
        (((local_340->Modifiers).SimpleLinks.ArrayNum == 0 &&
         ((local_340->Modifiers).CustomLinks.ArrayNum == 0)))) &&
       (((local_340->Modifiers).bFillCollisionUnderneathForNavmesh == 0 &&
         ((local_340->Modifiers).bMaskFillCollisionUnderneathForNavmesh == 0 &&
         (local_340->Modifiers).bRasterizeAsFilledConvexVolume == 0) &&
        ((local_340->Modifiers).NavMeshResolution == Invalid)))) {
      dVar6 = (local_378._s_0.X + local_360) - (local_378._s_0.X - local_360);
      dVar20 = (local_378._s_0.Y + local_358) - (local_378._s_0.Y - local_358);
      dVar5 = (local_378._s_0.Z + local_350) - (local_378._s_0.Z - local_350);
      uVar21 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar22 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((((double)CONCAT44(uVar22,uVar21) < __real_3f1a36e2e0000000 ||
            (double)CONCAT44(uVar22,uVar21) == __real_3f1a36e2e0000000) &&
          ((double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000)) &&
         (uVar21 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar22 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar22,uVar21) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar22,uVar21) == __real_3f1a36e2e0000000)) goto LAB_146d817ea;
    }
    pFVar2 = this->DirtyAreasController;
    ::FName::FName(&local_390,"Addition to navoctree");
    pTVar3 = (param_1->NavigationElement).SharedReferenceCount.ReferenceController;
    local_130 = (param_1->NavigationElement).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_120 = (undefined ***)0x0;
    local_138 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,0,0>
                 ::_vftable_;
    local_148[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,TSharedPtr<FNavigationElement_const_,1>_const_>
                   ::Call;
    local_180 = 1;
    local_b0[0x31] = auStack_17f[0];
    local_b0[0x32] = auStack_17f[1];
    local_b0[0x33] = auStack_17f[2];
    local_b0[0x34] = auStack_17f[3];
    local_b0[0x35] = auStack_17f[4];
    local_b0[0x36] = auStack_17f[5];
    local_b0[0x37] = auStack_17f[6];
    local_b0[0x30] = '\x01';
    local_2f8 = (TBox<double> *)local_b0;
    uStack_2f0 = 1;
    local_218._12_4_ = uStack_2ec;
    local_218.ArrayNum = 1;
    local_b0._8_4_ = SUB84(local_378._s_0.Y - local_358,0);
    local_b0._0_8_ = local_378._s_0.X - local_360;
    local_b0._12_4_ = (int)((ulonglong)(local_378._s_0.Y - local_358) >> 0x20);
    local_b0._24_4_ = SUB84(local_378._s_0.X + local_360,0);
    local_b0._16_8_ = local_378._s_0.Z - local_350;
    local_b0._28_4_ = (int)((ulonglong)(local_378._s_0.X + local_360) >> 0x20);
    local_b0._40_4_ = SUB84(local_378._s_0.Z + local_350,0);
    local_b0._32_8_ = local_378._s_0.Y + local_358;
    local_b0._44_4_ = (int)((ulonglong)(local_378._s_0.Z + local_350) >> 0x20);
    local_218.DataPtr = local_2f8;
    local_128 = pTVar3;
    FNavigationDirtyAreasController::AddAreas
              (pFVar2,&local_218,EVar10,
               (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)local_148,
               param_1,&local_390);
    if (local_148[0] != (code *)0x0) {
      pppuVar16 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar16 = local_120;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else if (0 < (param_1->ExplicitAreasToDirty).ArrayNum) {
    pFVar2 = this->DirtyAreasController;
    ::FName::FName(&local_398,"Addition to navoctree");
    pTVar3 = (param_1->NavigationElement).SharedReferenceCount.ReferenceController;
    local_160 = (param_1->NavigationElement).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_150 = (undefined ***)0x0;
    local_168 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::`126'::<lambda_2>,0,0>
                 ::_vftable_;
    iVar11 = (param_1->ExplicitAreasToDirty).ArrayNum;
    local_178[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FNavigationDataHandler::AddElementToNavOctree'::__l126::<lambda_2>,TSharedPtr<FNavigationElement_const_,1>_const_>
                   ::Call;
    local_308 = (TBox<double> *)(param_1->ExplicitAreasToDirty).AllocatorInstance.Data;
    local_158 = pTVar3;
    if ((iVar11 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_228._12_4_ = uStack_2fc;
    local_228.ArrayNum = iVar11;
    local_228.DataPtr = local_308;
    iStack_300 = iVar11;
    FNavigationDirtyAreasController::AddAreas
              (pFVar2,&local_228,EVar10,
               (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)local_178,
               param_1,&local_398);
    if (local_178[0] != (code *)0x0) {
      pppuVar16 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar16 = local_150;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
LAB_146d817ea:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_338);
LAB_146d81813:
  FMemScope::~FMemScope(local_388);
  FLLMScope::~FLLMScope(local_3f0);
  return;
}

// AddLevelCollisionToOctree @ 146d81d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::AddLevelCollisionToOctree(FNavigationDataHandler *this,ULevel *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FNavigationDirtyAreasController *this_00;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  FOctreeElementId2 *pFVar7;
  FNavigationOctree *pFVar8;
  atomic<int> *paVar9;
  undefined ***pppuVar10;
  TReferenceControllerBase<1> *pTVar11;
  FNavigationElement *pFVar12;
  undefined1 auStackY_1b8 [32];
  TSharedRef<FNavigationElement_const_,1> local_188;
  FWeakObjectPtr local_178;
  undefined8 uStack_170;
  ULevel *local_168;
  FName local_160;
  TVector<double>_u_0 *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  TVector<double>_u_0 local_148;
  FNavigationElementHandle local_128;
  TArrayView<UE::Math::TBox<double>_const_,int> local_118;
  FString local_108;
  FNavigationOctreeElement local_f8;
  code *local_a8 [2];
  undefined **local_98;
  FNavigationElement *local_90;
  TReferenceControllerBase<1> *local_88;
  undefined ***local_80;
  TVector<double>_u_0 local_78;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar8 = (this->OctreeController->NavOctree).Object;
  if (pFVar8 == (FNavigationOctree *)0x0) {
    return;
  }
  if (pFVar8->bGatherGeometry == 0) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_168 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_168);
  uStack_170 = 0xffffffffffffffff;
  pFVar8 = (this->OctreeController->NavOctree).Object;
  local_128.OwnerUObject.WeakPtr = local_178;
  local_128.SubElementId = 0xffffffffffffffff;
  if ((pFVar8 != (FNavigationOctree *)0x0) &&
     (pFVar7 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
               ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                       *)&pFVar8->ElementToOctreeId,&local_128), pFVar7 != (FOctreeElementId2 *)0x0)
     ) {
    return;
  }
  if (&param_1->StaticNavigableGeometry ==
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    return;
  }
  if ((param_1->StaticNavigableGeometry).ArrayNum < 1) {
    return;
  }
  local_188.SharedReferenceCount.ReferenceController = ::operator_new(0x130);
  if (local_188.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_188.Object = ___xmm_00000000000000000000000000000010;
    local_188.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar12 = (FNavigationElement *)&DAT_00000010;
  }
  else {
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_188.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_188.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBUFNavigationElement___00_SharedPointerInternals__6B_
    ;
    FNavigationElement::FNavigationElement
              ((FNavigationElement *)(local_188.SharedReferenceCount.ReferenceController + 1),
               (UObject *)param_1,0xffffffffffffffff);
    pFVar12 = (FNavigationElement *)(local_188.SharedReferenceCount.ReferenceController + 1);
    pTVar11 = local_188.SharedReferenceCount.ReferenceController;
    local_188.Object = pFVar12;
    if (pFVar12 == (FNavigationElement *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146d81f10;
    }
  }
  if (((*(longlong *)pFVar12 == 0) || (*(longlong *)&pFVar12->field_0x8 == 0)) ||
     (*(int *)(*(longlong *)&pFVar12->field_0x8 + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FNavigationElement **)pFVar12 = pFVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar12->field_0x8) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar12->field_0x8;
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
      *(TReferenceControllerBase<1> **)&pFVar12->field_0x8 = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_146d81f10:
  FNavigationOctreeElement::FNavigationOctreeElement(&local_f8,&local_188);
  if (this->DirtyAreasController->bUseWorldPartitionedDynamicMode != '\0') {
    bVar6 = ULevel::HasVisibilityChangeRequestPending(param_1);
    (local_f8.Data.Object)->bLoadedData = bVar6;
  }
  FRecastGeometryExport::ExportVertexSoupGeometry
            (&param_1->StaticNavigableGeometry,local_f8.Data.Object);
  local_148._s_0.X =
       (((local_f8.Data.Object)->Bounds).Max.field0_0x0._s_0.X -
       ((local_f8.Data.Object)->Bounds).Min.field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_148._s_0.Z =
       (((local_f8.Data.Object)->Bounds).Max.field0_0x0._s_0.Z -
       ((local_f8.Data.Object)->Bounds).Min.field0_0x0._s_0.Z) * __real_3fe0000000000000;
  local_148._s_0.Y =
       (((local_f8.Data.Object)->Bounds).Max.field0_0x0._s_0.Y -
       ((local_f8.Data.Object)->Bounds).Min.field0_0x0._s_0.Y) * __real_3fe0000000000000;
  bVar6 = UE::Math::TVector<double>::IsNearlyZero
                    ((TVector<double> *)&local_148._s_0,__real_3f1a36e2e0000000);
  FVar5.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
  if (!bVar6) {
    pFVar8 = TSharedPtr<FNavigationOctree,1>::operator->(&this->OctreeController->NavOctree);
    FNavigationOctree::AddNode(pFVar8,&(local_f8.Data.Object)->Bounds,&local_f8);
    this_00 = this->DirtyAreasController;
    ::FName::FName(&local_160,"Add level");
    pFVar12 = local_188.Object;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar9 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar9 = &(FVar5.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::`14'::<lambda_1>,0,0>
                ::_vftable_;
    local_80 = (undefined ***)0x0;
    local_90 = local_188.Object;
    local_88 = FVar5.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    local_78._s_0.X = ((local_f8.Data.Object)->Bounds).Min.field0_0x0._s_0.X;
    local_78._s_0.Y = ((local_f8.Data.Object)->Bounds).Min.field0_0x0._s_0.Y;
    uStack_150 = 1;
    local_78._s_0.Z = ((local_f8.Data.Object)->Bounds).Min.field0_0x0._s_0.Z;
    dStack_60 = ((local_f8.Data.Object)->Bounds).Max.field0_0x0._s_0.X;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNavigationDataHandler::AddLevelCollisionToOctree'::__l14::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
                  ::Call;
    local_158 = &local_78;
    local_58 = ((local_f8.Data.Object)->Bounds).Max.field0_0x0._s_0.Y;
    dStack_50 = ((local_f8.Data.Object)->Bounds).Max.field0_0x0._s_0.Z;
    local_118._12_4_ = uStack_14c;
    local_118.ArrayNum = 1;
    local_48._0_1_ = ((local_f8.Data.Object)->Bounds).IsValid;
    local_48._1_1_ = ((local_f8.Data.Object)->Bounds).Pad[0];
    local_48._2_1_ = ((local_f8.Data.Object)->Bounds).Pad[1];
    local_48._3_1_ = ((local_f8.Data.Object)->Bounds).Pad[2];
    local_48._4_1_ = ((local_f8.Data.Object)->Bounds).Pad[3];
    local_48._5_1_ = ((local_f8.Data.Object)->Bounds).Pad[4];
    local_48._6_1_ = ((local_f8.Data.Object)->Bounds).Pad[5];
    local_48._7_1_ = ((local_f8.Data.Object)->Bounds).Pad[6];
    local_118.DataPtr = (TBox<double> *)local_158;
    FNavigationDirtyAreasController::AddAreas
              (this_00,&local_118,All,
               (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)local_a8,
               (FNavigationDirtyElement *)0x0,&local_160);
    if (local_a8[0] != (code *)0x0) {
      pppuVar10 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar10 = local_80;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    if (4 < (byte)LogNavOctree._0_1_) {
      FNavigationElement::GetPathName(pFVar12,&local_108);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// ConstructNavOctree @ 146d88680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::ConstructNavOctree
          (FNavigationDataHandler *this,TVector<double> *param_1,double param_2,
          ENavDataGatheringModeConfig param_3,float param_4)

{
  FNavigationOctreeController *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNavigationOctree *this_00;
  TRawPtrProxy<FNavigationOctree> local_res8;
  FString local_28 [2];
  
  if (4 < (byte)LogNavOctree._0_1_) {
    ::FString::PrintfImpl(local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  FNavigationOctreeController::Reset(this->OctreeController);
  this_00 = ::operator_new(0x160);
  if (this_00 == (FNavigationOctree *)0x0) {
    local_res8.Object = (FNavigationOctree *)0x0;
  }
  else {
    local_res8.Object = FNavigationOctree::FNavigationOctree(this_00,param_1,param_2);
    if ((((local_res8.Object != (FNavigationOctree *)0x0) && ((local_res8.Object)->_padding_ != 0))
        && ((local_res8.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_res8.Object)->_padding_ + 8) &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar3)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TSharedPtr<FNavigationOctree,1>::operator=<FNavigationOctree>
            (&this->OctreeController->NavOctree,&local_res8);
  pFVar1 = this->OctreeController;
  if (((pFVar1->NavOctree).Object == (FNavigationOctree *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FNavigationOctree::SetDataGatheringMode((pFVar1->NavOctree).Object,param_3);
  pFVar1 = this->OctreeController;
  if (((pFVar1->NavOctree).Object == (FNavigationOctree *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ((pFVar1->NavOctree).Object)->GatheringNavModifiersTimeLimitWarning = param_4;
  return;
}

// DemandLazyDataGathering @ 146d8f1c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::DemandLazyDataGathering
          (FNavigationDataHandler *this,FNavigationRelevantData *param_1)

{
  FNavigationOctreeController *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FNavigationElementHandle *pFVar5;
  ForAnyElementType FVar6;
  TSharedRef<FNavigationElement_const_,1> *pTVar7;
  undefined1 local_res8 [8];
  TArray<TSharedRef<FNavigationElement_const_,1>_const_,TSizedDefaultAllocator<32>_> local_48;
  FNavigationElementHandle local_38;
  FNavigationElementHandle local_28;
  
  pFVar1 = this->OctreeController;
  if ((pFVar1->NavOctree).Object == (FNavigationOctree *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNavigationOctree::DemandLazyDataGathering((pFVar1->NavOctree).Object,param_1);
  if (param_1->bPendingChildLazyModifiersGathering != 0) {
    pFVar1 = this->OctreeController;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pFVar5 = FNavigationElement::GetHandle((param_1->SourceElement).Object,&local_28);
    local_38.OwnerUObject.WeakPtr = (pFVar5->OwnerUObject).WeakPtr;
    local_38.SubElementId = pFVar5->SubElementId;
    TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
    ::MultiFind<TSizedDefaultAllocator<32>_>
              (&pFVar1->OctreeParentChildNodesMap,&local_38,&local_48,false);
    iVar3 = local_48.ArrayNum;
    pTVar7 = (TSharedRef<FNavigationElement_const_,1> *)
             (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10);
    FVar6.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FNavigationElement_const_,1>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TSharedRef<FNavigationElement_const_,1> *)FVar6.Data == pTVar7) break;
      pFVar1 = this->OctreeController;
      if ((pFVar1->NavOctree).Object == (FNavigationOctree *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FNavigationOctree::DemandChildLazyDataGathering
                ((pFVar1->NavOctree).Object,param_1,
                 ((TSharedRef<FNavigationElement_const_,1> *)FVar6.Data)->Object);
      FVar6.Data = FVar6.Data + 0x10;
    }
    param_1->bPendingChildLazyModifiersGathering = 0;
    DestructItems<TSharedRef<FNavigationElement_const_,1>_const_,int>
              ((TSharedRef<FNavigationElement_const_,1> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TSharedRef<FNavigationElement_const_,1> *)local_48.AllocatorInstance.Data !=
        (TSharedRef<FNavigationElement_const_,1> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// FindElementsInNavOctree @ 146d957b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::FindElementsInNavOctree
          (FNavigationDataHandler *this,TBox<double> *param_1,FNavigationRelevantDataFilter *param_2
          ,TArray<FNavigationOctreeElement,TSizedDefaultAllocator<32>_> *param_3)

{
  FNavigationOctree *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *this_00;
  <lambda_1> local_78;
  TVector4<double>_u_0 local_68;
  undefined1 local_48 [16];
  double local_38;
  undefined8 uStack_30;
  
  pFVar1 = (this->OctreeController->NavOctree).Object;
  if (pFVar1 == (FNavigationOctree *)0x0) {
    if (2 < (byte)LogNavOctree._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
      return;
    }
  }
  else {
    this_00 = &pFVar1->_padding_;
    local_38 = ((param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z) *
               __real_3fe0000000000000;
    dVar3 = ((param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y) *
            __real_3fe0000000000000;
    local_68._s_0.Z = local_38 + (param_1->Min).field0_0x0._s_0.Z;
    dVar4 = ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) *
            __real_3fe0000000000000;
    dVar2 = dVar3 + (param_1->Min).field0_0x0._s_0.Y;
    local_68._s_0.W = 0.0;
    local_48._8_4_ = SUB84(dVar3,0);
    local_48._0_8_ = dVar4;
    local_48._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uStack_30 = 0;
    local_68._8_4_ = SUB84(dVar2,0);
    local_68._0_8_ = dVar4 + (param_1->Min).field0_0x0._s_0.X;
    local_68._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_78.Elements = param_3;
    local_78.Filter = param_2;
    TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
    FindElementsWithBoundsTestInternal<_FNavigationDataHandler::FindElementsInNavOctree_::__l2::<lambda_1>_>
              ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)this_00,0,
               (FOctreeNodeContext *)this_00,(FBoxCenterAndExtent *)&local_68._s_0,&local_78);
  }
  return;
}

// ProcessPendingOctreeUpdates @ 146dac870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavigationDataHandler::ProcessPendingOctreeUpdates(FNavigationDataHandler *this)

{
  int *piVar1;
  FNavigationOctreeController *pFVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_void___cdecl_FNavigationDataHandler::ProcessPendingOctreeUpdates(void)_::_2_::FStat_STAT_Navigation_ProcessPendingOctreeUpdates>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  int iVar13;
  int iVar14;
  TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator> *this_02;
  FNameEntryId FVar15;
  undefined1 auStackY_158 [32];
  LARGE_INTEGER local_f8;
  FName local_f0;
  FStatMessage local_e0;
  TIterator local_d0;
  FNavigationDirtyElement local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar15.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Navigation_ProcessPendingOctreeUpdates ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationDataHandler::ProcessPendingOctreeUpdates(void)_::_2_::FStat_STAT_Navigation_ProcessPendingOctreeUpdates>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_f8.s,"STAT_Navigation_ProcessPendingOctreeUpdates");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_ProcessPendingOctreeUpdates,
                 *pFVar8,L"STAT_Navigation_ProcessPendingOctreeUpdates","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_Navigation_ProcessPendingOctreeUpdates;
  if (StatPtr_STAT_Navigation_ProcessPendingOctreeUpdates ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationDataHandler::ProcessPendingOctreeUpdates(void)_::_2_::FStat_STAT_Navigation_ProcessPendingOctreeUpdates>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)&local_e0,"STAT_Navigation_ProcessPendingOctreeUpdates");
    FVar9 = (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationDataHandler::ProcessPendingOctreeUpdates(void)_::_2_::FStat_STAT_Navigation_ProcessPendingOctreeUpdates>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Navigation_ProcessPendingOctreeUpdates,*pFVar8,
                         L"STAT_Navigation_ProcessPendingOctreeUpdates","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.s.LowPart = FVar11.Value;
        local_f8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                   ,0x275);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.s.LowPart = FVar11.Value;
      local_f8.s.HighPart = uVar10;
      local_f0 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      FVar15.Value = local_f0.ComparisonIndex.Value;
      goto LAB_146dac9ff;
    }
  }
  bVar6 = false;
  FVar12 = local_f0;
LAB_146dac9ff:
  if (((this->OctreeController->NavOctree).Object != (FNavigationOctree *)0x0) &&
     (TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
      TIterator::TIterator(&local_d0,&this->OctreeController->PendingUpdates),
     local_d0._padding_._4_4_ < *(int *)(local_d0._padding_ + 0x18))) {
    do {
      iVar14 = local_d0._padding_._4_4_;
      FNavigationDirtyElement::FNavigationDirtyElement
                (&local_98,
                 (FNavigationDirtyElement *)
                 ((longlong)iVar14 * 0x68 + *(longlong *)local_d0._padding_));
      TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
      RemoveByIndex(local_d0.Set,iVar14);
      AddElementToNavOctree(this,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.NavigationElement.SharedReferenceCount.ReferenceController);
      if (local_98.ExplicitAreasToDirty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.ExplicitAreasToDirty.AllocatorInstance.Data);
      }
      TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
      TIterator::TIterator(&local_d0,&this->OctreeController->PendingUpdates);
    } while (local_d0._padding_._4_4_ < *(int *)(local_d0._padding_ + 0x18));
  }
  pFVar2 = this->OctreeController;
  for (lVar3 = 0x3f; 0x2fUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  this_02 = &pFVar2->PendingUpdates;
  iVar13 = 1 << ((byte)lVar3 & 0x1f);
  iVar14 = (pFVar2->PendingUpdates).HashSize;
  if ((iVar14 < iVar13) || (iVar13 < iVar14)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
    UnhashElements(this_02);
  }
  TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_02->Elements,0,*(int *)&(pFVar2->PendingUpdates).Elements.field_0x8);
  iVar14 = *(int *)&(pFVar2->PendingUpdates).Elements.field_0xc;
  *(undefined4 *)&(pFVar2->PendingUpdates).Elements.field_0x8 = 0;
  if (iVar14 != 0x20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0x20,(ForAnyElementType *)this_02,0,
               (int *)&(pFVar2->PendingUpdates).Elements.field_0xc);
  }
  *(undefined4 *)&(pFVar2->PendingUpdates).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar2->PendingUpdates).Elements.field_0x34 = 0;
  iVar14 = *(int *)&(pFVar2->PendingUpdates).Elements.field_0x2c;
  *(undefined4 *)&(pFVar2->PendingUpdates).Elements.field_0x28 = 0;
  if ((iVar14 < 0x20) || (0x80 < iVar14)) {
    *(undefined4 *)&(pFVar2->PendingUpdates).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar2->PendingUpdates).Elements.field_0x10
               ,0);
  }
  if (bVar4) {
    (pFVar2->PendingUpdates).HashSize = iVar13;
    TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::Rehash
              (this_02);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e0.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_e0.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_f8);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RegisterElementWithNavOctree @ 146daf110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSetElementId __thiscall
FNavigationDataHandler::RegisterElementWithNavOctree
          (FNavigationDataHandler *this,TSharedRef<FNavigationElement_const_,1> *param_1,int param_2
          )

{
  int *piVar1;
  int iVar2;
  FNavigationElement *this_00;
  FNavigationOctreeController *pFVar3;
  FNavigationOctree *pFVar4;
  FScriptContainerElement *_Src;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FSetElementId FVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RegisterNavOctreeElement> FVar12;
  FNavigationElementHandle *pFVar13;
  FOctreeElementId2 *pFVar14;
  undefined4 extraout_var;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNavigationDirtyElement *pFVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  LARGE_INTEGER LVar18;
  undefined4 in_register_00000084;
  ENavigationDirtyFlag in_R9B;
  ENavigationDirtyFlag EVar19;
  undefined1 auStackY_158 [32];
  FNavigationElementHandle local_f8;
  LARGE_INTEGER local_e8;
  FColor_u_0 local_e0;
  uint uStack_dc;
  FName local_d0;
  FNavigationDirtyElement local_b8;
  ulonglong local_58;
  
  local_e8.s.HighPart = in_register_00000084;
  local_e8.s.LowPart = param_2;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar12 = StatPtr_STAT_Navigation_RegisterNavOctreeElement;
  if (StatPtr_STAT_Navigation_RegisterNavOctreeElement ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RegisterNavOctreeElement>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_f8,"STAT_Navigation_RegisterNavOctreeElement");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RegisterNavOctreeElement>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RegisterNavOctreeElement,*pFVar11,
                        L"Registering Nav Octree Element","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Bits == 0) && (uVar9 == 0)) {
LAB_146daf265:
    bVar7 = false;
    FVar17 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.Bits = FVar16.Bits;
        uStack_dc = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_e0._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                   ,0x53);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146daf265;
    local_e0.Bits = FVar16.Bits;
    uStack_dc = uVar9;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar7 = true;
  }
  LVar18 = local_e8;
  *(undefined4 *)&param_1->Object = 0xffffffff;
  this_00 = *(FNavigationElement **)local_e8;
  if ((this->OctreeController->NavOctree).Object == (FNavigationOctree *)0x0) {
    if ((byte)LogNavOctree._0_1_ < 7) goto LAB_146daf529;
    FNavigationElement::GetPathName(this_00,(FString *)&local_f8);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
    local_b8.ExplicitAreasToDirty.AllocatorInstance.Data =
         (FScriptContainerElement *)local_f8.OwnerUObject;
  }
  else if (this->OctreeController->bNavOctreeLock == 0) {
    if (4 < (byte)LogNavOctree._0_1_) {
      FNavigationElement::GetPathName(this_00,(FString *)&local_f8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
      if (local_f8.OwnerUObject.WeakPtr != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_f8.OwnerUObject.WeakPtr);
      }
    }
    if (((this_00->NavigationParent).WeakPtr.ObjectIndex == 0) &&
       ((this_00->NavigationParent).WeakPtr.ObjectSerialNumber == 0)) {
      pFVar3 = this->OctreeController;
      pFVar13 = FNavigationElement::GetHandle(this_00,(FNavigationElementHandle *)&local_e0._s_0);
      pFVar4 = (pFVar3->NavOctree).Object;
      local_f8.OwnerUObject.WeakPtr = (pFVar13->OwnerUObject).WeakPtr;
      local_f8.SubElementId = pFVar13->SubElementId;
      if ((pFVar4 == (FNavigationOctree *)0x0) ||
         (pFVar14 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                    ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                            *)&pFVar4->ElementToOctreeId,&local_f8),
         pFVar14 == (FOctreeElementId2 *)0x0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      LVar18 = local_e8;
      if (!bVar5) goto LAB_146daf529;
    }
    else {
      local_f8.OwnerUObject.WeakPtr = (this_00->NavigationParent).WeakPtr;
      local_f8.SubElementId = 0xffffffffffffffff;
      TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
      ::
      EmplaceUnique<FNavigationElementHandle_const_&,TSharedRef<FNavigationElement_const_,1>_const_&>
                (&this->OctreeController->OctreeParentChildNodesMap,&local_f8,
                 (TSharedRef<FNavigationElement_const_,1> *)LVar18);
    }
    if ((in_R9B & Geometry) == None) {
      EVar19 = in_R9B & DynamicModifier;
    }
    else {
      EVar19 = All;
    }
    FNavigationDirtyElement::FNavigationDirtyElement
              (&local_b8,(TSharedRef<FNavigationElement_const_,1> *)LVar18,EVar19,
               this->DirtyAreasController->bUseWorldPartitionedDynamicMode);
    pFVar3 = this->OctreeController;
    FNavigationElement::GetHandle(this_00,&local_f8);
    FVar10 = TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
             ::FindId(&pFVar3->PendingUpdates,(FNavigationElementHandle *)&local_e0._s_0);
    iVar2 = *(int *)CONCAT44(extraout_var,FVar10.Index);
    *(int *)&param_1->Object = iVar2;
    if (iVar2 == -1) {
      TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
      Emplace<FNavigationDirtyElement_const_&>
                (&this->OctreeController->PendingUpdates,(FNavigationDirtyElement *)&local_e0._s_0,
                 (bool *)&local_b8);
      *(FColor_u_0 *)&param_1->Object = local_e0;
    }
    else {
      pFVar15 = (FNavigationDirtyElement *)
                ((longlong)iVar2 * 0x68 +
                *(longlong *)&(this->OctreeController->PendingUpdates).Elements);
      if (&local_b8 != pFVar15) {
        iVar2 = (pFVar15->ExplicitAreasToDirty).ArrayNum;
        _Src = (pFVar15->ExplicitAreasToDirty).AllocatorInstance.Data;
        local_b8.ExplicitAreasToDirty.ArrayNum = iVar2;
        if (((iVar2 != 0) || (local_b8.ExplicitAreasToDirty.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,iVar2,local_b8.ExplicitAreasToDirty.ArrayMax,
                       (ForAnyElementType *)&local_b8,iVar2,&local_b8.ExplicitAreasToDirty.ArrayMax)
           , iVar2 != 0)) {
          memcpy(local_b8.ExplicitAreasToDirty.AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x38);
        }
      }
      FNavigationDirtyElement::operator=
                ((FNavigationDirtyElement *)
                 ((longlong)*(int *)&param_1->Object * 0x68 +
                 *(longlong *)&(this->OctreeController->PendingUpdates).Elements),&local_b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.NavigationElement.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((byte)LogNavOctree._0_1_ < 5) goto LAB_146daf529;
    FNavigationElement::GetPathName(this_00,(FString *)&local_f8);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
    local_b8.ExplicitAreasToDirty.AllocatorInstance.Data =
         (FScriptContainerElement *)local_f8.OwnerUObject;
  }
  if ((FWeakObjectPtr)local_b8.ExplicitAreasToDirty.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
    FMemory::Free(local_b8.ExplicitAreasToDirty.AllocatorInstance.Data);
  }
LAB_146daf529:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_f8.SubElementId = (ulonglong)FVar17 & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_e8);
      local_f8.OwnerUObject.WeakPtr = (FWeakObjectPtr)(local_e8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)&local_f8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (FSetElementId)(int)param_1;
}

// RegisterNavOctreeElement @ 146db06a0

FSetElementId __thiscall
FNavigationDataHandler::RegisterNavOctreeElement
          (FNavigationDataHandler *this,UObject *param_1,INavRelevantInterface *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedRef<FNavigationElement_const_,1> *pTVar4;
  undefined4 in_register_0000008c;
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                     ,0x4d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return (FSetElementId)iVar3;
  }
  pTVar4 = FNavigationElement::CreateFromNavRelevantInterface
                     (&local_18,(INavRelevantInterface *)CONCAT44(in_register_0000008c,param_3));
  RegisterElementWithNavOctree(this,(TSharedRef<FNavigationElement_const_,1> *)param_1,(int)pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (FSetElementId)(int)param_1;
}

// RemoveFromNavOctree @ 146db4fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::RemoveFromNavOctree
          (FNavigationDataHandler *this,FOctreeElementId2 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  FNavigationOctreeController *pFVar3;
  FNavigationRelevantData *this_00;
  FNavigationDirtyAreasController *this_01;
  code *pcVar4;
  bool bVar5;
  ENavigationDirtyFlag EVar6;
  FNavigationOctreeElement *pFVar7;
  FNavigationElementHandle *pFVar8;
  undefined ***pppuVar9;
  undefined1 auStackY_188 [32];
  FName local_158 [2];
  TVector<double>_u_0 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TArrayView<UE::Math::TBox<double>_const_,int> local_138;
  FNavigationElementHandle local_128;
  FNavigationElementHandle local_118 [4];
  undefined1 local_d8;
  undefined7 uStack_d7;
  code *local_c8 [2];
  undefined **local_b8;
  FNavigationOctreeElement *local_b0;
  undefined ***local_a0;
  TVector<double>_u_0 local_98;
  double dStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar5 = FNavigationOctreeController::IsValidElement(this->OctreeController,param_1);
  if (bVar5) {
    pFVar3 = this->OctreeController;
    if ((pFVar3->NavOctree).Object == (FNavigationOctree *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                       ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                        &((pFVar3->NavOctree).Object)->_padding_,*param_1);
    this_00 = (pFVar7->Data).Object;
    if (this_00->bShouldSkipDirtyAreaOnAddOrRemove == 0) {
      EVar6 = FNavigationRelevantData::GetDirtyFlag(this_00);
      if ((param_2 & 1U) == 0) {
        if ((param_2 & 2U) != 0) {
          EVar6 = DynamicModifier;
        }
      }
      else {
        EVar6 = All;
      }
      this_01 = this->DirtyAreasController;
      ::FName::FName(local_158,"Remove from navoctree");
      dVar1 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dStack_80 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.X;
      dVar2 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.Z;
      local_98._s_0.X = (pFVar7->Bounds).Origin.field0_0x0._s_0.X - dStack_80;
      local_98._s_0.Z = (pFVar7->Bounds).Origin.field0_0x0._s_0.Z - dVar2;
      dStack_80 = dStack_80 + (pFVar7->Bounds).Origin.field0_0x0._s_0.X;
      dVar2 = dVar2 + (pFVar7->Bounds).Origin.field0_0x0._s_0.Z;
      local_b8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::`8'::<lambda_1>,0,0>
                  ::_vftable_;
      local_98._s_0.Y = (pFVar7->Bounds).Origin.field0_0x0._s_0.Y - dVar1;
      local_a0 = (undefined ***)0x0;
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
                    ::Call;
      local_148 = &local_98;
      local_d8 = 1;
      local_68 = CONCAT71(uStack_d7,1);
      uStack_140 = 1;
      local_138._12_4_ = uStack_13c;
      local_138.ArrayNum = 1;
      local_78._8_4_ = SUB84(dVar2,0);
      local_78._0_8_ = dVar1 + (pFVar7->Bounds).Origin.field0_0x0._s_0.Y;
      local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_138.DataPtr = (TBox<double> *)local_148;
      local_b0 = pFVar7;
      FNavigationDirtyAreasController::AddAreas
                (this_01,&local_138,EVar6,
                 (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)local_c8,
                 (FNavigationDirtyElement *)0x0,local_158);
      if (local_c8[0] != (code *)0x0) {
        pppuVar9 = &local_b8;
        if (local_a0 != (undefined ***)0x0) {
          pppuVar9 = local_a0;
        }
        (*(code *)(*pppuVar9)[2])();
      }
    }
    pFVar3 = this->OctreeController;
    pFVar8 = FNavigationElement::GetHandle
                       ((((pFVar7->Data).Object)->SourceElement).Object,local_118);
    local_128.OwnerUObject.WeakPtr = (pFVar8->OwnerUObject).WeakPtr;
    local_128.SubElementId = pFVar8->SubElementId;
    FNavigationOctreeController::RemoveNode(pFVar3,*param_1,&local_128);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_173074254177238988>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                       ,0x34,"OctreeController.IsValidElement(ElementId)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// RemoveLevelCollisionFromOctree @ 146db52e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::RemoveLevelCollisionFromOctree(FNavigationDataHandler *this,ULevel *param_1)

{
  FNavigationOctree *pFVar1;
  FOctreeElementId2 *pFVar2;
  ULevel *local_res8;
  FWeakObjectPtr local_28;
  undefined8 uStack_20;
  FNavigationElementHandle local_18;
  
  if ((this->OctreeController->NavOctree).Object != (FNavigationOctree *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULevel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_28.ObjectIndex = 0;
    local_28.ObjectSerialNumber = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
    uStack_20 = 0xffffffffffffffff;
    local_18.OwnerUObject.WeakPtr = local_28;
    local_18.SubElementId = 0xffffffffffffffff;
    pFVar1 = (this->OctreeController->NavOctree).Object;
    if ((pFVar1 != (FNavigationOctree *)0x0) &&
       (pFVar2 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                 ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                         *)&pFVar1->ElementToOctreeId,&local_18), pFVar2 != (FOctreeElementId2 *)0x0
       )) {
      if (4 < (byte)LogNavOctree._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)param_1,(FString *)&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
        if (local_18.OwnerUObject.WeakPtr != (FWeakObjectPtr)0x0) {
          FMemory::Free((void *)local_18.OwnerUObject.WeakPtr);
        }
      }
      RemoveFromNavOctree(this,pFVar2,1);
    }
  }
  return;
}

// RemoveNavOctreeElementId @ 146db5550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::RemoveNavOctreeElementId
          (FNavigationDataHandler *this,FOctreeElementId2 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  FNavigationOctreeController *pFVar3;
  FNavigationRelevantData *this_00;
  FNavigationDirtyAreasController *this_01;
  code *pcVar4;
  bool bVar5;
  ENavigationDirtyFlag EVar6;
  FNavigationOctreeElement *pFVar7;
  FNavigationElementHandle *pFVar8;
  undefined ***pppuVar9;
  undefined1 auStackY_188 [32];
  FName aFStack_158 [2];
  TVector<double>_u_0 *pTStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TArrayView<UE::Math::TBox<double>_const_,int> TStack_138;
  FNavigationElementHandle FStack_128;
  FNavigationElementHandle aFStack_118 [4];
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  code *apcStack_c8 [2];
  undefined **ppuStack_b8;
  FNavigationOctreeElement *pFStack_b0;
  undefined ***pppuStack_a0;
  TVector<double>_u_0 TStack_98;
  double dStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  ulonglong uStack_60;
  
  uStack_60 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar5 = FNavigationOctreeController::IsValidElement(this->OctreeController,param_1);
  if (bVar5) {
    pFVar3 = this->OctreeController;
    if ((pFVar3->NavOctree).Object == (FNavigationOctree *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                       ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                        &((pFVar3->NavOctree).Object)->_padding_,*param_1);
    this_00 = (pFVar7->Data).Object;
    if (this_00->bShouldSkipDirtyAreaOnAddOrRemove == 0) {
      EVar6 = FNavigationRelevantData::GetDirtyFlag(this_00);
      if ((param_2 & 1U) == 0) {
        if ((param_2 & 2U) != 0) {
          EVar6 = DynamicModifier;
        }
      }
      else {
        EVar6 = All;
      }
      this_01 = this->DirtyAreasController;
      ::FName::FName(aFStack_158,"Remove from navoctree");
      dVar1 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dStack_80 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.X;
      dVar2 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.Z;
      TStack_98._s_0.X = (pFVar7->Bounds).Origin.field0_0x0._s_0.X - dStack_80;
      TStack_98._s_0.Z = (pFVar7->Bounds).Origin.field0_0x0._s_0.Z - dVar2;
      dStack_80 = dStack_80 + (pFVar7->Bounds).Origin.field0_0x0._s_0.X;
      dVar2 = dVar2 + (pFVar7->Bounds).Origin.field0_0x0._s_0.Z;
      ppuStack_b8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::`8'::<lambda_1>,0,0>
                     ::_vftable_;
      TStack_98._s_0.Y = (pFVar7->Bounds).Origin.field0_0x0._s_0.Y - dVar1;
      pppuStack_a0 = (undefined ***)0x0;
      apcStack_c8[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
           ::Call;
      pTStack_148 = &TStack_98;
      uStack_d8 = 1;
      uStack_68 = CONCAT71(uStack_d7,1);
      uStack_140 = 1;
      TStack_138._12_4_ = uStack_13c;
      TStack_138.ArrayNum = 1;
      auStack_78._8_4_ = SUB84(dVar2,0);
      auStack_78._0_8_ = dVar1 + (pFVar7->Bounds).Origin.field0_0x0._s_0.Y;
      auStack_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      TStack_138.DataPtr = (TBox<double> *)pTStack_148;
      pFStack_b0 = pFVar7;
      FNavigationDirtyAreasController::AddAreas
                (this_01,&TStack_138,EVar6,
                 (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)
                 apcStack_c8,(FNavigationDirtyElement *)0x0,aFStack_158);
      if (apcStack_c8[0] != (code *)0x0) {
        pppuVar9 = &ppuStack_b8;
        if (pppuStack_a0 != (undefined ***)0x0) {
          pppuVar9 = pppuStack_a0;
        }
        (*(code *)(*pppuVar9)[2])();
      }
    }
    pFVar3 = this->OctreeController;
    pFVar8 = FNavigationElement::GetHandle
                       ((((pFVar7->Data).Object)->SourceElement).Object,aFStack_118);
    FStack_128.OwnerUObject.WeakPtr = (pFVar8->OwnerUObject).WeakPtr;
    FStack_128.SubElementId = pFVar8->SubElementId;
    FNavigationOctreeController::RemoveNode(pFVar3,*param_1,&FStack_128);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_173074254177238988>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                       ,0x34,"OctreeController.IsValidElement(ElementId)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// ReplaceAreaInOctreeData @ 146db6690

bool __thiscall
FNavigationDataHandler::ReplaceAreaInOctreeData
          (FNavigationDataHandler *this,UObject *param_1,TSubclassOf<UNavArea> param_2,
          TSubclassOf<UNavArea> param_3,bool param_4)

{
  bool bVar1;
  UObject *local_res10;
  UObject *local_res18;
  UObject *local_res20;
  FWeakObjectPtr local_38;
  undefined8 uStack_30;
  FNavigationElementHandle local_28;
  
  local_res18 = *(UObject **)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  local_res20 = *(UObject **)param_2.Class.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res20 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res20);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res10);
  uStack_30 = 0xffffffffffffffff;
  local_28.OwnerUObject.WeakPtr = local_38;
  local_28.SubElementId = 0xffffffffffffffff;
  bVar1 = ReplaceAreaInOctreeData
                    (this,&local_28,(TSubclassOf<UNavArea>)&local_res20,
                     (TSubclassOf<UNavArea>)&local_res18,param_4);
  return bVar1;
}

// ReplaceAreaInOctreeData @ 146db6780

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FNavigationDataHandler::ReplaceAreaInOctreeData
          (FNavigationDataHandler *this,FNavigationElementHandle *param_1,
          TSubclassOf<UNavArea> param_2,TSubclassOf<UNavArea> param_3,bool param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  TWeakObjectPtr<UObject_const_,FWeakObjectPtr> TVar6;
  FNavigationRelevantData *pFVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  FWeakObjectPtr *this_00;
  FNavigationLinkBase *pFVar13;
  FAreaNavModifier *this_01;
  FNavigationLinkBase *pFVar14;
  FAreaNavModifier *pFVar15;
  FWeakObjectPtr FVar16;
  UObject *local_res8;
  uint local_res10;
  FNavigationElementHandle local_48;
  
  local_48.OwnerUObject.WeakPtr = (param_1->OwnerUObject).WeakPtr;
  local_48.SubElementId = param_1->SubElementId;
  pFVar7 = FNavigationOctreeController::GetMutableDataForElement(this->OctreeController,&local_48);
  if (pFVar7 != (FNavigationRelevantData *)0x0) {
    iVar2 = (pFVar7->Modifiers).Areas.ArrayNum;
    if ((((iVar2 != 0) || ((pFVar7->Modifiers).SimpleLinks.ArrayNum != 0)) ||
        ((pFVar7->Modifiers).CustomLinks.ArrayNum != 0)) ||
       (((pFVar7->Modifiers).bFillCollisionUnderneathForNavmesh != 0 ||
         ((pFVar7->Modifiers).bMaskFillCollisionUnderneathForNavmesh != 0 ||
         (pFVar7->Modifiers).bRasterizeAsFilledConvexVolume != 0) ||
        ((pFVar7->Modifiers).NavMeshResolution != Invalid)))) {
      this_01 = (FAreaNavModifier *)(pFVar7->Modifiers).Areas.AllocatorInstance.Data;
      this_00 = &(this_01->AreaClassOb).WeakPtr;
      pFVar15 = this_01 + iVar2;
      do {
        if ((pFVar7->Modifiers).Areas.ArrayNum != iVar2) {
          `TCheckedPointerIterator<FAreaNavModifier,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (this_01 == pFVar15) {
          local_res10 = (pFVar7->Modifiers).SimpleLinks.ArrayNum;
          uVar12 = (ulonglong)(int)local_res10;
          FVar16 = (FWeakObjectPtr)(pFVar7->Modifiers).SimpleLinks.AllocatorInstance.Data;
          local_48.OwnerUObject.WeakPtr = (FWeakObjectPtr)(uVar12 * 0xb0 + (longlong)FVar16);
          do {
            TVar6.WeakPtr = local_48.OwnerUObject.WeakPtr;
            if ((pFVar7->Modifiers).SimpleLinks.ArrayNum != (int)uVar12) {
              `TCheckedPointerIterator<FSimpleLinkNavModifier,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_res8);
            }
            if (FVar16 == TVar6.WeakPtr) {
              if ((pFVar7->Modifiers).CustomLinks.ArrayNum != 0) {
                `FNavigationDataHandler::ReplaceAreaInOctreeData'::__l2::<lambda_1>::operator()
                          (&local_res8);
              }
              return true;
            }
            iVar2 = *(int *)((longlong)FVar16 + 0x10);
            pFVar14 = *(FNavigationLinkBase **)((longlong)FVar16 + 8);
            pFVar13 = (FNavigationLinkBase *)((longlong)iVar2 * 0x70 + (longlong)pFVar14);
            while( true ) {
              if (*(int *)((longlong)FVar16 + 0x10) != iVar2) {
                `TCheckedPointerIterator<FNavigationLink,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_res8);
              }
              if (pFVar14 == pFVar13) break;
              lVar4 = *(longlong *)param_2.Class.field0_0x0;
              if ((lVar4 == 0) || (pUVar9 = UNavArea::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_146db6ab1:
                pUVar9 = (UClass *)0x0;
              }
              else {
                iVar3 = (int)pUVar9->_padding_;
                if ((*(int *)(lVar4 + 0x38) < iVar3) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8)
                    != &pUVar9->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) goto LAB_146db6ab1;
                pUVar9 = *(UClass **)param_2.Class.field0_0x0;
              }
              pUVar11 = FNavigationLinkBase::GetAreaClass(pFVar14);
              if (pUVar11 == pUVar9) {
LAB_146db6b3d:
                lVar4 = *(longlong *)param_3.Class.field0_0x0;
                if ((lVar4 == 0) || (pUVar9 = UNavArea::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_146db6b7a:
                  pUVar9 = (UClass *)0x0;
                }
                else {
                  iVar3 = (int)pUVar9->_padding_;
                  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
                      &pUVar9->_padding_)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (!bVar5) goto LAB_146db6b7a;
                  pUVar9 = *(UClass **)param_3.Class.field0_0x0;
                }
                FNavigationLinkBase::SetAreaClass(pFVar14,pUVar9);
              }
              else if (param_4) {
                pUVar9 = FNavigationLinkBase::GetAreaClass(pFVar14);
                lVar4 = *(longlong *)param_2.Class.field0_0x0;
                if ((lVar4 != 0) && (pUVar11 = UNavArea::StaticClass(), pUVar11 != (UClass *)0x0)) {
                  iVar3 = (int)pUVar11->_padding_;
                  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
                      &pUVar11->_padding_)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if ((bVar5) && (lVar4 = *(longlong *)param_2.Class.field0_0x0, lVar4 != 0)) {
                    if (((int)pUVar9->_padding_ < *(int *)(lVar4 + 0x38)) ||
                       (*(longlong *)(pUVar9->_padding_ + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                        lVar4 + 0x30)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    if (bVar5) goto LAB_146db6b3d;
                  }
                }
              }
              pFVar14 = (FNavigationLinkBase *)&pFVar14[1].AreaClass;
            }
            iVar2 = *(int *)((longlong)FVar16 + 0x20);
            pFVar14 = *(FNavigationLinkBase **)((longlong)FVar16 + 0x18);
            pFVar13 = (FNavigationLinkBase *)((longlong)iVar2 * 0xa0 + (longlong)pFVar14);
            while( true ) {
              if (*(int *)((longlong)FVar16 + 0x20) != iVar2) {
                `TCheckedPointerIterator<FNavigationSegmentLink,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_res8);
              }
              if (pFVar14 == pFVar13) break;
              lVar4 = *(longlong *)param_2.Class.field0_0x0;
              if ((lVar4 == 0) || (pUVar9 = UNavArea::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_146db6c01:
                pUVar9 = (UClass *)0x0;
              }
              else {
                iVar3 = (int)pUVar9->_padding_;
                if ((*(int *)(lVar4 + 0x38) < iVar3) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8)
                    != &pUVar9->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) goto LAB_146db6c01;
                pUVar9 = *(UClass **)param_2.Class.field0_0x0;
              }
              pUVar11 = FNavigationLinkBase::GetAreaClass(pFVar14);
              if (pUVar11 == pUVar9) {
LAB_146db6c95:
                lVar4 = *(longlong *)param_3.Class.field0_0x0;
                if ((lVar4 == 0) || (pUVar9 = UNavArea::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_146db6cd2:
                  pUVar9 = (UClass *)0x0;
                }
                else {
                  iVar3 = (int)pUVar9->_padding_;
                  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
                      &pUVar9->_padding_)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (!bVar5) goto LAB_146db6cd2;
                  pUVar9 = *(UClass **)param_3.Class.field0_0x0;
                }
                FNavigationLinkBase::SetAreaClass(pFVar14,pUVar9);
              }
              else if (param_4) {
                pUVar9 = FNavigationLinkBase::GetAreaClass(pFVar14);
                lVar4 = *(longlong *)param_2.Class.field0_0x0;
                if ((lVar4 != 0) && (pUVar11 = UNavArea::StaticClass(), pUVar11 != (UClass *)0x0)) {
                  iVar3 = (int)pUVar11->_padding_;
                  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
                      &pUVar11->_padding_)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if ((bVar5) && (lVar4 = *(longlong *)param_2.Class.field0_0x0, lVar4 != 0)) {
                    if (((int)pUVar9->_padding_ < *(int *)(lVar4 + 0x38)) ||
                       (*(longlong *)(pUVar9->_padding_ + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                        lVar4 + 0x30)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    if (bVar5) goto LAB_146db6c95;
                  }
                }
              }
              pFVar14 = (FNavigationLinkBase *)&pFVar14[2].SupportedAgents;
            }
            FVar16 = (FWeakObjectPtr)((longlong)FVar16 + 0xb0);
            uVar12 = (ulonglong)local_res10;
          } while( true );
        }
        pUVar8 = FWeakObjectPtr::Get(this_00);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UObject *)0x0) goto LAB_146db686c;
LAB_146db689a:
          pUVar8 = (UObject *)0x0;
        }
        else {
          if (pUVar8 == (UObject *)0x0) goto LAB_146db689a;
          UE::GC::MarkAsReachable(pUVar8);
LAB_146db686c:
          pUVar9 = Z_Construct_UClass_UNavAreaBase_NoRegister();
          if (pUVar9 == (UClass *)0x0) goto LAB_146db689a;
          iVar3 = (int)pUVar9->_padding_;
          if ((*(int *)&pUVar8[1].field_0x10 < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar3 * 8)
              != &pUVar9->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_146db689a;
        }
        lVar4 = *(longlong *)param_2.Class.field0_0x0;
        if ((lVar4 == 0) || (pUVar9 = UNavArea::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_146db68d9:
          pUVar10 = (UObject *)0x0;
        }
        else {
          iVar3 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar9->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_146db68d9;
          pUVar10 = *(UObject **)param_2.Class.field0_0x0;
        }
        if (pUVar8 == pUVar10) {
LAB_146db69b9:
          local_res8 = *(UObject **)param_3.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)
             ) {
            UE::GC::MarkAsReachable(local_res8);
          }
          FAreaNavModifier::SetAreaClass(this_01,(TSubclassOf<UNavAreaBase>)&local_res8);
        }
        else if (param_4) {
          pUVar8 = FWeakObjectPtr::Get(this_00);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar8 != (UObject *)0x0) goto LAB_146db691d;
LAB_146db694b:
            pUVar8 = (UObject *)0x0;
          }
          else {
            if (pUVar8 == (UObject *)0x0) goto LAB_146db694b;
            UE::GC::MarkAsReachable(pUVar8);
LAB_146db691d:
            pUVar9 = Z_Construct_UClass_UNavAreaBase_NoRegister();
            if (pUVar9 == (UClass *)0x0) goto LAB_146db694b;
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)&pUVar8[1].field_0x10 < iVar3) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_146db694b;
          }
          lVar4 = *(longlong *)param_2.Class.field0_0x0;
          if ((lVar4 != 0) && (pUVar9 = UNavArea::StaticClass(), pUVar9 != (UClass *)0x0)) {
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (lVar4 = *(longlong *)param_2.Class.field0_0x0, lVar4 != 0)) {
              if ((*(int *)&pUVar8[1].field_0x10 < *(int *)(lVar4 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)&pUVar8[1].field_0x8 + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                  lVar4 + 0x30)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) goto LAB_146db69b9;
            }
          }
        }
        this_01 = this_01 + 1;
        this_00 = this_00 + 0xe;
      } while( true );
    }
  }
  return false;
}

// UnregisterElementWithNavOctree @ 146dbef60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FNavigationDataHandler::UnregisterElementWithNavOctree
          (FNavigationDataHandler *this,TSharedRef<FNavigationElement_const_,1> *param_1,int param_2
          )

{
  int *piVar1;
  byte bVar2;
  FNavigationElement *this_00;
  FNavigationOctree *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Navigation_UnregisterNavOctreeElement> FVar10;
  FOctreeElementId2 *pFVar11;
  UObject *pUVar12;
  FName FVar13;
  FNavigationRelevantData *pFVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar15;
  uint uVar16;
  FName FVar17;
  bool bVar18;
  FOctreeElementId2 *pFVar19;
  uint uVar20;
  longlong lVar21;
  FName local_res8;
  LARGE_INTEGER local_res10;
  uint local_res18;
  FName local_res20;
  FWeakObjectPtr local_a8;
  FName local_a0;
  FNavigationElementHandle local_88;
  undefined1 local_78 [8];
  FStatNameAndInfo FStack_70;
  FString local_68;
  FString local_58;
  
  pFVar19 = (FOctreeElementId2 *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  FVar10 = StatPtr_STAT_Navigation_UnregisterNavOctreeElement;
  local_res10 = (LARGE_INTEGER)param_1;
  local_res18 = param_2;
  if (StatPtr_STAT_Navigation_UnregisterNavOctreeElement ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_UnregisterNavOctreeElement>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_Navigation_UnregisterNavOctreeElement");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Navigation_UnregisterNavOctreeElement>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_UnregisterNavOctreeElement,*pFVar9,
                        L"Unregistering Nav Octree Element","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_146dbf0a2:
    bVar5 = false;
    FVar17 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = FVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                   ,0x100);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146dbf0a2;
    local_res8 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  this_00 = param_1->Object;
  if ((this->OctreeController->NavOctree).Object == (FNavigationOctree *)0x0) {
    if (6 < (byte)LogNavOctree._0_1_) {
      FNavigationElement::GetPathName(this_00,(FString *)local_78);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
LAB_146dbf14b:
      if ((FName)local_78 != (FName)0x0) {
        FMemory::Free((void *)local_78);
      }
    }
  }
  else {
    if (this->OctreeController->bNavOctreeLock == 0) {
      FNavigationElement::GetHandle(this_00,&local_88);
      local_78._4_4_ = local_88.OwnerUObject.WeakPtr.ObjectSerialNumber;
      local_78._0_4_ = local_88.OwnerUObject.WeakPtr.ObjectIndex;
      FStack_70.Index.Value = (undefined4)local_88.SubElementId;
      FStack_70.Number = local_88.SubElementId._4_4_;
      pFVar3 = (this->OctreeController->NavOctree).Object;
      pFVar11 = pFVar19;
      if (pFVar3 != (FNavigationOctree *)0x0) {
        pFVar11 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                  ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                          *)&pFVar3->ElementToOctreeId,(FNavigationElementHandle *)local_78);
      }
      if (FVisualLogger::bIsRecording != 0) {
        FVar13 = (FName)L"[doesn\'t exist]";
        if (pFVar11 != (FOctreeElementId2 *)0x0) {
          ::LexToString(&local_58,*pFVar11);
          ::FString::PrintfImpl((FString *)local_78,L"[exists %s]");
          pFVar19 = (FOctreeElementId2 *)&DAT_00000003;
          FVar13 = (FName)L"";
          if (FStack_70.Index.Value != 0) {
            FVar13 = (FName)local_78;
          }
        }
        local_res8 = FVar13;
        pFVar9 = (FName *)FNavigationElement::GetPathName(this_00,&local_68);
        if (pFVar9[1].ComparisonIndex.Value == 0) {
          local_res20 = (FName)0x15060d16c;
        }
        else {
          local_res20 = *pFVar9;
        }
        local_a8 = (this_00->OwnerUObject).WeakPtr;
        pUVar12 = FWeakObjectPtr::Get(&local_a8);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar12,(FName *)&LogNavOctree.field_0x4,Log,L"UNREG %s %s");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)pFVar19 & 2) != 0) &&
           (pFVar19 = (FOctreeElementId2 *)(ulonglong)((uint)pFVar19 & 0xfffffffd),
           (FName)local_78 != (FName)0x0)) {
          FMemory::Free((void *)local_78);
        }
        if ((((ulonglong)pFVar19 & 1) != 0) &&
           (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      bVar7 = false;
      bVar18 = false;
      if (4 < (byte)LogNavOctree._0_1_) {
        FVar13 = (FName)L"[doesn\'t exist]";
        if (pFVar11 != (FOctreeElementId2 *)0x0) {
          ::LexToString(&local_68,*pFVar11);
          bVar7 = true;
          bVar18 = true;
          ::FString::PrintfImpl((FString *)local_78,L"[exists %s]");
          FVar13 = (FName)L"";
          if (FStack_70.Index.Value != 0) {
            FVar13 = (FName)local_78;
          }
        }
        local_res8 = FVar13;
        FNavigationElement::GetPathName(this_00,&local_58);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if ((bVar18) && ((FName)local_78 != (FName)0x0)) {
          FMemory::Free((void *)local_78);
        }
        if ((bVar7) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      uVar15 = local_res18;
      bVar18 = false;
      if (pFVar11 == (FOctreeElementId2 *)0x0) {
        if (((local_res18 & 8) == 0) &&
           (((this_00->NavigationParent).WeakPtr.ObjectIndex != 0 ||
            ((this_00->NavigationParent).WeakPtr.ObjectSerialNumber != 0)))) {
          FVar13 = *(FName *)&(this_00->NavigationParent).WeakPtr;
          FStack_70.Index.Value = 0xffffffff;
          FStack_70.Number = -1;
          local_78 = (undefined1  [8])FVar13;
          TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
          ::RemoveSingle(&this->OctreeController->OctreeParentChildNodesMap,
                         (FNavigationElementHandle *)local_78,
                         (TSharedRef<FNavigationElement_const_,1> *)local_res10);
          FStack_70.Index.Value = 0xffffffff;
          FStack_70.Number = -1;
          local_78 = (undefined1  [8])FVar13;
          pFVar14 = FNavigationOctreeController::GetDataForElement
                              (this->OctreeController,(FNavigationElementHandle *)local_78);
          if (pFVar14 != (FNavigationRelevantData *)0x0) {
            UpdateNavOctreeParentChain(this,&pFVar14->SourceElement,false);
          }
        }
      }
      else {
        RemoveFromNavOctree(this,pFVar11,local_res18);
        bVar18 = true;
        uVar15 = local_res18;
      }
      if ((uVar15 & 4) == 0) {
        uVar16 = (int)(local_88.SubElementId >> 0x20) * 0x17 + (uint)local_88.SubElementId;
        uVar20 = (local_88.OwnerUObject.WeakPtr.ObjectSerialNumber ^
                 local_88.OwnerUObject.WeakPtr.ObjectIndex) - uVar16 ^ uVar16 >> 0xd;
        uVar15 = (-0x61c88647 - uVar20) - uVar16 ^ uVar20 << 8;
        uVar16 = (uVar16 - uVar15) - uVar20 ^ uVar15 >> 0xd;
        uVar20 = (uVar20 - uVar16) - uVar15 ^ uVar16 >> 0xc;
        uVar15 = (uVar15 - uVar20) - uVar16 ^ uVar20 << 0x10;
        uVar16 = (uVar16 - uVar15) - uVar20 ^ uVar15 >> 5;
        uVar20 = (uVar20 - uVar16) - uVar15 ^ uVar16 >> 3;
        uVar15 = (uVar15 - uVar20) - uVar16 ^ uVar20 << 10;
        iVar8 = TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
                ::FindIndexByHash<FNavigationElementHandle>
                          (&this->OctreeController->PendingUpdates,
                           (uVar16 - uVar15) - uVar20 ^ uVar15 >> 0xf,&local_88);
        if (iVar8 != -1) {
          lVar21 = (longlong)iVar8 * 0x68 +
                   *(longlong *)&(this->OctreeController->PendingUpdates).Elements;
          bVar2 = *(byte *)(lVar21 + 0x5a);
          bVar18 = (bool)(bVar18 | ~(bVar2 >> 1) & 1);
          *(byte *)(lVar21 + 0x5a) = bVar2 | 2;
        }
      }
      goto LAB_146dbf4d1;
    }
    if (4 < (byte)LogNavOctree._0_1_) {
      FNavigationElement::GetPathName(this_00,(FString *)local_78);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
      goto LAB_146dbf14b;
    }
  }
  bVar18 = false;
LAB_146dbf4d1:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_70 = (FStatNameAndInfo)((ulonglong)FVar17 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_78 = (undefined1  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)local_78);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return bVar18;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar18;
}

// UnregisterNavOctreeElement @ 146dbfec0

bool __thiscall
FNavigationDataHandler::UnregisterNavOctreeElement
          (FNavigationDataHandler *this,UObject *param_1,INavRelevantInterface *param_2,int param_3)

{
  bool bVar1;
  TSharedRef<FNavigationElement_const_,1> *pTVar2;
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  pTVar2 = FNavigationElement::CreateFromNavRelevantInterface(&local_18,param_2);
  bVar1 = UnregisterElementWithNavOctree(this,pTVar2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// UpdateNavOctreeElement @ 146dc2ab0

void __thiscall
FNavigationDataHandler::UpdateNavOctreeElement
          (FNavigationDataHandler *this,UObject *param_1,INavRelevantInterface *param_2,int param_3)

{
  TSharedRef<FNavigationElement_const_,1> *pTVar1;
  UObject *local_res10;
  FWeakObjectPtr local_38;
  undefined8 uStack_30;
  FNavigationElementHandle local_28;
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  pTVar1 = FNavigationElement::CreateFromNavRelevantInterface(&local_18,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res10);
  uStack_30 = 0xffffffffffffffff;
  local_28.OwnerUObject.WeakPtr = local_38;
  local_28.SubElementId = 0xffffffffffffffff;
  UpdateNavOctreeElement(this,&local_28,pTVar1,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateNavOctreeElement @ 146dc2b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationDataHandler::UpdateNavOctreeElement
          (FNavigationDataHandler *this,FNavigationElementHandle *param_1,
          TSharedRef<FNavigationElement_const_,1> *param_2,int param_3)

{
  FName FVar1;
  FNavigationOctreeController *this_00;
  bool bVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_Navigation_UpdateNavOctree> FVar4;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar5;
  FName local_res8;
  undefined1 local_98 [16];
  TReferenceControllerBase<1> *local_88;
  FNavigationElementHandle local_78;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  if (FThreadStats::bPrimaryEnable) {
    FVar4 = StatPtr_STAT_Navigation_UpdateNavOctree;
    if (StatPtr_STAT_Navigation_UpdateNavOctree ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_UpdateNavOctree>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_Navigation_UpdateNavOctree");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_UpdateNavOctree>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_UpdateNavOctree,
                         *pFVar3,L"Num update nav octree","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_78.OwnerUObject.WeakPtr.ObjectIndex = 1;
      local_78.OwnerUObject.WeakPtr.ObjectSerialNumber = 0;
      local_78.SubElementId = (ulonglong)FVar1 & 0xffffafffffffffff | 0xa00000000000;
      local_res8 = FVar1;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)&local_78);
      FStatsTrace::Add(&local_res8,1);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  this_00 = this->OctreeController;
  if ((this_00->NavOctree).Object == (FNavigationOctree *)0x0) {
    if ((byte)LogNavOctree._0_1_ < 7) {
      return;
    }
    FNavigationElement::GetPathName(param_2->Object,(FString *)&local_78);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
  }
  else {
    if (this_00->bNavOctreeLock == 0) {
      local_78.OwnerUObject.WeakPtr = (param_1->OwnerUObject).WeakPtr;
      local_78.SubElementId = param_1->SubElementId;
      local_38 = 0;
      bVar2 = FNavigationOctreeController::GetNavOctreeElementData
                        (this_00,&local_78,(ENavigationDirtyFlag *)&local_res8,
                         (TBox<double> *)&local_68._s_0);
      local_98._8_8_ = param_2->Object;
      local_88 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_88 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
        UNLOCK();
      }
      UnregisterElementWithNavOctree
                (this,(TSharedRef<FNavigationElement_const_,1> *)(local_98 + 8),param_3 | 4);
      RegisterElementWithNavOctree
                (this,(TSharedRef<FNavigationElement_const_,1> *)local_98,(int)local_98 + 8);
      if (local_98._0_4_ != -1) {
        lVar5 = (longlong)(int)local_98._0_4_ * 0x68 +
                *(longlong *)&(this->OctreeController->PendingUpdates).Elements;
        *(undefined1 *)(lVar5 + 0x59) = (undefined1)local_res8.ComparisonIndex.Value;
        if (*(char *)(lVar5 + 0x50) == '\0') {
          *(double *)(lVar5 + 0x20) = local_68._s_0.X;
          *(double *)(lVar5 + 0x28) = local_68._s_0.Y;
          *(double *)(lVar5 + 0x30) = local_68._s_0.Z;
          *(undefined8 *)(lVar5 + 0x38) = uStack_50;
          *(undefined8 *)(lVar5 + 0x40) = local_48;
          *(undefined8 *)(lVar5 + 0x48) = uStack_40;
          *(ulonglong *)(lVar5 + 0x50) = CONCAT71(uStack_37,local_38);
        }
        else {
          UE::Math::TBox<double>::operator+=
                    ((TBox<double> *)(lVar5 + 0x20),(TBox<double> *)&local_68._s_0);
        }
        *(byte *)(lVar5 + 0x5a) = *(byte *)(lVar5 + 0x5a) & 0xfe;
        *(byte *)(lVar5 + 0x5a) = *(byte *)(lVar5 + 0x5a) | bVar2;
      }
      UpdateNavOctreeParentChain(this,param_2,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
      return;
    }
    if ((byte)LogNavOctree._0_1_ < 5) {
      return;
    }
    FNavigationElement::GetPathName(param_2->Object,(FString *)&local_78);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavOctree);
  }
  if (local_78.OwnerUObject.WeakPtr != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_78.OwnerUObject.WeakPtr);
  }
  return;
}

// UpdateNavOctreeElementBounds @ 146dc3030

bool __thiscall
FNavigationDataHandler::UpdateNavOctreeElementBounds
          (FNavigationDataHandler *this,UObject *param_1,TBox<double> *param_2,
          TArrayView<UE::Math::TBox<double>_const_,int> *param_3)

{
  bool bVar1;
  UObject *local_res10;
  FWeakObjectPtr local_38;
  undefined8 uStack_30;
  TArrayView<UE::Math::TBox<double>_const_,int> local_28;
  FNavigationElementHandle local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res10);
  local_28.DataPtr = param_3->DataPtr;
  local_28.ArrayNum = param_3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  uStack_30 = 0xffffffffffffffff;
  local_18.OwnerUObject.WeakPtr = local_38;
  local_18.SubElementId = 0xffffffffffffffff;
  bVar1 = UpdateNavOctreeElementBounds(this,&local_18,param_2,&local_28);
  return bVar1;
}

// UpdateNavOctreeElementBounds @ 146dc30f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FNavigationDataHandler::UpdateNavOctreeElementBounds
          (FNavigationDataHandler *this,FNavigationElementHandle *param_1,TBox<double> *param_2,
          TArrayView<UE::Math::TBox<double>_const_,int> *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FNavigationOctreeController *pFVar6;
  FNavigationOctree *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  FNavigationDirtyAreasController *this_00;
  longlong *plVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  ENavigationDirtyFlag EVar17;
  int iVar18;
  FOctreeElementId2 *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  FNavigationOctreeElement *pFVar21;
  FNavigationRelevantData *this_01;
  undefined ***pppuVar22;
  TReferenceControllerBase<1> *pTVar23;
  ForAnyElementType *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStackY_178 [32];
  FNavigationElementHandle local_148;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  FNavigationRelevantData *local_100;
  TReferenceControllerBase<1> *local_f8;
  FNavigationElementHandle local_e8;
  FNavigationElementHandle local_d8;
  TArrayView<UE::Math::TBox<double>_const_,int> local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  FNavigationElement *local_a0;
  TReferenceControllerBase<1> *local_98;
  undefined ***local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar6 = this->OctreeController;
  local_e8.OwnerUObject.WeakPtr = (param_1->OwnerUObject).WeakPtr;
  local_e8.SubElementId = param_1->SubElementId;
  pFVar7 = (pFVar6->NavOctree).Object;
  if ((pFVar7 != (FNavigationOctree *)0x0) &&
     (pFVar19 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                        *)&pFVar7->ElementToOctreeId,&local_e8), pFVar19 != (FOctreeElementId2 *)0x0
     )) {
    bVar15 = FNavigationOctreeController::IsValidElement(pFVar6,pFVar19);
    if (bVar15) {
      pFVar6 = this->OctreeController;
      if (((pFVar6->NavOctree).Object == (FNavigationOctree *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        uVar16 = (*pcVar11)();
        return (bool)uVar16;
      }
      pFVar7 = (pFVar6->NavOctree).Object;
      pFVar21 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                          ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                           &pFVar7->_padding_,*pFVar19);
      local_138._s_0.X = (pFVar21->Bounds).Origin.field0_0x0._s_0.X;
      local_138._s_0.Y = (pFVar21->Bounds).Origin.field0_0x0._s_0.Y;
      local_138._s_0.Z = (pFVar21->Bounds).Origin.field0_0x0._s_0.Z;
      dStack_120 = (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.X;
      local_118 = (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dStack_110 = (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.Z;
      local_108 = (pFVar21->Bounds).SphereRadius;
      local_100 = (pFVar21->Data).Object;
      local_f8 = (pFVar21->Data).SharedReferenceCount.ReferenceController;
      if (local_f8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_f8->SharedReferenceCount = (atomic<int>)((int)local_f8->SharedReferenceCount + 1);
        UNLOCK();
      }
      FNavigationOctree::RemoveElement(pFVar7,*pFVar19);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = __real_3fe0000000000000;
      dVar2 = (param_2->Min).field0_0x0._s_0.Y;
      dVar3 = (param_2->Min).field0_0x0._s_0.X;
      dVar14 = (param_2->Max).field0_0x0._s_0.Y - dVar2;
      dVar4 = (param_2->Min).field0_0x0._s_0.Z;
      dVar13 = (param_2->Max).field0_0x0._s_0.X - dVar3;
      dVar12 = (param_2->Max).field0_0x0._s_0.Z - dVar4;
      local_118 = dVar14 * __real_3fe0000000000000;
      dStack_120 = dVar13 * __real_3fe0000000000000;
      dStack_110 = dVar12 * __real_3fe0000000000000;
      local_138._s_0.Y = dVar2 + local_118;
      local_138._s_0.X = dVar3 + dStack_120;
      local_138._s_0.Z = dVar4 + dStack_110;
      auVar27._8_8_ = 0;
      auVar27._0_8_ =
           (dVar14 * dVar14 + dVar13 * dVar13 + dVar12 * dVar12) * __real_3fd0000000000000;
      auVar27 = sqrtpd(auVar26,auVar27);
      local_108 = auVar27._0_8_;
      FNavigationOctree::AddElement(pFVar7,(FNavigationOctreeElement *)&local_138._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f8);
      if (0 < param_3->ArrayNum) {
        pFVar6 = this->OctreeController;
        local_d8.OwnerUObject.WeakPtr = (param_1->OwnerUObject).WeakPtr;
        local_d8.SubElementId = param_1->SubElementId;
        pFVar7 = (pFVar6->NavOctree).Object;
        if ((pFVar7 != (FNavigationOctree *)0x0) &&
           (pFVar19 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                      ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                              *)&pFVar7->ElementToOctreeId,&local_d8),
           pFVar19 != (FOctreeElementId2 *)0x0)) {
          bVar15 = FNavigationOctreeController::IsValidElement(pFVar6,pFVar19);
          if (bVar15) {
            pFVar6 = this->OctreeController;
            if (((pFVar6->NavOctree).Object == (FNavigationOctree *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar11 = (code *)swi(3);
              uVar16 = (*pcVar11)();
              return (bool)uVar16;
            }
            pFVar21 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                                ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                                 &((pFVar6->NavOctree).Object)->_padding_,*pFVar19);
            this_00 = this->DirtyAreasController;
            ::FName::FName((FName *)&local_148.OwnerUObject.WeakPtr.ObjectSerialNumber,
                           "Bounds change");
            this_01 = (pFVar21->Data).Object;
            pTVar23 = (this_01->SourceElement).SharedReferenceCount.ReferenceController;
            local_a0 = (this_01->SourceElement).Object;
            if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
              UNLOCK();
              this_01 = (pFVar21->Data).Object;
            }
            local_90 = (undefined ***)0x0;
            local_a8 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::`11'::<lambda_1>,0,0>
                        ::_vftable_;
            local_b8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::__l11::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
                          ::Call;
            local_98 = pTVar23;
            EVar17 = FNavigationRelevantData::GetDirtyFlag(this_01);
            local_c8.DataPtr = param_3->DataPtr;
            local_c8.ArrayNum = param_3->ArrayNum;
            local_c8._12_4_ = *(undefined4 *)&param_3->field_0xc;
            FNavigationDirtyAreasController::AddAreas
                      (this_00,&local_c8,EVar17,
                       (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)
                       local_b8,(FNavigationDirtyElement *)0x0,
                       (FName *)&local_148.OwnerUObject.WeakPtr.ObjectSerialNumber);
            if (local_b8[0] != (code *)0x0) {
              pppuVar22 = &local_a8;
              if (local_90 != (undefined ***)0x0) {
                pppuVar22 = local_90;
              }
              (*(code *)(*pppuVar22)[2])();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar23);
          }
          else {
            bVar15 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_173074254177238573>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                                ,0x1d3,"OctreeController.IsValidElement(*ElementId)");
            if (bVar15) {
              pcVar11 = (code *)swi(3);
              uVar16 = (*pcVar11)();
              return (bool)uVar16;
            }
          }
        }
      }
      return true;
    }
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_173074254177238582>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationDataHandler.cpp"
                        ,0x1ca,"OctreeController.IsValidElement(*ElementId)");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      uVar16 = (*pcVar11)();
      return (bool)uVar16;
    }
  }
  TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::FindId
            (&this->OctreeController->PendingUpdates,&local_148);
  if ((local_148.OwnerUObject.WeakPtr.ObjectIndex == -1) ||
     (pFVar24 = (ForAnyElementType *)
                ((longlong)local_148.OwnerUObject.WeakPtr.ObjectIndex * 0x68 +
                *(longlong *)&(this->OctreeController->PendingUpdates).Elements),
     ((ulonglong)pFVar24[0xb].Data & 0x20000) != 0)) {
    return false;
  }
  pFVar8 = pFVar24[2].Data;
  pTVar20 = ::operator_new(0x130);
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
    pTVar25 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_146dc36b2:
    if (((pTVar25->_padding_ == 0) || (*(longlong *)&pTVar25->SharedReferenceCount == 0)) ||
       (*(int *)(*(longlong *)&pTVar25->SharedReferenceCount + 8) < 1)) {
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar25->_padding_ = (longlong)pTVar25;
      if (pTVar23 != *(TReferenceControllerBase<1> **)&pTVar25->SharedReferenceCount) {
        if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar10 = *(longlong **)&pTVar25->SharedReferenceCount;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pTVar25->SharedReferenceCount = pTVar23;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    }
  }
  else {
    pTVar20->SharedReferenceCount = (atomic<int>)0x1;
    pTVar20->WeakReferenceCount = (atomic<int>)0x1;
    pTVar20[1]._padding_ = 0;
    pTVar20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFNavigationElement___00_SharedPointerInternals__6B_;
    pTVar20[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar20[1].WeakReferenceCount = (atomic<int>)0x0;
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
                *)(pTVar20 + 2),
               (TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
                *)(pFVar8 + 0x10));
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy>
                *)&pTVar20[3].SharedReferenceCount,
               (TDelegate<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy>
                *)(pFVar8 + 0x28));
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
                *)(pTVar20 + 5),
               (TDelegate<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
                *)(pFVar8 + 0x40));
    uVar9 = *(undefined8 *)(pFVar8 + 0x58);
    pTVar20[6].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[6].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    pTVar20[7]._padding_ = *(longlong *)(pFVar8 + 0x60);
    uVar9 = *(undefined8 *)(pFVar8 + 0x68);
    pTVar20[7].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[7].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 0x78);
    pTVar20[8]._padding_ = *(longlong *)(pFVar8 + 0x70);
    pTVar20[8].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[8].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 0x88);
    pTVar20[9]._padding_ = *(longlong *)(pFVar8 + 0x80);
    pTVar20[9].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[9].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 0x98);
    pTVar20[10]._padding_ = *(longlong *)(pFVar8 + 0x90);
    pTVar20[10].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[10].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 0xa8);
    pTVar20[0xb]._padding_ = *(longlong *)(pFVar8 + 0xa0);
    pTVar20[0xb].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[0xb].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 0xb8);
    pTVar20[0xc]._padding_ = *(longlong *)(pFVar8 + 0xb0);
    pTVar20[0xc].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[0xc].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 200);
    pTVar20[0xd]._padding_ = *(longlong *)(pFVar8 + 0xc0);
    pTVar20[0xd].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[0xd].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 0xd8);
    pTVar20[0xe]._padding_ = *(longlong *)(pFVar8 + 0xd0);
    pTVar20[0xe].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[0xe].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 0xe8);
    pTVar20[0xf]._padding_ = *(longlong *)(pFVar8 + 0xe0);
    pTVar20[0xf].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[0xf].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)(pFVar8 + 0xf8);
    pTVar20[0x10]._padding_ = *(longlong *)(pFVar8 + 0xf0);
    pTVar20[0x10].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[0x10].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    pTVar20[0x11]._padding_ = *(longlong *)(pFVar8 + 0x100);
    uVar9 = *(undefined8 *)(pFVar8 + 0x108);
    pTVar20[0x11].SharedReferenceCount = (atomic<int>)(int)uVar9;
    pTVar20[0x11].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
    *(undefined4 *)&pTVar20[0x12]._padding_ = *(undefined4 *)(pFVar8 + 0x110);
    *(FScriptContainerElement *)((longlong)&pTVar20[0x12]._padding_ + 4) = pFVar8[0x114];
    *(FScriptContainerElement *)((longlong)&pTVar20[0x12]._padding_ + 5) = pFVar8[0x115];
    *(FScriptContainerElement *)((longlong)&pTVar20[0x12]._padding_ + 6) = pFVar8[0x116];
    pTVar25 = pTVar20 + 1;
    *(FScriptContainerElement *)((longlong)&pTVar20[0x12]._padding_ + 7) = pFVar8[0x117];
    pTVar23 = pTVar20;
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) goto LAB_146dc36b2;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      uVar16 = (*pcVar11)();
      return (bool)uVar16;
    }
  }
  dVar2 = (param_2->Min).field0_0x0._s_0.Y;
  pTVar25[0xd]._padding_ = (longlong)(param_2->Min).field0_0x0._s_0.X;
  *(double *)&pTVar25[0xd].SharedReferenceCount = dVar2;
  dVar2 = (param_2->Max).field0_0x0._s_0.X;
  pTVar25[0xe]._padding_ = (longlong)(param_2->Min).field0_0x0._s_0.Z;
  *(double *)&pTVar25[0xe].SharedReferenceCount = dVar2;
  dVar2 = (param_2->Max).field0_0x0._s_0.Z;
  pTVar25[0xf]._padding_ = (longlong)(param_2->Max).field0_0x0._s_0.Y;
  *(double *)&pTVar25[0xf].SharedReferenceCount = dVar2;
  pTVar25[0x10]._padding_ = *(longlong *)&param_2->IsValid;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar20 = (TReferenceControllerBase<1> *)pFVar24[3].Data;
  pFVar24[2].Data = (FScriptContainerElement *)pTVar25;
  pFVar24[3].Data = (FScriptContainerElement *)pTVar23;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  iVar5 = param_3->ArrayNum;
  if (iVar5 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x9a9,L"Invalid range size: %lld");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      uVar16 = (*pcVar11)();
      return (bool)uVar16;
    }
  }
  else if (iVar5 == 0) goto LAB_146dc37eb;
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x38,8,iVar5,pFVar24,(int *)(pFVar24 + 1),
                      (int *)((longlong)&pFVar24[1].Data + 4));
  memcpy(pFVar24->Data + (longlong)iVar18 * 0x38,param_3->DataPtr,(longlong)iVar5 * 0x38);
LAB_146dc37eb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  return true;
}

// UpdateNavOctreeParentChain @ 146dc3a10

void __thiscall
FNavigationDataHandler::UpdateNavOctreeParentChain
          (FNavigationDataHandler *this,TSharedRef<FNavigationElement_const_,1> *param_1,
          bool param_2)

{
  FNavigationOctreeController *pFVar1;
  int iVar2;
  bool bVar3;
  FNavigationElementHandle *pFVar4;
  ForAnyElementType FVar5;
  TSharedRef<FNavigationElement_const_,1> *pTVar6;
  undefined1 local_res8 [16];
  char local_res18 [8];
  TArray<TSharedRef<FNavigationElement_const_,1>_const_,TSizedDefaultAllocator<32>_> local_68;
  TSharedRef<FNavigationElement_const_,1> local_58;
  FNavigationElementHandle local_48;
  FNavigationDataHandler *local_38;
  
  pFVar1 = this->OctreeController;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_res18[0] = param_2;
  pFVar4 = FNavigationElement::GetHandle(param_1->Object,&local_48);
  local_58.Object = *(FNavigationElement **)&(pFVar4->OwnerUObject).WeakPtr;
  local_58.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4->SubElementId;
  TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            (&pFVar1->OctreeParentChildNodesMap,(FNavigationElementHandle *)&local_58,&local_68,
             false);
  iVar2 = local_68.ArrayNum;
  local_48.OwnerUObject.WeakPtr = (FWeakObjectPtr)local_res18;
  local_48.SubElementId = (ulong64)param_1;
  local_38 = this;
  if (local_68.ArrayNum == 0) {
    `FNavigationDataHandler::UpdateNavOctreeParentChain'::__l2::<lambda_1>::operator()(&local_48);
    goto LAB_146dc3b42;
  }
  pTVar6 = (TSharedRef<FNavigationElement_const_,1> *)
           (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x10);
  FVar5.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<FNavigationElement_const_,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if ((TSharedRef<FNavigationElement_const_,1> *)FVar5.Data == pTVar6) break;
    UnregisterElementWithNavOctree(this,(TSharedRef<FNavigationElement_const_,1> *)FVar5.Data,0xc);
    FVar5.Data = FVar5.Data + 0x10;
  }
  if (local_res18[0] == '\0') {
    local_58.Object = param_1->Object;
    local_58.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = UnregisterElementWithNavOctree(this,&local_58,0xc);
    if (!bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      goto LAB_146dc3b42;
    }
    RegisterElementWithNavOctree
              (this,(TSharedRef<FNavigationElement_const_,1> *)local_res8,(int)&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_res8._0_4_ == -1) goto LAB_146dc3b42;
  }
  iVar2 = local_68.ArrayNum;
  pTVar6 = (TSharedRef<FNavigationElement_const_,1> *)
           (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x10);
  FVar5.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<FNavigationElement_const_,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if ((TSharedRef<FNavigationElement_const_,1> *)FVar5.Data == pTVar6) break;
    RegisterElementWithNavOctree
              (this,(TSharedRef<FNavigationElement_const_,1> *)(local_res8 + 8),(int)FVar5.Data);
    FVar5.Data = FVar5.Data + 0x10;
  }
LAB_146dc3b42:
  DestructItems<TSharedRef<FNavigationElement_const_,1>_const_,int>
            ((TSharedRef<FNavigationElement_const_,1> *)local_68.AllocatorInstance.Data,
             local_68.ArrayNum);
  if ((TSharedRef<FNavigationElement_const_,1> *)local_68.AllocatorInstance.Data !=
      (TSharedRef<FNavigationElement_const_,1> *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// UpdateNavOctreeParentChain @ 146dc3bd0

void __thiscall
FNavigationDataHandler::UpdateNavOctreeParentChain
          (FNavigationDataHandler *this,UObject *param_1,bool param_2)

{
  UClass *pUVar1;
  INavRelevantInterface *pIVar2;
  TSharedRef<FNavigationElement_const_,1> *pTVar3;
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (pIVar2 != (INavRelevantInterface *)0x0) {
      pTVar3 = FNavigationElement::CreateFromNavRelevantInterface(&local_18,pIVar2);
      UpdateNavOctreeParentChain(this,pTVar3,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// operator() @ 1504fc230

bool __thiscall
`FNavigationDataHandler::ReplaceAreaInOctreeData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_173074254177238475>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_173074254177238475>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

