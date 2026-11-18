// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// AddPrimitives @ 145528c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionSerial::AddPrimitives(FGPUOcclusionSerial *this,FPrimitiveRange param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  FScene *pFVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  FPrimitiveRange FVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  int iStackX_14;
  
  if (!__CsvProfilerStat3464) {
    FCsvProfilerTrace::OutputInlineStatExclusive("FetchVisibilityForPrimitives");
    __CsvProfilerStat3464 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("FetchVisibilityForPrimitives","CSV_FetchVisibilityForPrimitives");
  lVar3 = this->_padding_;
  uVar10 = param_1.StartIndex;
  bVar7 = (byte)param_1.StartIndex & 0x1f;
  iVar15 = (int)uVar10 >> 5;
  uVar17 = 1 << bVar7;
  uVar13 = -1 << bVar7;
  uVar14 = uVar10 & 0xffffffe0;
  if ((((int)uVar10 < 0) || (*(int *)(lVar3 + 0x1c68) < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)(lVar3 + 0x1c68);
  FVar12 = param_1;
  if (uVar10 != uVar8) {
    lVar16 = *(longlong *)(lVar3 + 0x1c60);
    if (*(longlong *)(lVar3 + 0x1c60) == 0) {
      lVar16 = lVar3 + 0x1c50;
    }
    uVar10 = uVar13 & *(uint *)(lVar16 + (longlong)iVar15 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar15;
      uVar14 = uVar14 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
        FVar12.EndIndex = 0;
        FVar12.StartIndex = uVar8;
        goto LAB_145528d66;
      }
      uVar13 = 0xffffffff;
      uVar10 = *(uint *)(lVar16 + 4 + lVar9 * 4);
    }
    uVar17 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    FVar12.StartIndex = (int)lVar16 + -1 + uVar14;
    FVar12.EndIndex = 0;
    if ((int)uVar8 < (int)FVar12.StartIndex) {
      FVar12.EndIndex = 0;
      FVar12.StartIndex = uVar8;
    }
  }
LAB_145528d66:
  iStackX_14 = param_1.EndIndex;
  iVar11 = FVar12.StartIndex;
  do {
    if (iStackX_14 <= iVar11) {
      FCsvProfiler::EndExclusiveStat("FetchVisibilityForPrimitives");
      return;
    }
    pFVar4 = (this->Packet).Scene;
    uVar8 = FVar12.StartIndex;
    uVar10 = 0;
    if ((int)uVar8 < (pFVar4->PrimitiveOcclusionFlags).ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((byte)(pFVar4->PrimitiveOcclusionFlags).AllocatorInstance.Data[(int)uVar8] & 1) == 0) {
      lVar16 = *(longlong *)(this->_padding_ + 0x1ca0);
      lVar9 = this->_padding_ + 0x1c90;
      if (lVar16 != 0) {
        lVar9 = lVar16;
      }
      puVar1 = (uint *)(lVar9 + (longlong)iVar15 * 4);
      *puVar1 = *puVar1 | uVar17;
    }
    else {
      FGPUOcclusionPacket::OcclusionCullPrimitive<0,FGPUOcclusionPacket::FProcessVisitor>
                (&this->Packet,&this->ProcessVisitor,&this->OcclusionCullResult,uVar8);
    }
    uVar10 = *(uint *)(lVar3 + 0x1c68);
    uVar13 = uVar13 & ~uVar17;
    lVar16 = lVar3 + 0x1c50;
    if (*(longlong *)(lVar3 + 0x1c60) != 0) {
      lVar16 = *(longlong *)(lVar3 + 0x1c60);
    }
    uVar8 = uVar13 & *(uint *)(lVar16 + (longlong)iVar15 * 4);
    while (uVar8 == 0) {
      lVar9 = (longlong)iVar15;
      uVar14 = uVar14 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
        FVar12.EndIndex = 0;
        FVar12.StartIndex = uVar10;
        goto LAB_145528eb2;
      }
      uVar13 = 0xffffffff;
      uVar8 = *(uint *)(lVar16 + 4 + lVar9 * 4);
    }
    uVar17 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    FVar12.StartIndex = (int)lVar16 + -1 + uVar14;
    FVar12.EndIndex = 0;
    if ((int)uVar10 < (int)FVar12.StartIndex) {
      FVar12.EndIndex = 0;
      FVar12.StartIndex = uVar10;
    }
LAB_145528eb2:
    iVar11 = FVar12.StartIndex;
  } while( true );
}

// Map @ 145549740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionSerial::Map(FGPUOcclusionSerial *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FGPUOcclusion::Map((FGPUOcclusion *)this,param_1);
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBuffers.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalRenderResources.h"
                       ,0xe9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// Unmap @ 145554530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionSerial::Unmap(FGPUOcclusionSerial *this,FRHICommandListImmediate *param_1)

{
  atomic<unsigned_int> *paVar1;
  FOcclusionCullResult FVar2;
  FVisibilityTaskConfig *pFVar3;
  
  FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)&this->_padding_);
  FGPUOcclusionPacket::FProcessVisitor::SubmitThrottledOcclusionQueries(&this->ProcessVisitor);
  FVar2 = this->OcclusionCullResult;
  pFVar3 = ((this->Packet).ViewPacket)->TaskConfig;
  LOCK();
  paVar1 = &(pFVar3->OcclusionCull).NumCulledPrimitives;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + FVar2.NumCulledPrimitives);
  UNLOCK();
  LOCK();
  paVar1 = &(pFVar3->OcclusionCull).NumTestedQueries;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + FVar2.NumTestedQueries);
  UNLOCK();
  FGPUOcclusion::Unmap((FGPUOcclusion *)this,param_1);
  return;
}

