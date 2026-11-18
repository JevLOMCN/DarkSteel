// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// operator() @ 147ccbe10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FInstancedStaticMeshVertexFactory::Copy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FStaticMeshDataType *pFVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  pFVar1 = *(FStaticMeshDataType **)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  FStaticMeshDataType::operator=((FStaticMeshDataType *)(lVar2 + 0x140),pFVar1);
  uVar4 = *(undefined8 *)&pFVar1[1].PositionComponent.StreamOffset;
  *(FVertexBuffer **)(lVar2 + 0x200) = pFVar1[1].PositionComponent.VertexBuffer;
  *(undefined8 *)(lVar2 + 0x208) = uVar4;
  *(FVertexBuffer **)(lVar2 + 0x210) = pFVar1[1].TangentBasisComponents[0].VertexBuffer;
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  lVar2 = *(longlong *)this;
  uVar4 = puVar3[1];
  *(undefined8 *)(lVar2 + 0x230) = *puVar3;
  *(undefined8 *)(lVar2 + 0x238) = uVar4;
  uVar4 = puVar3[3];
  *(undefined8 *)(lVar2 + 0x240) = puVar3[2];
  *(undefined8 *)(lVar2 + 0x248) = uVar4;
  uVar4 = puVar3[5];
  *(undefined8 *)(lVar2 + 0x250) = puVar3[4];
  *(undefined8 *)(lVar2 + 600) = uVar4;
  uVar4 = puVar3[7];
  *(undefined8 *)(lVar2 + 0x260) = puVar3[6];
  *(undefined8 *)(lVar2 + 0x268) = uVar4;
  uVar4 = puVar3[9];
  *(undefined8 *)(lVar2 + 0x270) = puVar3[8];
  *(undefined8 *)(lVar2 + 0x278) = uVar4;
  uVar4 = puVar3[0xb];
  *(undefined8 *)(lVar2 + 0x280) = puVar3[10];
  *(undefined8 *)(lVar2 + 0x288) = uVar4;
  uVar4 = puVar3[0xd];
  *(undefined8 *)(lVar2 + 0x290) = puVar3[0xc];
  *(undefined8 *)(lVar2 + 0x298) = uVar4;
  *(undefined8 *)(lVar2 + 0x2a0) = puVar3[0xe];
  return;
}

// Copy @ 147ce68f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstancedStaticMeshVertexFactory::Copy
          (FInstancedStaticMeshVertexFactory *this,FInstancedStaticMeshVertexFactory *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FInstancedStaticMeshVertexFactory::Copy'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_60[1] = (code *)this;
  local_60[2] = (code *)&param_1->_padding_;
  local_60[3] = (code *)&param_1->InstanceData;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstancedStaticMeshVertexFactory::Copy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FInstancedStaticMeshVertexFactory::Copy_::__l2::TSTR_FInstancedStaticMeshVertexFactoryCopyData751>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FInstancedStaticMeshVertexFactory::Copy'::__l2::TSTR_FInstancedStaticMeshVertexFactoryCopyData751>
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
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  BeginUpdateResourceRHI((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  return;
}

// GetPSOPrecacheVertexFetchElements @ 147d0b9f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FInstancedStaticMeshVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [10];
  uchar auStack_3e [6];
  undefined1 auStack_38 [10];
  uchar auStack_2e [6];
  uchar uStack_28;
  uchar uStack_27;
  uchar uStack_26;
  uchar uStack_25;
  uchar uStack_24;
  uchar uStack_23;
  uchar uStack_22;
  uchar uStack_21;
  
  auStack_48[0] = '\0';
  auStack_48[1] = '\0';
  auStack_48[2] = '\x03';
  auStack_48[3] = '\0';
  auStack_48[4] = '\f';
  auStack_48[5] = '\0';
  auStack_48[6] = '\0';
  auStack_48[7] = '\0';
  if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)auStack_48) &&
      (auStack_48 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_48._6_2_,CONCAT42(auStack_48._2_4_,auStack_48._0_2_));
  if (param_1 == PositionAndNormalOnly) {
    auStack_48[8] = '\x01';
    auStack_48[9] = '\x04';
    builtin_memcpy(auStack_3e,"\x05\x02\b",4);
    auStack_3e[4] = '\0';
    auStack_3e[5] = '\0';
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(auStack_48 + 8)) &&
        (auStack_48 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
         CONCAT26(auStack_3e._4_2_,CONCAT42(auStack_3e._0_4_,auStack_48._8_2_));
  }
  bVar3 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if ((bVar3) &&
     (bVar3 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform),
     !bVar3)) {
    if (param_1 == Default) {
      uStack_28 = '\x01';
      uStack_27 = '\0';
      uStack_22 = '\x01';
      uStack_21 = '\0';
      uStack_26 = '\x14';
      uStack_25 = '\r';
      uStack_24 = '\x04';
      uStack_23 = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)&stack0xffffffffffffffd8) &&
          (&stack0xffffffffffffffd8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(_uStack_22,CONCAT42(_uStack_26,_uStack_28));
    }
    else if (param_1 == PositionOnly) {
      auStack_38[8] = '\x01';
      auStack_38[9] = '\0';
      auStack_2e[4] = '\x01';
      auStack_2e[5] = '\0';
      builtin_memcpy(auStack_2e,"\x14\x01\x04",4);
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(auStack_38 + 8)) &&
          (auStack_38 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(auStack_2e._4_2_,CONCAT42(auStack_2e._0_4_,auStack_38._8_2_));
    }
    else {
      if (param_1 != PositionAndNormalOnly) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                           ,0x174,L"");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      auStack_38[0] = '\x02';
      auStack_38[1] = '\0';
      auStack_38[6] = '\x01';
      auStack_38[7] = '\0';
      auStack_38[2] = '\x14';
      auStack_38[3] = '\x01';
      auStack_38[4] = '\x04';
      auStack_38[5] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)auStack_38) &&
          (auStack_38 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(auStack_38._6_2_,CONCAT42(auStack_38._2_4_,auStack_38._0_2_));
    }
    *(undefined8 *)(param_2->AllocatorInstance).InlineData[lVar6].Pad = uVar5;
  }
  return;
}

// GetType @ 147d0fab0

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
FInstancedStaticMeshVertexFactory::GetType(FInstancedStaticMeshVertexFactory *this)

{
  return &StaticType;
}

// GetVertexElements @ 147d12250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FInstancedStaticMeshVertexFactory::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,bool param_3,FDataType *param_4,
          FInstancedStaticMeshDataType *param_5,TArray<FVertexElement,TFixedAllocator<17>_> *param_6
          ,TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_7)

{
  EVertexStreamUsage EVar1;
  uchar uVar2;
  uchar uVar3;
  FVertexBuffer *pFVar4;
  code *pcVar5;
  TTypeCompatibleBytes<FVertexElement> TVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  undefined1 local_198 [9];
  uchar uStack_18f;
  uchar uStack_18e;
  uchar uStack_18d;
  ushort uStack_18c;
  ushort uStack_18a;
  undefined1 local_188 [9];
  uchar auStack_17f [3];
  ushort uStack_17c;
  uchar auStack_17a [2];
  undefined1 local_178 [9];
  uchar uStack_16f;
  uchar uStack_16e;
  uchar uStack_16d;
  ushort uStack_16c;
  ushort uStack_16a;
  undefined1 local_168 [9];
  uchar uStack_15f;
  uchar uStack_15e;
  uchar uStack_15d;
  ushort uStack_15c;
  ushort uStack_15a;
  undefined1 local_158 [9];
  uchar uStack_14f;
  uchar uStack_14e;
  uchar uStack_14d;
  ushort uStack_14c;
  ushort uStack_14a;
  undefined1 local_148 [9];
  uchar uStack_13f;
  uchar uStack_13e;
  uchar uStack_13d;
  ushort uStack_13c;
  ushort uStack_13a;
  undefined1 local_138 [9];
  uchar uStack_12f;
  uchar uStack_12e;
  uchar uStack_12d;
  ushort uStack_12c;
  ushort uStack_12a;
  FVertexStream local_128;
  TTypeCompatibleBytes<FVertexElement> local_118;
  TTypeCompatibleBytes<FVertexElement> local_110;
  FVertexStream local_108;
  FVertexStream local_f8;
  FVertexStream local_e8;
  FVertexStream local_d8;
  FVertexStream local_c8;
  FVertexStream local_b8;
  FVertexStream local_a8;
  FVertexStream local_98;
  FVertexStream local_88;
  FVertexStream local_78;
  FVertexStream local_68;
  FVertexStream local_58;
  FVertexStream local_48;
  
  if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
    EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
    uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
    uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
    local_108.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
    local_108.Offset = (uint)param_4->_padding_;
    local_108.Padding = '\0';
    local_108.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
    local_108.VertexStreamUsage = EVar1;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_108);
    local_198[8] = (uchar)iVar9;
    uStack_18c = local_108.Stride;
    uStack_18a = (ushort)(EVar1 & Instancing);
    uStack_18d = '\0';
    uStack_18f = uVar3;
    uStack_18e = uVar2;
    if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_198 + 8)) &&
        (local_198 + 8 < (param_6->AllocatorInstance).InlineData + param_6->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_6->ArrayNum;
    if (iVar9 == param_6->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    param_6->ArrayNum = iVar9 + 1;
    *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(uStack_18a,
                  CONCAT24(uStack_18c,
                           CONCAT13(uStack_18d,
                                    CONCAT12(uStack_18e,CONCAT11(uStack_18f,local_198[8])))));
  }
  piVar16 = &param_6->ArrayMax;
  if (!param_3) {
    if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
      EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      local_128.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_128.Offset = (uint)param_4->_padding_;
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_128.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
      local_128.VertexStreamUsage = EVar1;
      local_128.Padding = param_3;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_128);
      local_198[0] = (uchar)iVar9;
      local_198._4_2_ = local_128.Stride;
      local_198._6_2_ = ZEXT12(EVar1 & Instancing);
      local_198[3] = '\x01';
      local_198[1] = uVar3;
      local_198[2] = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_198) &&
          (local_198 < (param_6->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_6->ArrayNum;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,piVar16);
      }
      param_6->ArrayNum = iVar9 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(local_198._6_2_,
                    CONCAT24(local_198._4_2_,
                             CONCAT13(local_198[3],
                                      CONCAT12(local_198[2],CONCAT11(local_198[1],local_198[0])))));
    }
    piVar16 = &param_6->ArrayNum;
    piVar17 = &param_6->ArrayMax;
    if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
      EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      local_128.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_128.Offset = (uint)param_4->_padding_;
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_128.Padding = '\0';
      local_128.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
      local_128.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_128);
      local_198[0] = (uchar)iVar9;
      local_198._4_2_ = local_128.Stride;
      local_198._6_2_ = ZEXT12(EVar1 & Instancing);
      local_198[3] = '\x02';
      local_198[1] = uVar3;
      local_198[2] = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_198) &&
          (local_198 < (param_6->AllocatorInstance).InlineData + *piVar17)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar16;
      if (iVar9 == *piVar17) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,piVar17);
      }
      *piVar16 = iVar9 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(local_198._6_2_,
                    CONCAT24(local_198._4_2_,
                             CONCAT13(local_198[3],
                                      CONCAT12(local_198[2],CONCAT11(local_198[1],local_198[0])))));
    }
    if (param_4->_padding_ == 0) {
      param_4->_padding_ = GNullColorVertexBuffer._40_8_;
      *(undefined4 *)&param_4->_padding_ = 0;
    }
    if ((uchar  [8])param_4->_padding_ == (uchar  [8])0x0) {
      local_e8.Stride = 0;
      local_e8.VertexStreamUsage = ManualFetch;
      local_e8.Padding = '\0';
      local_e8.VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
      local_e8.Offset = 0;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_e8);
      local_188[8] = (uchar)iVar9;
      uStack_17c = local_e8.Stride;
      auStack_17f[0] = '\0';
      auStack_17f[1] = '\b';
      auStack_17f[2] = '\x03';
      auStack_17a[0] = '\0';
      auStack_17a[1] = '\0';
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_188 + 8)) &&
          (local_188 + 8 < (param_6->AllocatorInstance).InlineData + param_6->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar16;
      if (iVar9 == param_6->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,&param_6->ArrayMax);
        *piVar16 = iVar9;
      }
      *piVar16 = iVar9 + 1;
      uVar11 = CONCAT26(auStack_17a,
                        CONCAT24(uStack_17c,
                                 CONCAT13(auStack_17f[2],CONCAT21(auStack_17f._0_2_,local_188[8]))))
      ;
    }
    else {
      EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
      local_f8.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_f8.Offset = (uint)param_4->_padding_;
      local_f8.Padding = '\0';
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_f8.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
      local_f8.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_f8);
      local_188[0] = (uchar)iVar9;
      local_188._4_2_ = local_f8.Stride;
      local_188._6_2_ = ZEXT12(EVar1 & Instancing);
      local_188[3] = '\x03';
      local_188[1] = uVar3;
      local_188[2] = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_188) &&
          (local_188 < (param_6->AllocatorInstance).InlineData + param_6->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar16;
      if (iVar9 == param_6->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,&param_6->ArrayMax);
        *piVar16 = iVar9;
      }
      *piVar16 = iVar9 + 1;
      uVar11 = CONCAT26(local_188._6_2_,
                        CONCAT24(local_188._4_2_,
                                 CONCAT13(local_188[3],
                                          CONCAT12(local_188[2],CONCAT11(local_188[1],local_188[0]))
                                         )));
    }
    piVar17 = &param_6->ArrayMax;
    local_118.Pad = (uchar  [8])&param_4->_padding_;
    *(undefined8 *)(param_6->AllocatorInstance).InlineData[iVar9].Pad = uVar11;
    iVar9 = (int)*(longlong *)local_118.Pad;
    if (iVar9 != 0) {
      uVar15 = 0;
      if (0 < iVar9) {
        local_110.Pad = (uchar  [8])&param_4->_padding_;
        do {
          TVar6.Pad = local_110.Pad;
          uVar14 = 0;
          if ((int)uVar15 < *(int *)((longlong)local_110.Pad + 0x40)) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar13 = (longlong *)((longlong)TVar6.Pad + (longlong)(int)uVar15 * 0x10);
          local_d8.Padding = '\0';
          local_d8.VertexBuffer = (FVertexBuffer *)*plVar13;
          EVar1 = *(EVertexStreamUsage *)((longlong)plVar13 + 0xf);
          uVar2 = *(uchar *)((longlong)plVar13 + 0xe);
          local_d8.Stride = (ushort)*(byte *)((longlong)plVar13 + 0xd);
          local_d8.Offset = (uint)plVar13[1];
          uVar3 = *(uchar *)((longlong)plVar13 + 0xc);
          local_d8.VertexStreamUsage = EVar1;
          iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_d8);
          local_178[0] = (uchar)iVar9;
          local_178[3] = (char)uVar15 + '\x04';
          local_178._4_2_ = local_d8.Stride;
          local_178._6_2_ = ZEXT12(EVar1 & Instancing);
          local_178[1] = uVar3;
          local_178[2] = uVar2;
          if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_178) &&
              (local_178 < (param_6->AllocatorInstance).InlineData + *piVar17)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = *piVar16;
          if (iVar9 == *piVar17) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                              (0x208,&param_6->AllocatorInstance,piVar17);
            *piVar16 = iVar9;
          }
          *piVar16 = iVar9 + 1;
          uVar15 = uVar15 + 1;
          *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
               CONCAT26(local_178._6_2_,
                        CONCAT24(local_178._4_2_,
                                 CONCAT13(local_178[3],
                                          CONCAT12(local_178[2],CONCAT11(local_178[1],local_178[0]))
                                         )));
          iVar9 = *(int *)local_118.Pad;
        } while ((int)uVar15 < iVar9);
      }
      local_110.Pad = (uchar  [8])&param_4->_padding_;
      piVar17 = &param_6->ArrayNum;
      piVar16 = &param_6->ArrayMax;
      for (; iVar9 < 4; iVar9 = iVar9 + 1) {
        uVar14 = *(int *)local_110.Pad - 1;
        uVar15 = 0;
        if ((int)uVar14 < *(int *)local_110.Pad) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar12 = (longlong)(int)uVar14;
        local_c8.Padding = '\0';
        EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + lVar12 * 0x10 + 7);
        local_c8.VertexBuffer = (FVertexBuffer *)(&param_4->_padding_)[lVar12 * 2];
        uVar2 = *(uchar *)((longlong)&param_4->_padding_ + lVar12 * 0x10 + 6);
        local_c8.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + lVar12 * 0x10 + 5);
        local_c8.Offset = (uint)(&param_4->_padding_)[lVar12 * 2];
        uVar3 = *(uchar *)((longlong)&param_4->_padding_ + lVar12 * 0x10 + 4);
        local_c8.VertexStreamUsage = EVar1;
        iVar10 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_c8);
        local_178[8] = (uchar)iVar10;
        uStack_16d = (char)iVar9 + '\x04';
        uStack_16c = local_c8.Stride;
        uStack_16a = (ushort)(EVar1 & Instancing);
        uStack_16f = uVar3;
        uStack_16e = uVar2;
        if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_178 + 8)) &&
            (local_178 + 8 < (param_6->AllocatorInstance).InlineData + *piVar16)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *piVar17;
        if (iVar10 == *piVar16) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                             (0x208,&param_6->AllocatorInstance,piVar16);
          *piVar17 = iVar10;
        }
        *piVar17 = iVar10 + 1;
        *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar10].Pad =
             CONCAT26(uStack_16a,
                      CONCAT24(uStack_16c,
                               CONCAT13(uStack_16d,
                                        CONCAT12(uStack_16e,CONCAT11(uStack_16f,local_178[8])))));
      }
    }
    piVar17 = &param_6->ArrayNum;
    piVar16 = &param_6->ArrayMax;
    bVar7 = IsGPUSkinPassThroughSupported(GMaxRHIShaderPlatform);
    if (bVar7) {
      local_b8.Offset = 0;
      local_b8.Stride = 0;
      local_b8.VertexStreamUsage = Default;
      local_b8.Padding = '\0';
      local_b8.VertexBuffer = (FVertexBuffer *)&GNullVertexBuffer;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_b8);
      local_168[0] = (uchar)iVar9;
      local_168._4_2_ = local_b8.Stride;
      local_168[6] = '\0';
      local_168[7] = '\0';
      local_168[1] = '\0';
      local_168[2] = '\x04';
      local_168[3] = '\x0e';
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_168) &&
          (local_168 < (param_6->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar17;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,piVar16);
      }
      *piVar17 = iVar9 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(local_168._6_2_,
                    CONCAT24(local_168._4_2_,
                             CONCAT13(local_168[3],CONCAT21(local_168._1_2_,local_168[0]))));
    }
    piVar16 = &param_6->ArrayMax;
    if ((FVertexBuffer *)param_4->_padding_ == (FVertexBuffer *)0x0) {
      iVar9 = (int)param_4->_padding_;
      if (iVar9 == 0) goto LAB_147d12edd;
      if ((iVar9 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_98.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
      EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      local_98.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_98.Offset = (uint)param_4->_padding_;
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_98.Padding = '\0';
      local_98.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_98);
      local_158[0] = (uchar)iVar9;
      local_158._4_2_ = local_98.Stride;
      local_158._6_2_ = ZEXT12(EVar1 & Instancing);
      local_158[3] = '\x0f';
      local_158[1] = uVar3;
      local_158[2] = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_158) &&
          (local_158 < (param_6->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar17;
      if (iVar9 == param_6->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,&param_6->ArrayMax);
        *piVar17 = iVar9;
      }
      *piVar17 = iVar9 + 1;
      uVar11 = CONCAT26(local_158._6_2_,
                        CONCAT24(local_158._4_2_,
                                 CONCAT13(local_158[3],
                                          CONCAT12(local_158[2],CONCAT11(local_158[1],local_158[0]))
                                         )));
    }
    else {
      EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      local_a8.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_a8.Offset = (uint)param_4->_padding_;
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_a8.Padding = '\0';
      local_a8.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
      local_a8.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_a8);
      local_168[8] = (uchar)iVar9;
      uStack_15c = local_a8.Stride;
      uStack_15a = (ushort)(EVar1 & Instancing);
      uStack_15d = '\x0f';
      uStack_15f = uVar3;
      uStack_15e = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_168 + 8)) &&
          (local_168 + 8 < (param_6->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar17;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,piVar16);
      }
      *piVar17 = iVar9 + 1;
      uVar11 = CONCAT26(uStack_15a,
                        CONCAT24(uStack_15c,
                                 CONCAT13(uStack_15d,
                                          CONCAT12(uStack_15e,CONCAT11(uStack_15f,local_168[8])))));
    }
    *(undefined8 *)(param_6->AllocatorInstance).InlineData[iVar9].Pad = uVar11;
  }
LAB_147d12edd:
  bVar7 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)param_1);
  if ((1 < (int)param_1) || (FReadOnlyCVARCache::bMobileSupportsGPUScene == false)) {
    if ((!bVar7) &&
       (((param_5->InstanceOriginComponent).VertexBuffer == (FVertexBuffer *)0x0 &&
        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("bCanUseGPUScene || InstanceData.InstanceOriginComponent.VertexBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                            ,900,L""), bVar8)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (param_5->InstanceOriginComponent).VertexBuffer;
    if (pFVar4 != (FVertexBuffer *)0x0) {
      EVar1 = (param_5->InstanceOriginComponent).VertexStreamUsage;
      uVar2 = (param_5->InstanceOriginComponent).Type.Value;
      uVar3 = (param_5->InstanceOriginComponent).Offset;
      local_88.Stride = (ushort)(param_5->InstanceOriginComponent).Stride;
      local_88.Offset = (param_5->InstanceOriginComponent).StreamOffset;
      local_88.Padding = '\0';
      local_88.VertexBuffer = pFVar4;
      local_88.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_88);
      local_158[8] = (uchar)iVar9;
      uStack_14c = local_88.Stride;
      uStack_14a = (ushort)(EVar1 & Instancing);
      uStack_14d = '\b';
      uStack_14f = uVar3;
      uStack_14e = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_158 + 8)) &&
          (local_158 + 8 < (param_6->AllocatorInstance).InlineData + param_6->ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_6->ArrayNum;
      if (iVar9 == param_6->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar9 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(uStack_14a,
                    CONCAT24(uStack_14c,
                             CONCAT13(uStack_14d,
                                      CONCAT12(uStack_14e,CONCAT11(uStack_14f,local_158[8])))));
    }
    if (((!bVar7) && (param_5->InstanceTransformComponent[0].VertexBuffer == (FVertexBuffer *)0x0))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("bCanUseGPUScene || InstanceData.InstanceTransformComponent[0].VertexBuffer"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                              ,0x38a,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = param_5->InstanceTransformComponent[0].VertexBuffer;
    if (pFVar4 != (FVertexBuffer *)0x0) {
      EVar1 = param_5->InstanceTransformComponent[0].VertexStreamUsage;
      uVar2 = param_5->InstanceTransformComponent[0].Type.Value;
      uVar3 = param_5->InstanceTransformComponent[0].Offset;
      local_78.Stride = (ushort)param_5->InstanceTransformComponent[0].Stride;
      local_78.Offset = param_5->InstanceTransformComponent[0].StreamOffset;
      local_78.Padding = '\0';
      local_78.VertexBuffer = pFVar4;
      local_78.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_78);
      local_148[0] = (uchar)iVar9;
      local_148._4_2_ = local_78.Stride;
      local_148._6_2_ = ZEXT12(EVar1 & Instancing);
      local_148[3] = '\t';
      local_148[1] = uVar3;
      local_148[2] = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_148) &&
          (local_148 < (param_6->AllocatorInstance).InlineData + param_6->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      piVar16 = &param_6->ArrayMax;
      iVar9 = param_6->ArrayNum;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,piVar16);
      }
      local_68.Padding = '\0';
      param_6->ArrayNum = iVar9 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(local_148._6_2_,
                    CONCAT24(local_148._4_2_,
                             CONCAT13(local_148[3],
                                      CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])))));
      local_68.VertexBuffer = param_5->InstanceTransformComponent[1].VertexBuffer;
      EVar1 = param_5->InstanceTransformComponent[1].VertexStreamUsage;
      uVar2 = param_5->InstanceTransformComponent[1].Type.Value;
      uVar3 = param_5->InstanceTransformComponent[1].Offset;
      local_68.Stride = (ushort)param_5->InstanceTransformComponent[1].Stride;
      local_68.Offset = param_5->InstanceTransformComponent[1].StreamOffset;
      local_68.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_68);
      local_148[8] = (uchar)iVar9;
      uStack_13c = local_68.Stride;
      uStack_13a = (ushort)(EVar1 & Instancing);
      piVar17 = &param_6->ArrayNum;
      uStack_13d = '\n';
      uStack_13f = uVar3;
      uStack_13e = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_148 + 8)) &&
          (local_148 + 8 < (param_6->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar17;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,piVar16);
        *piVar17 = iVar9;
      }
      local_58.Padding = '\0';
      *piVar17 = iVar9 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(uStack_13a,
                    CONCAT24(uStack_13c,
                             CONCAT13(uStack_13d,
                                      CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_148[8])))));
      local_58.VertexBuffer = param_5->InstanceTransformComponent[2].VertexBuffer;
      EVar1 = param_5->InstanceTransformComponent[2].VertexStreamUsage;
      uVar2 = param_5->InstanceTransformComponent[2].Type.Value;
      uVar3 = param_5->InstanceTransformComponent[2].Offset;
      local_58.Stride = (ushort)param_5->InstanceTransformComponent[2].Stride;
      local_58.Offset = param_5->InstanceTransformComponent[2].StreamOffset;
      local_58.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_58);
      local_138[0] = (uchar)iVar9;
      local_138._4_2_ = local_58.Stride;
      local_138._6_2_ = ZEXT12(EVar1 & Instancing);
      local_138[3] = '\v';
      local_138[1] = uVar3;
      local_138[2] = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_138) &&
          (local_138 < (param_6->AllocatorInstance).InlineData + param_6->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar17;
      if (iVar9 == param_6->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,piVar16);
        param_6->ArrayNum = iVar9;
      }
      param_6->ArrayNum = iVar9 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(local_138._6_2_,
                    CONCAT24(local_138._4_2_,
                             CONCAT13(local_138[3],
                                      CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0])))));
    }
    piVar16 = &param_6->ArrayMax;
    local_48.VertexBuffer = (param_5->InstanceLightmapAndShadowMapUVBiasComponent).VertexBuffer;
    if (local_48.VertexBuffer != (FVertexBuffer *)0x0) {
      EVar1 = (param_5->InstanceLightmapAndShadowMapUVBiasComponent).VertexStreamUsage;
      uVar2 = (param_5->InstanceLightmapAndShadowMapUVBiasComponent).Type.Value;
      uVar3 = (param_5->InstanceLightmapAndShadowMapUVBiasComponent).Offset;
      local_48.Stride = (ushort)(param_5->InstanceLightmapAndShadowMapUVBiasComponent).Stride;
      local_48.Offset = (param_5->InstanceLightmapAndShadowMapUVBiasComponent).StreamOffset;
      local_48.Padding = '\0';
      local_48.VertexStreamUsage = EVar1;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_7,&local_48);
      local_138[8] = (uchar)iVar9;
      uStack_12c = local_48.Stride;
      uStack_12a = (ushort)(EVar1 & Instancing);
      uStack_12d = '\f';
      uStack_12f = uVar3;
      uStack_12e = uVar2;
      if (((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_138 + 8)) &&
          (local_138 + 8 < (param_6->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_6->ArrayNum;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,piVar16);
      }
      param_6->ArrayNum = iVar9 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar9].Pad =
           CONCAT26(uStack_12a,
                    CONCAT24(uStack_12c,
                             CONCAT13(uStack_12d,
                                      CONCAT12(uStack_12e,CONCAT11(uStack_12f,local_138[8])))));
    }
  }
  return;
}

// GetVertexElements @ 147d13560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FInstancedStaticMeshVertexFactory::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,bool param_3,FDataType *param_4,
          FInstancedStaticMeshDataType *param_5,TArray<FVertexElement,TFixedAllocator<17>_> *param_6
          )

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [136];
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_14 = 8;
  GetVertexElements(param_1,param_2,param_3,param_4,param_5,param_6,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)(local_a8 + 8));
  bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if (bVar2) {
    bVar2 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (!bVar2) {
      local_a8[0] = (uchar)local_18;
      local_a8[1] = '\0';
      local_a8[2] = '\x14';
      local_a8[3] = '\r';
      local_a8[4] = '\x04';
      local_a8[5] = '\0';
      local_a8[6] = '\x01';
      local_a8[7] = '\0';
      if ((param_6 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8) &&
         (local_a8 < (param_6->AllocatorInstance).InlineData + param_6->ArrayMax)) {
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
      iVar3 = param_6->ArrayNum;
      if (iVar3 == param_6->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar3 + 1;
      *(ulonglong *)(param_6->AllocatorInstance).InlineData[iVar3].Pad =
           CONCAT44(local_a8._4_4_,CONCAT13(local_a8[3],CONCAT21(local_a8._1_2_,local_a8[0])));
    }
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// InitInstancedStaticMeshVertexFactoryComponents @ 147d16a50

void __cdecl
FInstancedStaticMeshVertexFactory::InitInstancedStaticMeshVertexFactoryComponents
          (FStaticMeshVertexBuffers *param_1,FColorVertexBuffer *param_2,
          FStaticMeshInstanceBuffer *param_3,FInstancedStaticMeshVertexFactory *param_4,int param_5,
          bool param_6,FDataType *param_7,FInstancedStaticMeshDataType *param_8)

{
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&param_1->PositionVertexBuffer,(FVertexFactory *)param_4,(FStaticMeshDataType *)param_7
            );
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&param_1->StaticMeshVertexBuffer,(FVertexFactory *)param_4,
             (FStaticMeshDataType *)param_7);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (&param_1->StaticMeshVertexBuffer,(FVertexFactory *)param_4,
             (FStaticMeshDataType *)param_7,-1);
  if ((param_5 < (int)(param_1->StaticMeshVertexBuffer).NumTexCoords) && (-1 < param_5)) {
    FStaticMeshVertexBuffer::BindLightMapVertexBuffer
              (&param_1->StaticMeshVertexBuffer,(FVertexFactory *)param_4,
               (FStaticMeshDataType *)param_7,param_5);
  }
  if (param_2 == (FColorVertexBuffer *)0x0) {
    FColorVertexBuffer::BindDefaultColorVertexBuffer
              ((FVertexFactory *)param_4,(FStaticMeshDataType *)param_7,
               param_6 ^ ZeroForDefaultBufferBind);
  }
  else {
    FColorVertexBuffer::BindColorVertexBuffer
              (param_2,(FVertexFactory *)param_4,(FStaticMeshDataType *)param_7);
  }
  if (param_3 != (FStaticMeshInstanceBuffer *)0x0) {
    FStaticMeshInstanceBuffer::BindInstanceVertexBuffer(param_3,(FVertexFactory *)param_4,param_8);
  }
  return;
}

// InitRHI @ 147d175a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshVertexFactory::InitRHI
          (FInstancedStaticMeshVertexFactory *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters> this_00;
  TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters> TVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FShaderParametersMetadata *pFVar8;
  TRefCountPtr<FRHIUniformBuffer> TVar9;
  FGenericStaticFeatureLevel FVar10;
  TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters> *pTVar11;
  bool bVar12;
  undefined1 auStackY_148 [32];
  FRHIResource *local_108;
  TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters> local_100;
  undefined1 local_f8 [184];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId762,"FInstancedStaticMeshVertexFactory::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x2fa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId762);
  }
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId764,"FInstancedStaticMeshVertexFactory_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x2fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId764);
  }
  if ((4 < *(byte *)((longlong)&this->_padding_ + 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasValidFeatureLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0x2fe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  FVar10.FeatureLevel = (uint)bVar1;
  if (bVar1 == 5) {
    FVar10.FeatureLevel = GMaxRHIFeatureLevel;
  }
  bVar5 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,FVar10);
  lVar7 = (**(code **)(this->_padding_ + 0x30))(this);
  if (((*(uint *)(lVar7 + 0x38) & 0x4000) == 0) ||
     (bVar6 = FVertexFactoryType::CheckManualVertexFetchSupport(FVar10.FeatureLevel), !bVar6)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  local_40 = 0;
  local_3c = 0x11;
  GetVertexElements(FVar10.FeatureLevel,Default,bVar6,(FDataType *)&this->_padding_,
                    &this->InstanceData,
                    (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_f8 + 0x30),
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)&this->_padding_);
  FVertexFactory::AddPrimitiveIdStreamElement
            ((FVertexFactory *)this,Default,
             (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_f8 + 0x30),'\r','\r');
  FVertexFactory::InitDeclaration
            ((FVertexFactory *)this,(TArray<FVertexElement,TFixedAllocator<17>_> *)(local_f8 + 0x30)
             ,Default);
  if (!bVar5) {
    local_f8._0_8_ = (this->InstanceData).InstanceOriginSRV;
    local_f8._8_8_ = (this->InstanceData).InstanceTransformSRV;
    local_f8._16_8_ = (this->InstanceData).InstanceLightmapSRV;
    local_f8._24_8_ = (this->InstanceData).InstanceCustomDataSRV;
    local_f8._32_4_ = (this->InstanceData).NumCustomDataFloats;
    pFVar8 = FInstancedStaticMeshVertexFactoryUniformShaderParameters::GetStructMetadata();
    if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar9 = RHICreateUniformBuffer
                      (&local_108,(FRHIUniformBufferLayout *)local_f8,
                       (EUniformBufferUsage)(pFVar8->Layout).Reference,2);
    this_00 = (TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters>)
              (TVar9.Reference)->_padding_;
    if (this_00 != (TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters>)0x0)
    {
      FRHIResource::AddRef((FRHIResource *)this_00);
      pFVar8 = FInstancedStaticMeshVertexFactoryUniformShaderParameters::GetStructMetadata();
      if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((FName)(pFVar8->Layout).Reference != *(FName *)((longlong)this_00 + 0x40)) {
        pFVar8 = FInstancedStaticMeshVertexFactoryUniformShaderParameters::GetStructMetadata();
        if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if (local_108 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_108);
    }
    pTVar11 = &this->UniformBuffer;
    if (pTVar11 != &local_100) {
      TVar2 = *pTVar11;
      *pTVar11 = this_00;
      this_00 = TVar2;
    }
    if (this_00 != (TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters>)0x0)
    {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ModifyCompilationEnvironment @ 147d1b180

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
FInstancedStaticMeshVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FName local_res8;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsManualVertexFetch != 0) {
    ::FName::FName(&local_res8,L"MANUAL_VERTEX_FETCH");
    bVar3 = FShaderCompilerEnvironment::ContainsDefinition(param_2,local_res8);
    if (!bVar3) {
      FShaderCompilerEnvironment::SetDefine(param_2,local_res8,L"1");
    }
  }
  bVar3 = UseGPUScene((FStaticShaderPlatform)param_1->Platform);
  pwVar4 = L"USE_INSTANCE_CULLING";
  if (!bVar3) {
    pwVar4 = L"USE_INSTANCING";
  }
  FShaderCompilerEnvironment::SetDefine(param_2,pwVar4,L"1");
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel < 3) {
    bVar3 = (bool)((byte)((ulonglong)(param_1->MaterialParameters)._padding_ >> 0x2b) & 1);
  }
  else {
    bVar3 = true;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_DITHERED_LOD_TRANSITION_FOR_INSTANCED",bVar3);
  FLocalVertexFactory::ModifyCompilationEnvironment(param_1,param_2);
  return;
}

// ShouldCompilePermutation @ 147d2d6d0

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
FInstancedStaticMeshVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if (((param_1->MaterialParameters)._padding_ & 0x100000000002U) != 0) {
    bVar1 = FLocalVertexFactory::ShouldCompilePermutation(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

