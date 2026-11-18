// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// Create2DDesc @ 1449093b0

FPooledRenderTargetDesc * __cdecl
FPooledRenderTargetDesc::Create2DDesc
          (FPooledRenderTargetDesc *__return_storage_ptr__,TIntPoint<int> param_1,
          EPixelFormat param_2,FClearValueBinding *param_3,ETextureCreateFlags param_4,
          ETextureCreateFlags param_5,bool param_6,uchar param_7,bool param_8,bool param_9,
          bool param_10)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FPooledRenderTargetDesc *pFVar5;
  int iStackX_14;
  
  if (param_1.field0_0x0._0_4_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExtent.X",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0x6b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPooledRenderTargetDesc *)(*pcVar2)();
      return pFVar5;
    }
  }
  iStackX_14 = param_1.field0_0x0._4_4_;
  if (iStackX_14 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExtent.Y",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0x6c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPooledRenderTargetDesc *)(*pcVar2)();
      return pFVar5;
    }
  }
  __return_storage_ptr__->DebugName = L"UnknownTexture";
  *(undefined8 *)&__return_storage_ptr__->ClearValue = 1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ClearValue).Value + 4) = 0;
  (__return_storage_ptr__->ClearValue).Value.Color[3] = 0.0;
  __return_storage_ptr__->Flags = None;
  __return_storage_ptr__->Format = PF_Unknown;
  __return_storage_ptr__->UAVFormat = PF_Unknown;
  (__return_storage_ptr__->Extent).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  __return_storage_ptr__->NumMips = '\0';
  __return_storage_ptr__->NumSamples = '\x01';
  __return_storage_ptr__->Depth = 0;
  __return_storage_ptr__->ArraySize = 1;
  (__return_storage_ptr__->AliasableFormats).AllocatorInstance.SecondaryData =
       (ForElementType<EPixelFormat>)0x0;
  __return_storage_ptr__->FastVRAMPercentage = 0xff;
  (__return_storage_ptr__->AliasableFormats).ArrayNum = 0;
  (__return_storage_ptr__->AliasableFormats).ArrayMax = 1;
  (__return_storage_ptr__->field13_0x58).PackedBits = '\0';
  uVar3 = *(undefined8 *)((longlong)&param_3->Value + 4);
  *(undefined8 *)&__return_storage_ptr__->ClearValue = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ClearValue).Value + 4) = uVar3;
  fVar1 = (param_3->Value).Color[3];
  (__return_storage_ptr__->field13_0x58).PackedBits =
       (__return_storage_ptr__->field13_0x58).PackedBits & 0xfc;
  (__return_storage_ptr__->ClearValue).Value.Color[3] = fVar1;
  __return_storage_ptr__->NumMips = param_7;
  __return_storage_ptr__->Flags = param_4 | param_5;
  __return_storage_ptr__->DebugName = L"UnknownTexture2D";
  (__return_storage_ptr__->Extent).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  __return_storage_ptr__->Depth = 0;
  __return_storage_ptr__->ArraySize = 1;
  __return_storage_ptr__->NumSamples = '\x01';
  __return_storage_ptr__->Format = param_2;
  if ((param_1.field0_0x0._0_4_ == 0) || (iStackX_14 == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewDesc.Is2DTexture()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0x7a,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPooledRenderTargetDesc *)(*pcVar2)();
      return pFVar5;
    }
  }
  return __return_storage_ptr__;
}

// CreateVolumeDesc @ 14490a560

FPooledRenderTargetDesc * __cdecl
FPooledRenderTargetDesc::CreateVolumeDesc
          (FPooledRenderTargetDesc *__return_storage_ptr__,uint param_1,uint param_2,ushort param_3,
          EPixelFormat param_4,FClearValueBinding *param_5,ETextureCreateFlags param_6,
          ETextureCreateFlags param_7,bool param_8,uchar param_9,bool param_10)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  TIntPoint<int>_u_0 TVar4;
  bool bVar5;
  FPooledRenderTargetDesc *pFVar6;
  
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSizeX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0xb3,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPooledRenderTargetDesc *)(*pcVar2)();
      return pFVar6;
    }
  }
  if (param_2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSizeY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0xb4,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPooledRenderTargetDesc *)(*pcVar2)();
      return pFVar6;
    }
  }
  __return_storage_ptr__->DebugName = L"UnknownTexture";
  *(undefined8 *)&__return_storage_ptr__->ClearValue = 1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ClearValue).Value + 4) = 0;
  (__return_storage_ptr__->ClearValue).Value.Color[3] = 0.0;
  __return_storage_ptr__->Flags = None;
  __return_storage_ptr__->Format = PF_Unknown;
  __return_storage_ptr__->UAVFormat = PF_Unknown;
  (__return_storage_ptr__->Extent).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  __return_storage_ptr__->Depth = 0;
  __return_storage_ptr__->ArraySize = 1;
  __return_storage_ptr__->NumMips = '\0';
  __return_storage_ptr__->NumSamples = '\x01';
  (__return_storage_ptr__->AliasableFormats).AllocatorInstance.SecondaryData =
       (ForElementType<EPixelFormat>)0x0;
  __return_storage_ptr__->FastVRAMPercentage = 0xff;
  (__return_storage_ptr__->AliasableFormats).ArrayNum = 0;
  (__return_storage_ptr__->AliasableFormats).ArrayMax = 1;
  (__return_storage_ptr__->field13_0x58).PackedBits = '\0';
  uVar3 = *(undefined8 *)((longlong)&param_5->Value + 4);
  *(undefined8 *)&__return_storage_ptr__->ClearValue = *(undefined8 *)param_5;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ClearValue).Value + 4) = uVar3;
  fVar1 = (param_5->Value).Color[3];
  (__return_storage_ptr__->field13_0x58).PackedBits =
       (__return_storage_ptr__->field13_0x58).PackedBits & 0xfc;
  (__return_storage_ptr__->ClearValue).Value.Color[3] = fVar1;
  TVar4._s_0.Y = param_2;
  TVar4._s_0.X = param_1;
  (__return_storage_ptr__->Extent).field0_0x0 = TVar4;
  __return_storage_ptr__->NumMips = param_9;
  __return_storage_ptr__->Format = param_4;
  __return_storage_ptr__->Flags = param_6 | param_7;
  __return_storage_ptr__->DebugName = L"UnknownTextureVolume";
  __return_storage_ptr__->Depth = param_3;
  __return_storage_ptr__->ArraySize = 1;
  __return_storage_ptr__->NumSamples = '\x01';
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewDesc.Is3DTexture()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPooledRenderTargetDesc *)(*pcVar2)();
      return pFVar6;
    }
  }
  return __return_storage_ptr__;
}

// IsValid @ 14492a610

bool __thiscall FPooledRenderTargetDesc::IsValid(FPooledRenderTargetDesc *this)

{
  uchar uVar1;
  
  uVar1 = this->NumSamples;
  if (uVar1 == '\x01') {
    if ((this->Extent).field0_0x0._s_0.X == 0) {
      return false;
    }
  }
  else {
    if (7 < (byte)(uVar1 - 1)) {
      return false;
    }
    if ((this->Extent).field0_0x0._s_0.X == 0) {
      return false;
    }
    if ((this->Extent).field0_0x0._s_0.Y == 0) {
      return false;
    }
    if (this->Depth != 0) {
      return false;
    }
    if (((this->field13_0x58).PackedBits & 2) != 0) {
      return false;
    }
  }
  if ((((this->NumMips != '\0') && ((byte)(uVar1 - 1) < 0x10)) && (this->Format != PF_Unknown)) &&
     (((((uint)(int)this->Flags >> 0x11 & 1) != 0 || (2 < (int)GMaxRHIFeatureLevel)) ||
      (GMaxRHIFeatureLevel == ES3_1)))) {
    return true;
  }
  return false;
}

// GetSize @ 144c46930

TIntVector3<int> * __thiscall
FPooledRenderTargetDesc::GetSize
          (FPooledRenderTargetDesc *this,TIntVector3<int> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Extent).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->Extent).field0_0x0._s_0.Y;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (uint)this->Depth;
  return __return_storage_ptr__;
}

// operator= @ 1456675e0

FPooledRenderTargetDesc * __thiscall
FPooledRenderTargetDesc::operator=(FPooledRenderTargetDesc *this,FPooledRenderTargetDesc *param_1)

{
  ForElementType<EPixelFormat> FVar1;
  undefined8 uVar2;
  byte bVar3;
  
  this->DebugName = param_1->DebugName;
  uVar2 = *(undefined8 *)((longlong)&(param_1->ClearValue).Value + 4);
  *(undefined8 *)&this->ClearValue = *(undefined8 *)&param_1->ClearValue;
  *(undefined8 *)((longlong)&(this->ClearValue).Value + 4) = uVar2;
  (this->ClearValue).Value.Color[3] = (param_1->ClearValue).Value.Color[3];
  this->Flags = param_1->Flags;
  this->Format = param_1->Format;
  this->UAVFormat = param_1->UAVFormat;
  (this->Extent).field0_0x0 = (param_1->Extent).field0_0x0;
  this->Depth = param_1->Depth;
  this->ArraySize = param_1->ArraySize;
  this->NumMips = param_1->NumMips;
  this->NumSamples = param_1->NumSamples;
  this->FastVRAMPercentage = param_1->FastVRAMPercentage;
  if (&this->AliasableFormats != &param_1->AliasableFormats) {
    if ((param_1->AliasableFormats).AllocatorInstance.SecondaryData ==
        (ForElementType<EPixelFormat>)0x0) {
      (this->AliasableFormats).AllocatorInstance.InlineData[0] =
           (param_1->AliasableFormats).AllocatorInstance.InlineData[0];
    }
    FVar1 = (this->AliasableFormats).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->AliasableFormats).AllocatorInstance.SecondaryData =
         (param_1->AliasableFormats).AllocatorInstance.SecondaryData;
    (param_1->AliasableFormats).AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    (this->AliasableFormats).ArrayNum = (param_1->AliasableFormats).ArrayNum;
    (this->AliasableFormats).ArrayMax = (param_1->AliasableFormats).ArrayMax;
    (param_1->AliasableFormats).ArrayNum = 0;
    (param_1->AliasableFormats).ArrayMax = 1;
  }
  bVar3 = ((this->field13_0x58).PackedBits ^ (param_1->field13_0x58).PackedBits) & 1 ^
          (this->field13_0x58).PackedBits;
  (this->field13_0x58).PackedBits = bVar3;
  bVar3 = (bVar3 ^ (param_1->field13_0x58).PackedBits) & 2 ^ bVar3;
  (this->field13_0x58).PackedBits = bVar3;
  (this->field13_0x58).PackedBits =
       (bVar3 ^ (param_1->field13_0x58).PackedBits) & 3 ^ (param_1->field13_0x58).PackedBits;
  this->field13_0x58 = param_1->field13_0x58;
  return this;
}

// GenerateInfoString @ 145870210

FString * __thiscall
FPooledRenderTargetDesc::GenerateInfoString
          (FPooledRenderTargetDesc *this,FString *__return_storage_ptr__)

{
  ETextureCreateFlags EVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FString local_38;
  FString local_28;
  
  GetPixelFormatString(this->Format);
  ::FString::FString(&local_38,L"");
  EVar1 = this->Flags;
  if ((EVar1 & RenderTargetable) != None) {
    ::FString::AppendChars(&local_38,L" RT",3);
  }
  if ((EVar1 & SRGB) != None) {
    ::FString::AppendChars(&local_38,L" sRGB",5);
  }
  if (1 < this->NumSamples) {
    ::FString::PrintfImpl(&local_28,L" %dxMSAA");
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((EVar1 >> 0x11 & 1) != 0) {
    ::FString::AppendChars(&local_38,L" UAV",4);
  }
  if ((EVar1 >> 0x15 & 1) != 0) {
    ::FString::AppendChars(&local_38,L" VRam",5);
  }
  FVar2.Data = (FScriptContainerElement *)0x0;
  if (((this->field13_0x58).PackedBits & 1) != 0) {
    ::FString::PrintfImpl(&local_28,L"[%d]");
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  if ((this->Extent).field0_0x0._s_0.X == 0) {
LAB_1458703e5:
    if (((this->field13_0x58).PackedBits & 2) == 0) {
      ::FString::FString(__return_storage_ptr__,L"(INVALID)");
      goto LAB_14587042c;
    }
  }
  else {
    iVar3 = (this->Extent).field0_0x0._s_0.Y;
    if (((iVar3 != 0) && (this->Depth == 0)) && (((this->field13_0x58).PackedBits & 2) == 0)) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"(2D%s %dx%d %s%s)");
      goto LAB_14587042c;
    }
    if ((iVar3 == 0) || (this->Depth == 0)) goto LAB_1458703e5;
    if (((this->field13_0x58).PackedBits & 2) == 0) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"(3D%s %dx%dx%d %s%s)");
      goto LAB_14587042c;
    }
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"(Cube%s %d %s%s)");
LAB_14587042c:
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

