// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 12

// CallAppendHash @ 145583930

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallAppendHash @ 145583950

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::CallAppendHash
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,8,param_3);
  return uVar1;
}

// CallDestroy @ 145583970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// CallDestroy @ 1455839a0

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::CallDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// CallGetTargetAlignment @ 1455839c0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallGetTargetAlignment @ 1455839e0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::CallGetTargetAlignment
          (FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 145583a00

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar3 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString(param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// CallToString @ 145583a70

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::CallToString
          (void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  uint uVar1;
  FTypeLayoutDesc *pFVar2;
  FTypeLayoutDesc *this;
  FVertexFactoryShaderParameters *this_00;
  
  this_00 = *(FVertexFactoryShaderParameters **)param_1;
  if (((ulonglong)this_00 & 1) != 0) {
    this_00 = (FVertexFactoryShaderParameters *)(((longlong)this_00 >> 0x18) + (longlong)param_1);
  }
  if (this_00 != (FVertexFactoryShaderParameters *)0x0) {
    pFVar2 = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    this = FVertexFactoryShaderParameters::GetTypeLayout(this_00);
    uVar1 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar2);
    if ((*(ulonglong *)param_1 & 1) == 0) {
      FMemoryToStringContext::AppendUnfrozenPointer(param_4,pFVar2);
    }
    else {
      FMemoryToStringContext::AppendFrozenPointer
                (param_4,pFVar2,((uint)(*(ulonglong *)param_1 >> 1) & 0x7fffff) - 1);
    }
                    /* WARNING: Could not recover jumptable at 0x000145583b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->ToStringFunc)((void *)((longlong)this_00 - (ulonglong)uVar1),this,param_3,param_4);
    return;
  }
  FMemoryToStringContext::AppendNullptr(param_4);
  return;
}

// CallUnfrozenCopy @ 145583b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_4,*(int *)((longlong)param_2 + 8),Default);
  pvVar3 = *(void **)param_4;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_4);
  }
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen(param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// CallUnfrozenCopy @ 145583be0

uint __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::CallUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,void *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypeLayoutDesc *pFVar5;
  FTypeLayoutDesc *this;
  void *pvVar6;
  FVertexFactoryShaderParameters *this_00;
  
  this_00 = *(FVertexFactoryShaderParameters **)param_2;
  if (((ulonglong)this_00 & 1) != 0) {
    this_00 = (FVertexFactoryShaderParameters *)(((longlong)this_00 >> 0x18) + (longlong)param_2);
  }
  if (this_00 != (FVertexFactoryShaderParameters *)0x0) {
    pFVar5 = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    if (((*(byte *)param_2 & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFrozen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,400,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    this = FMemoryUnfreezeContent::GetDerivedTypeDesc
                     (param_1,pFVar5,(*(uint *)param_2 >> 1 & 0x7fffff) - 1);
    if ((this != (FTypeLayoutDesc *)0x0) ||
       ((param_1->bIsFrozenForCurrentPlatform != false &&
        (this = FVertexFactoryShaderParameters::GetTypeLayout(this_00),
        this != (FTypeLayoutDesc *)0x0)))) {
      uVar4 = FTypeLayoutDesc::GetOffsetToBase(this,pFVar5);
      pvVar6 = ::operator_new((ulonglong)this->Size);
      (*this->UnfrozenCopyFunc)(param_1,(void *)((longlong)this_00 - (ulonglong)uVar4),this,pvVar6);
      uVar1 = (ulonglong)uVar4 + (longlong)pvVar6;
      *(ulonglong *)param_4 = uVar1;
      if ((uVar1 & 1) == 0) {
        return 8;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x185,L"");
      if (!bVar3) {
        return 8;
      }
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  *(undefined8 *)param_4 = 0;
  return 8;
}

// CallWriteMemoryImage @ 145583e70

void __cdecl
TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage(param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  FMemoryImageWriter::WriteBytes(param_1,(void *)((longlong)param_2 + 8),4);
  return;
}

// CallWriteMemoryImage @ 145583ef0

void __cdecl
TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  FTypeLayoutDesc *pFVar1;
  FTypeLayoutDesc *pFVar2;
  FVertexFactoryShaderParameters *this;
  
  this = *(FVertexFactoryShaderParameters **)param_2;
  if (((ulonglong)this & 1) != 0) {
    this = (FVertexFactoryShaderParameters *)(((longlong)this >> 0x18) + (longlong)param_2);
  }
  if (this != (FVertexFactoryShaderParameters *)0x0) {
    FMemoryImageWriter::TryGetPrevPointerTable(param_1);
    pFVar1 = FVertexFactoryShaderParameters::GetTypeLayout(this);
    pFVar2 = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer
              (param_1,(FTypeLayoutDesc *)&stack0xffffffffffffffe8,pFVar2,(uint *)pFVar1);
    FMemoryImageWriter::WriteObject((FMemoryImageWriter *)&stack0xffffffffffffffe8,this,pFVar1);
    FMemoryImageWriter::~FMemoryImageWriter((FMemoryImageWriter *)&stack0xffffffffffffffe8);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

