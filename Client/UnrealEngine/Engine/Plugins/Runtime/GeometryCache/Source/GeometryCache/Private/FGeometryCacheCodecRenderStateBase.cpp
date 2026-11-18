// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 5

// FGeometryCacheCodecRenderStateBase @ 14ca05a30

FGeometryCacheCodecRenderStateBase * __thiscall
FGeometryCacheCodecRenderStateBase::FGeometryCacheCodecRenderStateBase
          (FGeometryCacheCodecRenderStateBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1
          )

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  FGeometryCacheCodecRenderStateBase *pFVar6;
  
  pTVar1 = &this->TopologyRanges;
  this->_padding_ = (longlong)&___7FGeometryCacheCodecRenderStateBase__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TopologyRanges).ArrayMax;
  iVar3 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->TopologyRanges).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x50,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FGeometryCacheCodecRenderStateBase *)(*pcVar4)();
      return pFVar6;
    }
  }
  return this;
}

// ~FGeometryCacheCodecRenderStateBase @ 14ca08b30

void __thiscall
FGeometryCacheCodecRenderStateBase::~FGeometryCacheCodecRenderStateBase
          (FGeometryCacheCodecRenderStateBase *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FGeometryCacheCodecRenderStateBase__6B_;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->TopologyRanges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// DecodeSingleFrame @ 14ca13be0

bool __thiscall
FGeometryCacheCodecRenderStateBase::DecodeSingleFrame
          (FGeometryCacheCodecRenderStateBase *this,FGeometryCacheCodecDecodeArguments *param_1)

{
  return false;
}

// InitRHI @ 14ca21bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCacheCodecRenderStateBase::InitRHI
          (FGeometryCacheCodecRenderStateBase *this,FRHICommandListBase *param_1)

{
  return;
}

// IsTopologyCompatible @ 14ca23cd0

bool __thiscall
FGeometryCacheCodecRenderStateBase::IsTopologyCompatible
          (FGeometryCacheCodecRenderStateBase *this,int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = UGeometryCacheCodecBase::IsSameTopology(&this->TopologyRanges,param_1,param_2);
  return bVar1;
}

