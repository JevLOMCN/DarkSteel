// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// CanBeOccluded @ 149696690

bool __thiscall
FGizmoRectangleComponentSceneProxy::CanBeOccluded(FGizmoRectangleComponentSceneProxy *this)

{
  return false;
}

// GetDynamicMeshElements @ 1496a1580

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
FGizmoRectangleComponentSceneProxy::GetDynamicMeshElements
          (FGizmoRectangleComponentSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  double *pdVar1;
  FSceneView *pFVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  FPrimitiveDrawInterface *pFVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float local_res8 [2];
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_res10;
  longlong local_c8;
  undefined1 *local_c0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b8;
  code *local_a8;
  undefined1 **local_a0;
  TVector<double>_u_0 local_98 [4];
  
  fVar5 = __real_3c360b61;
  dVar4 = __real_3ff0000000000000;
  iVar11 = param_1->ArrayNum;
  uVar13 = 0;
  local_98[0]._0_8_ =
       *(double *)&this->field_0x110 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * *(double *)&this->field_0x130 +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * *(double *)&this->field_0x150 +
       __real_3ff0000000000000 * *(double *)&this->field_0x170;
  local_98[0]._8_8_ =
       *(double *)&this->field_0x118 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * *(double *)&this->field_0x138 +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * *(double *)&this->field_0x158 +
       __real_3ff0000000000000 * *(double *)&this->field_0x178;
  local_98[0]._16_8_ =
       *(double *)&this->field_0x140 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
       *(double *)&this->field_0x120 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       *(double *)&this->field_0x160 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
       *(double *)&this->field_0x180 * __real_3ff0000000000000;
  if (0 < iVar11) {
    uVar12 = 1;
    local_c8 = 0;
    local_res10 = param_1;
    do {
      if ((param_3 & uVar12) != 0) {
        uVar8 = 0;
        if ((int)uVar13 < iVar11) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FSceneView **)((local_res10->AllocatorInstance).Data + local_c8);
        pFVar9 = FMeshElementCollector::GetPDI(param_4,uVar13);
        if (this->bExternalWorldLocalState == (bool *)0x0) {
          bVar7 = false;
        }
        else {
          bVar7 = *this->bExternalWorldLocalState;
        }
        local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.ArrayNum = 0;
        local_b8.ArrayMax = 0;
        if (this->bExternalIsViewDependent == (bool *)0x0) {
          bVar10 = false;
        }
        else {
          bVar10 = *this->bExternalIsViewDependent;
        }
        local_a0 = &local_c0;
        local_res8[0] = 1.0;
        local_a8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FGizmoRectangleComponentSceneProxy::GetDynamicMeshElements'::__l7::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                   ::Call;
        local_c0 = &this->field_0x110;
        bVar7 = GizmoRectangleComponentLocals::GetWorldCorners<FSceneView>
                          (bVar10,pFVar2,(TVector<double> *)&local_98[0]._s_0,&this->DirectionX,
                           &this->DirectionY,this->OffsetX,this->OffsetY,this->LengthX,this->LengthY
                           ,bVar7,this->bOrientYAccordingToCamera,
                           (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)&local_a8,&local_b8,local_res8);
        if (bVar7) {
          if ((this->bExternalHoverState == (bool *)0x0) || (*this->bExternalHoverState != true)) {
            fVar14 = this->Thickness;
          }
          else {
            fVar14 = this->HoverThicknessMultiplier * this->Thickness;
          }
          pdVar1 = (pFVar2->ViewMatrices).ProjectionMatrix.M[3] + 3;
          if (*pdVar1 <= dVar4 && dVar4 != *pdVar1) {
            fVar14 = fVar14 * pFVar2->FOV * fVar5;
          }
          if ((this->SegmentFlags & 1) != 0) {
            pcVar3 = *(code **)(pFVar9->_padding_ + 0x30);
            if (local_b8.ArrayNum < 2) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar6.Data = local_b8.AllocatorInstance.Data;
            if ((local_b8.ArrayNum < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (*pcVar3)(pFVar9,local_b8.AllocatorInstance.Data,FVar6.Data + 0x18,&this->Color,1,fVar14
                      ,0,1);
          }
          if ((this->SegmentFlags & 2) != 0) {
            pcVar3 = *(code **)(pFVar9->_padding_ + 0x30);
            if (local_b8.ArrayNum < 3) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar6.Data = local_b8.AllocatorInstance.Data;
            if ((local_b8.ArrayNum < 2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (*pcVar3)(pFVar9,local_b8.AllocatorInstance.Data + 0x18,FVar6.Data + 0x30,&this->Color,1
                      ,fVar14,0,1);
          }
          if ((this->SegmentFlags & 4) != 0) {
            pcVar3 = *(code **)(pFVar9->_padding_ + 0x30);
            if (local_b8.ArrayNum < 4) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar6.Data = local_b8.AllocatorInstance.Data;
            if ((local_b8.ArrayNum < 3) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (*pcVar3)(pFVar9,local_b8.AllocatorInstance.Data + 0x30,FVar6.Data + 0x48,&this->Color,1
                      ,fVar14,0,1);
          }
          if ((this->SegmentFlags & 8) != 0) {
            pcVar3 = *(code **)(pFVar9->_padding_ + 0x30);
            if (local_b8.ArrayNum < 1) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar6.Data = local_b8.AllocatorInstance.Data;
            if ((local_b8.ArrayNum < 4) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (*pcVar3)(pFVar9,local_b8.AllocatorInstance.Data + 0x48,FVar6.Data,&this->Color,1,fVar14
                      ,0,1);
          }
          param_1 = local_res10;
          if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
            param_1 = local_res10;
          }
        }
        else {
          param_1 = local_res10;
          if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
            param_1 = local_res10;
          }
        }
      }
      iVar11 = param_1->ArrayNum;
      local_c8 = local_c8 + 8;
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
    } while ((int)uVar13 < iVar11);
  }
  return;
}

// GetMemoryFootprint @ 1496a3810

uint __thiscall
FGizmoRectangleComponentSceneProxy::GetMemoryFootprint(FGizmoRectangleComponentSceneProxy *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (longlong)*(int *)&this->field_0x104 * 4 + 0x300;
  if (uVar1 != (uVar1 & 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uint)uVar1;
}

// GetTypeHash @ 1496a92a0

ulong64 __thiscall
FGizmoRectangleComponentSceneProxy::GetTypeHash(FGizmoRectangleComponentSceneProxy *this)

{
  return 0x155284818;
}

// GetViewRelevance @ 1496aaed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FGizmoRectangleComponentSceneProxy::GetViewRelevance
          (FGizmoRectangleComponentSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  puVar3 = &__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bDynamicRelevance = 1;
  __return_storage_ptr__->bShadowRelevance = 0;
  __return_storage_ptr__->bDrawRelevance = bVar4;
  bVar4 = FPrimitiveSceneProxy::UseEditorCompositing((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 8;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  return __return_storage_ptr__;
}

