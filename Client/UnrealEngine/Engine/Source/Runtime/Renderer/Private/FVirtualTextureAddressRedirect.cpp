// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ~FVirtualTextureAddressRedirect @ 1458d1080

void __thiscall
FVirtualTextureAddressRedirect::~FVirtualTextureAddressRedirect
          (FVirtualTextureAddressRedirect *this)

{
  this->_padding_ = (longlong)&___7IVirtualTexture__6B_;
  return;
}

// GatherProducePageDataTasks @ 1458fb640

void __thiscall
FVirtualTextureAddressRedirect::GatherProducePageDataTasks
          (FVirtualTextureAddressRedirect *this,FVirtualTextureProducerHandle *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001458fb647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->VirtualTexture + 0x30))();
  return;
}

// GatherProducePageDataTasks @ 1458fb660

void __thiscall
FVirtualTextureAddressRedirect::GatherProducePageDataTasks
          (FVirtualTextureAddressRedirect *this,ulong64 param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001458fb667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->VirtualTexture + 0x28))();
  return;
}

// IsPageStreamed @ 14590eba0

bool __thiscall
FVirtualTextureAddressRedirect::IsPageStreamed
          (FVirtualTextureAddressRedirect *this,uchar param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar7 = (ulonglong)(param_2 >> 1) & 0x5555555555555555;
  uVar5 = (((ulonglong)param_2 & 0x55555555) >> 1 ^ (ulonglong)param_2 & 0x55555555) &
          0x3333333333333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f0f0f0f0f;
  uVar6 = (uVar5 >> 4 ^ uVar5) & 0xff00ff00ff00ff;
  uVar5 = (uVar7 >> 1 ^ uVar7) & 0x3333333333333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f0f0f0f0f;
  uVar8 = this->LevelOffset + (uint)param_1;
  uVar5 = (uVar5 >> 4 ^ uVar5) & 0xff00ff00ff00ff;
  uVar3 = ((this->AddressOffset).field0_0x0._s_0.X >> ((byte)uVar8 & 0x1f)) +
          (uint)(ushort)((ushort)(uVar6 >> 8) ^ (ushort)uVar6) & 0xffff;
  uVar3 = (uVar3 << 8 ^ uVar3) & 0xff00ff;
  uVar3 = (uVar3 << 4 ^ uVar3) & 0xf0f0f0f;
  uVar1 = (uVar3 * 4 ^ uVar3) & 0x33333333;
  uVar3 = ((this->AddressOffset).field0_0x0._s_0.Y >> ((byte)uVar8 & 0x1f)) +
          (uint)(ushort)((ushort)(uVar5 >> 8) ^ (ushort)uVar5) & 0xffff;
  uVar3 = (uVar3 << 8 ^ uVar3) & 0xff00ff;
  uVar4 = 0;
  uVar3 = (uVar3 << 4 ^ uVar3) & 0xf0f0f0f;
  uVar3 = (uVar3 * 4 ^ uVar3) & 0x33333333;
  uVar3 = (uVar3 * 2 ^ uVar3) * 2;
  if (0 < (int)uVar8) {
    uVar4 = uVar8 & 0xff;
  }
                    /* WARNING: Could not recover jumptable at 0x00014590ed2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((longlong)*this->VirtualTexture + 0x10))
                    (this->VirtualTexture,uVar4,(uVar1 * 2 ^ uVar3 ^ uVar1) & 0x55555555 ^ uVar3);
  return (bool)uVar2;
}

// ProducePageData @ 145913560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
FVirtualTextureAddressRedirect::ProducePageData
          (FVirtualTextureAddressRedirect *this,FRHICommandListBase *param_1,Type param_2,
          EVTProducePageFlags param_3,FVirtualTextureProducerHandle *param_4,uchar param_5,
          uchar param_6,ulong64 param_7,ulong64 param_8,FVTProduceTargetLayer *param_9)

{
  IVirtualTextureFinalizer *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014591375d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IVirtualTextureFinalizer *)
           (**(code **)((longlong)*this->VirtualTexture + 0x20))
                     (this->VirtualTexture,param_1,param_2,param_3);
  return pIVar1;
}

// RequestPageData @ 14591b2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTRequestPageResult * __thiscall
FVirtualTextureAddressRedirect::RequestPageData
          (FVirtualTextureAddressRedirect *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FVirtualTextureProducerHandle *param_2,uchar param_3,
          uchar param_4,ulong64 param_5,EVTRequestPagePriority param_6)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = param_5 >> 1 & 0x5555555555555555;
  uVar5 = ((param_5 & 0x5555555555555555) >> 1 ^ param_5 & 0x5555555555555555) & 0x3333333333333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f0f0f0f0f;
  uVar2 = (uVar5 >> 4 ^ uVar5) & 0xff00ff00ff00ff;
  uVar5 = (uVar6 >> 1 ^ uVar6) & 0x3333333333333333;
  uVar2 = (uVar2 >> 8 ^ uVar2) & 0xffff0000ffff;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f0f0f0f0f;
  uVar5 = (uVar5 >> 4 ^ uVar5) & 0xff00ff00ff00ff;
  iVar4 = this->LevelOffset + (uint)param_4;
  bVar1 = (byte)iVar4;
  uVar6 = (uVar5 >> 8 ^ uVar5) & 0xffff0000ffff;
  uVar5 = (ulonglong)(uint)((this->AddressOffset).field0_0x0._s_0.X >> (bVar1 & 0x1f)) +
          (uVar2 >> 0x10 ^ uVar2);
  uVar5 = ((uVar5 & 0xffffffff) << 0x10 ^ uVar5 & 0xffffffff) & 0xffff0000ffff;
  uVar5 = (uVar5 << 8 ^ uVar5) & 0xff00ff00ff00ff;
  uVar5 = (uVar5 << 4 ^ uVar5) & 0xf0f0f0f0f0f0f0f;
  uVar2 = (uVar5 * 4 ^ uVar5) & 0x3333333333333333;
  uVar5 = (ulonglong)(uint)((this->AddressOffset).field0_0x0._s_0.Y >> (bVar1 & 0x1f)) +
          (uVar6 >> 0x10 ^ uVar6);
  uVar5 = ((uVar5 & 0xffffffff) << 0x10 ^ uVar5 & 0xffffffff) & 0xffff0000ffff;
  uVar5 = (uVar5 << 8 ^ uVar5) & 0xff00ff00ff00ff;
  uVar5 = (uVar5 << 4 ^ uVar5) & 0xf0f0f0f0f0f0f0f;
  uVar2 = uVar2 * 2 ^ uVar2;
  uVar5 = (uVar5 * 4 ^ uVar5) & 0x3333333333333333;
  bVar3 = 0;
  if (0 < iVar4) {
    bVar3 = bVar1;
  }
  (**(code **)((longlong)*this->VirtualTexture + 0x18))
            (this->VirtualTexture,__return_storage_ptr__,param_1,param_2,param_3,bVar3,
             ((uVar5 * 2 ^ uVar5) * 2 ^ uVar2) & 0xaaaaaaaaaaaaaaaa ^ uVar2,param_6);
  return __return_storage_ptr__;
}

