// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// InitRHI @ 145288ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTesselatedScreenRectangleIndexBuffer::InitRHI
          (FTesselatedScreenRectangleIndexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *this_00;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  short *psVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  FRHIBufferCreateDesc local_b8;
  ERHIAccess local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined **local_68;
  short *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  wchar_t *local_40;
  FName FStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_b8._padding_ = 0;
  local_b8.DebugName = (wchar_t *)0x0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xf00,(ForAnyElementType *)&local_b8._padding_,(int *)&local_b8.DebugName,
             (int *)((longlong)&local_b8.DebugName + 4));
  lVar3 = local_b8._padding_;
  psVar6 = (short *)local_b8._padding_;
  uVar9 = 0;
  do {
    uVar8 = 0;
    do {
      sVar7 = (short)uVar8 + (short)uVar9 * 0x21;
      uVar8 = uVar8 + 1;
      *psVar6 = sVar7;
      psVar6[1] = sVar7 + 0x21;
      psVar6[2] = sVar7 + 1;
      psVar6[3] = sVar7 + 0x22;
      psVar6[4] = sVar7 + 1;
      psVar6[5] = sVar7 + 0x21;
      psVar6 = psVar6 + 6;
    } while (uVar8 < 0x20);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x14);
  iVar4 = (int)local_b8.DebugName;
  if ((int)local_b8.DebugName < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_80 = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_68 = &___7FResourceArrayUploadArrayView__6B_;
  local_b8.OwnerName = (FName)&local_68;
  local_b8.InitialData._0_4_ = iVar4 * 2;
  local_b8.InitAction = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - Zeroed;
  local_b8.ClassName = (FName)0x150f64260;
  local_b8.InitialData._4_4_ = 2;
  local_40 = L"FTesselatedScreenRectangleIndexBuffer";
  local_b8.InitialState = DSVWrite|CPURead;
  local_50 = CONCAT44(2,(int)local_b8.InitialData);
  uStack_48 = CONCAT44(local_b8.InitAction,0x8001);
  uStack_78 = 0;
  uStack_7c = 2;
  local_70 = 0;
  local_30 = CONCAT44(2,local_80);
  local_60 = (short *)lVar3;
  uStack_28 = 0;
  local_20 = 0;
  local_58 = (int)local_b8.InitialData;
  FStack_38 = local_b8.OwnerName;
  FRHICommandListBase::CreateBuffer(param_1,&local_b8);
  puVar1 = &this->field_0x20;
  if ((FRHIBufferCreateDesc *)puVar1 != &local_b8) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = local_b8._padding_;
    local_b8._padding_ = 0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145288c8d;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_b8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._padding_);
  }
LAB_145288c8d:
  if ((short *)local_b8._padding_ != (short *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return;
}

// NumPrimitives @ 1452cf840

uint __thiscall
FTesselatedScreenRectangleIndexBuffer::NumPrimitives(FTesselatedScreenRectangleIndexBuffer *this)

{
  return 0x500;
}

// NumVertices @ 1452cf850

uint __thiscall
FTesselatedScreenRectangleIndexBuffer::NumVertices(FTesselatedScreenRectangleIndexBuffer *this)

{
  return 0x2b5;
}

