// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// Copy @ 145f2b790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeTileVertexFactory::Copy
          (FLandscapeTileVertexFactory *this,FLandscapeTileVertexFactory *param_1)

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
  FLandscapeTileVertexFactory *pFStack_70;
  FDataType *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLandscapeTileVertexFactory *pFStack_40;
  FDataType *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLandscapeTileVertexFactory::Copy'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_68 = &param_1->Data;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLandscapeTileVertexFactory::Copy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLandscapeTileVertexFactory::Copy_::__l2::TSTR_FLandscapeTileVertexFactoryCopyData102>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FLandscapeTileVertexFactory::Copy'::__l2::TSTR_FLandscapeTileVertexFactoryCopyData102>
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

// GetPSOPrecacheVertexFetchElements @ 145f2eab0

void __cdecl
FLandscapeTileVertexFactory::GetPSOPrecacheVertexFetchElements
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
  local_18[8] = '\x01';
  local_18[9] = '\0';
  param_2->ArrayNum = iVar3 + 1;
  builtin_memcpy(auStack_e,"\x06\x01\x04",4);
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar3].Pad =
       CONCAT26(local_18._6_2_,CONCAT42(local_18._2_4_,local_18._0_2_));
  auStack_e[4] = '\x01';
  auStack_e[5] = '\0';
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
  return;
}

// GetType @ 145f2f5b0

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

FVertexFactoryType * __thiscall
FLandscapeTileVertexFactory::GetType(FLandscapeTileVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 145f30c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeTileVertexFactory::InitRHI(FLandscapeTileVertexFactory *this,FRHICommandListBase *param_1)

{
  EVertexStreamUsage EVar1;
  uchar uVar2;
  uchar uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TArray<FVertexElement,TFixedAllocator<17>_> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [9];
  uchar uStack_df;
  uchar uStack_de;
  uchar uStack_dd;
  ushort uStack_dc;
  ushort uStack_da;
  FVertexStream local_d8;
  FVertexStream local_c8;
  TArray<FVertexElement,TFixedAllocator<17>_> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d8.VertexBuffer = (FVertexBuffer *)(this->Data)._padding_;
  EVar1 = *(EVertexStreamUsage *)((longlong)&(this->Data)._padding_ + 7);
  uVar2 = *(uchar *)((longlong)&(this->Data)._padding_ + 6);
  uVar3 = *(uchar *)((longlong)&(this->Data)._padding_ + 4);
  local_d8.Stride = (ushort)*(byte *)((longlong)&(this->Data)._padding_ + 5);
  local_d8.Offset = (uint)(this->Data)._padding_;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0x11;
  local_d8.Padding = '\0';
  local_d8.VertexStreamUsage = EVar1;
  iVar6 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)&this->_padding_,&local_d8);
  local_e8[0] = (uchar)iVar6;
  local_e8._4_2_ = local_d8.Stride;
  local_e8._6_2_ = ZEXT12(EVar1 & Instancing);
  local_e8[3] = '\0';
  local_e8[1] = uVar3;
  local_e8[2] = uVar2;
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_e8) &&
     (local_e8 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    local_100 = (longlong)local_b8.ArrayNum;
    local_f8 = 8;
    local_110 = &local_b8;
    local_118 = local_e8;
    local_108 = (longlong)local_b8.ArrayMax;
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
  EVar1 = (this->Data).TileDataComponent.VertexStreamUsage;
  uVar2 = (this->Data).TileDataComponent.Type.Value;
  uVar3 = (this->Data).TileDataComponent.Offset;
  lVar7 = (longlong)local_b8.ArrayNum;
  local_c8.Padding = '\0';
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(ulonglong *)local_b8.AllocatorInstance.InlineData[lVar7].Pad =
       CONCAT26(local_e8._6_2_,
                CONCAT24(local_e8._4_2_,
                         CONCAT13(local_e8[3],
                                  CONCAT12(local_e8[2],CONCAT11(local_e8[1],local_e8[0])))));
  local_c8.VertexBuffer = (this->Data).TileDataComponent.VertexBuffer;
  local_c8.Stride = (ushort)(this->Data).TileDataComponent.Stride;
  local_c8.Offset = (this->Data).TileDataComponent.StreamOffset;
  local_c8.VertexStreamUsage = EVar1;
  iVar6 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)&this->_padding_,&local_c8);
  local_e8[8] = (uchar)iVar6;
  uStack_dc = local_c8.Stride;
  uStack_da = (ushort)(EVar1 & Instancing);
  uStack_dd = '\x01';
  uStack_df = uVar3;
  uStack_de = uVar2;
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_e8 + 8)) &&
     (local_e8 + 8 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    local_100 = (longlong)local_b8.ArrayNum;
    local_f8 = 8;
    local_110 = &local_b8;
    local_118 = local_e8 + 8;
    local_108 = (longlong)local_b8.ArrayMax;
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
       CONCAT26(uStack_da,
                CONCAT24(uStack_dc,
                         CONCAT13(uStack_dd,CONCAT12(uStack_de,CONCAT11(uStack_df,local_e8[8])))));
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_b8,Default);
  return;
}

// ModifyCompilationEnvironment @ 145f315c0

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
FLandscapeTileVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FLandscapeVertexFactory::ModifyCompilationEnvironment(param_1,param_2);
  FShaderCompilerEnvironment::SetDefine(param_2,L"LANDSCAPE_TILE",L"1");
  return;
}

// ShouldCompilePermutation @ 145f335c0

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
FLandscapeTileVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&LandscapeSupportCullingIniValue.CVarName,L"landscape.SupportGPUCulling");
      LandscapeSupportCullingIniValue.CVar = (IConsoleVariable *)0x0;
      atexit(`FLandscapeTileVertexFactory::ShouldCompilePermutation'::__l2::
             _dynamic_atexit_destructor_for__LandscapeSupportCullingIniValue__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = FLandscapeVertexFactory::ShouldCompilePermutation(param_1);
  if (bVar1) {
    iVar2 = FShaderPlatformCachedIniValue<int>::Get
                      (&LandscapeSupportCullingIniValue,param_1->Platform);
    if (iVar2 != 0) {
      return true;
    }
  }
  return false;
}

