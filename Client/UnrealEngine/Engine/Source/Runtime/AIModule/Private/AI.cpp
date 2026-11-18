// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// operator() @ 146e82330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`UE::AI::GetActorClassDefaultComponents'::__l2::<lambda_1>::operator()
          (void *this,UActorComponent *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UActorComponent *local_18 [2];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_18[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(UActorComponent **)(pFVar2->Data + (longlong)iVar6 * 8) = local_18[0];
  return true;
}

// GetActorClassDefaultComponents @ 146e8d3e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::AI::GetActorClassDefaultComponents
          (TSubclassOf<AActor> *param_1,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_2,
          TSubclassOf<UActorComponent> *param_3)

{
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *local_res10;
  code *local_18;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> **local_10;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_10 = &local_res10;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::AI::GetActorClassDefaultComponents'::__l2::<lambda_1>,bool,UActorComponent_const_*>
             ::Call;
  local_res10 = param_2;
  AActor::ForEachComponentOfActorClassDefault
            (param_1,param_3,(TFunctionRef<bool___cdecl(UActorComponent_const_*)> *)&local_18);
  return;
}

// GetYawFromQuaternion @ 146e90210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<float> __cdecl UE::AI::GetYawFromQuaternion(TQuat<double> *param_1)

{
  TQuat<double> *in_RDX;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  local_48._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_48._s_0.Y = _UNK_150689518;
  local_48._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector(in_RDX,&local_28,(TVector<double> *)&local_48._s_0);
  GetYawFromVector((TVector<double> *)param_1);
  return (TOptional<float>)param_1;
}

// GetYawFromRotator @ 146e90260

TOptional<float> __cdecl UE::AI::GetYawFromRotator(TRotator<double> *param_1)

{
  TRotator<double> *in_RDX;
  TVector<double> local_28;
  
  UE::Math::TRotator<double>::Vector(in_RDX,&local_28);
  GetYawFromVector((TVector<double> *)param_1);
  return (TOptional<float>)param_1;
}

// GetYawFromVector @ 146e902a0

TOptional<float> __cdecl UE::AI::GetYawFromVector(TVector<double> *param_1)

{
  double *in_RDX;
  undefined4 uVar1;
  double dVar2;
  undefined4 uVar4;
  double dVar3;
  double dVar5;
  
  dVar5 = *in_RDX;
  dVar3 = in_RDX[1];
  dVar2 = dVar3 * dVar3 + dVar5 * dVar5;
  if (__real_3e45798ee0000000 < dVar2) {
    uVar1 = SUB84(__real_3ff0000000000000,0);
    uVar4 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar2 = __real_3ff0000000000000 / SQRT(dVar2);
    dVar5 = dVar5 * dVar2;
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
    if (dVar5 <= __real_bff0000000000000) {
      dVar5 = __real_bff0000000000000;
    }
    if (dVar3 * dVar2 < 0.0) {
      uVar1 = SUB84(__real_bff0000000000000,0);
      uVar4 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    dVar3 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar5) && (dVar3 = dVar5, __real_3ff0000000000000 <= dVar5)) {
      dVar3 = __real_3ff0000000000000;
    }
    dVar5 = acos(dVar3);
    *(undefined1 *)((longlong)&param_1->field0_0x0 + 4) = 1;
    *(float *)&param_1->field0_0x0 = (float)(dVar5 * (double)CONCAT44(uVar4,uVar1));
    return (TOptional<float>)param_1;
  }
  *(undefined1 *)((longlong)&param_1->field0_0x0 + 4) = 0;
  return (TOptional<float>)param_1;
}

// IntersectSegmentPoly2D @ 146fb8c10

bool __cdecl
UE::AI::IntersectSegmentPoly2D
          (TVector<double> *param_1,TVector<double> *param_2,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_3,double *param_4,double *param_5,
          int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  TVector<double> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double *pdVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  double *pdVar20;
  bool bVar21;
  double dVar22;
  longlong local_res10;
  
  pdVar13 = param_5;
  iVar5 = param_3->ArrayNum;
  *param_4 = 0.0;
  *param_5 = 1.0;
  *param_6 = -1;
  *param_7 = -1;
  dVar12 = __real_3f1a36e2e0000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  if (0 < iVar5) {
    local_res10 = 0;
    param_5 = (double *)0x0;
    uVar18 = (longlong)iVar5;
    pdVar20 = (double *)((longlong)(int)(iVar5 - 1U) * 0x18);
    uVar19 = iVar5 - 1U;
    uVar17 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar17 < (int)uVar18) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar15 = (*pcVar7)();
        return (bool)uVar15;
      }
      pTVar6 = param_3->DataPtr;
      uVar16 = 0;
      if ((int)uVar19 < param_3->ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar15 = (*pcVar7)();
        return (bool)uVar15;
      }
      uVar18 = (ulonglong)(uint)param_3->ArrayNum;
      dVar9 = *(double *)((longlong)param_5 + (longlong)pTVar6) -
              *(double *)((longlong)pdVar20 + (longlong)param_3->DataPtr);
      dVar8 = *(double *)((longlong)param_5 + (longlong)((longlong)&pTVar6->field0_0x0 + 8)) -
              *(double *)
               ((longlong)pdVar20 + (longlong)((longlong)&param_3->DataPtr->field0_0x0 + 8));
      uVar16 = 0;
      if ((int)uVar19 < param_3->ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar15 = (*pcVar7)();
        return (bool)uVar15;
      }
      if (dVar12 <= dVar9 * dVar9 + dVar8 * dVar8) {
        dVar22 = ((param_1->field0_0x0)._s_0.Y -
                 *(double *)
                  ((longlong)pdVar20 + (longlong)((longlong)&param_3->DataPtr->field0_0x0 + 8))) *
                 dVar9 - ((param_1->field0_0x0)._s_0.X -
                         *(double *)((longlong)pdVar20 + (longlong)param_3->DataPtr)) * dVar8;
        dVar8 = dVar8 * (dVar1 - dVar3) - dVar9 * (dVar2 - dVar4);
        if (dVar12 <= (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar11,
                                       SUB84(dVar8,0) & uVar10)) {
          dVar22 = dVar22 / dVar8;
          if (dVar8 <= 0.0) {
            if (dVar22 < *pdVar13) {
              *pdVar13 = dVar22;
              *param_7 = uVar19;
              bVar14 = *param_4 == *pdVar13;
              bVar21 = *param_4 < *pdVar13;
              goto LAB_146fb8efe;
            }
          }
          else if (*param_4 <= dVar22 && dVar22 != *param_4) {
            *param_4 = dVar22;
            *param_6 = uVar19;
            if (*pdVar13 < *param_4) {
              return false;
            }
          }
        }
        else {
          bVar14 = dVar22 == 0.0;
          bVar21 = dVar22 < 0.0;
LAB_146fb8efe:
          if (!bVar21 && !bVar14) {
            return false;
          }
        }
      }
      local_res10 = local_res10 + 1;
      pdVar20 = param_5;
      uVar19 = uVar17;
      uVar17 = uVar17 + 1;
      param_5 = param_5 + 3;
    } while (local_res10 < iVar5);
  }
  return true;
}

// InvBilinear2D @ 146fb8f80

TVector2<double> * __cdecl
UE::AI::InvBilinear2D
          (TVector2<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar12 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar14 = (param_1->field0_0x0)._s_0.X - dVar1;
  dVar16 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar7 = (param_1->field0_0x0)._s_0.Y - dVar12;
  dVar2 = (param_5->field0_0x0)._s_0.X;
  dVar3 = (param_5->field0_0x0)._s_0.Y;
  dVar5 = dVar2 - dVar1;
  dVar13 = (param_5->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar6 = dVar3 - dVar12;
  dVar15 = (param_3->field0_0x0)._s_0.X - dVar1;
  dVar8 = (param_3->field0_0x0)._s_0.Y - dVar12;
  dVar3 = ((dVar12 - (param_3->field0_0x0)._s_0.Y) + (param_4->field0_0x0)._s_0.Y) - dVar3;
  dVar2 = ((dVar1 - (param_3->field0_0x0)._s_0.X) + (param_4->field0_0x0)._s_0.X) - dVar2;
  dVar12 = dVar8 * dVar8 + dVar15 * dVar15 + dVar16 * dVar16;
  if (dVar12 <= __real_3ff0000000000000) {
    dVar12 = __real_3ff0000000000000;
  }
  dVar1 = dVar6 * dVar6 + dVar5 * dVar5 + dVar13 * dVar13;
  if (dVar12 <= dVar1) {
    dVar12 = dVar1;
  }
  dVar12 = __real_3ff0000000000000 / dVar12;
  dVar1 = (dVar2 * dVar6 - dVar3 * dVar5) * dVar12;
  dVar16 = ((dVar14 * dVar3 - dVar7 * dVar2) + (dVar6 * dVar15 - dVar5 * dVar8)) * dVar12;
  dVar12 = (dVar14 * dVar8 - dVar7 * dVar15) * dVar12;
  dVar13 = 0.0;
  uVar10 = (uint)((ulonglong)dVar16 >> 0x20);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000) {
    if (__real_3f1a36e2e0000000 <
        (double)CONCAT44(uVar10 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar12 = dVar12 / dVar16;
      dVar13 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
  }
  else {
    auVar9._0_8_ = dVar1 * __real_4010000000000000 * dVar12;
    auVar9._8_8_ = 0;
    dVar12 = dVar16 * dVar16 - auVar9._0_8_;
    if (dVar12 < 0.0) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = -1.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = -1.0;
      return __return_storage_ptr__;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar12;
    auVar9 = sqrtpd(auVar9,auVar4);
    dVar13 = ((double)CONCAT44(uVar10 ^ __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar16,0) ^ (uint)__xmm_80000000000000008000000000000000) -
             auVar9._0_8_) * (__real_3fe0000000000000 / dVar1);
  }
  dVar15 = dVar2 * dVar13 + dVar15;
  dVar8 = dVar3 * dVar13 + dVar8;
  uVar10 = SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar11 = (uint)((ulonglong)dVar15 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar12 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((double)CONCAT44(uVar11,uVar10) < dVar12 || (double)CONCAT44(uVar11,uVar10) == dVar12) {
    dVar15 = (dVar7 - dVar6 * dVar13) / dVar8;
  }
  else {
    dVar15 = (dVar14 - dVar5 * dVar13) / dVar15;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
  return __return_storage_ptr__;
}

