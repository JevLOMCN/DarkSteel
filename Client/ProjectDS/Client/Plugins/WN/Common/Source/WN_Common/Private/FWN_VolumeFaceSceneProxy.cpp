// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 9

// FWN_VolumeFaceSceneProxy @ 14948cda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FWN_VolumeFaceSceneProxy * __thiscall
FWN_VolumeFaceSceneProxy::FWN_VolumeFaceSceneProxy
          (FWN_VolumeFaceSceneProxy *this,UWN_VolumeComponent *param_1,
          UWN_VolumeFaceComponent *param_2)

{
  byte *pbVar1;
  double dVar2;
  EWN_VolumeShape EVar3;
  UMaterial *pUVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  FColor_u_0 FVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FWN_VolumeFaceSceneProxy *pFVar12;
  longlong lVar13;
  int iVar14;
  double *pdVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  float extraout_XMM0_Da;
  uint uVar18;
  float extraout_XMM0_Db;
  uint uVar19;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_298 [32];
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> local_248;
  FColor_u_0 local_238;
  FWN_VolumeFaceSceneProxy *local_230;
  FColor_u_0 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  UWN_VolumeComponent *local_208 [2];
  undefined8 local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 local_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  FColor_u_0 FStack_e4;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 local_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  FColor_u_0 FStack_84;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_220 = 0;
  local_230 = this;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_2,(FName)0x0);
  this->_padding_ = (longlong)&___7FWN_VolumeFaceSceneProxy__6B_;
  lVar11 = 0x640;
  if (param_1->bIgnoreDepth == false) {
    lVar11 = 0x638;
  }
  pUVar4 = *(UMaterial **)((longlong)&param_1->_padding_ + lVar11);
  (this->FaceMaterial).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FWN_VolumeFaceSceneProxy");
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  dVar2 = param_1->Radius;
  EVar3 = param_1->ShapeType;
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&this->FaceIndexBuffer);
  (this->FaceIndexBuffer).NumTriangles = 0;
  (this->FaceIndexBuffer)._padding_ = (longlong)&___7FWN_VolumeFaceIndexBuffer__6B_;
  (this->FaceIndexBuffer).ShapeType = EVar3;
  dVar6 = (param_1->VolumeExtent).field0_0x0._s_0.Y;
  (this->FaceIndexBuffer).VolumeExtent.field0_0x0._s_0.X = (param_1->VolumeExtent).field0_0x0._s_0.X
  ;
  (this->FaceIndexBuffer).VolumeExtent.field0_0x0._s_0.Y = dVar6;
  (this->FaceIndexBuffer).VolumeExtent.field0_0x0._s_0.Z = (param_1->VolumeExtent).field0_0x0._s_0.Z
  ;
  (this->FaceIndexBuffer).Radius = (float)dVar2;
  if (EVar3 == Box) {
    (this->FaceIndexBuffer).NumTriangles = 0xc;
  }
  else if (EVar3 == Sphere) {
    (this->FaceIndexBuffer).NumTriangles = 0x800;
  }
  this->ShapeType = param_1->ShapeType;
  dVar2 = (param_1->VolumeExtent).field0_0x0._s_0.Y;
  (this->VolumeExtent).field0_0x0._s_0.X = (param_1->VolumeExtent).field0_0x0._s_0.X;
  (this->VolumeExtent).field0_0x0._s_0.Y = dVar2;
  (this->VolumeExtent).field0_0x0._s_0.Z = (param_1->VolumeExtent).field0_0x0._s_0.Z;
  this->Radius = (float)param_1->Radius;
  uVar7 = *(undefined8 *)((longlong)&(param_1->VolumeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->VolumeColor).field0_0x0 = *(undefined8 *)&(param_1->VolumeColor).field0_0x0
  ;
  *(undefined8 *)((longlong)&(this->VolumeColor).field0_0x0 + 8) = uVar7;
  this->bValid = param_1->bValid;
  if ((param_1->bUseInfiniteVolume == false) || (param_1->bIsInfiniteVolume == false)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  this->bIsInfinite = bVar9;
  this->bOverrideNeedRendering = param_1->bOverrideNeedRendering;
  this->bDisplayShadedVolume = param_1->bDisplayShadedVolume;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_208[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->OwnerComponent).WeakPtr,(FObjectPtr)local_208);
  if (this->bValid == false) {
    local_238 = FColor::Red.field0_0x0;
  }
  else {
    FLinearColor::ToFColorSRGB(&this->VolumeColor);
    local_238 = local_228;
  }
  FVar8 = local_238;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  if (this->ShapeType == Box) {
    local_1f8 = *(undefined8 *)&(this->VolumeExtent).field0_0x0;
    pdVar15 = &local_1f0;
    local_1f0 = *(double *)((longlong)&(this->VolumeExtent).field0_0x0 + 8);
    local_1e8 = *(undefined8 *)((longlong)&(this->VolumeExtent).field0_0x0 + 0x10);
    local_210 = 0;
    lVar11 = 8;
    uVar18 = (uint)__xmm_80000000000000008000000000000000;
    uVar20 = SUB84(local_1f0,0) ^ uVar18;
    uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar21 = (uint)((ulonglong)local_1f0 >> 0x20) ^ uVar19;
    local_1d0 = local_1e8;
    local_1b8 = local_1e8;
    iVar14 = 0x7f;
    if ((int)ROUND(___real_406fd00000000000) >> 1 < 0x7f) {
      iVar14 = (int)ROUND(___real_406fd00000000000) >> 1;
    }
    local_1a0 = local_1e8;
    local_1c8 = CONCAT44((uint)((ulonglong)local_1f8 >> 0x20) ^ uVar19,(uint)local_1f8 ^ uVar18);
    local_188 = CONCAT44((uint)((ulonglong)local_1e8 >> 0x20) ^ uVar19,(uint)local_1e8 ^ uVar18);
    local_1e0 = local_1f8;
    uVar16 = 0x80;
    if (-0x80 < iVar14) {
      uVar16 = (char)iVar14;
    }
    local_1d8 = CONCAT44(uVar21,uVar20);
    local_1c0 = CONCAT44(uVar21,uVar20);
    local_1b0 = local_1c8;
    iVar14 = 0x7f;
    if ((int)ROUND(__real_3fe0000000000000) >> 1 < 0x7f) {
      iVar14 = (int)ROUND(__real_3fe0000000000000) >> 1;
    }
    local_1a8 = local_1f0;
    local_198 = local_1f8;
    uVar17 = 0x80;
    if (-0x80 < iVar14) {
      uVar17 = (char)iVar14;
    }
    local_190 = local_1f0;
    local_180 = local_1f8;
    local_178 = CONCAT44(uVar21,uVar20);
    local_170 = local_188;
    local_168 = local_1c8;
    local_160 = CONCAT44(uVar21,uVar20);
    local_158 = local_188;
    local_150 = local_1c8;
    local_148 = local_1f0;
    local_140 = local_188;
    do {
      uStack_8c = uVar16;
      uStack_8b = uVar17;
      uStack_8a = uVar17;
      uStack_89 = 0x7f;
      local_88 = uVar17;
      uStack_87 = uVar17;
      uStack_86 = uVar16;
      uStack_85 = 0x7f;
      uStack_cc = 0;
      uStack_c8 = 0;
      FStack_84._s_0 = FVar8._s_0;
      local_d8 = (float)pdVar15[-1];
      fStack_d4 = (float)*pdVar15;
      fStack_d0 = (float)pdVar15[1];
      if (((local_248.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x58)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FWN_VolumeFaceSceneProxy *)(*pcVar5)();
        return pFVar12;
      }
      if (local_248.ArrayNum == local_248.ArrayMax) {
        local_248.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&local_248.AllocatorInstance,&local_248.ArrayMax);
      }
      iVar14 = local_248.ArrayNum + 1;
      pdVar15 = pdVar15 + 3;
      lVar13 = (longlong)local_248.ArrayNum * 0x58;
      *(ulonglong *)(local_248.AllocatorInstance.Data + lVar13) = CONCAT44(fStack_d4,local_d8);
      *(ulonglong *)(local_248.AllocatorInstance.Data + lVar13 + 8) = CONCAT44(uStack_cc,fStack_d0);
      *(ulonglong *)(local_248.AllocatorInstance.Data + lVar13 + 0x10) =
           CONCAT44(uStack_c4,uStack_c8);
      *(undefined8 *)(local_248.AllocatorInstance.Data + lVar13 + 0x10 + 8) = uStack_c0;
      *(undefined8 *)(local_248.AllocatorInstance.Data + lVar13 + 0x20) = local_b8;
      *(undefined8 *)(local_248.AllocatorInstance.Data + lVar13 + 0x20 + 8) = uStack_b0;
      *(undefined8 *)(local_248.AllocatorInstance.Data + lVar13 + 0x30) = local_a8;
      *(undefined8 *)(local_248.AllocatorInstance.Data + lVar13 + 0x30 + 8) = uStack_a0;
      *(undefined8 *)(local_248.AllocatorInstance.Data + lVar13 + 0x40) = local_98;
      *(ulonglong *)(local_248.AllocatorInstance.Data + lVar13 + 0x40 + 8) =
           CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT15(uStack_8b,CONCAT14(uStack_8c,uStack_90))))
      ;
      *(ulonglong *)(local_248.AllocatorInstance.Data + lVar13 + 0x50) =
           CONCAT44(FStack_84.Bits,
                    CONCAT13(uStack_85,CONCAT12(uStack_86,CONCAT11(uStack_87,local_88))));
      lVar11 = lVar11 + -1;
      this = local_230;
      local_248.ArrayNum = iVar14;
    } while (lVar11 != 0);
  }
  else if (this->ShapeType == Sphere) {
    local_230 = (FWN_VolumeFaceSceneProxy *)((ulonglong)local_230 & 0xffffffff00000000);
    local_218 = 0;
    iVar14 = 0x7f;
    if ((int)ROUND(___real_406fd00000000000) >> 1 < 0x7f) {
      iVar14 = (int)ROUND(___real_406fd00000000000) >> 1;
    }
    iVar10 = 0x7f;
    if ((int)ROUND(__real_3fe0000000000000) >> 1 < 0x7f) {
      iVar10 = (int)ROUND(__real_3fe0000000000000) >> 1;
    }
    uVar16 = 0x80;
    if (-0x80 < iVar14) {
      uVar16 = (char)iVar14;
    }
    uVar17 = 0x80;
    if (-0x80 < iVar10) {
      uVar17 = (char)iVar10;
    }
    do {
      FVar8 = local_238;
      iVar14 = 0;
      do {
        iVar10 = local_248.ArrayNum;
        __libm_sse2_sincosf4_();
        fStack_134 = extraout_XMM0_Dc * this->Radius;
        fStack_130 = extraout_XMM0_Dd * this->Radius;
        local_138 = extraout_XMM0_Db * fStack_134;
        fStack_134 = extraout_XMM0_Da * fStack_134;
        uStack_e9 = 0x7f;
        uStack_e5 = 0x7f;
        uStack_12c = 0;
        uStack_128 = 0;
        FStack_e4._s_0 = FVar8._s_0;
        uStack_ec = uVar16;
        uStack_eb = uVar17;
        uStack_ea = uVar17;
        local_e8 = uVar17;
        uStack_e7 = uVar17;
        uStack_e6 = uVar16;
        if (((local_248.AllocatorInstance.Data <= (FScriptContainerElement *)&local_138) &&
            ((FScriptContainerElement *)&local_138 <
             local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 0x58)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), iVar10 = local_248.ArrayNum, bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FWN_VolumeFaceSceneProxy *)(*pcVar5)();
          return pFVar12;
        }
        if (iVar10 == local_248.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x458,&local_248.AllocatorInstance,&local_248.ArrayMax);
        }
        local_248.ArrayNum = iVar10 + 1;
        iVar14 = iVar14 + 1;
        lVar11 = (longlong)iVar10 * 0x58;
        *(ulonglong *)(local_248.AllocatorInstance.Data + lVar11) = CONCAT44(fStack_134,local_138);
        *(ulonglong *)(local_248.AllocatorInstance.Data + lVar11 + 8) =
             CONCAT44(uStack_12c,fStack_130);
        *(ulonglong *)(local_248.AllocatorInstance.Data + lVar11 + 0x10) =
             CONCAT44(uStack_124,uStack_128);
        *(undefined8 *)(local_248.AllocatorInstance.Data + lVar11 + 0x10 + 8) = uStack_120;
        *(undefined8 *)(local_248.AllocatorInstance.Data + lVar11 + 0x20) = local_118;
        *(undefined8 *)(local_248.AllocatorInstance.Data + lVar11 + 0x20 + 8) = uStack_110;
        *(undefined8 *)(local_248.AllocatorInstance.Data + lVar11 + 0x30) = local_108;
        *(undefined8 *)(local_248.AllocatorInstance.Data + lVar11 + 0x30 + 8) = uStack_100;
        *(undefined8 *)(local_248.AllocatorInstance.Data + lVar11 + 0x40) = local_f8;
        *(ulonglong *)(local_248.AllocatorInstance.Data + lVar11 + 0x40 + 8) =
             CONCAT17(uStack_e9,
                      CONCAT16(uStack_ea,CONCAT15(uStack_eb,CONCAT14(uStack_ec,uStack_f0))));
        *(ulonglong *)(local_248.AllocatorInstance.Data + lVar11 + 0x50) =
             CONCAT44(FStack_e4.Bits,
                      CONCAT13(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,local_e8))));
      } while (iVar14 < 0x20);
      iVar14 = (int)local_230 + 1;
      local_230 = (FWN_VolumeFaceSceneProxy *)CONCAT44(local_230._4_4_,iVar14);
    } while (iVar14 < 0x21);
  }
  FStaticMeshVertexBuffers::InitFromDynamicVertex
            (&this->VertexBuffers,(FRHICommandListBase *)0x0,(FRenderCommandPipe *)0x0,
             &this->VertexFactory,&local_248,1,0);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  return this;
}

// ~FWN_VolumeFaceSceneProxy @ 149490270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FWN_VolumeFaceSceneProxy::~FWN_VolumeFaceSceneProxy(FWN_VolumeFaceSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  
  this->_padding_ = (longlong)&___7FWN_VolumeFaceSceneProxy__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  (**(code **)((this->FaceIndexBuffer)._padding_ + 0x20))(&this->FaceIndexBuffer);
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->FaceIndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// CreateRenderThreadResources @ 14949b540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_VolumeFaceSceneProxy::CreateRenderThreadResources
          (FWN_VolumeFaceSceneProxy *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014949b54a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->FaceIndexBuffer)._padding_ + 0x18))();
  return;
}

// DrawBoxFace @ 14949d410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_VolumeFaceSceneProxy::DrawBoxFace
          (FWN_VolumeFaceSceneProxy *this,FSceneViewFamily *param_1,FMeshElementCollector *param_2,
          int param_3)

{
  uint uVar1;
  UMaterial *pUVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  FLinearColor *pFVar7;
  FColoredMaterialRenderProxy *pFVar8;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar9;
  ForElementType<FMeshBatchElement> FVar10;
  ForElementType<FMeshBatchElement> FVar11;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_30;
  
  bVar5 = TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerComponent,(void *)0x0);
  if (((((!bVar5) && (pUVar2 = (this->FaceMaterial).field0_0x0.DebugPtr, pUVar2 != (UMaterial *)0x0)
        ) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) &&
      ((0.0 < (this->VolumeColor).field0_0x0._s_0.A && (this->bDisplayShadedVolume != false)))) &&
     (((this->FaceIndexBuffer).NumTriangles != 0 &&
      ((this->VertexBuffers).PositionVertexBuffer.NumVertices != 0)))) {
    pFVar7 = &FLinearColor::Red;
    if (this->bValid != false) {
      pFVar7 = &this->VolumeColor;
    }
    local_30._0_8_ = *(undefined8 *)&pFVar7->field0_0x0;
    local_30._8_8_ = *(undefined8 *)((longlong)&pFVar7->field0_0x0 + 8);
    pFVar8 = ::operator_new(0xe0);
    if (pFVar8 == (FColoredMaterialRenderProxy *)0x0) {
      pFVar8 = (FColoredMaterialRenderProxy *)0x0;
    }
    else {
      FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
      uVar1 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
      pFVar9 = (FMaterialRenderProxy *)
               (**(code **)(((this->FaceMaterial).field0_0x0.DebugPtr)->_padding_ + 0x310))();
      FVar4.Number = 0;
      FVar4.ComparisonIndex.Value = uVar1;
      pFVar8 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                         (pFVar8,pFVar9,(FLinearColor *)&local_30._s_0,FVar4);
    }
    FMeshElementCollector::RegisterOneFrameMaterialProxy(param_2,(FMaterialRenderProxy *)pFVar8);
    FVar10 = (ForElementType<FMeshBatchElement>)FMeshElementCollector::AllocateMesh(param_2);
    if ((*(int *)((longlong)FVar10 + 0xa0) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar11 = FVar10;
    if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar10 + 0x98) !=
        (ForElementType<FMeshBatchElement>)0x0) {
      FVar11 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar10 + 0x98);
    }
    *(FWN_VolumeFaceIndexBuffer **)((longlong)FVar11 + 0x18) = &this->FaceIndexBuffer;
    *(FLocalVertexFactory **)((longlong)FVar10 + 0xa8) = &this->VertexFactory;
    *(FColoredMaterialRenderProxy **)((longlong)FVar10 + 0xb0) = pFVar8;
    *(undefined4 *)((longlong)FVar11 + 0x58) = 0;
    *(uint *)((longlong)FVar11 + 0x5c) = (this->FaceIndexBuffer).NumTriangles;
    *(undefined4 *)((longlong)FVar11 + 0x68) = 0;
    *(uint *)((longlong)FVar11 + 0x6c) = (this->VertexBuffers).PositionVertexBuffer.NumVertices - 1;
    *(uint *)((longlong)FVar10 + 0xd4) = *(uint *)((longlong)FVar10 + 0xd4) & 0xfffffc7b;
    *(uint *)((longlong)FVar10 + 0xd4) =
         -(uint)((this->_padding_ & 0x600) != 0) & 0x400 |
         *(uint *)((longlong)FVar10 + 0xd4) & 0xffffe3ff;
    FMeshElementCollector::AddMesh(param_2,param_3,(FMeshBatch *)FVar10);
  }
  return;
}

// DrawSphereFace @ 14949d830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_VolumeFaceSceneProxy::DrawSphereFace
          (FWN_VolumeFaceSceneProxy *this,FSceneViewFamily *param_1,FMeshElementCollector *param_2,
          int param_3)

{
  uint uVar1;
  UMaterial *pUVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  FLinearColor *pFVar7;
  FColoredMaterialRenderProxy *pFVar8;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar9;
  ForElementType<FMeshBatchElement> FVar10;
  ForElementType<FMeshBatchElement> FVar11;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_30;
  
  bVar5 = TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerComponent,(void *)0x0);
  if (((((!bVar5) && (pUVar2 = (this->FaceMaterial).field0_0x0.DebugPtr, pUVar2 != (UMaterial *)0x0)
        ) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) &&
      ((0.0 < (this->VolumeColor).field0_0x0._s_0.A && (this->bDisplayShadedVolume != false)))) &&
     (((this->FaceIndexBuffer).NumTriangles != 0 &&
      ((this->VertexBuffers).PositionVertexBuffer.NumVertices != 0)))) {
    pFVar7 = &FLinearColor::Red;
    if (this->bValid != false) {
      pFVar7 = &this->VolumeColor;
    }
    local_30._0_8_ = *(undefined8 *)&pFVar7->field0_0x0;
    local_30._8_8_ = *(undefined8 *)((longlong)&pFVar7->field0_0x0 + 8);
    pFVar8 = ::operator_new(0xe0);
    if (pFVar8 == (FColoredMaterialRenderProxy *)0x0) {
      pFVar8 = (FColoredMaterialRenderProxy *)0x0;
    }
    else {
      FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
      uVar1 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
      pFVar9 = (FMaterialRenderProxy *)
               (**(code **)(((this->FaceMaterial).field0_0x0.DebugPtr)->_padding_ + 0x310))();
      FVar4.Number = 0;
      FVar4.ComparisonIndex.Value = uVar1;
      pFVar8 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                         (pFVar8,pFVar9,(FLinearColor *)&local_30._s_0,FVar4);
    }
    FMeshElementCollector::RegisterOneFrameMaterialProxy(param_2,(FMaterialRenderProxy *)pFVar8);
    FVar10 = (ForElementType<FMeshBatchElement>)FMeshElementCollector::AllocateMesh(param_2);
    if ((*(int *)((longlong)FVar10 + 0xa0) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar11 = FVar10;
    if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar10 + 0x98) !=
        (ForElementType<FMeshBatchElement>)0x0) {
      FVar11 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar10 + 0x98);
    }
    *(FWN_VolumeFaceIndexBuffer **)((longlong)FVar11 + 0x18) = &this->FaceIndexBuffer;
    *(FLocalVertexFactory **)((longlong)FVar10 + 0xa8) = &this->VertexFactory;
    *(FColoredMaterialRenderProxy **)((longlong)FVar10 + 0xb0) = pFVar8;
    *(undefined4 *)((longlong)FVar11 + 0x58) = 0;
    *(uint *)((longlong)FVar11 + 0x5c) = (this->FaceIndexBuffer).NumTriangles;
    *(undefined4 *)((longlong)FVar11 + 0x68) = 0;
    *(uint *)((longlong)FVar11 + 0x6c) = (this->VertexBuffers).PositionVertexBuffer.NumVertices - 1;
    *(uint *)((longlong)FVar10 + 0xd4) = *(uint *)((longlong)FVar10 + 0xd4) & 0xfffffc7b;
    *(uint *)((longlong)FVar10 + 0xd4) =
         -(uint)((this->_padding_ & 0x600) != 0) & 0x400 |
         *(uint *)((longlong)FVar10 + 0xd4) & 0xffffe3ff;
    FMeshElementCollector::AddMesh(param_2,param_3,(FMeshBatch *)FVar10);
  }
  return;
}

// GetDynamicMeshElements @ 1494a07e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_VolumeFaceSceneProxy::GetDynamicMeshElements
          (FWN_VolumeFaceSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (this->bOverrideNeedRendering != false) {
    iVar5 = param_1->ArrayNum;
    uVar4 = 0;
    if (0 < iVar5) {
      do {
        if ((param_3 >> (uVar4 & 0x1f) & 1) != 0) {
          uVar3 = 0;
          if ((int)uVar4 < iVar5) {
            uVar3 = ~uVar4 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (this->ShapeType == Box) {
            DrawBoxFace(this,param_2,param_4,uVar4);
          }
          else if (this->ShapeType == Sphere) {
            DrawSphereFace(this,param_2,param_4,uVar4);
          }
        }
        iVar5 = param_1->ArrayNum;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar5);
    }
  }
  return;
}

// GetMemoryFootprint @ 1494a0b50

uint __thiscall FWN_VolumeFaceSceneProxy::GetMemoryFootprint(FWN_VolumeFaceSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x6a0;
}

// GetTypeHash @ 1494a3700

ulong64 __thiscall FWN_VolumeFaceSceneProxy::GetTypeHash(FWN_VolumeFaceSceneProxy *this)

{
  return 0x15527ee90;
}

// GetViewRelevance @ 1494a38e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FWN_VolumeFaceSceneProxy::GetViewRelevance
          (FWN_VolumeFaceSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  bVar3 = false;
  if (this->bIsInfinite == false) {
    bVar3 = bVar2;
  }
  __return_storage_ptr__->bDynamicRelevance = 1;
  __return_storage_ptr__->bDrawRelevance = bVar3;
  bVar3 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 3;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  return __return_storage_ptr__;
}

