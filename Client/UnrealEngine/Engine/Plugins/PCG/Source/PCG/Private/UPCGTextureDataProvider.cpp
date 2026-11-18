// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 14972ce50

UClass * __cdecl UPCGTextureDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureDataProvider",
               &Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGTextureDataProvider,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGTextureDataProvider>,
               InternalVTableHelperCtorCaller<UPCGTextureDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton;
}

// UPCGTextureDataProvider @ 14973cc30

UPCGTextureDataProvider * __thiscall
UPCGTextureDataProvider::UPCGTextureDataProvider
          (UPCGTextureDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGTextureDataProvider__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BindingInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingInfos).ArrayNum = 0;
  (this->BindingInfos).ArrayMax = 0;
  (this->TextureInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureInfos).ArrayNum = 0;
  (this->TextureInfos).ArrayMax = 0;
  this->bInitializeFromDataCollection = false;
  return this;
}

// UPCGTextureDataProvider @ 14973ccc0

UPCGTextureDataProvider * __thiscall
UPCGTextureDataProvider::UPCGTextureDataProvider
          (UPCGTextureDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGTextureDataProvider__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BindingInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingInfos).ArrayNum = 0;
  (this->BindingInfos).ArrayMax = 0;
  (this->TextureInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureInfos).ArrayNum = 0;
  (this->TextureInfos).ArrayMax = 0;
  this->bInitializeFromDataCollection = false;
  return this;
}

// ~UPCGTextureDataProvider @ 14973ea80

void __thiscall UPCGTextureDataProvider::~UPCGTextureDataProvider(UPCGTextureDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGTextureDataProvider__6B_;
  pFVar1 = (this->TextureInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGTextureBindingInfo,int>
            ((FPCGTextureBindingInfo *)(this->BindingInfos).AllocatorInstance.Data,
             (this->BindingInfos).ArrayNum);
  pFVar1 = (this->BindingInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGExportableDataProvider::~UPCGExportableDataProvider((UPCGExportableDataProvider *)this);
  return;
}

// BuildInfosFromDataCollection @ 1497486c0

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
UPCGTextureDataProvider::BuildInfosFromDataCollection
          (UPCGTextureDataProvider *this,UPCGDataBinding *param_1)

{
  int *piVar1;
  TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_> *this_00;
  FPCGTextureBindingInfo *pFVar2;
  code *pcVar3;
  FObjectPtr_u_0 FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  FPCGDataCollection *this_01;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  bool bVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackY_1a8 [32];
  FObjectPtr_u_0 local_158;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_150;
  FName local_140;
  FString local_138;
  FString local_128;
  FPCGTextureBindingInfo local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar14 = false;
  local_158.Handle = local_158.Handle & 0xffffffff00000000;
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                         ,0x129,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((int)this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetDownstreamInputPinLabelAliases().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                         ,300,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = UPCGDataBinding::GetInputDataCollection(param_1);
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FPCGDataCollection::GetInputsByPin(this_01,&local_150,(FName *)this->_padding_);
  uVar16 = 0;
  if (0 < local_150.ArrayNum) {
    lVar15 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar16 < local_150.ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar5.Data = local_150.AllocatorInstance.Data;
      local_158 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(local_150.AllocatorInstance.Data + lVar15))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149748857:
        if ((UPCGBaseTextureData *)local_158.Handle == (UPCGBaseTextureData *)0x0)
        goto LAB_149748b86;
        pUVar11 = Z_Construct_UClass_UPCGBaseTextureData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_158,pUVar11);
        FVar4 = local_158;
        if ((!bVar6) || ((UPCGBaseTextureData *)local_158.Handle == (UPCGBaseTextureData *)0x0))
        goto LAB_149748b86;
        FPCGTextureBindingInfo::FPCGTextureBindingInfo
                  (&local_118,(UPCGBaseTextureData *)local_158.Handle);
        this_00 = &this->BindingInfos;
        iVar8 = TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_>::Find(this_00,&local_118)
        ;
        if (iVar8 == -1) {
          if ((uint)(this->BindingInfos).ArrayNum < 8) {
            pFVar2 = (FPCGTextureBindingInfo *)(this_00->AllocatorInstance).Data;
            if (((pFVar2 <= &local_118) && (&local_118 < pFVar2 + (this->BindingInfos).ArrayMax)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = (this->BindingInfos).ArrayNum;
            piVar1 = &(this->BindingInfos).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10d0,&this_00->AllocatorInstance,piVar1);
            }
            (this->BindingInfos).ArrayNum = iVar8 + 1;
            pFVar12 = (this_00->AllocatorInstance).Data + (longlong)iVar8 * 0xd0;
            *pFVar12 = (FScriptContainerElement)local_118.ResourceType;
            *(undefined8 *)(pFVar12 + 8) = 0;
            *(FRHITexture **)(pFVar12 + 8) = local_118.Texture.Reference;
            local_118.Texture.Reference = (FRHITexture *)0x0;
            *(undefined8 *)(pFVar12 + 0x10) = 0;
            *(IPooledRenderTarget **)(pFVar12 + 0x10) = local_118.ExportedTexture.Reference;
            local_118.ExportedTexture.Reference = (IPooledRenderTarget *)0x0;
            *(TIntPoint<int>_u_0 *)(pFVar12 + 0x18) = local_118.Size.field0_0x0;
            pFVar12[0x20] = (FScriptContainerElement)local_118.Dimension;
            pFVar12[0x21] = (FScriptContainerElement)local_118.bPointSample;
            *(double *)(pFVar12 + 0x30) = local_118.Transform.Rotation.XY.m128d_f64[0];
            *(double *)(pFVar12 + 0x38) = local_118.Transform.Rotation.XY.m128d_f64[1];
            *(double *)(pFVar12 + 0x40) = local_118.Transform.Rotation.ZW.m128d_f64[0];
            *(double *)(pFVar12 + 0x48) = local_118.Transform.Rotation.ZW.m128d_f64[1];
            *(double *)(pFVar12 + 0x50) = local_118.Transform.Translation.XY.m128d_f64[0];
            *(double *)(pFVar12 + 0x58) = local_118.Transform.Translation.XY.m128d_f64[1];
            *(double *)(pFVar12 + 0x60) = local_118.Transform.Translation.ZW.m128d_f64[0];
            *(double *)(pFVar12 + 0x68) = local_118.Transform.Translation.ZW.m128d_f64[1];
            *(double *)(pFVar12 + 0x70) = local_118.Transform.Scale3D.XY.m128d_f64[0];
            *(double *)(pFVar12 + 0x78) = local_118.Transform.Scale3D.XY.m128d_f64[1];
            *(double *)(pFVar12 + 0x80) = local_118.Transform.Scale3D.ZW.m128d_f64[0];
            *(double *)(pFVar12 + 0x88) = local_118.Transform.Scale3D.ZW.m128d_f64[1];
            *(double *)(pFVar12 + 0x90) = local_118.TextureBounds.Min.field0_0x0._s_0.X;
            *(double *)(pFVar12 + 0x98) = local_118.TextureBounds.Min.field0_0x0._s_0.Y;
            *(double *)(pFVar12 + 0xa0) = local_118.TextureBounds.Min.field0_0x0._s_0.Z;
            *(double *)(pFVar12 + 0xa8) = local_118.TextureBounds.Max.field0_0x0._s_0.X;
            *(double *)(pFVar12 + 0xb0) = local_118.TextureBounds.Max.field0_0x0._s_0.Y;
            *(double *)(pFVar12 + 0xb8) = local_118.TextureBounds.Max.field0_0x0._s_0.Z;
            *(undefined8 *)(pFVar12 + 0xc0) = local_118.TextureBounds._48_8_;
            goto LAB_1497489fa;
          }
          if (2 < (byte)LogPCG._0_1_) {
            if (((int)this->_padding_ < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ::FName::ToString((FName *)this->_padding_,&local_128);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
LAB_1497489fa:
          iVar9 = (this->TextureInfos).ArrayNum;
          piVar1 = &(this->TextureInfos).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&(this->TextureInfos).AllocatorInstance,piVar1);
          }
          (this->TextureInfos).ArrayNum = iVar9 + 1;
          lVar13 = (longlong)iVar9;
          pFVar12 = (this->TextureInfos).AllocatorInstance.Data;
          *(undefined4 *)(pFVar12 + lVar13 * 8 + 4) = 0;
          *(int *)(pFVar12 + lVar13 * 8) = iVar8;
          uVar10 = (**(code **)(*(longlong *)FVar4.Handle + 0x4c0))(FVar4.Handle);
          *(undefined4 *)(pFVar12 + lVar13 * 8 + 4) = uVar10;
        }
        if (local_118.ExportedTexture.Reference != (IPooledRenderTarget *)0x0) {
          (**(code **)((local_118.ExportedTexture.Reference)->_padding_ + 0x38))();
        }
        if (local_118.Texture.Reference != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_118.Texture.Reference);
        }
      }
      else {
        if ((UPCGBaseTextureData *)local_158.Handle != (UPCGBaseTextureData *)0x0) {
          UE::GC::MarkAsReachable(local_158.Handle);
          goto LAB_149748857;
        }
LAB_149748b86:
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4301770094700134708>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                           ,0x134,"TextureData");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (1 < (byte)LogPCG._0_1_) {
          if (*(longlong *)(FVar5.Data + lVar15) != 0) {
            local_140 = *(FName *)(*(longlong *)(FVar5.Data + lVar15) + 0x18);
            bVar14 = true;
            ::FName::ToString(&local_140,&local_138);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if ((bVar14) &&
             (bVar14 = false,
             local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x78;
    } while ((int)uVar16 < local_150.ArrayNum);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
  if ((FPCGTaggedData *)local_150.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  return;
}

// BuildInfosFromDataDescription @ 149748c40

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
UPCGTextureDataProvider::BuildInfosFromDataDescription
          (UPCGTextureDataProvider *this,UPCGDataBinding *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_> *this_00;
  atomic<int> aVar3;
  FPCGContextHandle *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FPCGContext *pFVar6;
  longlong *plVar7;
  FPCGTextureBindingInfo *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  bool bVar15;
  atomic<int> aVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  TMatrix<double> *pTVar20;
  longlong lVar21;
  TReferenceControllerBase<1> *pTVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  undefined1 auStackY_378 [32];
  FName local_320;
  TReferenceControllerBase<1> *local_318;
  FString local_310;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  FPCGTextureBindingInfo local_2c8;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  TVector<double>_u_0 local_158;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  TVector<double>_u_0 local_120;
  double dStack_108;
  double local_100;
  double dStack_f8;
  uchar local_f0;
  uchar uStack_ef;
  uchar uStack_ee;
  uchar uStack_ed;
  uchar uStack_ec;
  uchar uStack_eb;
  uchar uStack_ea;
  uchar uStack_e9;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBinding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                          ,0x154,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar4 = (param_1->ContextHandle).Object;
  pTVar5 = (param_1->ContextHandle).WeakReferenceCount.ReferenceController;
  pTVar22 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar22 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar16 = pTVar5->SharedReferenceCount;
      bVar15 = aVar3 == aVar16;
      if (bVar15) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar16 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar16;
    } while (!bVar15);
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5);
    }
    if (((pTVar22 != (TReferenceControllerBase<1> *)0x0) && (pFVar4 != (FPCGContextHandle *)0x0)) &&
       (pFVar6 = pFVar4->Context, pFVar6 != (FPCGContext *)0x0)) {
      local_318 = (TReferenceControllerBase<1> *)this->_padding_;
      plVar7 = (longlong *)this->_padding_;
      if (local_318 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_318->SharedReferenceCount = (atomic<int>)((int)local_318->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar7 == (longlong *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("PinDesc",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                              ,0x15f,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((((pFVar6->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
          (bVar15 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar6->ExecutionSource), !bVar15))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                 ,0x8d,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar19 = (longlong *)
                (**(code **)((longlong)*(pFVar6->ExecutionSource).InterfaceInstance + 0x18))();
      (**(code **)(*plVar19 + 0x58))(plVar19,&local_1f8);
      if ((((pFVar6->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
          (bVar15 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar6->ExecutionSource), !bVar15))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                 ,0x8d,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar19 = (longlong *)
                (**(code **)((longlong)*(pFVar6->ExecutionSource).InterfaceInstance + 0x18))();
      (**(code **)(*plVar19 + 0x38))(plVar19,&local_1b8);
      local_2f0 = local_168;
      local_300 = (double)local_178._0_8_;
      dStack_2f8 = (double)local_178._8_8_;
      dVar28 = (local_1e0 - local_1f8) * (double)local_178._0_8_ * __real_3fe0000000000000;
      dVar27 = (local_1d8 - local_1f0) * (double)local_178._8_8_ * __real_3fe0000000000000;
      uVar25 = SUB84(dVar27,0);
      uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
      local_178._8_4_ = uVar25;
      local_178._0_8_ = dVar28;
      local_178._12_4_ = uVar26;
      local_2e8._8_4_ = uVar25;
      local_2e8._0_8_ = dVar28;
      local_2e8._12_4_ = uVar26;
      local_2d8 = (local_1d0 - local_1e8) * local_168 * __real_3fe0000000000000;
      dStack_160 = 0.0;
      local_168 = local_2d8;
      if ((plVar7 == (longlong *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar23 = plVar7[1];
      lVar24 = *plVar7;
      if (((int)lVar23 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      dVar14 = _UNK_15076c718;
      dVar28 = ___xmm_bff0000000000000bff0000000000000;
      uVar13 = _UNK_150689518;
      uVar12 = ___xmm_00000000000000003ff0000000000000;
      uVar11 = _UNK_15061cbc8;
      dVar27 = ___xmm_3ff00000000000000000000000000000;
      lVar23 = (longlong)(int)lVar23 * 0x68 + lVar24;
      if (lVar24 != lVar23) {
        this_00 = &this->BindingInfos;
        do {
          local_2c8.ResourceType = TextureObject;
          local_2c8.TextureBounds.Min.field0_0x0._s_0.X = 0.0;
          local_2c8.TextureBounds.Min.field0_0x0._s_0.Y = 0.0;
          local_2c8.TextureBounds.Min.field0_0x0._s_0.Z = 0.0;
          local_2c8.TextureBounds.Max.field0_0x0._s_0.X = 0.0;
          uVar25 = 1;
          if (1 < *(int *)(lVar24 + 0x18)) {
            uVar25 = *(undefined4 *)(lVar24 + 0x18);
          }
          local_2c8.TextureBounds.Max.field0_0x0._s_0.Y = 0.0;
          local_2c8.TextureBounds.Max.field0_0x0._s_0.Z = 0.0;
          uVar26 = 1;
          if (1 < *(int *)(lVar24 + 0x1c)) {
            uVar26 = *(undefined4 *)(lVar24 + 0x1c);
          }
          local_2c8.Transform.Rotation.XY.m128d_f64[0] = local_1b8;
          local_2c8.Transform.Rotation.XY.m128d_f64[1] = dStack_1b0;
          local_2c8.Transform.Rotation.ZW.m128d_f64[0] = local_1a8;
          local_2c8.Transform.Rotation.ZW.m128d_f64[1] = dStack_1a0;
          local_2c8.Size.field0_0x0._s_0.Y = uVar26;
          local_2c8.Size.field0_0x0._s_0.X = uVar25;
          local_2c8.Transform.Translation.XY.m128d_f64[0] = local_198;
          local_2c8.Transform.Translation.XY.m128d_f64[1] = dStack_190;
          local_2c8.Transform.Translation.ZW.m128d_f64[0] = local_188;
          local_2c8.Transform.Translation.ZW.m128d_f64[1] = dStack_180;
          local_2c8.Texture.Reference = (FRHITexture *)0x0;
          local_2c8.ExportedTexture.Reference = (IPooledRenderTarget *)0x0;
          local_2c8.Dimension = Texture2D;
          local_2c8.bPointSample = false;
          local_2c8.TextureBounds.IsValid = '\0';
          local_2c8.TextureBounds.Pad[0] = '\0';
          local_2c8.TextureBounds.Pad[1] = '\0';
          local_2c8.TextureBounds.Pad[2] = '\0';
          local_2c8.TextureBounds.Pad[3] = '\0';
          local_2c8.TextureBounds.Pad[4] = '\0';
          local_2c8.TextureBounds.Pad[5] = '\0';
          local_2c8.TextureBounds.Pad[6] = '\0';
          local_2c8.Transform.Scale3D.XY.m128d_f64[0] = (double)local_178._0_8_;
          local_2c8.Transform.Scale3D.XY.m128d_f64[1] = (double)local_178._8_8_;
          local_2c8.Transform.Scale3D.ZW.m128d_f64[0] = local_168;
          local_2c8.Transform.Scale3D.ZW.m128d_f64[1] = dStack_160;
          local_158._s_0.X = dVar28;
          local_158._s_0.Y = dVar14;
          local_128 = 1;
          local_158._s_0.Z = dVar27;
          uStack_140 = uVar11;
          local_138 = uVar12;
          uStack_130 = uVar13;
          pTVar20 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_2c8.Transform,&local_e8);
          UE::Math::TBox<double>::TransformBy
                    ((TBox<double> *)&local_158._s_0,(TBox<double> *)&local_120._s_0,pTVar20);
          local_2c8.TextureBounds.Min.field0_0x0._s_0.X = local_120._s_0.X;
          local_2c8.TextureBounds.Min.field0_0x0._s_0.Y = local_120._s_0.Y;
          local_2c8.TextureBounds.Min.field0_0x0._s_0.Z = local_120._s_0.Z;
          local_2c8.TextureBounds.Max.field0_0x0._s_0.X = dStack_108;
          local_2c8.TextureBounds.Max.field0_0x0._s_0.Y = local_100;
          local_2c8.TextureBounds.Max.field0_0x0._s_0.Z = dStack_f8;
          local_2c8.TextureBounds.IsValid = local_f0;
          local_2c8.TextureBounds.Pad[0] = uStack_ef;
          local_2c8.TextureBounds.Pad[1] = uStack_ee;
          local_2c8.TextureBounds.Pad[2] = uStack_ed;
          local_2c8.TextureBounds.Pad[3] = uStack_ec;
          local_2c8.TextureBounds.Pad[4] = uStack_eb;
          local_2c8.TextureBounds.Pad[5] = uStack_ea;
          local_2c8.TextureBounds.Pad[6] = uStack_e9;
          iVar17 = TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_>::Find
                             (this_00,&local_2c8);
          if (iVar17 == -1) {
            if ((this->BindingInfos).ArrayNum == 0) {
              pFVar8 = (FPCGTextureBindingInfo *)(this_00->AllocatorInstance).Data;
              if (((pFVar8 <= &local_2c8) && (&local_2c8 < pFVar8 + (this->BindingInfos).ArrayMax))
                 && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar17 = (this->BindingInfos).ArrayNum;
              piVar2 = &(this->BindingInfos).ArrayMax;
              if (iVar17 == *piVar2) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10d0,&this_00->AllocatorInstance,piVar2);
              }
              pFVar9 = (this_00->AllocatorInstance).Data;
              (this->BindingInfos).ArrayNum = iVar17 + 1;
              lVar21 = (longlong)iVar17 * 0xd0;
              pFVar9[lVar21] = (FScriptContainerElement)local_2c8.ResourceType;
              *(undefined8 *)(pFVar9 + lVar21 + 8) = 0;
              *(FRHITexture **)(pFVar9 + lVar21 + 8) = local_2c8.Texture.Reference;
              local_2c8.Texture.Reference = (FRHITexture *)0x0;
              *(undefined8 *)(pFVar9 + lVar21 + 0x10) = 0;
              *(IPooledRenderTarget **)(pFVar9 + lVar21 + 0x10) =
                   local_2c8.ExportedTexture.Reference;
              local_2c8.ExportedTexture.Reference = (IPooledRenderTarget *)0x0;
              *(TIntPoint<int>_u_0 *)(pFVar9 + lVar21 + 0x18) = local_2c8.Size.field0_0x0;
              pFVar9[lVar21 + 0x20] = (FScriptContainerElement)local_2c8.Dimension;
              pFVar9[lVar21 + 0x21] = (FScriptContainerElement)local_2c8.bPointSample;
              *(double *)(pFVar9 + lVar21 + 0x30) = local_2c8.Transform.Rotation.XY.m128d_f64[0];
              *(double *)(pFVar9 + lVar21 + 0x30 + 8) = local_2c8.Transform.Rotation.XY.m128d_f64[1]
              ;
              *(double *)(pFVar9 + lVar21 + 0x40) = local_2c8.Transform.Rotation.ZW.m128d_f64[0];
              *(double *)(pFVar9 + lVar21 + 0x40 + 8) = local_2c8.Transform.Rotation.ZW.m128d_f64[1]
              ;
              *(double *)(pFVar9 + lVar21 + 0x50) = local_2c8.Transform.Translation.XY.m128d_f64[0];
              *(double *)(pFVar9 + lVar21 + 0x50 + 8) =
                   local_2c8.Transform.Translation.XY.m128d_f64[1];
              *(double *)(pFVar9 + lVar21 + 0x60) = local_2c8.Transform.Translation.ZW.m128d_f64[0];
              *(double *)(pFVar9 + lVar21 + 0x60 + 8) =
                   local_2c8.Transform.Translation.ZW.m128d_f64[1];
              *(double *)(pFVar9 + lVar21 + 0x70) = local_2c8.Transform.Scale3D.XY.m128d_f64[0];
              *(double *)(pFVar9 + lVar21 + 0x70 + 8) = local_2c8.Transform.Scale3D.XY.m128d_f64[1];
              *(double *)(pFVar9 + lVar21 + 0x80) = local_2c8.Transform.Scale3D.ZW.m128d_f64[0];
              *(double *)(pFVar9 + lVar21 + 0x80 + 8) = local_2c8.Transform.Scale3D.ZW.m128d_f64[1];
              *(double *)(pFVar9 + lVar21 + 0x90) = local_2c8.TextureBounds.Min.field0_0x0._s_0.X;
              *(double *)(pFVar9 + lVar21 + 0x90 + 8) =
                   local_2c8.TextureBounds.Min.field0_0x0._s_0.Y;
              *(double *)(pFVar9 + lVar21 + 0xa0) = local_2c8.TextureBounds.Min.field0_0x0._s_0.Z;
              *(double *)(pFVar9 + lVar21 + 0xa0 + 8) =
                   local_2c8.TextureBounds.Max.field0_0x0._s_0.X;
              *(double *)(pFVar9 + lVar21 + 0xb0) = local_2c8.TextureBounds.Max.field0_0x0._s_0.Y;
              *(double *)(pFVar9 + lVar21 + 0xb0 + 8) =
                   local_2c8.TextureBounds.Max.field0_0x0._s_0.Z;
              *(undefined8 *)(pFVar9 + lVar21 + 0xc0) = local_2c8.TextureBounds._48_8_;
              goto LAB_1497491e4;
            }
            if (2 < (byte)LogPCG._0_1_) {
              local_320 = *(FName *)((longlong)&this->_padding_ + 4);
              ::FName::ToString(&local_320,&local_310);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_310.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
LAB_1497491e4:
            iVar18 = (this->TextureInfos).ArrayNum;
            piVar2 = &(this->TextureInfos).ArrayMax;
            if (iVar18 == *piVar2) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&(this->TextureInfos).AllocatorInstance,piVar2);
            }
            (this->TextureInfos).ArrayNum = iVar18 + 1;
            pFVar9 = (this->TextureInfos).AllocatorInstance.Data;
            *(int *)(pFVar9 + (longlong)iVar18 * 8) = iVar17;
            *(undefined4 *)(pFVar9 + (longlong)iVar18 * 8 + 4) = 0;
          }
          if (local_2c8.ExportedTexture.Reference != (IPooledRenderTarget *)0x0) {
            (**(code **)((local_2c8.ExportedTexture.Reference)->_padding_ + 0x38))();
          }
          if (local_2c8.Texture.Reference != (FRHITexture *)0x0) {
            FRHIResource::Release((FRHIResource *)local_2c8.Texture.Reference);
          }
          lVar24 = lVar24 + 0x68;
        } while (lVar24 != lVar23);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_318)
      ;
      goto LAB_149749320;
    }
  }
  bVar15 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4301770094700134745>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                      ,0x159,"Context");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_149749320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  return;
}

// GetPrivateStaticClass @ 14975cdc0

UClass * __cdecl UPCGTextureDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureDataProvider",
               &Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGTextureDataProvider,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGTextureDataProvider>,
               InternalVTableHelperCtorCaller<UPCGTextureDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975f2c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UPCGTextureDataProvider::GetRenderProxy(UPCGTextureDataProvider *this)

{
  FPCGTextureDataProviderProxy *pFVar1;
  FWeakObjectPtr local_res10;
  UPCGTextureDataProvider *local_res18 [2];
  
  pFVar1 = ::operator_new(0xf8);
  if (pFVar1 != (FPCGTextureDataProviderProxy *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UPCGTextureDataProvider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UPCGTextureDataProvider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    pFVar1 = FPCGTextureDataProviderProxy::FPCGTextureDataProviderProxy
                       (pFVar1,(TWeakObjectPtr<UPCGTextureDataProvider,FWeakObjectPtr>)local_res10);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// Initialize @ 14976a170

void __thiscall
UPCGTextureDataProvider::Initialize
          (UPCGTextureDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UPCGExportableDataProvider::Initialize
            ((UPCGExportableDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGTextureDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGTextureDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    this->bInitializeFromDataCollection = (bool)param_1[3].field_0x20;
    return;
  }
  pFVar3 = GetTypeName<UPCGTextureDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// PrepareForExecute_GameThread @ 149773a90

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
UPCGTextureDataProvider::PrepareForExecute_GameThread
          (UPCGTextureDataProvider *this,UPCGDataBinding *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar5;
  bool bVar6;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_18;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId274,"UPCGTextureDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
               ,0x112);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId274);
  }
  if (param_1 == (UPCGDataBinding *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                       ,0x114,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGComputeDataInterface.cpp"
                       ,0xd1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = &this->_padding_;
  if (*plVar1 == 0) {
    pTVar5 = UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_18,(int)this->_padding_);
    if ((TSharedPtr<FPCGDataCollectionDesc_const_,1> *)plVar1 != pTVar5) {
      *plVar1 = (longlong)pTVar5->Object;
      pTVar5->Object = (FPCGDataCollectionDesc *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar5->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (this->bInitializeFromDataCollection == false) {
    BuildInfosFromDataDescription(this,param_1);
  }
  else {
    BuildInfosFromDataCollection(this,param_1);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Reset @ 149775430

void __thiscall UPCGTextureDataProvider::Reset(UPCGTextureDataProvider *this)

{
  int *piVar1;
  
  UPCGExportableDataProvider::Reset((UPCGExportableDataProvider *)this);
  DestructItems<FPCGTextureBindingInfo,int>
            ((FPCGTextureBindingInfo *)(this->BindingInfos).AllocatorInstance.Data,
             (this->BindingInfos).ArrayNum);
  piVar1 = &(this->BindingInfos).ArrayMax;
  (this->BindingInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,0,&(this->BindingInfos).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TextureInfos).ArrayMax;
  (this->TextureInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->TextureInfos).AllocatorInstance,0,piVar1);
  }
  this->bInitializeFromDataCollection = false;
  return;
}

// StaticRegisterNativesUPCGTextureDataProvider @ 1497788e0

void __cdecl UPCGTextureDataProvider::StaticRegisterNativesUPCGTextureDataProvider(void)

{
  return;
}

