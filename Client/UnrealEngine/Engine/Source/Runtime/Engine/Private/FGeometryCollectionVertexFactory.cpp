// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// operator() @ 147c33730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FGeometryCollectionVertexFactory::InitRHI'::__l12::<lambda_1>::operator()
          (void *this,EVertexInputStreamType param_1,bool param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FVertexElement FVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_c8 [16];
  TArray<FVertexElement,TFixedAllocator<17>_> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0x11;
  FVar4 = FVertexFactory::AccessStreamComponent
                    (*(FVertexFactory **)this,(FVertexStreamComponent *)local_c8,
                     (char)*(FVertexFactory **)this + 'P',Default);
  if ((&local_b8 <= (ulonglong)FVar4) &&
     ((ulonglong)FVar4 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
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
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    local_b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  lVar5 = (longlong)local_b8.ArrayNum;
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(undefined8 *)local_b8.AllocatorInstance.InlineData[lVar5].Pad = *(undefined8 *)FVar4;
  if (param_2) {
    puVar1 = (*(FVertexFactory **)this)[1].Streams.AllocatorInstance.InlineData + 0x10;
    if (*(longlong *)puVar1 != 0) {
      FVar4 = FVertexFactory::AccessStreamComponent
                        (*(FVertexFactory **)this,(FVertexStreamComponent *)(local_c8 + 8),
                         (uchar)puVar1,PositionAndNormalOnly);
      if ((&local_b8 <= (ulonglong)FVar4) &&
         ((ulonglong)FVar4 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
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
      if (local_b8.ArrayNum == local_b8.ArrayMax) {
        local_b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
      }
      lVar5 = (longlong)local_b8.ArrayNum;
      local_b8.ArrayNum = local_b8.ArrayNum + 1;
      *(undefined8 *)local_b8.AllocatorInstance.InlineData[lVar5].Pad = *(undefined8 *)FVar4;
    }
  }
  FVertexFactory::AddPrimitiveIdStreamElement
            (*(FVertexFactory **)this,param_1,&local_b8,'\x01','\x01');
  FVertexFactory::InitDeclaration(*(FVertexFactory **)this,&local_b8,param_1);
  return;
}

// GetPSOPrecacheVertexFetchElements @ 147c58810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FGeometryCollectionVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_48 [10];
  uchar auStack_3e [6];
  undefined1 local_38 [10];
  uchar auStack_2e [6];
  uchar local_28;
  uchar uStack_27;
  uchar uStack_26;
  uchar uStack_25;
  uchar uStack_24;
  uchar uStack_23;
  uchar uStack_22;
  uchar uStack_21;
  
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\x03';
  local_48[3] = '\0';
  local_48[4] = '\f';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_48) &&
      (local_48 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
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
       CONCAT26(local_48._6_2_,CONCAT42(local_48._2_4_,local_48._0_2_));
  if (param_1 == PositionAndNormalOnly) {
    local_48[8] = '\x01';
    local_48[9] = '\0';
    builtin_memcpy(auStack_3e,"\x05\x02\b",4);
    auStack_3e[4] = '\0';
    auStack_3e[5] = '\0';
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_48 + 8)) &&
        (local_48 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
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
         CONCAT26(auStack_3e._4_2_,CONCAT42(auStack_3e._0_4_,local_48._8_2_));
  }
  bVar3 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if ((bVar3) &&
     (bVar3 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform),
     !bVar3)) {
    if (param_1 == Default) {
      local_28 = '\x01';
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
      uVar5 = CONCAT26(_uStack_22,CONCAT42(_uStack_26,_local_28));
    }
    else if (param_1 == PositionOnly) {
      local_38[8] = '\x01';
      local_38[9] = '\0';
      auStack_2e[4] = '\x01';
      auStack_2e[5] = '\0';
      builtin_memcpy(auStack_2e,"\x14\x01\x04",4);
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_38 + 8)) &&
          (local_38 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
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
      uVar5 = CONCAT26(auStack_2e._4_2_,CONCAT42(auStack_2e._0_4_,local_38._8_2_));
    }
    else {
      if (param_1 != PositionAndNormalOnly) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
                           ,0x7d,L"");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38[0] = '\x02';
      local_38[1] = '\0';
      local_38[6] = '\x01';
      local_38[7] = '\0';
      local_38[2] = '\x14';
      local_38[3] = '\x01';
      local_38[4] = '\x04';
      local_38[5] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_38) &&
          (local_38 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
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
      uVar5 = CONCAT26(local_38._6_2_,CONCAT42(local_38._2_4_,local_38._0_2_));
    }
    *(undefined8 *)(param_2->AllocatorInstance).InlineData[lVar6].Pad = uVar5;
  }
  return;
}

// GetType @ 147c5cb80

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
FGeometryCollectionVertexFactory::GetType(FGeometryCollectionVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 147c65ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGeometryCollectionVertexFactory::InitRHI
          (FGeometryCollectionVertexFactory *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters> *pTVar1;
  TRefCountPtr<FRHIUniformBuffer> *pTVar2;
  byte bVar3;
  EVertexStreamUsage EVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  FVertexBuffer *pFVar7;
  TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters> this_00;
  TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters> TVar8;
  FRHIUniformBuffer *this_01;
  FRHIUniformBuffer *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined8 uVar19;
  FShaderParametersMetadata *pFVar20;
  TRefCountPtr<FRHIUniformBuffer> TVar21;
  FGenericStaticFeatureLevel FVar22;
  undefined4 uVar23;
  Type TVar24;
  uint uVar25;
  longlong *plVar26;
  uint uVar27;
  undefined1 auStack_278 [32];
  undefined1 local_224;
  undefined1 uStack_223;
  undefined1 uStack_222;
  undefined1 uStack_221;
  ushort uStack_220;
  ushort uStack_21e;
  undefined1 local_21c;
  undefined1 uStack_21b;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  ushort uStack_218;
  ushort uStack_216;
  undefined1 local_214;
  undefined1 uStack_213;
  undefined1 uStack_212;
  undefined1 uStack_211;
  ushort uStack_210;
  ushort uStack_20e;
  undefined1 local_20c;
  undefined2 uStack_20b;
  undefined1 uStack_209;
  ushort uStack_208;
  undefined2 uStack_206;
  undefined1 local_204;
  undefined1 uStack_203;
  undefined1 uStack_202;
  char cStack_201;
  ushort uStack_200;
  ushort uStack_1fe;
  undefined1 local_1fc;
  undefined1 uStack_1fb;
  undefined1 uStack_1fa;
  char cStack_1f9;
  ushort uStack_1f8;
  ushort uStack_1f6;
  undefined1 local_1f4;
  undefined1 uStack_1f3;
  undefined1 uStack_1f2;
  undefined1 uStack_1f1;
  ushort uStack_1f0;
  ushort uStack_1ee;
  undefined1 local_1ec;
  undefined1 uStack_1eb;
  undefined1 uStack_1ea;
  undefined1 uStack_1e9;
  ushort uStack_1e8;
  ushort uStack_1e6;
  FVertexStream local_1e0;
  FVertexStream local_1d0;
  FVertexStream local_1c0;
  FVertexStream local_1b0;
  FVertexStream local_1a0;
  FVertexStream local_190;
  FVertexStream local_180;
  FVertexStream local_170;
  FRHIResource *local_160;
  FRHIResource *local_158;
  FGeometryCollectionVertexFactory *local_150;
  undefined1 local_148;
  undefined1 local_138 [80];
  undefined1 local_e8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar14 = false;
    bVar15 = false;
  }
  else {
    bVar14 = true;
    bVar15 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId132,"FGeometryCollectionVertexFactory_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
               ,0x84);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId132);
  }
  if ((4 < *(byte *)((longlong)&this->_padding_ + 4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasValidFeatureLevel()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
                          ,0x87,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
  FVar22.FeatureLevel = (uint)bVar3;
  if (bVar3 == 5) {
    FVar22.FeatureLevel = GMaxRHIFeatureLevel;
  }
  bVar12 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,FVar22);
  bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar24 = (uint)bVar3;
  if (bVar3 == 5) {
    TVar24 = GMaxRHIFeatureLevel;
  }
  lVar18 = (**(code **)(this->_padding_ + 0x30))(this);
  if ((*(uint *)(lVar18 + 0x38) & 0x4000) == 0) {
LAB_147c65ff1:
    bVar11 = false;
  }
  else {
    bVar13 = FVertexFactoryType::CheckManualVertexFetchSupport(TVar24);
    bVar11 = true;
    if (!bVar13) goto LAB_147c65ff1;
  }
  if ((this->Data)._padding_ != (this->Data)._padding_) {
    local_150 = this;
    local_148 = bVar12;
    `FGeometryCollectionVertexFactory::InitRHI'::__l12::<lambda_1>::operator()
              (&local_150,PositionOnly,false);
    `FGeometryCollectionVertexFactory::InitRHI'::__l12::<lambda_1>::operator()
              (&local_150,PositionAndNormalOnly,true);
  }
  pFVar7 = (FVertexBuffer *)(this->Data)._padding_;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0x11;
  if (pFVar7 != (FVertexBuffer *)0x0) {
    EVar4 = *(EVertexStreamUsage *)((longlong)&(this->Data)._padding_ + 7);
    uVar5 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 6);
    uVar6 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 4);
    local_1d0.Stride = (ushort)*(byte *)((longlong)&(this->Data)._padding_ + 5);
    local_1d0.Offset = (uint)(this->Data)._padding_;
    local_1d0.Padding = '\0';
    local_1d0.VertexBuffer = pFVar7;
    local_1d0.VertexStreamUsage = EVar4;
    iVar16 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
             ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                       ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         *)&this->_padding_,&local_1d0);
    local_21c = (undefined1)iVar16;
    uStack_218 = local_1d0.Stride;
    uStack_216 = (ushort)(EVar4 & Instancing);
    uStack_219 = 0;
    uStack_21b = uVar6;
    uStack_21a = uVar5;
    if (((local_e8 + 0x20 <= &local_21c) &&
        (&local_21c < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      local_c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),&local_c8.ArrayMax);
    }
    lVar18 = (longlong)local_c8.ArrayNum;
    local_c8.ArrayNum = local_c8.ArrayNum + 1;
    *(ulonglong *)(local_e8 + lVar18 * 8 + 0x20) =
         CONCAT26(uStack_216,
                  CONCAT24(uStack_218,
                           CONCAT13(uStack_219,CONCAT12(uStack_21a,CONCAT11(uStack_21b,local_21c))))
                 );
  }
  FVertexFactory::AddPrimitiveIdStreamElement
            ((FVertexFactory *)this,Default,
             (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_e8 + 0x20),'\r','\r');
  pFVar7 = (FVertexBuffer *)(this->Data)._padding_;
  if (pFVar7 != (FVertexBuffer *)0x0) {
    EVar4 = *(EVertexStreamUsage *)((longlong)&(this->Data)._padding_ + 7);
    uVar5 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 6);
    uVar6 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 4);
    local_1e0.Stride = (ushort)*(byte *)((longlong)&(this->Data)._padding_ + 5);
    local_1e0.Offset = (uint)(this->Data)._padding_;
    local_1e0.Padding = '\0';
    local_1e0.VertexBuffer = pFVar7;
    local_1e0.VertexStreamUsage = EVar4;
    iVar16 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
             ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                       ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         *)&this->_padding_,&local_1e0);
    local_224 = (undefined1)iVar16;
    uStack_220 = local_1e0.Stride;
    uStack_21e = (ushort)(EVar4 & Instancing);
    uStack_221 = 1;
    uStack_223 = uVar6;
    uStack_222 = uVar5;
    if (((local_e8 + 0x20 <= &local_224) &&
        (&local_224 < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      local_c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),&local_c8.ArrayMax);
    }
    lVar18 = (longlong)local_c8.ArrayNum;
    local_c8.ArrayNum = local_c8.ArrayNum + 1;
    *(ulonglong *)(local_e8 + lVar18 * 8 + 0x20) =
         CONCAT26(uStack_21e,
                  CONCAT24(uStack_220,
                           CONCAT13(uStack_221,CONCAT12(uStack_222,CONCAT11(uStack_223,local_224))))
                 );
  }
  pFVar7 = (FVertexBuffer *)(this->Data)._padding_;
  if (pFVar7 != (FVertexBuffer *)0x0) {
    EVar4 = *(EVertexStreamUsage *)((longlong)&(this->Data)._padding_ + 7);
    uVar5 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 6);
    uVar6 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 4);
    local_1e0.Stride = (ushort)*(byte *)((longlong)&(this->Data)._padding_ + 5);
    local_1e0.Offset = (uint)(this->Data)._padding_;
    local_1e0.Padding = '\0';
    local_1e0.VertexBuffer = pFVar7;
    local_1e0.VertexStreamUsage = EVar4;
    iVar16 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
             ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                       ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         *)&this->_padding_,&local_1e0);
    local_224 = (undefined1)iVar16;
    uStack_220 = local_1e0.Stride;
    uStack_21e = (ushort)(EVar4 & Instancing);
    uStack_221 = 2;
    uStack_223 = uVar6;
    uStack_222 = uVar5;
    if (((local_e8 + 0x20 <= &local_224) &&
        (&local_224 < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      local_c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),&local_c8.ArrayMax);
    }
    lVar18 = (longlong)local_c8.ArrayNum;
    local_c8.ArrayNum = local_c8.ArrayNum + 1;
    *(ulonglong *)(local_e8 + lVar18 * 8 + 0x20) =
         CONCAT26(uStack_21e,
                  CONCAT24(uStack_220,
                           CONCAT13(uStack_221,CONCAT12(uStack_222,CONCAT11(uStack_223,local_224))))
                 );
  }
  if ((this->Data)._padding_ == 0) {
    (this->Data)._padding_ = GNullColorVertexBuffer._40_8_;
    *(undefined4 *)&(this->Data)._padding_ = 0;
  }
  pFVar7 = (FVertexBuffer *)(this->Data)._padding_;
  this->ColorStreamIndex = -1;
  if (pFVar7 == (FVertexBuffer *)0x0) {
    local_1b0.Stride = 0;
    local_1b0.VertexStreamUsage = ManualFetch;
    local_1b0.Padding = '\0';
    local_1b0.VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
    local_1b0.Offset = 0;
    iVar16 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
             ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                       ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         *)&this->_padding_,&local_1b0);
    local_20c = (undefined1)iVar16;
    uStack_208 = local_1b0.Stride;
    uStack_20b = 0x800;
    uStack_209 = 3;
    uStack_206 = 0;
    if (((local_e8 + 0x20 <= &local_20c) &&
        (&local_20c < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar16 = local_c8.ArrayNum;
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),
                          &local_c8.ArrayMax);
    }
    local_c8.ArrayNum = iVar16 + 1;
    uVar19 = CONCAT26(uStack_206,
                      CONCAT24(uStack_208,CONCAT13(uStack_209,CONCAT21(uStack_20b,local_20c))));
  }
  else {
    EVar4 = *(EVertexStreamUsage *)((longlong)&(this->Data)._padding_ + 7);
    uVar5 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 6);
    uVar6 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 4);
    local_1c0.Stride = (ushort)*(byte *)((longlong)&(this->Data)._padding_ + 5);
    local_1c0.Offset = (uint)(this->Data)._padding_;
    local_1c0.Padding = '\0';
    local_1c0.VertexBuffer = pFVar7;
    local_1c0.VertexStreamUsage = EVar4;
    iVar16 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
             ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                       ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         *)&this->_padding_,&local_1c0);
    local_214 = (undefined1)iVar16;
    uStack_210 = local_1c0.Stride;
    uStack_20e = (ushort)(EVar4 & Instancing);
    uStack_211 = 3;
    uStack_213 = uVar6;
    uStack_212 = uVar5;
    if (((local_e8 + 0x20 <= &local_214) &&
        (&local_214 < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar16 = local_c8.ArrayNum;
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),
                          &local_c8.ArrayMax);
    }
    local_c8.ArrayNum = iVar16 + 1;
    uVar19 = CONCAT26(uStack_20e,
                      CONCAT24(uStack_210,
                               CONCAT13(uStack_211,
                                        CONCAT12(uStack_212,CONCAT11(uStack_213,local_214)))));
  }
  *(undefined8 *)(local_e8 + (longlong)iVar16 * 8 + 0x20) = uVar19;
  uVar27 = 0;
  if ((int)(local_c8.ArrayNum - 1U) < local_c8.ArrayNum) {
    uVar27 = ~(local_c8.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this->ColorStreamIndex = (uint)(byte)local_e8[(longlong)(local_c8.ArrayNum + -1) * 8 + 0x20];
  iVar16 = (int)(this->Data)._padding_;
  if (iVar16 != 0) {
    uVar27 = 0;
    if (0 < iVar16) {
      do {
        uVar25 = 0;
        if ((int)uVar27 < iVar16) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_1a0.Padding = '\0';
        plVar26 = &(this->Data)._padding_ + (longlong)(int)uVar27 * 2;
        local_1a0.VertexBuffer = (FVertexBuffer *)*plVar26;
        EVar4 = *(EVertexStreamUsage *)((longlong)plVar26 + 0xf);
        uVar5 = *(undefined1 *)((longlong)plVar26 + 0xe);
        local_1a0.Stride = (ushort)*(byte *)((longlong)plVar26 + 0xd);
        local_1a0.Offset = (uint)plVar26[1];
        uVar6 = *(undefined1 *)((longlong)plVar26 + 0xc);
        local_1a0.VertexStreamUsage = EVar4;
        iVar16 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                           ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                             *)&this->_padding_,&local_1a0);
        local_204 = (undefined1)iVar16;
        cStack_201 = (char)uVar27 + '\x04';
        uStack_200 = local_1a0.Stride;
        uStack_1fe = (ushort)(EVar4 & Instancing);
        uStack_203 = uVar6;
        uStack_202 = uVar5;
        if (((local_e8 + 0x20 <= &local_204) &&
            (&local_204 < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          local_c8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),
                          &local_c8.ArrayMax);
        }
        iVar16 = (int)(this->Data)._padding_;
        uVar27 = uVar27 + 1;
        lVar18 = (longlong)local_c8.ArrayNum;
        local_c8.ArrayNum = local_c8.ArrayNum + 1;
        *(ulonglong *)(local_e8 + lVar18 * 8 + 0x20) =
             CONCAT26(uStack_1fe,
                      CONCAT24(uStack_200,
                               CONCAT13(cStack_201,
                                        CONCAT12(uStack_202,CONCAT11(uStack_203,local_204)))));
        bVar14 = bVar15;
      } while ((int)uVar27 < iVar16);
    }
    for (; iVar16 < 4; iVar16 = iVar16 + 1) {
      iVar17 = (int)(this->Data)._padding_;
      uVar25 = iVar17 - 1;
      uVar27 = 0;
      if ((int)uVar25 < iVar17) {
        uVar27 = ~uVar25 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar18 = (longlong)(int)uVar25;
      local_190.Padding = '\0';
      EVar4 = *(EVertexStreamUsage *)((longlong)&(this->Data)._padding_ + lVar18 * 0x10 + 7);
      local_190.VertexBuffer = (FVertexBuffer *)(&(this->Data)._padding_)[lVar18 * 2];
      uVar5 = *(undefined1 *)((longlong)&(this->Data)._padding_ + lVar18 * 0x10 + 6);
      uVar6 = *(undefined1 *)((longlong)&(this->Data)._padding_ + lVar18 * 0x10 + 4);
      local_190.Stride = (ushort)*(byte *)((longlong)&(this->Data)._padding_ + lVar18 * 0x10 + 5);
      local_190.Offset = (uint)(&(this->Data)._padding_)[lVar18 * 2];
      local_190.VertexStreamUsage = EVar4;
      iVar17 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                         ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                           *)&this->_padding_,&local_190);
      local_1fc = (undefined1)iVar17;
      cStack_1f9 = (char)iVar16 + '\x04';
      uStack_1f8 = local_190.Stride;
      uStack_1f6 = (ushort)(EVar4 & Instancing);
      uStack_1fb = uVar6;
      uStack_1fa = uVar5;
      if (((local_e8 + 0x20 <= &local_1fc) &&
          (&local_1fc < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),&local_c8.ArrayMax
                       );
      }
      lVar18 = (longlong)local_c8.ArrayNum;
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)(local_e8 + lVar18 * 8 + 0x20) =
           CONCAT26(uStack_1f6,
                    CONCAT24(uStack_1f8,
                             CONCAT13(cStack_1f9,CONCAT12(uStack_1fa,CONCAT11(uStack_1fb,local_1fc))
                                     )));
    }
  }
  pFVar7 = (FVertexBuffer *)(this->Data)._padding_;
  if (pFVar7 == (FVertexBuffer *)0x0) {
    iVar16 = (int)(this->Data)._padding_;
    if (iVar16 != 0) {
      if ((iVar16 < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_170.VertexBuffer = (FVertexBuffer *)(this->Data)._padding_;
      EVar4 = *(EVertexStreamUsage *)((longlong)&(this->Data)._padding_ + 7);
      uVar5 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 6);
      uVar6 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 4);
      local_170.Stride = (ushort)*(byte *)((longlong)&(this->Data)._padding_ + 5);
      local_170.Offset = (uint)(this->Data)._padding_;
      local_170.Padding = '\0';
      local_170.VertexStreamUsage = EVar4;
      iVar16 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                         ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                           *)&this->_padding_,&local_170);
      local_1ec = (undefined1)iVar16;
      uStack_1e8 = local_170.Stride;
      uStack_1e6 = (ushort)(EVar4 & Instancing);
      uStack_1e9 = 0xf;
      uStack_1eb = uVar6;
      uStack_1ea = uVar5;
      if (((local_e8 + 0x20 <= &local_1ec) &&
          (&local_1ec < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),&local_c8.ArrayMax
                       );
      }
      lVar18 = (longlong)local_c8.ArrayNum;
      local_c8.ArrayNum = local_c8.ArrayNum + 1;
      *(ulonglong *)(local_e8 + lVar18 * 8 + 0x20) =
           CONCAT26(uStack_1e6,
                    CONCAT24(uStack_1e8,
                             CONCAT13(uStack_1e9,CONCAT12(uStack_1ea,CONCAT11(uStack_1eb,local_1ec))
                                     )));
    }
  }
  else {
    EVar4 = *(EVertexStreamUsage *)((longlong)&(this->Data)._padding_ + 7);
    uVar5 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 6);
    uVar6 = *(undefined1 *)((longlong)&(this->Data)._padding_ + 4);
    local_180.Stride = (ushort)*(byte *)((longlong)&(this->Data)._padding_ + 5);
    local_180.Offset = (uint)(this->Data)._padding_;
    local_180.Padding = '\0';
    local_180.VertexBuffer = pFVar7;
    local_180.VertexStreamUsage = EVar4;
    iVar16 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
             ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                       ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         *)&this->_padding_,&local_180);
    local_1f4 = (undefined1)iVar16;
    uStack_1f0 = local_180.Stride;
    uStack_1ee = (ushort)(EVar4 & Instancing);
    uStack_1f1 = 0xf;
    uStack_1f3 = uVar6;
    uStack_1f2 = uVar5;
    if (((local_e8 + 0x20 <= &local_1f4) &&
        (&local_1f4 < local_e8 + (longlong)local_c8.ArrayMax * 8 + 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      local_c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)(local_e8 + 0x20),&local_c8.ArrayMax);
    }
    lVar18 = (longlong)local_c8.ArrayNum;
    local_c8.ArrayNum = local_c8.ArrayNum + 1;
    *(ulonglong *)(local_e8 + lVar18 * 8 + 0x20) =
         CONCAT26(uStack_1ee,
                  CONCAT24(uStack_1f0,
                           CONCAT13(uStack_1f1,CONCAT12(uStack_1f2,CONCAT11(uStack_1f3,local_1f4))))
                 );
  }
  uVar23 = 0;
  if (((int)this->_padding_ < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Streams.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
                          ,0xea,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVertexFactory::InitDeclaration
            ((FVertexFactory *)this,(TArray<FVertexElement,TFixedAllocator<17>_> *)(local_e8 + 0x20)
             ,Default);
  if ((this->_padding_ == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidRef(GetDeclaration())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
                          ,0xed,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((!bVar11) && (!bVar12)) goto LAB_147c671c3;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId244,
               "FGeometryCollectionVertexFactory_InitRHI_CreateLocalVFUniformBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
               ,0xf4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
  }
  local_138._16_4_ = ZEXT14(*(byte *)((longlong)&(this->Data)._padding_ + 6));
  if (bVar11) {
    local_138._32_8_ = (this->Data)._padding_;
    uVar23 = (undefined4)(this->Data)._padding_;
    local_138._40_8_ = (this->Data)._padding_;
    local_138._24_8_ = (this->Data)._padding_;
    local_138._48_8_ = (this->Data)._padding_;
    if (local_138._48_8_ == 0) goto LAB_147c66e79;
  }
  else {
    local_138._32_8_ = GNullColorVertexBuffer._40_8_;
    local_138._40_8_ = GNullColorVertexBuffer._40_8_;
    local_138._24_8_ = GNullColorVertexBuffer._40_8_;
LAB_147c66e79:
    local_138._48_8_ = GNullColorVertexBuffer._40_8_;
  }
  local_138._4_4_ = ZEXT14(*(byte *)((longlong)&(this->Data)._padding_ + 5));
  local_138._8_4_ = SEXT14(*(char *)((longlong)&(this->Data)._padding_ + 4));
  local_138._12_4_ = 0;
  iVar16 = -(uint)(this->EnableLooseParameter != false);
  local_138._0_4_ = uVar23;
  pFVar20 = FGeometryCollectionVertexFactoryUniformShaderParameters::GetStructMetadata();
  if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TVar21 = RHICreateUniformBuffer
                     (&local_160,(FRHIUniformBufferLayout *)local_138,
                      (EUniformBufferUsage)(pFVar20->Layout).Reference,iVar16 + 2);
  this_00 = (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters>)
            (TVar21.Reference)->_padding_;
  if (this_00 != (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
    pFVar20 = FGeometryCollectionVertexFactoryUniformShaderParameters::GetStructMetadata();
    if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((FName)(pFVar20->Layout).Reference != *(FName *)((longlong)this_00 + 0x40)) {
      pFVar20 = FGeometryCollectionVertexFactoryUniformShaderParameters::GetStructMetadata();
      if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  if (local_160 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_160);
  }
  pTVar1 = &this->UniformBuffer;
  if (pTVar1 != (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters> *)
                (local_138 + 0x40)) {
    TVar8 = *pTVar1;
    *pTVar1 = this_00;
    this_00 = TVar8;
  }
  if (this_00 != (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  local_e8._0_8_ = (this->Data).BoneTransformSRV;
  local_e8._8_8_ = (this->Data).BonePrevTransformSRV;
  local_e8._16_8_ = (this->Data).BoneMapSRV;
  pFVar20 = FGCBoneLooseParameters::GetStructMetadata();
  if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TVar21 = RHICreateUniformBuffer
                     (&local_158,(FRHIUniformBufferLayout *)local_e8,
                      (EUniformBufferUsage)(pFVar20->Layout).Reference,iVar16 + 2);
  this_01 = (FRHIUniformBuffer *)(TVar21.Reference)->_padding_;
  if (this_01 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
    pFVar20 = FGCBoneLooseParameters::GetStructMetadata();
    if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((pFVar20->Layout).Reference != (this_01->Layout).Reference) {
      pFVar20 = FGCBoneLooseParameters::GetStructMetadata();
      if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  if (local_158 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_158);
  }
  pTVar2 = &this->LooseParameterUniformBuffer;
  if (pTVar2 != (TRefCountPtr<FRHIUniformBuffer> *)(local_138 + 0x48)) {
    pFVar9 = pTVar2->Reference;
    pTVar2->Reference = this_01;
    this_01 = pFVar9;
  }
  if (this_01 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_147c671c3:
  if ((this->_padding_ == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidRef(GetDeclaration())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
                          ,0x122,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ModifyCompilationEnvironment @ 147c6f7d0

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
FGeometryCollectionVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  FName local_res18 [2];
  
  EVar1 = param_1->Platform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,
                      (FGenericStaticFeatureLevel)
                      FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel);
  if (((param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream) == None) || (!bVar3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar3);
  EVar1 = param_1->Platform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsManualVertexFetch == 0) {
    bVar3 = UseShaderBoneTransform(param_1->Platform);
    if (!bVar3) goto LAB_147c6f8fc;
    ::FName::FName(local_res18,L"USE_SHADER_BONE_TRANSFORM");
    bVar3 = FShaderCompilerEnvironment::ContainsDefinition(param_2,local_res18[0]);
    if (bVar3) goto LAB_147c6f8fc;
  }
  else {
    ::FName::FName(&local_res8,L"MANUAL_VERTEX_FETCH");
    bVar3 = FShaderCompilerEnvironment::ContainsDefinition(param_2,local_res8);
    local_res18[0] = local_res8;
    if (bVar3) goto LAB_147c6f8fc;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,local_res18[0],L"1");
LAB_147c6f8fc:
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_PER_VERTEX_HITPROXY_ID",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"RAY_TRACING_DYNAMIC_MESH_IN_LOCAL_SPACE",L"1");
  return;
}

// ReleaseRHI @ 147c7afe0

void __thiscall FGeometryCollectionVertexFactory::ReleaseRHI(FGeometryCollectionVertexFactory *this)

{
  TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters> this_00;
  FRHIUniformBuffer *this_01;
  
  this_00 = this->UniformBuffer;
  if (this_00 != (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters>)0x0) {
    this->UniformBuffer =
         (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->LooseParameterUniformBuffer).Reference;
  if (this_01 != (FRHIUniformBuffer *)0x0) {
    (this->LooseParameterUniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FVertexFactory::ReleaseRHI((FVertexFactory *)this);
  return;
}

// ShouldCompilePermutation @ 147c835f0

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
FGeometryCollectionVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  if (((param_1->MaterialParameters)._padding_ & 0x4000000002U) != 0) {
    return (int)(param_1->MaterialParameters)._padding_ != 5;
  }
  return false;
}

// UseShaderBoneTransform @ 147c8f2a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FGeometryCollectionVertexFactory::UseShaderBoneTransform(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2c8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsTypedBufferSRVs;
}

// ValidateCompiledResult @ 147c8f300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __cdecl
FGeometryCollectionVertexFactory::ValidateCompiledResult
          (FVertexFactoryType *param_1,EShaderPlatform param_2,FShaderParameterMap *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  size_t sVar4;
  ForAnyElementType FVar5;
  FString local_58;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  if ((param_1->Flags & SupportsPrimitiveIdStream) != None) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = UseGPUScene((FStaticShaderPlatform)param_2,
                        (FGenericStaticFeatureLevel)
                        FGenericDataDrivenShaderPlatformInfo::Infos[param_2].MaxFeatureLevel);
    if (bVar2) {
      pFVar3 = FPrimitiveUniformShaderParameters::GetStructMetadata();
      local_48 = pFVar3->ShaderVariableName;
      iStack_40 = 0;
      if (local_48 != (wchar_t *)0x0) {
        sVar4 = wcslen(local_48);
        iStack_40 = (int)sVar4;
      }
      local_28._12_4_ = uStack_3c;
      local_28.Size = iStack_40;
      local_28.DataPtr = local_48;
      bVar2 = FShaderParameterMap::ContainsParameterAllocation(param_3,&local_28);
      if (bVar2) {
        ::FString::PrintfImpl
                  (&local_58,
                   L"Shader attempted to bind the Primitive uniform buffer even though Vertex Factory %s computes a PrimitiveId per-instance.  This will break auto-instancing.  Shaders should use GetPrimitiveData(Parameters).Member instead of Primitive.Member."
                  );
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar5.Data = local_58.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_38,(wchar_t *)FVar5.Data);
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_4,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

