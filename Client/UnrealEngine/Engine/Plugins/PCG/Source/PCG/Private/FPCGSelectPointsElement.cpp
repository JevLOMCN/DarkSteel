// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149bf4580

void __thiscall
`FPCGSelectPointsElement::ExecuteInternal'::__l120::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x490);
  uVar3 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x488))();
  (*pcVar2)(plVar1,uVar3,0);
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x498);
  uVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x640))
                    (*(longlong **)((longlong)this + 8),1);
  (*pcVar2)(plVar1,uVar4 | 2);
                    /* WARNING: Could not recover jumptable at 0x000149bf45f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)this + 0x4b0))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  return;
}

// operator() @ 149bf8980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGSelectPointsElement::ExecuteInternal'::__l120::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  long64 lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  TTransform<double> *pTVar21;
  float *pfVar22;
  TVector<double> *pTVar23;
  TVector4<double> *pTVar24;
  int *piVar25;
  long64 *plVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auStack_418 [32];
  ulonglong local_3f8;
  longlong local_3f0;
  int local_3e8;
  FPCGPointValueRanges local_3d8;
  FConstPCGPointValueRanges local_248;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_418;
  uVar28 = (ulonglong)param_1;
  iVar19 = 0;
  FPCGPointValueRanges::FPCGPointValueRanges(&local_3d8,*(UPCGBasePointData **)this,false);
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_248,*(UPCGBasePointData **)((longlong)this + 8));
  fVar16 = __real_3f800000;
  local_3e8 = param_1 + param_3;
  uVar29 = uVar28;
  if (param_1 < local_3e8) {
    do {
      uVar27 = (uint)uVar28;
      uVar18 = 0;
      if ((int)uVar27 < local_248.SeedRange.NumElements) {
        uVar18 = ~uVar27 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_3f8 = uVar29, local_3f0 = (longlong)local_248.SeedRange.NumElements,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        iVar19 = (*pcVar4)();
        return iVar19;
      }
      iVar20 = PCGHelpers::ComputeSeed
                         (*(int *)((longlong)this + 0x10),
                          *(int *)((longlong)
                                   (int)((longlong)
                                         ((ulonglong)(uint)((int)uVar27 >> 0x1f) << 0x20 |
                                         uVar28 & 0xffffffff) %
                                        (longlong)local_248.SeedRange.ElementView.NumElements) *
                                   (longlong)local_248.SeedRange.ElementView.BytesBetweenElements +
                                  (longlong)local_248.SeedRange.ElementView.FirstElementPtr));
      if ((float)(iVar20 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) - fVar16 <
          *(float *)((longlong)this + 0x14)) {
        if (local_3d8.TransformRange.NumElements != 0) {
          pTVar21 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_248.TransformRange,uVar27);
          dVar2 = (pTVar21->Rotation).XY.m128d_f64[0];
          dVar5 = (pTVar21->Rotation).XY.m128d_f64[1];
          dVar6 = (pTVar21->Rotation).ZW.m128d_f64[0];
          dVar7 = (pTVar21->Rotation).ZW.m128d_f64[1];
          dVar8 = (pTVar21->Translation).XY.m128d_f64[0];
          dVar9 = (pTVar21->Translation).XY.m128d_f64[1];
          dVar10 = (pTVar21->Translation).ZW.m128d_f64[0];
          dVar11 = (pTVar21->Translation).ZW.m128d_f64[1];
          dVar12 = (pTVar21->Scale3D).XY.m128d_f64[0];
          dVar13 = (pTVar21->Scale3D).XY.m128d_f64[1];
          dVar14 = (pTVar21->Scale3D).ZW.m128d_f64[0];
          dVar15 = (pTVar21->Scale3D).ZW.m128d_f64[1];
          pTVar21 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_3d8.TransformRange,param_2);
          (pTVar21->Rotation).XY.m128d_f64[0] = dVar2;
          (pTVar21->Rotation).XY.m128d_f64[1] = dVar5;
          (pTVar21->Rotation).ZW.m128d_f64[0] = dVar6;
          (pTVar21->Rotation).ZW.m128d_f64[1] = dVar7;
          (pTVar21->Translation).XY.m128d_f64[0] = dVar8;
          (pTVar21->Translation).XY.m128d_f64[1] = dVar9;
          (pTVar21->Translation).ZW.m128d_f64[0] = dVar10;
          (pTVar21->Translation).ZW.m128d_f64[1] = dVar11;
          (pTVar21->Scale3D).XY.m128d_f64[0] = dVar12;
          (pTVar21->Scale3D).XY.m128d_f64[1] = dVar13;
          (pTVar21->Scale3D).ZW.m128d_f64[0] = dVar14;
          (pTVar21->Scale3D).ZW.m128d_f64[1] = dVar15;
        }
        if (local_3d8.DensityRange.NumElements != 0) {
          pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_248.DensityRange,uVar27);
          fVar1 = *pfVar22;
          pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3d8.DensityRange,param_2);
          *pfVar22 = fVar1;
        }
        if (local_3d8.SteepnessRange.NumElements != 0) {
          pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_248.SteepnessRange,uVar27);
          fVar1 = *pfVar22;
          pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3d8.SteepnessRange,param_2);
          *pfVar22 = fVar1;
        }
        if (local_3d8.BoundsMinRange.NumElements != 0) {
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_248.BoundsMinRange,uVar27);
          dVar5 = (pTVar23->field0_0x0)._s_0.X;
          dVar6 = (pTVar23->field0_0x0)._s_0.Y;
          dVar2 = (pTVar23->field0_0x0)._s_0.Z;
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3d8.BoundsMinRange,param_2);
          (pTVar23->field0_0x0)._s_0.X = dVar5;
          (pTVar23->field0_0x0)._s_0.Y = dVar6;
          (pTVar23->field0_0x0)._s_0.Z = dVar2;
        }
        if (local_3d8.BoundsMaxRange.NumElements != 0) {
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_248.BoundsMaxRange,uVar27);
          dVar5 = (pTVar23->field0_0x0)._s_0.X;
          dVar6 = (pTVar23->field0_0x0)._s_0.Y;
          dVar2 = (pTVar23->field0_0x0)._s_0.Z;
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3d8.BoundsMaxRange,param_2);
          (pTVar23->field0_0x0)._s_0.X = dVar5;
          (pTVar23->field0_0x0)._s_0.Y = dVar6;
          (pTVar23->field0_0x0)._s_0.Z = dVar2;
        }
        if (local_3d8.ColorRange.NumElements != 0) {
          pTVar24 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_248.ColorRange,uVar27);
          dVar2 = (pTVar24->field0_0x0)._s_0.X;
          dVar5 = (pTVar24->field0_0x0)._s_0.Y;
          dVar6 = (pTVar24->field0_0x0)._s_0.Z;
          dVar7 = (pTVar24->field0_0x0)._s_0.W;
          pTVar24 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_3d8.ColorRange,param_2);
          (pTVar24->field0_0x0)._s_0.X = dVar2;
          (pTVar24->field0_0x0)._s_0.Y = dVar5;
          (pTVar24->field0_0x0)._s_0.Z = dVar6;
          (pTVar24->field0_0x0)._s_0.W = dVar7;
        }
        if (local_3d8.SeedRange.NumElements != 0) {
          piVar25 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_248.SeedRange,uVar27);
          iVar20 = *piVar25;
          piVar25 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_3d8.SeedRange,param_2);
          *piVar25 = iVar20;
        }
        if (local_3d8.MetadataEntryRange.NumElements != 0) {
          plVar26 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_248.MetadataEntryRange,uVar27);
          lVar3 = *plVar26;
          plVar26 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_3d8.MetadataEntryRange,param_2);
          *plVar26 = lVar3;
        }
        uVar18 = 0;
        if ((int)uVar27 < local_248.DensityRange.NumElements) {
          uVar18 = ~uVar27 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (local_3f8 = uVar29, local_3f0 = (longlong)local_248.DensityRange.NumElements,
           bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar17)) {
          pcVar4 = (code *)swi(3);
          iVar19 = (*pcVar4)();
          return iVar19;
        }
        fVar1 = *(float *)((longlong)
                           (int)((longlong)
                                 ((ulonglong)(uint)((int)uVar27 >> 0x1f) << 0x20 |
                                 uVar28 & 0xffffffff) %
                                (longlong)local_248.DensityRange.ElementView.NumElements) *
                           (longlong)local_248.DensityRange.ElementView.BytesBetweenElements +
                          (longlong)local_248.DensityRange.ElementView.FirstElementPtr);
        uVar18 = 0;
        if (param_2 < local_3d8.DensityRange.NumElements) {
          uVar18 = (uint)~param_2 >> 0x1f;
        }
        if (uVar18 == 0) {
          local_3f8 = (ulonglong)param_2;
          local_3f0 = (longlong)local_3d8.DensityRange.NumElements;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar17) {
            pcVar4 = (code *)swi(3);
            iVar19 = (*pcVar4)();
            return iVar19;
          }
        }
        if (param_2 == param_2 % local_3d8.DensityRange.ElementView.NumElements) {
          pfVar22 = (float *)((longlong)local_3d8.DensityRange.ElementView.BytesBetweenElements *
                              (longlong)(param_2 % local_3d8.DensityRange.ElementView.NumElements) +
                             (longlong)local_3d8.DensityRange.ElementView.FirstElementPtr);
        }
        else {
          pfVar22 = &local_3d8.DensityRange.StubValue;
        }
        iVar19 = iVar19 + 1;
        *pfVar22 = fVar1;
        param_2 = param_2 + 1;
      }
      uVar28 = (ulonglong)(uVar27 + 1);
      uVar29 = uVar29 + 1;
    } while ((int)(uVar27 + 1) < local_3e8);
  }
  return iVar19;
}

// ExecuteInternal @ 149c1c5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGSelectPointsElement::ExecuteInternal(FPCGSelectPointsElement *this,FPCGContext *param_1)

{
  float fVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  FText *pFVar11;
  FPCGTaggedData *pFVar12;
  UPCGBasePointData *pUVar13;
  UPCGBasePointData *this_01;
  FTextFormat *pFVar14;
  TRefCountPtr<ITextData> TVar15;
  FObjectPtr_u_0 FVar16;
  ulonglong uVar17;
  int *piVar18;
  int *piVar19;
  ForAnyElementType FVar20;
  FPCGDataCollection *pFVar21;
  bool bVar22;
  undefined1 auStackY_2e8 [32];
  <lambda_1> local_297;
  undefined1 local_296 [6];
  int *local_290;
  FPCGContext *local_288;
  uint local_280;
  int local_27c;
  TObjectPtr<UPCGSettings>_u_0 local_278;
  FObjectPtr_u_0 local_270;
  FObjectPtr_u_0 local_268;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_260;
  int *local_250;
  FPCGTaggedData *local_248;
  <lambda_4> local_240;
  <lambda_3> local_238;
  <lambda_1> local_230;
  <lambda_2> local_220;
  FPCGInitializeFromDataParams local_1f8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FText local_188;
  FString local_178;
  FString local_168;
  FText local_158;
  FString local_148;
  FString local_138;
  FText local_128;
  FString local_118;
  FString local_108;
  FText local_f8;
  FText local_e8;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FTextFormat local_88;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_280 = 0;
  bVar22 = -1 < CpuChannel->Enabled;
  local_288 = param_1;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId31,"FPCGSelectPointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelectPoints.cpp"
               ,0x1f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar8 = UPCGSelectPointsSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar3) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar10.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149c1c718;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
    pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSelectPointsSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_297);
    if (pFVar12 != (FPCGTaggedData *)0x0) {
      local_278.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_278.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c1c716;
        UE::GC::MarkAsReachable((UObject *)local_278.DebugPtr);
      }
      if (local_278.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPCGSelectPointsSettings::StaticClass();
        bVar3 = FObjectPtr::IsA(&local_278.ObjectPtr,pUVar8);
        TVar10 = local_278;
        if (bVar3) goto LAB_149c1c718;
      }
    }
  }
  else {
    pUVar9 = UPCGNode::GetSettings(this_00);
    TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
    if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
      pUVar8 = UPCGSelectPointsSettings::StaticClass();
      iVar6 = (int)pUVar8->_padding_;
      if ((iVar6 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8)
          == &pUVar8->_padding_)) goto LAB_149c1c718;
    }
  }
LAB_149c1c716:
  TVar10.DebugPtr = (UPCGSettings *)0x0;
LAB_149c1c718:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelectPoints.cpp"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_260,&PCGPinConstants::DefaultInputLabel);
  fVar1 = *(float *)&TVar10.DebugPtr[1]._padding_;
  pFVar21 = &param_1->OutputData;
  local_27c = FPCGContext::GetSeed(param_1);
  bVar3 = fVar1 < __real_3f800000;
  if (0.0 < fVar1) {
    uVar17 = (ulonglong)local_260.ArrayNum;
    local_250 = &(param_1->OutputData).TaggedData.ArrayMax;
    local_280 = local_260.ArrayNum;
    local_248 = (FPCGTaggedData *)(local_260.AllocatorInstance.Data + uVar17 * 0x78);
    piVar19 = &(param_1->OutputData).TaggedData.ArrayNum;
    FVar20.Data = local_260.AllocatorInstance.Data;
    while( true ) {
      piVar18 = local_250;
      if (local_260.ArrayNum != (uint)uVar17) {
        local_296[0] = 0;
        local_290 = piVar19;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_296);
        piVar18 = &(pFVar21->TaggedData).ArrayMax;
        piVar19 = &(pFVar21->TaggedData).ArrayNum;
      }
      local_290 = piVar19;
      local_250 = piVar18;
      if ((FPCGTaggedData *)FVar20.Data == local_248) break;
      pFVar12 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
      if (((pFVar12 <= FVar20.Data) && (FVar20.Data < pFVar12 + *piVar18)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = *piVar19;
      if (iVar6 == *piVar18) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar21,piVar18);
      }
      *piVar19 = iVar6 + 1;
      pFVar12 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar21->TaggedData).AllocatorInstance.Data + (longlong)iVar6 * 0x78),
                           (FPCGTaggedData *)FVar20.Data);
      FVar16.Handle = (UObject *)(((FPCGTaggedData *)FVar20.Data)->Data).Data.field0_0x0.DebugPtr;
      if ((UPCGData *)FVar16.Handle == (UPCGData *)0x0) {
LAB_149c1cfe9:
        if (1 < (byte)LogPCG._0_1_) {
          pFVar11 = FText::AsLocalizable_Advanced_LocText
                              (&local_b8,L"PCGSelectPointsElement",L"InvalidInputData",
                               L"Invalid input data");
          FText::ToString(pFVar11);
          FPCGContext::GetTaskName(param_1,&local_c8);
          FPCGContext::GetExecutionSourceName(param_1,&local_d8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          TVar15.Reference = local_b8.TextData.Reference;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            TVar15.Reference = local_b8.TextData.Reference;
          }
          goto LAB_149c1cad1;
        }
LAB_149c1cc6e:
        FVar20.Data = FVar20.Data + 0x78;
        uVar17 = (ulonglong)local_280;
      }
      else {
        local_270.Handle = FVar16.Handle;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(FVar16.Handle);
        }
        if ((UPCGData *)local_270.Handle == (UPCGData *)0x0) goto LAB_149c1cfe9;
        pUVar8 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_270,pUVar8);
        if ((!bVar5) || ((UPCGData *)local_270.Handle == (UPCGData *)0x0)) goto LAB_149c1cfe9;
        if (bVar3) {
          local_268.Handle =
               (UObject *)(((FPCGTaggedData *)FVar20.Data)->Data).Data.field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c1cb17:
            if ((UPCGSpatialData *)local_268.Handle == (UPCGSpatialData *)0x0) goto LAB_149c1cb37;
            pUVar8 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_268,pUVar8);
            FVar16 = local_268;
            if (!bVar5) goto LAB_149c1cb37;
          }
          else {
            if ((UPCGSpatialData *)local_268.Handle != (UPCGSpatialData *)0x0) {
              UE::GC::MarkAsReachable(local_268.Handle);
              goto LAB_149c1cb17;
            }
LAB_149c1cb37:
            FVar16.Handle = (UObject *)0x0;
          }
          local_48 = 0;
          local_47 = 0;
          local_43 = 0;
          local_41 = 0;
          local_78._s_0.X = 0.0;
          local_78._s_0.Y = 0.0;
          local_78._s_0.Z = 0.0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          pUVar13 = UPCGSpatialData::ToBasePointData
                              ((UPCGSpatialData *)FVar16.Handle,param_1,
                               (TBox<double> *)&local_78._s_0);
          if (pUVar13 == (UPCGBasePointData *)0x0) {
            if (1 < (byte)LogPCG._0_1_) {
              pFVar11 = FText::AsLocalizable_Advanced_LocText
                                  (&local_158,L"PCGSelectPointsElement",L"NoPointDataInInput",
                                   L"Unable to get point data from input");
              FText::ToString(pFVar11);
              FPCGContext::GetTaskName(param_1,&local_168);
              FPCGContext::GetExecutionSourceName(param_1,&local_178);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
              piVar19 = local_290;
              if (local_158.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
                piVar19 = local_290;
              }
            }
          }
          else {
            iVar6 = (**(code **)(pUVar13->_padding_ + 0x488))(pUVar13);
            this_01 = FPCGContext::NewPointData_AnyThread(local_288);
            FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                      (&local_1f8,(UPCGSpatialData *)pUVar13);
            local_1f8.bInheritSpatialData = false;
            UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_1f8);
            FPCGDataPtrWrapper::operator=(&pFVar12->Data,(UPCGData *)this_01);
            if ((int)((float)iVar6 * fVar1) == 0) {
              param_1 = local_288;
              if (5 < (byte)LogPCG._0_1_) {
                pFVar11 = FText::AsLocalizable_Advanced_LocText
                                    (&local_128,L"PCGSelectPointsElement",
                                     L"SkippedAllPointsRejected",L"Skipped - all points rejected");
                FText::ToString(pFVar11);
                param_1 = local_288;
                FPCGContext::GetTaskName(local_288,&local_138);
                FPCGContext::GetExecutionSourceName(param_1,&local_148);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
                if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_138.Data.AllocatorInstance.Data);
                }
                if (local_128.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
                }
              }
            }
            else {
              bVar5 = -1 < CpuChannel->Enabled;
              if (bVar5) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId110,
                           "FPCGSelectPointsElement::Execute::SelectPoints",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSelectPoints.cpp"
                           ,0x6e);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId110);
              }
              local_220.Seed = local_27c;
              local_220.bKeepZeroDensityPoints = false;
              local_240.SampledData = this_01;
              local_238.SampledData = this_01;
              local_230.SampledData = this_01;
              local_230.OriginalData = pUVar13;
              local_220.SampledData = this_01;
              local_220.OriginalData = pUVar13;
              local_220.Ratio = fVar1;
              FPCGAsync::
              AsyncProcessingRangeEx<_FPCGSelectPointsElement::ExecuteInternal_::__l120::<lambda_1>_&,_FPCGSelectPointsElement::ExecuteInternal_::__l120::<lambda_2>_&,_FPCGSelectPointsElement::ExecuteInternal_::__l120::<lambda_3>_&,_FPCGSelectPointsElement::ExecuteInternal_::__l120::<lambda_4>_&>
                        (&local_288->AsyncState,iVar6,&local_230,&local_220,&local_238,&local_240,
                         false,0x40,true);
              param_1 = local_288;
              if (5 < (byte)LogPCG._0_1_) {
                iVar7 = (**(code **)(this_01->_padding_ + 0x488))(this_01);
                pFVar11 = FText::AsLocalizable_Advanced_LocText
                                    (&local_e8,L"PCGSelectPointsElement",L"GenerationInfo",
                                     L"Generated {0} points from {1} source points");
                pFVar14 = FTextFormat::FTextFormat(&local_88,pFVar11,Default);
                pFVar11 = FText::Format<int,int>(&local_f8,pFVar14,iVar7,iVar6);
                FText::ToString(pFVar11);
                param_1 = local_288;
                FPCGContext::GetTaskName(local_288,&local_108);
                FPCGContext::GetExecutionSourceName(param_1,&local_118);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_118.Data.AllocatorInstance.Data);
                }
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                if (local_f8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
                }
                if (local_e8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
                }
              }
              if (bVar5) {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
            DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                      ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                       local_1f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                       Data,local_1f8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
            if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                local_1f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
                (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
              FMemory::Free(local_1f8.MetadataInitializeParams.DomainInitializeParams.
                            AllocatorInstance.Data);
            }
            piVar19 = local_290;
            if (local_1f8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data)
              ;
              piVar19 = local_290;
            }
          }
          pFVar21 = &param_1->OutputData;
          goto LAB_149c1cc6e;
        }
        if ((byte)LogPCG._0_1_ < 6) goto LAB_149c1cc6e;
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_188,L"PCGSelectPointsElement",L"SkippedTrivialSampling",
                             L"Skipped - trivial sampling");
        FText::ToString(pFVar11);
        FPCGContext::GetTaskName(param_1,&local_198);
        FPCGContext::GetExecutionSourceName(param_1,&local_98);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        TVar15.Reference = local_188.TextData.Reference;
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
          TVar15.Reference = local_188.TextData.Reference;
        }
LAB_149c1cad1:
        if (TVar15.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar15.Reference + 0x10))();
        }
        FVar20.Data = FVar20.Data + 0x78;
        uVar17 = (ulonglong)local_280;
        piVar19 = local_290;
      }
    }
  }
  else if (5 < (byte)LogPCG._0_1_) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_a8,L"PCGSelectPointsElement",L"AllInputsRejected",
                         L"Skipped - all inputs rejected");
    FText::ToString(pFVar11);
    FPCGContext::GetTaskName(param_1,&local_1a8);
    FPCGContext::GetExecutionSourceName(param_1,&local_1b8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
  if ((FPCGTaggedData *)local_260.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_260.AllocatorInstance.Data);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c22900

EPCGElementExecutionLoopMode __thiscall
FPCGSelectPointsElement::ExecutionLoopMode(FPCGSelectPointsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c358a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSelectPointsElement::SupportsBasePointDataInputs
          (FPCGSelectPointsElement *this,FPCGContext *param_1)

{
  return true;
}

