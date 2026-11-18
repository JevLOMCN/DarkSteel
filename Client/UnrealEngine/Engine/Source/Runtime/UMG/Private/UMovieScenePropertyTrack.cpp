// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// GetCurrentValue<FWidgetTransform> @ 1468ed2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FWidgetTransform> * __thiscall
UMovieScenePropertyTrack::GetCurrentValue<FWidgetTransform>
          (UMovieScenePropertyTrack *this,TOptional<FWidgetTransform> *__return_storage_ptr__,
          UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  bool bVar11;
  FString *pFVar12;
  TOptional<FWidgetTransform> *pTVar13;
  FWidgetTransform *pFVar14;
  FResolvedPropertyAndFunction *pFVar15;
  undefined1 auStack_118 [32];
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  TVector2<double>_u_0 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  FResolvedPropertyAndFunction local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar12 = ::FName::ToString(&(this->PropertyBinding).PropertyPath,&local_98);
  local_f8 = (pFVar12->Data).AllocatorInstance.Data;
  iVar1 = (pFVar12->Data).ArrayNum;
  iStack_f0 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_f0 = 0;
  }
  if (param_1 == (UObject *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                        ,0x135,L"No object specified");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      pTVar13 = (TOptional<FWidgetTransform> *)(*pcVar2)();
      return pTVar13;
    }
  }
  local_a8._12_4_ = uStack_ec;
  local_a8.Size = iStack_f0;
  local_a8.DataPtr = (wchar_t *)local_f8;
  FTrackInstancePropertyBindings::FindPropertyAndFunction(&local_88,param_1,&local_a8);
  local_b8 = 0;
  local_e8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  pFVar15 = &local_88;
  if (local_88.ResolvedProperty.TypeIndex != 0) {
    pFVar15 = (FResolvedPropertyAndFunction *)0x0;
  }
  local_e4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  local_e0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  local_dc = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  local_c8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  local_c4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  local_c0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  local_bc = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  local_d8 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
  if (pFVar15 == (FResolvedPropertyAndFunction *)0x0) {
    pFVar15 = &local_88;
    if (local_88.ResolvedProperty.TypeIndex != 1) {
      pFVar15 = (FResolvedPropertyAndFunction *)0x0;
    }
    if (pFVar15 != (FResolvedPropertyAndFunction *)0x0) {
      pFVar14 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                          ((FVolatileProperty *)pFVar15,false);
      goto LAB_1468ed42a;
    }
  }
  else {
    pFVar14 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FWidgetTransform>
                        ((FCachedProperty *)pFVar15);
LAB_1468ed42a:
    if (pFVar14 != (FWidgetTransform *)0x0) {
      dVar3 = (pFVar14->Translation).field0_0x0._s_0.X;
      dVar4 = (pFVar14->Translation).field0_0x0._s_0.Y;
      fVar9 = pFVar14->Angle;
      uVar10 = *(undefined4 *)&pFVar14->field_0x34;
      dVar5 = (pFVar14->Scale).field0_0x0._s_0.X;
      dVar6 = (pFVar14->Scale).field0_0x0._s_0.Y;
      dVar7 = (pFVar14->Shear).field0_0x0._s_0.X;
      dVar8 = (pFVar14->Shear).field0_0x0._s_0.Y;
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->TypedValue).Translation.field0_0x0._s_0.X = dVar3;
      (__return_storage_ptr__->TypedValue).Translation.field0_0x0._s_0.Y = dVar4;
      (__return_storage_ptr__->TypedValue).Scale.field0_0x0._s_0.X = dVar5;
      (__return_storage_ptr__->TypedValue).Scale.field0_0x0._s_0.Y = dVar6;
      (__return_storage_ptr__->TypedValue).Shear.field0_0x0._s_0.X = dVar7;
      (__return_storage_ptr__->TypedValue).Shear.field0_0x0._s_0.Y = dVar8;
      (__return_storage_ptr__->TypedValue).Angle = fVar9;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x34 = uVar10;
      if (1 < local_88.ResolvedProperty.TypeIndex) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L"");
        if (bVar11) {
          pcVar2 = (code *)swi(3);
          pTVar13 = (TOptional<FWidgetTransform> *)(*pcVar2)();
          return pTVar13;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_88.ResolvedProperty.TypeIndex])(&local_88);
      goto LAB_1468ed4eb;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  if (1 < local_88.ResolvedProperty.TypeIndex) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                        ,0xd4,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      pTVar13 = (TOptional<FWidgetTransform> *)(*pcVar2)();
      return pTVar13;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_88.ResolvedProperty.TypeIndex])(&local_88);
LAB_1468ed4eb:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

