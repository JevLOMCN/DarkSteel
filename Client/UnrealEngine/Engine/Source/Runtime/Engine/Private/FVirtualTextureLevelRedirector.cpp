// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FVirtualTextureLevelRedirector @ 1489b4ed0

FVirtualTextureLevelRedirector * __thiscall
FVirtualTextureLevelRedirector::FVirtualTextureLevelRedirector
          (FVirtualTextureLevelRedirector *this,IVirtualTexture *param_1,IVirtualTexture *param_2,
          int param_3)

{
  this->VirtualTextures[0] = param_1;
  this->_padding_ = (longlong)&___7FVirtualTextureLevelRedirector__6B_;
  this->VirtualTextures[1] = param_2;
  this->TransitionLevel = param_3;
  return this;
}

// ~FVirtualTextureLevelRedirector @ 1489ba070

void __thiscall
FVirtualTextureLevelRedirector::~FVirtualTextureLevelRedirector
          (FVirtualTextureLevelRedirector *this)

{
  IVirtualTexture *pIVar1;
  
  this->_padding_ = (longlong)&___7FVirtualTextureLevelRedirector__6B_;
  pIVar1 = this->VirtualTextures[0];
  if (pIVar1 != (IVirtualTexture *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar1 = this->VirtualTextures[1];
  if (pIVar1 != (IVirtualTexture *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)&___7IVirtualTexture__6B_;
  return;
}

// GatherProducePageDataTasks @ 1489e48e0

void __thiscall
FVirtualTextureLevelRedirector::GatherProducePageDataTasks
          (FVirtualTextureLevelRedirector *this,FVirtualTextureProducerHandle *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  (**(code **)((longlong)*this->VirtualTextures[0] + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001489e491e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->VirtualTextures[1] + 0x30))
            (this->VirtualTextures[1],param_1,param_2);
  return;
}

// GatherProducePageDataTasks @ 1489e4930

void __thiscall
FVirtualTextureLevelRedirector::GatherProducePageDataTasks
          (FVirtualTextureLevelRedirector *this,ulong64 param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  (**(code **)((longlong)*this->VirtualTextures[0] + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x0001489e496e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->VirtualTextures[1] + 0x28))
            (this->VirtualTextures[1],param_1,param_2);
  return;
}

// IsPageStreamed @ 1489f96f0

bool __thiscall
FVirtualTextureLevelRedirector::IsPageStreamed
          (FVirtualTextureLevelRedirector *this,uchar param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  iVar1 = this->TransitionLevel;
  lVar5 = 8;
  if (iVar1 <= (int)(uint)param_1) {
    lVar5 = 0x10;
  }
  plVar2 = *(longlong **)((longlong)this->VirtualTextures + lVar5 + -8);
  cVar3 = '\0';
  if (iVar1 <= (int)(uint)param_1) {
    cVar3 = (char)iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001489f9722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1 - cVar3);
  return (bool)uVar4;
}

// ProducePageData @ 148a03460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
FVirtualTextureLevelRedirector::ProducePageData
          (FVirtualTextureLevelRedirector *this,FRHICommandListBase *param_1,Type param_2,
          EVTProducePageFlags param_3,FVirtualTextureProducerHandle *param_4,uchar param_5,
          uchar param_6,ulong64 param_7,ulong64 param_8,FVTProduceTargetLayer *param_9)

{
  longlong *plVar1;
  longlong lVar2;
  IVirtualTextureFinalizer *pIVar3;
  
  lVar2 = 8;
  if (this->TransitionLevel <= (int)(uint)param_6) {
    lVar2 = 0x10;
  }
  plVar1 = *(longlong **)((longlong)this->VirtualTextures + lVar2 + -8);
                    /* WARNING: Could not recover jumptable at 0x000148a034ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (IVirtualTextureFinalizer *)(**(code **)(*plVar1 + 0x20))(plVar1);
  return pIVar3;
}

// RequestPageData @ 148a0e760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTRequestPageResult * __thiscall
FVirtualTextureLevelRedirector::RequestPageData
          (FVirtualTextureLevelRedirector *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FVirtualTextureProducerHandle *param_2,uchar param_3,
          uchar param_4,ulong64 param_5,EVTRequestPagePriority param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  
  iVar1 = this->TransitionLevel;
  lVar3 = 8;
  if (iVar1 <= (int)(uint)param_4) {
    lVar3 = 0x10;
  }
  plVar2 = *(longlong **)((longlong)this->VirtualTextures + lVar3 + -8);
  cVar4 = '\0';
  if (iVar1 <= (int)(uint)param_4) {
    cVar4 = (char)iVar1;
  }
  (**(code **)(*plVar2 + 0x18))
            (plVar2,__return_storage_ptr__,param_1,param_2,param_3,param_4 - cVar4,param_5,param_6);
  return __return_storage_ptr__;
}

