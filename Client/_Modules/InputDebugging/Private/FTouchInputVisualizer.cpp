// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputDebugging
// Functions: 7

// FTouchInputVisualizer @ 14f035a40

FTouchInputVisualizer * __thiscall
FTouchInputVisualizer::FTouchInputVisualizer(FTouchInputVisualizer *this)

{
  <lambda_1> local_res10 [3];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTouchInputVisualizer__6B_;
  *(undefined8 *)&this->DebugTouchPoints = 0;
  *(undefined8 *)&(this->DebugTouchPoints).field_0x8 = 0;
  *(undefined8 *)&(this->DebugTouchPoints).field_0x20 = 0;
  *(undefined4 *)&(this->DebugTouchPoints).field_0x28 = 0;
  *(undefined4 *)&(this->DebugTouchPoints).field_0x2c = 0x80;
  *(undefined4 *)&(this->DebugTouchPoints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DebugTouchPoints).field_0x34 = 0;
  *(undefined8 *)&(this->DebugTouchPoints).field_0x40 = 0;
  *(undefined4 *)&(this->DebugTouchPoints).field_0x48 = 0;
  if (PRIVATE_GIsRunningCommandlet == false) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FTouchInputVisualizer::FTouchInputVisualizer_::__l5::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,local_res10);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FTouchInputVisualizer::FTouchInputVisualizer_::__l5::<lambda_2>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEnginePreExit,(<lambda_2> *)local_res10);
  }
  return this;
}

// ~FTouchInputVisualizer @ 14f035e70

void __thiscall FTouchInputVisualizer::~FTouchInputVisualizer(FTouchInputVisualizer *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->DebugTouchPoints).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DebugTouchPoints).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DebugTouchPoints);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7IInputProcessor__6B_;
  return;
}

// HandleMouseButtonDownEvent @ 14f036eb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTouchInputVisualizer::HandleMouseButtonDownEvent
          (FTouchInputVisualizer *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  uint local_res18 [4];
  uint *local_38;
  double *local_30;
  double local_28;
  double local_20;
  float local_18;
  
  if (param_2->bIsTouchEvent != false) {
    local_res18[0] = param_2->PointerIndex;
    local_28 = (double)*(float *)&param_2->ScreenSpacePosition;
    local_38 = local_res18;
    local_20 = (double)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
    local_18 = param_2->Force;
    local_30 = &local_28;
    TSet<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_&&,FTouchInputVisualizer::FDebugTouchPoint_&&>_>
              ((TSet<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>,FDefaultSetAllocator>
                *)&this->DebugTouchPoints,
               (TPairInitializer<unsigned_int_&&,FTouchInputVisualizer::FDebugTouchPoint_&&> *)
               (local_res18 + 2),(bool *)&local_38);
  }
  return false;
}

// HandleMouseButtonUpEvent @ 14f036f50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTouchInputVisualizer::HandleMouseButtonUpEvent
          (FTouchInputVisualizer *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  uint local_res18 [4];
  
  if (param_2->bIsTouchEvent != false) {
    local_res18[0] = param_2->PointerIndex;
    if (*(int *)&(this->DebugTouchPoints).field_0x8 != *(int *)&(this->DebugTouchPoints).field_0x34)
    {
      TSet<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>,FDefaultSetAllocator>
                  *)&this->DebugTouchPoints,local_res18[0],local_res18);
    }
  }
  return false;
}

// HandleMouseMoveEvent @ 14f036f90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTouchInputVisualizer::HandleMouseMoveEvent
          (FTouchInputVisualizer *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  uint local_res18 [4];
  uint *local_38;
  double *local_30;
  double local_28;
  double local_20;
  float local_18;
  
  if (param_2->bIsTouchEvent != false) {
    local_res18[0] = param_2->PointerIndex;
    local_28 = (double)*(float *)&param_2->ScreenSpacePosition;
    local_38 = local_res18;
    local_20 = (double)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
    local_18 = param_2->Force;
    local_30 = &local_28;
    TSet<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_&&,FTouchInputVisualizer::FDebugTouchPoint_&&>_>
              ((TSet<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>,FDefaultSetAllocator>
                *)&this->DebugTouchPoints,
               (TPairInitializer<unsigned_int_&&,FTouchInputVisualizer::FDebugTouchPoint_&&> *)
               (local_res18 + 2),(bool *)&local_38);
  }
  return false;
}

// OnDebugDraw @ 14f0375e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FTouchInputVisualizer::OnDebugDraw(FTouchInputVisualizer *this,UCanvas *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  TMap<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>_>
  *pTVar12;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  TMap<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>_>
  *pTVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  float extraout_XMM0_Da;
  double dVar23;
  float extraout_XMM0_Db;
  undefined1 auStack_278 [32];
  undefined1 local_258 [8];
  TMap<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>_>
  *local_250;
  int iStack_248;
  uint uStack_244;
  undefined1 *local_240;
  undefined4 uStack_238;
  int iStack_234;
  int local_230;
  int iStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  int local_220;
  TBitArray<FDefaultBitArrayAllocator> *local_218;
  TMap<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>_>
  *local_210;
  TMap<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint,0>_>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  FCanvasItem local_1d8;
  double local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined4 local_168;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_278;
  if (GInputEnableTouchDebugVisualizer != 0) {
    local_158.M[0][0] = (double)(param_1->ClipX / (float)param_1->SizeX);
    local_158.M[0][2] = 0.0;
    local_158.M[0][3] = 0.0;
    local_158.M[1][1] = (double)(param_1->ClipY / (float)param_1->SizeY);
    local_158.M[1][2] = 0.0;
    local_158.M[1][3] = 0.0;
    local_158.M[2][2] = ___xmm_00000000000000003ff0000000000000;
    local_158.M[2][3] = _UNK_150689518;
    local_158.M[2][0] = 0.0;
    local_158.M[2][1] = 0.0;
    local_158.M[3][0] = 0.0;
    local_158.M[3][1] = 0.0;
    local_158.M[0][1] = 0.0;
    local_158.M[1][0] = 0.0;
    local_158.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_158.M[3][3] = _UNK_15061cbc8;
    FCanvas::PushRelativeTransform(param_1->Canvas,&local_158);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Color = FColor::Yellow;
      _Init_thread_footer(&::_TSS0);
    }
    pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->DebugTouchPoints).field_0x10;
    iVar17 = *(int *)&(this->DebugTouchPoints).field_0x28;
    pTVar21 = &this->DebugTouchPoints;
    iStack_248 = 0;
    local_230 = 0;
    uStack_244 = 1;
    dVar23 = (double)param_1->SizeX * __real_3f947ae147ae147b;
    iStack_234 = 0;
    if (iVar17 != 0) {
      puVar20 = *(uint **)&(this->DebugTouchPoints).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)pTVar22;
      }
      uVar18 = *puVar20;
      while (uVar18 == 0) {
        lVar14 = (longlong)iStack_248;
        local_230 = local_230 + 0x20;
        iStack_248 = iStack_248 + 1;
        iStack_234 = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_248)
        goto LAB_14f0377be;
        uVar18 = puVar20[lVar14 + 1];
      }
      uStack_244 = -uVar18 & uVar18;
      uVar1 = (ulonglong)uStack_244 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_220 = (int)lVar14;
      iStack_234 = local_230 + -1 + local_220;
      if (iVar17 < iStack_234) {
        iStack_234 = iVar17;
      }
    }
LAB_14f0377be:
    iStack_228 = *(int *)&(this->DebugTouchPoints).field_0x8 -
                 *(int *)&(this->DebugTouchPoints).field_0x34;
    uVar18 = *(uint *)&(this->DebugTouchPoints).field_0x28;
    uStack_238 = 0xffffffff;
    uVar16 = uVar18 & 0xffffffe0;
    TStack_200._padding_ = CONCAT44(uStack_244,iStack_248);
    TStack_200.CurrentBitIndex = iStack_234;
    TStack_200.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar18 >> 5;
    TStack_200._28_4_ = iStack_234;
    TStack_200.BaseBitIndex = local_230;
    uStack_1e0 = CONCAT44(uStack_224,iStack_228);
    local_250 = pTVar21;
    local_240 = (undefined1 *)pTVar22;
    iStack_22c = iStack_234;
    local_218 = pTVar22;
    local_210 = pTVar21;
    local_208 = pTVar21;
    TStack_200.Array = pTVar22;
    if ((((int)uVar18 < 0) || (iVar17 < (int)uVar18)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar11 = __real_3b808081;
    fVar10 = __real_3f800000;
    uVar2 = *(uint *)&(this->DebugTouchPoints).field_0x28;
    if (uVar18 != uVar2) {
      puVar19 = *(undefined1 **)&(this->DebugTouchPoints).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = (undefined1 *)pTVar22;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar18 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14f0378f0;
        uVar18 = *(uint *)(puVar19 + lVar14 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar18 = (int)lVar14 + -1 + uVar16;
      if ((int)uVar2 < (int)uVar18) {
        uVar18 = uVar2;
      }
    }
LAB_14f0378f0:
    while( true ) {
      pTVar12 = local_208;
      if (*(int *)&local_208->field_0x8 - *(int *)&local_208->field_0x34 != (int)uStack_1e0) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTouchInputVisualizer::FDebugTouchPoint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
      }
      lVar14 = (longlong)TStack_200.CurrentBitIndex;
      if (((TStack_200.CurrentBitIndex == uVar18) && (TStack_200.Array == pTVar22)) &&
         (pTVar12 == pTVar21)) break;
      lVar3 = *(longlong *)pTVar12;
      iVar17 = 1;
      dVar7 = (double)((*(float *)(lVar3 + 0x18 + lVar14 * 0x28) + fVar10) * (float)dVar23);
      dVar8 = dVar7 + *(double *)(lVar3 + 8 + lVar14 * 0x28);
      dVar9 = *(double *)(lVar3 + 0x10 + lVar14 * 0x28);
      do {
        __libm_sse2_sincosf_();
        local_1d8.StereoDepth = 0;
        local_1d8.BlendMode = SE_BLEND_Opaque;
        local_1d8.bFreezeTime = false;
        local_1d8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
        local_1d8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
        local_168 = 0x40400000;
        local_1d8.Color.field0_0x0._s_0.R =
             FLinearColor::sRGBToLinearTable[(uint)::Color.field0_0x0 >> 0x10 & 0xff];
        local_1d8.Color.field0_0x0._s_0.G =
             FLinearColor::sRGBToLinearTable[(uint)::Color.field0_0x0 >> 8 & 0xff];
        local_1d8.Color.field0_0x0._s_0.B =
             FLinearColor::sRGBToLinearTable[(uint)::Color.field0_0x0 & 0xff];
        dVar6 = (double)extraout_XMM0_Db * dVar7 + *(double *)(lVar3 + 8 + lVar14 * 0x28);
        dVar5 = (double)extraout_XMM0_Da * dVar7 + *(double *)(lVar3 + 0x10 + lVar14 * 0x28);
        local_1d8.Color.field0_0x0._s_0.A = (float)((uint)::Color.field0_0x0 >> 0x18) * fVar11;
        local_188 = 0;
        local_170 = 0;
        local_1d8.Position.field0_0x0._s_0.X = dVar8;
        local_1d8.Position.field0_0x0._s_0.Y = dVar9;
        local_198 = dVar8;
        local_190 = dVar9;
        local_180 = dVar6;
        local_178 = dVar5;
        UCanvas::DrawItem(param_1,&local_1d8);
        iVar17 = iVar17 + 1;
        dVar8 = dVar6;
        dVar9 = dVar5;
      } while (iVar17 != 0x15);
      TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
      pTVar21 = local_210;
      pTVar22 = local_218;
    }
    FCanvas::PopTransform(param_1->Canvas);
  }
  return;
}

// Tick @ 14f03a150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTouchInputVisualizer::Tick
          (FTouchInputVisualizer *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

