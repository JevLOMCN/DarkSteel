// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// InitRHI @ 144b77b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector4<float>_>::InitRHI
          (TStencilSphereVertexBuffer<18,12,UE::Math::TVector4<float>_> *this,
          FRHICommandListBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FRHIResource *this_00;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ForElementType<UE::Math::TVector4<float>_> FVar12;
  ForElementType<UE::Math::TVector4<float>_> FVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStackY_328 [32];
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [32];
  float local_2a8;
  float fStack_2a4;
  FNameEntryId FStack_2a0;
  uint uStack_29c;
  FNameEntryId local_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  float local_288;
  float fStack_284;
  undefined4 uStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  uint local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  int iStack_23c;
  wchar_t *local_238;
  undefined ***pppuStack_230;
  ERHIAccess local_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined **local_210;
  FScriptContainerElement *local_208;
  uint local_200;
  ulonglong local_1f8;
  undefined8 uStack_1f0;
  wchar_t *local_1e8;
  undefined ***pppuStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ForElementType<UE::Math::TVector4<float>_> local_1b8;
  uint local_d8;
  uint local_d4 [3];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  ulonglong uVar16;
  
  fVar20 = __real_3e860a92;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  uVar18 = 0;
  local_d4[0] = 0xd;
  local_1b8.SecondaryData = (ForElementType<UE::Math::TVector4<float>_>)0x0;
  local_d8 = 0;
  uVar16 = uVar18;
  uVar14 = uVar18;
  while( true ) {
    FVar13 = local_1b8.SecondaryData;
    fVar19 = (float)(int)uVar16 * fVar20;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    __libm_sse2_sincosf_();
    FVar12 = (ForElementType<UE::Math::TVector4<float>_>)&local_1b8;
    if (FVar13 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar12 = FVar13;
    }
    local_2c8._16_4_ = 0;
    local_2c8._28_4_ = 0x3f800000;
    uVar10 = (uint)uVar14;
    local_2c8._20_4_ = extraout_XMM0_Da;
    local_2c8._24_4_ = extraout_XMM0_Db;
    if ((ulonglong)FVar12 <= (longlong)local_2c8 + 0x10U) {
      FVar12 = (ForElementType<UE::Math::TVector4<float>_>)&local_1b8;
      if (FVar13 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
        FVar12 = FVar13;
      }
      if ((local_2c8 + 0x10 < (undefined1 *)((longlong)(int)local_d4[0] * 0x10 + (longlong)FVar12))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), FVar13 = local_1b8.SecondaryData, uVar10 = local_d8, bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar10 == local_d4[0]) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
                         (0x1010,&local_1b8,(int *)local_d4);
      FVar13 = local_1b8.SecondaryData;
    }
    local_d8 = uVar10 + 1;
    FVar12 = (ForElementType<UE::Math::TVector4<float>_>)&local_1b8;
    if (FVar13 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar12 = FVar13;
    }
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    puVar3 = (undefined8 *)((longlong)FVar12 + (longlong)(int)uVar10 * 0x10);
    *puVar3 = CONCAT44(local_2c8._20_4_,local_2c8._16_4_);
    puVar3[1] = CONCAT44(local_2c8._28_4_,local_2c8._24_4_);
    if (0xc < (int)uVar15) break;
    uVar14 = (ulonglong)local_d8;
  }
  local_2d8.Data = (FScriptContainerElement *)0x0;
  local_2d0 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,0xf7,&local_2d8,0,(int *)((longlong)&local_2d0 + 4));
  uVar10 = __xmm_80000000800000008000000080000000;
  uVar16 = uVar18;
  do {
    __vdecl_sincosf4();
    uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    local_c8 = fVar19;
    fStack_c4 = fVar24;
    fStack_c0 = fVar25;
    fStack_bc = fVar26;
    uStack_27c = 0;
    uStack_26c = 0;
    fVar27 = fVar24 * fVar19;
    uStack_25c = 0;
    fVar28 = fVar19 * extraout_XMM0_Db_00;
    uStack_24c = 0x3f800000;
    fVar20 = fVar24 * extraout_XMM0_Dc * extraout_XMM0_Da_00 - fVar25 * extraout_XMM0_Db_00;
    fVar29 = fVar25 * fVar19;
    fVar21 = fVar25 * fVar24 + extraout_XMM0_Db_00 * extraout_XMM0_Dc * extraout_XMM0_Da_00;
    fVar22 = (float)((uint)(fVar19 * extraout_XMM0_Dc) ^ uVar10);
    local_258 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar30 = fVar24 * extraout_XMM0_Dc - fVar25 * extraout_XMM0_Da_00 * extraout_XMM0_Db_00;
    fVar23 = (float)((uint)(fVar25 * extraout_XMM0_Da_00 * fVar24 +
                           extraout_XMM0_Dc * extraout_XMM0_Db_00) ^ uVar10);
    fStack_250 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fStack_254 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar14 = uVar18;
    uVar17 = uVar18;
    local_288 = fVar27;
    fStack_284 = fVar28;
    local_278 = fVar20;
    fStack_274 = fVar21;
    fStack_270 = fVar22;
    local_268 = fVar23;
    fStack_264 = fVar30;
    fStack_260 = fVar29;
    do {
      if (((int)local_d8 <= (int)uVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar13 = (ForElementType<UE::Math::TVector4<float>_>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
        FVar13 = local_1b8.SecondaryData;
      }
      local_298.Value = *(uint *)(uVar17 + (longlong)FVar13);
      fStack_294 = *(float *)(uVar17 + 4 + (longlong)FVar13);
      fStack_290 = *(float *)(uVar17 + 8 + (longlong)FVar13);
      uStack_29c = 0x3f800000;
      uStack_28c = 0x3f800000;
      fVar19 = fStack_290 * fVar23;
      fVar24 = fStack_290 * fVar30;
      fVar25 = fStack_290 * fVar29;
      fVar26 = fStack_290 * 0.0;
      local_2a8 = fStack_294 * fVar20 + (float)local_298.Value * fVar27 + fVar19 +
                  (float)uVar5 * 1.0;
      fStack_2a4 = fStack_294 * fVar21 + (float)local_298.Value * fVar28 + fVar24 +
                   (float)uVar6 * 1.0;
      FStack_2a0.Value =
           (uint)(fStack_294 * fVar22 + (float)local_298.Value * extraout_XMM0_Da_00 + fVar25 +
                 (float)uVar7 * 1.0);
      if (((local_2d8.Data <= (FScriptContainerElement *)&local_2a8) &&
          ((FScriptContainerElement *)&local_2a8 < local_2d8.Data + (longlong)local_2d0._4_4_ * 0x10
          )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_2d0;
      if ((int)local_2d0 == local_2d0._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&local_2d8,(int *)((longlong)&local_2d0 + 4));
      }
      FVar8.Data = local_2d8.Data;
      iVar1 = iVar11 + 1;
      uVar15 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar15;
      local_2d0 = CONCAT44(local_2d0._4_4_,iVar1);
      uVar17 = uVar17 + 0x10;
      *(ulonglong *)(local_2d8.Data + (longlong)iVar11 * 0x10) = CONCAT44(fStack_2a4,local_2a8);
      *(ulonglong *)(local_2d8.Data + (longlong)iVar11 * 0x10 + 8) =
           CONCAT44(uStack_29c,FStack_2a0.Value);
    } while ((int)uVar15 < 0xd);
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
  } while ((int)uVar15 < 0x13);
  this->NumSphereVerts = iVar1;
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_228 = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_210 = &___7FResourceArrayUploadArrayView__6B_;
  pppuStack_230 = &local_210;
  local_248 = iVar1 * 0x10;
  iStack_23c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_238 = L"TStencilSphereVertexBuffer";
  uStack_244 = 0;
  local_1e8 = L"TStencilSphereVertexBuffer";
  uStack_240 = 0x4001;
  local_1f8 = (ulonglong)local_248;
  uStack_1f0 = CONCAT44(iStack_23c,0x4001);
  uStack_220 = 0;
  uStack_224 = 2;
  local_218 = 0;
  local_1d8 = CONCAT44(2,local_228);
  local_208 = FVar8.Data;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_200 = local_248;
  pppuStack_1e0 = pppuStack_230;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_2c8);
  plVar2 = &this->_padding_;
  if (plVar2 != (longlong *)local_2c8) {
    this_00 = (FRHIResource *)*plVar2;
    *plVar2 = local_2c8._0_8_;
    local_2c8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_144b7814b;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_2c8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2c8._0_8_);
  }
LAB_144b7814b:
  if (local_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data);
  }
  if (local_1b8.SecondaryData != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
    FMemory::Free((void *)local_1b8.SecondaryData);
  }
  return;
}

// InitRHI @ 144b7a550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector<float>_>::InitRHI
          (TStencilSphereVertexBuffer<18,12,UE::Math::TVector<float>_> *this,
          FRHICommandListBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  FRHIResource *this_00;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForElementType<UE::Math::TVector<float>_> FVar11;
  ForElementType<UE::Math::TVector<float>_> FVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_2d8 [32];
  ForAnyElementType local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 local_270;
  float local_26c;
  float fStack_268;
  float local_264;
  undefined1 local_260 [12];
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float local_248;
  float fStack_244;
  ERHIBufferInitAction EStack_23c;
  FNameEntryId local_238;
  float fStack_234;
  FNameEntryId FStack_230;
  uint uStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  uint local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int iStack_1fc;
  wchar_t *local_1f8;
  undefined ***pppuStack_1f0;
  ERHIAccess local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined **local_1d0;
  FScriptContainerElement *local_1c8;
  uint local_1c0;
  ulonglong local_1b8;
  undefined8 uStack_1b0;
  wchar_t *local_1a8;
  undefined ***pppuStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ForElementType<UE::Math::TVector<float>_> local_178;
  uint local_d0;
  uint local_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  ulonglong uVar15;
  
  fVar19 = __real_3e860a92;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar17 = 0;
  local_cc = 0xd;
  local_178.SecondaryData = (ForElementType<UE::Math::TVector<float>_>)0x0;
  local_d0 = 0;
  uVar15 = uVar17;
  uVar13 = uVar17;
  while( true ) {
    FVar12 = local_178.SecondaryData;
    local_278 = 0;
    fVar18 = (float)(int)uVar15 * fVar19;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    __libm_sse2_sincosf_();
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)&local_178;
    if (FVar12 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar11 = FVar12;
    }
    uVar9 = (uint)uVar13;
    uStack_274 = extraout_XMM0_Da;
    local_270 = extraout_XMM0_Db;
    if ((ulonglong)FVar11 <= &local_278) {
      FVar11 = (ForElementType<UE::Math::TVector<float>_>)&local_178;
      if (FVar12 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar11 = FVar12;
      }
      if ((&local_278 < (undefined4 *)((longlong)FVar11 + (longlong)(int)local_cc * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), FVar12 = local_178.SecondaryData, uVar9 = local_d0, bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar9 == local_cc) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                        (0x40c,&local_178,(int *)&local_cc);
      FVar12 = local_178.SecondaryData;
    }
    local_d0 = uVar9 + 1;
    FVar11 = (ForElementType<UE::Math::TVector<float>_>)&local_178;
    if (FVar12 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar11 = FVar12;
    }
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
    *(ulonglong *)((longlong)FVar11 + (longlong)(int)uVar9 * 0xc) = CONCAT44(uStack_274,local_278);
    *(undefined4 *)((uchar *)((longlong)FVar11 + 8) + (longlong)(int)uVar9 * 0xc) = local_270;
    if (0xc < (int)uVar14) break;
    uVar13 = (ulonglong)local_d0;
  }
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0xf7,&local_288,0,(int *)((longlong)&local_280 + 4));
  uVar9 = __xmm_80000000800000008000000080000000;
  uVar15 = uVar17;
  do {
    __vdecl_sincosf4();
    uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    local_c8 = fVar18;
    fStack_c4 = fVar23;
    fStack_c0 = fVar24;
    fStack_bc = fVar25;
    EStack_23c = Default;
    uStack_22c = 0;
    fVar26 = fVar23 * fVar18;
    uStack_21c = 0;
    fVar27 = fVar18 * extraout_XMM0_Db_00;
    uStack_20c = 0x3f800000;
    fVar19 = fVar23 * extraout_XMM0_Dc * extraout_XMM0_Da_00 - fVar24 * extraout_XMM0_Db_00;
    fVar28 = fVar24 * fVar18;
    fVar20 = fVar24 * fVar23 + extraout_XMM0_Db_00 * extraout_XMM0_Dc * extraout_XMM0_Da_00;
    fVar21 = (float)((uint)(fVar18 * extraout_XMM0_Dc) ^ uVar9);
    local_218 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar29 = fVar23 * extraout_XMM0_Dc - extraout_XMM0_Db_00 * fVar24 * extraout_XMM0_Da_00;
    fStack_210 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar22 = (float)((uint)(extraout_XMM0_Dc * extraout_XMM0_Db_00 +
                           fVar23 * fVar24 * extraout_XMM0_Da_00) ^ uVar9);
    fStack_214 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar13 = uVar17;
    uVar16 = uVar17;
    local_248 = fVar26;
    fStack_244 = fVar27;
    local_238.Value = (uint)fVar19;
    fStack_234 = fVar20;
    FStack_230.Value = (uint)fVar21;
    local_228 = fVar22;
    fStack_224 = fVar29;
    fStack_220 = fVar28;
    do {
      if (((int)local_d0 <= (int)uVar13) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar12 = (ForElementType<UE::Math::TVector<float>_>)&local_178;
      if (local_178.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar12 = local_178.SecondaryData;
      }
      local_260._8_4_ = *(float *)(uVar16 + (longlong)FVar12);
      fStack_254 = *(float *)(uVar16 + 4 + (longlong)FVar12);
      fStack_250 = *(float *)(uVar16 + 8 + (longlong)FVar12);
      uStack_24c = 0x3f800000;
      fVar18 = fStack_250 * fVar22;
      fVar23 = fStack_250 * fVar29;
      fVar24 = fStack_250 * fVar28;
      fVar25 = fStack_250 * 0.0;
      local_26c = fStack_254 * fVar19 + (float)local_260._8_4_ * fVar26 + fVar18 +
                  (float)uVar4 * 1.0;
      fStack_268 = fStack_254 * fVar20 + (float)local_260._8_4_ * fVar27 + fVar23 +
                   (float)uVar5 * 1.0;
      local_264 = fStack_254 * fVar21 + (float)local_260._8_4_ * extraout_XMM0_Da_00 + fVar24 +
                  (float)uVar6 * 1.0;
      if (((local_288.Data <= (FScriptContainerElement *)&local_26c) &&
          ((FScriptContainerElement *)&local_26c < local_288.Data + (longlong)local_280._4_4_ * 0xc)
          ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = (int)local_280;
      if ((int)local_280 == local_280._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_288,(int *)((longlong)&local_280 + 4));
      }
      FVar7.Data = local_288.Data;
      iVar1 = iVar10 + 1;
      local_280 = CONCAT44(local_280._4_4_,iVar1);
      uVar14 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar14;
      uVar16 = uVar16 + 0xc;
      *(ulonglong *)(local_288.Data + (longlong)iVar10 * 0xc) = CONCAT44(fStack_268,local_26c);
      *(float *)(local_288.Data + (longlong)iVar10 * 0xc + 8) = local_264;
    } while ((int)uVar14 < 0xd);
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
  } while ((int)uVar14 < 0x13);
  this->NumSphereVerts = iVar1;
  if ((iVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_1e8 = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_1d0 = &___7FResourceArrayUploadArrayView__6B_;
  pppuStack_1f0 = &local_1d0;
  local_208 = iVar1 * 0xc;
  iStack_1fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1f8 = L"TStencilSphereVertexBuffer";
  uStack_204 = 0;
  local_1a8 = L"TStencilSphereVertexBuffer";
  uStack_200 = 0x4001;
  local_1b8 = (ulonglong)local_208;
  uStack_1b0 = CONCAT44(iStack_1fc,0x4001);
  uStack_1e0 = 0;
  uStack_1e4 = 2;
  local_1d8 = 0;
  local_198 = CONCAT44(2,local_1e8);
  local_1c8 = FVar7.Data;
  uStack_190 = 0;
  local_188 = 0;
  local_1c0 = local_208;
  pppuStack_1a0 = pppuStack_1f0;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_260);
  plVar2 = &this->_padding_;
  if (plVar2 != (longlong *)local_260) {
    this_00 = (FRHIResource *)*plVar2;
    *plVar2 = local_260._0_8_;
    local_260._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_144b7ab76;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_260._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_260._0_8_);
  }
LAB_144b7ab76:
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_178.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FMemory::Free((void *)local_178.SecondaryData);
  }
  return;
}

// InitRHI @ 144b7ac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
StencilingGeometry::TStencilSphereVertexBuffer<4,4,UE::Math::TVector4<float>_>::InitRHI
          (TStencilSphereVertexBuffer<4,4,UE::Math::TVector4<float>_> *this,
          FRHICommandListBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FRHIResource *this_00;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ForElementType<UE::Math::TVector4<float>_> FVar12;
  ForElementType<UE::Math::TVector4<float>_> FVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStackY_2a8 [32];
  ForAnyElementType local_258;
  undefined8 local_250;
  undefined1 local_248 [32];
  float local_228;
  float fStack_224;
  FNameEntryId FStack_220;
  uint uStack_21c;
  FNameEntryId local_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  wchar_t *local_1b8;
  undefined ***pppuStack_1b0;
  ERHIAccess local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined **local_190;
  FScriptContainerElement *local_188;
  uint local_180;
  ulonglong local_178;
  undefined8 uStack_170;
  wchar_t *local_168;
  undefined ***pppuStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ForElementType<UE::Math::TVector4<float>_> local_138;
  uint local_d8;
  uint local_d4 [3];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  ulonglong uVar16;
  
  fVar20 = __real_3f490fdb;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar18 = 0;
  local_d4[0] = 5;
  local_138.SecondaryData = (ForElementType<UE::Math::TVector4<float>_>)0x0;
  local_d8 = 0;
  uVar16 = uVar18;
  uVar14 = uVar18;
  while( true ) {
    FVar13 = local_138.SecondaryData;
    fVar19 = (float)(int)uVar16 * fVar20;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    __libm_sse2_sincosf_();
    FVar12 = (ForElementType<UE::Math::TVector4<float>_>)&local_138;
    if (FVar13 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar12 = FVar13;
    }
    local_248._16_4_ = 0;
    local_248._28_4_ = 0x3f800000;
    uVar10 = (uint)uVar14;
    local_248._20_4_ = extraout_XMM0_Da;
    local_248._24_4_ = extraout_XMM0_Db;
    if ((ulonglong)FVar12 <= (longlong)local_248 + 0x10U) {
      FVar12 = (ForElementType<UE::Math::TVector4<float>_>)&local_138;
      if (FVar13 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
        FVar12 = FVar13;
      }
      if ((local_248 + 0x10 < (undefined1 *)((longlong)(int)local_d4[0] * 0x10 + (longlong)FVar12))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), FVar13 = local_138.SecondaryData, uVar10 = local_d8, bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar10 == local_d4[0]) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
                         (0x1010,&local_138,(int *)local_d4);
      FVar13 = local_138.SecondaryData;
    }
    local_d8 = uVar10 + 1;
    FVar12 = (ForElementType<UE::Math::TVector4<float>_>)&local_138;
    if (FVar13 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar12 = FVar13;
    }
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    puVar3 = (undefined8 *)((longlong)FVar12 + (longlong)(int)uVar10 * 0x10);
    *puVar3 = CONCAT44(local_248._20_4_,local_248._16_4_);
    puVar3[1] = CONCAT44(local_248._28_4_,local_248._24_4_);
    if (4 < (int)uVar15) break;
    uVar14 = (ulonglong)local_d8;
  }
  local_258.Data = (FScriptContainerElement *)0x0;
  local_250 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,0x19,&local_258,0,(int *)((longlong)&local_250 + 4));
  uVar10 = __xmm_80000000800000008000000080000000;
  uVar16 = uVar18;
  do {
    __vdecl_sincosf4();
    uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    local_c8 = fVar19;
    fStack_c4 = fVar24;
    fStack_c0 = fVar25;
    fStack_bc = fVar26;
    uStack_1fc = 0;
    uStack_1ec = 0;
    fVar27 = fVar24 * fVar19;
    uStack_1dc = 0;
    fVar28 = fVar19 * extraout_XMM0_Db_00;
    uStack_1cc = 0x3f800000;
    fVar20 = fVar24 * extraout_XMM0_Dc * extraout_XMM0_Da_00 - fVar25 * extraout_XMM0_Db_00;
    fVar29 = fVar25 * fVar19;
    fVar21 = fVar25 * fVar24 + extraout_XMM0_Db_00 * extraout_XMM0_Dc * extraout_XMM0_Da_00;
    fVar22 = (float)((uint)(fVar19 * extraout_XMM0_Dc) ^ uVar10);
    local_1d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar30 = fVar24 * extraout_XMM0_Dc - fVar25 * extraout_XMM0_Da_00 * extraout_XMM0_Db_00;
    fVar23 = (float)((uint)(fVar25 * extraout_XMM0_Da_00 * fVar24 +
                           extraout_XMM0_Dc * extraout_XMM0_Db_00) ^ uVar10);
    fStack_1d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fStack_1d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar14 = uVar18;
    uVar17 = uVar18;
    local_208 = fVar27;
    fStack_204 = fVar28;
    local_1f8 = fVar20;
    fStack_1f4 = fVar21;
    fStack_1f0 = fVar22;
    local_1e8 = fVar23;
    fStack_1e4 = fVar30;
    fStack_1e0 = fVar29;
    do {
      if (((int)local_d8 <= (int)uVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar13 = (ForElementType<UE::Math::TVector4<float>_>)&local_138;
      if (local_138.SecondaryData != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
        FVar13 = local_138.SecondaryData;
      }
      local_218.Value = *(uint *)(uVar17 + (longlong)FVar13);
      fStack_214 = *(float *)(uVar17 + 4 + (longlong)FVar13);
      fStack_210 = *(float *)(uVar17 + 8 + (longlong)FVar13);
      uStack_21c = 0x3f800000;
      uStack_20c = 0x3f800000;
      fVar19 = fStack_210 * fVar23;
      fVar24 = fStack_210 * fVar30;
      fVar25 = fStack_210 * fVar29;
      fVar26 = fStack_210 * 0.0;
      local_228 = fStack_214 * fVar20 + (float)local_218.Value * fVar27 + fVar19 +
                  (float)uVar5 * 1.0;
      fStack_224 = fStack_214 * fVar21 + (float)local_218.Value * fVar28 + fVar24 +
                   (float)uVar6 * 1.0;
      FStack_220.Value =
           (uint)(fStack_214 * fVar22 + (float)local_218.Value * extraout_XMM0_Da_00 + fVar25 +
                 (float)uVar7 * 1.0);
      if (((local_258.Data <= (FScriptContainerElement *)&local_228) &&
          ((FScriptContainerElement *)&local_228 < local_258.Data + (longlong)local_250._4_4_ * 0x10
          )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_250;
      if ((int)local_250 == local_250._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&local_258,(int *)((longlong)&local_250 + 4));
      }
      FVar8.Data = local_258.Data;
      iVar1 = iVar11 + 1;
      uVar15 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar15;
      local_250 = CONCAT44(local_250._4_4_,iVar1);
      uVar17 = uVar17 + 0x10;
      *(ulonglong *)(local_258.Data + (longlong)iVar11 * 0x10) = CONCAT44(fStack_224,local_228);
      *(ulonglong *)(local_258.Data + (longlong)iVar11 * 0x10 + 8) =
           CONCAT44(uStack_21c,FStack_220.Value);
    } while ((int)uVar15 < 5);
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
  } while ((int)uVar15 < 5);
  this->NumSphereVerts = iVar1;
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1a8 = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_190 = &___7FResourceArrayUploadArrayView__6B_;
  pppuStack_1b0 = &local_190;
  local_1c8 = iVar1 * 0x10;
  iStack_1bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1b8 = L"TStencilSphereVertexBuffer";
  uStack_1c4 = 0;
  local_168 = L"TStencilSphereVertexBuffer";
  uStack_1c0 = 0x4001;
  local_178 = (ulonglong)local_1c8;
  uStack_170 = CONCAT44(iStack_1bc,0x4001);
  uStack_1a0 = 0;
  uStack_1a4 = 2;
  local_198 = 0;
  local_158 = CONCAT44(2,local_1a8);
  local_188 = FVar8.Data;
  uStack_150 = 0;
  local_148 = 0;
  local_180 = local_1c8;
  pppuStack_160 = pppuStack_1b0;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_248);
  plVar2 = &this->_padding_;
  if (plVar2 != (longlong *)local_248) {
    this_00 = (FRHIResource *)*plVar2;
    *plVar2 = local_248._0_8_;
    local_248._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_144b7b28b;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_248._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_248._0_8_);
  }
LAB_144b7b28b:
  if (local_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data);
  }
  if (local_138.SecondaryData != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
    FMemory::Free((void *)local_138.SecondaryData);
  }
  return;
}

