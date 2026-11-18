// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FMaterialUpdateContext @ 147f65ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialUpdateContext * __thiscall
FMaterialUpdateContext::FMaterialUpdateContext
          (FMaterialUpdateContext *this,uint param_1,EShaderPlatform param_2)

{
  TUniquePtr<FGlobalComponentReregisterContext,TDefaultDelete<FGlobalComponentReregisterContext>_>
  *pTVar1;
  TUniquePtr<FGlobalComponentRecreateRenderStateContext,TDefaultDelete<FGlobalComponentRecreateRenderStateContext>_>
  *pTVar2;
  bool bVar3;
  FGlobalComponentReregisterContext *this_00;
  FGlobalComponentRecreateRenderStateContext *this_01;
  FGlobalComponentRecreateRenderStateContext *pFVar4;
  wchar_t *pwVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  this_01 = (FGlobalComponentRecreateRenderStateContext *)0x0;
  pTVar1 = &this->ComponentReregisterContext;
  *(undefined8 *)&(this->UpdatedMaterials).Elements = 0;
  pTVar2 = &this->ComponentRecreateRenderStateContext;
  *(undefined8 *)&(this->UpdatedMaterials).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UpdatedMaterials).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UpdatedMaterials).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UpdatedMaterials).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdatedMaterials).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UpdatedMaterials).Elements.field_0x34 = 0;
  (this->UpdatedMaterials).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UpdatedMaterials).HashSize = 0;
  *(undefined8 *)&(this->UpdatedMaterialInterfaces).Elements = 0;
  *(undefined8 *)&(this->UpdatedMaterialInterfaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UpdatedMaterialInterfaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UpdatedMaterialInterfaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UpdatedMaterialInterfaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdatedMaterialInterfaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UpdatedMaterialInterfaces).Elements.field_0x34 = 0;
  (this->UpdatedMaterialInterfaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UpdatedMaterialInterfaces).HashSize = 0;
  pTVar1->Ptr = (FGlobalComponentReregisterContext *)0x0;
  pTVar2->Ptr = (FGlobalComponentRecreateRenderStateContext *)0x0;
  if ((param_1 & 4) == 0) {
LAB_147f65fb6:
    bVar3 = false;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar5 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar5,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
        false)) goto LAB_147f65fb6;
    bVar3 = true;
  }
  this->bSyncWithRenderingThread = (bool)((byte)(param_1 >> 1) & 1);
  if ((param_1 & 1) == 0) {
    if (!bVar3) goto LAB_147f6606f;
    pFVar4 = ::operator_new(0x60);
    if (pFVar4 != (FGlobalComponentRecreateRenderStateContext *)0x0) {
      this_01 = FGlobalComponentRecreateRenderStateContext::
                FGlobalComponentRecreateRenderStateContext(pFVar4);
    }
    if (pTVar2 == (TUniquePtr<FGlobalComponentRecreateRenderStateContext,TDefaultDelete<FGlobalComponentRecreateRenderStateContext>_>
                   *)&local_20) {
      if (this_01 == (FGlobalComponentRecreateRenderStateContext *)0x0) goto LAB_147f6606f;
      FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
                (this_01);
    }
    else {
      pFVar4 = pTVar2->Ptr;
      pTVar2->Ptr = this_01;
      if (pFVar4 == (FGlobalComponentRecreateRenderStateContext *)0x0) goto LAB_147f6606f;
      FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
                (pFVar4);
      this_01 = pFVar4;
    }
  }
  else {
    this_00 = ::operator_new(0x60);
    if (this_00 != (FGlobalComponentReregisterContext *)0x0) {
      this_01 = (FGlobalComponentRecreateRenderStateContext *)
                FGlobalComponentReregisterContext::FGlobalComponentReregisterContext(this_00);
    }
    if (pTVar1 == (TUniquePtr<FGlobalComponentReregisterContext,TDefaultDelete<FGlobalComponentReregisterContext>_>
                   *)&local_28) {
      if (this_01 == (FGlobalComponentRecreateRenderStateContext *)0x0) goto LAB_147f6606f;
      FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext
                ((FGlobalComponentReregisterContext *)this_01);
    }
    else {
      pFVar4 = (FGlobalComponentRecreateRenderStateContext *)pTVar1->Ptr;
      pTVar1->Ptr = (FGlobalComponentReregisterContext *)this_01;
      if (pFVar4 == (FGlobalComponentRecreateRenderStateContext *)0x0) goto LAB_147f6606f;
      FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext
                ((FGlobalComponentReregisterContext *)pFVar4);
      this_01 = pFVar4;
    }
  }
  ::operator_delete(this_01,0x60);
LAB_147f6606f:
  if (this->bSyncWithRenderingThread != false) {
    FlushRenderingCommands();
  }
  this->ShaderPlatform = param_2;
  return this;
}

// ~FMaterialUpdateContext @ 147f68ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FMaterialUpdateContext::~FMaterialUpdateContext(FMaterialUpdateContext *this)

{
  undefined1 *puVar1;
  ForElementType<FSetElementId> FVar2;
  FGlobalComponentReregisterContext *this_00;
  code *pcVar3;
  FMaterialUpdateContext *pFVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  EInternalObjectFlags EVar8;
  int iVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  IRendererModule *pIVar13;
  FMaterialUpdateContext *pFVar14;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar15;
  wchar_t *pwVar16;
  uint uVar17;
  longlong lVar18;
  undefined ***pppuVar19;
  longlong *plVar20;
  ForElementType<FSetElementId> FVar21;
  uint uVar22;
  ForAnyElementType *pFVar23;
  FGlobalComponentRecreateRenderStateContext *pFVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  bool bVar29;
  undefined1 auStackY_2f8 [32];
  char local_2a8;
  char local_2a7;
  undefined1 local_2a6 [6];
  ForAnyElementType local_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined4 local_280 [2];
  longlong *local_278;
  FMaterialUpdateContext *local_270;
  int iStack_268;
  uint uStack_264;
  undefined1 *local_260;
  undefined4 uStack_258;
  int iStack_254;
  int local_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  ForAnyElementType local_240;
  undefined8 local_238;
  TObjectIterator<UMaterialInstance> local_230;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  LARGE_INTEGER local_200;
  undefined8 local_1f8;
  FMaterialUpdateContext *local_1f0;
  LARGE_INTEGER local_1e8;
  FMaterialUpdateContext *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *local_1b8
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  FMaterialUpdateContext *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  undefined4 local_144;
  undefined4 local_124;
  undefined4 local_104;
  code *local_f8 [2];
  undefined **local_e8 [3];
  undefined ***local_d0;
  code *local_c8 [2];
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98 [16];
  undefined **local_88 [3];
  undefined ***local_70;
  byte local_68;
  FSyncScope local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar29 = CpuChannel->Enabled < 0;
  local_1f0 = this;
  if (bVar29) {
    local_2a7 = '\0';
  }
  else {
    local_2a7 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4851,"FMaterialUpdateContext::~FMaterialUpdateContext",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
               ,0x12f3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4851);
  }
  cVar5 = !bVar29;
  QueryPerformanceCounter(&local_200);
  bVar29 = false;
  uVar6 = UMaterialInterface::GetFeatureLevelsToCompileForAllMaterials();
  if (uVar6 == 0) goto LAB_147f69b88;
  local_288 = 1;
  do {
    uVar17 = -uVar6 & uVar6;
    local_218 = 0x1f;
    if (uVar17 != 0) {
      for (; uVar17 >> local_218 == 0; local_218 = local_218 + -1) {
      }
    }
    iVar9 = 0;
    if (uVar17 != 0) {
      iVar9 = local_218;
    }
    uVar6 = uVar6 & uVar6 - 1;
    if (this->ShaderPlatform == GRHIGlobals.ShaderPlatformForFeatureLevel[iVar9]) {
      bVar29 = true;
    }
  } while (uVar6 != 0);
  if (!bVar29) goto LAB_147f69b88;
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_58);
  if (this->bSyncWithRenderingThread != false) {
    FlushRenderingCommands();
  }
  local_240.Data = (FScriptContainerElement *)0x0;
  local_238 = 0;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  local_298 = 0;
  if (((this->ComponentReregisterContext).Ptr == (FGlobalComponentReregisterContext *)0x0) &&
     ((this->ComponentRecreateRenderStateContext).Ptr ==
      (FGlobalComponentRecreateRenderStateContext *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar16 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar16,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
        false)) goto LAB_147f6938a;
    local_260 = &(this->UpdatedMaterials).Elements.field_0x10;
    local_2a8 = '\x01';
    iStack_268 = 0;
    iVar9 = *(int *)&(this->UpdatedMaterials).Elements.field_0x28;
    local_250 = 0;
    uStack_264 = 1;
    iStack_254 = 0;
    if (iVar9 != 0) {
      puVar27 = *(uint **)&(this->UpdatedMaterials).Elements.field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)local_260;
      }
      uStack_264 = *puVar27;
      while (uStack_264 == 0) {
        lVar18 = (longlong)iStack_268;
        local_250 = local_250 + 0x20;
        iStack_268 = iStack_268 + 1;
        uStack_264 = 1;
        iStack_254 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_268) goto LAB_147f6912e;
        uStack_264 = puVar27[lVar18 + 1];
      }
      uStack_264 = -uStack_264 & uStack_264;
      uVar11 = (ulonglong)uStack_264 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_214 = (int)lVar18;
      iStack_254 = local_214 + -1 + local_250;
      if (iVar9 < iStack_254) {
        iStack_254 = iVar9;
      }
    }
LAB_147f6912e:
    uStack_258 = 0xffffffff;
    uStack_24c = local_144;
    TStack_1d8._padding_ = CONCAT44(uStack_264,iStack_268);
    TStack_1d8.CurrentBitIndex = iStack_254;
    TStack_1d8.UnvisitedBitMask = 0xffffffff;
    TStack_1d8._28_4_ = local_144;
    TStack_1d8.BaseBitIndex = local_250;
    uVar12 = local_288;
    local_270 = this;
    local_1e0 = this;
    TStack_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_260;
    iVar7 = iStack_254;
    if (iStack_254 < iVar9) {
      do {
        lVar18 = *(longlong *)
                  (*(longlong *)&(local_1e0->UpdatedMaterials).Elements + (longlong)iVar7 * 0x10);
        pFVar23 = (ForAnyElementType *)(lVar18 + 0x270);
        if ((&local_240 == pFVar23) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar29)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = *(int *)(lVar18 + 0x278);
        if (iVar9 != 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar9,&local_240,(int *)&local_238,
                             (int *)((longlong)&local_238 + 4));
          ConstructItems<FMaterial_const_*,FMaterialResource_*,int>
                    (local_240.Data + (longlong)iVar7 * 8,(FMaterialResource **)pFVar23->Data,iVar9)
          ;
        }
        TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
        uVar12 = local_288;
        iVar7 = TStack_1d8.CurrentBitIndex;
      } while (TStack_1d8.CurrentBitIndex < (TStack_1d8.Array)->NumBits);
    }
  }
  else {
LAB_147f6938a:
    local_2a8 = '\0';
    uVar12 = 1;
  }
  local_230.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ObjectArray.ArrayNum = 0;
  local_230.ObjectArray.ArrayMax = 0;
  local_230.Index = 0xffffffff;
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar10 = Z_Construct_UClass_UMaterialInstance_NoRegister();
  GetObjectsOfClass(pUVar10,&local_230.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<UMaterialInstance>::Advance(&local_230);
LAB_147f69280:
  while( true ) {
    uVar6 = (uint)uVar12;
    lVar18 = (longlong)local_230.Index;
    if ((local_230.Index < 0) || (local_230.ObjectArray.ArrayNum <= local_230.Index))
    goto LAB_147f6957d;
    uVar17 = 0;
    if (local_230.Index < local_230.ObjectArray.ArrayNum) {
      uVar17 = (uint)~local_230.Index >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_278 = *(longlong **)(local_230.ObjectArray.AllocatorInstance.Data + lVar18 * 8);
    uVar11 = (**(code **)(*local_278 + 0x2d8))();
    uVar17 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (*(int *)&(this->UpdatedMaterials).Elements.field_0x8 ==
        *(int *)&(this->UpdatedMaterials).Elements.field_0x34) break;
    FVar2 = (this->UpdatedMaterials).Hash.SecondaryData;
    FVar21 = (ForElementType<FSetElementId>)&(this->UpdatedMaterials).Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar21 = FVar2;
    }
    iVar9 = *(int *)((longlong)FVar21 +
                    (ulonglong)((this->UpdatedMaterials).HashSize - 1U & (uVar17 >> 0x10 ^ uVar17))
                    * 4);
    if (iVar9 == -1) break;
    lVar18 = *(longlong *)&(this->UpdatedMaterials).Elements;
    do {
      if (*(ulonglong *)(lVar18 + (longlong)iVar9 * 0x10) == uVar11) {
        if (iVar9 == -1) goto LAB_147f6956a;
        local_270 = (FMaterialUpdateContext *)&this->UpdatedMaterialInterfaces;
        iVar9 = *(int *)&(this->UpdatedMaterialInterfaces).Elements.field_0x28;
        local_260 = &(this->UpdatedMaterialInterfaces).Elements.field_0x10;
        iStack_268 = 0;
        local_250 = 0;
        iStack_254 = 0;
        if (iVar9 == 0) goto LAB_147f6941e;
        puVar27 = *(uint **)&(this->UpdatedMaterialInterfaces).Elements.field_0x20;
        puVar28 = (uint *)local_260;
        if (puVar27 != (uint *)0x0) {
          puVar28 = puVar27;
        }
        uVar17 = *puVar28;
        goto joined_r0x000147f693dd;
      }
      iVar9 = *(int *)(lVar18 + 8 + (longlong)iVar9 * 0x10);
    } while (iVar9 != -1);
    TObjectIterator<UMaterialInstance>::Advance(&local_230);
    uVar12 = local_288;
  }
LAB_147f6956a:
  TObjectIterator<UMaterialInstance>::Advance(&local_230);
  uVar12 = local_288;
  goto LAB_147f69280;
joined_r0x000147f693dd:
  if (uVar17 != 0) goto LAB_147f693f8;
  lVar18 = (longlong)iStack_268;
  local_250 = local_250 + 0x20;
  iStack_268 = iStack_268 + 1;
  iStack_254 = iVar9;
  if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_268) goto LAB_147f6941e;
  uVar17 = puVar28[lVar18 + 1];
  goto joined_r0x000147f693dd;
LAB_147f693f8:
  uVar6 = -uVar17 & uVar17;
  uVar11 = (ulonglong)uVar6 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  local_210 = (int)lVar18;
  iStack_254 = local_250 + -1 + local_210;
  if (iVar9 < iStack_254) {
    iStack_254 = iVar9;
  }
LAB_147f6941e:
  uStack_258 = 0xffffffff;
  uStack_24c = local_124;
  TStack_1b0._padding_ = CONCAT44(uVar6,iStack_268);
  TStack_1b0.CurrentBitIndex = iStack_254;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  TStack_1b0._28_4_ = local_124;
  TStack_1b0.BaseBitIndex = local_250;
  uStack_264 = uVar6;
  local_1b8 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
               *)local_270;
  TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_260;
  iVar7 = iStack_254;
  if (iStack_254 < iVar9) {
    do {
      cVar5 = (**(code **)(*local_278 + 0x2f8))
                        (local_278,
                         *(undefined8 *)(*(longlong *)&local_1b8->Elements + (longlong)iVar7 * 0x10)
                        );
      if (cVar5 != '\0') {
        if (((local_2a0.Data <= (FScriptContainerElement *)&local_278) &&
            ((FScriptContainerElement *)&local_278 < local_2a0.Data + (longlong)local_298._4_4_ * 8)
            ) && (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar29)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = (int)local_298;
        if ((int)local_298 == local_298._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_2a0,(int *)((longlong)&local_298 + 4));
        }
        local_298 = CONCAT44(local_298._4_4_,iVar9 + 1);
        *(longlong **)(local_2a0.Data + (longlong)iVar9 * 8) = local_278;
        goto LAB_147f6956a;
      }
      TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
      iVar7 = TStack_1b0.CurrentBitIndex;
    } while (TStack_1b0.CurrentBitIndex < (TStack_1b0.Array)->NumBits);
    TObjectIterator<UMaterialInstance>::Advance(&local_230);
    uVar12 = local_288;
    goto LAB_147f69280;
  }
  goto LAB_147f6956a;
LAB_147f6957d:
  if (local_230.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.ObjectArray.AllocatorInstance.Data);
  }
  local_280[0] = 0;
  local_c8[0] = (code *)0x0;
  local_a0 = FMemory::Malloc(0x30,8);
  *local_a0 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::`2'::<lambda_2>,0,1>
               ::_vftable_;
  local_a0[1] = (longlong)&local_2a0;
  local_a0[2] = (longlong)local_c8;
  local_a0[3] = (longlong)local_280;
  local_a0[4] = (longlong)&local_2a8;
  local_a0[5] = (longlong)&local_240;
  if (local_a0 + 1 != (longlong *)0x0) {
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l2::<lambda_2>,void,UMaterialInstance_*>
                  ::Call;
  }
  while (0 < (int)local_298) {
    uVar17 = 0;
    if ((int)((int)local_298 - 1U) < (int)local_298) {
      uVar17 = ~((int)local_298 - 1U) >> 0x1f;
    }
    iVar9 = (int)local_298;
    if (uVar17 == 0) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar29) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (int)local_298;
    }
    local_1f8 = *(undefined8 *)(local_2a0.Data + (longlong)(iVar9 + -1) * 8);
    UE::Core::Private::Function::CheckCallable(local_c8[0]);
    pcVar3 = local_c8[0];
    plVar20 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar20 = local_a0;
    }
    uVar12 = (**(code **)(*plVar20 + 8))();
    (*pcVar3)(uVar12,&local_1f8);
  }
  pIVar13 = GetRendererModule();
  pFVar14 = (FMaterialUpdateContext *)(**(code **)((longlong)*pIVar13 + 0xc0))(pIVar13);
  iVar9 = *(int *)&(pFVar14->UpdatedMaterials).Elements.field_0x28;
  iStack_268 = 0;
  local_250 = 0;
  puVar1 = &(pFVar14->UpdatedMaterials).Elements.field_0x10;
  iStack_254 = 0;
  if (iVar9 != 0) {
    puVar27 = *(uint **)&(pFVar14->UpdatedMaterials).Elements.field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar17 = *puVar27;
    while (uVar17 == 0) {
      lVar18 = (longlong)iStack_268;
      local_250 = local_250 + 0x20;
      iStack_268 = iStack_268 + 1;
      iStack_254 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_268) goto LAB_147f6975e;
      uVar17 = puVar27[lVar18 + 1];
    }
    uVar6 = -uVar17 & uVar17;
    uVar11 = (ulonglong)uVar6 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_20c = (int)lVar18;
    iStack_254 = local_250 + -1 + local_20c;
    if (iVar9 < iStack_254) {
      iStack_254 = iVar9;
    }
  }
LAB_147f6975e:
  uVar17 = *(uint *)&(pFVar14->UpdatedMaterials).Elements.field_0x28;
  uStack_24c = local_104;
  iStack_248 = *(int *)&(pFVar14->UpdatedMaterials).Elements.field_0x8 -
               *(int *)&(pFVar14->UpdatedMaterials).Elements.field_0x34;
  uVar22 = uVar17 & 0xffffffe0;
  uStack_258 = 0xffffffff;
  uVar26 = -1 << ((byte)uVar17 & 0x1f);
  TStack_188._padding_ = CONCAT44(uVar6,iStack_268);
  TStack_188.CurrentBitIndex = iStack_254;
  TStack_188.UnvisitedBitMask = 0xffffffff;
  iVar7 = (int)uVar17 >> 5;
  local_288 = CONCAT44(local_288._4_4_,uVar26);
  TStack_188._28_4_ = local_104;
  TStack_188.BaseBitIndex = local_250;
  uStack_168 = CONCAT44(uStack_244,iStack_248);
  uStack_264 = uVar6;
  local_270 = pFVar14;
  local_260 = puVar1;
  local_190 = pFVar14;
  TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar17 < 0) || (iVar9 < (int)uVar17)) {
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar29) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar26 = (uint)local_288;
  }
  uVar6 = *(uint *)&(pFVar14->UpdatedMaterials).Elements.field_0x28;
  if (uVar17 != uVar6) {
    puVar25 = *(undefined1 **)&(pFVar14->UpdatedMaterials).Elements.field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar1;
    }
    uVar26 = uVar26 & *(uint *)(puVar25 + (longlong)iVar7 * 4);
    while (uVar26 == 0) {
      lVar18 = (longlong)iVar7;
      uVar22 = uVar22 + 0x20;
      iVar7 = iVar7 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_147f69880;
      uVar26 = *(uint *)(puVar25 + lVar18 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_208 = (int)lVar18;
    uVar17 = (uVar22 - 1) + local_208;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_147f69880:
  while( true ) {
    pFVar4 = local_190;
    if (*(int *)&(local_190->UpdatedMaterials).Elements.field_0x8 -
        *(int *)&(local_190->UpdatedMaterials).Elements.field_0x34 != (int)uStack_168) {
      local_2a6[0] = 0;
      `TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2a6);
    }
    this = local_1f0;
    if (((TStack_188.CurrentBitIndex == uVar17) &&
        (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar4 == pFVar14)
       ) break;
    local_d0 = (undefined ***)0x0;
    local_e8[0] = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FMaterialUpdateContext::~FMaterialUpdateContext'::`29'::<lambda_3>,1,0>
                   ::_vftable_;
    local_f8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l29::<lambda_3>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_e8[1] = *(undefined ***)
                   (*(longlong *)&(pFVar4->UpdatedMaterials).Elements +
                   (longlong)TStack_188.CurrentBitIndex * 0x10);
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterialUpdateContext::~FMaterialUpdateContext_::__l29::TSTR_ReloadNaniteFixedFunctionBins4957>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_98._0_8_ = local_f8[0];
      local_70 = local_d0;
      local_d0 = (undefined ***)0x0;
      local_88[0] = local_e8[0];
      local_88[1] = local_e8[1];
      local_88[2] = local_e8[2];
      local_f8[0] = (code *)0x0;
      local_68 = 2;
      pFVar15 = (FRenderCommandTag *)
                TRenderCommandTag<`FMaterialUpdateContext::~FMaterialUpdateContext'::__l29::TSTR_ReloadNaniteFixedFunctionBins4957>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_98,pFVar15);
      uVar11 = (ulonglong)local_68;
      if ((2 < uVar11) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar29)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_98._0_8_ != (code *)0x0) {
          pppuVar19 = (undefined ***)(local_98 + 0x10);
          if (local_70 != (undefined ***)0x0) {
            pppuVar19 = local_70;
          }
          (*(code *)(*pppuVar19)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_98);
      }
    }
    if (local_f8[0] != (code *)0x0) {
      pppuVar19 = local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar19 = local_d0;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
  }
  if (local_2a8 == '\0') {
    pFVar24 = (FGlobalComponentRecreateRenderStateContext *)
              (local_1f0->ComponentReregisterContext).Ptr;
    if (pFVar24 == (FGlobalComponentRecreateRenderStateContext *)0x0) {
      pFVar24 = (local_1f0->ComponentRecreateRenderStateContext).Ptr;
      if (pFVar24 == (FGlobalComponentRecreateRenderStateContext *)0x0) goto LAB_147f69ab7;
      (local_1f0->ComponentRecreateRenderStateContext).Ptr =
           (FGlobalComponentRecreateRenderStateContext *)0x0;
      FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
                (pFVar24);
    }
    else {
      (local_1f0->ComponentReregisterContext).Ptr = (FGlobalComponentReregisterContext *)0x0;
      FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext
                ((FGlobalComponentReregisterContext *)pFVar24);
    }
    ::operator_delete(pFVar24,0x60);
  }
  else {
    pIVar13 = GetRendererModule();
    (**(code **)((longlong)*pIVar13 + 0x68))(pIVar13,&local_240);
  }
LAB_147f69ab7:
  QueryPerformanceCounter(&local_1e8);
  cVar5 = local_2a7;
  if ((0 < *(int *)&(this->UpdatedMaterials).Elements.field_0x8 -
           *(int *)&(this->UpdatedMaterials).Elements.field_0x34) && (5 < (byte)LogMaterial._0_1_))
  {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  if (local_c8[0] != (code *)0x0) {
    plVar20 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar20 = local_a0;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (local_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data);
  }
  if (local_240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data);
  }
  UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_58);
LAB_147f69b88:
  if (cVar5 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar24 = (this->ComponentRecreateRenderStateContext).Ptr;
  if (pFVar24 != (FGlobalComponentRecreateRenderStateContext *)0x0) {
    FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(pFVar24)
    ;
    ::operator_delete(pFVar24,0x60);
  }
  this_00 = (this->ComponentReregisterContext).Ptr;
  if (this_00 != (FGlobalComponentReregisterContext *)0x0) {
    FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(this_00);
    ::operator_delete(this_00,0x60);
  }
  (this->UpdatedMaterialInterfaces).HashSize = 0;
  FVar2 = (this->UpdatedMaterialInterfaces).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UpdatedMaterialInterfaces).Elements);
  (this->UpdatedMaterials).HashSize = 0;
  FVar2 = (this->UpdatedMaterials).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UMaterial_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterial_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UMaterial_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 147f6c3f0

/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __thiscall
`FMaterialUpdateContext::~FMaterialUpdateContext'::__l2::<lambda_2>::operator()
          (void *this,UMaterialInstance *param_1)

{
  TObjectPtr<UMaterialInterface> *this_00;
  int iVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  UMaterialInstance *local_res10;
  
  this_00 = &param_1->Parent;
  local_res10 = param_1;
  if ((this_00->field0_0x0).DebugPtr != (UMaterialInterface *)0x0) {
    plVar10 = (longlong *)**(longlong **)this;
    plVar3 = plVar10 + (int)(*(longlong **)this)[1];
    for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
      if ((this_00->field0_0x0).DebugPtr == (UMaterialInterface *)*plVar10) {
        pUVar6 = Z_Construct_UClass_UMaterialInstance_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
        if ((bVar5) &&
           ((UMaterialInstance *)(this_00->field0_0x0).DebugPtr != (UMaterialInstance *)0x0)) {
          UE::Core::Private::Function::
          TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UMaterialInstance_*)>
          ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UMaterialInstance_*)>
                         **)((longlong)this + 8),(UMaterialInstance *)(this_00->field0_0x0).DebugPtr
                      );
        }
        break;
      }
    }
  }
  (**(code **)(local_res10->_padding_ + 0x598))(local_res10);
  UMaterialInstance::InitStaticPermutation(local_res10,None);
  if ((local_res10->bHasStaticPermutationResource != 0) &&
     (**(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1,
     **(char **)((longlong)this + 0x18) != '\0')) {
    TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_>::
    Append<FMaterialResource_*,TSizedDefaultAllocator<32>_>
              (*(TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20),
               &local_res10->StaticPermutationMaterialResources);
  }
  puVar2 = *(ulonglong **)this;
  if ((((UMaterialInstance **)*puVar2 <= &local_res10) &&
      (&local_res10 < (UMaterialInstance **)*puVar2 + *(int *)((longlong)puVar2 + 0xc))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (int)puVar2[1];
  if (iVar1 != 0) {
    iVar11 = 0;
    plVar3 = (longlong *)*puVar2;
    bVar5 = (UMaterialInstance *)*plVar3 != local_res10;
    lVar7 = 0;
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar5 == ((UMaterialInstance *)plVar3[lVar7] != local_res10));
      if (bVar5 != false) {
        if (iVar11 != iVar8) {
          memmove(plVar3 + iVar11,plVar3 + iVar8,(longlong)(iVar9 - iVar8) << 3);
        }
        iVar11 = iVar11 + (iVar9 - iVar8);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    *(int *)(puVar2 + 1) = iVar11;
  }
  return;
}

// AddMaterial @ 147f6d5f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FMaterialUpdateContext::AddMaterial(FMaterialUpdateContext *this,UMaterial *param_1)

{
  UMaterial *local_res8;
  UMaterial *local_res10;
  
  local_res10 = param_1;
  TSet<UMaterial_*,DefaultKeyFuncs<UMaterial_*,0>,FDefaultSetAllocator>::
  Emplace<UMaterial_*_const_&>(&this->UpdatedMaterials,&local_res8,(bool *)&local_res10);
  local_res8 = param_1;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
  Emplace<UMaterialInterface_*>
            (&this->UpdatedMaterialInterfaces,(UMaterialInterface **)&local_res10,
             (bool *)&local_res8);
  return;
}

// AddMaterialInstance @ 147f6d650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialUpdateContext::AddMaterialInstance(FMaterialUpdateContext *this,UMaterialInstance *param_1)

{
  UMaterial *local_res8;
  UMaterialInstance *local_res10;
  
  local_res10 = (UMaterialInstance *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  TSet<UMaterial_*,DefaultKeyFuncs<UMaterial_*,0>,FDefaultSetAllocator>::Emplace<UMaterial_*>
            (&this->UpdatedMaterials,&local_res8,(bool *)&local_res10);
  local_res10 = param_1;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
  Emplace<UMaterialInterface_*>
            (&this->UpdatedMaterialInterfaces,(UMaterialInterface **)&local_res8,
             (bool *)&local_res10);
  return;
}

// AddMaterialInterface @ 147f6d6c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialUpdateContext::AddMaterialInterface
          (FMaterialUpdateContext *this,UMaterialInterface *param_1)

{
  UMaterial *local_res8;
  UMaterialInterface *local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  TSet<UMaterial_*,DefaultKeyFuncs<UMaterial_*,0>,FDefaultSetAllocator>::Emplace<UMaterial_*>
            (&this->UpdatedMaterials,&local_res8,(bool *)local_res18);
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
  Emplace<UMaterialInterface_*_const_&>
            (&this->UpdatedMaterialInterfaces,(UMaterialInterface **)&local_res8,
             (bool *)&local_res10);
  return;
}

