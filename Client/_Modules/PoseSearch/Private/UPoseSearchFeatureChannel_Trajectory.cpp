// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 12

// StaticClass @ 14a8d7010

UClass * __cdecl UPoseSearchFeatureChannel_Trajectory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Trajectory",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Trajectory,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Trajectory>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Trajectory>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton;
}

// UPoseSearchFeatureChannel_Trajectory @ 14a8e2570

UPoseSearchFeatureChannel_Trajectory * __thiscall
UPoseSearchFeatureChannel_Trajectory::UPoseSearchFeatureChannel_Trajectory
          (UPoseSearchFeatureChannel_Trajectory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)UE::PoseSearch::DefaultRole;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  (this->SubChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubChannels).ArrayNum = 0;
  (this->SubChannels).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  return this;
}

// UPoseSearchFeatureChannel_Trajectory @ 14a8e25e0

UPoseSearchFeatureChannel_Trajectory * __thiscall
UPoseSearchFeatureChannel_Trajectory::UPoseSearchFeatureChannel_Trajectory
          (UPoseSearchFeatureChannel_Trajectory *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FObjectInitializer *pFVar5;
  UPoseSearchFeatureChannel_Trajectory *pUVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  pFVar5 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar5);
  this->_padding_ = (longlong)UE::PoseSearch::DefaultRole;
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  (this->SubChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubChannels).ArrayNum = 0;
  (this->SubChannels).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&(this->Samples).AllocatorInstance,&(this->Samples).ArrayMax);
  (this->Samples).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->Samples).AllocatorInstance.Data + (longlong)iVar4 * 8) = 0x20becccccd;
  local_38 = 0x9000000000;
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)(this->Samples).ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPoseSearchFeatureChannel_Trajectory *)(*pcVar2)();
      return pUVar6;
    }
  }
  iVar4 = (this->Samples).ArrayNum;
  if (iVar4 == (this->Samples).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->Samples).AllocatorInstance,&(this->Samples).ArrayMax);
  }
  (this->Samples).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->Samples).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_38;
  local_30 = 0xa03eb33333;
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_30) &&
     ((FScriptContainerElement *)&local_30 < pFVar1 + (longlong)(this->Samples).ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPoseSearchFeatureChannel_Trajectory *)(*pcVar2)();
      return pUVar6;
    }
  }
  iVar4 = (this->Samples).ArrayNum;
  if (iVar4 == (this->Samples).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->Samples).AllocatorInstance,&(this->Samples).ArrayMax);
    (this->Samples).ArrayNum = iVar4;
  }
  (this->Samples).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->Samples).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_30;
  local_28[0] = 0xb03f333333;
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)(this->Samples).ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPoseSearchFeatureChannel_Trajectory *)(*pcVar2)();
      return pUVar6;
    }
  }
  iVar4 = (this->Samples).ArrayNum;
  if (iVar4 == (this->Samples).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->Samples).AllocatorInstance,&(this->Samples).ArrayMax);
  }
  (this->Samples).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->Samples).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_28[0];
  return this;
}

// ~UPoseSearchFeatureChannel_Trajectory @ 14a8e3020

void __thiscall
UPoseSearchFeatureChannel_Trajectory::~UPoseSearchFeatureChannel_Trajectory
          (UPoseSearchFeatureChannel_Trajectory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  pFVar1 = (this->SubChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DebugDraw @ 14a8f1d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPoseSearchFeatureChannel_Trajectory::DebugDraw
          (UPoseSearchFeatureChannel_Trajectory *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  TVector<double> *pTVar1;
  float fVar2;
  UPoseSearchFeatureChannel_Position *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  ForElementType<UPoseSearchFeatureChannel_Position_const_*> FVar13;
  ForElementType<UE::Math::TVector<double>_> FVar14;
  ForElementType<FColor> FVar15;
  longlong lVar16;
  ForElementType<UE::Math::TVector<double>_> FVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  float fVar22;
  undefined1 auStackY_678 [32];
  undefined4 local_628;
  FIdentityFunctor local_624 [4];
  UPoseSearchFeatureChannel_Position *local_620;
  undefined4 local_618;
  ForElementType<FColor> local_610;
  int iStack_608;
  undefined4 uStack_604;
  longlong *local_600;
  int local_5f8;
  ForElementType<UE::Math::TVector<double>_> local_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  longlong *local_5d8;
  int local_5d0;
  TArrayView<float_const_,int> local_5c8;
  TArrayView<float_const_,int> local_5b8;
  TArrayView<FColor_const_,int> local_5a8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_598;
  undefined4 local_588;
  undefined4 uStack_584;
  int iStack_580;
  undefined4 uStack_57c;
  undefined4 local_56c;
  TVector<double> local_568;
  TVector<double> local_550;
  ForElementType<FColor> local_538;
  int local_4b0;
  int local_4ac;
  ForElementType<UPoseSearchFeatureChannel_Position_const_*> local_4a8;
  int local_3a0;
  int local_39c;
  ForElementType<UE::Math::TVector<double>_> local_398;
  int local_90;
  int local_8c;
  ulonglong local_88;
  ulonglong uVar21;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_678;
  bVar9 = UE::PoseSearch::FDebugDrawParams::IsAnyWeightRelevant
                    (param_1,(UPoseSearchFeatureChannel *)this);
  if (bVar9) {
    uVar19 = 0;
    local_4a8.SecondaryData = (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0;
    local_3a0 = 0;
    local_39c = 0x20;
    (**(code **)(this->_padding_ + 0x2c0))(this,&local_600);
    for (plVar18 = local_600; plVar18 != local_600 + local_5f8; plVar18 = plVar18 + 1) {
      pUVar3 = (UPoseSearchFeatureChannel_Position *)*plVar18;
      if (pUVar3 == (UPoseSearchFeatureChannel_Position *)0x0) {
LAB_14a8f1f28:
        local_620 = (UPoseSearchFeatureChannel_Position *)0x0;
      }
      else {
        pUVar12 = UPoseSearchFeatureChannel_Position::StaticClass();
        iVar11 = (int)pUVar12->_padding_;
        if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar12->_padding_)) goto LAB_14a8f1f28;
        FVar13 = (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)&local_4a8;
        if (local_4a8.SecondaryData !=
            (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0) {
          FVar13 = local_4a8.SecondaryData;
        }
        local_620 = pUVar3;
        if ((ulonglong)FVar13 <= &local_620) {
          FVar13 = (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)&local_4a8;
          if (local_4a8.SecondaryData !=
              (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0) {
            FVar13 = local_4a8.SecondaryData;
          }
          if ((&local_620 <
               (UPoseSearchFeatureChannel_Position **)((longlong)FVar13 + (longlong)local_39c * 8))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (local_3a0 == local_39c) {
          local_3a0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UPoseSearchFeatureChannel_Position_const_*>_>
                                (0x808,&local_4a8,&local_39c);
        }
        lVar16 = (longlong)local_3a0;
        FVar13 = (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)&local_4a8;
        if (local_4a8.SecondaryData !=
            (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0) {
          FVar13 = local_4a8.SecondaryData;
        }
        local_3a0 = local_3a0 + 1;
        *(UPoseSearchFeatureChannel_Position **)((longlong)FVar13 + lVar16 * 8) = local_620;
      }
    }
    if (local_3a0 != 0) {
      FVar13 = (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)&local_4a8;
      if (local_4a8.SecondaryData != (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0
         ) {
        FVar13 = local_4a8.SecondaryData;
      }
      AlgoImpl::
      IntroSortInternal<UPoseSearchFeatureChannel_Position_const_*,int,FIdentityFunctor,TDereferenceWrapper<UPoseSearchFeatureChannel_Position_const_*,_UPoseSearchFeatureChannel_Trajectory::DebugDraw_::__l15::<lambda_1>_>_>
                ((UPoseSearchFeatureChannel_Position **)FVar13,local_3a0,local_624[0],
                 (<lambda_1> *)local_624);
      fVar7 = __real_38d1b717;
      local_398.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
      local_90 = 0;
      local_8c = 0x20;
      local_538.SecondaryData = (ForElementType<FColor>)0x0;
      local_4b0 = 0;
      local_4ac = 0x20;
      uVar21 = uVar19;
      fVar22 = __real_c47a0000;
      if (0 < local_3a0) {
        do {
          uVar20 = (uint)uVar21;
          uVar10 = 0;
          if ((int)uVar20 < local_3a0) {
            uVar10 = ~uVar20 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar13 = (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)&local_4a8;
          if (local_4a8.SecondaryData !=
              (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0) {
            FVar13 = local_4a8.SecondaryData;
          }
          fVar2 = *(float *)(*(longlong *)((longlong)FVar13 + uVar19) + 0x78);
          FLinearColor::ToFColorSRGB(&FLinearColor::Blue);
          local_628 = local_618;
          if ((local_3a0 == 1) || (fVar2 * fVar22 < fVar7)) {
            uVar10 = 0;
            if ((int)uVar20 < local_3a0) {
              uVar10 = ~uVar20 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_5c8.DataPtr = param_2->DataPtr;
            local_5c8.ArrayNum = param_2->ArrayNum;
            local_5c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
            FVar13 = (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)&local_4a8;
            if (local_4a8.SecondaryData !=
                (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0) {
              FVar13 = local_4a8.SecondaryData;
            }
            FVar14 = (ForElementType<UE::Math::TVector<double>_>)
                     UE::PoseSearch::FDebugDrawParams::ExtractPosition
                               (param_1,&local_568,&local_5c8,0.0,'\0',
                                (FName *)(*(longlong *)((longlong)FVar13 + uVar19) + 0x6c),
                                UseSampleTime,-1,0.0);
            FVar17 = (ForElementType<UE::Math::TVector<double>_>)&local_398;
            if (local_398.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
              FVar17 = local_398.SecondaryData;
            }
            if ((ulonglong)FVar17 <= (ulonglong)FVar14) {
              FVar17 = (ForElementType<UE::Math::TVector<double>_>)&local_398;
              if (local_398.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
                FVar17 = local_398.SecondaryData;
              }
              if (((ulonglong)FVar14 < (ulonglong)((longlong)FVar17 + (longlong)local_8c * 0x18)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar11 = local_90;
            if (local_90 == local_8c) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                                 (0x818,&local_398,&local_8c);
            }
            local_90 = iVar11 + 1;
            dVar6 = *(double *)((longlong)FVar14 + 8);
            FVar17 = (ForElementType<UE::Math::TVector<double>_>)&local_398;
            if (local_398.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
              FVar17 = local_398.SecondaryData;
            }
            pTVar1 = (TVector<double> *)((longlong)FVar17 + (longlong)iVar11 * 0x18);
            (pTVar1->field0_0x0).XYZ[0] = *(double *)FVar14;
            (pTVar1->field0_0x0)._s_0.Y = dVar6;
            *(undefined8 *)((uchar *)((longlong)FVar17 + 0x10) + (longlong)iVar11 * 0x18) =
                 *(undefined8 *)((longlong)FVar14 + 0x10);
            FVar15 = (ForElementType<FColor>)&local_538;
            if (local_538.SecondaryData != (ForElementType<FColor>)0x0) {
              FVar15 = local_538.SecondaryData;
            }
            if ((ulonglong)FVar15 <= &local_628) {
              FVar15 = (ForElementType<FColor>)&local_538;
              if (local_538.SecondaryData != (ForElementType<FColor>)0x0) {
                FVar15 = local_538.SecondaryData;
              }
              if ((&local_628 < (undefined4 *)((longlong)FVar15 + (longlong)local_4ac * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (local_4b0 == local_4ac) {
              local_4b0 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FColor>_>
                                    (0x404,&local_538,&local_4ac);
            }
            FVar15 = (ForElementType<FColor>)&local_538;
            if (local_538.SecondaryData != (ForElementType<FColor>)0x0) {
              FVar15 = local_538.SecondaryData;
            }
            lVar16 = (longlong)local_4b0;
            local_4b0 = local_4b0 + 1;
            *(undefined4 *)((longlong)FVar15 + lVar16 * 4) = local_628;
          }
          uVar10 = 0;
          if ((int)uVar20 < local_3a0) {
            uVar10 = ~uVar20 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_5b8.DataPtr = param_2->DataPtr;
          local_5b8.ArrayNum = param_2->ArrayNum;
          local_5b8._12_4_ = *(undefined4 *)&param_2->field_0xc;
          FVar13 = (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)&local_4a8;
          if (local_4a8.SecondaryData !=
              (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0) {
            FVar13 = local_4a8.SecondaryData;
          }
          FVar14 = (ForElementType<UE::Math::TVector<double>_>)
                   UE::PoseSearch::FDebugDrawParams::ExtractPosition
                             (param_1,&local_550,&local_5b8,fVar2,'\0',
                              (FName *)(*(longlong *)((longlong)FVar13 + uVar19) + 0x6c),
                              UseSampleTime,-1,0.0);
          FVar17 = (ForElementType<UE::Math::TVector<double>_>)&local_398;
          if (local_398.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
            FVar17 = local_398.SecondaryData;
          }
          if ((ulonglong)FVar17 <= (ulonglong)FVar14) {
            FVar17 = (ForElementType<UE::Math::TVector<double>_>)&local_398;
            if (local_398.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
              FVar17 = local_398.SecondaryData;
            }
            if (((ulonglong)FVar14 < (ulonglong)((longlong)FVar17 + (longlong)local_8c * 0x18)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar11 = local_90;
          if (local_90 == local_8c) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                               (0x818,&local_398,&local_8c);
          }
          local_90 = iVar11 + 1;
          dVar6 = *(double *)((longlong)FVar14 + 8);
          FVar17 = (ForElementType<UE::Math::TVector<double>_>)&local_398;
          if (local_398.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
            FVar17 = local_398.SecondaryData;
          }
          pTVar1 = (TVector<double> *)((longlong)FVar17 + (longlong)iVar11 * 0x18);
          (pTVar1->field0_0x0).XYZ[0] = *(double *)FVar14;
          (pTVar1->field0_0x0)._s_0.Y = dVar6;
          *(undefined8 *)((uchar *)((longlong)FVar17 + 0x10) + (longlong)iVar11 * 0x18) =
               *(undefined8 *)((longlong)FVar14 + 0x10);
          FVar15 = (ForElementType<FColor>)&local_538;
          if (local_538.SecondaryData != (ForElementType<FColor>)0x0) {
            FVar15 = local_538.SecondaryData;
          }
          if ((ulonglong)FVar15 <= &local_628) {
            FVar15 = (ForElementType<FColor>)&local_538;
            if (local_538.SecondaryData != (ForElementType<FColor>)0x0) {
              FVar15 = local_538.SecondaryData;
            }
            if ((&local_628 < (undefined4 *)((longlong)FVar15 + (longlong)local_4ac * 4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (local_4b0 == local_4ac) {
            local_4b0 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FColor>_>
                                  (0x404,&local_538,&local_4ac);
          }
          FVar15 = (ForElementType<FColor>)&local_538;
          if (local_538.SecondaryData != (ForElementType<FColor>)0x0) {
            FVar15 = local_538.SecondaryData;
          }
          lVar16 = (longlong)local_4b0;
          uVar19 = uVar19 + 8;
          local_4b0 = local_4b0 + 1;
          *(undefined4 *)((longlong)FVar15 + lVar16 * 4) = local_628;
          uVar21 = (ulonglong)(uVar20 + 1);
          fVar22 = fVar2;
        } while ((int)(uVar20 + 1) < local_3a0);
      }
      iVar11 = local_4b0;
      FVar15 = (ForElementType<FColor>)&local_538;
      if (local_538.SecondaryData != (ForElementType<FColor>)0x0) {
        FVar15 = local_538.SecondaryData;
      }
      if ((local_4b0 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = local_90;
      uStack_604 = local_56c;
      local_5e8 = (ForElementType<UE::Math::TVector<double>_>)&local_398;
      if (local_398.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        local_5e8 = local_398.SecondaryData;
      }
      local_610 = FVar15;
      iStack_608 = iVar11;
      if ((local_90 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_5a8._12_4_ = uStack_604;
      local_5a8.ArrayNum = iStack_608;
      iStack_5e0 = iVar8;
      local_598._12_4_ = uStack_5dc;
      local_598.ArrayNum = iVar8;
      local_5a8.DataPtr = (FColor *)local_610;
      local_598.DataPtr = (TVector<double> *)local_5e8;
      UE::PoseSearch::FDebugDrawParams::DrawCentripetalCatmullRomSpline
                (param_1,&local_598,&local_5a8,__real_3f000000,8,__real_3f800000);
      if (local_538.SecondaryData != (ForElementType<FColor>)0x0) {
        FMemory::Free((void *)local_538.SecondaryData);
      }
      if (local_398.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FMemory::Free((void *)local_398.SecondaryData);
      }
    }
    (**(code **)(this->_padding_ + 0x2c0))(this,&local_5d8);
    for (plVar18 = local_5d8; plVar18 != local_5d8 + local_5d0; plVar18 = plVar18 + 1) {
      plVar4 = (longlong *)*plVar18;
      if (plVar4 != (longlong *)0x0) {
        local_588 = *(undefined4 *)&param_2->DataPtr;
        uStack_584 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
        iStack_580 = param_2->ArrayNum;
        uStack_57c = *(undefined4 *)&param_2->field_0xc;
        (**(code **)(*plVar4 + 0x2e0))(plVar4,param_1,&local_588);
      }
    }
    if (local_4a8.SecondaryData != (ForElementType<UPoseSearchFeatureChannel_Position_const_*>)0x0)
    {
      FMemory::Free((void *)local_4a8.SecondaryData);
    }
  }
  return;
}

// Finalize @ 14a8f74e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UPoseSearchFeatureChannel_Trajectory::Finalize
          (UPoseSearchFeatureChannel_Trajectory *this,UPoseSearchSchema *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_168 [32];
  undefined1 local_118 [8];
  UPoseSearchFeatureChannel_Position *local_110;
  UPoseSearchFeatureChannel_Velocity *local_108;
  UPoseSearchFeatureChannel_Velocity *local_100;
  UObject *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  UPoseSearchSchema *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  piVar1 = &(this->SubChannels).ArrayMax;
  (this->SubChannels).ArrayNum = 0;
  local_d0 = param_1;
  if ((this->SubChannels).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SubChannels).AllocatorInstance,0,piVar1);
  }
  pFVar13 = (this->Samples).AllocatorInstance.Data;
  iVar3 = (this->Samples).ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar3 * 8;
  do {
    if ((this->Samples).ArrayNum != iVar3) {
      local_118[0] = 0;
      `TCheckedPointerIterator<FPoseSearchTrajectorySample,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
    }
    if (pFVar13 == pFVar2) {
      bVar7 = UPoseSearchFeatureChannel_GroupBase::Finalize
                        ((UPoseSearchFeatureChannel_GroupBase *)this,local_d0);
      return bVar7;
    }
    if (((byte)pFVar13[4] & 0x22) != 0) {
      local_f0 = 0;
      local_110 = NewObject<UPoseSearchFeatureChannel_Position>
                            ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      (local_110->SampleRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
      (local_110->SampleRole).Number = uVar6;
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      (local_110->OriginRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
      (local_110->OriginRole).Number = uVar6;
      local_110->SampleTimeOffset = *(float *)pFVar13;
      local_110->InputQueryPose = UseCharacterPose;
      if (((byte)pFVar13[4] & 0x20) != 0) {
        local_110->ComponentStripping = StripZ;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_110);
      }
      pFVar4 = (this->SubChannels).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_110) &&
          ((FScriptContainerElement *)&local_110 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (this->SubChannels).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
      }
      (this->SubChannels).ArrayNum = iVar9 + 1;
      *(UPoseSearchFeatureChannel_Position **)
       ((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_110;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_110 != (UPoseSearchFeatureChannel_Position *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_110);
      }
    }
    if (((byte)pFVar13[4] & 0x11) != 0) {
      local_e8 = 0;
      local_108 = NewObject<UPoseSearchFeatureChannel_Velocity>
                            ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      (local_108->SampleRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
      (local_108->SampleRole).Number = uVar6;
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      (local_108->OriginRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
      (local_108->OriginRole).Number = uVar6;
      local_108->SampleTimeOffset = *(float *)pFVar13;
      local_108->InputQueryPose = UseCharacterPose;
      local_108->bUseCharacterSpaceVelocities = false;
      if (((byte)pFVar13[4] & 0x10) != 0) {
        local_108->ComponentStripping = StripZ;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_108);
      }
      pFVar4 = (this->SubChannels).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (this->SubChannels).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
      }
      (this->SubChannels).ArrayNum = iVar9 + 1;
      *(UPoseSearchFeatureChannel_Velocity **)
       ((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_108;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_108 != (UPoseSearchFeatureChannel_Velocity *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_108);
      }
    }
    if (((byte)pFVar13[4] & 0x44) != 0) {
      local_e0 = 0;
      local_100 = NewObject<UPoseSearchFeatureChannel_Velocity>
                            ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      (local_100->SampleRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
      (local_100->SampleRole).Number = uVar6;
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      (local_100->OriginRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
      (local_100->OriginRole).Number = uVar6;
      local_100->SampleTimeOffset = *(float *)pFVar13;
      local_100->InputQueryPose = UseCharacterPose;
      local_100->bUseCharacterSpaceVelocities = false;
      local_100->bNormalize = true;
      if (((byte)pFVar13[4] & 0x40) != 0) {
        local_100->ComponentStripping = StripZ;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_100);
      }
      pFVar4 = (this->SubChannels).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_100) &&
          ((FScriptContainerElement *)&local_100 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (this->SubChannels).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
      }
      (this->SubChannels).ArrayNum = iVar9 + 1;
      *(UPoseSearchFeatureChannel_Velocity **)
       ((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_100;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_100 != (UPoseSearchFeatureChannel_Velocity *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_100);
      }
    }
    if (((byte)pFVar13[4] & 0x88) != 0) {
      local_d8 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar10 = UPoseSearchFeatureChannel_Heading::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar10);
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_c8._16_4_ = 0;
      local_c8._20_4_ = 0;
      local_c8._24_4_ = RF_Transient;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_c8._8_8_ = this;
      pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar12 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      *(longlong *)&pUVar11[2].field_0x4 = this->_padding_;
      *(longlong *)&pUVar11[2].field_0x1c = this->_padding_;
      *(float *)(pUVar11 + 3) = *(float *)pFVar13;
      pUVar11[3].field_0xb = 0;
      if (((byte)pFVar13[4] & 0x80) != 0) {
        pUVar11[3].field_0xc = 2;
      }
      local_f8 = pUVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      pFVar4 = (this->SubChannels).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (this->SubChannels).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
      }
      (this->SubChannels).ArrayNum = iVar9 + 1;
      *(UObject **)((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_f8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_f8);
      }
    }
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// GetEstimatedFutureRootMotionVelocity @ 14a8fa580

TVector<double> * __thiscall
UPoseSearchFeatureChannel_Trajectory::GetEstimatedFutureRootMotionVelocity
          (UPoseSearchFeatureChannel_Trajectory *this,TVector<double> *__return_storage_ptr__,
          TArrayView<float_const_,int> *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  TVector<double> *pTVar10;
  UClass *pUVar11;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *this_00;
  TObjectPtr<UPoseSearchFeatureChannel> *pTVar12;
  uint uVar13;
  UPoseSearchFeatureChannel *pUVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  TArrayView<float_const_,int> local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  TVector<double> local_58 [2];
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  lVar8 = this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
  uVar15 = 0xffffffff;
  uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  fVar19 = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  lVar8 = (**(code **)(lVar8 + 0x2c0))(uVar18,local_88);
  uVar17 = 0;
  lVar16 = 0;
  iVar2 = *(int *)(lVar8 + 8);
  if ((longlong)iVar2 < 1) {
    return __return_storage_ptr__;
  }
  do {
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2c0))(this,local_78);
    uVar13 = 0;
    if ((int)uVar17 < (int)plVar9[1]) {
      uVar13 = ~uVar17 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<double> *)(*pcVar4)();
      return pTVar10;
    }
    lVar8 = *(longlong *)(*plVar9 + lVar16 * 8);
    if (lVar8 != 0) {
      pUVar11 = UPoseSearchFeatureChannel_Velocity::StaticClass();
      iVar3 = (int)pUVar11->_padding_;
      if ((((iVar3 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar11->_padding_)) && (*(char *)(lVar8 + 0x84) == '\0')) &&
         (fVar19 < *(float *)(lVar8 + 0x78))) {
        fVar19 = *(float *)(lVar8 + 0x78);
        uVar15 = uVar17;
      }
    }
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 1;
  } while (lVar16 < iVar2);
  if (uVar15 == 0xffffffff) {
    return __return_storage_ptr__;
  }
  this_00 = (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *)
            (**(code **)(this->_padding_ + 0x2c0))(this,local_68);
  pTVar12 = TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int>::operator[](this_00,uVar15)
  ;
  pUVar14 = (pTVar12->field0_0x0).DebugPtr;
  if (pUVar14 != (UPoseSearchFeatureChannel *)0x0) {
    pUVar11 = UPoseSearchFeatureChannel_Velocity::StaticClass();
    iVar2 = (int)pUVar11->_padding_;
    if ((iVar2 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar11->_padding_)) goto LAB_14a8fa71a;
  }
  pUVar14 = (UPoseSearchFeatureChannel *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Velocity",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Trajectory.cpp"
                     ,0x10a,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar4)();
    return pTVar10;
  }
LAB_14a8fa71a:
  local_98.DataPtr = param_1->DataPtr;
  local_98.ArrayNum = param_1->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar10 = UE::PoseSearch::FFeatureVectorHelper::DecodeVector
                      (local_58,&local_98,pUVar14->ChannelDataOffset,
                       *(EComponentStrippingVector *)((longlong)&pUVar14[2]._padding_ + 5));
  dVar5 = (pTVar10->field0_0x0)._s_0.Y;
  dVar1 = (pTVar10->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetEstimatedSpeedRatio @ 14a8fa790

float __thiscall
UPoseSearchFeatureChannel_Trajectory::GetEstimatedSpeedRatio
          (UPoseSearchFeatureChannel_Trajectory *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  UClass *pUVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  longlong *local_78;
  int local_70;
  TArrayView<float_const_,int> local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40 [2];
  
  fVar10 = 0.0;
  fVar11 = 0.0;
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_78);
  plVar5 = local_78;
  fVar6 = __real_3f800000;
  if (local_78 != local_78 + local_70) {
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        pUVar4 = UPoseSearchFeatureChannel_Velocity::StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar4->_padding_)) && (*(char *)(lVar2 + 0x84) == '\0')) {
          local_68.DataPtr = param_1->DataPtr;
          local_68.ArrayNum = param_1->ArrayNum;
          local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
          UE::PoseSearch::FFeatureVectorHelper::DecodeVector
                    ((TVector<double> *)&local_58._s_0,&local_68,*(int *)(lVar2 + 0x38),
                     *(EComponentStrippingVector *)(lVar2 + 0x85));
          local_68.DataPtr = param_2->DataPtr;
          local_68.ArrayNum = param_2->ArrayNum;
          local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
          UE::PoseSearch::FFeatureVectorHelper::DecodeVector
                    ((TVector<double> *)&local_40[0]._s_0,&local_68,*(int *)(lVar2 + 0x38),
                     *(EComponentStrippingVector *)(lVar2 + 0x85));
          auVar7._0_8_ = local_58._s_0.Z * local_58._s_0.Z;
          auVar7._8_8_ = 0;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_58._s_0.X * local_58._s_0.X + local_58._s_0.Y * local_58._s_0.Y +
                         auVar7._0_8_;
          auVar8 = sqrtpd(auVar7,auVar8);
          fVar10 = (float)(auVar8._0_8_ + (double)fVar10);
          auVar9._0_8_ = (double)local_40[0]._16_8_ * (double)local_40[0]._16_8_;
          auVar9._8_8_ = 0;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (double)local_40[0]._0_8_ * (double)local_40[0]._0_8_ +
                         (double)local_40[0]._8_8_ * (double)local_40[0]._8_8_ + auVar9._0_8_;
          auVar8 = sqrtpd(auVar9,auVar3);
          fVar11 = (float)(auVar8._0_8_ + (double)fVar11);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != local_78 + local_70);
    fVar6 = __real_3f800000;
    if (__real_38d1b717 < fVar11) {
      fVar6 = fVar10 / fVar11;
    }
  }
  return fVar6;
}

// GetPrivateStaticClass @ 14a8fcb70

UClass * __cdecl UPoseSearchFeatureChannel_Trajectory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Trajectory",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Trajectory,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Trajectory>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Trajectory>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton;
}

// GetSubChannels @ 14a8fe760

TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> * __thiscall
UPoseSearchFeatureChannel_Trajectory::GetSubChannels
          (UPoseSearchFeatureChannel_Trajectory *this,
          TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *pTVar4;
  
  iVar1 = (this->SubChannels).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UPoseSearchFeatureChannel> *)(this->SubChannels).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetSubChannels @ 14a8fe7d0

TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> * __thiscall
UPoseSearchFeatureChannel_Trajectory::GetSubChannels
          (UPoseSearchFeatureChannel_Trajectory *this,
          TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *pTVar4;
  
  iVar1 = (this->SubChannels).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UPoseSearchFeatureChannel> *)(this->SubChannels).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Trajectory @ 14a908e30

void __cdecl
UPoseSearchFeatureChannel_Trajectory::StaticRegisterNativesUPoseSearchFeatureChannel_Trajectory
          (void)

{
  return;
}

