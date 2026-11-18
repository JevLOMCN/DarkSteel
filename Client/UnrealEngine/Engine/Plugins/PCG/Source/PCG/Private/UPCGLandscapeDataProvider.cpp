// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 14972bb90

UClass * __cdecl UPCGLandscapeDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeDataProvider",
               &Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGLandscapeDataProvider,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLandscapeDataProvider>,
               InternalVTableHelperCtorCaller<UPCGLandscapeDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton;
}

// UPCGLandscapeDataProvider @ 14973bda0

UPCGLandscapeDataProvider * __thiscall
UPCGLandscapeDataProvider::UPCGLandscapeDataProvider
          (UPCGLandscapeDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->NormalVirtualTextureMode = Count;
  this->_padding_ = (longlong)&___7UPCGLandscapeDataProvider__6B_;
  (this->BaseColorVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  (this->HeightVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  (this->NormalVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  (this->Resource).Object = (FPCGLandscapeResource *)0x0;
  (this->Resource).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bBaseColorSRGB = false;
  this->BaseColorVirtualTextureUnpackType = None;
  (this->LandscapeGridSize).field0_0x0._s_0.X = 1.0;
  (this->LandscapeGridSize).field0_0x0._s_0.Y = 1.0;
  return this;
}

// UPCGLandscapeDataProvider @ 14973be20

UPCGLandscapeDataProvider * __thiscall
UPCGLandscapeDataProvider::UPCGLandscapeDataProvider
          (UPCGLandscapeDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->NormalVirtualTextureMode = Count;
  this->_padding_ = (longlong)&___7UPCGLandscapeDataProvider__6B_;
  (this->BaseColorVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  (this->HeightVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  (this->NormalVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  (this->Resource).Object = (FPCGLandscapeResource *)0x0;
  (this->Resource).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bBaseColorSRGB = false;
  this->BaseColorVirtualTextureUnpackType = None;
  (this->LandscapeGridSize).field0_0x0._s_0.X = 1.0;
  (this->LandscapeGridSize).field0_0x0._s_0.Y = 1.0;
  return this;
}

// ~UPCGLandscapeDataProvider @ 14973e3b0

void __thiscall
UPCGLandscapeDataProvider::~UPCGLandscapeDataProvider(UPCGLandscapeDataProvider *this)

{
  this->_padding_ = (longlong)&___7UPCGLandscapeDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Resource).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// operator() @ 1497409f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`UPCGLandscapeDataProvider::Initialize'::__l2::<lambda_1>::operator()
          (void *this,ALandscape *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UWorld *pUVar6;
  double *pdVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  UWorld *pUVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  double dVar19;
  double dVar20;
  undefined1 local_98 [8];
  longlong *local_90;
  int iStack_88;
  uint uStack_84;
  TBitArray<FDefaultBitArrayAllocator> *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int local_60;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  pUVar6 = *(UWorld **)this;
  pUVar12 = AActor::GetWorld((AActor *)param_1);
  if ((pUVar12 == pUVar6) &&
     (lVar13 = (**(code **)(*(longlong *)&param_1->field_0x2c0 + 0x18))(), lVar13 != 0)) {
    iStack_88 = 0;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0xb0);
    uStack_84 = 1;
    iVar4 = *(int *)(lVar13 + 200);
    plVar2 = (longlong *)(lVar13 + 0xa0);
    local_70 = 0;
    iStack_74 = 0;
    if (iVar4 != 0) {
      pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0xc0);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0xc0) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = pTVar1;
      }
      uVar17 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
      while (uVar17 == 0) {
        lVar14 = (longlong)iStack_88;
        local_70 = local_70 + 0x20;
        iStack_88 = iStack_88 + 1;
        iStack_74 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_149740ace;
        uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uStack_84 = -uVar17 & uVar17;
      uVar3 = (ulonglong)uStack_84 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_60 = (int)lVar14;
      iStack_74 = local_70 + -1 + local_60;
      if (iVar4 < iStack_74) {
        iStack_74 = iVar4;
      }
    }
LAB_149740ace:
    iStack_68 = *(int *)(lVar13 + 0xa8) - *(int *)(lVar13 + 0xd4);
    uVar17 = *(uint *)(lVar13 + 200);
    uStack_78 = 0xffffffff;
    uVar16 = uVar17 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uStack_84,iStack_88);
    TStack_50.CurrentBitIndex = iStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar17 >> 5;
    TStack_50._28_4_ = iStack_74;
    TStack_50.BaseBitIndex = local_70;
    uStack_30 = CONCAT44(uStack_64,iStack_68);
    local_90 = plVar2;
    local_80 = pTVar1;
    iStack_6c = iStack_74;
    local_58 = plVar2;
    TStack_50.Array = pTVar1;
    if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    uVar5 = *(uint *)(lVar13 + 200);
    if (uVar17 != uVar5) {
      pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0xc0);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0xc0) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = pTVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) &
               *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar13 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_149740bd1;
        uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar17 = (int)lVar13 + -1 + uVar16;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
LAB_149740bd1:
    while( true ) {
      plVar9 = local_58;
      if ((int)local_58[1] - *(int *)((longlong)local_58 + 0x34) != (int)uStack_30) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_98);
      }
      if (((TStack_50.CurrentBitIndex == uVar17) && (TStack_50.Array == pTVar1)) &&
         (plVar9 == plVar2)) break;
      pdVar7 = *(double **)((longlong)this + 8);
      lVar13 = *(longlong *)(*plVar9 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
      dVar20 = *(double *)(lVar13 + 0x110) - *(double *)(lVar13 + 0x128);
      dVar19 = *(double *)(lVar13 + 0x118) - *(double *)(lVar13 + 0x130);
      if (((*pdVar7 <= *(double *)(lVar13 + 0x110) + *(double *)(lVar13 + 0x128)) &&
          (dVar20 < pdVar7[3] || dVar20 == pdVar7[3])) &&
         ((pdVar7[1] <= *(double *)(lVar13 + 0x118) + *(double *)(lVar13 + 0x130) &&
          (dVar19 < pdVar7[4] || dVar19 == pdVar7[4])))) {
        return true;
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return false;
}

// operator() @ 149740cb0

void __thiscall
`UPCGLandscapeDataProvider::InitializeFromLandscapeCollision'::__l2::<lambda_1>::operator()
          (void *this,TIntPoint<int> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)this;
  if ((*(TIntPoint<int> **)(lVar1 + 8) <= param_1) &&
     (param_1 < *(TIntPoint<int> **)(lVar1 + 8) + *(int *)(lVar1 + 0x14))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0x10);
  if (iVar4 == *(int *)(lVar1 + 0x14)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(lVar1 + 8),(int *)(lVar1 + 0x14));
  }
  *(int *)(lVar1 + 0x10) = iVar4 + 1;
  ((TIntPoint<int>_u_0 *)(*(longlong *)(lVar1 + 8) + (longlong)iVar4 * 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)param_1->field0_0x0;
  lVar1 = *(longlong *)this;
  iVar4 = (param_1->field0_0x0)._s_0.X;
  iVar5 = (param_1->field0_0x0)._s_0.Y;
  if (*(int *)(lVar1 + 0x18) < iVar4) {
    iVar4 = *(int *)(lVar1 + 0x18);
  }
  if (*(int *)(lVar1 + 0x1c) < iVar5) {
    iVar5 = *(int *)(lVar1 + 0x1c);
  }
  *(ulonglong *)(lVar1 + 0x18) = CONCAT44(iVar5,iVar4);
  lVar1 = *(longlong *)this;
  iVar4 = (param_1->field0_0x0)._s_0.X;
  iVar5 = (param_1->field0_0x0)._s_0.Y;
  if (iVar4 < *(int *)(lVar1 + 0x20)) {
    iVar4 = *(int *)(lVar1 + 0x20);
  }
  if (iVar5 < *(int *)(lVar1 + 0x24)) {
    iVar5 = *(int *)(lVar1 + 0x24);
  }
  *(ulonglong *)(lVar1 + 0x20) = CONCAT44(iVar5,iVar4);
  return;
}

// GetPrivateStaticClass @ 14975c1c0

UClass * __cdecl UPCGLandscapeDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeDataProvider",
               &Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGLandscapeDataProvider,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLandscapeDataProvider>,
               InternalVTableHelperCtorCaller<UPCGLandscapeDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975e710

FComputeDataProviderRenderProxy * __thiscall
UPCGLandscapeDataProvider::GetRenderProxy(UPCGLandscapeDataProvider *this)

{
  ERuntimeVirtualTextureMaterialType EVar1;
  bool bVar2;
  EBaseColorUnpackType EVar3;
  URuntimeVirtualTexture *pUVar4;
  URuntimeVirtualTexture *pUVar5;
  URuntimeVirtualTexture *pUVar6;
  FPCGLandscapeDataProviderProxy *pFVar7;
  TSharedPtr<FPCGLandscapeResource_const_,1> local_28;
  TVector2<double>_u_0 local_18;
  
  pFVar7 = ::operator_new(0x310);
  if (pFVar7 != (FPCGLandscapeDataProviderProxy *)0x0) {
    local_28.SharedReferenceCount.ReferenceController =
         (this->Resource).SharedReferenceCount.ReferenceController;
    local_28.Object = (this->Resource).Object;
    EVar1 = this->NormalVirtualTextureMode;
    EVar3 = this->BaseColorVirtualTextureUnpackType;
    pUVar4 = (this->HeightVirtualTexture).field0_0x0.DebugPtr;
    pUVar5 = (this->BaseColorVirtualTexture).field0_0x0.DebugPtr;
    pUVar6 = (this->NormalVirtualTexture).field0_0x0.DebugPtr;
    bVar2 = this->bBaseColorSRGB;
    local_18._s_0.X = (this->LandscapeGridSize).field0_0x0._s_0.X;
    local_18._s_0.Y = (this->LandscapeGridSize).field0_0x0._s_0.Y;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FPCGLandscapeDataProviderProxy::FPCGLandscapeDataProviderProxy
                       (pFVar7,&local_28,pUVar5,pUVar4,pUVar6,bVar2,EVar3,EVar1,
                        (TVector2<double> *)&local_18._s_0);
    return (FComputeDataProviderRenderProxy *)pFVar7;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// InitFromLandscape @ 1497689a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGLandscapeDataProvider::InitFromLandscape
          (UPCGLandscapeDataProvider *this,UPCGDataBinding *param_1,ALandscape *param_2,
          TBox<double> *param_3,bool param_4,bool param_5)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId351,"UPCGLandscapeDataProvider::InitFromLandscape",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
               ,0x15f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId351);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                         ,0x160,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 == (ALandscape *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8112867122457083550>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                       ,0x162,"InLandscape");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (param_4) {
      InitializeRuntimeVirtualTextures(this,param_2,param_5);
    }
    if ((this->HeightVirtualTexture).field0_0x0.DebugPtr == (URuntimeVirtualTexture *)0x0) {
      InitializeFromLandscapeCollision(this,param_1,param_2,param_3);
    }
    if (*(longlong *)&param_2->field_0x1b8 == 0) {
      pTVar4 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar4 = (TTransform<double> *)(*(longlong *)&param_2->field_0x1b8 + 0x1f0);
    }
    dVar2 = (pTVar4->Scale3D).XY.m128d_f64[1];
    (this->LandscapeGridSize).field0_0x0._s_0.X = (pTVar4->Scale3D).XY.m128d_f64[0];
    (this->LandscapeGridSize).field0_0x0._s_0.Y = dVar2;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Initialize @ 149769a20

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

void __thiscall
UPCGLandscapeDataProvider::Initialize
          (UPCGLandscapeDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  UObject *pUVar5;
  TConsoleVariableData<bool> *pTVar6;
  FObjectPtr_u_0 FVar7;
  FWeakObjectPtr *pFVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  UClass *pUVar12;
  UPCGDataBinding *this_00;
  IPCGGraphExecutionSource *pIVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  FPCGDataCollection *this_01;
  UObject *pUVar17;
  ALandscape *pAVar18;
  TTransform<double> *pTVar19;
  FString *pFVar20;
  ulonglong uVar21;
  FWeakObjectPtr *pFVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStackY_168 [32];
  undefined1 local_137 [7];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  FObjectPtr_u_0 local_118;
  UPCGLandscapeDataProvider *local_110;
  FWeakObjectPtr *local_108;
  UPCGDataBinding *local_100;
  undefined8 local_f8;
  TBox<double> *local_f0;
  TPersistentObjectPtr<FSoftObjectPath> local_e8;
  FString local_c0;
  FString local_b0;
  FString local_a0 [2];
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar25 = -1 < CpuChannel->Enabled;
  local_110 = this;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId283,"UPCGLandscapeDataProvider::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
               ,0x11b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId283);
  }
  UPCGComputeDataProvider::Initialize
            ((UPCGComputeDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar20 = GetTypeName<UPCGLandscapeDataInterface>(&local_c0);
    if ((pFVar20->Data).ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar24);
  }
  pUVar12 = UPCGLandscapeDataInterface::StaticClass();
  iVar2 = (int)pUVar12->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar12->_padding_)) {
    pFVar20 = GetTypeName<UPCGLandscapeDataInterface>(&local_b0);
    pwVar24 = L"";
    if ((pFVar20->Data).ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
    }
    pFVar20 = GetFullNameForCastLogError<UComputeDataInterface_const_>(local_a0,param_1);
    if ((pFVar20->Data).ArrayNum != 0) {
      pwVar24 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar24,pwVar23);
  }
  this_00 = CastChecked<UPCGDataBinding,UObject>(param_2);
  local_100 = this_00;
  pIVar13 = UPCGDataBinding::GetExecutionSource(this_00);
  if ((pIVar13 == (IPCGGraphExecutionSource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutionSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                         ,0x124,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x10))(pIVar13);
  uVar15 = (**(code **)(*plVar14 + 0x20))(plVar14);
  plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x10))(pIVar13);
  (**(code **)(*plVar14 + 0x40))(plVar14,&local_78);
  lVar16 = (**(code **)((longlong)*pIVar13 + 8))(pIVar13);
  if (lVar16 == 0) {
LAB_149769be1:
    bVar9 = false;
  }
  else {
    pUVar12 = Z_Construct_UClass_UPCGComponent_NoRegister();
    pTVar6 = PCGLandscapeDataInterface::CVarEnableLandscapeVTSampling.Ref;
    iVar2 = (int)pUVar12->_padding_;
    if (((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         != &pUVar12->_padding_)) || (*(char *)(lVar16 + 0xce) != '\x02')) goto LAB_149769be1;
    bVar9 = IsInParallelGameThread();
    if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
      lVar16 = 0;
    }
    else {
      lVar16 = 1;
    }
    bVar9 = true;
    if (pTVar6->ShadowedValue[lVar16] == false) goto LAB_149769be1;
  }
  local_f0 = &local_78;
  local_f8 = uVar15;
  if ((*(int *)&param_1[1].field_0x20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!DataInterface->GetDownstreamInputPinLabelAliases().IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                          ,0x141,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = UPCGDataBinding::GetInputDataCollection(this_00);
  if ((*(int *)&param_1[1].field_0x20 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FPCGDataCollection::GetInputsByPin(this_01,&local_130,*(FName **)&param_1[1].field_0x18);
  if (local_130.ArrayNum != 0) {
    if ((local_130.ArrayNum != 1) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8112867122457083578>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                            ,0x146,"TaggedDatas.Num() == 1"), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_130.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar16 = *(longlong *)local_130.AllocatorInstance.Data;
    pUVar12 = Z_Construct_UClass_UPCGLandscapeData_NoRegister();
    iVar2 = (int)pUVar12->_padding_;
    if (((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         != &pUVar12->_padding_)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8112867122457083577>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                            ,0x147,"TaggedDatas[0].Data->IsA<UPCGLandscapeData>()"), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_130.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_118.Handle = *(UObject **)local_130.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_118.Handle == (UObject *)0x0) goto LAB_149769fcc;
      UE::GC::MarkAsReachable(local_118.Handle);
    }
    if (local_118.Handle != (UObject *)0x0) {
      pUVar12 = Z_Construct_UClass_UPCGLandscapeData_NoRegister();
      bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_118,pUVar12);
      FVar7 = local_118;
      if ((bVar10) && (local_118.Handle != (UObject *)0x0)) {
        pFVar22 = *(FWeakObjectPtr **)&local_118.Handle[10].field_0x18;
        pUVar5 = local_118.Handle + 10;
        local_120 = *(uint *)&pUVar5->field_0x20;
        uVar21 = (ulonglong)(int)local_120;
        local_108 = pFVar22 + uVar21 * 5;
        do {
          pFVar8 = local_108;
          if (*(int *)&pUVar5->field_0x20 != (int)uVar21) {
            local_137[0] = 0;
            `TCheckedPointerIterator<TSoftObjectPtr<ALandscapeProxy>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_137);
          }
          if (pFVar22 == pFVar8) break;
          local_e8.WeakPtr = *pFVar22;
          FSoftObjectPath::FSoftObjectPath(&local_e8.ObjectID,(FSoftObjectPath *)(pFVar22 + 1));
          pUVar17 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_e8);
          if (pUVar17 != (UObject *)0x0) {
            pUVar12 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
            iVar2 = (int)pUVar12->_padding_;
            if ((((iVar2 <= *(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                  == &pUVar12->_padding_)) &&
                (pAVar18 = (ALandscape *)(**(code **)(*(longlong *)pUVar17 + 0x778))(pUVar17),
                pAVar18 != (ALandscape *)0x0)) &&
               (bVar10 = `UPCGLandscapeDataProvider::Initialize'::__l2::<lambda_1>::operator()
                                   (&local_f8,pAVar18), bVar10)) goto LAB_149769eab;
          }
          if (local_e8.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
          }
          uVar21 = (ulonglong)local_120;
          pFVar22 = pFVar22 + 5;
        } while( true );
      }
    }
  }
LAB_149769fcc:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
  if ((FPCGTaggedData *)local_130.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
LAB_149769eab:
  cVar1 = FVar7.Handle[0xc].field_0x15;
  if ((cVar1 == '\0') || (FVar7.Handle[0xc].field_0x16 == '\0')) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((bVar9) && (cVar1 != '\0')) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId351,"UPCGLandscapeDataProvider::InitFromLandscape",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
               ,0x15f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId351);
  }
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                          ,0x160,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (bVar9) {
    InitializeRuntimeVirtualTextures(local_110,pAVar18,bVar10);
  }
  if ((local_110->HeightVirtualTexture).field0_0x0.DebugPtr == (URuntimeVirtualTexture *)0x0) {
    InitializeFromLandscapeCollision(local_110,local_100,pAVar18,&local_78);
  }
  if (*(longlong *)&pAVar18->field_0x1b8 == 0) {
    pTVar19 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar19 = (TTransform<double> *)(*(longlong *)&pAVar18->field_0x1b8 + 0x1f0);
  }
  dVar4 = (pTVar19->Scale3D).XY.m128d_f64[1];
  (local_110->LandscapeGridSize).field0_0x0._s_0.X = (pTVar19->Scale3D).XY.m128d_f64[0];
  (local_110->LandscapeGridSize).field0_0x0._s_0.Y = dVar4;
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_e8.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_e8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  goto LAB_149769fcc;
}

// InitializeFromLandscapeCollision @ 14976a870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGLandscapeDataProvider::InitializeFromLandscapeCollision
          (UPCGLandscapeDataProvider *this,UPCGDataBinding *param_1,ALandscape *param_2,
          TBox<double> *param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  ulonglong uVar17;
  TReferenceControllerBase<1> *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  TIntPoint<int>_u_0 TVar25;
  ulonglong uVar26;
  FPCGLandscapeResource *pFVar27;
  bool bVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined4 uVar80;
  undefined1 auStackY_378 [32];
  undefined1 local_328 [8];
  uint local_320;
  uint uStack_31c;
  uint local_318;
  uint uStack_314;
  TIntPoint<int>_u_0 local_308;
  double dStack_300;
  FPCGLandscapeResource *local_2f8;
  FSharedReferencer<1> FStack_2f0;
  FResourceKey local_2e8;
  ulonglong local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  ulonglong local_298;
  double dStack_290;
  undefined1 local_288 [16];
  ALandscape *local_278;
  double dStack_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_268;
  undefined8 local_248;
  double dStack_240;
  UPCGLandscapeDataProvider *local_238;
  longlong *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  undefined1 local_200 [40];
  int local_1d8;
  undefined4 uStack_1d4;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  longlong local_198;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  bVar28 = -1 < CpuChannel->Enabled;
  local_238 = this;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId453,
               "UPCGLandscapeDataProvider::InitializeFromLandscapeCollision",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
               ,0x1c5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId453);
  }
  if ((param_2 == (ALandscape *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InLandscape",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                          ,0x1c6,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar15 = (**(code **)(*(longlong *)&param_2->field_0x2c0 + 0x18))(&param_2->field_0x2c0);
  if (lVar15 == 0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8112867122457083446>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                        ,0x1ca,"LandscapeInfo");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    TVar25._0_4_ = *(int *)(lVar15 + 0xa8) - *(int *)(lVar15 + 0xd4);
    local_140._0_1_ = param_3->IsValid;
    local_140._1_1_ = param_3->Pad[0];
    local_140._2_1_ = param_3->Pad[1];
    local_140._3_1_ = param_3->Pad[2];
    local_140._4_1_ = param_3->Pad[3];
    local_140._5_1_ = param_3->Pad[4];
    local_140._6_1_ = param_3->Pad[5];
    local_140._7_1_ = param_3->Pad[6];
    dVar48 = (param_3->Min).field0_0x0._s_0.Z;
    dStack_158 = (param_3->Max).field0_0x0._s_0.X;
    dVar71 = (param_3->Min).field0_0x0._s_0.X;
    dVar76 = (param_3->Min).field0_0x0._s_0.Y;
    local_150 = (param_3->Max).field0_0x0._s_0.Y;
    dVar49 = (param_3->Max).field0_0x0._s_0.Z;
    local_318 = TVar25._0_4_;
    local_170 = dVar71;
    dStack_168 = dVar76;
    local_160 = dVar48;
    dStack_148 = dVar49;
    (**(code **)(*(longlong *)&param_2->field_0x2c0 + 0x20))(&param_2->field_0x2c0,&local_138);
    dVar71 = dVar71 - local_118;
    dVar76 = dVar76 - dStack_110;
    uVar80 = (undefined4)((ulonglong)dVar76 >> 0x20);
    dStack_300 = local_128 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dStack_270 = dStack_120 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar57 = SUB84(dStack_270,0);
    uVar61 = (undefined4)((ulonglong)dStack_270 >> 0x20);
    local_138 = local_138 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dStack_240 = dStack_130 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar48 = dVar48 - local_108;
    auVar33._8_4_ = uVar57;
    auVar33._0_8_ = dStack_300;
    auVar33._12_4_ = uVar61;
    local_278 = auVar33._8_8_;
    auVar50._8_4_ = SUB84(dStack_240,0);
    auVar50._0_8_ = local_138;
    uVar56 = (undefined4)((ulonglong)dStack_240 >> 0x20);
    auVar50._12_4_ = uVar56;
    local_288._8_4_ = uVar57;
    local_288._0_8_ = dStack_300;
    local_288._12_4_ = uVar61;
    dVar53 = auVar50._8_8_;
    auVar72._8_4_ = SUB84(dVar76,0);
    auVar72._0_8_ = dVar71;
    auVar72._12_4_ = uVar80;
    auVar34._8_4_ = SUB84(dStack_300,0);
    auVar34._0_8_ = dVar53;
    auVar34._12_4_ = (int)((ulonglong)dStack_300 >> 0x20);
    auVar54._8_4_ = SUB84(dStack_240,0);
    auVar54._0_8_ = local_138;
    auVar54._12_4_ = uVar56;
    auVar73._0_8_ = auVar72._8_8_ * local_138 - dVar53 * dVar71;
    auVar73._8_8_ = dVar48 * dStack_240 - auVar34._8_8_ * dVar76;
    auVar55._8_4_ = uVar57;
    auVar55._0_8_ = dStack_300;
    auVar55._12_4_ = uVar61;
    auVar55 = blendpd(auVar54,auVar55,2);
    auVar62._8_4_ = SUB84(auVar73._8_8_,0);
    auVar62._0_8_ = auVar73._0_8_;
    auVar62._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
    dVar32 = auVar55._0_8_;
    dStack_2b0 = auVar55._8_8_;
    auVar42._8_4_ = SUB84(dVar76,0);
    auVar42._0_8_ = dVar71;
    auVar42._12_4_ = uVar80;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar48;
    auVar55 = blendpd(auVar42,auVar5,2);
    auVar43._0_8_ = auVar55._0_8_ * dStack_300 - dVar32 * dVar48;
    auVar43._8_8_ = auVar55._8_8_ * dStack_270 - dStack_2b0 * 0.0;
    auVar63._0_8_ = auVar62._8_8_ + auVar62._8_8_;
    auVar63._8_8_ = auVar43._0_8_ + auVar43._0_8_;
    auVar55 = blendpd(auVar73,auVar43,2);
    auVar68._8_4_ = SUB84(auVar63._8_8_,0);
    auVar68._0_8_ = auVar63._0_8_;
    uVar56 = (undefined4)((ulonglong)auVar63._8_8_ >> 0x20);
    auVar68._12_4_ = uVar56;
    auVar35._8_4_ = SUB84(auVar63._8_8_,0);
    auVar35._0_8_ = auVar63._0_8_;
    auVar35._12_4_ = uVar56;
    auVar74._0_8_ = auVar55._0_8_ + auVar55._0_8_;
    auVar74._8_8_ = auVar55._8_8_ + auVar55._8_8_;
    auVar55 = blendpd(auVar63,auVar74,2);
    auVar69._0_8_ = auVar68._8_8_ * local_138 - auVar63._0_8_ * dVar53;
    auVar69._8_8_ = auVar74._0_8_ * dStack_240 - auVar35._8_8_ * dStack_300;
    auVar36._8_4_ = SUB84(auVar74._8_8_,0);
    auVar36._0_8_ = auVar74._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
    auVar64._0_8_ = auVar55._0_8_ * dStack_300 - auVar74._0_8_ * dVar32;
    auVar64._8_8_ = auVar55._8_8_ * dStack_270 - auVar36._8_8_ * dStack_2b0;
    auVar78._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uStack_f4,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_f8);
    auVar78._8_4_ = _UNK_15061cc88 & uStack_f0;
    auVar78._12_4_ = _UNK_15061cc8c & uStack_ec;
    local_118 = dStack_158 - local_118;
    dStack_110 = local_150 - dStack_110;
    lVar29 = -(ulonglong)(auVar78._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar31 = -(ulonglong)(auVar78._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar8._4_4_ = uStack_f4;
    auVar8._0_4_ = local_f8;
    auVar8._8_4_ = uStack_f0;
    auVar8._12_4_ = uStack_ec;
    auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar8);
    lVar30 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_e8._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_e8._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar79._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar55._4_4_,
                          ~(uint)lVar29 & auVar55._0_4_);
    auVar79._8_4_ = ~(uint)lVar31 & auVar55._8_4_;
    auVar79._12_4_ = ~(uint)((ulonglong)lVar31 >> 0x20) & auVar55._12_4_;
    auVar70._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar70._0_8_ = local_e8._0_8_;
    auVar70._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar70);
    local_1a8 = (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar55._4_4_,
                                 ~(uint)lVar30 & auVar55._0_4_);
    dVar49 = dVar49 - local_108;
    auVar37._8_4_ = SUB84(auVar69._8_8_,0);
    auVar37._0_8_ = auVar69._0_8_;
    auVar37._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
    uVar56 = SUB84(dStack_110,0);
    auVar58._8_4_ = uVar56;
    auVar58._0_8_ = local_118;
    uVar57 = (undefined4)((ulonglong)dStack_110 >> 0x20);
    auVar58._12_4_ = uVar57;
    auVar38._8_4_ = uVar56;
    auVar38._0_8_ = local_118;
    auVar38._12_4_ = uVar57;
    local_1d0 = (auVar63._0_8_ * (double)local_278 + dVar71 + auVar37._8_8_) * auVar79._0_8_;
    dStack_1c8 = (auVar63._8_8_ * dStack_270 + dVar76 + auVar64._0_8_) * auVar79._8_8_;
    auVar59._0_8_ = auVar58._8_8_ * local_138 - local_118 * dVar53;
    auVar59._8_8_ = dVar49 * dStack_240 - auVar38._8_8_ * dStack_300;
    auVar44._8_4_ = uVar56;
    auVar44._0_8_ = local_118;
    auVar44._12_4_ = uVar57;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar49;
    auVar55 = blendpd(auVar44,auVar6,2);
    auVar70 = blendpd(auVar69,auVar64,2);
    auVar45._0_8_ = auVar55._0_8_ * dStack_300 - dVar49 * dVar32;
    auVar45._8_8_ = auVar55._8_8_ * (double)local_288._8_8_ - dStack_2b0 * 0.0;
    local_1c0 = (auVar74._0_8_ * (double)local_278 + dVar48 + auVar70._0_8_) * local_1a8;
    auVar75._8_4_ = SUB84(auVar59._8_8_,0);
    auVar75._0_8_ = auVar59._0_8_;
    auVar75._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    dVar71 = auVar75._8_8_ + auVar75._8_8_;
    dVar76 = auVar45._0_8_ + auVar45._0_8_;
    auVar55 = blendpd(auVar59,auVar45,2);
    auVar60._0_8_ = auVar55._0_8_ + auVar55._0_8_;
    auVar60._8_8_ = auVar55._8_8_ + auVar55._8_8_;
    uVar56 = SUB84(dVar76,0);
    auVar51._8_4_ = uVar56;
    auVar51._0_8_ = dVar71;
    uVar57 = (undefined4)((ulonglong)dVar76 >> 0x20);
    auVar51._12_4_ = uVar57;
    auVar39._8_4_ = uVar56;
    auVar39._0_8_ = dVar71;
    auVar39._12_4_ = uVar57;
    auVar46._8_4_ = uVar56;
    auVar46._0_8_ = dVar71;
    auVar46._12_4_ = uVar57;
    auVar55 = blendpd(auVar46,auVar60,2);
    auVar52._0_8_ = auVar51._8_8_ * local_138 - dVar71 * dVar53;
    auVar52._8_8_ = auVar60._0_8_ * dStack_240 - auVar39._8_8_ * dStack_300;
    auVar40._8_4_ = SUB84(auVar60._8_8_,0);
    auVar40._0_8_ = auVar60._0_8_;
    auVar40._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
    auVar47._0_8_ = auVar55._0_8_ * dStack_300 - auVar60._0_8_ * dVar32;
    auVar47._8_8_ = auVar55._8_8_ * (double)local_288._8_8_ - auVar40._8_8_ * dStack_2b0;
    auVar41._8_4_ = SUB84(auVar52._8_8_,0);
    auVar41._0_8_ = auVar52._0_8_;
    auVar41._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
    local_1b8 = (dVar71 * (double)local_278 + local_118 + auVar41._8_8_) * auVar79._0_8_;
    dStack_1b0 = (dVar76 * dStack_270 + dStack_110 + auVar47._0_8_) * auVar79._8_8_;
    auVar55 = blendpd(auVar52,auVar47,2);
    dVar71 = __real_3ff0000000000000 / (double)*(int *)&param_2->field_0x770;
    local_1a8 = (auVar60._0_8_ * (double)local_278 + dVar49 + auVar55._0_8_) * local_1a8;
    auVar7._4_8_ = auVar64._8_8_;
    auVar7._0_4_ = (int)((ulonglong)local_1d0 >> 0x20);
    auVar65._0_8_ = auVar7._0_8_ << 0x20;
    auVar65._8_4_ = SUB84(dStack_1c8,0);
    auVar65._12_4_ = (int)((ulonglong)dStack_1c8 >> 0x20);
    uVar66 = auVar65._8_8_;
    uVar3 = local_1d0;
    if (local_1b8 <= local_1d0) {
      uVar3 = local_1b8;
    }
    uVar67 = uVar66;
    if (dStack_1b0 <= (double)uVar66) {
      uVar67 = dStack_1b0;
    }
    if ((double)uVar66 <= dStack_1b0) {
      uVar66 = dStack_1b0;
    }
    uVar77 = local_1d0;
    if (local_1d0 <= local_1b8) {
      uVar77 = local_1b8;
    }
    if ((double)uVar3 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    if ((double)uVar67 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    if ((double)uVar66 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar66 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    if ((double)uVar77 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar77 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    dVar76 = (double)uVar3 * dVar71;
    if (__real_41dfffffffc00000 <= (double)uVar3 * dVar71) {
      dVar76 = __real_41dfffffffc00000;
    }
    dVar48 = (double)uVar67 * dVar71;
    if (__real_41dfffffffc00000 <= (double)uVar67 * dVar71) {
      dVar48 = __real_41dfffffffc00000;
    }
    dVar49 = (double)uVar77 * dVar71;
    if (__real_41dfffffffc00000 <= (double)uVar77 * dVar71) {
      dVar49 = __real_41dfffffffc00000;
    }
    dVar32 = (double)uVar66 * dVar71;
    if (__real_41dfffffffc00000 <= (double)uVar66 * dVar71) {
      dVar32 = __real_41dfffffffc00000;
    }
    uVar19 = (longlong)ROUND((dVar76 + dVar76) - __real_3fe0000000000000) >> 1;
    dStack_290 = dStack_1c8;
    local_298 = uVar19;
    iVar23 = -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar49 + dVar49)) >> 1);
    uVar11 = iVar23 - (int)uVar19;
    local_2b8._0_4_ = -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar32 + dVar32)) >> 1);
    local_2b8._4_4_ = 0;
    uVar22 = (longlong)ROUND((dVar48 + dVar48) - __real_3fe0000000000000) >> 1;
    uVar21 = TVar25._0_4_;
    if ((int)uVar11 < (int)TVar25._0_4_) {
      uVar21 = uVar11;
    }
    iVar14 = (int)uVar22;
    uVar12 = (uint)local_2b8 - iVar14;
    uVar11 = TVar25._0_4_;
    if ((int)uVar12 < (int)TVar25._0_4_) {
      uVar11 = uVar12;
    }
    local_2e8.Source.WeakPtr.ObjectIndex = 0;
    local_2e8.Source.WeakPtr.ObjectSerialNumber = 0;
    local_248 = 0;
    uVar12 = 0;
    if (0 < (int)uVar11) {
      uVar12 = uVar11;
    }
    uVar11 = 0;
    if (0 < (int)uVar21) {
      uVar11 = uVar21;
    }
    local_308 = (TIntPoint<int>_u_0)((longlong)(int)uVar12 * (longlong)(int)uVar11 & 0xffffffff);
    if (0x7fffffff < (longlong)(int)uVar12 * (longlong)(int)uVar11) {
      local_308 = (TIntPoint<int>_u_0)0x7fffffff;
    }
    TVar25._s_0.Y = 0;
    if (local_308._s_0.X < (int)TVar25._0_4_) {
      TVar25 = local_308;
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2e8,(FObjectPtr)&local_248);
    local_2e8.CapturedRegions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.CapturedRegions.ArrayNum = 0;
    local_2e8.CapturedRegions.ArrayMax = 0;
    local_2e8.MinCaptureRegion.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    local_2e8.MaxCaptureRegion.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    local_278 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2e8,(FObjectPtr)&local_278);
    iVar13 = TVar25._s_0.X;
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulong64)TVar25);
    }
    if (local_2e8.CapturedRegions.ArrayMax < iVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar13,&local_2e8.CapturedRegions.AllocatorInstance,
                 local_2e8.CapturedRegions.ArrayNum,&local_2e8.CapturedRegions.ArrayMax);
    }
    local_2a8 = 0x7fffffff;
    uStack_2a4 = 0x7fffffff;
    local_2e8.MinCaptureRegion.field0_0x0 = (TIntPoint<int>_u_0)0x7fffffff7fffffff;
    local_2a0 = 0x80000000;
    uStack_29c = 0x80000000;
    local_2e8.MaxCaptureRegion.field0_0x0 = (TIntPoint<int>_u_0)0x8000000080000000;
    local_288._0_8_ = &local_2e8;
    if ((int)local_318 < local_308._s_0.X) {
      local_268._padding_._4_4_ = 1;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0xb0);
      local_268._padding_._0_4_ = 0;
      plVar2 = (longlong *)(lVar15 + 0xa0);
      local_268.UnvisitedBitMask = 0xffffffff;
      local_268.CurrentBitIndex = 0;
      local_268.BaseBitIndex = 0;
      local_268.Array = pTVar1;
      if (*(int *)(lVar15 + 200) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_268);
      }
      TStack_228._padding_ = CONCAT44(local_268._padding_._4_4_,(undefined4)local_268._padding_);
      TStack_228.CurrentBitIndex = local_268.CurrentBitIndex;
      TStack_228.UnvisitedBitMask = local_268.UnvisitedBitMask;
      TStack_228._28_4_ = local_268._28_4_;
      TStack_228.BaseBitIndex = local_268.BaseBitIndex;
      local_1d8 = *(int *)(lVar15 + 0xa8) - *(int *)(lVar15 + 0xd4);
      local_200._16_8_ = local_268.Array;
      uStack_208 = CONCAT44(uStack_1d4,local_1d8);
      TStack_228.Array = local_268.Array;
      local_230 = plVar2;
      local_200._0_8_ = plVar2;
      local_200._8_8_ = TStack_228._padding_;
      local_200._24_8_ = TStack_228._16_8_;
      local_200._32_8_ = TStack_228._24_8_;
      pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_200,pTVar1,
                           *(int *)(lVar15 + 200));
      uVar3._0_4_ = pTVar16->UnvisitedBitMask;
      uVar3._4_4_ = pTVar16->CurrentBitIndex;
      uStack_180 = *(undefined8 *)&pTVar16->BaseBitIndex;
      local_198 = pTVar16->_padding_;
      pTStack_190 = pTVar16->Array;
      local_188 = uVar3;
      while( true ) {
        plVar9 = local_230;
        if ((int)local_230[1] - *(int *)((longlong)local_230 + 0x34) != (int)uStack_208) {
          local_328[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_328);
        }
        if (((TStack_228.CurrentBitIndex == uVar3._4_4_) && (TStack_228.Array == pTStack_190)) &&
           (plVar9 == plVar2)) break;
        lVar15 = *plVar9;
        uVar66 = *(undefined8 *)(lVar15 + (longlong)TStack_228.CurrentBitIndex * 0x18);
        iVar13 = (int)uVar66;
        if (((((int)uVar19 <= iVar13) && (iVar13 < iVar23)) &&
            (iVar13 = (int)((ulonglong)uVar66 >> 0x20), iVar14 <= iVar13)) &&
           (iVar13 < (int)(uint)local_2b8)) {
          `UPCGLandscapeDataProvider::InitializeFromLandscapeCollision'::__l2::<lambda_1>::
          operator()(local_288,
                     (TIntPoint<int> *)(lVar15 + (longlong)TStack_228.CurrentBitIndex * 0x18));
        }
        TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
      }
    }
    else {
      uVar17 = local_2b8;
      if (iVar14 < (int)local_2b8) {
        do {
          uVar26 = uVar19 & 0xffffffff;
          uVar21 = (uint)uVar22;
          if ((int)uVar19 < iVar23) {
            do {
              uVar24 = (uint)uVar26;
              uVar12 = uVar24 - uVar21 ^ uVar21 >> 0xd;
              uVar11 = (-0x61c88647 - uVar21) - uVar12 ^ uVar12 << 8;
              uVar20 = (uVar21 - uVar11) - uVar12 ^ uVar11 >> 0xd;
              uVar12 = (uVar12 - uVar20) - uVar11 ^ uVar20 >> 0xc;
              uVar11 = (uVar11 - uVar12) - uVar20 ^ uVar12 << 0x10;
              uVar20 = (uVar20 - uVar11) - uVar12 ^ uVar11 >> 5;
              uVar12 = (uVar12 - uVar20) - uVar11 ^ uVar20 >> 3;
              uVar11 = (uVar11 - uVar12) - uVar20 ^ uVar12 << 10;
              local_320 = uVar24;
              uStack_31c = uVar21;
              if (*(int *)(lVar15 + 0xa8) != *(int *)(lVar15 + 0xd4)) {
                lVar29 = lVar15 + 0xd8;
                if (*(longlong *)(lVar15 + 0xe0) != 0) {
                  lVar29 = *(longlong *)(lVar15 + 0xe0);
                }
                iVar14 = *(int *)(lVar29 + (ulonglong)
                                           (*(int *)(lVar15 + 0xe8) - 1U &
                                           ((uVar20 - uVar11) - uVar12 ^ uVar11 >> 0xf)) * 4);
                if (iVar14 != -1) {
                  do {
                    uVar3 = *(undefined8 *)(*(longlong *)(lVar15 + 0xa0) + (longlong)iVar14 * 0x18);
                    if (((uint)uVar3 == uVar24) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar21)) {
                      if (iVar14 != -1) {
                        if (((local_2e8.CapturedRegions.AllocatorInstance.Data <=
                              (FScriptContainerElement *)&local_320) &&
                            ((FScriptContainerElement *)&local_320 <
                             local_2e8.CapturedRegions.AllocatorInstance.Data +
                             (longlong)local_2e8.CapturedRegions.ArrayMax * 8)) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar10)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        iVar14 = local_2e8.CapturedRegions.ArrayNum;
                        if (local_2e8.CapturedRegions.ArrayNum == local_2e8.CapturedRegions.ArrayMax
                           ) {
                          iVar14 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x408,&local_2e8.CapturedRegions.AllocatorInstance,
                                              &local_2e8.CapturedRegions.ArrayMax);
                        }
                        local_2e8.CapturedRegions.ArrayNum = iVar14 + 1;
                        *(ulonglong *)
                         (local_2e8.CapturedRegions.AllocatorInstance.Data + (longlong)iVar14 * 8) =
                             CONCAT44(uStack_31c,local_320);
                        local_318 = local_320;
                        if (local_2e8.MinCaptureRegion.field0_0x0._s_0.X < (int)local_320) {
                          local_318 = local_2e8.MinCaptureRegion.field0_0x0._s_0.X;
                        }
                        uStack_314 = uStack_31c;
                        if (local_2e8.MinCaptureRegion.field0_0x0._s_0.Y < (int)uStack_31c) {
                          uStack_314 = local_2e8.MinCaptureRegion.field0_0x0._s_0.Y;
                        }
                        local_2e8.MinCaptureRegion.field0_0x0._s_0.Y = uStack_314;
                        local_2e8.MinCaptureRegion.field0_0x0._s_0.X = local_318;
                        local_308._s_0.X = local_320;
                        if ((int)local_320 < local_2e8.MaxCaptureRegion.field0_0x0._s_0.X) {
                          local_308._s_0.X = local_2e8.MaxCaptureRegion.field0_0x0._s_0.X;
                        }
                        local_308._s_0.Y = uStack_31c;
                        if ((int)uStack_31c < local_2e8.MaxCaptureRegion.field0_0x0._s_0.Y) {
                          local_308._s_0.Y = local_2e8.MaxCaptureRegion.field0_0x0._s_0.Y;
                        }
                        local_2e8.MaxCaptureRegion.field0_0x0 = local_308;
                      }
                      break;
                    }
                    iVar14 = *(int *)(*(longlong *)(lVar15 + 0xa0) + 0x10 + (longlong)iVar14 * 0x18)
                    ;
                  } while (iVar14 != -1);
                }
              }
              uVar26 = (ulonglong)(uVar24 + 1);
            } while ((int)(uVar24 + 1) < iVar23);
            uVar17 = local_2b8;
            uVar19 = local_298;
          }
          uVar22 = (ulonglong)(uVar21 + 1);
        } while ((int)(uVar21 + 1) < (int)uVar17);
      }
    }
    pTVar18 = ::operator_new(0x180);
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      local_2f8 = ___xmm_00000000000000000000000000000010;
      pFVar27 = (FPCGLandscapeResource *)&DAT_00000010;
      FStack_2f0.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar18->SharedReferenceCount = (atomic<int>)0x1;
      pTVar18->WeakReferenceCount = (atomic<int>)0x1;
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPCGLandscapeResource___00_SharedPointerInternals__6B_
      ;
      FPCGLandscapeResource::FPCGLandscapeResource
                ((FPCGLandscapeResource *)(pTVar18 + 1),&local_2e8);
      pFVar27 = (FPCGLandscapeResource *)(pTVar18 + 1);
      if ((pFVar27 == (FPCGLandscapeResource *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      FStack_2f0.ReferenceController = pTVar18;
      local_2f8 = pFVar27;
    }
    if (&local_238->Resource != (TSharedPtr<FPCGLandscapeResource,1> *)&local_2f8) {
      (local_238->Resource).Object = pFVar27;
      local_2f8 = (FPCGLandscapeResource *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(local_238->Resource).SharedReferenceCount,&FStack_2f0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_2f0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    if (local_2e8.CapturedRegions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.CapturedRegions.AllocatorInstance.Data);
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitializeRuntimeVirtualTextures @ 14976b3d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UPCGLandscapeDataProvider::InitializeRuntimeVirtualTextures
          (UPCGLandscapeDataProvider *this,ALandscape *param_1,bool param_2)

{
  undefined8 *puVar1;
  ERuntimeVirtualTextureMaterialType EVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  URuntimeVirtualTexture *pUVar8;
  uint uVar9;
  uint uVar10;
  URuntimeVirtualTexture *pUVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  longlong local_res20;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId375,
               "UPCGLandscapeDataProvider::InitializeRuntimeVirtualTextures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
               ,0x177);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId375);
  }
  if ((param_1 == (ALandscape *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLandscape",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                         ,0x178,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = 0xffffffff;
  bVar6 = UseVirtualTexturing((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  pUVar8 = (URuntimeVirtualTexture *)0x0;
  uVar13 = uVar7;
  uVar12 = uVar7;
  if ((bVar6) &&
     (iVar3 = *(int *)&param_1->field_0x490, uVar13 = 0xffffffff, uVar12 = 0xffffffff,
     0 < (longlong)iVar3)) {
    local_res20 = 0;
    pUVar11 = pUVar8;
    uVar13 = uVar7;
    uVar12 = uVar7;
    do {
      uVar10 = (uint)pUVar11;
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&param_1->field_0x490) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar11 = *(URuntimeVirtualTexture **)(*(longlong *)&param_1->field_0x488 + local_res20 * 8);
      if (pUVar11 == (URuntimeVirtualTexture *)0x0) goto LAB_14976b5e2;
      EVar2 = pUVar11->MaterialType;
      switch(EVar2) {
      case BaseColor:
        goto switchD_14976b560_caseD_0;
      case BaseColor_Normal_Roughness:
      case BaseColor_Normal_Specular:
      case BaseColor_Normal_Specular_YCoCg:
      case BaseColor_Normal_Specular_Mask_YCoCg:
        if (uVar12 == 0xffffffff) {
          this->NormalVirtualTextureMode = EVar2;
          uVar12 = uVar10;
        }
switchD_14976b560_caseD_0:
        uVar9 = uVar10;
        if (uVar7 != 0xffffffff) break;
        goto LAB_14976b56f;
      case WorldHeight:
        if (uVar13 == 0xffffffff) {
          uVar13 = uVar10;
        }
      }
      uVar9 = uVar7;
      if (uVar7 == uVar10) {
LAB_14976b56f:
        bVar6 = URuntimeVirtualTexture::IsLayerSRGB(pUVar11,0);
        this->bBaseColorSRGB = bVar6;
        bVar6 = URuntimeVirtualTexture::IsLayerYCoCg(pUVar11,0);
        uVar7 = uVar9;
        if (bVar6) {
          this->BaseColorVirtualTextureUnpackType = YCoCgUnpack;
        }
        else if (EVar2 == BaseColor_Normal_Roughness) {
          this->BaseColorVirtualTextureUnpackType = SRGBUnpack;
        }
      }
LAB_14976b5e2:
      local_res20 = local_res20 + 1;
      pUVar11 = (URuntimeVirtualTexture *)(ulonglong)(uVar10 + 1);
    } while (local_res20 < iVar3);
    if (((int)uVar7 < 0) || (*(int *)&param_1->field_0x490 <= (int)uVar7)) goto LAB_14976b6bb;
    uVar9 = 0;
    if ((int)uVar7 < *(int *)&param_1->field_0x490) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar1 = (undefined8 *)(*(longlong *)&param_1->field_0x488 + (longlong)(int)uVar7 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (UObject *)*puVar1, pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar11 = (URuntimeVirtualTexture *)*puVar1;
    (this->BaseColorVirtualTexture).field0_0x0.DebugPtr = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
  }
  else {
LAB_14976b6bb:
    pUVar11 = (URuntimeVirtualTexture *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->BaseColorVirtualTexture).field0_0x0.DebugPtr = pUVar11;
  if (((int)uVar13 < 0) || (*(int *)&param_1->field_0x490 <= (int)uVar13)) {
    pUVar11 = (URuntimeVirtualTexture *)0x0;
  }
  else {
    uVar7 = 0;
    if ((int)uVar13 < *(int *)&param_1->field_0x490) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar11 = *(URuntimeVirtualTexture **)
               (*(longlong *)&param_1->field_0x488 + (longlong)(int)uVar13 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (URuntimeVirtualTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->HeightVirtualTexture).field0_0x0.DebugPtr = pUVar11;
  if (!param_2) goto LAB_14976b841;
  if (((int)uVar12 < 0) || (*(int *)&param_1->field_0x490 <= (int)uVar12)) {
LAB_14976b824:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
  }
  else {
    uVar13 = 0;
    if ((int)uVar12 < *(int *)&param_1->field_0x490) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar8 = *(URuntimeVirtualTexture **)
              (*(longlong *)&param_1->field_0x488 + (longlong)(int)uVar12 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (URuntimeVirtualTexture *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      goto LAB_14976b824;
    }
  }
  (this->NormalVirtualTexture).field0_0x0.DebugPtr = pUVar8;
LAB_14976b841:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Reset @ 149774d70

void __thiscall UPCGLandscapeDataProvider::Reset(UPCGLandscapeDataProvider *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->BaseColorVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  (this->HeightVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  (this->NormalVirtualTexture).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Resource != (TSharedPtr<FPCGLandscapeResource,1> *)&local_18) {
    (this->Resource).Object = (FPCGLandscapeResource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Resource).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->bBaseColorSRGB = false;
  this->BaseColorVirtualTextureUnpackType = None;
  this->NormalVirtualTextureMode = Count;
  (this->LandscapeGridSize).field0_0x0._s_0.X = 1.0;
  (this->LandscapeGridSize).field0_0x0._s_0.Y = 1.0;
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  return;
}

// StaticRegisterNativesUPCGLandscapeDataProvider @ 1497787b0

void __cdecl UPCGLandscapeDataProvider::StaticRegisterNativesUPCGLandscapeDataProvider(void)

{
  return;
}

