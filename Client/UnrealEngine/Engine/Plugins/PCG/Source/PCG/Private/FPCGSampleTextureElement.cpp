// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// operator() @ 149bf43b0

void __thiscall
`FPCGSampleTextureElement::ExecuteInternal'::__l42::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x490);
  uVar3 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x488))();
  (*pcVar2)(plVar1,uVar3,1);
  uVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x640))
                    (*(longlong **)((longlong)this + 8),1);
  (**(code **)(**(longlong **)this + 0x498))
            (*(longlong **)this,
             (*(char *)(*(longlong *)((longlong)this + 0x10) + 200) != '\x01') + 0x12 | uVar4);
                    /* WARNING: Could not recover jumptable at 0x000149bf4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)this + 0x4b0))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  return;
}

// operator() @ 149bfa5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
`FPCGSampleTextureElement::ExecuteInternal'::__l42::<lambda_4>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar4;
  long64 lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  TTransform<double> *pTVar27;
  float *pfVar28;
  TVector<double> *pTVar29;
  TVector4<double> *pTVar30;
  int *piVar31;
  long64 *plVar32;
  undefined8 uVar33;
  TVector4<double>_u_0 *pTVar34;
  longlong *plVar35;
  uint uVar36;
  longlong lVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStackY_5f8 [32];
  float local_5c4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_5c0;
  float local_5b0 [2];
  float local_5a8 [2];
  float local_5a0 [2];
  float local_598 [2];
  int local_590;
  longlong local_588;
  FScriptContainerElement *local_578;
  int iStack_570;
  undefined4 uStack_56c;
  TVector2<double>_u_0 local_568;
  TVector4<double>_u_0 local_558;
  TArrayView<UE::Math::TVector<double>,int> local_538;
  FPCGPoint local_528;
  FPCGPointValueRanges local_458;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  double local_2a0;
  undefined1 local_298;
  FConstPCGPointValueRanges local_288;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  iVar25 = 0;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_288,*(UPCGBasePointData **)((longlong)this + 0x20));
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_458,*(UPCGBasePointData **)((longlong)this + 0x30),false);
  local_5c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c0.ArrayNum = 0;
  local_5c0.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_5c0,param_3,Default);
  if (*(char *)(*(longlong *)this + 200) == '\x01') {
    iVar3 = local_5c0.ArrayNum;
    this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10);
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x18);
    local_578 = local_5c0.AllocatorInstance.Data;
    if ((local_5c0.ArrayNum < 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar23)) {
      pcVar7 = (code *)swi(3);
      iVar25 = (*pcVar7)();
      return iVar25;
    }
    iStack_570 = iVar3;
    local_538._12_4_ = uStack_56c;
    local_538.ArrayNum = iVar3;
    local_538.DataPtr = (TVector<double> *)local_578;
    IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
              (this_00,&local_538,param_1,pIVar4,AllowBroadcastAndConstructible);
  }
  fVar19 = __real_3f800000;
  dVar18 = __real_3ff0000000000000;
  local_590 = param_3 + param_1;
  if (param_1 < local_590) {
    lVar37 = 0;
    uVar43 = SUB84(__real_3ff0000000000000,0);
    uVar44 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_588 = (longlong)param_1;
    uVar36 = param_1;
    do {
      if (*(char *)(*(longlong *)this + 200) == '\x01') {
        uVar26 = 0;
        if ((int)(uVar36 - param_1) < local_5c0.ArrayNum) {
          uVar26 = ~(uVar36 - param_1) >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar7 = (code *)swi(3);
          iVar25 = (*pcVar7)();
          return iVar25;
        }
        local_558._s_0.W = _UNK_15061cbc8;
        local_558._s_0.Z = ___xmm_3ff00000000000000000000000000000;
        if (*(char *)(*(longlong *)this + 0x110) == '\0') {
          dVar1 = *(double *)(local_5c0.AllocatorInstance.Data + lVar37);
          dVar2 = *(double *)(local_5c0.AllocatorInstance.Data + lVar37 + 8);
          uVar38 = SUB84(dVar1,0);
          uVar40 = (int)((ulonglong)dVar1 >> 0x20);
          if (dVar18 <= dVar1) {
            uVar38 = uVar43;
            uVar40 = uVar44;
          }
          uVar41 = SUB84(dVar2,0);
          uVar42 = (int)((ulonglong)dVar2 >> 0x20);
          if (dVar18 <= dVar2) {
            uVar41 = uVar43;
            uVar42 = uVar44;
          }
          if ((double)CONCAT44(uVar40,uVar38) <= 0.0) {
            uVar38 = 0;
            uVar40 = 0;
          }
          if ((double)CONCAT44(uVar42,uVar41) <= 0.0) {
            uVar41 = 0;
            uVar42 = 0;
          }
          *(ulonglong *)(local_5c0.AllocatorInstance.Data + lVar37) = CONCAT44(uVar40,uVar38);
          *(ulonglong *)(local_5c0.AllocatorInstance.Data + lVar37 + 8) = CONCAT44(uVar42,uVar41);
        }
        local_5c4 = 1.0;
        local_558._s_0.X = 0.0;
        local_558._s_0.Y = 0.0;
        local_568._s_0.X = (double)*(undefined8 *)(local_5c0.AllocatorInstance.Data + lVar37);
        local_568._s_0.Y = (double)*(undefined8 *)(local_5c0.AllocatorInstance.Data + lVar37 + 8);
        bVar23 = UPCGBaseTextureData::SamplePointLocal
                           (*(UPCGBaseTextureData **)((longlong)this + 8),
                            (TVector2<double> *)&local_568._s_0,(TVector4<double> *)&local_558._s_0,
                            &local_5c4);
        if (bVar23) {
          if (local_458.TransformRange.NumElements != 0) {
            pTVar27 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                      ::GetElement(&local_288.TransformRange,uVar36);
            dVar1 = (pTVar27->Rotation).XY.m128d_f64[0];
            dVar2 = (pTVar27->Rotation).XY.m128d_f64[1];
            dVar8 = (pTVar27->Rotation).ZW.m128d_f64[0];
            dVar9 = (pTVar27->Rotation).ZW.m128d_f64[1];
            dVar10 = (pTVar27->Translation).XY.m128d_f64[0];
            dVar11 = (pTVar27->Translation).XY.m128d_f64[1];
            dVar12 = (pTVar27->Translation).ZW.m128d_f64[0];
            dVar13 = (pTVar27->Translation).ZW.m128d_f64[1];
            dVar14 = (pTVar27->Scale3D).XY.m128d_f64[0];
            dVar15 = (pTVar27->Scale3D).XY.m128d_f64[1];
            dVar16 = (pTVar27->Scale3D).ZW.m128d_f64[0];
            dVar17 = (pTVar27->Scale3D).ZW.m128d_f64[1];
            pTVar27 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                      ::operator[](&local_458.TransformRange,param_2);
            (pTVar27->Rotation).XY.m128d_f64[0] = dVar1;
            (pTVar27->Rotation).XY.m128d_f64[1] = dVar2;
            (pTVar27->Rotation).ZW.m128d_f64[0] = dVar8;
            (pTVar27->Rotation).ZW.m128d_f64[1] = dVar9;
            (pTVar27->Translation).XY.m128d_f64[0] = dVar10;
            (pTVar27->Translation).XY.m128d_f64[1] = dVar11;
            (pTVar27->Translation).ZW.m128d_f64[0] = dVar12;
            (pTVar27->Translation).ZW.m128d_f64[1] = dVar13;
            (pTVar27->Scale3D).XY.m128d_f64[0] = dVar14;
            (pTVar27->Scale3D).XY.m128d_f64[1] = dVar15;
            (pTVar27->Scale3D).ZW.m128d_f64[0] = dVar16;
            (pTVar27->Scale3D).ZW.m128d_f64[1] = dVar17;
          }
          if (local_458.DensityRange.NumElements != 0) {
            pfVar28 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                                (&local_288.DensityRange,uVar36);
            fVar39 = *pfVar28;
            pfVar28 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_458.DensityRange,param_2);
            *pfVar28 = fVar39;
          }
          if (local_458.SteepnessRange.NumElements != 0) {
            pfVar28 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                                (&local_288.SteepnessRange,uVar36);
            fVar39 = *pfVar28;
            pfVar28 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_458.SteepnessRange,param_2);
            *pfVar28 = fVar39;
          }
          if (local_458.BoundsMinRange.NumElements != 0) {
            pTVar29 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                      ::GetElement(&local_288.BoundsMinRange,uVar36);
            dVar2 = (pTVar29->field0_0x0)._s_0.X;
            dVar8 = (pTVar29->field0_0x0)._s_0.Y;
            dVar1 = (pTVar29->field0_0x0)._s_0.Z;
            pTVar29 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_458.BoundsMinRange,param_2);
            (pTVar29->field0_0x0)._s_0.X = dVar2;
            (pTVar29->field0_0x0)._s_0.Y = dVar8;
            (pTVar29->field0_0x0)._s_0.Z = dVar1;
          }
          if (local_458.BoundsMaxRange.NumElements != 0) {
            pTVar29 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                      ::GetElement(&local_288.BoundsMaxRange,uVar36);
            dVar2 = (pTVar29->field0_0x0)._s_0.X;
            dVar8 = (pTVar29->field0_0x0)._s_0.Y;
            dVar1 = (pTVar29->field0_0x0)._s_0.Z;
            pTVar29 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_458.BoundsMaxRange,param_2);
            (pTVar29->field0_0x0)._s_0.X = dVar2;
            (pTVar29->field0_0x0)._s_0.Y = dVar8;
            (pTVar29->field0_0x0)._s_0.Z = dVar1;
          }
          if (local_458.ColorRange.NumElements != 0) {
            pTVar30 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                      ::GetElement(&local_288.ColorRange,uVar36);
            dVar1 = (pTVar30->field0_0x0)._s_0.X;
            dVar2 = (pTVar30->field0_0x0)._s_0.Y;
            dVar8 = (pTVar30->field0_0x0)._s_0.Z;
            dVar9 = (pTVar30->field0_0x0)._s_0.W;
            pTVar30 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                      ::operator[](&local_458.ColorRange,param_2);
            (pTVar30->field0_0x0)._s_0.X = dVar1;
            (pTVar30->field0_0x0)._s_0.Y = dVar2;
            (pTVar30->field0_0x0)._s_0.Z = dVar8;
            (pTVar30->field0_0x0)._s_0.W = dVar9;
          }
          if (local_458.SeedRange.NumElements != 0) {
            piVar31 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                                (&local_288.SeedRange,uVar36);
            iVar3 = *piVar31;
            piVar31 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                                (&local_458.SeedRange,param_2);
            *piVar31 = iVar3;
          }
          if (local_458.MetadataEntryRange.NumElements != 0) {
            plVar32 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                                (&local_288.MetadataEntryRange,uVar36);
            lVar5 = *plVar32;
            plVar32 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                (&local_458.MetadataEntryRange,param_2);
            *plVar32 = lVar5;
          }
          uVar22 = local_558._s_0.W;
          uVar21 = local_558._s_0.Z;
          uVar20 = local_558._s_0.Y;
          uVar33 = local_558._s_0.X;
          uVar26 = 0;
          if (param_2 < local_458.ColorRange.NumElements) {
            uVar26 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar7 = (code *)swi(3);
            iVar25 = (*pcVar7)();
            return iVar25;
          }
          fVar39 = local_5c4;
          if (param_2 == param_2 % local_458.ColorRange.ElementView.NumElements) {
            pTVar34 = (TVector4<double>_u_0 *)
                      ((longlong)&(local_458.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                      (longlong)local_458.ColorRange.ElementView.BytesBetweenElements *
                      (longlong)(param_2 % local_458.ColorRange.ElementView.NumElements));
          }
          else {
            pTVar34 = &local_458.ColorRange.StubValue.field0_0x0;
          }
          (((TVector4<double>_u_0 *)&(pTVar34->_s_0).X)->_s_0).X = (double)uVar33;
          *(undefined8 *)((longlong)pTVar34 + 8) = uVar20;
          *(undefined8 *)((longlong)pTVar34 + 0x10) = uVar21;
          *(undefined8 *)((longlong)pTVar34 + 0x18) = uVar22;
          puVar6 = *(undefined8 **)((longlong)this + 0x28);
          uVar26 = 0;
          if (param_2 < local_458.DensityRange.NumElements) {
            uVar26 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar7 = (code *)swi(3);
            iVar25 = (*pcVar7)();
            return iVar25;
          }
          if (param_2 == param_2 % local_458.DensityRange.ElementView.NumElements) {
            pfVar28 = (float *)((longlong)local_458.DensityRange.ElementView.BytesBetweenElements *
                                (longlong)(param_2 % local_458.DensityRange.ElementView.NumElements)
                               + (longlong)local_458.DensityRange.ElementView.FirstElementPtr);
          }
          else {
            pfVar28 = &local_458.DensityRange.StubValue;
          }
          local_5a8[0] = *pfVar28;
          local_5b0[0] = fVar39;
          UE::Core::Private::Function::CheckCallable((void *)*puVar6);
          pcVar7 = (code *)*puVar6;
          plVar35 = (longlong *)puVar6[5];
          if ((longlong *)puVar6[5] == (longlong *)0x0) {
            plVar35 = puVar6 + 2;
          }
          uVar33 = (**(code **)(*plVar35 + 8))();
          fVar39 = (float)(*pcVar7)(uVar33,local_5a8,local_5b0);
          if (*(char *)(*(longlong *)this + 0x112) != '\0') {
            if (fVar19 <= fVar39) {
              fVar39 = fVar19;
            }
            if (fVar39 <= 0.0) {
              fVar39 = 0.0;
            }
          }
          uVar26 = 0;
          if (param_2 < local_458.DensityRange.NumElements) {
            uVar26 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar7 = (code *)swi(3);
            iVar25 = (*pcVar7)();
            return iVar25;
          }
          if (param_2 == param_2 % local_458.DensityRange.ElementView.NumElements) {
            pfVar28 = (float *)((longlong)local_458.DensityRange.ElementView.BytesBetweenElements *
                                (longlong)(param_2 % local_458.DensityRange.ElementView.NumElements)
                               + (longlong)local_458.DensityRange.ElementView.FirstElementPtr);
          }
          else {
LAB_149bfb024:
            pfVar28 = &local_458.DensityRange.StubValue;
          }
LAB_149bfb02b:
          iVar25 = iVar25 + 1;
          *pfVar28 = fVar39;
          param_2 = param_2 + 1;
        }
      }
      else {
        piVar31 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_288.SeedRange,uVar36);
        iVar3 = *piVar31;
        pfVar28 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_288.DensityRange,uVar36);
        fVar39 = *pfVar28;
        pTVar27 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_288.TransformRange,uVar36);
        FPCGPoint::FPCGPoint(&local_528,pTVar27,fVar39,iVar3);
        pTVar29 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_288.BoundsMinRange,uVar36);
        local_528.BoundsMin.field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
        local_528.BoundsMin.field0_0x0._s_0.Y = (pTVar29->field0_0x0)._s_0.Y;
        local_528.BoundsMin.field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
        pTVar29 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_288.BoundsMaxRange,uVar36);
        local_528.BoundsMax.field0_0x0._s_0.X = (double)*(undefined8 *)&pTVar29->field0_0x0;
        local_528.BoundsMax.field0_0x0._s_0.Y = *(double *)((longlong)&pTVar29->field0_0x0 + 8);
        local_528.BoundsMax.field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
        pfVar28 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_288.SteepnessRange,uVar36);
        local_528.Steepness = *pfVar28;
        pTVar30 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_288.ColorRange,uVar36);
        local_528.Color.field0_0x0._s_0.X = (pTVar30->field0_0x0)._s_0.X;
        local_528.Color.field0_0x0._s_0.Y = (pTVar30->field0_0x0)._s_0.Y;
        local_528.Color.field0_0x0._s_0.Z = (pTVar30->field0_0x0)._s_0.Z;
        local_528.Color.field0_0x0._s_0.W = (pTVar30->field0_0x0)._s_0.W;
        plVar32 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_288.MetadataEntryRange,uVar36);
        local_528.MetadataEntry = *plVar32;
        local_2c8 = local_528.BoundsMin.field0_0x0._s_0.X;
        dStack_2c0 = local_528.BoundsMin.field0_0x0._s_0.Y;
        local_2b8 = local_528.BoundsMin.field0_0x0._s_0.Z;
        local_2b0 = local_528.BoundsMax.field0_0x0._0_4_;
        uStack_2ac = local_528.BoundsMax.field0_0x0._4_4_;
        uStack_2a8 = local_528.BoundsMax.field0_0x0._8_4_;
        uStack_2a4 = local_528.BoundsMax.field0_0x0._12_4_;
        local_298 = 1;
        local_2a0 = local_528.BoundsMax.field0_0x0._s_0.Z;
        cVar24 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x3c0))
                           (*(longlong **)((longlong)this + 8),&local_528,&local_2c8,&local_528);
        dVar17 = local_528.Transform.Scale3D.ZW.m128d_f64[1];
        dVar16 = local_528.Transform.Scale3D.ZW.m128d_f64[0];
        dVar15 = local_528.Transform.Scale3D.XY.m128d_f64[1];
        dVar14 = local_528.Transform.Scale3D.XY.m128d_f64[0];
        dVar13 = local_528.Transform.Translation.ZW.m128d_f64[1];
        dVar12 = local_528.Transform.Translation.ZW.m128d_f64[0];
        dVar11 = local_528.Transform.Translation.XY.m128d_f64[1];
        dVar10 = local_528.Transform.Translation.XY.m128d_f64[0];
        dVar9 = local_528.Transform.Rotation.ZW.m128d_f64[1];
        dVar8 = local_528.Transform.Rotation.ZW.m128d_f64[0];
        dVar2 = local_528.Transform.Rotation.XY.m128d_f64[1];
        dVar1 = local_528.Transform.Rotation.XY.m128d_f64[0];
        if (cVar24 != '\0') {
          if (local_458.TransformRange.NumElements != 0) {
            pTVar27 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                      ::operator[](&local_458.TransformRange,param_2);
            (pTVar27->Rotation).XY.m128d_f64[0] = dVar1;
            (pTVar27->Rotation).XY.m128d_f64[1] = dVar2;
            (pTVar27->Rotation).ZW.m128d_f64[0] = dVar8;
            (pTVar27->Rotation).ZW.m128d_f64[1] = dVar9;
            (pTVar27->Translation).XY.m128d_f64[0] = dVar10;
            (pTVar27->Translation).XY.m128d_f64[1] = dVar11;
            (pTVar27->Translation).ZW.m128d_f64[0] = dVar12;
            (pTVar27->Translation).ZW.m128d_f64[1] = dVar13;
            (pTVar27->Scale3D).XY.m128d_f64[0] = dVar14;
            (pTVar27->Scale3D).XY.m128d_f64[1] = dVar15;
            (pTVar27->Scale3D).ZW.m128d_f64[0] = dVar16;
            (pTVar27->Scale3D).ZW.m128d_f64[1] = dVar17;
          }
          fVar39 = local_528.Density;
          if (local_458.DensityRange.NumElements != 0) {
            pfVar28 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_458.DensityRange,param_2);
            *pfVar28 = fVar39;
          }
          fVar39 = local_528.Steepness;
          if (local_458.SteepnessRange.NumElements != 0) {
            pfVar28 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_458.SteepnessRange,param_2);
            *pfVar28 = fVar39;
          }
          uVar21 = local_528.BoundsMin.field0_0x0._s_0.Z;
          uVar20 = local_528.BoundsMin.field0_0x0._s_0.Y;
          uVar33 = local_528.BoundsMin.field0_0x0._s_0.X;
          if (local_458.BoundsMinRange.NumElements != 0) {
            pTVar29 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_458.BoundsMinRange,param_2);
            (pTVar29->field0_0x0)._s_0.X = (double)uVar33;
            (pTVar29->field0_0x0)._s_0.Y = (double)uVar20;
            (pTVar29->field0_0x0)._s_0.Z = (double)uVar21;
          }
          uVar21 = local_528.BoundsMax.field0_0x0._s_0.Z;
          uVar20 = local_528.BoundsMax.field0_0x0._8_8_;
          uVar33 = local_528.BoundsMax.field0_0x0._0_8_;
          if (local_458.BoundsMaxRange.NumElements != 0) {
            pTVar29 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_458.BoundsMaxRange,param_2);
            (pTVar29->field0_0x0)._s_0.X = (double)uVar33;
            (pTVar29->field0_0x0)._s_0.Y = (double)uVar20;
            (pTVar29->field0_0x0)._s_0.Z = (double)uVar21;
          }
          uVar22 = local_528.Color.field0_0x0._s_0.W;
          uVar21 = local_528.Color.field0_0x0._s_0.Z;
          uVar20 = local_528.Color.field0_0x0._s_0.Y;
          uVar33 = local_528.Color.field0_0x0._s_0.X;
          if (local_458.ColorRange.NumElements != 0) {
            pTVar30 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                      ::operator[](&local_458.ColorRange,param_2);
            (pTVar30->field0_0x0)._s_0.X = (double)uVar33;
            (pTVar30->field0_0x0)._s_0.Y = (double)uVar20;
            (pTVar30->field0_0x0)._s_0.Z = (double)uVar21;
            (pTVar30->field0_0x0)._s_0.W = (double)uVar22;
          }
          iVar3 = local_528.Seed;
          if (local_458.SeedRange.NumElements != 0) {
            piVar31 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                                (&local_458.SeedRange,param_2);
            *piVar31 = iVar3;
          }
          lVar5 = local_528.MetadataEntry;
          if (local_458.MetadataEntryRange.NumElements != 0) {
            plVar32 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                (&local_458.MetadataEntryRange,param_2);
            *plVar32 = lVar5;
          }
          puVar6 = *(undefined8 **)((longlong)this + 0x28);
          uVar26 = 0;
          if (param_2 < local_458.DensityRange.NumElements) {
            uVar26 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar7 = (code *)swi(3);
            iVar25 = (*pcVar7)();
            return iVar25;
          }
          if (param_2 == param_2 % local_458.DensityRange.ElementView.NumElements) {
            pfVar28 = (float *)((longlong)local_458.DensityRange.ElementView.BytesBetweenElements *
                                (longlong)(param_2 % local_458.DensityRange.ElementView.NumElements)
                               + (longlong)local_458.DensityRange.ElementView.FirstElementPtr);
          }
          else {
            pfVar28 = &local_458.DensityRange.StubValue;
          }
          fVar39 = *pfVar28;
          uVar26 = 0;
          if ((int)uVar36 < local_288.DensityRange.NumElements) {
            uVar26 = ~uVar36 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar7 = (code *)swi(3);
            iVar25 = (*pcVar7)();
            return iVar25;
          }
          local_598[0] = *(float *)((longlong)
                                    ((int)uVar36 % local_288.DensityRange.ElementView.NumElements) *
                                    (longlong)
                                    local_288.DensityRange.ElementView.BytesBetweenElements +
                                   (longlong)local_288.DensityRange.ElementView.FirstElementPtr);
          local_5a0[0] = fVar39;
          UE::Core::Private::Function::CheckCallable((void *)*puVar6);
          pcVar7 = (code *)*puVar6;
          plVar35 = (longlong *)puVar6[5];
          if ((longlong *)puVar6[5] == (longlong *)0x0) {
            plVar35 = puVar6 + 2;
          }
          uVar33 = (**(code **)(*plVar35 + 8))();
          fVar39 = (float)(*pcVar7)(uVar33,local_598,local_5a0);
          if (*(char *)(*(longlong *)this + 0x112) != '\0') {
            if (fVar19 <= fVar39) {
              fVar39 = fVar19;
            }
            if (fVar39 <= 0.0) {
              fVar39 = 0.0;
            }
          }
          uVar26 = 0;
          if (param_2 < local_458.DensityRange.NumElements) {
            uVar26 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar7 = (code *)swi(3);
            iVar25 = (*pcVar7)();
            return iVar25;
          }
          if (param_2 != param_2 % local_458.DensityRange.ElementView.NumElements)
          goto LAB_149bfb024;
          pfVar28 = (float *)((longlong)local_458.DensityRange.ElementView.BytesBetweenElements *
                              (longlong)(param_2 % local_458.DensityRange.ElementView.NumElements) +
                             (longlong)local_458.DensityRange.ElementView.FirstElementPtr);
          goto LAB_149bfb02b;
        }
      }
      uVar36 = uVar36 + 1;
      local_588 = local_588 + 1;
      lVar37 = lVar37 + 0x18;
    } while ((int)uVar36 < local_590);
  }
  if (local_5c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.AllocatorInstance.Data);
  }
  return iVar25;
}

// CanExecuteOnlyOnMainThread @ 149c01920

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
FPCGSampleTextureElement::CanExecuteOnlyOnMainThread
          (FPCGSampleTextureElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c1a0a0

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
FPCGSampleTextureElement::ExecuteInternal(FPCGSampleTextureElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [8];
  ITextData *pIVar5;
  code *pcVar6;
  undefined1 auVar7 [8];
  undefined8 uVar8;
  undefined8 uVar9;
  FObjectPtr_u_0 FVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  UClass *pUVar15;
  UPCGSettings *pUVar16;
  TObjectPtr<UPCGSettings>_u_0 TVar17;
  FText *pFVar18;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar19;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar20;
  UPCGBasePointData *this_01;
  FPCGTaggedData *pFVar21;
  FName FVar22;
  FText *pFVar23;
  FTextFormat *pFVar24;
  TRefCountPtr<ITextData> TVar25;
  longlong *plVar26;
  FPCGTaggedData *pFVar27;
  uint uVar28;
  <lambda_1> <Var29;
  undefined1 auStackY_3d8 [32];
  longlong local_380;
  undefined1 local_378 [8];
  undefined1 local_370 [16];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_360;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_350;
  TObjectPtr<UPCGSettings>_u_0 local_340;
  FObjectPtr_u_0 local_338;
  FObjectPtr_u_0 local_330;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_328;
  FObjectPtr_u_0 local_318;
  undefined1 local_310 [16];
  <lambda_3> local_300;
  <lambda_2> local_2f8 [2];
  FPCGAttributePropertySelector local_2e8;
  FTextFormat local_2a8;
  FText local_298;
  <lambda_1> local_288;
  FFormatArgumentValue local_268;
  undefined4 local_248;
  longlong local_240;
  longlong *local_238;
  undefined4 local_230;
  TObjectPtr<UPCGSettings>_u_0 local_228;
  FObjectPtr_u_0 local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  FObjectPtr_u_0 local_208;
  undefined1 *local_200;
  UPCGBasePointData *local_1f8;
  FText local_1f0;
  FString local_1e0;
  FString local_1d0;
  FText local_1c0;
  FText local_1b0;
  FString local_1a0;
  FString local_190;
  FText local_180;
  FString local_170;
  FString local_160;
  FText local_150;
  FText local_140 [2];
  FString local_120;
  FString local_110;
  FPCGInitializeFromDataParams local_f8;
  FTextFormat local_b8;
  FTextFormat local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  <Var29 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId42,"FPCGSampleTextureElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSampleTexture.cpp"
               ,0x2a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId42);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSampleTexture.cpp"
                          ,0x2b,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar16 = UPCGNode::GetSettings(this_00), pUVar16 == (UPCGSettings *)0x0)) {
      pFVar21 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSampleTextureSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,<Var29);
      if (pFVar21 != (FPCGTaggedData *)0x0) {
        local_340.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar21->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_340.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c1a1f8;
          UE::GC::MarkAsReachable((UObject *)local_340.DebugPtr);
        }
        if (local_340.DebugPtr != (UPCGSettings *)0x0) {
          pUVar15 = UPCGSampleTextureSettings::StaticClass();
          bVar11 = FObjectPtr::IsA(&local_340.ObjectPtr,pUVar15);
          TVar17 = local_340;
          local_370._8_8_ = local_340;
          if (bVar11) goto LAB_149c1a200;
        }
      }
    }
    else {
      pUVar16 = UPCGNode::GetSettings(this_00);
      TVar17.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar16);
      if (TVar17.DebugPtr != (UPCGSettings *)0x0) {
        local_370._8_8_ = TVar17.DebugPtr;
        pUVar15 = UPCGSampleTextureSettings::StaticClass();
        iVar14 = (int)pUVar15->_padding_;
        if ((iVar14 <= *(int *)((TVar17.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar17.DebugPtr)->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
            &pUVar15->_padding_)) goto LAB_149c1a200;
      }
    }
LAB_149c1a1f8:
    local_370._8_8_ = (UPCGSettings *)0x0;
    TVar17.DebugPtr = (UPCGSettings *)local_370._8_8_;
  }
  else {
    pUVar15 = UPCGSampleTextureSettings::StaticClass();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar15);
    if (bVar11) {
      local_370._8_8_ = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar17 = (TObjectPtr<UPCGSettings>_u_0)local_370._8_8_;
    }
    else {
      local_370._8_8_ = (UPCGSettings *)0x0;
      TVar17.DebugPtr = (UPCGSettings *)local_370._8_8_;
    }
  }
LAB_149c1a200:
  if ((TVar17.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSampleTexture.cpp"
                          ,0x2e,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_360,&PCGSampleTextureConstants::InputPointLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_328,&PCGSampleTextureConstants::InputTextureLabel);
  if ((1 < local_328.ArrayNum) && (2 < (byte)LogPCG._0_1_)) {
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_1f0,L"PCGSampleTextureElement",L"InvalidNumberOfTextureData",
                         L"Only 1 texture input is allowed.");
    FText::ToString(pFVar18);
    FPCGContext::GetTaskName(param_1,&local_110);
    FPCGContext::GetExecutionSourceName(param_1,&local_120);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_1f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
    }
  }
  if (local_328.ArrayNum == 0) goto LAB_149c1adcb;
  if ((local_328.ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  local_338 = *(FObjectPtr_u_0 *)local_328.AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c1a402:
    if (local_338.Handle == (UObject *)0x0) goto LAB_149c1a422;
    pUVar15 = Z_Construct_UClass_UPCGBaseTextureData_NoRegister();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_338,pUVar15);
    local_318 = local_338;
    if (!bVar11) goto LAB_149c1a422;
  }
  else {
    if (local_338.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_338.Handle);
      goto LAB_149c1a402;
    }
LAB_149c1a422:
    local_318.Handle = (UObject *)0x0;
  }
  if (local_318.Handle != (UObject *)0x0) {
    PCGHelpers::GetDensityMergeFunction
              ((TFunction<float___cdecl(float,float)> *)local_68,
               *(EPCGDensityMergeOperation *)((longlong)&TVar17.DebugPtr[1]._padding_ + 1));
    uVar9 = local_370._8_8_;
    uVar28 = 0;
    if (0 < local_360.ArrayNum) {
      local_380 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar28 < local_360.ArrayNum) {
          uVar13 = ~uVar28 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        local_330 = (FObjectPtr_u_0)
                    ((FObjectPtr_u_0 *)(local_360.AllocatorInstance.Data + local_380))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c1a4e9:
          if ((UPCGSpatialData *)local_330.Handle == (UPCGSpatialData *)0x0) goto LAB_149c1ac5f;
          pUVar15 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_330,pUVar15);
          FVar10 = local_330;
          if ((!bVar11) || ((UPCGSpatialData *)local_330.Handle == (UPCGSpatialData *)0x0))
          goto LAB_149c1ac5f;
          local_370._0_8_ = (undefined8 *)0x0;
          local_378 = (undefined1  [8])0x0;
          if ((char)((UPCGSettings *)(uVar9 + 200))->_padding_ == '\x01') {
            FPCGAttributePropertyInputSelector::CopyAndFixLast
                      ((FPCGAttributePropertyInputSelector *)
                       &((UPCGSettings *)(uVar9 + 200))->_padding_,
                       (FPCGAttributePropertyInputSelector *)&local_2e8,(UPCGData *)local_330.Handle
                      );
            TVar19 = PCGAttributeAccessorHelpers::CreateConstAccessor
                               ((UPCGData *)local_310,(FPCGAttributePropertySelector *)FVar10.Handle
                                ,SUB81(&local_2e8,0));
            uVar8 = local_370._0_8_;
            puVar2 = (undefined8 *)local_370._0_8_;
            if ((IPCGAttributeAccessor *)(local_378 + 8) != TVar19.Ptr) {
              puVar2 = (undefined8 *)(TVar19.Ptr)->_padding_;
              (TVar19.Ptr)->_padding_ = 0;
              if ((undefined8 *)local_370._0_8_ != (undefined8 *)0x0) {
                puVar3 = *(undefined8 **)local_370._0_8_;
                local_370._0_8_ = puVar2;
                (*(code *)*puVar3)(uVar8,1);
                puVar2 = (undefined8 *)local_370._0_8_;
              }
            }
            local_370._0_8_ = puVar2;
            if ((undefined8 *)local_310._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_310._0_8_)(local_310._0_8_,1);
            }
            TVar20 = PCGAttributeAccessorHelpers::CreateConstKeys
                               ((UPCGData *)(local_310 + 8),
                                (FPCGAttributePropertySelector *)FVar10.Handle);
            auVar7 = local_378;
            auVar4 = local_378;
            if ((IPCGAttributeAccessorKeys *)local_378 != TVar20.Ptr) {
              auVar4 = (undefined1  [8])(TVar20.Ptr)->_padding_;
              (TVar20.Ptr)->_padding_ = 0;
              if (local_378 != (undefined1  [8])0x0) {
                puVar2 = *(undefined8 **)local_378;
                local_378 = auVar4;
                (*(code *)*puVar2)(auVar7,1);
                auVar4 = local_378;
              }
            }
            local_378 = auVar4;
            if ((undefined8 *)local_310._8_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_310._8_8_)(local_310._8_8_,1);
            }
            if (((undefined8 *)local_370._0_8_ == (undefined8 *)0x0) ||
               (local_378 == (undefined1  [8])0x0)) {
              if (2 < (byte)LogPCG._0_1_) {
                FVar22 = FPCGAttributePropertySelector::GetName(&local_2e8);
                pFVar18 = FText::FromName(&local_98,(FName *)FVar22);
                pFVar23 = FText::AsLocalizable_Advanced_LocText
                                    (&local_180,L"PCGSampleTextureElement",L"InvalidUVAccessor",
                                     L"Could not create coordinate accessor {0} for Point Input {1}."
                                    );
                pFVar24 = FTextFormat::FTextFormat(&local_88,pFVar23,Default);
                local_268.Type = Text;
                FText::FText((FText *)&local_268.TextValue,pFVar18);
                if ((local_268.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                     (ITextData *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  uVar12 = (*pcVar6)();
                  return (bool)uVar12;
                }
                local_240 = (longlong)(int)uVar28;
                local_248 = 0;
                local_238 = (longlong *)0x0;
                local_230 = 0;
                local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_350.ArrayNum = 2;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,2,0,&local_350.AllocatorInstance,2,&local_350.ArrayMax);
                ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                          (local_350.AllocatorInstance.Data,&local_268,2);
                local_2a8.TextFormatData.Object = (pFVar24->TextFormatData).Object;
                local_2a8.TextFormatData.SharedReferenceCount.ReferenceController =
                     (pFVar24->TextFormatData).SharedReferenceCount.ReferenceController;
                if (local_2a8.TextFormatData.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_2a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_2a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FText::Format(&local_298,&local_2a8,&local_350);
                DestructItems<FFormatArgumentValue,int>
                          ((FFormatArgumentValue *)local_350.AllocatorInstance.Data,
                           local_350.ArrayNum);
                if ((FFormatArgumentValue *)local_350.AllocatorInstance.Data !=
                    (FFormatArgumentValue *)0x0) {
                  FMemory::Free(local_350.AllocatorInstance.Data);
                }
                if (local_238 != (longlong *)0x0) {
                  (**(code **)(*local_238 + 0x10))();
                }
                if (local_268.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0
                   ) {
                  (**(code **)((longlong)
                               *(ITextData *)
                                local_268.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
                  )();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((pFVar24->TextFormatData).SharedReferenceCount.ReferenceController);
                pIVar5 = (pFVar18->TextData).Reference;
                if (pIVar5 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar5 + 0x10))();
                }
                FText::ToString(&local_298);
                FPCGContext::GetTaskName(param_1,&local_190);
                FPCGContext::GetExecutionSourceName(param_1,&local_1a0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                }
                if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_190.Data.AllocatorInstance.Data);
                }
                TVar25.Reference = local_180.TextData.Reference;
                if (local_298.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
                  TVar25.Reference = local_180.TextData.Reference;
                }
LAB_149c1ac04:
                if (TVar25.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*TVar25.Reference + 0x10))();
                }
              }
            }
            else {
              if ((*(ushort *)(local_370._0_8_ + 10) < 0xff) &&
                 ((ushort)(*(ushort *)(local_370._0_8_ + 10) - 4) < 2)) {
                DestructItems<FString,int>
                          ((FString *)local_2e8.ExtraNames.AllocatorInstance.Data,
                           local_2e8.ExtraNames.ArrayNum);
                if (local_2e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2e8.ExtraNames.AllocatorInstance.Data);
                }
                goto LAB_149c1a63b;
              }
              if (2 < (byte)LogPCG._0_1_) {
                FVar22 = FPCGAttributePropertySelector::GetName(&local_2e8);
                pFVar18 = FText::FromName(&local_78,(FName *)FVar22);
                pFVar23 = FText::AsLocalizable_Advanced_LocText
                                    (&local_1b0,L"PCGSampleTextureElement",L"InvalidAccessorType",
                                     L"Accessor {0} must be of type Vector2 or Vector3");
                pFVar24 = FTextFormat::FTextFormat(&local_a8,pFVar23,Default);
                pFVar18 = FText::Format<FText>(&local_1c0,pFVar24,pFVar18);
                FText::ToString(pFVar18);
                FPCGContext::GetTaskName(param_1,&local_1d0);
                FPCGContext::GetExecutionSourceName(param_1,&local_1e0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                }
                if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                }
                TVar25.Reference = local_1b0.TextData.Reference;
                if (local_1c0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
                  TVar25.Reference = local_1b0.TextData.Reference;
                }
                goto LAB_149c1ac04;
              }
            }
            DestructItems<FString,int>
                      ((FString *)local_2e8.ExtraNames.AllocatorInstance.Data,
                       local_2e8.ExtraNames.ArrayNum);
            if (local_2e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e8.ExtraNames.AllocatorInstance.Data);
            }
            if (local_378 != (undefined1  [8])0x0) {
              (*(code *)**(undefined8 **)local_378)(local_378,1);
            }
            if ((undefined8 *)local_370._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_370._0_8_)(local_370._0_8_,1);
            }
          }
          else {
LAB_149c1a63b:
            this_01 = FPCGContext::NewPointData_AnyThread(param_1);
            FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                      (&local_f8,(UPCGSpatialData *)FVar10.Handle);
            local_f8.bInheritSpatialData = false;
            UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_f8);
            local_220 = local_318;
            local_218 = local_378 + 8;
            local_210 = local_378;
            local_200 = local_68;
            local_288.PointData = (UPCGBasePointData *)FVar10;
            uVar13 = 0;
            if ((int)uVar28 < local_360.ArrayNum) {
              uVar13 = ~uVar28 >> 0x1f;
            }
            local_288.Settings = (UPCGSampleTextureSettings *)uVar9;
            local_228.DebugPtr = (UPCGSettings *)uVar9;
            local_208.Handle = FVar10.Handle;
            local_300.OutPointData = this_01;
            local_2f8[0].OutPointData = this_01;
            local_288.OutPointData = this_01;
            local_1f8 = this_01;
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
            pFVar21 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
            pFVar27 = (FPCGTaggedData *)
                      (local_360.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x78);
            if (((pFVar21 <= pFVar27) &&
                (pFVar27 < pFVar21 + (param_1->OutputData).TaggedData.ArrayMax)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
            iVar14 = (param_1->OutputData).TaggedData.ArrayNum;
            piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
            }
            (param_1->OutputData).TaggedData.ArrayNum = iVar14 + 1;
            pFVar21 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar14 * 0x78),pFVar27);
            FPCGDataPtrWrapper::operator=(&pFVar21->Data,(UPCGData *)this_01);
            iVar14 = (**(code **)(*(longlong *)FVar10.Handle + 0x488))(FVar10.Handle);
            FPCGAsync::
            AsyncProcessingRangeEx<_FPCGSampleTextureElement::ExecuteInternal_::__l42::<lambda_1>_&,_FPCGSampleTextureElement::ExecuteInternal_::__l42::<lambda_4>_&,_FPCGSampleTextureElement::ExecuteInternal_::__l42::<lambda_2>_&,_FPCGSampleTextureElement::ExecuteInternal_::__l42::<lambda_3>_&>
                      (&param_1->AsyncState,iVar14,&local_288,(<lambda_4> *)&local_228.ObjectPtr,
                       local_2f8,&local_300,false,0x40,true);
            DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                      ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                       local_f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                       Data,local_f8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
            if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                local_f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
                (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
              FMemory::Free(local_f8.MetadataInitializeParams.DomainInitializeParams.
                            AllocatorInstance.Data);
            }
            if (local_f8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
            }
            if (local_378 != (undefined1  [8])0x0) {
              (*(code *)**(undefined8 **)local_378)(local_378,1);
            }
            if ((undefined8 *)local_370._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_370._0_8_)(local_370._0_8_,1);
            }
          }
        }
        else {
          if ((UPCGSpatialData *)local_330.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_330.Handle);
            goto LAB_149c1a4e9;
          }
LAB_149c1ac5f:
          if (2 < (byte)LogPCG._0_1_) {
            pFVar18 = FText::AsLocalizable_Advanced_LocText
                                (local_140,L"PCGSampleTextureElement",L"InvalidPointData",
                                 L"Point Input {0} is not point data.");
            pFVar24 = FTextFormat::FTextFormat(&local_b8,pFVar18,Default);
            pFVar18 = FText::Format<int>(&local_150,pFVar24,uVar28);
            FText::ToString(pFVar18);
            FPCGContext::GetTaskName(param_1,&local_160);
            FPCGContext::GetExecutionSourceName(param_1,&local_170);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
            if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_160.Data.AllocatorInstance.Data);
            }
            if (local_150.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
            }
            if (local_140[0].TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_140[0].TextData.Reference + 0x10))();
            }
          }
        }
        local_380 = local_380 + 0x78;
        uVar28 = uVar28 + 1;
      } while ((int)uVar28 < local_360.ArrayNum);
    }
    if (local_68._0_8_ != 0) {
      plVar26 = (longlong *)(local_68 + 0x10);
      if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
        plVar26 = (longlong *)local_68._40_8_;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
  }
LAB_149c1adcb:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_328.AllocatorInstance.Data,local_328.ArrayNum);
  if ((FPCGTaggedData *)local_328.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_328.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_360.AllocatorInstance.Data,local_360.ArrayNum);
  if ((FPCGTaggedData *)local_360.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_360.AllocatorInstance.Data);
  }
  if ((bool)<Var29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c228f0

EPCGElementExecutionLoopMode __thiscall
FPCGSampleTextureElement::ExecutionLoopMode(FPCGSampleTextureElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c35880

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
FPCGSampleTextureElement::SupportsBasePointDataInputs
          (FPCGSampleTextureElement *this,FPCGContext *param_1)

{
  return true;
}

