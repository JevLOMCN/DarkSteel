// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// operator() @ 14d601cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
`UE::Cameras::FSplineOrbitCameraDebugBlock::RenderLocationOffsetSpline'::__l2::<lambda_1>::
operator()(void *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  longlong lVar1;
  double dVar2;
  TQuat<double> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_1f8 [32];
  TRotator<double> local_1d8;
  TVector<double>_u_0 local_1c0;
  TQuat<double> local_1a8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)this;
  local_1d8.Pitch = (double)param_1;
  local_1d8.Yaw = *(double *)(lVar1 + 0x28);
  local_1d8.Roll = 0.0;
  uVar4 = *(undefined4 *)(lVar1 + 0x60);
  uVar5 = *(undefined4 *)(lVar1 + 100);
  uVar6 = *(undefined4 *)(lVar1 + 0x68);
  uVar7 = *(undefined4 *)(lVar1 + 0x6c);
  dVar2 = *(double *)(lVar1 + 0x70);
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&local_1d8,&local_1a8);
  local_128.Rotation.XY.m128d_f64[0] = pTVar3->X;
  local_128.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar3->Y;
  local_128.Rotation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar3->Y + 4);
  local_128.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
  local_128.Rotation.ZW.m128d_f64[1] = pTVar3->W;
  local_128.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_128.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_128.Translation.ZW.m128d_f64[1] = 0.0;
  local_128.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_128.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_128.Translation.XY.m128d_f64[0]._0_4_ = uVar4;
  local_128.Translation.XY.m128d_f64[0]._4_4_ = uVar5;
  local_128.Translation.XY.m128d_f64[1]._0_4_ = uVar6;
  local_128.Translation.XY.m128d_f64[1]._4_4_ = uVar7;
  local_128.Translation.ZW.m128d_f64[0] = dVar2;
  FCameraVectorCurve::GetValue
            ((FCameraVectorCurve *)(*(longlong *)((longlong)this + 8) + 0x38),
             (TVector<double> *)&local_1c0._s_0,param_1);
  local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  uVar6 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar7 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8.Translation.XY.m128d_f64[0] = local_1c0._s_0.X;
  local_c8.Translation.XY.m128d_f64[1] = local_1c0._s_0.Y;
  local_c8.Translation.ZW.m128d_f64[0] = local_1c0._s_0.Z;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  uVar4 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar5 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar6;
  local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar7;
  local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar4;
  local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar5;
  local_188.Scale3D.XY.m128d_f64[1]._0_4_ = uVar6;
  local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_188.Scale3D.XY.m128d_f64[1]._4_4_ = uVar7;
  local_188.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar4;
  local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_188.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar5;
  local_c8.Rotation.XY.m128d_f64[0] = local_188.Rotation.XY.m128d_f64[0];
  local_c8.Rotation.XY.m128d_f64[1] = local_188.Rotation.XY.m128d_f64[1];
  local_c8.Rotation.ZW.m128d_f64[0] = local_188.Rotation.ZW.m128d_f64[0];
  local_c8.Rotation.ZW.m128d_f64[1] = local_188.Rotation.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_188,&local_c8,&local_128);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_188.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_188.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_188.Translation.ZW.m128d_f64[0];
  return __return_storage_ptr__;
}

// GetStaticFields @ 14d61e100

TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Cameras::FSplineOrbitCameraDebugBlock::GetStaticFields(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FSplineOrbitCameraDebugBlock::GetStaticFields(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FSplineOrbitCameraDebugBlock::GetStaticFields(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FSplineOrbitCameraDebugBlock::GetStaticFields(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Cameras::FSplineOrbitCameraDebugBlock::GetStaticFields'::__l2::
             _dynamic_atexit_destructor_for__StaticFields__);
      _Init_thread_footer(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FSplineOrbitCameraDebugBlock::GetStaticFields(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *)
         &`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FSplineOrbitCameraDebugBlock::GetStaticFields(void)'
          ::__l2::StaticFields;
}

// GetTypeID @ 14d61e730

FCameraObjectTypeID * __thiscall
UE::Cameras::FSplineOrbitCameraDebugBlock::GetTypeID(FSplineOrbitCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621590

bool __thiscall
UE::Cameras::FSplineOrbitCameraDebugBlock::IsKindOf
          (FSplineOrbitCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FSplineOrbitCameraDebugBlock>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
         FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d627050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineOrbitCameraDebugBlock::OnDebugDraw
          (FSplineOrbitCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  USplineOrbitCameraNode *pUVar1;
  FLinearColor_u_0 local_38;
  TVector<double>_u_0 local_28;
  
  FCameraDebugRenderer::AddText(param_2,L"yaw: %.3f pitch: %.3f");
  FCameraDebugRenderer::NewLine(param_2,false);
  FCameraDebugRenderer::AddIndent(param_2);
  ::FString::PrintfImpl((FString *)&local_38._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  FCameraDebugRenderer::AddText(param_2,L"location offset: %s\n");
  if ((void *)CONCAT44(local_38._s_0.G,local_38._s_0.R) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38._s_0.G,local_38._s_0.R));
  }
  ::FString::PrintfImpl((FString *)&local_38._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  FCameraDebugRenderer::AddText(param_2,L"target offset: %s\n");
  if ((void *)CONCAT44(local_38._s_0.G,local_38._s_0.R) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38._s_0.G,local_38._s_0.R));
  }
  ::FString::PrintfImpl((FString *)&local_38._s_0,L"P=%f Y=%f R=%f");
  FCameraDebugRenderer::AddText(param_2,L"rotation offset: %s\n");
  if ((void *)CONCAT44(local_38._s_0.G,local_38._s_0.R) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38._s_0.G,local_38._s_0.R));
  }
  FCameraDebugRenderer::RemoveIndent(param_2);
  if ((param_2->bIsExternalRendering != false) &&
     (pUVar1 = (USplineOrbitCameraNode *)FWeakObjectPtr::Get(&(this->WeakSplineOrbitNode).WeakPtr),
     pUVar1 != (USplineOrbitCameraNode *)0x0)) {
    RenderLocationOffsetSpline(this,pUVar1,param_2);
    RenderLocationOffsetOrbits(this,pUVar1,param_2);
    local_28._s_0.X = (this->PivotTransform).Translation.XY.m128d_f64[0];
    local_28._s_0.Y = (this->PivotTransform).Translation.XY.m128d_f64[1];
    local_38._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Brass.field0_0x0._s_0.R];
    local_38._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Brass.field0_0x0._s_0.G];
    local_38._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Brass.field0_0x0._s_0.B];
    local_38._s_0.A = (float)FColorList::Brass.field0_0x0._3_1_ * __real_3b808081;
    local_28._s_0.Z = (this->PivotTransform).Translation.ZW.m128d_f64[0];
    FCameraDebugRenderer::DrawSphere
              (param_2,(TVector<double> *)&local_28._s_0,__real_3f800000,8,
               (FLinearColor *)&local_38._s_0,__real_3f800000);
  }
  return;
}

// OnSerialize @ 14d62df20

void __thiscall
UE::Cameras::FSplineOrbitCameraDebugBlock::OnSerialize
          (FSplineOrbitCameraDebugBlock *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  
  pTVar3 = GetStaticFields();
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraDebugBlockField_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,this,param_1);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// RenderLocationOffsetOrbits @ 14d631a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineOrbitCameraDebugBlock::RenderLocationOffsetOrbits
          (FSplineOrbitCameraDebugBlock *this,USplineOrbitCameraNode *param_1,
          FCameraDebugRenderer *param_2)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar17;
  bool bVar18;
  uint uVar19;
  TQuat<double> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  ForElementType<float> FVar23;
  ForElementType<float> FVar24;
  FRichCurve *this_00;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStackY_518 [32];
  undefined1 local_4c8 [8];
  TIndexedContainerIterator<TArray<FRichCurveKey,TSizedDefaultAllocator<32>_>_const_,FRichCurveKey_const_,int>
  local_4c0;
  FLinearColor_u_0 local_4b0;
  TVector<double>_u_0 local_4a0;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_470;
  TRotator<double> local_458;
  TRotator<double> local_440 [3];
  TQuat<double> local_3f8;
  TQuat<double> local_3d8;
  ForElementType<float> local_3b8;
  uint local_330;
  uint local_32c;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  fVar15 = __real_c2b20000;
  fVar28 = __real_42b20000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  if (GGameplayCamerasSplineOrbitShowLocationOffsetOrbits) {
    lVar25 = 3;
    local_3b8.SecondaryData = (ForElementType<float>)0x0;
    local_330 = 0;
    local_32c = 0x20;
    this_00 = (param_1->LocationOffsetSpline).Curves;
    do {
      FRichCurve::GetKeyIterator(this_00,&local_4c0);
      for (; (uVar19 = local_330, pTVar16 = local_4c0.Container, dVar14 = _UNK_150689688,
             dVar13 = ___xmm_3ff00000000000003ff0000000000000, dVar12 = _UNK_150689518,
             dVar11 = ___xmm_00000000000000003ff0000000000000, fVar10 = __real_43b40000,
             fVar9 = __real_40000000, fVar1 = __real_3f800000, lVar22 = (longlong)local_4c0.Index,
             -1 < local_4c0.Index && (local_4c0.Index < (local_4c0.Container)->ArrayNum));
          local_4c0.Index = local_4c0.Index + 1) {
        uVar19 = 0;
        if (local_4c0.Index < (local_4c0.Container)->ArrayNum) {
          uVar19 = (uint)~local_4c0.Index >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar17 = local_4c0.Container;
        fVar1 = *(float *)((pTVar16->AllocatorInstance).Data + lVar22 * 0x1c + 4);
        if ((fVar15 <= fVar1) && (fVar1 <= fVar28)) {
          lVar22 = (longlong)local_4c0.Index;
          uVar19 = 0;
          if (local_4c0.Index < (local_4c0.Container)->ArrayNum) {
            uVar19 = (uint)~local_4c0.Index >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar23 = (ForElementType<float>)
                   ((longlong)(pTVar17->AllocatorInstance).Data + lVar22 * 0x1c + 4);
          FVar24 = (ForElementType<float>)&local_3b8;
          if (local_3b8.SecondaryData != (ForElementType<float>)0x0) {
            FVar24 = local_3b8.SecondaryData;
          }
          if ((ulonglong)FVar24 <= (ulonglong)FVar23) {
            FVar24 = (ForElementType<float>)&local_3b8;
            if (local_3b8.SecondaryData != (ForElementType<float>)0x0) {
              FVar24 = local_3b8.SecondaryData;
            }
            if (((ulonglong)FVar23 < (ulonglong)((longlong)FVar24 + (longlong)(int)local_32c * 4))
               && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar19 = local_330;
          if (local_330 == local_32c) {
            uVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                               (0x404,&local_3b8,(int *)&local_32c);
          }
          local_330 = uVar19 + 1;
          FVar24 = (ForElementType<float>)&local_3b8;
          if (local_3b8.SecondaryData != (ForElementType<float>)0x0) {
            FVar24 = local_3b8.SecondaryData;
          }
          *(float *)((longlong)FVar24 + (longlong)(int)uVar19 * 4) = *(float *)FVar23;
        }
      }
      this_00 = this_00 + 1;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    uVar21 = (ulonglong)(int)local_330;
    local_4b0._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Brass.field0_0x0._s_0.R];
    local_4b0._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Brass.field0_0x0._s_0.G];
    local_4b0._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Brass.field0_0x0._s_0.B];
    FVar24 = (ForElementType<float>)&local_3b8;
    if (local_3b8.SecondaryData != (ForElementType<float>)0x0) {
      FVar24 = local_3b8.SecondaryData;
    }
    FVar23 = (ForElementType<float>)((longlong)FVar24 + uVar21 * 4);
    local_4b0._s_0.A = (float)FColorList::Brass.field0_0x0._3_1_ * __real_3b808081;
    while( true ) {
      if ((uint)uVar21 != uVar19) {
        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_4c8);
      }
      if (FVar24 == FVar23) break;
      fVar28 = *(float *)FVar24;
      FCameraVectorCurve::GetValue
                (&param_1->LocationOffsetSpline,(TVector<double> *)&local_4a0._s_0,fVar28);
      dVar4 = (this->PivotTransform).Translation.ZW.m128d_f64[0];
      dVar3 = (double)fVar28;
      uVar5 = *(undefined4 *)(this->PivotTransform).Translation.XY.m128d_f64;
      uVar6 = *(undefined4 *)((longlong)(this->PivotTransform).Translation.XY.m128d_f64 + 4);
      uVar7 = *(undefined4 *)((this->PivotTransform).Translation.XY.m128d_f64 + 1);
      uVar8 = *(undefined4 *)((longlong)(this->PivotTransform).Translation.XY.m128d_f64 + 0xc);
      local_440[0].Yaw = 0.0;
      local_440[0].Roll = 0.0;
      local_440[0].Pitch = dVar3;
      pTVar20 = UE::Math::TRotator<double>::Quaternion(local_440,&local_3f8);
      local_268.Rotation.ZW.m128d_f64[0] = pTVar20->Z;
      local_268.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar20->W;
      local_268.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar20->W + 4);
      local_268.Rotation.XY.m128d_f64[0] = pTVar20->X;
      local_268.Rotation.XY.m128d_f64[1] = pTVar20->Y;
      local_268.Scale3D.XY.m128d_f64[0] = dVar13;
      local_268.Scale3D.XY.m128d_f64[1] = dVar14;
      local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_328.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_328.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_268.Translation.ZW.m128d_f64[1] = 0.0;
      local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_328.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_208.Translation.XY.m128d_f64[0]._0_4_ = local_4a0._0_4_;
      local_208.Translation.XY.m128d_f64[0]._4_4_ = local_4a0._4_4_;
      local_208.Translation.XY.m128d_f64[1]._0_4_ = local_4a0._8_4_;
      local_208.Translation.XY.m128d_f64[1]._4_4_ = local_4a0._12_4_;
      local_208.Translation.ZW.m128d_f64[0] = local_4a0._s_0.Z;
      local_208.Translation.ZW.m128d_f64[1] = 0.0;
      uVar26 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar27 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_328.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_328.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_268.Scale3D.ZW.m128d_f64[0] = dVar11;
      local_268.Scale3D.ZW.m128d_f64[1] = dVar12;
      local_208.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar26;
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar27;
      local_328.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar26;
      local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_328.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar27;
      local_268.Translation.XY.m128d_f64[0]._0_4_ = uVar5;
      local_268.Translation.XY.m128d_f64[0]._4_4_ = uVar6;
      local_268.Translation.XY.m128d_f64[1]._0_4_ = uVar7;
      local_268.Translation.XY.m128d_f64[1]._4_4_ = uVar8;
      local_268.Translation.ZW.m128d_f64[0] = dVar4;
      local_208.Rotation.XY.m128d_f64[0] = local_328.Rotation.XY.m128d_f64[0];
      local_208.Rotation.XY.m128d_f64[1] = local_328.Rotation.XY.m128d_f64[1];
      local_208.Rotation.ZW.m128d_f64[0] = local_328.Rotation.ZW.m128d_f64[0];
      local_208.Rotation.ZW.m128d_f64[1] = local_328.Rotation.ZW.m128d_f64[1];
      local_208.Scale3D.XY.m128d_f64[0] = local_328.Scale3D.XY.m128d_f64[0];
      local_208.Scale3D.XY.m128d_f64[1] = local_328.Scale3D.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply(&local_328,&local_208,&local_268);
      local_470._s_0.X = local_328.Translation.XY.m128d_f64[0];
      local_470._s_0.Y = local_328.Translation.XY.m128d_f64[1];
      local_470._s_0.Z = local_328.Translation.ZW.m128d_f64[0];
      fVar28 = fVar9;
      do {
        uVar5 = *(undefined4 *)(this->PivotTransform).Translation.XY.m128d_f64;
        uVar6 = *(undefined4 *)((longlong)(this->PivotTransform).Translation.XY.m128d_f64 + 4);
        uVar7 = *(undefined4 *)((this->PivotTransform).Translation.XY.m128d_f64 + 1);
        uVar8 = *(undefined4 *)((longlong)(this->PivotTransform).Translation.XY.m128d_f64 + 0xc);
        dVar4 = (this->PivotTransform).Translation.ZW.m128d_f64[0];
        local_458.Yaw = (double)fVar28;
        local_458.Roll = 0.0;
        local_458.Pitch = dVar3;
        pTVar20 = UE::Math::TRotator<double>::Quaternion(&local_458,&local_3d8);
        local_1a8.Rotation.ZW.m128d_f64[0] = pTVar20->Z;
        local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar20->W;
        local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar20->W + 4);
        local_1a8.Rotation.XY.m128d_f64[0] = pTVar20->X;
        local_1a8.Rotation.XY.m128d_f64[1] = pTVar20->Y;
        local_1a8.Scale3D.XY.m128d_f64[0] = dVar13;
        local_1a8.Scale3D.XY.m128d_f64[1] = dVar14;
        local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
        local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_148.Translation.XY.m128d_f64[0]._0_4_ = local_4a0._0_4_;
        local_148.Translation.XY.m128d_f64[0]._4_4_ = local_4a0._4_4_;
        local_148.Translation.XY.m128d_f64[1]._0_4_ = local_4a0._8_4_;
        local_148.Translation.XY.m128d_f64[1]._4_4_ = local_4a0._12_4_;
        local_148.Translation.ZW.m128d_f64[0] = local_4a0._s_0.Z;
        local_148.Translation.ZW.m128d_f64[1] = 0.0;
        uVar26 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        uVar27 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1a8.Scale3D.ZW.m128d_f64[0] = dVar11;
        local_1a8.Scale3D.ZW.m128d_f64[1] = dVar12;
        local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar26;
        local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar27;
        local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar26;
        local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar27;
        local_1a8.Translation.XY.m128d_f64[0]._0_4_ = uVar5;
        local_1a8.Translation.XY.m128d_f64[0]._4_4_ = uVar6;
        local_1a8.Translation.XY.m128d_f64[1]._0_4_ = uVar7;
        local_1a8.Translation.XY.m128d_f64[1]._4_4_ = uVar8;
        local_1a8.Translation.ZW.m128d_f64[0] = dVar4;
        local_148.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
        local_148.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
        local_148.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
        local_148.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
        local_148.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
        local_148.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
        UE::Math::TTransform<double>::Multiply(&local_2c8,&local_148,&local_1a8);
        local_488._s_0.Z = local_2c8.Translation.ZW.m128d_f64[0];
        local_488._s_0.X = local_2c8.Translation.XY.m128d_f64[0];
        local_488._s_0.Y = local_2c8.Translation.XY.m128d_f64[1];
        FCameraDebugRenderer::DrawLine
                  (param_2,(TVector<double> *)&local_470._s_0,(TVector<double> *)&local_488._s_0,
                   (FLinearColor *)&local_4b0._s_0,fVar1);
        local_470._s_0.X = local_488._s_0.X;
        local_470._s_0.Y = local_488._s_0.Y;
        local_470._s_0.Z = local_488._s_0.Z;
        fVar28 = fVar28 + fVar9;
      } while (fVar28 < fVar10);
      uVar21 = (ulonglong)local_330;
      FVar24 = (ForElementType<float>)((longlong)FVar24 + 4);
    }
    if (local_3b8.SecondaryData != (ForElementType<float>)0x0) {
      FMemory::Free((void *)local_3b8.SecondaryData);
    }
  }
  return;
}

// RenderLocationOffsetSpline @ 14d632150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineOrbitCameraDebugBlock::RenderLocationOffsetSpline
          (FSplineOrbitCameraDebugBlock *this,USplineOrbitCameraNode *param_1,
          FCameraDebugRenderer *param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  TQuat<double> *pTVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStackY_288 [32];
  TVector<double>_u_0 local_258;
  FLinearColor_u_0 local_240;
  TRotator<double> local_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  TQuat<double> local_1e8;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (GGameplayCamerasSplineOrbitShowLocationOffsetSpline) {
    local_240._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::OrangeRed.field0_0x0._s_0.R];
    local_240._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::OrangeRed.field0_0x0._s_0.G];
    local_240._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::OrangeRed.field0_0x0._s_0.B];
    local_240._s_0.A = (float)FColorList::OrangeRed.field0_0x0._3_1_ * __real_3b808081;
    local_258._s_0.X = (double)this;
    local_258._s_0.Y = (double)param_1;
    `UE::Cameras::FSplineOrbitCameraDebugBlock::RenderLocationOffsetSpline'::__l2::<lambda_1>::
    operator()(&local_258,(TVector<double> *)&local_200._s_0,__real_c2b20000);
    uVar12 = local_258._s_0.Y;
    uVar11 = local_258._s_0.X;
    fVar10 = __real_42b20000;
    dVar9 = _UNK_150689688;
    dVar8 = ___xmm_3ff00000000000003ff0000000000000;
    dVar7 = _UNK_150689518;
    dVar6 = ___xmm_00000000000000003ff0000000000000;
    fVar5 = __real_40000000;
    fVar4 = __real_3f800000;
    fVar16 = __real_c2ae0000;
    do {
      local_230.Yaw = (((TVector2<double> *)(uVar11 + 0x28))->field0_0x0)._s_0.X;
      local_230.Roll = 0.0;
      local_230.Pitch = (double)fVar16;
      uVar14 = *(undefined4 *)(((VectorRegister4Double *)(uVar11 + 0x60))->XY).m128d_f64;
      uVar15 = *(undefined4 *)(uVar11 + 100);
      uVar2 = *(undefined4 *)(uVar11 + 0x68);
      uVar3 = *(undefined4 *)(uVar11 + 0x6c);
      dVar1 = ((__m128d *)(uVar11 + 0x70))->m128d_f64[0];
      pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_230,&local_1e8);
      local_168.Rotation.ZW.m128d_f64[0] = pTVar13->Z;
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar13->W;
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar13->W + 4);
      local_168.Rotation.XY.m128d_f64[0] = pTVar13->X;
      local_168.Rotation.XY.m128d_f64[1] = pTVar13->Y;
      local_168.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Scale3D.XY.m128d_f64[0] = dVar8;
      local_168.Scale3D.XY.m128d_f64[1] = dVar9;
      local_168.Scale3D.ZW.m128d_f64[0] = dVar6;
      local_168.Scale3D.ZW.m128d_f64[1] = dVar7;
      local_1e8.Z = dVar1;
      local_168.Translation.XY.m128d_f64[0]._0_4_ = uVar14;
      local_168.Translation.XY.m128d_f64[0]._4_4_ = uVar15;
      local_168.Translation.XY.m128d_f64[1]._0_4_ = uVar2;
      local_168.Translation.XY.m128d_f64[1]._4_4_ = uVar3;
      local_168.Translation.ZW.m128d_f64[0] = dVar1;
      FCameraVectorCurve::GetValue
                ((FCameraVectorCurve *)(uVar12 + 0x38),(TVector<double> *)&local_218._s_0,fVar16);
      local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_108.Translation.XY.m128d_f64[0]._0_4_ = local_218._0_4_;
      local_108.Translation.XY.m128d_f64[0]._4_4_ = local_218._4_4_;
      local_108.Translation.XY.m128d_f64[1]._0_4_ = local_218._8_4_;
      local_108.Translation.XY.m128d_f64[1]._4_4_ = local_218._12_4_;
      local_108.Translation.ZW.m128d_f64[0] = local_218._s_0.Z;
      local_108.Translation.ZW.m128d_f64[1] = 0.0;
      uVar14 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar15 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar14;
      local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar15;
      local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar14;
      local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar15;
      local_108.Rotation.XY.m128d_f64[0] = local_1c8.Rotation.XY.m128d_f64[0];
      local_108.Rotation.XY.m128d_f64[1] = local_1c8.Rotation.XY.m128d_f64[1];
      local_108.Rotation.ZW.m128d_f64[0] = local_1c8.Rotation.ZW.m128d_f64[0];
      local_108.Rotation.ZW.m128d_f64[1] = local_1c8.Rotation.ZW.m128d_f64[1];
      local_108.Scale3D.XY.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
      local_108.Scale3D.XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply(&local_1c8,&local_108,&local_168);
      local_258._s_0.Z = local_1c8.Translation.ZW.m128d_f64[0];
      local_258._s_0.X = local_1c8.Translation.XY.m128d_f64[0];
      local_258._s_0.Y = local_1c8.Translation.XY.m128d_f64[1];
      FCameraDebugRenderer::DrawLine
                (param_2,(TVector<double> *)&local_200._s_0,(TVector<double> *)&local_258._s_0,
                 (FLinearColor *)&local_240._s_0,fVar4);
      local_200._s_0.X = local_258._s_0.X;
      local_200._s_0.Y = local_258._s_0.Y;
      local_200._s_0.Z = local_258._s_0.Z;
      fVar16 = fVar16 + fVar5;
    } while (fVar16 <= fVar10);
  }
  return;
}

