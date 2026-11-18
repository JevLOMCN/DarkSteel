// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// ~FVertexFactory @ 145ec46c0

void __thiscall FVertexFactory::~FVertexFactory(FVertexFactory *this)

{
  FRHIResource *pFVar1;
  ForElementType<FVertexFactory::FVertexStream> FVar2;
  
  this->_padding_ = (longlong)&___7FVertexFactory__6B_;
  pFVar1 = (FRHIResource *)(this->PositionAndNormalDeclaration).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->PositionDeclaration).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->Declaration).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  FVar2 = (this->PositionAndNormalStream).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->PositionStream).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->Streams).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// AccessStreamComponent @ 145ec5270

FVertexElement __thiscall
FVertexFactory::AccessStreamComponent
          (FVertexFactory *this,FVertexStreamComponent *param_1,uchar param_2,
          EVertexInputStreamType param_3)

{
  EVertexStreamUsage EVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined7 in_register_00000081;
  undefined8 *puVar6;
  char in_stack_00000028;
  FVertexStream local_28;
  
  puVar6 = (undefined8 *)CONCAT71(in_register_00000081,param_2);
  EVar1 = *(EVertexStreamUsage *)((longlong)puVar6 + 0xf);
  local_28.VertexBuffer = (FVertexBuffer *)*puVar6;
  local_28.Offset = *(uint *)(puVar6 + 1);
  local_28.Stride = (ushort)*(byte *)((longlong)puVar6 + 0xd);
  uVar2 = *(undefined1 *)((longlong)puVar6 + 0xe);
  uVar3 = *(undefined1 *)((longlong)puVar6 + 0xc);
  local_28.Padding = '\0';
  local_28.VertexStreamUsage = EVar1;
  if (in_stack_00000028 == '\x01') {
    iVar5 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(&this->PositionStream,&local_28);
    *(char *)&param_1->VertexBuffer = (char)iVar5;
    *(undefined1 *)((longlong)&param_1->VertexBuffer + 1) = uVar3;
    *(undefined1 *)((longlong)&param_1->VertexBuffer + 2) = uVar2;
    *(ushort *)((longlong)&param_1->VertexBuffer + 4) = local_28.Stride;
    *(ushort *)((longlong)&param_1->VertexBuffer + 6) = (ushort)(EVar1 & Instancing);
  }
  else {
    if (in_stack_00000028 == '\x02') {
      iVar5 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                        (&this->PositionAndNormalStream,&local_28);
      uVar4 = (undefined1)iVar5;
    }
    else {
      iVar5 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(&this->Streams,&local_28);
      uVar4 = (undefined1)iVar5;
    }
    *(undefined1 *)&param_1->VertexBuffer = uVar4;
    *(undefined1 *)((longlong)&param_1->VertexBuffer + 1) = uVar3;
    *(undefined1 *)((longlong)&param_1->VertexBuffer + 2) = uVar2;
    *(ushort *)((longlong)&param_1->VertexBuffer + 6) = (ushort)(EVar1 & Instancing);
    *(ushort *)((longlong)&param_1->VertexBuffer + 4) = local_28.Stride;
  }
  *(EVertexInputStreamType *)((longlong)&param_1->VertexBuffer + 3) = param_3;
  return (FVertexElement)param_1;
}

// AddPrimitiveIdStreamElement @ 145ec5370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVertexFactory::AddPrimitiveIdStreamElement
          (FVertexFactory *this,EVertexInputStreamType param_1,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_2,uchar param_3,uchar param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_58 [16];
  uchar local_48 [4];
  undefined4 local_44;
  FVertexStream local_40;
  FVertexStream local_30;
  
  lVar5 = (**(code **)(this->_padding_ + 0x30))();
  if (((*(byte *)(lVar5 + 0x38) & 0x80) == 0) ||
     (bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                          (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel), !bVar2)) {
    return false;
  }
  if ((param_4 != 0xff) &&
     ((param_3 != param_4 &&
      (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeIndex_Mobile == 0xff || AttributeIndex == AttributeIndex_Mobile"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                          ,0x163,L""), bVar2)))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((1 < (int)GMaxRHIFeatureLevel) || (param_4 != 0xff)) {
    uVar7 = 0;
    bVar2 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (!bVar2) {
      if (param_1 == PositionOnly) {
        local_44._0_1_ = '\0';
        local_44._1_1_ = '\0';
        local_44._2_1_ = '\x01';
        local_44._3_1_ = '\0';
        local_58._8_8_ = &GPrimitiveIdDummy;
        local_48[0] = '\0';
        local_48[1] = '\0';
        local_48[2] = '\0';
        local_48[3] = '\0';
        iVar4 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                          (&this->PositionStream,(FVertexStream *)(local_58 + 8));
        local_58[0] = (uchar)iVar4;
        local_58._4_2_ = (ushort)local_44;
      }
      else if (param_1 == PositionAndNormalOnly) {
        local_40._12_4_ = 0x10000;
        local_40.VertexBuffer = (FVertexBuffer *)&GPrimitiveIdDummy;
        local_40.Offset = 0;
        iVar4 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                          (&this->PositionAndNormalStream,&local_40);
        local_58[0] = (uchar)iVar4;
        local_58._4_2_ = local_40.Stride;
      }
      else {
        local_30._12_4_ = 0x10000;
        local_30.VertexBuffer = (FVertexBuffer *)&GPrimitiveIdDummy;
        local_30.Offset = 0;
        iVar4 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(&this->Streams,&local_30);
        local_58[0] = (uchar)iVar4;
        local_58._4_2_ = local_30.Stride;
      }
      local_58[6] = '\x01';
      local_58[7] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\x14';
      local_58[3] = param_3;
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_58) &&
          (local_58 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(local_58._6_2_,
                    CONCAT24(local_58._4_2_,
                             CONCAT13(local_58[3],CONCAT21(local_58._1_2_,local_58[0]))));
      uVar6 = param_2->ArrayNum - 1;
      uVar7 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar7 = (uint)(param_2->AllocatorInstance).InlineData[(longlong)param_2->ArrayNum + -1].Pad[0]
      ;
    }
    SetPrimitiveIdStreamIndex(this,(FGenericStaticFeatureLevel)GMaxRHIFeatureLevel,param_1,uVar7);
  }
  return true;
}

// GetStreams @ 145ec92f0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVertexFactory::GetStreams
          (FVertexFactory *this,Type param_1,EVertexInputStreamType param_2,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  byte bVar1;
  EShaderPlatform EVar2;
  ForElementType<FVertexFactory::FVertexStream> FVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  ForElementType<FVertexInputStream> FVar12;
  longlong lVar13;
  ForElementType<FVertexInputStream> FVar14;
  ForElementType<FVertexFactory::FVertexStream> FVar15;
  ForElementType<FVertexInputStream> FVar16;
  uint uVar17;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (((int)this->_padding_ == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                         ,0x102,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_2 != Default) {
    if (param_2 == PositionOnly) {
      uVar17 = 0;
      if ((this->PositionStream).ArrayNum < 1) {
        return;
      }
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar17 < (this->PositionStream).ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (this->PositionStream).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<FVertexFactory::FVertexStream>)&this->PositionStream;
        if (FVar3 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
          FVar15 = FVar3;
        }
        if ((*(int *)(*(longlong *)((longlong)FVar15 + lVar11) + 0x18) == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stream.VertexBuffer->IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                               ,0x128,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(undefined8 *)(*(longlong *)((longlong)FVar15 + lVar11) + 0x20);
        uStack_3c = (undefined4)uVar4;
        uStack_38 = (undefined4)((ulonglong)uVar4 >> 0x20);
        FVar16 = (param_3->AllocatorInstance).SecondaryData;
        local_40 = (*(uint *)((uchar *)((longlong)FVar15 + 8) + lVar11) & 0x7ffffff) << 4 |
                   uVar17 & 0xf;
        FVar14 = (ForElementType<FVertexInputStream>)param_3;
        if (FVar16 != (ForElementType<FVertexInputStream>)0x0) {
          FVar14 = FVar16;
        }
        if ((ulonglong)FVar14 <= &local_40) {
          FVar14 = (ForElementType<FVertexInputStream>)param_3;
          if (FVar16 != (ForElementType<FVertexInputStream>)0x0) {
            FVar14 = FVar16;
          }
          if ((&local_40 < (uint *)((longlong)FVar14 + (longlong)param_3->ArrayMax * 0xc)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == param_3->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                            (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar9 + 1;
        FVar16 = (param_3->AllocatorInstance).SecondaryData;
        FVar14 = (ForElementType<FVertexInputStream>)param_3;
        if (FVar16 != (ForElementType<FVertexInputStream>)0x0) {
          FVar14 = FVar16;
        }
        uVar17 = uVar17 + 1;
        lVar11 = lVar11 + 0x10;
        *(ulonglong *)((longlong)FVar14 + (longlong)iVar9 * 0xc) = CONCAT44(uStack_3c,local_40);
        *(undefined4 *)((uchar *)((longlong)FVar14 + 8) + (longlong)iVar9 * 0xc) = uStack_38;
        if ((this->PositionStream).ArrayNum <= (int)uVar17) {
          return;
        }
      } while( true );
    }
    if (param_2 != PositionAndNormalOnly) {
      return;
    }
    uVar17 = 0;
    if ((this->PositionAndNormalStream).ArrayNum < 1) {
      return;
    }
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar17 < (this->PositionAndNormalStream).ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->PositionAndNormalStream).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FVertexFactory::FVertexStream>)&this->PositionAndNormalStream;
      if (FVar3 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
        FVar15 = FVar3;
      }
      if ((*(int *)(*(longlong *)((longlong)FVar15 + lVar11) + 0x18) == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stream.VertexBuffer->IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                             ,0x132,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar4 = *(undefined8 *)(*(longlong *)((longlong)FVar15 + lVar11) + 0x20);
      uStack_30 = (undefined4)uVar4;
      uStack_2c = (undefined4)((ulonglong)uVar4 >> 0x20);
      FVar16 = (param_3->AllocatorInstance).SecondaryData;
      local_34 = (*(uint *)((uchar *)((longlong)FVar15 + 8) + lVar11) & 0x7ffffff) << 4 |
                 uVar17 & 0xf;
      FVar14 = (ForElementType<FVertexInputStream>)param_3;
      if (FVar16 != (ForElementType<FVertexInputStream>)0x0) {
        FVar14 = FVar16;
      }
      if ((ulonglong)FVar14 <= &local_34) {
        FVar14 = (ForElementType<FVertexInputStream>)param_3;
        if (FVar16 != (ForElementType<FVertexInputStream>)0x0) {
          FVar14 = FVar16;
        }
        if ((&local_34 < (uint *)((longlong)FVar14 + (longlong)param_3->ArrayMax * 0xc)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar9 = param_3->ArrayNum;
      if (iVar9 == param_3->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                          (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar9 + 1;
      FVar16 = (param_3->AllocatorInstance).SecondaryData;
      FVar14 = (ForElementType<FVertexInputStream>)param_3;
      if (FVar16 != (ForElementType<FVertexInputStream>)0x0) {
        FVar14 = FVar16;
      }
      uVar17 = uVar17 + 1;
      lVar11 = lVar11 + 0x10;
      *(ulonglong *)((longlong)FVar14 + (longlong)iVar9 * 0xc) = CONCAT44(uStack_30,local_34);
      *(undefined4 *)((uchar *)((longlong)FVar14 + 8) + (longlong)iVar9 * 0xc) = uStack_2c;
    } while ((int)uVar17 < (this->PositionAndNormalStream).ArrayNum);
    return;
  }
  lVar11 = (**(code **)(this->_padding_ + 0x30))(this);
  if ((*(uint *)(lVar11 + 0x38) & 0x4000) != 0) {
    if (param_1 == Num) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFeatureLevel != ERHIFeatureLevel::Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                         ,0xb6,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if ((int)param_1 < 2) goto LAB_145ec93f9;
    EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2ce,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bSupportsManualVertexFetch != 0) {
      bVar6 = true;
      goto LAB_145ec93fc;
    }
  }
LAB_145ec93f9:
  bVar6 = false;
LAB_145ec93fc:
  uVar17 = 0;
  if (0 < (this->Streams).ArrayNum) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar17 < (this->Streams).ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->Streams).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FVertexFactory::FVertexStream>)&this->Streams;
      if (FVar3 != (ForElementType<FVertexFactory::FVertexStream>)0x0) {
        FVar15 = FVar3;
      }
      bVar1 = *(byte *)(lVar11 + 0xe + (longlong)FVar15);
      if ((((bVar1 & 4) == 0) || (!bVar6)) && ((bVar1 & 2) == 0)) {
        lVar13 = *(longlong *)(lVar11 + (longlong)FVar15);
        FVar16 = (ForElementType<FVertexInputStream>)param_3;
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) == -1)) {
          FVar14 = (param_3->AllocatorInstance).SecondaryData;
          uStack_48 = 0;
          uStack_44 = 0;
          local_4c = uVar17 & 0xf;
          FVar12 = (ForElementType<FVertexInputStream>)param_3;
          if (FVar14 != (ForElementType<FVertexInputStream>)0x0) {
            FVar12 = FVar14;
          }
          if ((ulonglong)FVar12 <= &local_4c) {
            FVar12 = (ForElementType<FVertexInputStream>)param_3;
            if (FVar14 != (ForElementType<FVertexInputStream>)0x0) {
              FVar12 = FVar14;
            }
            if ((&local_4c < (uint *)((longlong)FVar12 + (longlong)param_3->ArrayMax * 0xc)) &&
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
          }
          iVar9 = param_3->ArrayNum;
          if (iVar9 == param_3->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                              (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar9 + 1;
          FVar14 = (param_3->AllocatorInstance).SecondaryData;
          lVar13 = (longlong)iVar9;
          if (FVar14 != (ForElementType<FVertexInputStream>)0x0) {
            FVar16 = FVar14;
          }
          *(ulonglong *)((longlong)FVar16 + lVar13 * 0xc) = CONCAT44(uStack_48,local_4c);
          uVar10 = uStack_44;
        }
        else {
          local_58 = (*(uint *)(lVar11 + 8 + (longlong)FVar15) & 0x7ffffff) << 4 | uVar17 & 0xf;
          uStack_54 = (undefined4)*(undefined8 *)(lVar13 + 0x20);
          uStack_50 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x20) >> 0x20);
          FVar14 = (param_3->AllocatorInstance).SecondaryData;
          FVar12 = (ForElementType<FVertexInputStream>)param_3;
          if (FVar14 != (ForElementType<FVertexInputStream>)0x0) {
            FVar12 = FVar14;
          }
          if ((ulonglong)FVar12 <= &local_58) {
            FVar12 = (ForElementType<FVertexInputStream>)param_3;
            if (FVar14 != (ForElementType<FVertexInputStream>)0x0) {
              FVar12 = FVar14;
            }
            if ((&local_58 < (uint *)((longlong)FVar12 + (longlong)param_3->ArrayMax * 0xc)) &&
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
          }
          iVar9 = param_3->ArrayNum;
          if (iVar9 == param_3->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                              (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar9 + 1;
          FVar14 = (param_3->AllocatorInstance).SecondaryData;
          lVar13 = (longlong)iVar9;
          if (FVar14 != (ForElementType<FVertexInputStream>)0x0) {
            FVar16 = FVar14;
          }
          *(ulonglong *)((longlong)FVar16 + lVar13 * 0xc) = CONCAT44(uStack_54,local_58);
          uVar10 = uStack_50;
        }
        *(undefined4 *)((uchar *)((longlong)FVar16 + 8) + lVar13 * 0xc) = uVar10;
      }
      uVar17 = uVar17 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar17 < (this->Streams).ArrayNum);
  }
  return;
}

// GetTriangleSortingPositionSRV @ 145eca120

TRefCountPtr<FRHIShaderResourceView> __thiscall
FVertexFactory::GetTriangleSortingPositionSRV(FVertexFactory *this)

{
  FRHIShaderResourceView *in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetType @ 145eca140

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

FVertexFactoryType * __thiscall FVertexFactory::GetType(FVertexFactory *this)

{
  return (FVertexFactoryType *)0x0;
}

// InitDeclaration @ 145eca3a0

void __thiscall
FVertexFactory::InitDeclaration
          (FVertexFactory *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1,
          EVertexInputStreamType param_2)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  
  if (param_2 == PositionOnly) {
    this_00 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(param_1);
    this_01 = (FRHIResource *)(this->PositionDeclaration).Reference;
    if (this_01 == this_00) {
      return;
    }
    (this->PositionDeclaration).Reference = (FRHIVertexDeclaration *)this_00;
  }
  else if (param_2 == PositionAndNormalOnly) {
    this_00 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(param_1);
    this_01 = (FRHIResource *)(this->PositionAndNormalDeclaration).Reference;
    if (this_01 == this_00) {
      return;
    }
    (this->PositionAndNormalDeclaration).Reference = (FRHIVertexDeclaration *)this_00;
  }
  else {
    this_00 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(param_1);
    this_01 = (FRHIResource *)(this->Declaration).Reference;
    if (this_01 == this_00) {
      return;
    }
    (this->Declaration).Reference = (FRHIVertexDeclaration *)this_00;
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_01);
  }
  return;
}

// OffsetInstanceStreams @ 145eca4e0

void __thiscall
FVertexFactory::OffsetInstanceStreams
          (FVertexFactory *this,uint param_1,EVertexInputStreamType param_2,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  ForElementType<FVertexInputStream> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<FVertexFactory::FVertexStream> FVar5;
  int iVar6;
  ForElementType<FVertexInputStream> FVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if (param_2 == PositionOnly) {
    FVar5 = (this->PositionStream).AllocatorInstance.SecondaryData;
    iVar12 = (this->PositionStream).ArrayNum;
    if (FVar5 == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
      FVar5 = (ForElementType<FVertexFactory::FVertexStream>)&this->PositionStream;
    }
    if ((iVar12 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68 = FVar5._0_4_;
    uStack_64 = FVar5._4_4_;
  }
  else {
    if (param_2 == PositionAndNormalOnly) {
      FVar5 = (this->PositionAndNormalStream).AllocatorInstance.SecondaryData;
      iVar12 = (this->PositionAndNormalStream).ArrayNum;
      if (FVar5 == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
        FVar5 = (ForElementType<FVertexFactory::FVertexStream>)&this->PositionAndNormalStream;
      }
      if ((iVar12 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      FVar5 = (this->Streams).AllocatorInstance.SecondaryData;
      iVar12 = (this->Streams).ArrayNum;
      if (FVar5 == (ForElementType<FVertexFactory::FVertexStream>)0x0) {
        FVar5 = (ForElementType<FVertexFactory::FVertexStream>)&this->Streams;
      }
      if ((iVar12 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_78 = FVar5._0_4_;
    uStack_74 = FVar5._4_4_;
    local_68 = local_78;
    uStack_64 = uStack_74;
  }
  uVar9 = 0;
  if (0 < iVar12) {
    piVar11 = (int *)(CONCAT44(uStack_64,local_68) + 8);
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar12) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(byte *)((longlong)piVar11 + 6) & 1) != 0) {
        iVar6 = param_3->ArrayNum;
        uVar8 = 0;
        if (0 < iVar6) {
          lVar10 = 0;
          do {
            uVar4 = 0;
            if ((int)uVar8 < iVar6) {
              uVar4 = ~uVar8 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar1 = (param_3->AllocatorInstance).SecondaryData;
            FVar7 = (ForElementType<FVertexInputStream>)param_3;
            if (FVar1 != (ForElementType<FVertexInputStream>)0x0) {
              FVar7 = FVar1;
            }
            if ((*(uint *)(lVar10 + (longlong)FVar7) & 0xf) == uVar9) {
              uVar4 = 0;
              if ((int)uVar8 < param_3->ArrayNum) {
                uVar4 = ~uVar8 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar1 = (param_3->AllocatorInstance).SecondaryData;
              FVar7 = (ForElementType<FVertexInputStream>)param_3;
              if (FVar1 != (ForElementType<FVertexInputStream>)0x0) {
                FVar7 = FVar1;
              }
              *(uint *)((longlong)FVar7 + lVar10) =
                   *(uint *)((longlong)FVar7 + lVar10) ^
                   ((*(ushort *)(piVar11 + 1) * param_1 + *piVar11) * 0x10 ^
                   *(uint *)((longlong)FVar7 + lVar10)) & 0x7ffffff0;
            }
            iVar6 = param_3->ArrayNum;
            uVar8 = uVar8 + 1;
            lVar10 = lVar10 + 0xc;
          } while ((int)uVar8 < iVar6);
        }
      }
      uVar9 = uVar9 + 1;
      piVar11 = piVar11 + 4;
    } while ((int)uVar9 < iVar12);
  }
  return;
}

// ReleaseRHI @ 145ecbf00

void __thiscall FVertexFactory::ReleaseRHI(FVertexFactory *this)

{
  int *piVar1;
  FRHIResource *pFVar2;
  
  pFVar2 = (FRHIResource *)(this->Declaration).Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this->Declaration).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = (FRHIResource *)(this->PositionDeclaration).Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this->PositionDeclaration).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = (FRHIResource *)(this->PositionAndNormalDeclaration).Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this->PositionAndNormalDeclaration).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(pFVar2);
  }
  piVar1 = &(this->Streams).ArrayMax;
  (this->Streams).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
              (0x10,8,0,&(this->Streams).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PositionStream).ArrayMax;
  (this->PositionStream).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
              (0x10,8,0,&(this->PositionStream).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PositionAndNormalStream).ArrayMax;
  (this->PositionAndNormalStream).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
              (0x10,8,0,&(this->PositionAndNormalStream).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetPrimitiveIdStreamIndex @ 145ecc640

void __thiscall
FVertexFactory::SetPrimitiveIdStreamIndex
          (FVertexFactory *this,FGenericStaticFeatureLevel param_1,EVertexInputStreamType param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 + 0x80U < 0x100) {
    this->PrimitiveIdStreamIndex[param_2] = (schar)param_3;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StreamIndex >= TNumericLimits<int8>::Min() && StreamIndex <= TNumericLimits<int8>::Max()"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                     ,0x2fa,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->PrimitiveIdStreamIndex[param_2] = (schar)param_3;
  return;
}

