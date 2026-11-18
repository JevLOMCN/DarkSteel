// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 15

// FNaniteRasterPipelines @ 145036c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FNaniteRasterPipelines * __thiscall
FNaniteRasterPipelines::FNaniteRasterPipelines(FNaniteRasterPipelines *this)

{
  undefined8 uVar1;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong64 uVar7;
  FNaniteRasterPipelines *pFVar8;
  UMaterial *pUVar9;
  FNaniteRasterBin FVar10;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar11;
  uint uVar12;
  ulong64 uVar13;
  undefined4 local_80;
  
  uVar12 = 0;
  (this->PipelineBins).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->PipelineBins).NumBits = 0;
  (this->PipelineBins).MaxBits = 0x80;
  (this->PerPixelEvalPipelineBins).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PerPixelEvalPipelineBins).NumBits = 0;
  (this->PerPixelEvalPipelineBins).MaxBits = 0x80;
  (this->CustomPassRefCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPassRefCounts).ArrayNum = 0;
  (this->CustomPassRefCounts).ArrayMax = 0;
  (this->PerPixelEvalCustomPassRefCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerPixelEvalCustomPassRefCounts).ArrayNum = 0;
  (this->PerPixelEvalCustomPassRefCounts).ArrayMax = 0;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
              *)&this->PipelineMap);
  (this->FixedFunctionBins).AllocatorInstance.SecondaryData =
       (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0;
  uVar13 = 0x6c;
  (this->FixedFunctionBins).ArrayNum = 0;
  (this->FixedFunctionBins).ArrayMax = 6;
  iVar6 = (this->PipelineBins).MaxBits;
  if (iVar6 < 0x100) {
    uVar7 = 0x6c;
    uVar5 = iVar6 + 0x1fU >> 5;
    if (uVar5 < 5) {
      uVar5 = 0;
    }
    if (uVar5 == 0) {
      uVar7 = 0x20;
    }
    uVar7 = FMemory::QuantizeSize(uVar7,0);
    iVar6 = (int)(uVar7 >> 2);
    if (iVar6 < 8) {
      iVar6 = 0x7fffffff;
    }
    (this->PipelineBins).MaxBits = iVar6 << 5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->PipelineBins,(this->PipelineBins).NumBits);
  }
  iVar6 = (this->PerPixelEvalPipelineBins).MaxBits;
  if (iVar6 < 0x100) {
    uVar5 = iVar6 + 0x1fU >> 5;
    if (uVar5 < 5) {
      uVar5 = 0;
    }
    if (uVar5 == 0) {
      uVar13 = 0x20;
    }
    uVar13 = FMemory::QuantizeSize(uVar13,0);
    iVar6 = (int)(uVar13 >> 2);
    if (iVar6 < 8) {
      iVar6 = 0x7fffffff;
    }
    (this->PerPixelEvalPipelineBins).MaxBits = iVar6 << 5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              (&this->PerPixelEvalPipelineBins,(this->PerPixelEvalPipelineBins).NumBits);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::Reserve((TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
             *)&this->PipelineMap,0x100);
  if ((this->FixedFunctionBins).ArrayNum != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FixedFunctionBins.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x820,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FNaniteRasterPipelines *)(*pcVar3)();
      return pFVar8;
    }
  }
  NaniteVoxelsSupported();
  do {
    pUVar9 = UMaterial::GetDefaultMaterial(MD_Surface);
    (**(code **)(pUVar9->_padding_ + 0x310))(pUVar9);
    FVar10 = Register(this,(FNaniteRasterPipeline *)&stack0x00000008);
    local_80 = CONCAT31(local_80._1_3_,(char)uVar12);
    uVar1 = *(undefined8 *)FVar10;
    if (((uint)((ulonglong)uVar1 >> 0x20) & 0xffff) != uVar12) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bin.RasterBin.BinIndex == BinMask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                         ,0x82c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FNaniteRasterPipelines *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar6 = (this->FixedFunctionBins).ArrayNum;
    if (iVar6 == (this->FixedFunctionBins).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>_>
                        (0x40c,&(this->FixedFunctionBins).AllocatorInstance,
                         &(this->FixedFunctionBins).ArrayMax);
    }
    (this->FixedFunctionBins).ArrayNum = iVar6 + 1;
    FVar2 = (this->FixedFunctionBins).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)&this->FixedFunctionBins;
    if (FVar2 != (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0) {
      FVar11 = FVar2;
    }
    uVar12 = uVar12 + 1;
    *(undefined8 *)((longlong)FVar11 + (longlong)iVar6 * 0xc) = uVar1;
    *(undefined4 *)((uchar *)((longlong)FVar11 + 8) + (longlong)iVar6 * 0xc) = local_80;
    bVar4 = NaniteVoxelsSupported();
  } while (uVar12 <= (uint)bVar4 * 0x10 + 0xf);
  return this;
}

// ~FNaniteRasterPipelines @ 145038600

void __thiscall FNaniteRasterPipelines::~FNaniteRasterPipelines(FNaniteRasterPipelines *this)

{
  undefined1 *puVar1;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  int iVar5;
  undefined1 *puVar6;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar7;
  undefined1 local_res8 [8];
  
  FVar7 = (this->FixedFunctionBins).AllocatorInstance.SecondaryData;
  iVar5 = (this->FixedFunctionBins).ArrayNum;
  if (FVar7 == (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0) {
    FVar7 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)&this->FixedFunctionBins;
  }
  FVar2 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)
          ((longlong)FVar7 + (longlong)iVar5 * 0xc);
  while( true ) {
    if ((this->FixedFunctionBins).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FNaniteRasterPipelines::FFixedFunctionBin,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar2) break;
    Unregister(this,(FNaniteRasterBin *)FVar7);
    FVar7 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)((longlong)FVar7 + 0xc);
  }
  (this->FixedFunctionBins).ArrayNum = 0;
  if ((this->FixedFunctionBins).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>_>
              (0xc,4,0,&(this->FixedFunctionBins).AllocatorInstance,0,
               &(this->FixedFunctionBins).ArrayMax);
  }
  (this->PipelineBins).NumBits = 0;
  puVar6 = &(this->PipelineMap).field_0x54;
  (this->PerPixelEvalPipelineBins).NumBits = 0;
  *(undefined4 *)&(this->PipelineMap).field_0x50 = 0;
  if (*(int *)puVar6 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,(ForElementType<unsigned_int> *)&(this->PipelineMap).field_0x40,0,(int *)puVar6
              );
  }
  iVar5 = *(int *)&(this->PipelineMap).field_0x50;
  if (iVar5 == *(int *)puVar6) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)&(this->PipelineMap).field_0x40,
                       (int *)puVar6);
  }
  puVar1 = &(this->PipelineMap).field_0x58;
  *(int *)&(this->PipelineMap).field_0x50 = iVar5 + 1;
  puVar6 = &(this->PipelineMap).field_0x6c;
  *(undefined4 *)&(this->PipelineMap).field_0x68 = 0;
  if (*(int *)puVar6 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,(ForElementType<Experimental::FHashType> *)puVar1,0,(int *)puVar6);
  }
  iVar5 = *(int *)&(this->PipelineMap).field_0x68;
  if (iVar5 == *(int *)&(this->PipelineMap).field_0x6c) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,(ForElementType<Experimental::FHashType> *)puVar1,(int *)puVar6);
  }
  *(int *)&(this->PipelineMap).field_0x68 = iVar5 + 1;
  puVar6 = *(undefined1 **)&(this->PipelineMap).field_0x60;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  DefaultConstructItems<Experimental::FHashType,int>(puVar6 + (longlong)iVar5 * 4,1);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)&this->PipelineMap);
  *(undefined8 *)&(this->PipelineMap).field_0x70 = 0;
  FVar7 = (this->FixedFunctionBins).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
              *)&this->PipelineMap);
  pFVar3 = (this->PerPixelEvalCustomPassRefCounts).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CustomPassRefCounts).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVar4 = (this->PerPixelEvalPipelineBins).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar4 = (this->PipelineBins).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  return;
}

// AllocateBin @ 14504ac10

ushort __thiscall FNaniteRasterPipelines::AllocateBin(FNaniteRasterPipelines *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  FNaniteRasterPipelines *this_00;
  
  this_00 = (FNaniteRasterPipelines *)&this->PerPixelEvalPipelineBins;
  if (!param_1) {
    this_00 = this;
  }
  uVar4 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit(&this_00->PipelineBins,0);
  if (uVar4 == 0xffffffff) {
    uVar4 = TBitArray<FDefaultBitArrayAllocator>::Add(&this_00->PipelineBins,true);
  }
  if (((uVar4 & 0xffff) != uVar4) ||
     (0xfffe < (this->PerPixelEvalPipelineBins).NumBits + (this->PipelineBins).NumBits)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("int32(uint16(BinIndex)) == BinIndex && PipelineBins.Num() + PerPixelEvalPipelineBins.Num() < int32(0xFFFFu)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x857,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = -(ushort)uVar4 - 2;
  if (!param_1) {
    uVar3 = (ushort)uVar4;
  }
  return uVar3;
}

// AllocateFixedFunctionBins @ 14504ad30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FNaniteRasterPipelines::AllocateFixedFunctionBins(FNaniteRasterPipelines *this)

{
  undefined8 uVar1;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMaterial *pUVar6;
  FNaniteRasterBin FVar7;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar8;
  uint uVar9;
  undefined4 local_60;
  
  if ((this->FixedFunctionBins).ArrayNum != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FixedFunctionBins.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x820,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar9 = 0;
  NaniteVoxelsSupported();
  do {
    pUVar6 = UMaterial::GetDefaultMaterial(MD_Surface);
    (**(code **)(pUVar6->_padding_ + 0x310))(pUVar6);
    FVar7 = Register(this,(FNaniteRasterPipeline *)&stack0x00000008);
    local_60 = CONCAT31(local_60._1_3_,(char)uVar9);
    uVar1 = *(undefined8 *)FVar7;
    if (((uint)((ulonglong)uVar1 >> 0x20) & 0xffff) != uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bin.RasterBin.BinIndex == BinMask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                         ,0x82c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->FixedFunctionBins).ArrayNum;
    if (iVar5 == (this->FixedFunctionBins).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>_>
                        (0x40c,&(this->FixedFunctionBins).AllocatorInstance,
                         &(this->FixedFunctionBins).ArrayMax);
    }
    (this->FixedFunctionBins).ArrayNum = iVar5 + 1;
    FVar2 = (this->FixedFunctionBins).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)&this->FixedFunctionBins;
    if (FVar2 != (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0) {
      FVar8 = FVar2;
    }
    uVar9 = uVar9 + 1;
    *(undefined8 *)((longlong)FVar8 + (longlong)iVar5 * 0xc) = uVar1;
    *(undefined4 *)((uchar *)((longlong)FVar8 + 8) + (longlong)iVar5 * 0xc) = local_60;
    bVar4 = NaniteVoxelsSupported();
  } while (uVar9 <= (uint)bVar4 * 0x10 + 0xf);
  return;
}

// GetBinCount @ 145061d80

uint __thiscall FNaniteRasterPipelines::GetBinCount(FNaniteRasterPipelines *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->PipelineBins,true);
  iVar2 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->PerPixelEvalPipelineBins,true);
  return iVar2 + iVar1 + 2;
}

// GetRegularBinCount @ 145064160

uint __thiscall FNaniteRasterPipelines::GetRegularBinCount(FNaniteRasterPipelines *this)

{
  int iVar1;
  
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->PipelineBins,true);
  return iVar1 + 1;
}

// IsBinAllocated @ 14506c1f0

bool __thiscall FNaniteRasterPipelines::IsBinAllocated(FNaniteRasterPipelines *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ForElementType<unsigned_int> FVar5;
  
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    FVar5 = (this->PipelineBins).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<unsigned_int>)0x0) {
      this = (FNaniteRasterPipelines *)FVar5;
    }
    return (*(uint *)((longlong)this + (ulonglong)(param_1 >> 5) * 4) & 1 << ((byte)param_1 & 0x1f))
           != 0;
  }
  uVar4 = -param_1 - 2;
  if ((this->PerPixelEvalPipelineBins).NumBits <= (int)(uint)uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar5 = (this->PerPixelEvalPipelineBins).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->PerPixelEvalPipelineBins;
  }
  return (*(uint *)((longlong)FVar5 + (ulonglong)(uVar4 >> 5) * 4) & 1 << ((byte)uVar4 & 0x1f)) != 0
  ;
}

// Register @ 145072390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNaniteRasterBin __thiscall
FNaniteRasterPipelines::Register(FNaniteRasterPipelines *this,FNaniteRasterPipeline *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> *pTVar8;
  FNaniteRasterBin FVar9;
  FNaniteRasterPipelines *this_00;
  FNaniteRasterEntry *in_R8;
  byte bVar10;
  undefined1 auStackY_108 [32];
  uint local_d4 [3];
  ForAnyElementType local_c8;
  undefined8 uStack_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  *(undefined4 *)&param_1->RasterMaterial = 0xffffffff;
  uStack_90 = 0;
  local_98 = 0xffffffff;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0x80;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0x3f00000040800000;
  local_68 = 0x3f80000040800000;
  uStack_60 = 0;
  local_58 = 0xffff00000000;
  *(undefined2 *)((longlong)&param_1->RasterMaterial + 4) = 0xffff;
  local_c8.Data = (FScriptContainerElement *)0x0;
  uStack_c0 = 0;
  local_b8.AllocatorInstance.InlineData[0] = '\0';
  local_b8.AllocatorInstance.InlineData[1] = '\0';
  local_b8.AllocatorInstance.InlineData[2] = '\0';
  local_b8.AllocatorInstance.InlineData[3] = '\0';
  local_b8.AllocatorInstance.InlineData[4] = '\0';
  local_b8.AllocatorInstance.InlineData[5] = '\0';
  local_b8.AllocatorInstance.InlineData[6] = '\0';
  local_b8.AllocatorInstance.InlineData[7] = '\0';
  local_b8.AllocatorInstance.InlineData[8] = '\0';
  local_b8.AllocatorInstance.InlineData[9] = '\0';
  local_b8.AllocatorInstance.InlineData[10] = '\0';
  local_b8.AllocatorInstance.InlineData[0xb] = '\0';
  local_b8.AllocatorInstance.InlineData[0xc] = '\0';
  local_b8.AllocatorInstance.InlineData[0xd] = '\0';
  local_b8.AllocatorInstance.InlineData[0xe] = '\0';
  local_b8.AllocatorInstance.InlineData[0xf] = '\0';
  uVar7 = FNaniteRasterPipeline::GetPipelineHash((FNaniteRasterPipeline *)in_R8);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FindOrUpdateIdByHashInternal<0,FNaniteRasterPipeline_const_&,FNaniteRasterEntry>
            ((TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
              *)&this->PipelineMap,(FHashType)(uint)local_d4,
             (FNaniteRasterPipeline *)(ulonglong)(uVar7 & 0x7fffffff),in_R8,(bool *)&local_c8);
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  uVar4 = uStack_c0 >> 0x20;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,0,&local_c8,0,(int *)((longlong)&uStack_c0 + 4));
  }
  iVar5 = local_b8.MaxBits;
  local_98 = 0xffffffff;
  local_b8._24_8_ = (ulonglong)(uint)local_b8.MaxBits << 0x20;
  if (0x80 < (uint)iVar5) {
    local_b8.NumBits = 0;
    local_b8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  *(uint *)&param_1->RasterMaterial = local_d4[0];
  pTVar8 = Experimental::RobinHoodHashTable_Private::
           TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
           ::FData::Get((FData *)&this->PipelineMap,local_d4[0]);
  if (*(int *)&(pTVar8->Pair).field_0x90 == 0) {
    uVar3 = *(undefined8 *)&(in_R8->CacheMap).field_0x8;
    *(undefined8 *)&(pTVar8->Pair).field_0x70 = *(undefined8 *)&in_R8->CacheMap;
    *(undefined8 *)&(pTVar8->Pair).field_0x78 = uVar3;
    uVar3 = *(undefined8 *)&(in_R8->CacheMap).field_0x18;
    *(undefined8 *)&(pTVar8->Pair).field_0x80 = *(undefined8 *)&(in_R8->CacheMap).field_0x10;
    *(undefined8 *)&(pTVar8->Pair).field_0x88 = uVar3;
    bVar10 = (in_R8->CacheMap).field_0x18 & 8;
    this_00 = (FNaniteRasterPipelines *)&this->PerPixelEvalPipelineBins;
    if (bVar10 == 0) {
      this_00 = this;
    }
    uVar7 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit(&this_00->PipelineBins,0);
    if (uVar7 == 0xffffffff) {
      uVar7 = TBitArray<FDefaultBitArrayAllocator>::Add(&this_00->PipelineBins,true);
    }
    if ((((uVar7 & 0xffff) != uVar7) ||
        (0xfffe < (this->PipelineBins).NumBits + (this->PerPixelEvalPipelineBins).NumBits)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(uint16(BinIndex)) == BinIndex && PipelineBins.Num() + PerPixelEvalPipelineBins.Num() < int32(0xFFFFu)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                           ,0x857,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      FVar9 = (FNaniteRasterBin)(*pcVar2)();
      return FVar9;
    }
    if (bVar10 == 0) {
      *(short *)&(pTVar8->Pair).field_0x94 = (short)uVar7;
    }
    else {
      *(short *)&(pTVar8->Pair).field_0x94 = -2 - (short)uVar7;
    }
  }
  puVar1 = &(pTVar8->Pair).field_0x90;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  *(undefined2 *)((longlong)&param_1->RasterMaterial + 4) =
       *(undefined2 *)&(pTVar8->Pair).field_0x94;
  return (FNaniteRasterBin)param_1;
}

// RegisterBinForCustomPass @ 145072800

void __thiscall
FNaniteRasterPipelines::RegisterBinForCustomPass(FNaniteRasterPipelines *this,ushort param_1)

{
  uchar *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uchar *puVar9;
  
  bVar4 = IsBinAllocated(this,param_1);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBinAllocated(BinIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x8a0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar8 = 0x50;
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    lVar8 = 0x40;
  }
  puVar9 = (this->PipelineBins).AllocatorInstance.InlineData + lVar8;
  puVar1 = puVar9 + 8;
  uVar5 = -param_1 - 2;
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    uVar5 = param_1;
  }
  if (*(int *)puVar1 <= (int)(uint)uVar5) {
    iVar7 = ((uint)uVar5 - *(int *)puVar1) + 1;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar7,(ForAnyElementType *)puVar9,(int *)puVar1,(int *)(puVar9 + 0xc));
    memset((void *)(*(longlong *)puVar9 + (longlong)iVar6 * 4),0,(longlong)iVar7 << 2);
  }
  if (*(int *)puVar1 <= (int)(uint)uVar5) {
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
  piVar2 = (int *)(*(longlong *)puVar9 + (ulonglong)uVar5 * 4);
  *piVar2 = *piVar2 + 1;
  return;
}

// ReleaseBin @ 145072f20

void __thiscall FNaniteRasterPipelines::ReleaseBin(FNaniteRasterPipelines *this,ushort param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ForElementType<unsigned_int> FVar5;
  
  bVar3 = IsBinAllocated(this,param_1);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBinAllocated(BinIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x85d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    FVar5 = (this->PipelineBins).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<unsigned_int>)0x0) {
      this = (FNaniteRasterPipelines *)FVar5;
    }
    puVar1 = (uint *)((longlong)this + (ulonglong)(param_1 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
    return;
  }
  uVar4 = -param_1 - 2;
  if ((this->PerPixelEvalPipelineBins).NumBits <= (int)(uint)uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar5 = (this->PerPixelEvalPipelineBins).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->PerPixelEvalPipelineBins;
  }
  puVar1 = (uint *)((longlong)FVar5 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)uVar4 & 0x1f));
  return;
}

// ReleaseFixedFunctionBins @ 1450730f0

void __thiscall FNaniteRasterPipelines::ReleaseFixedFunctionBins(FNaniteRasterPipelines *this)

{
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar1;
  int iVar2;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar3;
  undefined1 local_res8 [8];
  
  FVar3 = (this->FixedFunctionBins).AllocatorInstance.SecondaryData;
  iVar2 = (this->FixedFunctionBins).ArrayNum;
  if (FVar3 == (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0) {
    FVar3 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)&this->FixedFunctionBins;
  }
  FVar1 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)
          ((longlong)FVar3 + (longlong)iVar2 * 0xc);
  while( true ) {
    if ((this->FixedFunctionBins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNaniteRasterPipelines::FFixedFunctionBin,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar3 == FVar1) break;
    Unregister(this,(FNaniteRasterBin *)FVar3);
    FVar3 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)((longlong)FVar3 + 0xc);
  }
  (this->FixedFunctionBins).ArrayNum = 0;
  if ((this->FixedFunctionBins).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>_>
              (0xc,4,0,&(this->FixedFunctionBins).AllocatorInstance,0,
               &(this->FixedFunctionBins).ArrayMax);
  }
  return;
}

// ReloadFixedFunctionBins @ 1450731a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FNaniteRasterPipelines::ReloadFixedFunctionBins(FNaniteRasterPipelines *this)

{
  TRobinHoodHashMap<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  *this_00;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  FDisplacementScaling FVar6;
  FDisplacementFadeRange FVar7;
  bool bVar8;
  uint uVar9;
  FIteratorState FVar10;
  UMaterial *pUVar11;
  FMaterialRenderProxy *pFVar12;
  TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> *pTVar13;
  undefined4 extraout_var;
  undefined1 *puVar14;
  ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> FVar15;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  byte bStack_8f;
  undefined6 uStack_8e;
  FNaniteRasterPipeline local_88 [2];
  
  FVar7 = _UNK_150efd758;
  FVar6 = ___xmm_3f800000408000003f00000040800000;
  FVar15 = (this->FixedFunctionBins).AllocatorInstance.SecondaryData;
  iVar3 = (this->FixedFunctionBins).ArrayNum;
  if (FVar15 == (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)0x0) {
    FVar15 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)&this->FixedFunctionBins;
  }
  this_00 = &this->PipelineMap;
  FVar1 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)
          ((longlong)FVar15 + (longlong)iVar3 * 0xc);
  do {
    if ((this->FixedFunctionBins).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNaniteRasterPipelines::FFixedFunctionBin,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar15 == FVar1) {
      Experimental::RobinHoodHashTable_Private::
      TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
      ::FData::Next((FData *)this_00,(FIteratorState)(uint)local_res18);
      uVar9 = *(uint *)&(this->PipelineMap).field_0x8;
      while (local_res18[0] != uVar9) {
        pTVar13 = Experimental::RobinHoodHashTable_Private::
                  TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                  ::FData::Get((FData *)this_00,local_res18[0]);
        TSet<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>,TDefaultMapHashableKeyFuncs<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>,TDefaultMapHashableKeyFuncs<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,0>,FDefaultSetAllocator>
                 *)&(pTVar13->Pair).field_0x20);
        FVar10 = Experimental::RobinHoodHashTable_Private::
                 TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                 ::FData::Next((FData *)this_00,(uint)local_res20);
        local_res18[0] = *(uint *)CONCAT44(extraout_var,FVar10.Index);
      }
      return;
    }
    bVar2 = *(byte *)((longlong)FVar15 + 8);
    pUVar11 = UMaterial::GetDefaultMaterial(MD_Surface);
    pFVar12 = (FMaterialRenderProxy *)(**(code **)(pUVar11->_padding_ + 0x310))(pUVar11);
    bStack_8f = bVar2 & 8 | bStack_8f & 0xc0;
    uVar5._1_1_ = bStack_8f;
    uVar5._0_1_ = ((bVar2 & 6) * '\x02' | bVar2 & 0x10) << 2 | bVar2 & 1;
    uVar5._2_6_ = uStack_8e;
    local_88[0].DisplacementScaling = FVar6;
    local_88[0].DisplacementFadeRange = FVar7;
    local_88[0].RasterMaterial = pFVar12;
    local_88[0]._24_8_ = uVar5;
    uVar9 = FNaniteRasterPipeline::GetPipelineHash(local_88);
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
    ::FindIdByHash((TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                    *)&this->PipelineMap,(FHashType)(uint)local_res10,
                   (FNaniteRasterPipeline *)(ulonglong)(uVar9 & 0x7fffffff));
    if (local_res10[0] == 0xffffffff) {
      puVar14 = (undefined1 *)0x0;
LAB_1450732d3:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RasterEntry != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                         ,0x842,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pTVar13 = Experimental::RobinHoodHashTable_Private::
                TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                ::FData::Get((FData *)&this->PipelineMap,local_res10[0]);
      puVar14 = &(pTVar13->Pair).field_0x20;
      if (puVar14 == (undefined1 *)0x0) goto LAB_1450732d3;
    }
    *(FMaterialRenderProxy **)(puVar14 + 0x50) = pFVar12;
    *(FDisplacementScaling *)(puVar14 + 0x58) = FVar6;
    FVar15 = (ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>)((longlong)FVar15 + 0xc);
    *(FDisplacementFadeRange *)(puVar14 + 0x60) = FVar7;
    *(undefined8 *)(puVar14 + 0x68) = uVar5;
  } while( true );
}

// ShouldBinRenderInCustomPass @ 145079b00

bool __thiscall
FNaniteRasterPipelines::ShouldBinRenderInCustomPass(FNaniteRasterPipelines *this,ushort param_1)

{
  uchar *puVar1;
  code *pcVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  bVar4 = IsBinAllocated(this,param_1);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBinAllocated(BinIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x8bd,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  lVar6 = 0x50;
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    lVar6 = 0x40;
  }
  puVar1 = (this->PipelineBins).AllocatorInstance.InlineData + lVar6;
  uVar3 = -param_1 - 2;
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    uVar3 = param_1;
  }
  bVar4 = false;
  if ((int)(uint)uVar3 < *(int *)(puVar1 + 8)) {
    bVar4 = *(int *)(*(longlong *)puVar1 + (ulonglong)(uint)uVar3 * 4) != 0;
  }
  return bVar4;
}

// Unregister @ 14507f050

void __thiscall
FNaniteRasterPipelines::Unregister(FNaniteRasterPipelines *this,FNaniteRasterBin *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  FHashElementId FVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> *pTVar7;
  longlong lVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  
  FVar3.Index = param_1->BinId;
  if ((FVar3.Index == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RasterBinId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                         ,0x890,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar7 = Experimental::RobinHoodHashTable_Private::
           TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
           ::FData::Get((FData *)&this->PipelineMap,FVar3.Index);
  if ((*(int *)&(pTVar7->Pair).field_0x90 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RasterEntry.ReferenceCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                         ,0x894,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar1 = &(pTVar7->Pair).field_0x90;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (*(int *)puVar1 == 0) {
    uVar6 = param_1->BinIndex;
    bVar5 = IsBinAllocated(this,uVar6);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBinAllocated(BinIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                           ,0x8bd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar8 = 0x50;
    if ((int)(uint)uVar6 < (this->PipelineBins).NumBits) {
      lVar8 = 0x40;
    }
    else {
      uVar6 = -uVar6 - 2;
    }
    if ((((int)(uint)uVar6 < *(int *)((this->PipelineBins).AllocatorInstance.InlineData + lVar8 + 8)
         ) && (*(int *)(*(longlong *)((this->PipelineBins).AllocatorInstance.InlineData + lVar8) +
                       (ulonglong)uVar6 * 4) != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ShouldBinRenderInCustomPass(InRasterBin.BinIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                           ,0x898,
                           L"A raster bin has dangling references to Custom Pass on final release.")
       , bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(ushort *)&(pTVar7->Pair).field_0x94;
    bVar5 = IsBinAllocated(this,uVar6);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBinAllocated(BinIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                           ,0x85d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((int)(uint)uVar6 < (this->PipelineBins).NumBits) {
      FVar9 = (this->PipelineBins).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)this;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar9;
      }
      puVar2 = (uint *)((longlong)FVar10 + (ulonglong)(uVar6 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << ((byte)uVar6 & 0x1f));
    }
    else {
      uVar6 = -uVar6 - 2;
      if (((this->PerPixelEvalPipelineBins).NumBits <= (int)(uint)uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar9 = (this->PerPixelEvalPipelineBins).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)&this->PerPixelEvalPipelineBins;
      }
      puVar2 = (uint *)((longlong)FVar9 + (ulonglong)(uVar6 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << ((byte)uVar6 & 0x1f));
    }
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
    ::RemoveByElementId((TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                         *)&this->PipelineMap,FVar3);
  }
  return;
}

// UnregisterBinForCustomPass @ 14507f3d0

void __thiscall
FNaniteRasterPipelines::UnregisterBinForCustomPass(FNaniteRasterPipelines *this,ushort param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  longlong lVar6;
  uchar *puVar7;
  
  bVar4 = IsBinAllocated(this,param_1);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBinAllocated(BinIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x8af,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->PipelineBins).NumBits;
  lVar6 = 0x50;
  if ((int)(uint)param_1 < iVar2) {
    lVar6 = 0x40;
  }
  puVar7 = (this->PipelineBins).AllocatorInstance.InlineData + lVar6;
  uVar5 = -param_1 - 2;
  if ((int)(uint)param_1 < iVar2) {
    uVar5 = param_1;
  }
  if (*(int *)(puVar7 + 8) <= (int)(uint)uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCounts.IsValidIndex(ArrayIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x8b5,
                       L"Attempting to unregister a bin that was never registered for Custom Pass");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(puVar7 + 8) <= (int)(uint)uVar5) {
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
  if (*(int *)(*(longlong *)puVar7 + (ulonglong)uVar5 * 4) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCounts[ArrayIndex] > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x8b6,
                       L"Mismatched calls to RegisterBinForCustomPass/UnregisterBinForCustomPass");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(puVar7 + 8) <= (int)(uint)uVar5) {
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
  piVar1 = (int *)(*(longlong *)puVar7 + (ulonglong)uVar5 * 4);
  *piVar1 = *piVar1 + -1;
  return;
}

