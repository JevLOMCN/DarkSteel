// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// CanBeOccluded @ 14964cfd0

bool __thiscall FGizmoArrowComponentSceneProxy::CanBeOccluded(FGizmoArrowComponentSceneProxy *this)

{
  return false;
}

// GetDynamicMeshElements @ 149652d60

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
FGizmoArrowComponentSceneProxy::GetDynamicMeshElements
          (FGizmoArrowComponentSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  double *pdVar1;
  FSceneView *pFVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  FPrimitiveDrawInterface *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float local_res8 [2];
  longlong *local_res10;
  code *local_c8;
  longlong **local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double> local_a0;
  TVector<double> local_88 [3];
  
  fVar5 = __real_3c360b61;
  dVar4 = __real_3ff0000000000000;
  iVar10 = param_1->ArrayNum;
  uVar12 = 0;
  local_b8._s_0.X =
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * (double)this->_padding_ +
       (double)this->_padding_ * __real_3ff0000000000000;
  local_b8._s_0.Y =
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * (double)this->_padding_ +
       (double)this->_padding_ * __real_3ff0000000000000;
  local_b8._s_0.Z =
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
       (double)this->_padding_ * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
       (double)this->_padding_ * __real_3ff0000000000000;
  if (0 < iVar10) {
    uVar11 = 1;
    lVar13 = 0;
    do {
      if ((param_3 & uVar11) != 0) {
        uVar7 = 0;
        if ((int)uVar12 < iVar10) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FSceneView **)((param_1->AllocatorInstance).Data + lVar13);
        pFVar8 = FMeshElementCollector::GetPDI(param_4,uVar12);
        if (this->bExternalWorldLocalState == (bool *)0x0) {
          bVar6 = false;
        }
        else {
          bVar6 = *this->bExternalWorldLocalState;
        }
        local_res8[0] = 0.0;
        if (this->bExternalIsViewDependent == (bool *)0x0) {
          bVar9 = false;
        }
        else {
          bVar9 = *this->bExternalIsViewDependent;
        }
        local_res10 = &this->_padding_;
        local_c0 = &local_res10;
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FGizmoArrowComponentSceneProxy::GetDynamicMeshElements'::__l7::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                   ::Call;
        bVar6 = GizmoArrowComponentLocals::GetWorldEndpoints<FSceneView>
                          (bVar9,pFVar2,(TVector<double> *)&local_b8._s_0,&this->Direction,this->Gap
                           ,this->Length,bVar6,
                           (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)&local_c8,local_88,&local_a0,local_res8);
        if (bVar6) {
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
          (**(code **)(pFVar8->_padding_ + 0x30))
                    (pFVar8,local_88,&local_a0,&this->Color,1,fVar14,0,1);
        }
      }
      iVar10 = param_1->ArrayNum;
      uVar12 = uVar12 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      lVar13 = lVar13 + 8;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

// GetMemoryFootprint @ 1496550c0

uint __thiscall
FGizmoArrowComponentSceneProxy::GetMemoryFootprint(FGizmoArrowComponentSceneProxy *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (longlong)*(int *)((longlong)&this->_padding_ + 4) * 4 + 0x2d0;
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

// GetTypeHash @ 149658b30

ulong64 __thiscall FGizmoArrowComponentSceneProxy::GetTypeHash(FGizmoArrowComponentSceneProxy *this)

{
  return 0x155283870;
}

// GetViewRelevance @ 149658bd0

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
FGizmoArrowComponentSceneProxy::GetViewRelevance
          (FGizmoArrowComponentSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
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

