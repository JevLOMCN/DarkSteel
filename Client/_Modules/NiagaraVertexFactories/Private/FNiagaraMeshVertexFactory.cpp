// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 9

// GetPSOPrecacheVertexFetchElements @ 148dce670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FNiagaraMeshVertexFactory::GetPSOPrecacheVertexFetchElements
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
  local_18[2] = '\x03';
  local_18[3] = '\0';
  local_18[4] = '\f';
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
  if (GMaxRHIFeatureLevel != ES3_1) {
    bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                        (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
    if (bVar2) {
      bVar2 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform);
      if (!bVar2) {
        local_18[8] = '\x01';
        local_18[9] = '\0';
        auStack_e[4] = '\x01';
        auStack_e[5] = '\0';
        builtin_memcpy(auStack_e,"\x14\r\x04",4);
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
    }
  }
  return;
}

// GetType @ 148dd0600

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

FVertexFactoryType * __thiscall FNiagaraMeshVertexFactory::GetType(FNiagaraMeshVertexFactory *this)

{
  return &StaticType;
}

// GetVertexElements @ 148dd0710

/* WARNING: Type propagation algorithm not settling */

void __cdecl
FNiagaraMeshVertexFactory::GetVertexElements
          (Type param_1,bool param_2,FStaticMeshDataType *param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4,
          TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  EVertexStreamUsage EVar1;
  uchar uVar2;
  uchar uVar3;
  uchar auVar4 [8];
  code *pcVar5;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  TTypeCompatibleBytes<FVertexStreamComponent> *pTVar13;
  int *piVar14;
  int *piVar15;
  uint local_res10;
  undefined1 local_d8 [9];
  uchar uStack_cf;
  uchar uStack_ce;
  uchar uStack_cd;
  ushort uStack_cc;
  ushort uStack_ca;
  undefined1 local_c8 [40];
  uint local_a0;
  ushort local_9c;
  EVertexStreamUsage local_9a;
  uchar local_99;
  TTypeCompatibleBytes<FVertexElement> local_98;
  FVertexStream local_90;
  FVertexStream local_80;
  FVertexStream local_70;
  FVertexStream local_60;
  FVertexStream local_50;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_> *local_40;
  
  auVar4 = (uchar  [8])(param_3->PositionComponent).VertexBuffer;
  if (auVar4 != (uchar  [8])0x0) {
    EVar1 = (param_3->PositionComponent).VertexStreamUsage;
    uVar2 = (param_3->PositionComponent).Type.Value;
    uVar3 = (param_3->PositionComponent).Offset;
    local_90.Stride = (ushort)(param_3->PositionComponent).Stride;
    local_90.Offset = (param_3->PositionComponent).StreamOffset;
    local_90.Padding = '\0';
    local_90.VertexBuffer = (FVertexBuffer *)auVar4;
    local_90.VertexStreamUsage = EVar1;
    iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_90);
    local_d8[8] = (uchar)iVar8;
    uStack_cc = local_90.Stride;
    uStack_ca = (ushort)(EVar1 & Instancing);
    uStack_cd = '\0';
    uStack_cf = uVar3;
    uStack_ce = uVar2;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_d8 + 8)) &&
        (local_d8 + 8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) &&
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
    iVar8 = param_4->ArrayNum;
    if (iVar8 == param_4->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar8 + 1;
    *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
         CONCAT26(uStack_ca,
                  CONCAT24(uStack_cc,
                           CONCAT13(uStack_cd,CONCAT12(uStack_ce,CONCAT11(uStack_cf,local_d8[8])))))
    ;
  }
  piVar14 = &param_4->ArrayMax;
  if (!param_2) {
    auVar4 = (uchar  [8])param_3->TangentBasisComponents[0].VertexBuffer;
    if (auVar4 != (uchar  [8])0x0) {
      EVar1 = param_3->TangentBasisComponents[0].VertexStreamUsage;
      uVar2 = param_3->TangentBasisComponents[0].Type.Value;
      local_9c = (ushort)param_3->TangentBasisComponents[0].Stride;
      local_a0 = param_3->TangentBasisComponents[0].StreamOffset;
      uVar3 = param_3->TangentBasisComponents[0].Offset;
      local_c8._32_8_ = auVar4;
      local_9a = EVar1;
      local_99 = param_2;
      iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                        (param_5,(FVertexStream *)(local_c8 + 0x20));
      local_d8[0] = (uchar)iVar8;
      local_d8._4_2_ = local_9c;
      local_d8._6_2_ = ZEXT12(EVar1 & Instancing);
      local_d8[3] = '\x01';
      local_d8[1] = uVar3;
      local_d8[2] = uVar2;
      if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_d8) &&
          (local_d8 < (param_4->AllocatorInstance).InlineData + *piVar14)) &&
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
      iVar8 = param_4->ArrayNum;
      if (iVar8 == *piVar14) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,piVar14);
      }
      param_4->ArrayNum = iVar8 + 1;
      *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
           CONCAT26(local_d8._6_2_,
                    CONCAT24(local_d8._4_2_,
                             CONCAT13(local_d8[3],
                                      CONCAT12(local_d8[2],CONCAT11(local_d8[1],local_d8[0])))));
    }
    piVar14 = &param_4->ArrayNum;
    piVar15 = &param_4->ArrayMax;
    auVar4 = (uchar  [8])param_3->TangentBasisComponents[1].VertexBuffer;
    if (auVar4 != (uchar  [8])0x0) {
      EVar1 = param_3->TangentBasisComponents[1].VertexStreamUsage;
      uVar2 = param_3->TangentBasisComponents[1].Type.Value;
      local_9c = (ushort)param_3->TangentBasisComponents[1].Stride;
      local_a0 = param_3->TangentBasisComponents[1].StreamOffset;
      uVar3 = param_3->TangentBasisComponents[1].Offset;
      local_99 = '\0';
      local_c8._32_8_ = auVar4;
      local_9a = EVar1;
      iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                        (param_5,(FVertexStream *)(local_c8 + 0x20));
      local_d8[0] = (uchar)iVar8;
      local_d8._4_2_ = local_9c;
      local_d8._6_2_ = ZEXT12(EVar1 & Instancing);
      local_d8[3] = '\x02';
      local_d8[1] = uVar3;
      local_d8[2] = uVar2;
      if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_d8) &&
          (local_d8 < (param_4->AllocatorInstance).InlineData + *piVar15)) &&
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
      iVar8 = *piVar14;
      if (iVar8 == *piVar15) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,piVar15);
      }
      *piVar14 = iVar8 + 1;
      *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
           CONCAT26(local_d8._6_2_,
                    CONCAT24(local_d8._4_2_,
                             CONCAT13(local_d8[3],
                                      CONCAT12(local_d8[2],CONCAT11(local_d8[1],local_d8[0])))));
    }
    if (param_3->ColorComponentsSRV == (FRHIShaderResourceView *)0x0) {
      param_3->ColorComponentsSRV = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
      param_3->ColorIndexMask = 0;
    }
    auVar4 = (uchar  [8])(param_3->ColorComponent).VertexBuffer;
    if (auVar4 == (uchar  [8])0x0) {
      local_70._12_4_ = 0x40000;
      local_70.VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
      local_70.Offset = 0;
      iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_70);
      local_c8[8] = (uchar)iVar8;
      local_c8._12_2_ = local_70.Stride;
      local_c8[9] = '\0';
      local_c8[10] = '\b';
      local_c8[0xb] = '\x03';
      local_c8[0xe] = '\0';
      local_c8[0xf] = '\0';
      if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c8 + 8)) &&
          (local_c8 + 8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) &&
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
      iVar8 = *piVar14;
      if (iVar8 == param_4->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
        *piVar14 = iVar8;
      }
      *piVar14 = iVar8 + 1;
      uVar11 = CONCAT26(local_c8._14_2_,
                        CONCAT24(local_c8._12_2_,
                                 CONCAT13(local_c8[0xb],CONCAT21(local_c8._9_2_,local_c8[8]))));
    }
    else {
      uVar2 = (param_3->ColorComponent).Type.Value;
      local_80.Padding = '\0';
      EVar1 = (param_3->ColorComponent).VertexStreamUsage;
      local_80.Stride = (ushort)(param_3->ColorComponent).Stride;
      local_80.Offset = (param_3->ColorComponent).StreamOffset;
      uVar3 = (param_3->ColorComponent).Offset;
      local_80.VertexBuffer = (FVertexBuffer *)auVar4;
      local_80.VertexStreamUsage = EVar1;
      iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_80);
      local_c8[0] = (uchar)iVar8;
      local_c8._4_2_ = local_80.Stride;
      local_c8._6_2_ = ZEXT12(EVar1 & Instancing);
      local_c8[3] = '\x03';
      local_c8[1] = uVar3;
      local_c8[2] = uVar2;
      if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_c8) &&
          (local_c8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) &&
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
      iVar8 = *piVar14;
      if (iVar8 == param_4->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
        *piVar14 = iVar8;
      }
      *piVar14 = iVar8 + 1;
      uVar11 = CONCAT26(local_c8._6_2_,
                        CONCAT24(local_c8._4_2_,
                                 CONCAT13(local_c8[3],
                                          CONCAT12(local_c8[2],CONCAT11(local_c8[1],local_c8[0])))))
      ;
    }
    piVar15 = &param_4->ArrayMax;
    *(undefined8 *)(param_4->AllocatorInstance).InlineData[iVar8].Pad = uVar11;
    local_98.Pad = (uchar  [8])&(param_3->TextureCoordinates).ArrayNum;
    iVar8 = *(int *)local_98.Pad;
    if (iVar8 != 0) {
      local_res10 = 0;
      if (0 < iVar8) {
        local_40 = &param_3->TextureCoordinates;
        do {
          pTVar6 = local_40;
          uVar9 = 0;
          if ((int)local_res10 < local_40->ArrayNum) {
            uVar9 = ~local_res10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pTVar13 = (pTVar6->AllocatorInstance).InlineData + (int)local_res10;
          local_60.Padding = '\0';
          local_60.VertexBuffer = *(FVertexBuffer **)pTVar13->Pad;
          EVar1 = pTVar13->Pad[0xf];
          uVar2 = pTVar13->Pad[0xe];
          local_60.Stride = (ushort)pTVar13->Pad[0xd];
          local_60.Offset = *(uint *)(pTVar13->Pad + 8);
          uVar3 = pTVar13->Pad[0xc];
          local_60.VertexStreamUsage = EVar1;
          iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_60);
          local_c8[0x10] = (uchar)iVar8;
          local_c8[0x13] = (char)local_res10 + '\x04';
          local_c8._20_2_ = local_60.Stride;
          local_c8._22_2_ = ZEXT12(EVar1 & Instancing);
          local_c8[0x11] = uVar3;
          local_c8[0x12] = uVar2;
          if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c8 + 0x10)) &&
              (local_c8 + 0x10 < (param_4->AllocatorInstance).InlineData + *piVar15)) &&
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
          iVar8 = *piVar14;
          if (iVar8 == *piVar15) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                              (0x208,&param_4->AllocatorInstance,piVar15);
            *piVar14 = iVar8;
          }
          *piVar14 = iVar8 + 1;
          local_res10 = local_res10 + 1;
          *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar8].Pad =
               CONCAT26(local_c8._22_2_,
                        CONCAT24(local_c8._20_2_,
                                 CONCAT13(local_c8[0x13],
                                          CONCAT12(local_c8[0x12],
                                                   CONCAT11(local_c8[0x11],local_c8[0x10])))));
          iVar8 = *(int *)local_98.Pad;
        } while ((int)local_res10 < iVar8);
      }
      local_98.Pad = (uchar  [8])&(param_3->TextureCoordinates).ArrayNum;
      piVar15 = &param_4->ArrayNum;
      piVar14 = &param_4->ArrayMax;
      for (; iVar8 < 4; iVar8 = iVar8 + 1) {
        uVar12 = *(int *)local_98.Pad - 1;
        uVar9 = 0;
        if ((int)uVar12 < *(int *)local_98.Pad) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar13 = (param_3->TextureCoordinates).AllocatorInstance.InlineData + (int)uVar12;
        local_50.Padding = '\0';
        local_50.VertexBuffer = *(FVertexBuffer **)pTVar13->Pad;
        EVar1 = pTVar13->Pad[0xf];
        uVar2 = pTVar13->Pad[0xe];
        local_50.Stride = (ushort)pTVar13->Pad[0xd];
        local_50.Offset = *(uint *)(pTVar13->Pad + 8);
        uVar3 = pTVar13->Pad[0xc];
        local_50.VertexStreamUsage = EVar1;
        iVar10 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_50);
        local_c8[0x18] = (uchar)iVar10;
        local_c8[0x1b] = (char)iVar8 + '\x04';
        local_c8._28_2_ = local_50.Stride;
        local_c8._30_2_ = ZEXT12(EVar1 & Instancing);
        local_c8[0x19] = uVar3;
        local_c8[0x1a] = uVar2;
        if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c8 + 0x18)) &&
            (local_c8 + 0x18 < (param_4->AllocatorInstance).InlineData + *piVar14)) &&
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
        iVar10 = *piVar15;
        if (iVar10 == *piVar14) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                             (0x208,&param_4->AllocatorInstance,piVar14);
          *piVar15 = iVar10;
        }
        *piVar15 = iVar10 + 1;
        *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar10].Pad =
             CONCAT26(local_c8._30_2_,
                      CONCAT24(local_c8._28_2_,
                               CONCAT13(local_c8[0x1b],
                                        CONCAT12(local_c8[0x1a],
                                                 CONCAT11(local_c8[0x19],local_c8[0x18])))));
      }
    }
  }
  return;
}

// GetVertexElements @ 148dd1000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FNiagaraMeshVertexFactory::GetVertexElements
          (Type param_1,bool param_2,FStaticMeshDataType *param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

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
  local_14 = 8;
  local_20 = (void *)0x0;
  local_18 = 0;
  GetVertexElements(param_1,param_2,param_3,param_4,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)(local_a8 + 8));
  if (GMaxRHIFeatureLevel != ES3_1) {
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
        if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8) &&
           (local_a8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) {
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
        iVar3 = param_4->ArrayNum;
        if (iVar3 == param_4->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                            (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar3 + 1;
        *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar3].Pad =
             CONCAT44(local_a8._4_4_,CONCAT13(local_a8[3],CONCAT21(local_a8._1_2_,local_a8[0])));
      }
    }
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// InitRHI @ 148dd1170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraMeshVertexFactory::InitRHI(FNiagaraMeshVertexFactory *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  Type TVar6;
  undefined1 auStackY_d8 [32];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (4 < *(byte *)((longlong)&this->_padding_ + 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasValidFeatureLevel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Private\\NiagaraMeshVertexFactory.cpp"
                       ,0x99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (4 < *(byte *)((longlong)&this->_padding_ + 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasValidFeatureLevel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Public\\NiagaraVertexFactory.h"
                       ,0x51,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar6 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar6 = GMaxRHIFeatureLevel;
  }
  lVar5 = (**(code **)(this->_padding_ + 0x30))(this);
  if ((*(uint *)(lVar5 + 0x38) & 0x4000) != 0) {
    bVar3 = FVertexFactoryType::CheckManualVertexFetchSupport(TVar6);
    if (bVar3) {
      bVar3 = true;
      goto LAB_148dd121e;
    }
  }
  bVar3 = false;
LAB_148dd121e:
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0x11;
  if (4 < *(byte *)((longlong)&this->_padding_ + 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasValidFeatureLevel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Public\\NiagaraVertexFactory.h"
                       ,0x51,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar6 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar6 = GMaxRHIFeatureLevel;
  }
  GetVertexElements(TVar6,bVar3,&this->Data,&local_a8,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)&this->_padding_);
  if (this->bAddPrimitiveIDElement != false) {
    FVertexFactory::AddPrimitiveIdStreamElement((FVertexFactory *)this,Default,&local_a8,'\r','\r');
  }
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_a8,Default);
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(GetDeclaration())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Private\\NiagaraMeshVertexFactory.cpp"
                       ,0xa9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// IsGPUSceneEnabled @ 148dd1af0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FNiagaraMeshVertexFactory::IsGPUSceneEnabled
          (FStaticShaderPlatform param_1,FGenericStaticFeatureLevel param_2)

{
  bool bVar1;
  
  if (param_2.FeatureLevel == ES3_1) {
    return false;
  }
  bVar1 = UseGPUScene(param_1,param_2);
  return bVar1;
}

// ModifyCompilationEnvironment @ 148dd1ca0

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
FNiagaraMeshVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  FGenericStaticFeatureLevel FVar2;
  code *pcVar3;
  bool bVar4;
  EVertexFactoryFlags EVar5;
  FName local_res8;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"NIAGARA_PARTICLE_FACTORY",L"1");
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
  if (FVar2.FeatureLevel == ES3_1) {
    bVar4 = false;
  }
  else {
    bVar4 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,FVar2);
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"NIAGARA_MESH_FACTORY",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"NIAGARA_MESH_INSTANCED",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"NiagaraVFLooseParameters",L"NiagaraMeshVF");
  FShaderCompilerEnvironment::SetDefine(param_2,L"NIAGARA_MESH_WITH_GPU_SCENE",bVar4);
  EVar5 = param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream;
  if ((EVar5 == None) || (bVar4 == false)) {
    FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",false);
    if ((EVar5 != None) && (bVar4 != false)) goto LAB_148dd1dc9;
    FShaderCompilerEnvironment::SetDefine(param_2,L"VF_REQUIRES_PER_INSTANCE_CUSTOM_DATA",false);
    if (bVar4 == false) goto LAB_148dd1e0b;
  }
  else {
    FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",true);
LAB_148dd1dc9:
    FShaderCompilerEnvironment::SetDefine(param_2,L"VF_REQUIRES_PER_INSTANCE_CUSTOM_DATA",true);
  }
  if (FVar2.FeatureLevel == ES3_1) {
    FShaderCompilerEnvironment::SetDefine(param_2,L"USE_INSTANCE_CULLING",1);
  }
LAB_148dd1e0b:
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsManualVertexFetch != 0) {
    ::FName::FName(&local_res8,L"MANUAL_VERTEX_FETCH");
    bVar4 = FShaderCompilerEnvironment::ContainsDefinition(param_2,local_res8);
    if (!bVar4) {
      FShaderCompilerEnvironment::SetDefine(param_2,local_res8,L"1");
    }
  }
  return;
}

// SetData @ 148dd20b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraMeshVertexFactory::SetData
          (FNiagaraMeshVertexFactory *this,FRHICommandListBase *param_1,FStaticMeshDataType *param_2
          )

{
  int *piVar1;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_> *_Dst;
  int iVar2;
  int iVar3;
  uint uVar4;
  uchar uVar5;
  uchar uVar6;
  TEnumAsByte<EVertexElementType> TVar7;
  EVertexStreamUsage EVar8;
  
  uVar4 = (param_2->PositionComponent).StreamOffset;
  uVar5 = (param_2->PositionComponent).Offset;
  uVar6 = (param_2->PositionComponent).Stride;
  TVar7.Value = (param_2->PositionComponent).Type.Value;
  EVar8 = (param_2->PositionComponent).VertexStreamUsage;
  _Dst = &(this->Data).TextureCoordinates;
  (this->Data).PositionComponent.VertexBuffer = (param_2->PositionComponent).VertexBuffer;
  (this->Data).PositionComponent.StreamOffset = uVar4;
  (this->Data).PositionComponent.Offset = uVar5;
  (this->Data).PositionComponent.Stride = uVar6;
  (this->Data).PositionComponent.Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  (this->Data).PositionComponent.VertexStreamUsage = EVar8;
  uVar4 = param_2->TangentBasisComponents[0].StreamOffset;
  uVar5 = param_2->TangentBasisComponents[0].Offset;
  uVar6 = param_2->TangentBasisComponents[0].Stride;
  TVar7.Value = param_2->TangentBasisComponents[0].Type.Value;
  EVar8 = param_2->TangentBasisComponents[0].VertexStreamUsage;
  (this->Data).TangentBasisComponents[0].VertexBuffer =
       param_2->TangentBasisComponents[0].VertexBuffer;
  (this->Data).TangentBasisComponents[0].StreamOffset = uVar4;
  (this->Data).TangentBasisComponents[0].Offset = uVar5;
  (this->Data).TangentBasisComponents[0].Stride = uVar6;
  (this->Data).TangentBasisComponents[0].Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  (this->Data).TangentBasisComponents[0].VertexStreamUsage = EVar8;
  uVar4 = param_2->TangentBasisComponents[1].StreamOffset;
  uVar5 = param_2->TangentBasisComponents[1].Offset;
  uVar6 = param_2->TangentBasisComponents[1].Stride;
  TVar7.Value = param_2->TangentBasisComponents[1].Type.Value;
  EVar8 = param_2->TangentBasisComponents[1].VertexStreamUsage;
  (this->Data).TangentBasisComponents[1].VertexBuffer =
       param_2->TangentBasisComponents[1].VertexBuffer;
  (this->Data).TangentBasisComponents[1].StreamOffset = uVar4;
  (this->Data).TangentBasisComponents[1].Offset = uVar5;
  (this->Data).TangentBasisComponents[1].Stride = uVar6;
  (this->Data).TangentBasisComponents[1].Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  (this->Data).TangentBasisComponents[1].VertexStreamUsage = EVar8;
  if (_Dst != &param_2->TextureCoordinates) {
    iVar2 = (this->Data).TextureCoordinates.ArrayMax;
    piVar1 = &(this->Data).TextureCoordinates.ArrayMax;
    iVar3 = (param_2->TextureCoordinates).ArrayNum;
    (this->Data).TextureCoordinates.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                (0x10,8,iVar3,iVar2,&_Dst->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy(_Dst,&param_2->TextureCoordinates,(longlong)iVar3 << 4);
      }
    }
  }
  uVar4 = (param_2->LightMapCoordinateComponent).StreamOffset;
  uVar5 = (param_2->LightMapCoordinateComponent).Offset;
  uVar6 = (param_2->LightMapCoordinateComponent).Stride;
  TVar7.Value = (param_2->LightMapCoordinateComponent).Type.Value;
  EVar8 = (param_2->LightMapCoordinateComponent).VertexStreamUsage;
  (this->Data).LightMapCoordinateComponent.VertexBuffer =
       (param_2->LightMapCoordinateComponent).VertexBuffer;
  (this->Data).LightMapCoordinateComponent.StreamOffset = uVar4;
  (this->Data).LightMapCoordinateComponent.Offset = uVar5;
  (this->Data).LightMapCoordinateComponent.Stride = uVar6;
  (this->Data).LightMapCoordinateComponent.Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  (this->Data).LightMapCoordinateComponent.VertexStreamUsage = EVar8;
  uVar4 = (param_2->ColorComponent).StreamOffset;
  uVar5 = (param_2->ColorComponent).Offset;
  uVar6 = (param_2->ColorComponent).Stride;
  TVar7.Value = (param_2->ColorComponent).Type.Value;
  EVar8 = (param_2->ColorComponent).VertexStreamUsage;
  (this->Data).ColorComponent.VertexBuffer = (param_2->ColorComponent).VertexBuffer;
  (this->Data).ColorComponent.StreamOffset = uVar4;
  (this->Data).ColorComponent.Offset = uVar5;
  (this->Data).ColorComponent.Stride = uVar6;
  (this->Data).ColorComponent.Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  (this->Data).ColorComponent.VertexStreamUsage = EVar8;
  (this->Data).PositionComponentSRV = param_2->PositionComponentSRV;
  (this->Data).TangentsSRV = param_2->TangentsSRV;
  (this->Data).TextureCoordinatesSRV = param_2->TextureCoordinatesSRV;
  (this->Data).ColorComponentsSRV = param_2->ColorComponentsSRV;
  (this->Data).ColorIndexMask = param_2->ColorIndexMask;
  (this->Data).LightMapCoordinateIndex = param_2->LightMapCoordinateIndex;
  (this->Data).NumTexCoords = param_2->NumTexCoords;
  (this->Data).LODLightmapDataIndex = param_2->LODLightmapDataIndex;
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

// ShouldCompilePermutation @ 148dd2550

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
FNiagaraMeshVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  if ((((param_1->MaterialParameters)._padding_ & 0x20000002) != 0) &&
     ((int)(param_1->MaterialParameters)._padding_ != 3)) {
    return true;
  }
  return false;
}

