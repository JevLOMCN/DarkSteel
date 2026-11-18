// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 8

// FWN_ISKM_VertexFactory @ 14a83eeb0

FWN_ISKM_VertexFactory * __thiscall
FWN_ISKM_VertexFactory::FWN_ISKM_VertexFactory(FWN_ISKM_VertexFactory *this,Type param_1)

{
  FVertexFactory::FVertexFactory((FVertexFactory *)this,param_1);
  this->_padding_ = (longlong)&___7FWN_ISKM_VertexFactory__6B_;
  this->InstanceUniformBuffer =
       (TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters>)0x0;
  return this;
}

// ~FWN_ISKM_VertexFactory @ 14a83fec0

void __thiscall FWN_ISKM_VertexFactory::~FWN_ISKM_VertexFactory(FWN_ISKM_VertexFactory *this)

{
  this->_padding_ = (longlong)&___7FWN_ISKM_VertexFactory__6B_;
  if (this->InstanceUniformBuffer !=
      (TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->InstanceUniformBuffer);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  return;
}

// BindVertexElements @ 14a844030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_VertexFactory::BindVertexElements
          (FWN_ISKM_VertexFactory *this,FRHICommandListBase *param_1,FWN_DataType *param_2,
          FWN_ISKM_BoneWeightsBuffer *param_3,FSkeletalMeshLODRenderData *param_4)

{
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&(param_4->StaticVertexBuffers).PositionVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)param_2);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&(param_4->StaticVertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)param_2);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            (&(param_4->StaticVertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)param_2,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            (&(param_4->StaticVertexBuffers).ColorVertexBuffer,(FVertexFactory *)this,
             (FStaticMeshDataType *)param_2);
  (param_2->BoneIndices).VertexBuffer = (FVertexBuffer *)param_3;
  (param_2->BoneIndices).StreamOffset = 0;
  (param_2->BoneIndices).Offset = '\0';
  (param_2->BoneIndices).Stride = '\b';
  (param_2->BoneIndices).Type = '\x06';
  (param_2->BoneIndices).VertexStreamUsage = Default;
  (param_2->BoneWeights).VertexBuffer = (FVertexBuffer *)param_3;
  (param_2->BoneWeights).StreamOffset = 0;
  (param_2->BoneWeights).Offset = '\x04';
  (param_2->BoneWeights).Stride = '\b';
  (param_2->BoneWeights).Type = '\a';
  (param_2->BoneWeights).VertexStreamUsage = Default;
  return;
}

// GetType @ 14a84b990

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

FVertexFactoryType * __thiscall FWN_ISKM_VertexFactory::GetType(FWN_ISKM_VertexFactory *this)

{
  return &StaticType;
}

// ModifyCompilationEnvironment @ 14a8504d0

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
FWN_ISKM_VertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  bVar2 = UseGPUScene((FStaticShaderPlatform)param_1->Platform);
  if (((param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream) == None) || (!bVar2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("supportsPrimitiveIdStream",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                       ,0x1d5,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",1);
  pwVar4 = L"USE_INSTANCE_CULLING";
  if (!bVar2) {
    pwVar4 = L"USE_INSTANCING";
  }
  FShaderCompilerEnvironment::SetDefine(param_2,pwVar4,1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USES_PER_INSTANCE_CUSTOM_DATA",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_DITHERED_LOD_TRANSITION_FOR_INSTANCED",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_DITHERED_LOD_TRANSITION",0);
  return;
}

// SetVertexElements @ 14a8544b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_VertexFactory::SetVertexElements
          (FWN_ISKM_VertexFactory *this,FRHICommandListBase *param_1,FWN_DataType *param_2)

{
  uchar uVar1;
  EVertexStreamUsage EVar2;
  uchar uVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  TTypeCompatibleBytes<FVertexElement> TVar15;
  undefined1 auStack_208 [32];
  undefined1 local_1b8 [9];
  uchar uStack_1af;
  uchar uStack_1ae;
  uchar uStack_1ad;
  ushort uStack_1ac;
  ushort uStack_1aa;
  undefined1 local_1a8 [9];
  uchar uStack_19f;
  uchar uStack_19e;
  uchar uStack_19d;
  ushort uStack_19c;
  ushort uStack_19a;
  undefined1 local_198 [9];
  byte bStack_18f;
  byte bStack_18e;
  uchar uStack_18d;
  ushort uStack_18c;
  ushort uStack_18a;
  undefined1 local_188 [9];
  uchar uStack_17f;
  uchar uStack_17e;
  uchar uStack_17d;
  ushort uStack_17c;
  ushort uStack_17a;
  TTypeCompatibleBytes<FVertexElement> local_178;
  TTypeCompatibleBytes<FVertexElement> local_170;
  FVertexStream local_168;
  FVertexStream local_158;
  FVertexStream local_148;
  FVertexStream local_138;
  FVertexStream local_128;
  FVertexStream local_118;
  FVertexStream local_108;
  FVertexStream local_f8;
  FWN_ISKM_VertexFactory *local_e8;
  longlong *local_e0;
  TArray<FVertexElement,TFixedAllocator<17>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_168.VertexBuffer = (FVertexBuffer *)param_2->_padding_;
  uVar1 = *(uchar *)((longlong)&param_2->_padding_ + 4);
  EVar2 = *(EVertexStreamUsage *)((longlong)&param_2->_padding_ + 7);
  uVar3 = *(uchar *)((longlong)&param_2->_padding_ + 6);
  TVar15.Pad = (uchar  [8])&this->_padding_;
  local_168.Stride = (ushort)*(byte *)((longlong)&param_2->_padding_ + 5);
  local_168.Offset = (uint)param_2->_padding_;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0x11;
  local_168.Padding = '\0';
  local_170.Pad = TVar15.Pad;
  local_168.VertexStreamUsage = EVar2;
  local_e8 = this;
  iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)TVar15.Pad,&local_168);
  local_1b8[0] = (uchar)iVar9;
  local_1b8._4_2_ = local_168.Stride;
  local_1b8._6_2_ = ZEXT12(EVar2 & Instancing);
  local_1b8[3] = '\0';
  local_1b8[1] = uVar1;
  local_1b8[2] = uVar3;
  if (((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_1b8) &&
      (local_1b8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_d8.ArrayNum == local_d8.ArrayMax) {
    local_d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
  }
  EVar2 = *(EVertexStreamUsage *)((longlong)&param_2->_padding_ + 7);
  uVar1 = *(uchar *)((longlong)&param_2->_padding_ + 6);
  uVar3 = *(uchar *)((longlong)&param_2->_padding_ + 4);
  lVar10 = (longlong)local_d8.ArrayNum;
  local_158.Padding = '\0';
  local_d8.ArrayNum = local_d8.ArrayNum + 1;
  *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar10].Pad =
       CONCAT26(local_1b8._6_2_,
                CONCAT24(local_1b8._4_2_,
                         CONCAT13(local_1b8[3],
                                  CONCAT12(local_1b8[2],CONCAT11(local_1b8[1],local_1b8[0])))));
  local_158.VertexBuffer = (FVertexBuffer *)param_2->_padding_;
  local_158.Stride = (ushort)*(byte *)((longlong)&param_2->_padding_ + 5);
  local_158.Offset = (uint)param_2->_padding_;
  local_158.VertexStreamUsage = EVar2;
  iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)TVar15.Pad,&local_158);
  local_1b8[8] = (uchar)iVar9;
  uStack_1ac = local_158.Stride;
  uStack_1aa = (ushort)(EVar2 & Instancing);
  uStack_1ad = '\x01';
  uStack_1af = uVar3;
  uStack_1ae = uVar1;
  if (((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_1b8 + 8)) &&
      (local_1b8 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_d8.ArrayNum == local_d8.ArrayMax) {
    local_d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
  }
  EVar2 = *(EVertexStreamUsage *)((longlong)&param_2->_padding_ + 7);
  uVar1 = *(uchar *)((longlong)&param_2->_padding_ + 6);
  uVar3 = *(uchar *)((longlong)&param_2->_padding_ + 4);
  lVar10 = (longlong)local_d8.ArrayNum;
  local_148.Padding = '\0';
  local_d8.ArrayNum = local_d8.ArrayNum + 1;
  *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar10].Pad =
       CONCAT26(uStack_1aa,
                CONCAT24(uStack_1ac,
                         CONCAT13(uStack_1ad,CONCAT12(uStack_1ae,CONCAT11(uStack_1af,local_1b8[8])))
                        ));
  local_148.VertexBuffer = (FVertexBuffer *)param_2->_padding_;
  local_148.Stride = (ushort)*(byte *)((longlong)&param_2->_padding_ + 5);
  local_148.Offset = (uint)param_2->_padding_;
  local_148.VertexStreamUsage = EVar2;
  iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)TVar15.Pad,&local_148);
  local_1a8[0] = (uchar)iVar9;
  local_1a8._4_2_ = local_148.Stride;
  local_1a8._6_2_ = ZEXT12(EVar2 & Instancing);
  local_1a8[3] = '\x02';
  local_1a8[1] = uVar3;
  local_1a8[2] = uVar1;
  if (((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_1a8) &&
      (local_1a8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_d8.ArrayNum == local_d8.ArrayMax) {
    local_d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
  }
  EVar2 = (param_2->BoneIndices).VertexStreamUsage;
  uVar1 = (param_2->BoneIndices).Type.Value;
  uVar3 = (param_2->BoneIndices).Offset;
  lVar10 = (longlong)local_d8.ArrayNum;
  local_138.Padding = '\0';
  local_d8.ArrayNum = local_d8.ArrayNum + 1;
  *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar10].Pad =
       CONCAT26(local_1a8._6_2_,
                CONCAT24(local_1a8._4_2_,
                         CONCAT13(local_1a8[3],
                                  CONCAT12(local_1a8[2],CONCAT11(local_1a8[1],local_1a8[0])))));
  local_138.VertexBuffer = (param_2->BoneIndices).VertexBuffer;
  local_138.Stride = (ushort)(param_2->BoneIndices).Stride;
  local_138.Offset = (param_2->BoneIndices).StreamOffset;
  local_138.VertexStreamUsage = EVar2;
  iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)TVar15.Pad,&local_138);
  local_1a8[8] = (uchar)iVar9;
  uStack_19c = local_138.Stride;
  uStack_19a = (ushort)(EVar2 & Instancing);
  uStack_19d = '\x03';
  uStack_19f = uVar3;
  uStack_19e = uVar1;
  if (((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_1a8 + 8)) &&
      (local_1a8 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_d8.ArrayNum == local_d8.ArrayMax) {
    local_d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
  }
  EVar2 = (param_2->BoneWeights).VertexStreamUsage;
  uVar1 = (param_2->BoneWeights).Type.Value;
  uVar3 = (param_2->BoneWeights).Offset;
  lVar10 = (longlong)local_d8.ArrayNum;
  local_128.Padding = '\0';
  local_d8.ArrayNum = local_d8.ArrayNum + 1;
  *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar10].Pad =
       CONCAT26(uStack_19a,
                CONCAT24(uStack_19c,
                         CONCAT13(uStack_19d,CONCAT12(uStack_19e,CONCAT11(uStack_19f,local_1a8[8])))
                        ));
  local_128.VertexBuffer = (param_2->BoneWeights).VertexBuffer;
  local_128.Stride = (ushort)(param_2->BoneWeights).Stride;
  local_128.Offset = (param_2->BoneWeights).StreamOffset;
  local_128.VertexStreamUsage = EVar2;
  iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)TVar15.Pad,&local_128);
  local_198[0] = (uchar)iVar9;
  local_198._4_2_ = local_128.Stride;
  local_198._6_2_ = ZEXT12(EVar2 & Instancing);
  local_198[3] = '\x04';
  local_198[1] = uVar3;
  local_198[2] = uVar1;
  if (((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_198) &&
      (local_198 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_d8.ArrayNum == local_d8.ArrayMax) {
    local_d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
  }
  lVar10 = (longlong)local_d8.ArrayNum;
  local_d8.ArrayNum = local_d8.ArrayNum + 1;
  *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar10].Pad =
       CONCAT26(local_198._6_2_,
                CONCAT24(local_198._4_2_,
                         CONCAT13(local_198[3],
                                  CONCAT12(local_198[2],CONCAT11(local_198[1],local_198[0])))));
  iVar9 = (int)param_2->_padding_;
  local_178.Pad[0] = (char)iVar9;
  local_178.Pad[1] = (char)((uint)iVar9 >> 8);
  local_178.Pad[2] = (char)((uint)iVar9 >> 0x10);
  local_178.Pad[3] = (char)((uint)iVar9 >> 0x18);
  if (0 < iVar9) {
    uVar12 = 0;
    pbVar11 = (byte *)((longlong)&param_2->_padding_ + 5);
    do {
      uVar13 = 0;
      if ((int)uVar12 < (int)param_2->_padding_) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_118.VertexBuffer = *(FVertexBuffer **)(pbVar11 + -0xd);
      EVar2 = pbVar11[2];
      bVar4 = pbVar11[1];
      bVar5 = pbVar11[-1];
      local_118.Stride = (ushort)*pbVar11;
      local_118.Offset = *(uint *)(pbVar11 + -5);
      local_118.Padding = '\0';
      local_118.VertexStreamUsage = EVar2;
      iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                        ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                          *)local_170.Pad,&local_118);
      local_198[8] = (uchar)iVar9;
      uStack_18d = (char)uVar12 + '\x05';
      uStack_18c = local_118.Stride;
      uStack_18a = (ushort)(EVar2 & Instancing);
      bStack_18f = bVar5;
      bStack_18e = bVar4;
      if (((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_198 + 8)) &&
          (local_198 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_d8.ArrayNum == local_d8.ArrayMax) {
        local_d8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      }
      uVar12 = uVar12 + 1;
      lVar10 = (longlong)local_d8.ArrayNum;
      pbVar11 = pbVar11 + 0x10;
      local_d8.ArrayNum = local_d8.ArrayNum + 1;
      *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar10].Pad =
           CONCAT26(uStack_18a,
                    CONCAT24(uStack_18c,
                             CONCAT13(uStack_18d,
                                      CONCAT12(bStack_18e,CONCAT11(bStack_18f,local_198[8])))));
    } while ((int)uVar12 < (int)local_178.Pad._0_4_);
    uVar14 = (ulonglong)(int)local_178.Pad._0_4_;
    this = local_e8;
    TVar15.Pad = local_170.Pad;
    if ((int)local_178.Pad._0_4_ < 4) {
      uVar12 = local_178.Pad._0_4_ - 1;
      local_e0 = &param_2->_padding_ + uVar14 * 2;
      local_178.Pad = (uchar  [8])((longlong)param_2 + (uVar14 - 1) * 0x10);
      do {
        plVar7 = local_e0;
        TVar15.Pad = local_178.Pad;
        uVar13 = 0;
        if ((int)uVar12 < (int)param_2->_padding_) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_108.VertexBuffer = (FVertexBuffer *)*plVar7;
        EVar2 = *(EVertexStreamUsage *)((longlong)TVar15.Pad + 0x3f);
        uVar1 = *(uchar *)((longlong)TVar15.Pad + 0x3e);
        local_108.Stride = (ushort)*(byte *)((longlong)TVar15.Pad + 0x3d);
        local_108.Offset = *(uint *)((longlong)TVar15.Pad + 0x38);
        uVar3 = *(uchar *)((longlong)TVar15.Pad + 0x3c);
        local_108.Padding = '\0';
        local_108.VertexStreamUsage = EVar2;
        iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                          ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)local_170.Pad,&local_108);
        local_188[0] = (uchar)iVar9;
        local_188[3] = (char)uVar14 + '\x05';
        local_188._4_2_ = local_108.Stride;
        local_188._6_2_ = ZEXT12(EVar2 & Instancing);
        local_188[1] = uVar3;
        local_188[2] = uVar1;
        if (((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_188) &&
            (local_188 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          local_d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        lVar10 = (longlong)local_d8.ArrayNum;
        local_d8.ArrayNum = local_d8.ArrayNum + 1;
        *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar10].Pad =
             CONCAT26(local_188._6_2_,
                      CONCAT24(local_188._4_2_,
                               CONCAT13(local_188[3],
                                        CONCAT12(local_188[2],CONCAT11(local_188[1],local_188[0]))))
                     );
        this = local_e8;
        TVar15.Pad = local_170.Pad;
      } while ((int)uVar13 < 4);
    }
  }
  local_f8.VertexBuffer = (FVertexBuffer *)param_2->_padding_;
  EVar2 = *(EVertexStreamUsage *)((longlong)&param_2->_padding_ + 7);
  uVar1 = *(uchar *)((longlong)&param_2->_padding_ + 6);
  uVar3 = *(uchar *)((longlong)&param_2->_padding_ + 4);
  local_f8.Stride = (ushort)*(byte *)((longlong)&param_2->_padding_ + 5);
  local_f8.Offset = (uint)param_2->_padding_;
  local_f8.Padding = '\0';
  local_f8.VertexStreamUsage = EVar2;
  iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                    ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)TVar15.Pad,&local_f8);
  local_188[8] = (uchar)iVar9;
  uStack_17c = local_f8.Stride;
  uStack_17a = (ushort)(EVar2 & Instancing);
  uStack_17d = '\r';
  uStack_17f = uVar3;
  uStack_17e = uVar1;
  if (((&local_d8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_188 + 8)) &&
      (local_188 + 8 < local_d8.AllocatorInstance.InlineData + local_d8.ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_d8.ArrayNum == local_d8.ArrayMax) {
    local_d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
  }
  lVar10 = (longlong)local_d8.ArrayNum;
  local_d8.ArrayNum = local_d8.ArrayNum + 1;
  *(ulonglong *)local_d8.AllocatorInstance.InlineData[lVar10].Pad =
       CONCAT26(uStack_17a,
                CONCAT24(uStack_17c,
                         CONCAT13(uStack_17d,CONCAT12(uStack_17e,CONCAT11(uStack_17f,local_188[8])))
                        ));
  FVertexFactory::AddPrimitiveIdStreamElement((FVertexFactory *)this,Default,&local_d8,'\x0e',0xff);
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_d8,Default);
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetDeclaration()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                         ,0x1c8,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// ShouldCompilePermutation @ 14a854fc0

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
FWN_ISKM_VertexFactory::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters *param_1)

{
  if (((int)(param_1->MaterialParameters)._padding_ == 0) &&
     (((param_1->MaterialParameters)._padding_ & 0x400000002U) != 0)) {
    return true;
  }
  return false;
}

// ValidateCompiledResult @ 14a858ec0

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
FWN_ISKM_VertexFactory::ValidateCompiledResult
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
  
  if (((param_1->Flags & SupportsPrimitiveIdStream) != None) &&
     (bVar2 = UseGPUScene((FStaticShaderPlatform)param_2), bVar2)) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].MaxFeatureLevel != ES3_1) {
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

