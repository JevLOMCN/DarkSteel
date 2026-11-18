// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 52

// Call @ 142356390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::ImageParallelProcessLinearPixels<`FImageCore::ComputeImageLinearAverage'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  long64 lVar1;
  FImageView local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_4_ = 0;
  local_28._padding_._4_2_ = 0x201;
  local_28.RawData = (void *)0x0;
  lVar1 = FImageCore::ImageParallelForMakePart
                    (&local_28,param_1,(longlong)*param_2,*(long64 *)((longlong)param_1 + 0x18));
  FImageCore::ProcessLinearPixels<_FImageCore::ComputeImageLinearAverage_::__l2::<lambda_1>_>
            (&local_28,(<lambda_1> *)((longlong)param_1 + 0x20),lVar1);
  return;
}

// Call @ 1423563f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::ImageParallelProcessLinearPixels<`FImageCore::ScaleChannelsSoMinMaxIsInZeroToOne'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  long64 lVar1;
  FImageView local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_4_ = 0;
  local_28._padding_._4_2_ = 0x201;
  local_28.RawData = (void *)0x0;
  lVar1 = FImageCore::ImageParallelForMakePart
                    (&local_28,param_1,(longlong)*param_2,*(long64 *)((longlong)param_1 + 0x18));
  FImageCore::
  ProcessLinearPixels<_FImageCore::ScaleChannelsSoMinMaxIsInZeroToOne_::__l2::<lambda_1>_>
            (&local_28,(<lambda_1> *)((longlong)param_1 + 0x20),lVar1);
  return;
}

// Call @ 142356450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::ImageParallelProcessLinearPixels<`ComputeChannelLinearMinMax_Generic'::__l19::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  long64 lVar1;
  FImageView local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_4_ = 0;
  local_28._padding_._4_2_ = 0x201;
  local_28.RawData = (void *)0x0;
  lVar1 = FImageCore::ImageParallelForMakePart
                    (&local_28,param_1,(longlong)*param_2,*(long64 *)((longlong)param_1 + 0x18));
  FImageCore::ProcessLinearPixels<_ComputeChannelLinearMinMax_Generic_::__l19::<lambda_1>_>
            (&local_28,(<lambda_1> *)((longlong)param_1 + 0x20),lVar1);
  return;
}

// Call @ 1423564b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::SanitizeFloat16AndSetAlphaOpaqueForBC6H'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FImageCore::
  ImageParallelFor<`FImageCore::SanitizeFloat16AndSetAlphaOpaqueForBC6H'::__l2::<lambda_1>_>'::__l2
  ::<lambda_1>::operator()(param_1,(longlong)*param_2);
  return;
}

// Call @ 1423564c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::SetAlphaOpaque'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FImageCore::ImageParallelFor<`FImageCore::SetAlphaOpaque'::__l2::<lambda_1>_>'::__l2::<lambda_1>
  ::operator()(param_1,(longlong)*param_2);
  return;
}

// Call @ 1423564d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::CopyImage'::__l193::<lambda_30>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  long64 lVar1;
  FImageView local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_4_ = 0;
  local_28._padding_._4_2_ = 0x201;
  local_28.RawData = (void *)0x0;
  lVar1 = FImageCore::ImageParallelForMakePart
                    (&local_28,param_1,(longlong)*param_2,*(long64 *)((longlong)param_1 + 0x18));
  `FImageCore::CopyImage'::__l193::<lambda_30>::operator()
            ((void *)((longlong)param_1 + 0x20),&local_28,lVar1);
  return;
}

// Call @ 142356530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<4,`FImageCore::CopyImage'::__l158::<lambda_16>,`FImageCore::CopyImage'::__l158::<lambda_17>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<4,`FImageCore::CopyImage'::__l158::<lambda_16>,`FImageCore::CopyImage'::__l158::<lambda_17>_>'
  ::__l2::<lambda_1>::operator()(param_1,(longlong)*param_2);
  return;
}

// Call @ 142356540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<4,`FImageCore::CopyImage'::__l174::<lambda_25>,`FImageCore::CopyImage'::__l174::<lambda_26>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<4,`FImageCore::CopyImage'::__l174::<lambda_25>,`FImageCore::CopyImage'::__l174::<lambda_26>_>'
  ::__l2::<lambda_1>::operator()(param_1,(longlong)*param_2);
  return;
}

// Call @ 142356550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<4,`FImageCore::CopyImage'[::F]::<lambda_5>,`CopyImage::F'[::F]::<lambda_6>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<4,`FImageCore::CopyImage'[::F]::<lambda_5>,`CopyImage::F'[::F]::<lambda_6>_>'::__l2
  ::<lambda_1>::operator()(param_1,(longlong)*param_2);
  return;
}

// Call @ 142356560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelOr<`FImageCore::DetectAlphaChannel'::__l8::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar2 = (longlong)*param_2 * **(longlong **)param_1;
  lVar1 = lVar2 + **(longlong **)param_1;
  lVar4 = **(longlong **)((longlong)param_1 + 8);
  if (lVar1 < **(longlong **)((longlong)param_1 + 8)) {
    lVar4 = lVar1;
  }
  if (lVar2 < lVar4) {
    pcVar3 = (char *)(lVar2 * 4 + 3 + *(longlong *)**(undefined8 **)((longlong)param_1 + 0x10));
    while (*pcVar3 == -1) {
      lVar2 = lVar2 + 1;
      pcVar3 = pcVar3 + 4;
      if (lVar4 <= lVar2) {
        return;
      }
    }
    **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  }
  return;
}

// Call @ 1423565d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelOr<`FImageCore::DetectAlphaChannel'::__l19::<lambda_2>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)*param_2 * **(longlong **)param_1;
  lVar1 = lVar3 + **(longlong **)param_1;
  lVar4 = **(longlong **)((longlong)param_1 + 8);
  if (lVar1 < **(longlong **)((longlong)param_1 + 8)) {
    lVar4 = lVar1;
  }
  if (lVar3 < lVar4) {
    pfVar2 = (float *)(*(longlong *)**(undefined8 **)((longlong)param_1 + 0x10) + 0xc + lVar3 * 0x10
                      );
    while (*(float *)(*(undefined8 **)((longlong)param_1 + 0x10))[1] < *pfVar2) {
      lVar3 = lVar3 + 1;
      pfVar2 = pfVar2 + 4;
      if (lVar4 <= lVar3) {
        return;
      }
    }
    **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  }
  return;
}

// Call @ 142356640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelOr<`FImageCore::DetectAlphaChannel'::__l30::<lambda_3>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  
  lVar2 = (longlong)*param_2 * **(longlong **)param_1;
  lVar1 = lVar2 + **(longlong **)param_1;
  lVar4 = **(longlong **)((longlong)param_1 + 8);
  if (lVar1 < **(longlong **)((longlong)param_1 + 8)) {
    lVar4 = lVar1;
  }
  if (lVar2 < lVar4) {
    psVar3 = (short *)(lVar2 * 8 + 6 + *(longlong *)**(undefined8 **)((longlong)param_1 + 0x10));
    while (*psVar3 == -1) {
      lVar2 = lVar2 + 1;
      psVar3 = psVar3 + 4;
      if (lVar4 <= lVar2) {
        return;
      }
    }
    **(undefined1 **)((longlong)param_1 + 0x18) = 1;
  }
  return;
}

// Call @ 1423566b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelOr<`FImageCore::DetectAlphaChannel'::__l41::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelOr<`FImageCore::DetectAlphaChannel'::__l41::<lambda_4>_>'::__l2::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 1423566c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ComputeChannelLinearMinMax'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FImageCore::ComputeChannelLinearMinMax'::__l2::<lambda_1>::operator()(param_1,(longlong)*param_2)
  ;
  return;
}

// Call @ 1423566d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'[::J]::<lambda_10>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'[::J]::<lambda_10>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 1423566e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'[::K]::<lambda_11>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'[::K]::<lambda_11>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 1423566f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_12>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_12>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_13>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_13>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_14>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_14>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l155::<lambda_15>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  fVar3 = __real_37800080;
  lVar5 = (longlong)*param_2 * *(longlong *)param_1;
  lVar4 = *(longlong *)param_1 + lVar5;
  lVar6 = *(longlong *)((longlong)param_1 + 8);
  if (lVar4 < *(longlong *)((longlong)param_1 + 8)) {
    lVar6 = lVar4;
  }
  if (lVar5 < lVar6) {
    lVar4 = lVar5 * 0x10;
    do {
      lVar1 = lVar5 * 2;
      lVar5 = lVar5 + 1;
      lVar2 = *(longlong *)((longlong)param_1 + 0x10);
      fVar7 = (float)*(ushort *)(*(longlong *)((longlong)param_1 + 0x18) + lVar1) * fVar3;
      *(float *)(lVar4 + lVar2) = fVar7;
      *(float *)(lVar4 + 4 + lVar2) = fVar7;
      *(float *)(lVar4 + 8 + lVar2) = fVar7;
      *(undefined4 *)(lVar4 + 0xc + lVar2) = 0x3f800000;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < lVar6);
  }
  return;
}

// Call @ 1423567a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l158::<lambda_18>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l158::<lambda_18>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 1423567b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l158::<lambda_19>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l158::<lambda_19>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 1423567c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::TransformToWorkingColorSpace'::__l2::<lambda_1>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::TransformToWorkingColorSpace'::__l2::<lambda_1>_>'::__l9::<lambda_1>::
  operator()(param_1,(longlong)*param_2);
  return;
}

// Call @ 1423567d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImageTo2U16'::__l51::<lambda_1>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImageTo2U16'::__l51::<lambda_1>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 1423567e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l69::<lambda_1>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l69::<lambda_1>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 1423567f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l124::<lambda_1>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l124::<lambda_1>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l159::<lambda_20>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l159::<lambda_20>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l160::<lambda_21>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l160::<lambda_21>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l161::<lambda_22>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  uint uVar5;
  undefined1 auVar6 [14];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar37;
  uint uVar38;
  uint uVar36;
  
  uVar30 = _UNK_1506896ec;
  uVar29 = _UNK_1506896e8;
  uVar28 = _UNK_1506896e4;
  uVar27 = __xmm_7f8000007f8000007f8000007f800000;
  fVar26 = _UNK_1506896dc;
  fVar25 = _UNK_1506896d8;
  fVar24 = _UNK_1506896d4;
  fVar23 = ___xmm_77800000778000007780000077800000;
  uVar22 = _UNK_1506895bc;
  uVar21 = _UNK_1506895b8;
  uVar20 = _UNK_1506895b4;
  uVar19 = ___xmm_00400000004000000040000000400000;
  uVar18 = _UNK_1506895ac;
  uVar17 = _UNK_1506895a8;
  uVar16 = _UNK_1506895a4;
  uVar15 = ___xmm_00007fff00007fff00007fff00007fff;
  iVar14 = _UNK_15068959c;
  iVar13 = _UNK_150689598;
  iVar12 = _UNK_150689594;
  iVar11 = ___xmm_00007c0000007c0000007c0000007c00;
  iVar10 = _UNK_15068958c;
  iVar9 = _UNK_150689588;
  iVar8 = _UNK_150689584;
  iVar7 = ___xmm_00007bff00007bff00007bff00007bff;
  lVar31 = (longlong)*param_2 * *(longlong *)param_1;
  lVar32 = lVar31 + *(longlong *)param_1;
  lVar33 = *(longlong *)((longlong)param_1 + 8);
  if (lVar32 < *(longlong *)((longlong)param_1 + 8)) {
    lVar33 = lVar32;
  }
  if (lVar31 < lVar33) {
    lVar32 = lVar31 * 0x10;
    do {
      uVar2 = *(ulonglong *)(*(longlong *)((longlong)param_1 + 0x18) + lVar31 * 8);
      lVar31 = lVar31 + 1;
      auVar3._8_4_ = 0;
      auVar3._0_8_ = uVar2;
      auVar3._12_2_ = (short)(uVar2 >> 0x30);
      auVar4._8_2_ = (short)(uVar2 >> 0x20);
      auVar4._0_8_ = uVar2;
      auVar4._10_4_ = auVar3._10_4_;
      auVar6._6_8_ = 0;
      auVar6._0_6_ = auVar4._8_6_;
      uVar34 = (ushort)uVar2 & uVar15;
      uVar36 = (uint)CONCAT82(SUB148(auVar6 << 0x40,6),(short)(uVar2 >> 0x10));
      uVar35 = uVar36 & uVar16;
      uVar5 = auVar3._10_4_ >> 0x10;
      uVar37 = auVar4._8_4_ & uVar17;
      uVar38 = uVar5 & uVar18;
      puVar1 = (uint *)(lVar32 + *(longlong *)((longlong)param_1 + 0x10));
      *puVar1 = -(uint)(iVar11 < (int)uVar34) & uVar19 | -(uint)(iVar7 < (int)uVar34) & uVar27 |
                ((ushort)uVar2 ^ uVar34) << 0x10 | (uint)((float)(uVar34 << 0xd) * fVar23);
      puVar1[1] = -(uint)(iVar12 < (int)uVar35) & uVar20 | -(uint)(iVar8 < (int)uVar35) & uVar28 |
                  (uVar36 ^ uVar35) << 0x10 | (uint)((float)(uVar35 << 0xd) * fVar24);
      puVar1[2] = -(uint)(iVar13 < (int)uVar37) & uVar21 | -(uint)(iVar9 < (int)uVar37) & uVar29 |
                  (auVar4._8_4_ ^ uVar37) << 0x10 | (uint)((float)(uVar37 << 0xd) * fVar25);
      puVar1[3] = -(uint)(iVar14 < (int)uVar38) & uVar22 | -(uint)(iVar10 < (int)uVar38) & uVar30 |
                  (uVar5 ^ uVar38) << 0x10 | (uint)((float)(uVar38 << 0xd) * fVar26);
      lVar32 = lVar32 + 0x10;
    } while (lVar31 < lVar33);
  }
  return;
}

// Call @ 142356940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l162::<lambda_23>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l162::<lambda_23>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l163::<lambda_24>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l163::<lambda_24>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l178::<lambda_27>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l178::<lambda_27>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l182::<lambda_28>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)*param_2 * *(longlong *)param_1;
  lVar1 = lVar2 + *(longlong *)param_1;
  lVar3 = *(longlong *)((longlong)param_1 + 8);
  if (lVar1 < *(longlong *)((longlong)param_1 + 8)) {
    lVar3 = lVar1;
  }
  for (; lVar2 < lVar3; lVar2 = lVar2 + 1) {
    *(undefined1 *)(lVar2 + *(longlong *)((longlong)param_1 + 0x10)) =
         *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 2 + lVar2 * 4);
  }
  return;
}

// Call @ 1423569c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l186::<lambda_29>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8;
  
  lVar4 = (longlong)*param_2 * *(longlong *)param_1;
  lVar1 = lVar4 + *(longlong *)param_1;
  lVar5 = *(longlong *)((longlong)param_1 + 8);
  if (lVar1 < *(longlong *)((longlong)param_1 + 8)) {
    lVar5 = lVar1;
  }
  if (lVar4 < lVar5) {
    local_res8 = 0xff000000;
    do {
      uVar3 = local_res8;
      uVar2 = *(undefined1 *)(lVar4 + *(longlong *)((longlong)param_1 + 0x10));
      local_res8._3_1_ = SUB41(uVar3,3);
      local_res8._0_3_ = CONCAT12(uVar2,CONCAT11(uVar2,uVar2));
      *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + lVar4 * 4) = local_res8;
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar5);
  }
  return;
}

// Call @ 142356a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImageTo2U16'::__l55::<lambda_2>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)*param_2 * *(longlong *)param_1;
  lVar4 = *(longlong *)param_1 + lVar5;
  lVar6 = *(longlong *)((longlong)param_1 + 8);
  if (lVar4 < *(longlong *)((longlong)param_1 + 8)) {
    lVar6 = lVar4;
  }
  for (; lVar5 < lVar6; lVar5 = lVar5 + 1) {
    uVar2 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + lVar5 * 4);
    puVar1 = (ushort *)(*(longlong *)((longlong)param_1 + 0x10) + lVar5 * 4);
    uVar3 = (ushort)((uint)uVar2 >> 0x10);
    *puVar1 = uVar3 << 8 | uVar3 & 0xff;
    uVar3 = (ushort)((uint)uVar2 >> 8);
    puVar1[1] = uVar3 << 8 | uVar3 & 0xff;
  }
  return;
}

// Call @ 142356a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l70::<lambda_2>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l70::<lambda_2>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l126::<lambda_2>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l126::<lambda_2>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l71::<lambda_3>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l71::<lambda_3>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356ac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l127::<lambda_3>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'::__l127::<lambda_3>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356ad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l72::<lambda_4>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l72::<lambda_4>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356ae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l73::<lambda_5>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l73::<lambda_5>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l74::<lambda_6>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l74::<lambda_6>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l75::<lambda_7>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l75::<lambda_7>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'[::G]::<lambda_7>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'[::G]::<lambda_7>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l76::<lambda_8>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l76::<lambda_8>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356b30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'[::H]::<lambda_8>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'[::H]::<lambda_8>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l77::<lambda_9>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImage::Linearize'::__l77::<lambda_9>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'[::I]::<lambda_9>_>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ParallelLoop<`FImageCore::CopyImage'[::I]::<lambda_9>_>'::__l9::<lambda_1>::operator()
            (param_1,(longlong)*param_2);
  return;
}

// Call @ 142356b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ResizeImage'::__l25::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FImageCore::ResizeImage'::__l25::<lambda_1>::operator()(param_1,(longlong)*param_2);
  return;
}

// Call @ 142356b70

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FMipMapImage::CopyTo'::__l26::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  FImageView local_38;
  FImageView local_20;
  
  iVar1 = *param_2;
  FMipMapImage::GetMipImage(*(FMipMapImage **)param_1,&local_20,iVar1);
  FMipMapImage::GetMipImage(*(FMipMapImage **)((longlong)param_1 + 8),&local_38,iVar1);
  FImageCore::CopyImage(&local_20,&local_38);
  return;
}

// Call @ 142356bc0

/* WARNING: Enum "stbir_pixel_layout": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCore::ResizeImage'::__l109::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  STBIR_RESIZE *pSVar5;
  stbir__info *psVar6;
  float *pfVar7;
  int iVar8;
  stbir__per_split_info *psVar9;
  stbir__contributors *psVar10;
  uint uVar11;
  ulonglong uVar12;
  
  iVar1 = *param_2;
  pSVar5 = *(STBIR_RESIZE **)param_1;
  if ((iVar1 == -1) || ((iVar1 == 0 && (pSVar5->splits == 1)))) {
    stbir_resize_extended(pSVar5);
    return;
  }
  psVar6 = pSVar5->samplers;
  if ((((psVar6 != (stbir__info *)0x0) && (pSVar5->needs_rebuild == 0)) && (iVar1 < pSVar5->splits))
     && ((-1 < iVar1 && (iVar1 + 1 <= pSVar5->splits)))) {
    psVar9 = psVar6->split_info + iVar1;
    if ((psVar6->vertical).is_gather == 0) {
      stbir__vertical_scatter_loop(psVar6,psVar9,1);
      return;
    }
    uVar11 = psVar9->start_output_y;
    uVar12 = (ulonglong)(int)uVar11;
    iVar1 = psVar9->end_output_y;
    psVar10 = (psVar6->vertical).contributors + uVar12;
    iVar2 = (psVar6->vertical).coefficient_width;
    pfVar7 = (psVar6->vertical).coefficients;
    psVar9->ring_buffer_begin_index = 0;
    pfVar7 = pfVar7 + (int)(uVar11 * iVar2);
    iVar2 = psVar10->n0;
    psVar9->ring_buffer_first_scanline = iVar2;
    psVar9->ring_buffer_last_scanline = iVar2 + -1;
    while ((int)uVar11 < iVar1) {
      iVar3 = psVar10->n1;
      iVar4 = psVar10->n0;
      iVar2 = psVar9->ring_buffer_last_scanline;
      while (iVar2 < iVar3) {
        iVar8 = psVar9->ring_buffer_first_scanline;
        if ((iVar2 - iVar8) + 1 == psVar6->ring_buffer_num_entries) {
          iVar8 = iVar8 + 1;
          psVar9->ring_buffer_begin_index = psVar9->ring_buffer_begin_index + 1;
          psVar9->ring_buffer_first_scanline = iVar8;
        }
        iVar2 = iVar2 + 1;
        if (psVar6->vertical_first == 0) {
          stbir__decode_scanline(psVar6,iVar2,psVar9->decode_buffer);
          psVar9->ring_buffer_last_scanline = iVar2;
          stbir__resample_horizontal_gather
                    (psVar6,(float *)((longlong)
                                      ((((iVar2 - psVar9->ring_buffer_first_scanline) +
                                        psVar9->ring_buffer_begin_index) %
                                       psVar6->ring_buffer_num_entries) *
                                      psVar6->ring_buffer_length_bytes) +
                                     (longlong)psVar9->ring_buffer),psVar9->decode_buffer);
        }
        else {
          psVar9->ring_buffer_last_scanline = iVar2;
          stbir__decode_scanline
                    (psVar6,iVar2,
                     (float *)((longlong)
                               ((((iVar2 - iVar8) + psVar9->ring_buffer_begin_index) %
                                psVar6->ring_buffer_num_entries) * psVar6->ring_buffer_length_bytes)
                              + (longlong)psVar9->ring_buffer));
        }
        iVar2 = psVar9->ring_buffer_last_scanline;
      }
      stbir__resample_vertical_gather(psVar6,psVar9,(int)uVar12,iVar4,iVar3,pfVar7);
      psVar10 = psVar10 + 1;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      pfVar7 = pfVar7 + (psVar6->vertical).coefficient_width;
    }
    return;
  }
  return;
}

// Call @ 142356c30

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FImageCore::CopyImage'[::D]::<lambda_4>,void,int>::
Call(void *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  lVar2 = *param_2 * lVar1;
  lVar3 = *(longlong *)((longlong)param_1 + 0x18) - lVar2;
  if (lVar1 < lVar3) {
    lVar3 = lVar1;
  }
  ConvertFLinearColorsToFColorSRGB
            ((FLinearColor *)(lVar2 * 0x10 + *(longlong *)((longlong)param_1 + 8)),
             (FColor *)(*(longlong *)param_1 + lVar2 * 4),lVar3);
  return;
}

