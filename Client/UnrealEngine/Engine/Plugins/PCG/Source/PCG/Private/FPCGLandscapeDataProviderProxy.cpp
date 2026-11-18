// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// FPCGLandscapeDataProviderProxy @ 149737e40

FPCGLandscapeDataProviderProxy * __thiscall
FPCGLandscapeDataProviderProxy::FPCGLandscapeDataProviderProxy
          (FPCGLandscapeDataProviderProxy *this,TSharedPtr<FPCGLandscapeResource_const_,1> *param_1,
          URuntimeVirtualTexture *param_2,URuntimeVirtualTexture *param_3,
          URuntimeVirtualTexture *param_4,bool param_5,EBaseColorUnpackType param_6,
          ERuntimeVirtualTextureMaterialType param_7,TVector2<double> *param_8)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  URuntimeVirtualTexture *pUVar3;
  URuntimeVirtualTexture *local_res8;
  
  *(undefined ***)this = &___7FPCGLandscapeDataProviderProxy__6B_;
  (this->Resource).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Resource).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->BaseColorVirtualTexture).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->BaseColorVirtualTexture).WeakPtr,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_3 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->HeightVirtualTexture).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_3 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&(this->HeightVirtualTexture).WeakPtr,(FObjectPtr)&local_res8);
  pUVar3 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  (this->NormalVirtualTexture).WeakPtr = (FWeakObjectPtr)0x0;
  param_4 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&(this->NormalVirtualTexture).WeakPtr,(FObjectPtr)&param_4);
  (this->BaseColorVirtualPage).bIsAdaptive = false;
  this->bBaseColorSRGB = param_5;
  this->NormalVirtualTextureMode = param_7;
  (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.W = 1.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.W = 1.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.W = 1.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.X = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Y = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Z = 0.0;
  (this->BaseColorVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.W = 1.0;
  (this->BaseColorVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  (this->BaseColorVirtualPage).PageTableIndirectionRef.Reference = (FRHITexture *)0x0;
  (this->BaseColorVirtualLayer).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BaseColorVirtualLayer).TextureUniforms.field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  this->BaseColorVirtualTextureUnpackType = param_6;
  (this->HeightVirtualPage).bIsAdaptive = false;
  (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.W = 1.0;
  (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.W = 1.0;
  (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.W = 1.0;
  (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.X = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Y = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Z = 0.0;
  (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.W = 1.0;
  (this->HeightVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  (this->HeightVirtualPage).PageTableIndirectionRef.Reference = (FRHITexture *)0x0;
  (this->HeightVirtualLayer).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->HeightVirtualLayer).TextureUniforms.field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  (this->NormalVirtualPage).bIsAdaptive = false;
  (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.W = 1.0;
  (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.W = 1.0;
  (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.W = 1.0;
  (this->NormalVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.X = 0.0;
  (this->NormalVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Y = 0.0;
  (this->NormalVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  (this->NormalVirtualPage).PageTableIndirectionRef.Reference = (FRHITexture *)0x0;
  (this->NormalVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Z = 0.0;
  (this->NormalVirtualLayer0).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->NormalVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.W = 1.0;
  (this->NormalVirtualLayer0).TextureUniforms.field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  (this->NormalVirtualLayer1).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->NormalVirtualLayer1).TextureUniforms.field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  dVar2 = (param_8->field0_0x0)._s_0.Y;
  (this->LandscapeGridSize).field0_0x0._s_0.X = (param_8->field0_0x0)._s_0.X;
  (this->LandscapeGridSize).field0_0x0._s_0.Y = dVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// AllocateResources @ 149747020

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGLandscapeDataProviderProxy::AllocateResources
          (FPCGLandscapeDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  ERuntimeVirtualTextureMaterialType EVar1;
  URuntimeVirtualTexture *pUVar2;
  FPCGLandscapeResource *pFVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_28 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_28,&local_res20,true);
  TVar4 = FWeakObjectPtr::Pin(&(this->BaseColorVirtualTexture).WeakPtr);
  pUVar2 = *(URuntimeVirtualTexture **)TVar4.Object;
  *(undefined8 *)TVar4.Object = 0;
  if (local_res20 != (FName)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res20);
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
  }
  if (pUVar2 != (URuntimeVirtualTexture *)0x0) {
    PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
              (&this->BaseColorVirtualLayer,pUVar2,0,this->bBaseColorSRGB);
    PCGVirtualTextureCommon::FVirtualTexturePageTable::Initialize
              (&this->BaseColorVirtualPage,pUVar2,0,true,false);
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
  }
  TVar4 = FWeakObjectPtr::Pin(&(this->HeightVirtualTexture).WeakPtr);
  pUVar2 = *(URuntimeVirtualTexture **)TVar4.Object;
  *(undefined8 *)TVar4.Object = 0;
  if (local_res20 != (FName)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res20);
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
  }
  if (pUVar2 != (URuntimeVirtualTexture *)0x0) {
    PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
              (&this->HeightVirtualLayer,pUVar2,0,false);
    PCGVirtualTextureCommon::FVirtualTexturePageTable::Initialize
              (&this->HeightVirtualPage,pUVar2,0,true,true);
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
  }
  TVar4 = FWeakObjectPtr::Pin(&(this->NormalVirtualTexture).WeakPtr);
  pUVar2 = *(URuntimeVirtualTexture **)TVar4.Object;
  *(undefined8 *)TVar4.Object = 0;
  if (local_res20 != (FName)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res20);
  }
  if (pUVar2 != (URuntimeVirtualTexture *)0x0) {
    PCGVirtualTextureCommon::FVirtualTexturePageTable::Initialize
              (&this->NormalVirtualPage,pUVar2,0,true,false);
    EVar1 = this->NormalVirtualTextureMode;
    if (EVar1 == BaseColor_Normal_Roughness) {
      PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
                (&this->NormalVirtualLayer0,pUVar2,0,false);
      PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
                (&this->NormalVirtualLayer1,pUVar2,1,false);
      this->NormalUnpackMode = B5G6R5;
    }
    else if (EVar1 == BaseColor_Normal_Specular) {
      PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
                (&this->NormalVirtualLayer0,pUVar2,0,false);
      PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
                (&this->NormalVirtualLayer1,pUVar2,1,false);
      this->NormalUnpackMode = BC3BC3;
    }
    else if ((EVar1 == BaseColor_Normal_Specular_YCoCg) ||
            (EVar1 == BaseColor_Normal_Specular_Mask_YCoCg)) {
      PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
                (&this->NormalVirtualLayer0,pUVar2,1,false);
      PCGVirtualTextureCommon::FVirtualTextureLayer::Initialize
                (&this->NormalVirtualLayer1,pUVar2,2,false);
      this->NormalUnpackMode = BC5BC1;
    }
    else {
      PCGVirtualTextureCommon::FVirtualTexturePageTable::Reset(&this->NormalVirtualPage);
      PCGVirtualTextureCommon::FVirtualTextureLayer::Reset(&this->NormalVirtualLayer0);
      PCGVirtualTextureCommon::FVirtualTextureLayer::Reset(&this->NormalVirtualLayer1);
      this->NormalUnpackMode = None;
    }
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
  }
  pFVar3 = (this->Resource).Object;
  if ((pFVar3 != (FPCGLandscapeResource *)0x0) &&
     (pFVar3->LandscapeTexture != (FPCGLandscapeTextureResource *)0x0)) {
    (**(code **)(pFVar3->LandscapeTexture->_padding_ + 0x18))
              (pFVar3->LandscapeTexture,param_1->_padding_);
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GatherDispatchData @ 149751fe0

void __thiscall
FPCGLandscapeDataProviderProxy::GatherDispatchData
          (FPCGLandscapeDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPCGLandscapeDataInterfaceParameters *pFVar6;
  
  pFVar6 = (FPCGLandscapeDataInterfaceParameters *)
           (param_1->ParameterBuffer + param_1->ParameterBufferOffset);
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      SetShaderParameters(this,pFVar6);
      iVar5 = iVar5 + 1;
      pFVar6 = (FPCGLandscapeDataInterfaceParameters *)
               ((longlong)
                &((FPCGLandscapeDataInterfaceParameters *)
                 (&pFVar6->HeightVirtualTextureWorldToUVTransform + -1))->HeightVirtualTexture +
               (longlong)iVar2);
    } while (iVar5 < iVar1);
  }
  return;
}

// IsValid @ 14976c050

bool __thiscall
FPCGLandscapeDataProviderProxy::IsValid
          (FPCGLandscapeDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 800;
}

// SetBaseColorVirtualTextureParameters @ 1497757e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGLandscapeDataProviderProxy::SetBaseColorVirtualTextureParameters
          (FPCGLandscapeDataProviderProxy *this,FPCGLandscapeDataInterfaceParameters *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  bVar9 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid(&this->BaseColorVirtualPage);
  if ((bVar9) &&
     (bVar9 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(&this->BaseColorVirtualLayer),
     bVar9)) {
    param_1->BaseColorVirtualTexture = (this->BaseColorVirtualLayer).TextureSRV.Reference;
    param_1->BaseColorVirtualTexturePageTable = (this->BaseColorVirtualPage).PageTableRef.Reference;
    param_1->BaseColorVirtualTexturePageTableIndirection =
         (this->BaseColorVirtualPage).PageTableIndirectionRef.Reference;
    param_1->BaseColorVirtualTextureAdaptive = (uint)(this->BaseColorVirtualPage).bIsAdaptive;
    local_b8._s_0.X = (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X;
    local_b8._s_0.Y = (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y;
    local_b8._s_0.Z = (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z;
    TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
              ((TLargeWorldRenderPosition<double> *)&local_98._s_0,(TVector<double> *)&local_b8._s_0
              );
    (param_1->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.X = (float)local_98._s_0.X;
    (param_1->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.Y =
         (float)(double)CONCAT44(local_98._12_4_,local_98._8_4_);
    (param_1->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.Z = (float)local_98._s_0.Z;
    uVar8 = _UNK_150689648;
    uVar7 = ___xmm_3f800000000000000000000000000000;
    dVar1 = (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X;
    dVar2 = (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X;
    dVar3 = (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y;
    dVar4 = (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y;
    dVar5 = (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z;
    dVar6 = (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[0][0] =
         (float)(double)CONCAT44(uStack_7c,uStack_80);
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[0][1] = (float)local_78;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[0][2] =
         (float)(double)CONCAT44(uStack_6c,uStack_70);
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[0][3] = 0.0;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[1][0] = (float)dVar1;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[1][1] = (float)dVar3;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[1][2] = (float)dVar5;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[1][3] = 0.0;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[2][0] = (float)dVar2;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[2][1] = (float)dVar4;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[2][2] = (float)dVar6;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[2][3] = 0.0;
    *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[3] = uVar7;
    *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[3] + 2) = uVar8;
    param_1->BaseColorVirtualTextureUnpackSRGB =
         (uint)(this->BaseColorVirtualTextureUnpackType == SRGBUnpack);
    param_1->BaseColorVirtualTextureUnpackYCoCg =
         (uint)(this->BaseColorVirtualTextureUnpackType == YCoCgUnpack);
    param_1->BaseColorVirtualTextureEnabled = 1;
    uVar7 = *(undefined8 *)
             ((longlong)&(this->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
    *(undefined8 *)&(param_1->BaseColorVirtualTexturePackedUniform0).field0_0x0 =
         *(undefined8 *)&(this->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTexturePackedUniform0).field0_0x0 + 8) =
         uVar7;
    uVar7 = *(undefined8 *)
             ((longlong)&(this->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
    *(undefined8 *)&(param_1->BaseColorVirtualTexturePackedUniform1).field0_0x0 =
         *(undefined8 *)&(this->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTexturePackedUniform1).field0_0x0 + 8) =
         uVar7;
    uVar7 = *(undefined8 *)((longlong)&(this->BaseColorVirtualLayer).TextureUniforms.field0_0x0 + 8)
    ;
    *(undefined8 *)&(param_1->BaseColorVirtualTextureUniforms).field0_0x0 =
         *(undefined8 *)&(this->BaseColorVirtualLayer).TextureUniforms.field0_0x0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTextureUniforms).field0_0x0 + 8) = uVar7;
    return true;
  }
  return false;
}

// SetBaseColorVirtualTextureParameters_Default @ 149775a80

void __cdecl
FPCGLandscapeDataProviderProxy::SetBaseColorVirtualTextureParameters_Default
          (FPCGLandscapeDataInterfaceParameters *param_1)

{
  undefined8 uVar1;
  
  param_1->BaseColorVirtualTexture = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  param_1->BaseColorVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
  param_1->BaseColorVirtualTexturePageTableIndirection = (GBlackUintTexture->TextureRHI).Reference;
  param_1->BaseColorVirtualTextureAdaptive = 0;
  *(undefined8 *)&(param_1->BaseColorVirtualTextureLWCTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_1->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[3] + 2) = uVar1;
  param_1->BaseColorVirtualTextureUnpackSRGB = 0;
  param_1->BaseColorVirtualTextureUnpackYCoCg = 0;
  param_1->BaseColorVirtualTextureEnabled = 0;
  *(undefined8 *)&(param_1->BaseColorVirtualTexturePackedUniform0).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->BaseColorVirtualTexturePackedUniform1).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->BaseColorVirtualTextureUniforms).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTextureUniforms).field0_0x0 + 8) = 0;
  return;
}

// SetCollisionHeightTextureParameters @ 149775c00

bool __thiscall
FPCGLandscapeDataProviderProxy::SetCollisionHeightTextureParameters
          (FPCGLandscapeDataProviderProxy *this,FPCGLandscapeDataInterfaceParameters *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FPCGLandscapeResource *pFVar5;
  FRHITexture *pFVar6;
  TIntPoint<int>_u_0 TVar7;
  code *pcVar8;
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
  double dVar19;
  bool bVar20;
  undefined1 uVar21;
  
  pFVar5 = (this->Resource).Object;
  if ((pFVar5 != (FPCGLandscapeResource *)0x0) &&
     (pFVar5->LandscapeTexture != (FPCGLandscapeTextureResource *)0x0)) {
    pFVar6 = (pFVar5->LandscapeTexture->HeightTexture).Buffer.Reference;
    if (pFVar6 != (FRHITexture *)0x0) {
      TVar7 = (pFVar5->LandscapeTexture->CellCount).field0_0x0;
      if (pFVar5 == (FPCGLandscapeResource *)0x0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
      }
      pFVar5 = (this->Resource).Object;
      *(undefined8 *)&(param_1->CollisionHeightTextureLWCTile).field0_0x0 =
           *(undefined8 *)&(pFVar5->LandscapeLWCTile).field0_0x0;
      (param_1->CollisionHeightTextureLWCTile).field0_0x0._s_0.Z =
           (pFVar5->LandscapeLWCTile).field0_0x0._s_0.Z;
      if ((this->Resource).Object == (FPCGLandscapeResource *)0x0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
      }
      pFVar5 = (this->Resource).Object;
      dVar1 = (pFVar5->WorldToActorTransform).M[1][2];
      dVar2 = (pFVar5->WorldToActorTransform).M[1][3];
      dVar3 = (pFVar5->WorldToActorTransform).M[1][0];
      dVar4 = (pFVar5->WorldToActorTransform).M[1][1];
      dVar9 = (pFVar5->WorldToActorTransform).M[2][2];
      dVar10 = (pFVar5->WorldToActorTransform).M[2][3];
      dVar11 = (pFVar5->WorldToActorTransform).M[2][0];
      dVar12 = (pFVar5->WorldToActorTransform).M[2][1];
      dVar13 = (pFVar5->WorldToActorTransform).M[3][2];
      dVar14 = (pFVar5->WorldToActorTransform).M[3][3];
      dVar15 = (pFVar5->WorldToActorTransform).M[3][0];
      dVar16 = (pFVar5->WorldToActorTransform).M[3][1];
      dVar17 = (pFVar5->WorldToActorTransform).M[0][2];
      dVar18 = (pFVar5->WorldToActorTransform).M[0][3];
      dVar19 = (pFVar5->WorldToActorTransform).M[0][1];
      (param_1->CollisionHeightTextureWorldToUVTransform).M[0][0] =
           (float)(pFVar5->WorldToActorTransform).M[0][0];
      (param_1->CollisionHeightTextureWorldToUVTransform).M[0][1] = (float)dVar19;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[0][2] = (float)dVar17;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[0][3] = (float)dVar18;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[1][0] = (float)dVar3;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[1][1] = (float)dVar4;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[1][2] = (float)dVar1;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[1][3] = (float)dVar2;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[2][0] = (float)dVar11;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[2][1] = (float)dVar12;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[2][2] = (float)dVar9;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[2][3] = (float)dVar10;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[3][0] = (float)dVar15;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[3][1] = (float)dVar16;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[3][2] = (float)dVar13;
      (param_1->CollisionHeightTextureWorldToUVTransform).M[3][3] = (float)dVar14;
      if ((this->Resource).Object == (FPCGLandscapeResource *)0x0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
      }
      pFVar5 = (this->Resource).Object;
      dVar1 = (pFVar5->ActorToWorldTransform).M[1][2];
      dVar2 = (pFVar5->ActorToWorldTransform).M[1][3];
      dVar3 = (pFVar5->ActorToWorldTransform).M[1][0];
      dVar4 = (pFVar5->ActorToWorldTransform).M[1][1];
      dVar9 = (pFVar5->ActorToWorldTransform).M[2][2];
      dVar10 = (pFVar5->ActorToWorldTransform).M[2][3];
      dVar11 = (pFVar5->ActorToWorldTransform).M[2][0];
      dVar12 = (pFVar5->ActorToWorldTransform).M[2][1];
      dVar13 = (pFVar5->ActorToWorldTransform).M[3][2];
      dVar14 = (pFVar5->ActorToWorldTransform).M[3][3];
      dVar15 = (pFVar5->ActorToWorldTransform).M[3][0];
      dVar16 = (pFVar5->ActorToWorldTransform).M[3][1];
      dVar17 = (pFVar5->ActorToWorldTransform).M[0][2];
      dVar18 = (pFVar5->ActorToWorldTransform).M[0][3];
      dVar19 = (pFVar5->ActorToWorldTransform).M[0][1];
      (param_1->CollisionHeightTextureUVToWorldTransform).M[0][0] =
           (float)(pFVar5->ActorToWorldTransform).M[0][0];
      (param_1->CollisionHeightTextureUVToWorldTransform).M[0][1] = (float)dVar19;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[0][2] = (float)dVar17;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[0][3] = (float)dVar18;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[1][0] = (float)dVar3;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[1][1] = (float)dVar4;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[1][2] = (float)dVar1;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[1][3] = (float)dVar2;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[2][0] = (float)dVar11;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[2][1] = (float)dVar12;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[2][2] = (float)dVar9;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[2][3] = (float)dVar10;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[3][0] = (float)dVar15;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[3][1] = (float)dVar16;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[3][2] = (float)dVar13;
      (param_1->CollisionHeightTextureUVToWorldTransform).M[3][3] = (float)dVar14;
      if ((this->Resource).Object == (FPCGLandscapeResource *)0x0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
      }
      pFVar5 = (this->Resource).Object;
      dVar1 = (pFVar5->UVScaleBias).field0_0x0._s_0.X;
      dVar2 = (pFVar5->UVScaleBias).field0_0x0._s_0.Y;
      dVar3 = (pFVar5->UVScaleBias).field0_0x0._s_0.Z;
      dVar4 = (pFVar5->UVScaleBias).field0_0x0._s_0.W;
      (param_1->CollisionHeightTextureDimension).field0_0x0 = TVar7;
      param_1->CollisionHeightTexture = pFVar6;
      param_1->CollisionHeightTextureEnabled = 1;
      (param_1->CollisionHeightTextureUVScaleBias).field0_0x0._s_0.X = (float)dVar1;
      (param_1->CollisionHeightTextureUVScaleBias).field0_0x0._s_0.Y = (float)dVar2;
      (param_1->CollisionHeightTextureUVScaleBias).field0_0x0._s_0.Z = (float)dVar3;
      (param_1->CollisionHeightTextureUVScaleBias).field0_0x0._s_0.W = (float)dVar4;
      return true;
    }
  }
  return false;
}

// SetCollisionHeightTextureParameters_Defaults @ 149775eb0

void __cdecl
FPCGLandscapeDataProviderProxy::SetCollisionHeightTextureParameters_Defaults
          (FPCGLandscapeDataInterfaceParameters *param_1)

{
  undefined8 uVar1;
  
  param_1->CollisionHeightTexture = (GBlackTexture->TextureRHI).Reference;
  *(undefined8 *)&(param_1->CollisionHeightTextureLWCTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_1->CollisionHeightTextureLWCTile).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(param_1->CollisionHeightTextureWorldToUVTransform).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((param_1->CollisionHeightTextureWorldToUVTransform).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(param_1->CollisionHeightTextureWorldToUVTransform).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((param_1->CollisionHeightTextureWorldToUVTransform).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(param_1->CollisionHeightTextureWorldToUVTransform).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((param_1->CollisionHeightTextureWorldToUVTransform).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(param_1->CollisionHeightTextureWorldToUVTransform).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((param_1->CollisionHeightTextureWorldToUVTransform).M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(param_1->CollisionHeightTextureUVToWorldTransform).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((param_1->CollisionHeightTextureUVToWorldTransform).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(param_1->CollisionHeightTextureUVToWorldTransform).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((param_1->CollisionHeightTextureUVToWorldTransform).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(param_1->CollisionHeightTextureUVToWorldTransform).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((param_1->CollisionHeightTextureUVToWorldTransform).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(param_1->CollisionHeightTextureUVToWorldTransform).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((param_1->CollisionHeightTextureUVToWorldTransform).M[3] + 2) = uVar1;
  *(undefined8 *)&(param_1->CollisionHeightTextureUVScaleBias).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->CollisionHeightTextureUVScaleBias).field0_0x0 + 8) = 0;
  param_1->CollisionHeightTextureEnabled = 0;
  return;
}

// SetHeightVirtualTextureParameters @ 149776080

bool __thiscall
FPCGLandscapeDataProviderProxy::SetHeightVirtualTextureParameters
          (FPCGLandscapeDataProviderProxy *this,FPCGLandscapeDataInterfaceParameters *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  bVar11 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid(&this->HeightVirtualPage);
  if ((bVar11) &&
     (bVar11 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(&this->HeightVirtualLayer),
     bVar11)) {
    param_1->HeightVirtualTexture = (this->HeightVirtualLayer).TextureSRV.Reference;
    param_1->HeightVirtualTexturePageTable = (this->HeightVirtualPage).PageTableRef.Reference;
    param_1->HeightVirtualTexturePageTableIndirection =
         (this->HeightVirtualPage).PageTableIndirectionRef.Reference;
    param_1->HeightVirtualTextureAdaptive = (uint)(this->HeightVirtualPage).bIsAdaptive;
    local_e8._s_0.X = (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X;
    local_e8._s_0.Y = (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y;
    local_e8._s_0.Z = (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z;
    TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
              ((TLargeWorldRenderPosition<double> *)&local_c8._s_0,(TVector<double> *)&local_e8._s_0
              );
    (param_1->HeightVirtualTextureLWCTile).field0_0x0._s_0.X = (float)local_c8._s_0.X;
    (param_1->HeightVirtualTextureLWCTile).field0_0x0._s_0.Y =
         (float)(double)CONCAT44(local_c8._12_4_,local_c8._8_4_);
    (param_1->HeightVirtualTextureLWCTile).field0_0x0._s_0.Z = (float)local_c8._s_0.Z;
    dVar1 = (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X;
    dVar2 = (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y;
    dVar3 = (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X;
    dVar4 = (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z;
    dVar5 = (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y;
    dVar6 = (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z;
    dVar7 = (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.X;
    dVar8 = (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Y;
    dVar9 = (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Z;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[0][0] =
         (float)(double)CONCAT44(uStack_ac,uStack_b0);
    (param_1->HeightVirtualTextureWorldToUVTransform).M[0][1] = (float)local_a8;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[0][2] =
         (float)(double)CONCAT44(uStack_9c,uStack_a0);
    (param_1->HeightVirtualTextureWorldToUVTransform).M[0][3] = 0.0;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[1][0] = (float)dVar1;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[1][1] = (float)dVar2;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[1][2] = (float)dVar4;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[1][3] = 0.0;
    param_1->HeightVirtualTextureEnabled = 1;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[2][0] = (float)dVar3;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[2][1] = (float)dVar5;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[2][2] = (float)dVar6;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[2][3] = 0.0;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[3][0] = (float)dVar7;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[3][1] = (float)dVar8;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[3][2] = (float)dVar9;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[3][3] = 1.0;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->HeightVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
    *(undefined8 *)&(param_1->HeightVirtualTexturePackedUniform0).field0_0x0 =
         *(undefined8 *)&(this->HeightVirtualPage).PageTableUniforms[0].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTexturePackedUniform0).field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->HeightVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
    *(undefined8 *)&(param_1->HeightVirtualTexturePackedUniform1).field0_0x0 =
         *(undefined8 *)&(this->HeightVirtualPage).PageTableUniforms[1].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTexturePackedUniform1).field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)((longlong)&(this->HeightVirtualLayer).TextureUniforms.field0_0x0 + 8);
    *(undefined8 *)&(param_1->HeightVirtualTextureUniforms).field0_0x0 =
         *(undefined8 *)&(this->HeightVirtualLayer).TextureUniforms.field0_0x0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTextureUniforms).field0_0x0 + 8) = uVar10;
    return true;
  }
  return false;
}

// SetHeightVirtualTextureParameters_Default @ 149776370

void __cdecl
FPCGLandscapeDataProviderProxy::SetHeightVirtualTextureParameters_Default
          (FPCGLandscapeDataInterfaceParameters *param_1)

{
  undefined8 uVar1;
  
  param_1->HeightVirtualTexture = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  param_1->HeightVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
  param_1->HeightVirtualTexturePageTableIndirection = (GBlackUintTexture->TextureRHI).Reference;
  param_1->HeightVirtualTextureAdaptive = 0;
  *(undefined8 *)&(param_1->HeightVirtualTextureLWCTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_1->HeightVirtualTextureLWCTile).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(param_1->HeightVirtualTextureWorldToUVTransform).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((param_1->HeightVirtualTextureWorldToUVTransform).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(param_1->HeightVirtualTextureWorldToUVTransform).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((param_1->HeightVirtualTextureWorldToUVTransform).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(param_1->HeightVirtualTextureWorldToUVTransform).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((param_1->HeightVirtualTextureWorldToUVTransform).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(param_1->HeightVirtualTextureWorldToUVTransform).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((param_1->HeightVirtualTextureWorldToUVTransform).M[3] + 2) = uVar1;
  param_1->HeightVirtualTextureEnabled = 0;
  *(undefined8 *)&(param_1->HeightVirtualTexturePackedUniform0).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->HeightVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->HeightVirtualTexturePackedUniform1).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->HeightVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->HeightVirtualTextureUniforms).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->HeightVirtualTextureUniforms).field0_0x0 + 8) = 0;
  return;
}

// SetNormalVirtualTextureParameters @ 149776490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGLandscapeDataProviderProxy::SetNormalVirtualTextureParameters
          (FPCGLandscapeDataProviderProxy *this,FPCGLandscapeDataInterfaceParameters *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double local_a8;
  double local_a0;
  
  bVar11 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid(&this->NormalVirtualPage);
  if (((bVar11) &&
      (bVar11 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(&this->NormalVirtualLayer0),
      bVar11)) &&
     (bVar11 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(&this->NormalVirtualLayer1),
     bVar11)) {
    param_1->NormalVirtualTexture0 = (this->NormalVirtualLayer0).TextureSRV.Reference;
    param_1->NormalVirtualTexture1 = (this->NormalVirtualLayer1).TextureSRV.Reference;
    param_1->NormalVirtualTexturePageTable = (this->NormalVirtualPage).PageTableRef.Reference;
    param_1->NormalVirtualTexturePageTableIndirection =
         (this->NormalVirtualPage).PageTableIndirectionRef.Reference;
    param_1->NormalVirtualTextureAdaptive = (uint)(this->NormalVirtualPage).bIsAdaptive;
    local_e8._s_0.X = (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X;
    local_e8._s_0.Y = (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y;
    local_e8._s_0.Z = (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z;
    TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
              ((TLargeWorldRenderPosition<double> *)&local_c8._s_0,(TVector<double> *)&local_e8._s_0
              );
    (param_1->NormalVirtualTextureLWCTile).field0_0x0._s_0.X = (float)local_c8._s_0.X;
    (param_1->NormalVirtualTextureLWCTile).field0_0x0._s_0.Y =
         (float)(double)CONCAT44(local_c8._12_4_,local_c8._8_4_);
    (param_1->NormalVirtualTextureLWCTile).field0_0x0._s_0.Z = (float)local_c8._s_0.Z;
    uVar10 = _UNK_150689648;
    uVar9 = ___xmm_3f800000000000000000000000000000;
    dVar1 = (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X;
    dVar2 = (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X;
    dVar3 = (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y;
    dVar4 = (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y;
    dVar5 = (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z;
    dVar6 = (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z;
    dVar7 = (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.W;
    dVar8 = (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.W;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[0][0] = (float)local_b0;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[0][1] = (float)local_a8;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[0][2] = (float)local_a0;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[0][3] = 1.0;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[1][0] = (float)dVar1;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[1][1] = (float)dVar3;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[1][2] = (float)dVar5;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[1][3] = (float)dVar7;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[2][0] = (float)dVar2;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[2][1] = (float)dVar4;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[2][2] = (float)dVar6;
    (param_1->NormalVirtualTextureWorldToUVTransform).M[2][3] = (float)dVar8;
    *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[3] = uVar9;
    *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[3] + 2) = uVar10;
    param_1->NormalVirtualTextureEnabled = 1;
    param_1->NormalVirtualTextureUnpackMode = this->NormalUnpackMode;
    uVar9 = *(undefined8 *)
             ((longlong)&(this->NormalVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
    *(undefined8 *)&(param_1->NormalVirtualTexturePackedUniform0).field0_0x0 =
         *(undefined8 *)&(this->NormalVirtualPage).PageTableUniforms[0].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->NormalVirtualTexturePackedUniform0).field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)
             ((longlong)&(this->NormalVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
    *(undefined8 *)&(param_1->NormalVirtualTexturePackedUniform1).field0_0x0 =
         *(undefined8 *)&(this->NormalVirtualPage).PageTableUniforms[1].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->NormalVirtualTexturePackedUniform1).field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)((longlong)&(this->NormalVirtualLayer0).TextureUniforms.field0_0x0 + 8);
    *(undefined8 *)&(param_1->NormalVirtualTextureUniforms0).field0_0x0 =
         *(undefined8 *)&(this->NormalVirtualLayer0).TextureUniforms.field0_0x0;
    *(undefined8 *)((longlong)&(param_1->NormalVirtualTextureUniforms0).field0_0x0 + 8) = uVar9;
    uVar9 = *(undefined8 *)((longlong)&(this->NormalVirtualLayer1).TextureUniforms.field0_0x0 + 8);
    *(undefined8 *)&(param_1->NormalVirtualTextureUniforms1).field0_0x0 =
         *(undefined8 *)&(this->NormalVirtualLayer1).TextureUniforms.field0_0x0;
    *(undefined8 *)((longlong)&(param_1->NormalVirtualTextureUniforms1).field0_0x0 + 8) = uVar9;
    return true;
  }
  return false;
}

// SetNormalVirtualTextureParameters_Default @ 1497767a0

void __cdecl
FPCGLandscapeDataProviderProxy::SetNormalVirtualTextureParameters_Default
          (FPCGLandscapeDataInterfaceParameters *param_1)

{
  undefined8 uVar1;
  
  param_1->NormalVirtualTexture0 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  param_1->NormalVirtualTexture1 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  param_1->NormalVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
  param_1->NormalVirtualTexturePageTableIndirection = (GBlackUintTexture->TextureRHI).Reference;
  param_1->NormalVirtualTextureAdaptive = 0;
  *(undefined8 *)&(param_1->NormalVirtualTextureLWCTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_1->NormalVirtualTextureLWCTile).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[3] + 2) = uVar1;
  param_1->NormalVirtualTextureUnpackMode = 0;
  param_1->NormalVirtualTextureEnabled = 0;
  *(undefined8 *)&(param_1->NormalVirtualTexturePackedUniform0).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->NormalVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->NormalVirtualTexturePackedUniform1).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->NormalVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->NormalVirtualTextureUniforms0).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->NormalVirtualTextureUniforms0).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->NormalVirtualTextureUniforms1).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->NormalVirtualTextureUniforms1).field0_0x0 + 8) = 0;
  return;
}

// SetShaderParameters @ 149776c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGLandscapeDataProviderProxy::SetShaderParameters
          (FPCGLandscapeDataProviderProxy *this,FPCGLandscapeDataInterfaceParameters *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  EBaseColorUnpackType EVar10;
  undefined8 uVar11;
  TVector2<float>_u_0 TVar12;
  undefined8 uVar13;
  TRefCountPtr<FRHISamplerState> TVar14;
  bool bVar15;
  bool bVar16;
  TRefCountPtr<FRHISamplerState> TVar17;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  
  TVar14.Reference =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  TVar17.Reference =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_1->BaseColorVirtualTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  param_1->HeightVirtualTextureSampler = TVar14.Reference;
  param_1->NormalVirtualTexture0Sampler = TVar14.Reference;
  param_1->NormalVirtualTexture1Sampler = TVar14.Reference;
  if ((GPixelFormats[0xd].Capabilities & TextureFilterable) != None) {
    TVar17.Reference = TVar14.Reference;
  }
  param_1->CollisionHeightTextureSampler = TVar17.Reference;
  bVar15 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid(&this->BaseColorVirtualPage);
  if (bVar15) {
    bVar15 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(&this->BaseColorVirtualLayer);
    if (!bVar15) goto LAB_149776eb1;
    param_1->BaseColorVirtualTexture = (this->BaseColorVirtualLayer).TextureSRV.Reference;
    param_1->BaseColorVirtualTexturePageTable = (this->BaseColorVirtualPage).PageTableRef.Reference;
    param_1->BaseColorVirtualTexturePageTableIndirection =
         (this->BaseColorVirtualPage).PageTableIndirectionRef.Reference;
    param_1->BaseColorVirtualTextureAdaptive = (uint)(this->BaseColorVirtualPage).bIsAdaptive;
    local_f8._s_0.X = (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X;
    local_f8._s_0.Y = (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y;
    local_f8._s_0.Z = (this->BaseColorVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z;
    TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
              ((TLargeWorldRenderPosition<double> *)&local_d8._s_0,(TVector<double> *)&local_f8._s_0
              );
    (param_1->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.X =
         (float)(double)CONCAT44(local_d8._4_4_,local_d8._0_4_);
    (param_1->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.Y =
         (float)(double)CONCAT44(local_d8._12_4_,local_d8._8_4_);
    (param_1->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.Z =
         (float)(double)CONCAT44(local_d8._20_4_,local_d8._16_4_);
    uVar13 = _UNK_150689648;
    uVar11 = ___xmm_3f800000000000000000000000000000;
    dVar1 = (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X;
    dVar2 = (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X;
    dVar3 = (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y;
    dVar4 = (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y;
    dVar5 = (this->BaseColorVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z;
    dVar6 = (this->BaseColorVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z;
    local_d8._0_4_ = (undefined4)(double)CONCAT44(uStack_bc,fStack_c0);
    local_d8._4_4_ = (undefined4)(double)CONCAT44(fStack_b4,local_b8);
    local_d8._8_4_ = (undefined4)(double)CONCAT44(uStack_ac,fStack_b0);
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[0][0] = (float)local_d8._0_4_;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[0][1] = (float)local_d8._4_4_;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[0][2] = (float)local_d8._8_4_;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[0][3] = 0.0;
    local_d8._12_4_ = 0;
    local_d8._16_4_ = (undefined4)dVar1;
    local_b8 = (float)dVar2;
    local_d8._20_4_ = (undefined4)dVar3;
    fStack_b4 = (float)dVar4;
    fStack_c0 = (float)dVar5;
    fStack_b0 = (float)dVar6;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[1][0] = (float)local_d8._16_4_;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[1][1] = (float)local_d8._20_4_;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[1][2] = fStack_c0;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[1][3] = 0.0;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[2][0] = local_b8;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[2][1] = fStack_b4;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[2][2] = fStack_b0;
    (param_1->BaseColorVirtualTextureWorldToUVTransform).M[2][3] = 0.0;
    *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[3] = uVar11;
    *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[3] + 2) = uVar13;
    uStack_bc = 0;
    uStack_ac = 0;
    param_1->BaseColorVirtualTextureUnpackSRGB =
         (uint)(this->BaseColorVirtualTextureUnpackType == SRGBUnpack);
    EVar10 = this->BaseColorVirtualTextureUnpackType;
    param_1->BaseColorVirtualTextureEnabled = 1;
    param_1->BaseColorVirtualTextureUnpackYCoCg = (uint)(EVar10 == YCoCgUnpack);
    uVar11 = *(undefined8 *)
              ((longlong)&(this->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
    *(undefined8 *)&(param_1->BaseColorVirtualTexturePackedUniform0).field0_0x0 =
         *(undefined8 *)&(this->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTexturePackedUniform0).field0_0x0 + 8) =
         uVar11;
    uVar11 = *(undefined8 *)
              ((longlong)&(this->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
    *(undefined8 *)&(param_1->BaseColorVirtualTexturePackedUniform1).field0_0x0 =
         *(undefined8 *)&(this->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTexturePackedUniform1).field0_0x0 + 8) =
         uVar11;
    uVar11 = *(undefined8 *)
              ((longlong)&(this->BaseColorVirtualLayer).TextureUniforms.field0_0x0 + 8);
    *(undefined8 *)&(param_1->BaseColorVirtualTextureUniforms).field0_0x0 =
         *(undefined8 *)&(this->BaseColorVirtualLayer).TextureUniforms.field0_0x0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTextureUniforms).field0_0x0 + 8) = uVar11;
  }
  else {
LAB_149776eb1:
    param_1->BaseColorVirtualTexture = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    param_1->BaseColorVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
    param_1->BaseColorVirtualTexturePageTableIndirection = (GBlackUintTexture->TextureRHI).Reference
    ;
    param_1->BaseColorVirtualTextureAdaptive = 0;
    *(undefined8 *)&(param_1->BaseColorVirtualTextureLWCTile).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_1->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[0] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[1] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[2] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(param_1->BaseColorVirtualTextureWorldToUVTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((param_1->BaseColorVirtualTextureWorldToUVTransform).M[3] + 2) = uVar11;
    param_1->BaseColorVirtualTextureUnpackSRGB = 0;
    param_1->BaseColorVirtualTextureUnpackYCoCg = 0;
    param_1->BaseColorVirtualTextureEnabled = 0;
    *(undefined8 *)&(param_1->BaseColorVirtualTexturePackedUniform0).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
    *(undefined8 *)&(param_1->BaseColorVirtualTexturePackedUniform1).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
    *(undefined8 *)&(param_1->BaseColorVirtualTextureUniforms).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->BaseColorVirtualTextureUniforms).field0_0x0 + 8) = 0;
  }
  bVar15 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid(&this->HeightVirtualPage);
  if (bVar15) {
    bVar15 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(&this->HeightVirtualLayer);
    if (!bVar15) goto LAB_1497771b2;
    param_1->HeightVirtualTexture = (this->HeightVirtualLayer).TextureSRV.Reference;
    param_1->HeightVirtualTexturePageTable = (this->HeightVirtualPage).PageTableRef.Reference;
    param_1->HeightVirtualTexturePageTableIndirection =
         (this->HeightVirtualPage).PageTableIndirectionRef.Reference;
    param_1->HeightVirtualTextureAdaptive = (uint)(this->HeightVirtualPage).bIsAdaptive;
    local_f8._s_0.X = (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X;
    local_f8._s_0.Y = (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y;
    local_f8._s_0.Z = (this->HeightVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z;
    TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
              ((TLargeWorldRenderPosition<double> *)&local_d8._s_0,(TVector<double> *)&local_f8._s_0
              );
    (param_1->HeightVirtualTextureLWCTile).field0_0x0._s_0.X =
         (float)(double)CONCAT44(local_d8._4_4_,local_d8._0_4_);
    (param_1->HeightVirtualTextureLWCTile).field0_0x0._s_0.Y =
         (float)(double)CONCAT44(local_d8._12_4_,local_d8._8_4_);
    (param_1->HeightVirtualTextureLWCTile).field0_0x0._s_0.Z =
         (float)(double)CONCAT44(local_d8._20_4_,local_d8._16_4_);
    dVar1 = (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X;
    dVar2 = (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X;
    dVar3 = (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y;
    dVar4 = (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y;
    dVar5 = (this->HeightVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z;
    dVar6 = (this->HeightVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z;
    dVar7 = (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.X;
    dVar8 = (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Y;
    dVar9 = (this->HeightVirtualPage).WorldToUVParameters[3].field0_0x0._s_0.Z;
    local_d8._0_4_ = (undefined4)(double)CONCAT44(uStack_bc,fStack_c0);
    uStack_9c = 0x3f800000;
    local_d8._4_4_ = (undefined4)(double)CONCAT44(fStack_b4,local_b8);
    local_d8._8_4_ = (undefined4)(double)CONCAT44(uStack_ac,fStack_b0);
    (param_1->HeightVirtualTextureWorldToUVTransform).M[0][0] = (float)local_d8._0_4_;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[0][1] = (float)local_d8._4_4_;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[0][2] = (float)local_d8._8_4_;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[0][3] = 0.0;
    local_d8._12_4_ = 0;
    local_d8._16_4_ = (undefined4)dVar1;
    local_b8 = (float)dVar2;
    local_d8._20_4_ = (undefined4)dVar3;
    fStack_b4 = (float)dVar4;
    fStack_c0 = (float)dVar5;
    fStack_b0 = (float)dVar6;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[1][0] = (float)local_d8._16_4_;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[1][1] = (float)local_d8._20_4_;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[1][2] = fStack_c0;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[1][3] = 0.0;
    uStack_bc = 0;
    uStack_ac = 0;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[2][0] = local_b8;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[2][1] = fStack_b4;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[2][2] = fStack_b0;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[2][3] = 0.0;
    bVar15 = true;
    param_1->HeightVirtualTextureEnabled = 1;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[3][0] = (float)dVar7;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[3][1] = (float)dVar8;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[3][2] = (float)dVar9;
    (param_1->HeightVirtualTextureWorldToUVTransform).M[3][3] = 1.0;
    uVar11 = *(undefined8 *)
              ((longlong)&(this->HeightVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
    *(undefined8 *)&(param_1->HeightVirtualTexturePackedUniform0).field0_0x0 =
         *(undefined8 *)&(this->HeightVirtualPage).PageTableUniforms[0].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTexturePackedUniform0).field0_0x0 + 8) =
         uVar11;
    uVar11 = *(undefined8 *)
              ((longlong)&(this->HeightVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
    *(undefined8 *)&(param_1->HeightVirtualTexturePackedUniform1).field0_0x0 =
         *(undefined8 *)&(this->HeightVirtualPage).PageTableUniforms[1].field0_0x0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTexturePackedUniform1).field0_0x0 + 8) =
         uVar11;
    uVar11 = *(undefined8 *)((longlong)&(this->HeightVirtualLayer).TextureUniforms.field0_0x0 + 8);
    *(undefined8 *)&(param_1->HeightVirtualTextureUniforms).field0_0x0 =
         *(undefined8 *)&(this->HeightVirtualLayer).TextureUniforms.field0_0x0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTextureUniforms).field0_0x0 + 8) = uVar11;
  }
  else {
LAB_1497771b2:
    bVar15 = false;
    param_1->HeightVirtualTexture = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    param_1->HeightVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
    param_1->HeightVirtualTexturePageTableIndirection = (GBlackUintTexture->TextureRHI).Reference;
    param_1->HeightVirtualTextureAdaptive = 0;
    *(undefined8 *)&(param_1->HeightVirtualTextureLWCTile).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_1->HeightVirtualTextureLWCTile).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(param_1->HeightVirtualTextureWorldToUVTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((param_1->HeightVirtualTextureWorldToUVTransform).M[0] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(param_1->HeightVirtualTextureWorldToUVTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((param_1->HeightVirtualTextureWorldToUVTransform).M[1] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(param_1->HeightVirtualTextureWorldToUVTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((param_1->HeightVirtualTextureWorldToUVTransform).M[2] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(param_1->HeightVirtualTextureWorldToUVTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((param_1->HeightVirtualTextureWorldToUVTransform).M[3] + 2) = uVar11;
    param_1->HeightVirtualTextureEnabled = 0;
    *(undefined8 *)&(param_1->HeightVirtualTexturePackedUniform0).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
    *(undefined8 *)&(param_1->HeightVirtualTexturePackedUniform1).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
    *(undefined8 *)&(param_1->HeightVirtualTextureUniforms).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->HeightVirtualTextureUniforms).field0_0x0 + 8) = 0;
  }
  bVar16 = PCGVirtualTextureCommon::FVirtualTexturePageTable::IsValid(&this->NormalVirtualPage);
  if (bVar16) {
    bVar16 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(&this->NormalVirtualLayer0);
    if (bVar16) {
      bVar16 = PCGVirtualTextureCommon::FVirtualTextureLayer::IsValid(&this->NormalVirtualLayer1);
      if (bVar16) {
        param_1->NormalVirtualTexture0 = (this->NormalVirtualLayer0).TextureSRV.Reference;
        param_1->NormalVirtualTexture1 = (this->NormalVirtualLayer1).TextureSRV.Reference;
        param_1->NormalVirtualTexturePageTable = (this->NormalVirtualPage).PageTableRef.Reference;
        param_1->NormalVirtualTexturePageTableIndirection =
             (this->NormalVirtualPage).PageTableIndirectionRef.Reference;
        param_1->NormalVirtualTextureAdaptive = (uint)(this->NormalVirtualPage).bIsAdaptive;
        local_f8._s_0.X = (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.X;
        local_f8._s_0.Y = (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Y;
        local_f8._s_0.Z = (this->NormalVirtualPage).WorldToUVParameters[0].field0_0x0._s_0.Z;
        TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
                  ((TLargeWorldRenderPosition<double> *)&local_d8._s_0,
                   (TVector<double> *)&local_f8._s_0);
        (param_1->NormalVirtualTextureLWCTile).field0_0x0._s_0.X =
             (float)(double)CONCAT44(local_d8._4_4_,local_d8._0_4_);
        (param_1->NormalVirtualTextureLWCTile).field0_0x0._s_0.Y =
             (float)(double)CONCAT44(local_d8._12_4_,local_d8._8_4_);
        (param_1->NormalVirtualTextureLWCTile).field0_0x0._s_0.Z =
             (float)(double)CONCAT44(local_d8._20_4_,local_d8._16_4_);
        uVar13 = _UNK_150689648;
        uVar11 = ___xmm_3f800000000000000000000000000000;
        dVar1 = (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.X;
        dVar2 = (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.X;
        dVar3 = (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Y;
        dVar4 = (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Y;
        dVar5 = (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.Z;
        dVar6 = (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.Z;
        dVar7 = (this->NormalVirtualPage).WorldToUVParameters[1].field0_0x0._s_0.W;
        dVar8 = (this->NormalVirtualPage).WorldToUVParameters[2].field0_0x0._s_0.W;
        param_1->NormalVirtualTextureEnabled = 1;
        local_d8._12_4_ = 0x3f800000;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[0][0] =
             (float)(double)CONCAT44(uStack_bc,fStack_c0);
        (param_1->NormalVirtualTextureWorldToUVTransform).M[0][1] =
             (float)(double)CONCAT44(fStack_b4,local_b8);
        (param_1->NormalVirtualTextureWorldToUVTransform).M[0][2] =
             (float)(double)CONCAT44(uStack_ac,fStack_b0);
        (param_1->NormalVirtualTextureWorldToUVTransform).M[0][3] = 1.0;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[1][0] = (float)dVar1;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[1][1] = (float)dVar3;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[1][2] = (float)dVar5;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[1][3] = (float)dVar7;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[2][0] = (float)dVar2;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[2][1] = (float)dVar4;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[2][2] = (float)dVar6;
        (param_1->NormalVirtualTextureWorldToUVTransform).M[2][3] = (float)dVar8;
        *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[3] = uVar11;
        *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[3] + 2) = uVar13;
        param_1->NormalVirtualTextureUnpackMode = this->NormalUnpackMode;
        uVar11 = *(undefined8 *)
                  ((longlong)&(this->NormalVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
        *(undefined8 *)&(param_1->NormalVirtualTexturePackedUniform0).field0_0x0 =
             *(undefined8 *)&(this->NormalVirtualPage).PageTableUniforms[0].field0_0x0;
        *(undefined8 *)((longlong)&(param_1->NormalVirtualTexturePackedUniform0).field0_0x0 + 8) =
             uVar11;
        uVar11 = *(undefined8 *)
                  ((longlong)&(this->NormalVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
        *(undefined8 *)&(param_1->NormalVirtualTexturePackedUniform1).field0_0x0 =
             *(undefined8 *)&(this->NormalVirtualPage).PageTableUniforms[1].field0_0x0;
        *(undefined8 *)((longlong)&(param_1->NormalVirtualTexturePackedUniform1).field0_0x0 + 8) =
             uVar11;
        uVar11 = *(undefined8 *)
                  ((longlong)&(this->NormalVirtualLayer0).TextureUniforms.field0_0x0 + 8);
        *(undefined8 *)&(param_1->NormalVirtualTextureUniforms0).field0_0x0 =
             *(undefined8 *)&(this->NormalVirtualLayer0).TextureUniforms.field0_0x0;
        *(undefined8 *)((longlong)&(param_1->NormalVirtualTextureUniforms0).field0_0x0 + 8) = uVar11
        ;
        uVar11 = *(undefined8 *)
                  ((longlong)&(this->NormalVirtualLayer1).TextureUniforms.field0_0x0 + 8);
        *(undefined8 *)&(param_1->NormalVirtualTextureUniforms1).field0_0x0 =
             *(undefined8 *)&(this->NormalVirtualLayer1).TextureUniforms.field0_0x0;
        *(undefined8 *)((longlong)&(param_1->NormalVirtualTextureUniforms1).field0_0x0 + 8) = uVar11
        ;
        goto LAB_1497775be;
      }
    }
  }
  param_1->NormalVirtualTexture0 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  param_1->NormalVirtualTexture1 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  param_1->NormalVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
  param_1->NormalVirtualTexturePageTableIndirection = (GBlackUintTexture->TextureRHI).Reference;
  param_1->NormalVirtualTextureAdaptive = 0;
  *(undefined8 *)&(param_1->NormalVirtualTextureLWCTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_1->NormalVirtualTextureLWCTile).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[0] + 2) = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[1] + 2) = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[2] + 2) = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(param_1->NormalVirtualTextureWorldToUVTransform).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((param_1->NormalVirtualTextureWorldToUVTransform).M[3] + 2) = uVar11;
  param_1->NormalVirtualTextureUnpackMode = 0;
  param_1->NormalVirtualTextureEnabled = 0;
  *(undefined8 *)&(param_1->NormalVirtualTexturePackedUniform0).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->NormalVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->NormalVirtualTexturePackedUniform1).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->NormalVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->NormalVirtualTextureUniforms0).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->NormalVirtualTextureUniforms0).field0_0x0 + 8) = 0;
  *(undefined8 *)&(param_1->NormalVirtualTextureUniforms1).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->NormalVirtualTextureUniforms1).field0_0x0 + 8) = 0;
LAB_1497775be:
  bVar16 = SetCollisionHeightTextureParameters(this,param_1);
  if (!bVar16) {
    param_1->CollisionHeightTexture = (GBlackTexture->TextureRHI).Reference;
    *(undefined8 *)&(param_1->CollisionHeightTextureLWCTile).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_1->CollisionHeightTextureLWCTile).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(param_1->CollisionHeightTextureWorldToUVTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((param_1->CollisionHeightTextureWorldToUVTransform).M[0] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(param_1->CollisionHeightTextureWorldToUVTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((param_1->CollisionHeightTextureWorldToUVTransform).M[1] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(param_1->CollisionHeightTextureWorldToUVTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((param_1->CollisionHeightTextureWorldToUVTransform).M[2] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(param_1->CollisionHeightTextureWorldToUVTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((param_1->CollisionHeightTextureWorldToUVTransform).M[3] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(param_1->CollisionHeightTextureUVToWorldTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((param_1->CollisionHeightTextureUVToWorldTransform).M[0] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(param_1->CollisionHeightTextureUVToWorldTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((param_1->CollisionHeightTextureUVToWorldTransform).M[1] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(param_1->CollisionHeightTextureUVToWorldTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((param_1->CollisionHeightTextureUVToWorldTransform).M[2] + 2) = uVar11;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(param_1->CollisionHeightTextureUVToWorldTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((param_1->CollisionHeightTextureUVToWorldTransform).M[3] + 2) = uVar11;
    *(undefined8 *)&(param_1->CollisionHeightTextureUVScaleBias).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->CollisionHeightTextureUVScaleBias).field0_0x0 + 8) = 0;
    param_1->CollisionHeightTextureEnabled = 0;
  }
  if (((!bVar15) && (!bVar16)) && (1 < (byte)LogPCG._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  TVar12._s_0.Y = (float)(this->LandscapeGridSize).field0_0x0._s_0.Y;
  TVar12._s_0.X = (float)(this->LandscapeGridSize).field0_0x0._s_0.X;
  (param_1->LandscapeGridSize).field0_0x0 = TVar12;
  return;
}

