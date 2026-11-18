// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// ~FLandscapeVertexFactory @ 145f27b30

void __thiscall FLandscapeVertexFactory::~FLandscapeVertexFactory(FLandscapeVertexFactory *this)

{
  this->_padding_ = (longlong)&___7FLandscapeVertexFactory__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  return;
}

// ReleaseResource @ 145f32680

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FLandscapeVertexFactory::ReleaseResource(FLandscapeVertexFactory *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderResourceList *this_00;
  
  if ((!GIsCriticalError) && ((int)this->_padding_ != -1)) {
    if (GRHIGlobals.IsRHIInitialized) {
      (**(code **)(this->_padding_ + 0x10))();
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      this_00 = FRenderResourceList::Get<0>();
    }
    else {
      this_00 = FRenderResourceList::Get<1>();
    }
    uVar2 = (uint)this->_padding_;
    UE::FRecursiveMutex::Lock(&this_00->Mutex);
    iVar5 = (this_00->FreeIndexList).ArrayNum;
    piVar1 = &(this_00->FreeIndexList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->FreeIndexList).AllocatorInstance,piVar1);
    }
    (this_00->FreeIndexList).ArrayNum = iVar5 + 1;
    *(uint *)((this_00->FreeIndexList).AllocatorInstance.Data + (longlong)iVar5 * 4) = uVar2;
    uVar6 = 0;
    if ((int)uVar2 < (this_00->ResourceList).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined8 *)((this_00->ResourceList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = 0;
    UE::FRecursiveMutex::Unlock(&this_00->Mutex);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  return;
}

// FLandscapeVertexFactory @ 145f7b260

FLandscapeVertexFactory * __thiscall
FLandscapeVertexFactory::FLandscapeVertexFactory(FLandscapeVertexFactory *this,Type param_1)

{
  FRenderResource::FRenderResource((FRenderResource *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x1ffffff;
  this->_padding_ = (longlong)&___7FLandscapeVertexFactory__6B_;
  (this->Data).PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  (this->Data).PositionComponent.StreamOffset = 0;
  (this->Data).PositionComponent.Offset = '\0';
  (this->Data).PositionComponent.Stride = '\0';
  (this->Data).PositionComponent.Type = '\0';
  (this->Data).PositionComponent.VertexStreamUsage = Default;
  return this;
}

// Copy @ 145f86b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeVertexFactory::Copy(FLandscapeVertexFactory *this,FLandscapeVertexFactory *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FLandscapeVertexFactory *pFStack_70;
  FDataType *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLandscapeVertexFactory *pFStack_40;
  FDataType *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLandscapeVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  local_68 = &param_1->Data;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLandscapeVertexFactory::Copy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLandscapeVertexFactory::Copy_::__l2::TSTR_FLandscapeVertexFactoryCopyData3760>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FLandscapeVertexFactory::Copy'::__l2::TSTR_FLandscapeVertexFactoryCopyData3760>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  BeginUpdateResourceRHI((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  return;
}

// GetPSOPrecacheVertexFetchElements @ 145f93470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FLandscapeVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_18 [10];
  uchar auStack_e [6];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[2] = '\x06';
  local_18[3] = '\0';
  local_18[4] = '\x04';
  local_18[5] = '\0';
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_18) &&
     (local_18 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar3].Pad =
       CONCAT26(local_18._6_2_,CONCAT42(local_18._2_4_,local_18._0_2_));
  bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if ((bVar2) && (1 < (int)GMaxRHIFeatureLevel)) {
    local_18[8] = '\x01';
    local_18[9] = '\0';
    auStack_e[4] = '\x01';
    auStack_e[5] = '\0';
    builtin_memcpy(auStack_e,"\x14\x01\x04",4);
    if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_18 + 8)) &&
       (local_18 + 8 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = param_2->ArrayNum;
    if (iVar3 == param_2->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar3 + 1;
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar3].Pad =
         CONCAT26(auStack_e._4_2_,CONCAT42(auStack_e._0_4_,local_18._8_2_));
  }
  return;
}

// GetType @ 145f95b50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall FLandscapeVertexFactory::GetType(FLandscapeVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 145f97800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeVertexFactory::InitRHI(FLandscapeVertexFactory *this,FRHICommandListBase *param_1)

{
  EVertexStreamUsage EVar1;
  uchar uVar2;
  uchar uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined1 local_d8 [16];
  uint local_c8;
  ushort local_c4;
  EVertexStreamUsage local_c2;
  uchar local_c1;
  TArray<FVertexElement,TFixedAllocator<17>_> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d8._8_8_ = (this->Data).PositionComponent.VertexBuffer;
  EVar1 = (this->Data).PositionComponent.VertexStreamUsage;
  uVar2 = (this->Data).PositionComponent.Type.Value;
  uVar3 = (this->Data).PositionComponent.Offset;
  local_c4 = (ushort)(this->Data).PositionComponent.Stride;
  local_c8 = (this->Data).PositionComponent.StreamOffset;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0x11;
  local_c1 = '\0';
  local_c2 = EVar1;
  iVar6 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)&this->_padding_,(FVertexStream *)(local_d8 + 8));
  local_d8[0] = (uchar)iVar6;
  local_d8._4_2_ = local_c4;
  local_d8._6_2_ = ZEXT12(EVar1 & Instancing);
  local_d8[3] = '\0';
  local_d8[1] = uVar3;
  local_d8[2] = uVar2;
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_d8) &&
     (local_d8 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    local_b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  lVar7 = (longlong)local_b8.ArrayNum;
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(ulonglong *)local_b8.AllocatorInstance.InlineData[lVar7].Pad =
       CONCAT26(local_d8._6_2_,
                CONCAT24(local_d8._4_2_,
                         CONCAT13(local_d8[3],
                                  CONCAT12(local_d8[2],CONCAT11(local_d8[1],local_d8[0])))));
  FVertexFactory::AddPrimitiveIdStreamElement((FVertexFactory *)this,Default,&local_b8,'\x01',0xff);
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_b8,Default);
  return;
}

// ModifyCompilationEnvironment @ 145f99b60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FLandscapeVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  FGenericStaticFeatureLevel FVar2;
  code *pcVar3;
  bool bVar4;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2.FeatureLevel = FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
  bVar4 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,FVar2);
  if ((bVar4) && (1 < (int)FVar2.FeatureLevel)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream) == None) || (!bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar4);
  FShaderCompilerEnvironment::SetDefine(param_2,L"RAY_TRACING_DYNAMIC_MESH_IN_LOCAL_SPACE",L"1");
  return;
}

// ShouldCompilePermutation @ 145fa2f60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLandscapeVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  return ((param_1->MaterialParameters)._padding_ & 0x80000002) != 0;
}

