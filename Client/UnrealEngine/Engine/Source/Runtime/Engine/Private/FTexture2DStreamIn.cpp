// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FTexture2DStreamIn @ 1488068c0

FTexture2DStreamIn * __thiscall
FTexture2DStreamIn::FTexture2DStreamIn(FTexture2DStreamIn *this,UTexture2D *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTextureResource *pFVar6;
  FTexture2DStreamIn *pFVar7;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar8;
  uint uVar9;
  
  FRenderAssetUpdate::FRenderAssetUpdate
            ((FRenderAssetUpdate *)this,(UStreamableRenderAsset *)param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTexture2DUpdate__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (param_1 != (UTexture2D *)0x0) {
    pFVar6 = UTexture::GetResource((UTexture *)param_1);
    if (pFVar6 != (FTextureResource *)0x0) goto LAB_148806930;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
LAB_148806930:
  LOCK();
  GPending2DUpdateCount = GPending2DUpdateCount + 1;
  UNLOCK();
  this->_padding_ = (longlong)&___7FTexture2DStreamIn__6B_;
  piVar1 = &(this->MipData).ArrayNum;
  (this->MipData).AllocatorInstance.SecondaryData =
       (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0;
  piVar2 = &(this->MipData).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0xf;
  if (*(byte *)((longlong)&this->_padding_ + 6) <= *(byte *)((longlong)&this->_padding_ + 5)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2941865358660730864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                       ,0x10,"ResourceState.NumRequestedLODs > ResourceState.NumResidentLODs");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTexture2DStreamIn *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar9 = (uint)*(byte *)((longlong)&this->_padding_ + 3);
  iVar5 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTexture2DStreamIn::FStreamMipData>_>
                    (0x10,8,uVar9,&(this->MipData).AllocatorInstance,piVar1,piVar2);
  FVar8 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
    FVar8 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)&this->MipData;
  }
  memset((void *)((longlong)FVar8 + (longlong)iVar5 * 0x10),0,(ulonglong)uVar9 << 4);
  return this;
}

// ~FTexture2DStreamIn @ 14880cbf0

void __thiscall FTexture2DStreamIn::~FTexture2DStreamIn(FTexture2DStreamIn *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar4;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FTexture2DStreamIn__6B_;
  FVar4 = (this->MipData).AllocatorInstance.SecondaryData;
  iVar1 = (this->MipData).ArrayNum;
  if (FVar4 == (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
    FVar4 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)&this->MipData;
  }
  FVar5 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)
          ((longlong)iVar1 * 0x10 + (longlong)FVar4);
  while( true ) {
    if ((this->MipData).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTexture2DStreamIn::FStreamMipData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar5) break;
    if (*(longlong *)FVar4 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThisMipData.Data == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                         ,0x19,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar4 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)((longlong)FVar4 + 0x10);
  }
  FVar4 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FTexture2DUpdate::~FTexture2DUpdate((FTexture2DUpdate *)this);
  return;
}

// DoAllocateNewMips @ 148830cc0

void __thiscall
FTexture2DStreamIn::DoAllocateNewMips(FTexture2DStreamIn *this,FTexture2DUpdateContext *param_1)

{
  TArray<FTexture2DStreamIn::FStreamMipData,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  void *pvVar9;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (((*(char *)((longlong)&this->_padding_ + 4) == '\0') &&
      (param_1->Resource != (FTexture2DResource *)0x0)) &&
     (iVar2 = *(int *)((longlong)&this->_padding_ + 4), uVar12 = (ulonglong)iVar2,
     iVar2 < (int)this->_padding_)) {
    pTVar1 = &this->MipData;
    lVar14 = uVar12 * 8;
    lVar15 = uVar12 << 4;
    do {
      uVar11 = (uint)uVar12;
      uVar13 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < (param_1->MipsView).ArrayNum) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)(lVar14 + (longlong)(param_1->MipsView).DataPtr);
      uVar8 = CalcTextureMipMapSize
                        ((uint)*(ushort *)(lVar3 + 0x48),(uint)*(ushort *)(lVar3 + 0x4a),
                         *(EPixelFormat *)((longlong)&param_1->Resource->_padding_ + 4),0);
      uVar7 = 0;
      if ((int)uVar11 < (this->MipData).ArrayNum) {
        uVar7 = uVar13;
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
      FVar4 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
      if (FVar4 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
        FVar10 = FVar4;
      }
      if ((*(longlong *)(lVar15 + (longlong)FVar10) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipData[MipIndex].Data == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                             ,0x27,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar9 = FMemory::Malloc(uVar8,0);
      uVar7 = 0;
      if ((int)uVar11 < (this->MipData).ArrayNum) {
        uVar7 = uVar13;
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
      FVar4 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
      if (FVar4 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
        FVar10 = FVar4;
      }
      *(void **)(lVar15 + (longlong)FVar10) = pvVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->MipData).ArrayNum) {
        uVar7 = uVar13;
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
      FVar4 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
      if (FVar4 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
        FVar10 = FVar4;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      lVar14 = lVar14 + 8;
      *(undefined4 *)(lVar15 + 8 + (longlong)FVar10) = 0;
      lVar15 = lVar15 + 0x10;
    } while ((int)(uVar11 + 1) < (int)this->_padding_);
  }
  return;
}

// DoAsyncCreateWithNewMips @ 148831110

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamIn::DoAsyncCreateWithNewMips
          (FTexture2DStreamIn *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  TArray<FTexture2DStreamIn::FStreamMipData,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  ETextureCreateFlags EVar6;
  FRHIResource *this_00;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ERHIAccess EVar10;
  FTexture2DMipMap **ppFVar11;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar12;
  FString *pFVar13;
  int iVar14;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar15;
  ushort uVar16;
  FTexture2DMipMap *pFVar17;
  ELLMTag EVar18;
  uint uVar19;
  longlong lVar20;
  void **ppvVar21;
  bool bVar22;
  FLLMScope local_res18 [2];
  undefined8 *local_res20;
  char *in_stack_ffffffffffffff08;
  undefined7 uVar23;
  FRHIResource *local_b8;
  FTexture2DMipMap *local_b0;
  FScriptContainerElement *local_a8;
  FMemScope local_a0;
  longlong *local_98;
  undefined8 *local_90;
  FString local_88;
  code *local_78 [2];
  undefined **local_68;
  FTexture2DStreamIn *local_60;
  undefined8 local_50;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId123,"FTexture2DStreamIn::DoAsyncCreateWithNewMips",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
               ,0x7b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId123);
  }
  local_a8 = (FScriptContainerElement *)0x15060d16c;
  if ((param_1->CurrentThread != 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Async",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                         ,0x7c,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(char *)((longlong)&this->_padding_ + 4) != '\0') ||
     (param_1->Resource == (FTexture2DResource *)0x0)) goto LAB_148831766;
  ppFVar11 = TArrayView<FTexture2DMipMap_const_*,int>::operator[]
                       (&param_1->MipsView,*(int *)((longlong)&this->_padding_ + 4));
  pFVar17 = *ppFVar11;
  local_b0 = pFVar17;
  ppFVar11 = TArrayView<FTexture2DMipMap_const_*,int>::operator[](&param_1->MipsView,0);
  uVar16 = (*ppFVar11)->SizeX >> (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f);
  if (uVar16 == 0) {
    uVar16 = 1;
  }
  if ((pFVar17->SizeX != uVar16) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequestedMipMap.SizeX == FMath::Max(1, (int32)Context.MipsView[0]->SizeX >> PendingFirstLODIdx)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                         ,0x83,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppFVar11 = TArrayView<FTexture2DMipMap_const_*,int>::operator[](&param_1->MipsView,0);
  uVar16 = (*ppFVar11)->SizeY >> (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f);
  if (uVar16 == 0) {
    uVar16 = 1;
  }
  if ((pFVar17->SizeY != uVar16) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequestedMipMap.SizeY == FMath::Max(1, (int32)Context.MipsView[0]->SizeY >> PendingFirstLODIdx)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                         ,0x84,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->MipData).ArrayNum <
       (int)((uint)*(byte *)((longlong)&this->_padding_ + 6) +
            *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingFirstLODIdx+ResourceState.NumRequestedLODs <= MipData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                         ,0x86,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppvVar21 = this->InitialMipDataForAsyncCreate;
  *ppvVar21 = (void *)0x0;
  this->InitialMipDataForAsyncCreate[1] = (void *)0x0;
  uVar19 = 0;
  this->InitialMipDataForAsyncCreate[2] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[3] = (void *)0x0;
  pTVar2 = &this->MipData;
  this->InitialMipDataForAsyncCreate[4] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[5] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[6] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[7] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[8] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[9] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[10] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[0xb] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[0xc] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[0xd] = (void *)0x0;
  this->InitialMipDataForAsyncCreate[0xe] = (void *)0x0;
  iVar14 = (this->MipData).ArrayNum;
  if (0 < iVar14) {
    lVar20 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar19 < (this->MipData).ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if (uVar9 == 0) {
        in_stack_ffffffffffffff08 = (char *)(longlong)(int)uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar12 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar2;
      if (FVar12 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
        FVar15 = FVar12;
      }
      *ppvVar21 = *(void **)(lVar20 + (longlong)FVar15);
      uVar9 = 0;
      if ((int)uVar19 < (this->MipData).ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if (uVar9 == 0) {
        in_stack_ffffffffffffff08 = (char *)(longlong)(int)uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar12 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar2;
      if (FVar12 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
        FVar15 = FVar12;
      }
      if ((*(int *)(lVar20 + 8 + (longlong)FVar15) != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipData[i].Pitch == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                             ,0x8f,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = (this->MipData).ArrayNum;
      uVar19 = uVar19 + 1;
      ppvVar21 = ppvVar21 + 1;
      lVar20 = lVar20 + 0x10;
      pFVar17 = local_b0;
    } while ((int)uVar19 < iVar14);
  }
  uVar19 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar9 = 0;
  if ((int)uVar19 < iVar14) {
    uVar9 = ~uVar19 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (in_stack_ffffffffffffff08 = (char *)(longlong)(int)uVar19,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar12 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
    FVar12 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar2;
  }
  FTexture2DResource::WarnRequiresTightPackedMip
            ((uint)pFVar17->SizeX,(uint)pFVar17->SizeY,
             *(EPixelFormat *)((longlong)&param_1->Resource->_padding_ + 4),
             *(uint *)((uchar *)((longlong)FVar12 + 8) + (longlong)(int)uVar19 * 0x10));
  local_98 = &this->_padding_;
  if (*local_98 != 0) {
    in_stack_ffffffffffffff08 = "IntermediateTextureRHI == nullptr";
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2941865358660730731>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                       ,0x95,"IntermediateTextureRHI == nullptr");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_res20 = (undefined8 *)0x0;
  pFVar13 = ::FName::ToString((FName *)((longlong)&param_1->Resource->_padding_ + 4),&local_88);
  if ((pFVar13->Data).ArrayNum != 0) {
    local_a8 = (pFVar13->Data).AllocatorInstance.Data;
  }
  bVar3 = *(byte *)((longlong)&this->_padding_ + 5);
  uVar19 = (uint)*(byte *)((longlong)&this->_padding_ + 6);
  iVar14 = *(int *)((longlong)&this->_padding_ + 4);
  uVar23 = (undefined7)((ulonglong)in_stack_ffffffffffffff08 >> 8);
  EVar6 = param_1->Resource->_padding_;
  uVar4 = *(undefined1 *)((longlong)&param_1->Resource->_padding_ + 4);
  uVar16 = local_b0->SizeY;
  uVar5 = local_b0->SizeX;
  EVar18 = Textures;
  if ((EVar6 & (DepthStencilTargetable|RenderTargetable)) != None) {
    EVar18 = RenderTargets;
  }
  FLLMScope::FLLMScope(local_res18,EVar18,false,None,Default,true);
  FMemScope::FMemScope(&local_a0,EVar18,true);
  EVar10 = RHIGetDefaultResourceState
                     (EVar6,this->InitialMipDataForAsyncCreate + iVar14 != (void **)0x0);
  (**(code **)(GDynamicRHI->_padding_ + 0x1a0))
            (GDynamicRHI,&local_b8,uVar5,uVar16,CONCAT71(uVar23,uVar4),uVar19,EVar6,EVar10,
             this->InitialMipDataForAsyncCreate + iVar14,uVar19 - bVar3,local_a8,&local_res20);
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(local_res18);
  if ((FRHIResource **)local_98 == &local_b8) {
LAB_148831674:
    if (local_b8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_b8);
    }
  }
  else {
    this_00 = (FRHIResource *)*local_98;
    *local_98 = (longlong)local_b8;
    local_b8 = (FRHIResource *)0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      goto LAB_148831674;
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTexture2DStreamIn::DoAsyncCreateWithNewMips'::`45'::<lambda_1>,1,0>
                ::_vftable_;
    local_50 = 0;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTexture2DStreamIn::DoAsyncCreateWithNewMips'::__l45::<lambda_1>,void>
                  ::Call;
    local_60 = this;
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)&local_90,(TStatIdData *)local_78,
               (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)&local_res20);
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_90 + 6);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)*local_90)(local_90,1);
      }
    }
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res20 + 6);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar14 == 1) && (local_res20 != (undefined8 *)0x0)) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
  }
LAB_148831766:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DoCopySharedMips @ 148832770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamIn::DoCopySharedMips(FTexture2DStreamIn *this,FTexture2DUpdateContext *param_1)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHITexture *pFVar4;
  
  if (param_1->CurrentThread != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                       ,0x6d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((*(char *)((longlong)&this->_padding_ + 4) == '\0') &&
      ((FRHITexture *)this->_padding_ != (FRHITexture *)0x0)) &&
     (param_1->Resource != (FTexture2DResource *)0x0)) {
    pFVar1 = (FRHITexture *)param_1->Resource->_padding_;
    pFVar4 = (FRHITexture *)0x0;
    if ((pFVar1 != (FRHITexture *)0x0) && ((pFVar1->TextureDesc).Dimension == Texture2D)) {
      pFVar4 = pFVar1;
    }
    UE::RHI::CopySharedMips_AssumeSRVMaskState
              ((FRHICommandList *)&GRHICommandList.CommandListImmediate,pFVar4,
               (FRHITexture *)this->_padding_);
  }
  return;
}

// DoFreeNewMips @ 148832a90

void __thiscall
FTexture2DStreamIn::DoFreeNewMips(FTexture2DStreamIn *this,FTexture2DUpdateContext *param_1)

{
  TArray<FTexture2DStreamIn::FStreamMipData,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  uVar9 = (ulonglong)iVar2;
  if (iVar2 < (int)this->_padding_) {
    pTVar1 = &this->MipData;
    lVar11 = uVar9 << 4;
    do {
      uVar8 = (uint)uVar9;
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->MipData).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
      if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
        FVar7 = FVar3;
      }
      if (*(longlong *)(lVar11 + (longlong)FVar7) != 0) {
        uVar6 = 0;
        if ((int)uVar8 < (this->MipData).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
        if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
          FVar7 = FVar3;
        }
        FMemory::Free(*(void **)(lVar11 + (longlong)FVar7));
        uVar6 = 0;
        if ((int)uVar8 < (this->MipData).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
        if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
          FVar7 = FVar3;
        }
        *(undefined8 *)(lVar11 + (longlong)FVar7) = 0;
        uVar6 = 0;
        if ((int)uVar8 < (this->MipData).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
        if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
          FVar7 = FVar3;
        }
        *(undefined4 *)(lVar11 + 8 + (longlong)FVar7) = 0xffffffff;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar11 = lVar11 + 0x10;
    } while ((int)(uVar8 + 1) < (int)this->_padding_);
  }
  return;
}

// DoLockNewMips @ 148832ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamIn::DoLockNewMips(FTexture2DStreamIn *this,FTexture2DUpdateContext *param_1)

{
  TArray<FTexture2DStreamIn::FStreamMipData,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  void *pvVar12;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint local_res8 [2];
  
  if ((param_1->CurrentThread != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Render",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                         ,0x40,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((*(char *)((longlong)&this->_padding_ + 4) == '\0') &&
      ((longlong *)this->_padding_ != (longlong *)0x0)) &&
     (param_1->Resource != (FTexture2DResource *)0x0)) {
    puVar10 = (uint *)(**(code **)(*(longlong *)this->_padding_ + 0x20))();
    if ((*puVar10 >> 0x17 & 1) == 0) {
      iVar7 = *(int *)((longlong)&this->_padding_ + 4);
    }
    else {
      iVar7 = 0;
    }
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    uVar15 = (ulonglong)iVar2;
    if (iVar2 < (int)this->_padding_) {
      pTVar1 = &this->MipData;
      lVar18 = uVar15 << 4;
      uVar17 = iVar2 - iVar7;
      do {
        uVar14 = (uint)uVar15;
        uVar16 = ~uVar14 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar14 < (this->MipData).ArrayNum) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
        if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
          FVar13 = FVar3;
        }
        if ((*(longlong *)(lVar18 + (longlong)FVar13) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("MipData[MipIndex].Data == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                               ,0x49,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar5 = CVarFlushRHIThreadOnSTreamingTextureLocks.Ref;
        local_res8[0] = 0xffffffff;
        bVar6 = IsInParallelGameThread();
        if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
          lVar11 = 0;
        }
        else {
          lVar11 = 4;
        }
        pvVar12 = RHILockTexture2D((FRHITexture *)this->_padding_,uVar17,RLM_WriteOnly,local_res8,
                                   false,0 < *(int *)((longlong)pTVar5->ShadowedValue + lVar11),
                                   (ulong64 *)0x0);
        uVar8 = 0;
        if ((int)uVar14 < (this->MipData).ArrayNum) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = local_res8[0];
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
        if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
          FVar13 = FVar3;
        }
        *(void **)(lVar18 + (longlong)FVar13) = pvVar12;
        uVar9 = 0;
        if ((int)uVar14 < (this->MipData).ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
        if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
          FVar13 = FVar3;
        }
        *(uint *)(lVar18 + 8 + (longlong)FVar13) = uVar8;
        if (5 < (byte)LogTextureUpload._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextureUpload);
        }
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 0x10;
      } while ((int)(uVar14 + 1) < (int)this->_padding_);
    }
  }
  return;
}

// DoUnlockNewMips @ 148833480

void __thiscall
FTexture2DStreamIn::DoUnlockNewMips(FTexture2DStreamIn *this,FTexture2DUpdateContext *param_1)

{
  TArray<FTexture2DStreamIn::FStreamMipData,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  ForElementType<FTexture2DStreamIn::FStreamMipData> FVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  
  if ((param_1->CurrentThread != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Render",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn.cpp"
                         ,0x58,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((longlong *)this->_padding_ != (longlong *)0x0) &&
     (param_1->Resource != (FTexture2DResource *)0x0)) {
    puVar9 = (uint *)(**(code **)(*(longlong *)this->_padding_ + 0x20))();
    iVar16 = 0;
    if ((*puVar9 >> 0x17 & 1) == 0) {
      iVar16 = *(int *)((longlong)&this->_padding_ + 4);
    }
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    uVar13 = (ulonglong)iVar2;
    if (iVar2 < (int)this->_padding_) {
      pTVar1 = &this->MipData;
      lVar17 = uVar13 << 4;
      uVar15 = iVar2 - iVar16;
      do {
        uVar12 = (uint)uVar13;
        uVar14 = ~uVar12 >> 0x1f;
        uVar7 = 0;
        uVar8 = uVar7;
        if ((int)uVar12 < (this->MipData).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar5 = CVarFlushRHIThreadOnSTreamingTextureLocks.Ref;
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
        if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
          FVar11 = FVar3;
        }
        if (*(longlong *)(lVar17 + (longlong)FVar11) != 0) {
          bVar6 = IsInParallelGameThread();
          if (bVar6) {
LAB_1488335b6:
            lVar10 = 0;
          }
          else {
            bVar6 = IsInGameThread();
            lVar10 = 4;
            if (bVar6) goto LAB_1488335b6;
          }
          RHIUnlockTexture2D((FRHITexture *)this->_padding_,uVar15,false,
                             0 < *(int *)((longlong)pTVar5->ShadowedValue + lVar10));
          uVar8 = uVar7;
          if ((int)uVar12 < (this->MipData).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
          if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
            FVar11 = FVar3;
          }
          *(undefined8 *)(lVar17 + (longlong)FVar11) = 0;
          if ((int)uVar12 < (this->MipData).ArrayNum) {
            uVar7 = uVar14;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<FTexture2DStreamIn::FStreamMipData>)pTVar1;
          if (FVar3 != (ForElementType<FTexture2DStreamIn::FStreamMipData>)0x0) {
            FVar11 = FVar3;
          }
          *(undefined4 *)(lVar17 + 8 + (longlong)FVar11) = 0xffffffff;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 0x10;
      } while ((int)(uVar12 + 1) < (int)this->_padding_);
    }
  }
  return;
}

