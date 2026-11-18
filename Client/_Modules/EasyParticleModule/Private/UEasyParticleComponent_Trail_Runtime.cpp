// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 10

// StaticClass @ 14acb0ac0

UClass * __cdecl UEasyParticleComponent_Trail_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Trail_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Trail_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Trail_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Trail_Runtime,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Trail_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Trail_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Trail_Runtime.InnerSingleton;
}

// UEasyParticleComponent_Trail_Runtime @ 14acb75c0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Trail_Runtime * __thiscall
UEasyParticleComponent_Trail_Runtime::UEasyParticleComponent_Trail_Runtime
          (UEasyParticleComponent_Trail_Runtime *this,FVTableHelper *param_1)

{
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Trail_Runtime__6B_;
  FSlateBrush::FSlateBrush(&this->Brush);
  (this->TrailData).TransformCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailData).TransformCache.IndexMask = 0xffffffff;
  (this->TrailData).TransformCache.Front = 0;
  (this->TrailData).TransformCache.AfterBack = 0;
  (this->TrailData).VertexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailData).VertexData.ArrayNum = 0;
  (this->TrailData).VertexData.ArrayMax = 0;
  (this->TrailData).IndexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailData).IndexData.ArrayNum = 0;
  (this->TrailData).IndexData.ArrayMax = 0;
  (this->TrailData).MaxCount = 0;
  return this;
}

// ~UEasyParticleComponent_Trail_Runtime @ 14acb7ee0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_Trail_Runtime::~UEasyParticleComponent_Trail_Runtime
          (UEasyParticleComponent_Trail_Runtime *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Trail_Runtime__6B_;
  pFVar1 = (this->TrailData).IndexData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrailData).VertexData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
  ::
  ~TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
            (&(this->TrailData).TransformCache);
  pTVar2 = (this->Brush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Brush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acbb1a0

UClass * __cdecl UEasyParticleComponent_Trail_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Trail_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Trail_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Trail_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Trail_Runtime,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Trail_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Trail_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Trail_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Trail_Runtime @ 14acbd730

void __cdecl
UEasyParticleComponent_Trail_Runtime::StaticRegisterNativesUEasyParticleComponent_Trail_Runtime
          (void)

{
  return;
}

// UEasyParticleComponent_Trail_Runtime @ 14acc1f10

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Trail_Runtime * __thiscall
UEasyParticleComponent_Trail_Runtime::UEasyParticleComponent_Trail_Runtime
          (UEasyParticleComponent_Trail_Runtime *this,FObjectInitializer *param_1)

{
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Trail_Runtime__6B_;
  FSlateBrush::FSlateBrush(&this->Brush);
  (this->TrailData).TransformCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailData).TransformCache.IndexMask = 0xffffffff;
  (this->TrailData).TransformCache.Front = 0;
  (this->TrailData).TransformCache.AfterBack = 0;
  (this->TrailData).VertexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailData).VertexData.ArrayNum = 0;
  (this->TrailData).VertexData.ArrayMax = 0;
  (this->TrailData).IndexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailData).IndexData.ArrayNum = 0;
  (this->TrailData).IndexData.ArrayMax = 0;
  (this->TrailData).MaxCount = 0;
  return this;
}

// Init_Implementation @ 14acc5d90

void __thiscall
UEasyParticleComponent_Trail_Runtime::Init_Implementation
          (UEasyParticleComponent_Trail_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UEasyParticleComponent_Trail_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14acc5dcb;
  }
  lVar4 = 0;
LAB_14acc5dcb:
  if ((this->_padding_ != 0) && (lVar4 != 0)) {
    FSlateBrush::SetResourceObject(&this->Brush,*(UObject **)(lVar4 + 0x50));
    uVar2 = *(uint *)(lVar4 + 0x58);
    (this->TrailData).MaxCount = uVar2;
    uVar2 = TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
            ::NormalizeCapacity(&(this->TrailData).TransformCache,uVar2);
    if ((this->TrailData).TransformCache.IndexMask + 1 < uVar2) {
      TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
      ::Reallocate(&(this->TrailData).TransformCache,uVar2);
    }
  }
  return;
}

// OnPaint @ 14acc6480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_Trail_Runtime::OnPaint
          (UEasyParticleComponent_Trail_Runtime *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  UClass *pUVar11;
  TTransform2<float> *pTVar12;
  longlong lVar13;
  float extraout_XMM0_Da;
  float fVar14;
  FColor_u_0 FVar15;
  float extraout_XMM0_Db;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_228;
  TVector2<double>_u_0 local_218;
  TVector2<float>_u_0_s_0 local_208;
  float local_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  TVector2<float>_u_0_s_0 local_1e4;
  FSlateResourceHandle local_1c8;
  undefined8 local_1b8;
  float local_1b0;
  FColor_u_0 FStack_1ac;
  float local_1a8;
  undefined8 local_1a4;
  TTransform2<float> local_19c;
  byte local_184;
  undefined8 local_180;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float local_154;
  float fStack_150;
  uint local_14c;
  TTransform2<float> local_148;
  TVector2<double>_u_0 local_128;
  TTransform2<float> local_118;
  TVector2<float>_u_0 local_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  TTransform2<float> local_b8;
  TTransform2<float> local_a0 [5];
  
  lVar13 = this->_padding_;
  if (lVar13 != 0) {
    pUVar11 = Z_Construct_UClass_UEasyParticleComponent_Trail_NoRegister();
    iVar4 = (int)pUVar11->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar4 * 8)
        == &pUVar11->_padding_)) goto LAB_14acc64df;
  }
  lVar13 = 0;
LAB_14acc64df:
  lVar5 = this->_padding_;
  if ((lVar5 != 0) && (lVar13 != 0)) {
    local_208 = (param_1->WindowOffset).field0_0x0._s_0;
    local_200 = (float)(*(double *)(lVar5 + 0x98) - (double)local_208.X);
    fStack_1fc = (float)(*(double *)(lVar5 + 0xa0) - (double)local_208.Y);
    pTVar12 = Inverse<TTransform2<float>_>(local_a0,&param_2->AccumulatedRenderTransform);
    dVar2 = *(double *)(lVar5 + 0xf0);
    dVar3 = *(double *)(lVar5 + 0xf8);
    local_218._0_4_ =
         (undefined4)
         (((double)(fStack_1fc * (pTVar12->M).M[1][0] + local_200 * (pTVar12->M).M[0][0] +
                   (pTVar12->Trans).field0_0x0._s_0.X) + *(double *)(lVar5 + 0xe0)) -
         dVar2 * __real_3fe0000000000000);
    local_218._4_4_ =
         (undefined4)
         (((double)(local_200 * (pTVar12->M).M[0][1] + fStack_1fc * (pTVar12->M).M[1][1] +
                   (pTVar12->Trans).field0_0x0._s_0.Y) + *(double *)(lVar5 + 0xe8)) -
         dVar3 * __real_3fe0000000000000);
    __libm_sse2_sincosf_();
    uVar9 = local_218._4_4_;
    uVar8 = local_218._0_4_;
    fVar7 = __real_3f800000;
    local_148.M.M[0][1] = *(float *)(lVar5 + 0x118);
    local_1e4 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_148.M.M[0][0] = extraout_XMM0_Db * local_148.M.M[0][1];
    local_1b0 = 1.0;
    FStack_1ac = (FColor_u_0)0x0;
    fVar16 = (float)dVar3;
    local_1a8 = 0.0;
    local_148.M.M[1][0] =
         (float)((uint)(local_148.M.M[0][1] * extraout_XMM0_Da) ^
                __xmm_80000000800000008000000080000000);
    local_148.M.M[0][1] = local_148.M.M[0][1] * extraout_XMM0_Da;
    fVar14 = (float)dVar2;
    fVar1 = param_2->Scale;
    local_228 = CONCAT44(fVar16,fVar14);
    local_1b8 = local_228;
    local_1f8 = local_228;
    local_1f0 = local_228;
    local_1a4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    fVar18 = (float)((uint)(fVar14 * (float)*(double *)(lVar5 + 0x130)) ^
                    __xmm_80000000800000008000000080000000);
    local_118.Trans.field0_0x0._s_0.X = (float)local_218._0_4_;
    local_118.Trans.field0_0x0._s_0.Y = (float)local_218._4_4_;
    fVar17 = (float)((uint)(fVar16 * (float)*(double *)(lVar5 + 0x138)) ^
                    __xmm_80000000800000008000000080000000);
    local_148.Trans.field0_0x0._s_0.X =
         local_148.M.M[1][0] * fVar17 + fVar18 * local_148.M.M[0][0] +
         fVar14 * (float)*(double *)(lVar5 + 0x130);
    local_148.Trans.field0_0x0._s_0.Y =
         fVar18 * local_148.M.M[0][1] + fVar17 * local_148.M.M[0][0] +
         fVar16 * (float)*(double *)(lVar5 + 0x138);
    local_118.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_118.M.M[0][1] = _UNK_15076b184;
    local_118.M.M[1][0] = _UNK_15076b188;
    local_118.M.M[1][1] = _UNK_15076b18c;
    local_148.M.M[1][1] = local_148.M.M[0][0];
    Concatenate<TTransform2<float>_>(&local_b8,&local_148,&local_118);
    Concatenate<TTransform2<float>_>(&local_19c,&local_b8,&param_2->AccumulatedRenderTransform);
    local_184 = local_184 | 1;
    local_1a4._0_4_ = (float)uVar8;
    local_1a4._4_4_ = (float)uVar9;
    uStack_174 = 0;
    uStack_170 = 0;
    FVar15 = (FColor_u_0)((float)uVar8 * fVar1 + local_1e4.X);
    local_1a8 = (float)uVar9 * fVar1 + local_1e4.Y;
    local_228 = CONCAT44(local_1a8,FVar15.Bits);
    local_180 = local_228;
    uStack_16c = (undefined4)local_1b8;
    uStack_168 = (undefined4)((ulonglong)local_1b8 >> 0x20);
    local_154 = local_19c.Trans.field0_0x0._0_4_;
    fStack_150 = local_19c.Trans.field0_0x0._4_4_;
    local_14c = local_14c & 0xfffffffe | 2;
    fStack_164 = local_19c.M.M[0][0];
    fStack_160 = local_19c.M.M[0][1];
    fStack_15c = local_19c.M.M[1][0];
    fStack_158 = local_19c.M.M[1][1];
    local_1b0 = fVar1;
    FStack_1ac = FVar15;
    local_218._0_4_ = uVar8;
    local_218._4_4_ = uVar9;
    FLinearColor::ToFColorSRGB((FLinearColor *)(lVar5 + 0x108));
    local_f8._s_0.X = (float)local_180;
    local_f8._s_0.Y = local_180._4_4_;
    uStack_ec = uStack_174;
    local_e8 = CONCAT44(uStack_16c,uStack_170);
    uStack_e0 = CONCAT44(fStack_164,uStack_168);
    local_d8 = CONCAT44(fStack_15c,fStack_160);
    uStack_d0 = CONCAT44(local_154,fStack_158);
    local_c8 = CONCAT44(local_14c,fStack_150);
    local_218._s_0.X = *(double *)(lVar5 + 0xf0);
    local_218._s_0.Y = *(double *)(lVar5 + 0xf8);
    local_128._s_0.X = *(double *)(lVar5 + 0xe0);
    local_128._s_0.Y = *(double *)(lVar5 + 0xe8);
    fStack_178 = fVar1;
    fStack_f0 = fVar1;
    FEasyParticleTrail::Enqueue
              (&this->TrailData,(TVector2<double> *)&local_128._s_0,
               (TVector2<double> *)&local_218._s_0,(FColor)FVar15._s_0,
               (FPaintGeometry *)&local_f8._s_0);
    FEasyParticleTrail::GenerateVertexAndIndex(&this->TrailData);
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentApplication.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                          ,0x141,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    bVar10 = IsInGameThread();
    if (!bVar10) {
      bVar10 = IsInSlateThread();
      if (!bVar10) {
        bVar10 = (*IsInAsyncLoadingThread)();
        if (!bVar10) {
          bVar10 = IsInParallelLoadingThread();
          if (!bVar10) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                ,0x142,L"");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
      }
    }
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(**(longlong **)&(FSlateApplication::CurrentApplication.Object)->field_0x60 + 0x80))
              (*(longlong **)&(FSlateApplication::CurrentApplication.Object)->field_0x60,&local_1c8,
               &this->Brush);
    bVar10 = FSlateResourceHandle::IsValid(&local_1c8);
    if (((bVar10) && (0 < (this->TrailData).VertexData.ArrayNum)) &&
       (0 < (this->TrailData).IndexData.ArrayNum)) {
      FSlateDrawElement::MakeCustomVerts
                (param_4,(uint)(longlong)(((float)param_5 + *(float *)(lVar5 + 0x140)) - fVar7),
                 &local_1c8,&(this->TrailData).VertexData,&(this->TrailData).IndexData,
                 (ISlateUpdatableInstanceBuffer *)0x0,0,0,*(ESlateDrawEffect *)(lVar5 + 0x144));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.Data.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Reset_Implementation @ 14acc8c30

void __thiscall
UEasyParticleComponent_Trail_Runtime::Reset_Implementation
          (UEasyParticleComponent_Trail_Runtime *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  FEasyParticleTrail *this_00;
  
  lVar6 = this->_padding_;
  if (lVar6 != 0) {
    pUVar5 = Z_Construct_UClass_UEasyParticleComponent_Trail_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14acc8c6b;
  }
  lVar6 = 0;
LAB_14acc8c6b:
  if ((this->_padding_ != 0) && (lVar6 != 0)) {
    this_00 = &this->TrailData;
    if ((this->TrailData).TransformCache.IndexMask + 1 <
        (this->TrailData).TransformCache.AfterBack - (this->TrailData).TransformCache.Front) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x37f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this->TrailData).TransformCache.Front = 0;
    (this->TrailData).TransformCache.AfterBack = 0;
    TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
    ::Reallocate(&this_00->TransformCache,0);
    uVar4 = *(uint *)(lVar6 + 0x58);
    (this->TrailData).MaxCount = uVar4;
    uVar4 = TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
            ::NormalizeCapacity(&this_00->TransformCache,uVar4);
    if ((this->TrailData).TransformCache.IndexMask + 1 < uVar4) {
      TRingBuffer<UEasyParticleComponent_Trail_Runtime::FEasyParticleTransform,TSizedDefaultAllocator<32>_>
      ::Reallocate(&this_00->TransformCache,uVar4);
    }
  }
  return;
}

// Tick_Implementation @ 14acca7e0

void __thiscall
UEasyParticleComponent_Trail_Runtime::Tick_Implementation
          (UEasyParticleComponent_Trail_Runtime *this,FGeometry *param_1,float param_2)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (this->_padding_ == 0) {
    return;
  }
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Trail.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Trail",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Trail.InnerSingleton,
               UEasyParticleComponent_Trail::StaticRegisterNativesUEasyParticleComponent_Trail,0x60,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_Trail>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Trail>,aFStackX_8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return;
}

