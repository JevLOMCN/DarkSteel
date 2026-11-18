// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 8

// FNavTestSceneProxy @ 146dd5d50

/* WARNING: Removing unreachable block (ram,0x000146dd622f) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNavTestSceneProxy * __thiscall
FNavTestSceneProxy::FNavTestSceneProxy(FNavTestSceneProxy *this,UNavTestRenderingComponent *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  ANavigationTestingActor *pAVar3;
  FNavigationPath *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  TVector<double> *pTVar13;
  FNavTestSceneProxy *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  FString local_38;
  
  FDebugRenderSceneProxy::FDebugRenderSceneProxy
            ((FDebugRenderSceneProxy *)this,(UPrimitiveComponent *)param_1);
  uVar17 = 0;
  *(undefined ***)this = &___7FNavTestSceneProxy__6B_;
  pTVar1 = &this->PathPoints;
  *(undefined8 *)&(this->NavMeshDrawOffset).field0_0x0 = 0;
  pTVar2 = &this->PathPointFlags;
  (this->NavMeshDrawOffset).field0_0x0._s_0.Z = 10.0;
  this->NavTestActor = (ANavigationTestingActor *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PathPoints).ArrayNum = 0;
  (this->PathPoints).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PathPointFlags).ArrayNum = 0;
  (this->PathPointFlags).ArrayMax = 0;
  (this->OpenSetVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenSetVerts).ArrayNum = 0;
  (this->OpenSetVerts).ArrayMax = 0;
  (this->OpenSetIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenSetIndices).ArrayNum = 0;
  (this->OpenSetIndices).ArrayMax = 0;
  (this->ClosedSetVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClosedSetVerts).ArrayNum = 0;
  (this->ClosedSetVerts).ArrayMax = 0;
  (this->ClosedSetIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClosedSetIndices).ArrayNum = 0;
  (this->ClosedSetIndices).ArrayMax = 0;
  *(undefined8 *)&(this->NodeDebug).Elements = 0;
  *(undefined8 *)&(this->NodeDebug).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDebug).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NodeDebug).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NodeDebug).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeDebug).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeDebug).Elements.field_0x34 = 0;
  (this->NodeDebug).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NodeDebug).HashSize = 0;
  (this->BestNodeId).Index = -1;
  ::FString::operator=((FString *)&this->field_0x358,L"Navigation");
  if (param_1 != (UNavTestRenderingComponent *)0x0) {
    pAVar3 = *(ANavigationTestingActor **)&param_1->field_0xa8;
    if (pAVar3 != (ANavigationTestingActor *)0x0) {
      pUVar12 = ANavigationTestingActor::StaticClass();
      iVar11 = (int)pUVar12->_padding_;
      if ((iVar11 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar12->_padding_)) {
        uVar15 = *(uint *)&this->field_0x3ac;
        this->NavTestActor = pAVar3;
        (this->NavMeshDrawOffset).field0_0x0._s_0.Z =
             (pAVar3->NavAgentProps).AgentRadius * __real_3dcccccd +
             (this->NavMeshDrawOffset).field0_0x0._s_0.Z;
        uVar15 = (*(int *)&pAVar3->field_0x370 * 2 ^ uVar15) & 2 ^ uVar15;
        *(uint *)&this->field_0x3ac = uVar15;
        uVar15 = (pAVar3->bShowBestPath ^ uVar15) & 1 ^ uVar15;
        *(uint *)&this->field_0x3ac = uVar15;
        *(uint *)&this->field_0x3ac = (uVar15 ^ *(uint *)&pAVar3->field_0x370) & 4 ^ uVar15;
        pTVar13 = &pAVar3->ClosestWallLocation;
        if (pAVar3->bDrawDistanceToWall == 0) {
          pTVar13 = &FNavigationSystem::InvalidLocation;
        }
        dVar7 = (pTVar13->field0_0x0)._s_0.Y;
        (this->ClosestWallLocation).field0_0x0._s_0.X = (pTVar13->field0_0x0)._s_0.X;
        (this->ClosestWallLocation).field0_0x0._s_0.Y = dVar7;
        (this->ClosestWallLocation).field0_0x0._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
        uVar19 = uVar17;
        if ((pAVar3->LastPath).Object != (FNavigationPath *)0x0) {
          while( true ) {
            pAVar3 = this->NavTestActor;
            if (((pAVar3->LastPath).Object == (FNavigationPath *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FNavTestSceneProxy *)(*pcVar6)();
              return pFVar14;
            }
            uVar15 = (uint)uVar17;
            if ((((pAVar3->LastPath).Object)->PathPoints).ArrayNum <= (int)uVar15) break;
            pAVar3 = this->NavTestActor;
            if (((pAVar3->LastPath).Object == (FNavigationPath *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FNavTestSceneProxy *)(*pcVar6)();
              return pFVar14;
            }
            pFVar4 = (pAVar3->LastPath).Object;
            uVar10 = 0;
            if ((int)uVar15 < (pFVar4->PathPoints).ArrayNum) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FNavTestSceneProxy *)(*pcVar6)();
              return pFVar14;
            }
            pFVar16 = (pTVar1->AllocatorInstance).Data;
            pFVar18 = (pFVar4->PathPoints).AllocatorInstance.Data + uVar19;
            if (((pFVar16 <= pFVar18) &&
                (pFVar18 < pFVar16 + (longlong)(this->PathPoints).ArrayMax * 0x18)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FNavTestSceneProxy *)(*pcVar6)();
              return pFVar14;
            }
            iVar11 = (this->PathPoints).ArrayNum;
            if (iVar11 == (this->PathPoints).ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&pTVar1->AllocatorInstance,&(this->PathPoints).ArrayMax);
            }
            (this->PathPoints).ArrayNum = iVar11 + 1;
            uVar8 = *(undefined8 *)(pFVar18 + 8);
            pFVar5 = (pTVar1->AllocatorInstance).Data;
            pFVar16 = pFVar5 + (longlong)iVar11 * 0x18;
            *(undefined8 *)pFVar16 = *(undefined8 *)pFVar18;
            *(undefined8 *)(pFVar16 + 8) = uVar8;
            *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) =
                 *(undefined8 *)(pFVar18 + 0x10);
            pAVar3 = this->NavTestActor;
            if (((pAVar3->LastPath).Object == (FNavigationPath *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FNavTestSceneProxy *)(*pcVar6)();
              return pFVar14;
            }
            uVar10 = 0;
            if ((int)uVar15 < (((pAVar3->LastPath).Object)->PathPoints).ArrayNum) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FNavTestSceneProxy *)(*pcVar6)();
              return pFVar14;
            }
            ::FString::PrintfImpl(&local_38,L"%d-%d");
            pFVar16 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar16 <= (FScriptContainerElement *)&local_38) &&
                ((FScriptContainerElement *)&local_38 <
                 pFVar16 + (longlong)(this->PathPointFlags).ArrayMax * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FNavTestSceneProxy *)(*pcVar6)();
              return pFVar14;
            }
            iVar11 = (this->PathPointFlags).ArrayNum;
            if (iVar11 == (this->PathPointFlags).ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar2->AllocatorInstance,&(this->PathPointFlags).ArrayMax)
              ;
              (this->PathPointFlags).ArrayNum = iVar11 + 1;
            }
            else {
              (this->PathPointFlags).ArrayNum = iVar11 + 1;
            }
            pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
            *(undefined8 *)pFVar16 = 0;
            *(FScriptContainerElement **)pFVar16 = local_38.Data.AllocatorInstance.Data;
            local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar16 + 8) = local_38.Data.ArrayNum;
            *(int *)(pFVar16 + 0xc) = local_38.Data.ArrayMax;
            local_38.Data.ArrayNum = 0;
            local_38.Data.ArrayMax = 0;
            uVar17 = (ulonglong)(uVar15 + 1);
            uVar19 = uVar19 + 0x30;
          }
        }
        GatherPathStep(this);
        return this;
      }
    }
    this->NavTestActor = (ANavigationTestingActor *)0x0;
  }
  return this;
}

// GatherPathPoints @ 146dff7e0

/* WARNING: Removing unreachable block (ram,0x000146dffb21) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNavTestSceneProxy::GatherPathPoints(FNavTestSceneProxy *this)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  ANavigationTestingActor *pAVar4;
  FNavigationPath *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FString local_38;
  
  if ((this->NavTestActor != (ANavigationTestingActor *)0x0) &&
     ((this->NavTestActor->LastPath).Object != (FNavigationPath *)0x0)) {
    uVar14 = 0;
    uVar16 = uVar14;
    while( true ) {
      pAVar4 = this->NavTestActor;
      if (((pAVar4->LastPath).Object == (FNavigationPath *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = (uint)uVar14;
      if ((((pAVar4->LastPath).Object)->PathPoints).ArrayNum <= (int)uVar13) break;
      pAVar4 = this->NavTestActor;
      pTVar2 = &this->PathPoints;
      if (((pAVar4->LastPath).Object == (FNavigationPath *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pAVar4->LastPath).Object;
      uVar10 = 0;
      if ((int)uVar13 < (pFVar5->PathPoints).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      pFVar15 = (pFVar5->PathPoints).AllocatorInstance.Data + uVar16;
      if (((pFVar12 <= pFVar15) &&
          (pFVar15 < pFVar12 + (longlong)(this->PathPoints).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->PathPoints).ArrayNum;
      piVar1 = &(this->PathPoints).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->PathPoints).ArrayNum = iVar11 + 1;
      uVar8 = *(undefined8 *)(pFVar15 + 8);
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      pTVar3 = &this->PathPointFlags;
      pFVar12 = pFVar6 + (longlong)iVar11 * 0x18;
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar15;
      *(undefined8 *)(pFVar12 + 8) = uVar8;
      *(undefined8 *)(pFVar6 + (longlong)iVar11 * 0x18 + 0x10) = *(undefined8 *)(pFVar15 + 0x10);
      pAVar4 = this->NavTestActor;
      if (((pAVar4->LastPath).Object == (FNavigationPath *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar13 < (((pAVar4->LastPath).Object)->PathPoints).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      ::FString::PrintfImpl(&local_38,L"%d-%d");
      pFVar12 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar12 + (longlong)(this->PathPointFlags).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->PathPointFlags).ArrayNum;
      piVar1 = &(this->PathPointFlags).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->PathPointFlags).ArrayNum = iVar11 + 1;
      pFVar12 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar12 = 0;
      *(FScriptContainerElement **)pFVar12 = local_38.Data.AllocatorInstance.Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 8) = local_38.Data.ArrayNum;
      *(int *)(pFVar12 + 0xc) = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x30;
    }
  }
  return;
}

// GatherPathStep @ 146dffb70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNavTestSceneProxy::GatherPathStep(FNavTestSceneProxy *this)

{
  TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  (this->OpenSetVerts).ArrayNum = 0;
  if ((this->OpenSetVerts).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,0,&(this->OpenSetVerts).AllocatorInstance,0,&(this->OpenSetVerts).ArrayMax);
  }
  (this->ClosedSetVerts).ArrayNum = 0;
  if ((this->ClosedSetVerts).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,0,&(this->ClosedSetVerts).AllocatorInstance,0,&(this->ClosedSetVerts).ArrayMax
              );
  }
  (this->OpenSetIndices).ArrayNum = 0;
  if ((this->OpenSetIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->OpenSetIndices).AllocatorInstance,0,&(this->OpenSetIndices).ArrayMax);
  }
  (this->ClosedSetIndices).ArrayNum = 0;
  if ((this->ClosedSetIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ClosedSetIndices).AllocatorInstance,0,
               &(this->ClosedSetIndices).ArrayMax);
  }
  this_00 = &this->NodeDebug;
  uVar3 = *(int *)&(this->NodeDebug).Elements.field_0x8 -
          *(int *)&(this->NodeDebug).Elements.field_0x34;
  iVar4 = 1;
  if (3 < uVar3) {
    uVar1 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((((int)uVar3 < 1) || (iVar4 <= (this->NodeDebug).HashSize)) &&
     ((this->NodeDebug).HashSize <= iVar4)) {
    TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,uVar3);
  }
  else {
    TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,uVar3);
    (this->NodeDebug).HashSize = iVar4;
    TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  (this->BestNodeId).Index = -1;
  return;
}

// GetAllocatedSizeInternal @ 146e00620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FNavTestSceneProxy::GetAllocatedSizeInternal(FNavTestSceneProxy *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar19;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  ulonglong uVar18;
  
  uVar12 = 0;
  uVar10 = *(uint *)&(this->NodeDebug).Elements.field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->NodeDebug).Elements.field_0x10;
  TStack_60._padding_._0_4_ = 0;
  TStack_60._padding_._4_4_ = 1;
  uVar14 = uVar12;
  uVar17 = (uint)TStack_60._padding_;
  if (uVar10 != 0) {
    puVar19 = *(uint **)&(this->NodeDebug).Elements.field_0x20;
    uVar14 = (ulonglong)uVar10;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_60.Array;
    }
    uVar9 = *puVar19;
    uVar16 = uVar12;
    uVar18 = uVar12;
    uVar17 = 0;
    TStack_60._padding_._0_4_ = 0;
    while (uVar9 == 0) {
      iVar15 = (int)uVar16;
      uVar17 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)uVar17;
      TStack_60._padding_._0_4_ = iVar15 + 1;
      uVar16 = (ulonglong)(uint)TStack_60._padding_;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <
          (int)(uint)TStack_60._padding_) goto LAB_146e006c2;
      uVar9 = puVar19[(longlong)iVar15 + 1];
    }
    TStack_60._padding_._4_4_ = -uVar9 & uVar9;
    uVar14 = (ulonglong)TStack_60._padding_._4_4_ * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar9 = (int)lVar13 + -1 + uVar17;
    if ((int)uVar10 < (int)uVar9) {
      uVar9 = uVar10;
    }
    uVar14 = (ulonglong)uVar9;
  }
LAB_146e006c2:
  TStack_60.CurrentBitIndex = (int)uVar14;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar17;
  if (TStack_60.CurrentBitIndex < (int)uVar10) {
    do {
      uVar12 = uVar12 + (longlong)
                        *(int *)((longlong)(int)uVar14 * 0x40 + 0x2c +
                                *(longlong *)&(this->NodeDebug).Elements) * 2;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar14 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  iVar15 = (this->PathPoints).ArrayMax;
  uVar10 = (this->NodeDebug).HashSize;
  iVar1 = (this->PathPointFlags).ArrayMax;
  iVar2 = (this->OpenSetVerts).ArrayMax;
  iVar3 = (this->OpenSetIndices).ArrayMax;
  iVar4 = (this->ClosedSetVerts).ArrayMax;
  lVar11 = (longlong)(this->ClosedSetIndices).ArrayMax;
  lVar13 = lVar11 + (int)uVar10;
  if (uVar10 < 2) {
    lVar13 = lVar11;
  }
  iVar5 = *(int *)&(this->NodeDebug).Elements.field_0x2c;
  iVar6 = *(int *)&(this->NodeDebug).Elements.field_0xc;
  uVar10 = FDebugRenderSceneProxy::GetAllocatedSize((FDebugRenderSceneProxy *)this);
  uVar12 = (ulonglong)((iVar5 + 0x1fU >> 5) << 2) + (longlong)iVar6 * 0x40 + (ulonglong)uVar10 +
           (((longlong)iVar4 + (longlong)iVar2) * 0x16 + (longlong)iVar3 + lVar13) * 4 +
           (longlong)iVar1 * 0x10 + (longlong)iVar15 * 0x18 + uVar12;
  if ((uVar12 != (uVar12 & 0xffffffff)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return uVar10;
  }
  return (uint)uVar12;
}

// GetDynamicMeshElements @ 146e03ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNavTestSceneProxy::GetDynamicMeshElements
          (FNavTestSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  double *pdVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ANavigationTestingActor *pAVar7;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar8;
  TObjectPtr<AActor>_u_0 TVar9;
  AActor *pAVar10;
  USceneComponent *pUVar11;
  FScriptContainerElement *pFVar12;
  uint *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  double dVar24;
  FColor FVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  bool bVar29;
  FNameEntryId FVar30;
  FColor_u_0 FVar31;
  uint uVar32;
  ESceneDepthPriorityGroup EVar33;
  int iVar34;
  FPrimitiveDrawInterface *pFVar35;
  FColor *pFVar36;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar37;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar38;
  undefined4 extraout_var_00;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar39;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar40;
  undefined4 extraout_var_01;
  longlong lVar41;
  longlong lVar42;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar43;
  int iVar44;
  uint uVar45;
  uint *puVar46;
  FSceneView *pFVar47;
  double dVar48;
  double dVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  float fVar58;
  undefined1 auStackY_638 [32];
  byte local_5c0;
  byte bStack_5bf;
  byte bStack_5be;
  byte bStack_5bd;
  uint local_5b8;
  uint local_5b0;
  TVector<double>_u_0 local_598;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_580;
  FMaterialRenderProxy *local_578;
  longlong local_570;
  TVector<double>_u_0 local_568;
  uint local_550;
  undefined4 uStack_54c;
  uint local_548;
  undefined4 uStack_544;
  uint local_540;
  undefined4 uStack_53c;
  FSceneView *local_538;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  FLinearColor_u_0 local_520;
  float local_510;
  float local_50c;
  float local_508;
  float local_504;
  FLinearColor_u_0 local_500;
  FLinearColor_u_0 local_4f0;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  undefined4 local_4d4;
  FLinearColor_u_0 local_4d0;
  FLinearColor_u_0 local_4c0;
  float local_4b0;
  float local_4ac;
  float local_4a8;
  float local_4a4;
  FLinearColor_u_0 local_4a0;
  FLinearColor_u_0 local_490;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  FLinearColor_u_0 local_470;
  FLinearColor_u_0 local_460;
  FLinearColor_u_0 local_450;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  TVector<double>_u_0 local_430;
  double local_418;
  double dStack_410;
  undefined8 local_408;
  undefined1 local_400 [4];
  undefined1 local_3fc [4];
  undefined1 local_3f8 [4];
  int local_3f4;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
  *local_3d8;
  int iStack_3d0;
  uint uStack_3cc;
  undefined1 *local_3c8;
  undefined4 uStack_3c0;
  int iStack_3bc;
  int local_3b8;
  undefined4 uStack_3b4;
  TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
  *local_3a8;
  undefined1 auStack_3a0 [16];
  uint uStack_390;
  int iStack_38c;
  undefined8 local_388;
  TVector<double>_u_0 local_380;
  TVector<double>_u_0 local_368;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  double local_338;
  undefined8 local_330;
  double local_328;
  double local_320;
  undefined8 local_318;
  double local_310;
  double local_308;
  double local_2f0;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  FDynamicMeshBuilder local_270;
  FDynamicMeshBuilder local_248;
  double local_220;
  double dStack_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  TVector<double> local_1f0;
  TVector<double> local_1d8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  undefined4 local_18c;
  TVector<double>_u_0 local_188;
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158;
  TVector<double>_u_0 local_150;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_120;
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_638;
  local_580 = param_1;
  if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar29)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  fVar26 = __real_3b808081;
  dVar24 = __real_4024000000000000;
  iVar44 = param_1->ArrayNum;
  local_5b8 = 0;
  if (0 < iVar44) {
    uVar51 = (undefined4)__real_4059000000000000;
    uVar52 = (undefined4)((ulonglong)__real_4059000000000000 >> 0x20);
    uVar54 = (undefined4)__real_7fefffffffffffff;
    uVar55 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar56 = (undefined4)__real_3ff0000000000000;
    uVar57 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_5b0 = 1;
    local_570 = 0;
    pTVar43 = local_580;
    fVar53 = __real_40000000;
    fVar50 = __real_41c80000;
    fVar58 = __real_40200000;
    do {
      lVar42 = local_570;
      if ((param_3 & local_5b0) != 0) {
        uVar45 = 0;
        if ((int)local_5b8 < iVar44) {
          uVar45 = ~local_5b8 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        local_538 = *(FSceneView **)((local_580->AllocatorInstance).Data + lVar42);
        pFVar35 = FMeshElementCollector::GetPDI(param_4,local_5b8);
        FVar25 = FColorList::Orange;
        pAVar7 = this->NavTestActor;
        if (pAVar7 != (ANavigationTestingActor *)0x0) {
          lVar42 = pAVar7->_padding_;
          local_598._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_598._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_598._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if (lVar42 != 0) {
            local_210 = *(double *)(lVar42 + 0x220);
            local_220 = *(double *)(lVar42 + 0x210);
            dStack_218 = *(double *)(lVar42 + 0x218);
            local_598._s_0.Z = local_210;
            local_598._s_0.X = local_220;
            local_598._s_0.Y = dStack_218;
          }
          if (pAVar7->bProjectedLocationValid == 0) {
            local_568._s_0.Z = local_598._s_0.Z - (pAVar7->QueryingExtent).field0_0x0._s_0.Z;
            local_568._s_0.Y = local_598._s_0.Y;
            local_568._s_0.X = local_598._s_0.X;
          }
          else {
            local_568._s_0.Z =
                 (double)(this->NavMeshDrawOffset).field0_0x0._s_0.Z +
                 (pAVar7->ProjectedLocation).field0_0x0._s_0.Z;
            local_568._s_0.Y =
                 (double)(this->NavMeshDrawOffset).field0_0x0._s_0.Y +
                 (pAVar7->ProjectedLocation).field0_0x0._s_0.Y;
            local_568._s_0.X =
                 (double)(this->NavMeshDrawOffset).field0_0x0._s_0.X +
                 (pAVar7->ProjectedLocation).field0_0x0._s_0.X;
          }
          pFVar36 = &FColor::Red;
          local_430._s_0.X = ___xmm_40340000000000004034000000000000;
          local_430._s_0.Y = _UNK_151444f88;
          if (pAVar7->bProjectedLocationValid != 0) {
            pFVar36 = &FColor::Green;
          }
          local_430._s_0.Z = __real_4034000000000000;
          bVar4 = (pFVar36->field0_0x0)._s_0.B;
          bVar5 = (pFVar36->field0_0x0)._s_0.G;
          bVar6 = (pFVar36->field0_0x0)._s_0.R;
          local_2f0 = local_598._s_0.Z;
          local_578 = (FMaterialRenderProxy *)
                      (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ +
                                  0x310))();
          paVar8 = &param_4->OneFrameResources->Next;
          aVar37 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
          *(undefined ***)aVar37 =
               &
               ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          *(undefined8 *)((longlong)aVar37 + 8) = 0;
          TVar39.Next = *paVar8;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar37 + 8) = TVar39.Next;
            LOCK();
            aVar40 = *paVar8;
            bVar29 = TVar39.Next == aVar40;
            if (bVar29) {
              *paVar8 = aVar37;
              aVar40 = TVar39.Next;
            }
            UNLOCK();
            TVar39.Next = aVar40;
          } while (!bVar29);
          FVar30 = FNameEntryId::FromValidEName((EName)local_400);
          uStack_544 = 0;
          local_548 = *(uint *)CONCAT44(extraout_var,FVar30.Value);
          local_500._s_0.R = FLinearColor::sRGBToLinearTable[bVar6];
          local_500._s_0.G = FLinearColor::sRGBToLinearTable[bVar5];
          FVar22.Number = 0;
          FVar22.ComparisonIndex.Value = local_548;
          local_500._s_0.B = FLinearColor::sRGBToLinearTable[bVar4];
          local_500._s_0.A = 0.47058827;
          FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                    ((FColoredMaterialRenderProxy *)((longlong)aVar37 + 0x10),local_578,
                     (FLinearColor *)&local_500._s_0,FVar22);
          if (this->NavTestActor->bProjectedLocationValid != 0) {
            GetSphereMesh((TVector<double> *)&local_568._s_0,(TVector<double> *)&local_430._s_0,10,7
                          ,(FMaterialRenderProxy *)((longlong)aVar37 + 0x10),'\0',false,local_5b8,
                          param_4);
          }
          local_4f0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
          local_188._s_0.X = local_598._s_0.X - local_430._s_0.X;
          local_170 = local_598._s_0.X + local_430._s_0.X;
          local_4f0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
          local_4f0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
          local_158 = 1;
          local_4f0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar26;
          local_188._s_0.Y = local_598._s_0.Y - local_430._s_0.Y;
          local_168 = local_430._s_0.Y + local_598._s_0.Y;
          local_188._s_0.Z = local_598._s_0.Z - local_430._s_0.Z;
          local_160 = local_430._s_0.Z + local_598._s_0.Z;
          DrawWireBox(pFVar35,(TBox<double> *)&local_188._s_0,(FLinearColor *)&local_4f0._s_0,'\0',
                      0.0,0.0,false);
          local_380._s_0.Z = local_568._s_0.Z;
          local_380._s_0.X = local_568._s_0.X;
          local_380._s_0.Y = local_568._s_0.Y;
          if (this->NavTestActor->bProjectedLocationValid != 0) {
            uVar15 = local_568._s_0.X - local_598._s_0.X;
            dStack_3e8 = local_568._s_0.Y - local_598._s_0.Y;
            local_3e0 = local_568._s_0.Z - local_598._s_0.Z;
            dVar49 = dStack_3e8 * dStack_3e8 + (double)uVar15 * (double)uVar15 +
                     local_3e0 * local_3e0;
            if (dVar49 != (double)CONCAT44(uVar57,uVar56)) {
              if (__real_3e45798ee0000000 <= dVar49) {
                local_308 = (double)CONCAT44(uVar57,uVar56) / SQRT(dVar49);
                dStack_3e8 = dStack_3e8 * local_308;
                local_3e0 = local_3e0 * local_308;
                uVar15 = (double)uVar15 * local_308;
              }
              else {
                local_3f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                dStack_3e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                local_3e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
            }
            local_3c8 = (undefined1 *)(local_568._s_0.Z - local_3e0 * local_430._s_0.X);
            local_380._s_0.Z = (double)local_3c8;
            local_380._s_0.X = local_568._s_0.X - (double)uVar15 * local_430._s_0.X;
            local_380._s_0.Y = local_568._s_0.Y - dStack_3e8 * local_430._s_0.X;
          }
          local_4e0 = FLinearColor::sRGBToLinearTable[bVar6];
          local_4d8 = FLinearColor::sRGBToLinearTable[bVar4];
          local_4dc = FLinearColor::sRGBToLinearTable[bVar5];
          local_4d4 = 0x3ef0f0f2;
          (**(code **)(pFVar35->_padding_ + 0x30))(pFVar35,&local_380,&local_598);
          local_4d0._s_0.R = FLinearColor::sRGBToLinearTable[bVar6];
          local_4d0._s_0.G = FLinearColor::sRGBToLinearTable[bVar5];
          local_4d0._s_0.B = FLinearColor::sRGBToLinearTable[bVar4];
          local_4d0._s_0.A = 0.47058827;
          FPrimitiveSceneProxy::DrawArrowHead
                    (pFVar35,(TVector<double> *)&local_380._s_0,(TVector<double> *)&local_598._s_0,
                     __real_41a00000,(FLinearColor *)&local_4d0._s_0,'\0',fVar58,false);
          local_4c0._s_0.R =
               FLinearColor::sRGBToLinearTable[(uint)FColor::Blue.field0_0x0 >> 0x10 & 0xff];
          local_4c0._s_0.G =
               FLinearColor::sRGBToLinearTable[(uint)FColor::Blue.field0_0x0 >> 8 & 0xff];
          local_4c0._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FColor::Blue.field0_0x0 & 0xff];
          pAVar7 = this->NavTestActor;
          local_4c0._s_0.A = (float)((uint)FColor::Blue.field0_0x0 >> 0x18) * fVar26;
          local_138 = (pAVar7->QueryingExtent).field0_0x0._s_0.X;
          local_130 = (pAVar7->QueryingExtent).field0_0x0._s_0.Y;
          local_150._s_0.X = local_598._s_0.X - local_138;
          local_128 = (pAVar7->QueryingExtent).field0_0x0._s_0.Z;
          local_150._s_0.Y = local_598._s_0.Y - local_130;
          local_138 = local_598._s_0.X + local_138;
          local_120 = 1;
          local_130 = local_598._s_0.Y + local_130;
          local_150._s_0.Z = local_598._s_0.Z - local_128;
          local_128 = local_598._s_0.Z + local_128;
          DrawWireBox(pFVar35,(TBox<double> *)&local_150._s_0,(FLinearColor *)&local_4c0._s_0,'\0',
                      0.0,0.0,false);
          if ((((double)CONCAT44(uVar55,uVar54) != (this->ClosestWallLocation).field0_0x0._s_0.X) ||
              ((double)CONCAT44(uVar55,uVar54) != (this->ClosestWallLocation).field0_0x0._s_0.Y)) ||
             ((double)CONCAT44(uVar55,uVar54) != (this->ClosestWallLocation).field0_0x0._s_0.Z)) {
            bStack_5be = FVar25.field0_0x0._2_1_;
            local_4b0 = FLinearColor::sRGBToLinearTable[bStack_5be];
            bStack_5bf = FVar25.field0_0x0._1_1_;
            local_4ac = FLinearColor::sRGBToLinearTable[bStack_5bf];
            local_4a8 = FLinearColor::sRGBToLinearTable[(uint)FVar25.field0_0x0 & 0xff];
            local_4a4 = (float)((uint)FVar25.field0_0x0 >> 0x18) * fVar26;
            (**(code **)(pFVar35->_padding_ + 0x30))(pFVar35);
          }
          pAVar7 = this->NavTestActor;
          if (pAVar7->bDrawIfNavDataIsReadyInRadius != 0) {
            pFVar36 = &FColor::Red;
            if (pAVar7->bNavDataIsReadyInRadius != false) {
              pFVar36 = &FColor::Green;
            }
            local_4a0._s_0.R = FLinearColor::sRGBToLinearTable[(pFVar36->field0_0x0)._s_0.R];
            local_2e8._s_0.Z = (double)CONCAT44(uVar57,uVar56);
            local_2d0._s_0.Z = 0.0;
            local_4a0._s_0.G = FLinearColor::sRGBToLinearTable[(pFVar36->field0_0x0)._s_0.G];
            local_2b8._s_0.Z = 0.0;
            local_4a0._s_0.B = FLinearColor::sRGBToLinearTable[(pFVar36->field0_0x0)._s_0.B];
            local_2e8._0_16_ = ZEXT416(0);
            local_2d0._s_0.X = ___xmm_3ff00000000000000000000000000000;
            local_2d0._s_0.Y = _UNK_15061cbc8;
            local_2b8._s_0.X = ___xmm_00000000000000003ff0000000000000;
            local_2b8._s_0.Y = _UNK_150689518;
            local_4a0._s_0.A = (float)(pFVar36->field0_0x0)._s_0.A * fVar26;
            DrawWireCylinder(pFVar35,(TVector<double> *)&local_598._s_0,
                             (TVector<double> *)&local_2b8._s_0,(TVector<double> *)&local_2d0._s_0,
                             (TVector<double> *)&local_2e8._s_0,(FLinearColor *)&local_4a0._s_0,
                             (double)pAVar7->RadiusUsedToValidateNavData,__real_408f400000000000,
                             0x20,'\0',0.0,0.0,false);
          }
          uVar28 = local_598._s_0.Z;
          uVar27 = local_598._s_0.Y;
          uVar15 = local_598._s_0.X;
          pAVar7 = this->NavTestActor;
          if ((pAVar7->bDrawIfNavDataIsReadyToQueryTargetActor != 0) &&
             (TVar9 = (pAVar7->QueryTargetActor).field0_0x0, TVar9.DebugPtr != (AActor *)0x0)) {
            lVar42 = *(longlong *)((longlong)TVar9 + 0x1b8);
            dStack_410 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_418 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            if (lVar42 == 0) {
              local_290 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            }
            else {
              local_290 = *(double *)(lVar42 + 0x220);
              local_208 = *(undefined4 *)(lVar42 + 0x210);
              uStack_204 = *(undefined4 *)(lVar42 + 0x214);
              uStack_200 = *(undefined4 *)(lVar42 + 0x218);
              uStack_1fc = *(undefined4 *)(lVar42 + 0x21c);
              local_1f8 = local_290;
              uVar18 = *(double *)(lVar42 + 0x210);
              uVar19 = *(double *)(lVar42 + 0x218);
            }
            dVar17 = (double)uVar18 - local_598._s_0.X;
            dVar16 = local_290 - local_598._s_0.Z;
            dVar49 = (double)uVar19 - local_598._s_0.Y;
            fVar53 = (float)SQRT(dVar49 * dVar49 + dVar17 * dVar17 + dVar16 * dVar16);
            uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            if (__real_322bcc77 < fVar53) {
              dVar48 = (double)(__real_3f800000 / fVar53);
              dStack_410 = dVar49 * dVar48;
              local_418 = dVar17 * dVar48;
              uVar18 = dVar17 * dVar48;
              uVar19 = dVar49 * dVar48;
              uVar20 = dVar16 * dVar48;
            }
            local_408 = uVar20;
            UE::Math::TVector<double>::FindBestAxisVectors
                      ((TVector<double> *)&local_418,&local_1d8,&local_1f0);
            pFVar36 = &FColor::Red;
            if (pAVar7->bNavDataIsReadyToQueryTargetActor != false) {
              pFVar36 = &FColor::Green;
            }
            local_490._s_0.R = FLinearColor::sRGBToLinearTable[(pFVar36->field0_0x0)._s_0.R];
            local_490._s_0.G = FLinearColor::sRGBToLinearTable[(pFVar36->field0_0x0)._s_0.G];
            local_490._s_0.B = FLinearColor::sRGBToLinearTable[(pFVar36->field0_0x0)._s_0.B];
            dVar49 = (double)(fVar53 * __real_3f000000);
            local_490._s_0.A = (float)(pFVar36->field0_0x0)._s_0.A * fVar26;
            local_368._s_0.X = (double)uVar18 * dVar49 + (double)uVar15;
            local_368._s_0.Y = (double)uVar19 * dVar49 + (double)uVar27;
            local_368._s_0.Z = (double)uVar20 * dVar49 + (double)uVar28;
            DrawWireCapsule(pFVar35,(TVector<double> *)&local_368._s_0,&local_1d8,&local_1f0,
                            (TVector<double> *)&local_418,(FLinearColor *)&local_490._s_0,
                            (double)pAVar7->RadiusUsedToValidateNavData,
                            (double)(fVar53 * __real_3f000000 + pAVar7->RadiusUsedToValidateNavData)
                            ,0x20,'\0',0.0,0.0,false);
            uVar54 = (undefined4)__real_7fefffffffffffff;
            uVar55 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
            uVar56 = (undefined4)__real_3ff0000000000000;
            uVar57 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            fVar58 = __real_40200000;
          }
          pAVar7 = this->NavTestActor;
          if ((pAVar7->bDrawRaycastToQueryTargetActor != 0) &&
             (pAVar10 = (pAVar7->QueryTargetActor).field0_0x0.DebugPtr, pAVar10 != (AActor *)0x0)) {
            pUVar11 = (pAVar10->RootComponent).field0_0x0.DebugPtr;
            local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_280 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            if (pUVar11 != (USceneComponent *)0x0) {
              local_1b0 = (pUVar11->ComponentToWorld).Translation.ZW.m128d_f64[0];
              local_1c0 = (pUVar11->ComponentToWorld).Translation.XY.m128d_f64[0];
              dStack_1b8 = *(double *)((longlong)&(pUVar11->ComponentToWorld).Translation.XY + 8);
              local_278 = local_1b0;
              local_288 = local_1c0;
              dStack_280 = dStack_1b8;
            }
            if (pAVar7->bRaycastToQueryTargetActorResult == false) {
              pFVar36 = &FColor::Orange;
              if (pAVar7->bRaycastToQueryTargetEndsInCorridor != false) {
                pFVar36 = &FColor::Green;
              }
              FVar31.Bits._1_3_ = 0;
              FVar31._s_0.B = (pFVar36->field0_0x0)._s_0.B;
            }
            else {
              pFVar36 = &FColor::Red;
              FVar31 = FColor::Red.field0_0x0;
            }
            local_480 = FLinearColor::sRGBToLinearTable[(pFVar36->field0_0x0)._s_0.R];
            local_47c = FLinearColor::sRGBToLinearTable[(pFVar36->field0_0x0)._s_0.G];
            local_478 = FLinearColor::sRGBToLinearTable[FVar31.Bits & 0xff];
            local_474 = (float)(pFVar36->field0_0x0)._s_0.A * fVar26;
            (**(code **)(pFVar35->_padding_ + 0x30))(pFVar35,&local_598);
            pAVar7 = this->NavTestActor;
            if ((((double)CONCAT44(uVar55,uVar54) != (pAVar7->RaycastHitLocation).field0_0x0._s_0.X)
                || ((double)CONCAT44(uVar55,uVar54) !=
                    (pAVar7->RaycastHitLocation).field0_0x0._s_0.Y)) ||
               ((double)CONCAT44(uVar55,uVar54) != (pAVar7->RaycastHitLocation).field0_0x0._s_0.Z))
            {
              local_470._s_0.R =
                   FLinearColor::sRGBToLinearTable[(uint)FColor::Red.field0_0x0 >> 0x10 & 0xff];
              local_470._s_0.G =
                   FLinearColor::sRGBToLinearTable[(uint)FColor::Red.field0_0x0 >> 8 & 0xff];
              local_470._s_0.B =
                   FLinearColor::sRGBToLinearTable[(uint)FColor::Red.field0_0x0 & 0xff];
              local_470._s_0.A = (float)((uint)FColor::Red.field0_0x0 >> 0x18) * fVar26;
              DrawWireSphere(pFVar35,&pAVar7->RaycastHitLocation,(FLinearColor *)&local_470._s_0,
                             __real_4039000000000000,6,'\0',0.0,0.0,false);
            }
          }
          uVar51 = (undefined4)__real_4059000000000000;
          uVar52 = (undefined4)((ulonglong)__real_4059000000000000 >> 0x20);
          fVar53 = __real_40000000;
          fVar50 = __real_41c80000;
        }
        if (((this->bShowBestPath == 0) ||
            (*(int *)&(this->NodeDebug).Elements.field_0x8 ==
             *(int *)&(this->NodeDebug).Elements.field_0x34)) &&
           (uVar45 = 1, 1 < (this->PathPoints).ArrayNum)) {
          do {
            pcVar14 = *(code **)(pFVar35->_padding_ + 0x30);
            uVar32 = 0;
            if ((int)uVar45 < (this->PathPoints).ArrayNum) {
              uVar32 = ~uVar45 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            local_578 = (FMaterialRenderProxy *)(this->PathPoints).AllocatorInstance.Data;
            iVar44 = uVar45 - 1;
            uVar32 = 0;
            if (iVar44 < (this->PathPoints).ArrayNum) {
              uVar32 = -uVar45 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            (*pcVar14)(pFVar35,(this->PathPoints).AllocatorInstance.Data + (longlong)iVar44 * 0x18,
                       (longlong)&local_578->ImmutableSamplerState +
                       (longlong)(int)uVar45 * 0x18 + -0x60);
            uVar32 = 0;
            if (iVar44 < (this->PathPoints).ArrayNum) {
              uVar32 = -uVar45 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar12 = (this->PathPoints).AllocatorInstance.Data;
            uVar32 = 0;
            if ((int)uVar45 < (this->PathPoints).ArrayNum) {
              uVar32 = ~uVar45 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            FPrimitiveSceneProxy::DrawArrowHead
                      (pFVar35,(TVector<double> *)
                               ((this->PathPoints).AllocatorInstance.Data +
                               (longlong)(int)uVar45 * 0x18),
                       (TVector<double> *)(pFVar12 + (longlong)iVar44 * 0x18),fVar50,
                       &FLinearColor::Red,'\0',fVar53,false);
            uVar45 = uVar45 + 1;
          } while ((int)uVar45 < (this->PathPoints).ArrayNum);
        }
        if (this->bShowNodePool != 0) {
          pFVar47 = local_538;
          if ((this->ClosedSetIndices).ArrayNum != 0) {
            pFVar38 = (FMaterialRenderProxy *)
                      (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ +
                                  0x310))();
            paVar8 = &param_4->OneFrameResources->Next;
            aVar37 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                      )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
            *(undefined8 *)((longlong)aVar37 + 8) = 0;
            *(undefined ***)aVar37 =
                 &
                 ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
            ;
            TVar39.Next = *paVar8;
            do {
              *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                *)((longlong)aVar37 + 8) = TVar39.Next;
              LOCK();
              aVar40 = *paVar8;
              bVar29 = TVar39.Next == aVar40;
              if (bVar29) {
                *paVar8 = aVar37;
                aVar40 = TVar39.Next;
              }
              UNLOCK();
              TVar39.Next = aVar40;
            } while (!bVar29);
            FVar30 = FNameEntryId::FromValidEName((EName)local_3fc);
            uStack_53c = 0;
            local_540 = *(uint *)CONCAT44(extraout_var_00,FVar30.Value);
            FVar23.Number = 0;
            FVar23.ComparisonIndex.Value = local_540;
            local_460._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
            local_460._s_0.B = FLinearColor::sRGBToLinearTable[0];
            local_460._s_0.G = FLinearColor::sRGBToLinearTable[0xc4];
            local_460._s_0.A = 1.0;
            FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                      ((FColoredMaterialRenderProxy *)((longlong)aVar37 + 0x10),pFVar38,
                       (FLinearColor *)&local_460._s_0,FVar23);
            pFVar47 = local_538;
            FDynamicMeshBuilder::FDynamicMeshBuilder
                      (&local_270,local_538->FeatureLevel,1,0,false,
                       (FDynamicMeshBufferAllocator *)0x0);
            FDynamicMeshBuilder::AddVertices(&local_270,&this->ClosedSetVerts);
            FDynamicMeshBuilder::AddTriangles(&local_270,&this->ClosedSetIndices);
            EVar33 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                               ((FPrimitiveSceneProxy *)this,pFVar47);
            if (((EVar33 != (EVar33 & 0xff)) || ((int)EVar33 < 0)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IntFitsIn<OutType>(In)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                    ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld")
               , bVar29)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            FDynamicMeshBuilder::GetMesh
                      (&local_270,&UE::Math::TMatrix<double>::Identity,
                       (FMaterialRenderProxy *)((longlong)aVar37 + 0x10),(uchar)EVar33,false,false,
                       local_5b8,param_4);
            FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_270);
          }
          if ((this->OpenSetIndices).ArrayNum != 0) {
            pFVar38 = (FMaterialRenderProxy *)
                      (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ +
                                  0x310))();
            paVar8 = &param_4->OneFrameResources->Next;
            aVar37 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                      )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
            *(undefined8 *)((longlong)aVar37 + 8) = 0;
            *(undefined ***)aVar37 =
                 &
                 ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
            ;
            TVar39.Next = *paVar8;
            do {
              *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                *)((longlong)aVar37 + 8) = TVar39.Next;
              LOCK();
              aVar40 = *paVar8;
              bVar29 = TVar39.Next == aVar40;
              if (bVar29) {
                *paVar8 = aVar37;
                aVar40 = TVar39.Next;
              }
              UNLOCK();
              TVar39.Next = aVar40;
            } while (!bVar29);
            FVar30 = FNameEntryId::FromValidEName((EName)local_3f8);
            uStack_54c = 0;
            local_550 = *(uint *)CONCAT44(extraout_var_01,FVar30.Value);
            FVar21.Number = 0;
            FVar21.ComparisonIndex.Value = local_550;
            local_450._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
            local_450._s_0.B = FLinearColor::sRGBToLinearTable[0];
            local_450._s_0.G = FLinearColor::sRGBToLinearTable[0x80];
            local_450._s_0.A = 1.0;
            FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                      ((FColoredMaterialRenderProxy *)((longlong)aVar37 + 0x10),pFVar38,
                       (FLinearColor *)&local_450._s_0,FVar21);
            FDynamicMeshBuilder::FDynamicMeshBuilder
                      (&local_248,pFVar47->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0
                      );
            FDynamicMeshBuilder::AddVertices(&local_248,&this->OpenSetVerts);
            FDynamicMeshBuilder::AddTriangles(&local_248,&this->OpenSetIndices);
            EVar33 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                               ((FPrimitiveSceneProxy *)this,pFVar47);
            if (((EVar33 != (EVar33 & 0xff)) || ((int)EVar33 < 0)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IntFitsIn<OutType>(In)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                    ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld")
               , bVar29)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            FDynamicMeshBuilder::GetMesh
                      (&local_248,&UE::Math::TMatrix<double>::Identity,
                       (FMaterialRenderProxy *)((longlong)aVar37 + 0x10),(uchar)EVar33,false,false,
                       local_5b8,param_4);
            FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_248);
          }
        }
        local_3d8 = &this->NodeDebug;
        iStack_3d0 = 0;
        iVar44 = *(int *)&(this->NodeDebug).Elements.field_0x28;
        local_3c8 = &(this->NodeDebug).Elements.field_0x10;
        local_3b8 = 0;
        uStack_3cc = 1;
        iVar34 = 0;
        if (iVar44 != 0) {
          puVar13 = *(uint **)&(this->NodeDebug).Elements.field_0x20;
          puVar46 = (uint *)local_3c8;
          if (puVar13 != (uint *)0x0) {
            puVar46 = puVar13;
          }
          uVar45 = *puVar46;
          while (uVar45 == 0) {
            lVar42 = (longlong)iStack_3d0;
            local_3b8 = local_3b8 + 0x20;
            iStack_3d0 = iStack_3d0 + 1;
            iVar34 = iVar44;
            if ((int)(iVar44 + -1 + (iVar44 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3d0)
            goto LAB_146e04ed1;
            uVar45 = puVar46[lVar42 + 1];
          }
          uStack_3cc = -uVar45 & uVar45;
          uVar3 = (ulonglong)uStack_3cc * 2 + 1;
          lVar42 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar42 == 0; lVar42 = lVar42 + -1) {
            }
          }
          local_3f4 = (int)lVar42;
          iVar34 = local_3f4 + -1 + local_3b8;
          if (iVar44 < iVar34) {
            iVar34 = iVar44;
          }
        }
LAB_146e04ed1:
        uStack_3c0 = 0xffffffff;
        uStack_3b4 = local_18c;
        auStack_3a0._0_8_ = CONCAT44(uStack_3cc,iStack_3d0);
        uStack_390 = 0xffffffff;
        auStack_3a0._8_8_ = local_3c8;
        iStack_38c = iVar34;
        local_388._4_4_ = local_18c;
        local_388._0_4_ = local_3b8;
        pTVar43 = local_580;
        iStack_3bc = iVar34;
        local_3a8 = local_3d8;
        if (iVar34 < iVar44) {
          do {
            lVar42 = (longlong)iVar34 * 0x40 + *(longlong *)&local_3a8->Elements;
            FVar31 = FColor::Blue.field0_0x0;
            if ((this->bShowBestPath != 0) && ((*(byte *)(lVar42 + 0x34) & 2) != 0)) {
              FVar31 = FColor::Red.field0_0x0;
            }
            if (this->bShowDiff == 0) {
              bStack_5bd = FVar31._s_0.A;
            }
            else {
              bStack_5bd = 0x40;
              if ((*(byte *)(lVar42 + 0x34) & 4) != 0) {
                bStack_5bd = 0xff;
              }
            }
            lVar41 = lVar42;
            if (*(int *)(lVar42 + 0x30) != -1) {
              lVar41 = (longlong)*(int *)(lVar42 + 0x30) * 0x40 +
                       *(longlong *)&(this->NodeDebug).Elements;
            }
            local_350 = *(undefined8 *)(lVar41 + 8);
            uStack_348 = *(undefined8 *)(lVar41 + 0x10);
            local_340 = *(undefined8 *)(lVar41 + 0x18);
            local_5c0 = FVar31._s_0.B;
            bStack_5bf = FVar31._s_0.G;
            bStack_5be = FVar31._s_0.R;
            if ((this->bShowDiff == 0) || ((*(byte *)(lVar42 + 0x34) & 4) != 0)) {
              local_530 = FLinearColor::sRGBToLinearTable[bStack_5be];
              local_52c = FLinearColor::sRGBToLinearTable[bStack_5bf];
              local_528 = FLinearColor::sRGBToLinearTable[local_5c0];
              local_524 = (float)bStack_5bd * fVar26;
            }
            else {
              local_440 = FLinearColor::sRGBToLinearTable[bStack_5be];
              local_43c = FLinearColor::sRGBToLinearTable[bStack_5bf];
              local_438 = FLinearColor::sRGBToLinearTable[local_5c0];
              local_434 = (float)bStack_5bd * fVar26;
            }
            pdVar1 = (double *)(lVar42 + 8);
            (**(code **)(pFVar35->_padding_ + 0x30))(pFVar35,pdVar1);
            if ((*(byte *)(lVar42 + 0x34) & 8) != 0) {
              local_520._s_0.R = FLinearColor::sRGBToLinearTable[bStack_5be];
              local_e8 = 1;
              local_520._s_0.G = FLinearColor::sRGBToLinearTable[bStack_5bf];
              local_520._s_0.B = FLinearColor::sRGBToLinearTable[local_5c0];
              local_118._s_0.X = *pdVar1 - dVar24;
              local_100 = *pdVar1 + dVar24;
              local_520._s_0.A = (float)bStack_5bd * fVar26;
              local_118._s_0.Z = *(double *)(lVar42 + 0x18) - dVar24;
              local_f0 = *(double *)(lVar42 + 0x18) + dVar24;
              local_118._s_0.Y = *(double *)(lVar42 + 0x10) - dVar24;
              local_f8 = *(double *)(lVar42 + 0x10) + dVar24;
              DrawWireBox(pFVar35,(TBox<double> *)&local_118._s_0,(FLinearColor *)&local_520._s_0,
                          '\0',0.0,0.0,false);
            }
            if ((this->bShowDiff != 0) && ((*(byte *)(lVar42 + 0x34) & 4) != 0)) {
              local_338 = *pdVar1;
              local_330 = *(undefined8 *)(lVar42 + 0x10);
              local_510 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
              local_50c = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
              local_508 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
              local_504 = (float)FColor::Green.field0_0x0._3_1_ * fVar26;
              local_328 = *(double *)(lVar42 + 0x18) + (double)CONCAT44(uVar52,uVar51);
              local_310 = *(double *)(lVar42 + 0x18) + dVar24;
              local_320 = local_338;
              local_318 = local_330;
              (**(code **)(pFVar35->_padding_ + 0x30))(pFVar35,&local_320,&local_338,&local_510);
            }
            uStack_390 = uStack_390 & ~auStack_3a0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_3a0);
            pTVar43 = local_580;
            iVar34 = iStack_38c;
          } while (iStack_38c < *(int *)(auStack_3a0._8_8_ + 0x18));
        }
      }
      iVar44 = pTVar43->ArrayNum;
      local_5b8 = local_5b8 + 1;
      local_5b0 = local_5b0 << 1 | (uint)((int)local_5b0 < 0);
      local_570 = local_570 + 8;
    } while ((int)local_5b8 < iVar44);
  }
  return;
}

// GetMemoryFootprint @ 146e07b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FNavTestSceneProxy::GetMemoryFootprint(FNavTestSceneProxy *this)

{
  uint uVar1;
  
  uVar1 = GetAllocatedSizeInternal(this);
  return uVar1 + 0x490;
}

// GetTypeHash @ 146e139a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ulong64 __thiscall FNavTestSceneProxy::GetTypeHash(FNavTestSceneProxy *this)

{
  return 0x1551c0a38;
}

// GetViewRelevance @ 146e13cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNavTestSceneProxy::GetViewRelevance
          (FNavTestSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2 | 2;
  FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0x7f;
  return __return_storage_ptr__;
}

